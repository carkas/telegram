         <?php  
               include_once 'conexao.php';		
                $stID=$_GET['stID'];
                $name=$_GET['name'];

$sql = $conn->query("SELECT * FROM stu WHERE stID='$stID' AND name='$name'");   
  
$conn->set_charset("utf8");
if (mysqli_num_rows($sql)>0)
  {
  echo "molaali";
}
?>  

