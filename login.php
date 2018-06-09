         <?php  
		
$conn = new mysqli('localhost', 'root','','student');   
  
$conn->set_charset("utf8");
if($conn->connect_error){
echo "No";  
           } 
else{
echo "yes";  

}
?>  
