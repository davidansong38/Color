 #include"ipaddr/ipaddress"
 class SchoolManagementSystemForStudents;
 class StudentDB;

  namespace{
    namespace School_ManagementSystemForStudents{
      template<class StudName, typename StudID = unsigned long, class StudClassName = std::string, typename StudClassID = short, bool SchooLStudDBDdescriptor = false>
      class SchoolManagementSystemForStudents{
        private:
         StudName StudentName;
         StudID StudentID;
         StudClassName StudentClassName;
         StudClassID StudentClassID;
        protected:
          enum{ 
              SCIENCE_CLASS_ID,
              GENERAL_ART_CLASS_ID,
              BUSINESS_CLASS_ID,
              VISUAL_ART_CLASS_ID,
              HOME_ECONOMICS_STUDENT_ID,
              AGRICULTURE_SCIENCE_STUDENT_ID
           }classID;
         enum class StudDefIDs{
           SCIENCE_STUDENT_ID,/*This student takes the default Value of the enumerator*/
           GENERAL_ART_STUDENT_ID = 00000001U,
           BUSINESS_STUDENT_ID = 0x000002u,
           VISUAL_ART_STUDENT_ID = 00000313L,
           HOME_ECONOMICS_STUDENT_ID = 0032233u,
           AGRICULTURE_SCIENCE_STUDENT_ID
         };
        public:
          SchoolManagementSystemForStudents() = default;
          SchoolManagementSystemForStudents(const  SchoolManagementSystemForStudents&) = delete;
          SchoolManagementSystemForStudents& operator=(const  SchoolManagementSystemForStudents&) = delete;
        public:
         SchoolManagementSystemForStudents(StudName StudentName, StudClassName = "Science Class");
         virtual ~SchoolManagementSystemForStudents();

         friend class StudentDB;
         friend void StudendtDatabaseMessenger(void);
      };
    }
    namespace SchoolDatabaseSystemForStudents = School_ManagementSystemForStudents;
}

template<class StudName, typename StudID, class StudClassName , typename StudClassID, bool SchooLStudDBDdescriptor>
::SchoolDatabaseSystemForStudents::SchoolManagementSystemForStudents<StudName, StudID, StudClassName,StudClassID,SchooLStudDBDdescriptor>::SchoolManagementSystemForStudents(StudName StudentName, StudClassName SClassName) : StudentName(new StudName(StudentName)), StudentClassName(SClassName), StudentID(000000){
   StudentClassID = ~(000000)<<1;
   std::cout<<"School Database Management System initializing............."<<std::endl;
}

template<class StudName, typename StudID, class StudClassName , typename StudClassID, bool SchooLStudDBDdescriptor>
::SchoolDatabaseSystemForStudents::SchoolManagementSystemForStudents<StudName, StudID, StudClassName,StudClassID,SchooLStudDBDdescriptor>::~SchoolManagementSystemForStudents(){
  delete StudentName;
}
