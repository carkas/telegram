         <?php  
               include_once 'conexao.php';		
                $stID=$_POST['stID'];
                $name=$_POST['name'];

$sql = $conn->query("SELECT *  FROM stu WHERE stID='$stID' AND name='$name'");   
  
$conn->set_charset("utf8");
if (mysqli_num_rows($sql)>0)
  {
  echo "gblan vjoud darad";
}
else{

$sql2=$conn->query("INSERT INTO stu(stID,name) VALUES('$stID','$name')");

  if($sql2){
          echo "registerid";
            }
            else{
                  echo "not regesterid";
                }


   }


?>  

