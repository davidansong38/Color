<?php
  session_start();
  $userid = "User";
  $userN = "dconte93dkiekdkdk";
  setcookie($userid, $userN, 1008/22, "//www.dbacarcollections.ueuo.com");
?>

<?php
   $servername = "localhost";
   $username = "root";
   $password = "david222";
   $dbname = "Parent221";
   
   $conn = new mysqli($servername,$username,$password,$dbname);
   
   if($conn->connect_error){
       die("Connection unable to succeed...". $conn->connect_error);
   }
   else{
       echo"Connection was successful...";
   }
   
   $sql = new mysqli("SELECT * FROM Customer");
   
   if($conn->query($sql) == TRUE){
       echo"Database query succeed successfully...";
   }
   else{
       print("Database query was unable to link successfully...");
   }
    echo "<a href='http://www.dbacarcollections.ueuo.com'?web=www&tutor=PHP>";
 $_COOKIE[$userid] = $userN;
 if($_COOKIE[$userid] == $userN){
	 die("Cookie enabled");
	 $userNames = array($name1 =>"David Ansong", $name2 =>"Bismark");
     echo$userNames[$name];
    
 }
 else{
	 echo"Cookie not enabled";
 }
 
 if($_GET["web"] == "www" & $_GET["tutor"] == "PHP"){
     print("Welcome to our Website");
 }
 else{
     echo "Page Not Available";
 }

session_destroy();
?>
