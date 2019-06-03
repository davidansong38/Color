<?php 
 session_start();
 $_user_id = "Localhost";
 $user_value = "HTIha983939354r732mk2oi";
 $user_cookie_expire_date = 180;
 $port_no = 1320;
 setcookie($_user_id, $user_value, $user_cookie_expire_date, "", $port_no);
?>

<?php
  $servername = "localhost/127.0.01";
  $username = "root";
  $password = "d98393jdkdkidie";
  $dbname = "dbacarcollections_Online_Customer_Req";
  
  $sys_server_conn = new mysqli($servernam,$username,$password,$dbname);
  if($sys_server_conn->connect_error){
      die("Please connection to server not initiated...");
  }
  else{
      echo "Connection to www.dbacarcollections.ueuo.com server";
  }
  
  $sys_server_sql = "CREATE DATABASE dbacarcollections_Online_Customer_Req;";
  
  if($sys_server_conn->query($sys_server_sql) == TRUE){
      print_r("System was able to request service....");
      
      $firstName = "First_Name varchar(2550)";
      $middle_name = "Middle_Name varchar(89)";
      $lname = "Last_Name nvarchar(125) not null unique";
      $customer_id = "Customer_ID BIGINT not null unique AUTO_INCREMENT";
      $customer_req = "Customer_request varchar";
      $prices_service = "Prices float null unique";
      
      $sys_server_conn = "Create table dbacarcollections_Service($firstName, $middle_name, $lname, $customer_id, $customer_req, $prices_req);";
     if(!$sys_server_con){
         
         print("Table was not created...");
     }
     else{
         echo "Table created successfully...";
         $sys_data_manager = "Insert Into dbacarcollections_Service($firstName, $middle_name, $lname, $customer_req, $prices_req) values('zindex', 'wilson', 'bormar', 'Not yet')";
         if(!$sys_data_manager){
             print_r("Server not responding to post");
         }
         else{
             echo "Data inserted successfully.....";
             $sys_data_req = "Select $customer_req from dbacarcollections_Service where $firstName = 'zindex' and $lname = 'bormar' or $middle = 'wilson';";
             if($sys_data_req == FALSE){
                 echo "Service not found";
             }
             else{
                 print("Please wait whiles Service loading......");
                 $sys_data_req = "Alter table dbacarcollections_Service set $prices_req = 0.00";
             }
     }
   }
  }
  else{
      echo "System wasn't able to request service....";
  }
  
  $greetings =  define("GREETING", "Happy birthday to Facebook Users", false);
  
  echo GREETING;
  
  $_COOKIE[$_user_id] = $user_value;
  
  if(!$_COOKIE[$_user_id] | empty($_COOKIE[$_user_id])){
      
      die("Cookie not enabled on Localhost....");
  }
  else{
      echo "Cookie enabled on Localhost....";
  }
  
  $_SESSION["user_products"] = "Notebooks Laptops";
  
  if(empty($_SESSION["user_products"])){
      print_r("Session not initiated by both models...");
  }
  else{
      print("Session initiated by both models....");
  }
 
 print_r($_SESSION["user_products"]);
 
 $system_name = "Localhost";
 $system_ip = "Ip address";
 $system_port_no = "Port";
 
 $_SYSTEM_ = array($system_name => " PC/192.162.10.1", $system_ip => "192.162.10.1", $system_port_no => 12991,
            $sys_date_format_1 = array("system_date1" => "01-22-2020", "system_date2" => "20/11/1901"));
 
 #print($_SYSTEM_[$sys_date_format_1][]);
 
switch(110){
 case 90:
 case 99:
 case 23:
    print("Connection to server is not allowed for now....");
    break;
 case 89:
    echo "Connection to server is disconnected...";
    break;
 case 33:
    die("Connection to server is unavailable...");
    break;
 default:
    return print_r(" @root:/system/shutdown/process_area/.././..");
}
session_destroy();
?>
