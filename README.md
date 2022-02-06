<h1><b>Phonebook Using c++ and MySQL</b></h1>
Hello guys this simple implemention of dbms in c++, this project is created using Dev c++,CodeBlocks And Xampp server Applications, and for successful applications run please refer following steps
<br>
<h3>Here steps to Folllow :</h3>
  1. install the following software in given version 
  <ul>
  <li>Dev C++   <a href="https://sourceforge.net/projects/orwelldevcpp/files/latest/download">Download 6.1</a></li>
  <li>CodeBlocks <a href="https://sourceforge.net/projects/codeblocks/files/latest/download">Download 16.1</a></li>
  <li>Xammp server <a href="https://www.apachefriends.org/xampp-files/7.4.27/xampp-windows-x64-7.4.27-2-VC15-installer.exe">Download 8.1.2</a></li>
</ul>
<b>try to install given version of IDE it won't give certain error(i.e new codeblocks ide gives Linker error)</b>
<br>
<hr>
 2. Add following files into your IDE folders 
 <br>
 >add mysqllib.a file which i have uploaded in files section to following location of your dev c++ IDE
 
 ![Error](https://github.com/ChemoAlpha/PhoneBook-Mini-Project-/blob/main/Files/Screenshot%20(7).png )
<br>
<hr>
 >add all files in MysqlHeaders to following location
 <br>
 
 
 ![Error](https://github.com/ChemoAlpha/PhoneBook-Mini-Project-/blob/main/Files/Screenshot%20(8).png)
 
 
 <hr>
 <br>
 >now add mysqlib location path in codeblocks linker as follows
 PATH: Project -->Build Options -->Linker settings-->add
 add the file mysqllib.a file path here as follows
 <br>
 
 
 
 ![Error](https://github.com/ChemoAlpha/PhoneBook-Mini-Project-/blob/main/Files/Screenshot%20(9).png)
 
 
 
 <br>
 <hr>
 >same as above add PATH of Include folder of Dev c++ where copied all files into search settings in build options of codeblcoks




 ![Error](https://github.com/ChemoAlpha/PhoneBook-Mini-Project-/blob/main/Files/Screenshot%20(10).png)
 
 3. now install xampp IDE then create databse named "Phonebook " in it and add table named "users" with follwoing schemea
 
 
 <hr>
 <br>
 
 
 ![Error](https://github.com/ChemoAlpha/PhoneBook-Mini-Project-/blob/main/Files/Screenshot%20(11).png)
 
 
 
 
 Now if followed step correctly you would be able to run this project with any problems
 
 <u>here are few tips that might help you with some problmes if occured  :</u>
 <ul>
  <li>If you are unable to run apache server in xammp then open your cmd as adminster and run command "net stop http" it'll help</li>
  <li>check the link setting everytime before running application</li>
  <li>don't add change databse scheme it might give you an error</li>
  <li>if your codeblocks is unable to find GNU GCC compiler then goto settings -->compiler-->Reset default its resolve your issue</li>
</ul>
 <br>
 
 hope its compiled successsfully  and you find it helpful !!!;
 
 
<h3>output screenshots</h3>
<hr>

![Error](https://github.com/ChemoAlpha/PhoneBook-Mini-Project-/blob/main/Files/Screenshot%20(12).png)






![](https://github.com/ChemoAlpha/PhoneBook-Mini-Project-/blob/main/Files/Screenshot%20(13).png)




 
