
<html>
<head>
<style>
#customers {
  font-family: "Trebuchet MS", Arial, Helvetica, sans-serif;
  border-collapse: collapse;
  width: 100%;
}

#customers td, #customers th {
  border: 1px solid #ddd;
  padding: 8px;
}

#customers tr:nth-child(even){background-color: #f2f2f2;}

#customers tr:hover {background-color: #ddd;}

#customers th {
  padding-top: 12px;
  padding-bottom: 12px;
  text-align: left;
  background-color: #4CAF50;
  color: white;
}
</style>
</head>
<body>

<?php
if(!isset($_SESSION)) { 
session_start();
}
include "auth.php";
include "header_voter.php"; 
?>
<h4> Welcome <?php echo $_SESSION['SESS_NAME']; ?> </h4>
<h3>Make a Vote </h3>

<form action="submit_vote.php" name="vote" method="post" id="myform" >
<center><font size='6'> Please Give your Vote to your Desired candidate<BR>
<table id="customers">
<tr>
<th>Candidate Name</th>
<th>Holo gram</th>
</tr>
<td><input type="radio" name="lan" value="rohim">  Mohammad Rohim<BR></td>
<td><img src="1.png"width="128" height="128"></td>
</tr>
<tr>
<td><input type="radio" name="lan" value="korim">Korim Hawlader<BR></td>
<td><img src="2.jpg"width="128" height="128"></td></tr>
<tr>
<td><input type="radio" name="lan" value="mofiz">  Mofiz Ur Rahman <BR></td>
<td><img src="3.jpeg"width="128" height="128"></td></tr>
<tr>
<td><input type="radio" name="lan" value="salam">   Salam Kham<BR></td>
<td><img src="4.png"width="128" height="128"></td></tr>
<tr>
<td><input type="radio" name="lan" value="jabbar">  Jabbar Mia<BR></td>
<td><img src="5.jpeg"width="128" height="128"></td></tr>
</font></center><br>
<?php global $msg; echo $msg; ?>
<?php global $error; echo $error; ?>
<center><input type="submit" value="Submit Vote" name="submit" style="height:30px; width:100px" /></center>
</form>
