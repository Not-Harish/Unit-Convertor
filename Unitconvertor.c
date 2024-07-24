#include<stdio.h>
#include<string.h>
#include<ctype.h>
//function for length convertor
void length(){
printf("LENGTH CONVERTOR\n");
printf("---------------\n");
float m1;
char n1[50],n2[50];
printf("1.nanometer\n");
printf("2.micrometer\n");
printf("3.millimeter\n");
printf("4.centimeter\n");
printf("5.meter\n");
printf("6.kilometer\n");
printf("7.feet\n");
printf("8.yard\n");
printf("9.inch\n");
printf("enter the input unit:");
scanf("%s",&n1);
strlwr(n1);
printf("enter the input value:");
scanf("%f",&m1);
printf("enter the unit to be converted:");
scanf("%s",&n2);
strlwr(n2);
if(strcmp(n1,n2)==0){
printf("both the units are same");}
else if(strcmp(n1,"kilometer")==0){
if(strcmp(n2,"nanometer")==0)
printf("kilometer:%.2f\nnanometer:%lf",m1,m1*1000000000000.0);
else if(strcmp(n2,"micrometer")==0)
printf("kilomter:%.2f\nmicrometer:%lf",m1,m1*1000000000.0);
else if(strcmp(n2,"millimeter")==0)
printf("kilometer:%.2f\nmillimeter:%lf",m1,m1*1000000.0);
else if(strcmp(n2,"centimeter")==0)
printf("kilometeer:%.2f\ncentimeter:%lf",m1,m1*100000.0);
else if(strcmp(n2,"meter")==0)
printf("kilometer:%.2f\nmeter:%lf",m1,m1*1000.0);
else if(strcmp(n2,"feet")==0)
printf("kilometer:%.2f\nfeet:%lf",m1,m1*3280.83989501);
else if(strcmp(n2,"yard")==0)
printf("kilometer:%.2f\nyard:%lf",m1,m1*1093.61329834);
else if(strcmp(n2,"inch")==0)
printf("enter the input value:");
scanf("%f",&m1);
printf("enter the unit to be converted:");
scanf("%s",&n2);
strlwr(n2);
if(strcmp(n1,n2)==0){
printf("both the units are same");}
else if(strcmp(n1,"kilometer")==0){
if(strcmp(n2,"nanometer")==0)
printf("kilometer:%.2f\nnanometer:%lf",m1,m1*1000000000000.0);
else if(strcmp(n2,"micrometer")==0)
printf("kilomter:%.2f\nmicrometer:%lf",m1,m1*1000000000.0);
else if(strcmp(n2,"millimeter")==0)
printf("kilometer:%.2f\nmillimeter:%lf",m1,m1*1000000.0);
else if(strcmp(n2,"centimeter")==0)
printf("kilometeer:%.2f\ncentimeter:%lf",m1,m1*100000.0);
else if(strcmp(n2,"meter")==0)
printf("kilometer:%.2f\nmeter:%lf",m1,m1*1000.0);
else if(strcmp(n2,"feet")==0)
printf("kilometer:%.2f\nfeet:%lf",m1,m1*3280.83989501);
else if(strcmp(n2,"yard")==0)
printf("kilometer:%.2f\nyard:%lf",m1,m1*1093.61329834);
else if(strcmp(n2,"inch")==0)
}
else if(strcmp(n1,"millimeter")==0){
if(strcmp(n2,"nanometer")==0)
printf("millimeter:%.2f\nnanometer:%lf",m1,m1*1000000.0);
else if(strcmp(n2,"micrometer")==0)
printf("millimeter:%.2f\nmicrometer:%lf",m1,m1*1000.0);
else if(strcmp(n2,"centimeter")==0)
printf("millimeter:%.2f\ncentimeter:%lf",m1,m1*0.1);
else if(strcmp(n2,"meter")==0)
printf("millimeter:%.2f\nmeter:%lf",m1,m1*0.001);
else if(strcmp(n2,"kilometer")==0)
printf("millimeter:%.2f\nkilometer:%lf",m1,m1*0.001);
else if(strcmp(n2,"feet")==0)
printf("millimeter:%.2f\nfeet:%lf",m1,m1*0.00328084);
else if(strcmp(n2,"yard")==0)
printf("millimeter:%.2f\nyard:%lf",m1,m1*0.00109361);
else if(strcmp(n2,"inch")==0)
printf("millimeter:%.2f\ninch:%lf",m1,m1*0.03937008);
else
printf("enter the unit corrrectly");
}
else if(strcmp(n1,"centimeter")==0){
if(strcmp(n2,"nanometer")==0)
printf("centimeter:%.2f\nanometer:%lf",m1,m1*10000000.0);
else if(strcmp(n2,"micrometer")==0)
printf("centimeter:%.2f\nmicrometer:%lf",m1,m1*10000);
else if(strcmp(n2,"millimeter")==0)
printf("centimeter:%.2f\nmillimeter:%lf",m1,m1*10);
else if(strcmp(n2,"meter")==0)
printf("centimeter:%.2f\nmeter:%lf",m1,m1*0.01);
else if(strcmp(n2,"kilometer")==0)
printf("centimeter:%.2f\nkilometer:%lf",m1,m1*0.00001);
else if(strcmp(n2,"yard")==0)
printf("centimeter:%.2f\nyard:%lf",m1,m1*0.01093613);
else if(strcmp(n2,"feet")==0)
printf("centimeter:%.2f\nfeet:%lf",m1,m1*0.03280840);
else if(strcmp(n2,"inch")==0)
printf("centimeter:%.2f\ninch:%lf",m1,m1*0.39370079);
else
printf("enter the unit corrrectly");
}
else if(strcmp(n1,"nanometer")==0){
if(strcmp(n2,"micrometer")==0)
printf("nanometer:%.2f\nmicrometer:%lf",m1,m1*0.001);
else if(strcmp(n2,"millimeter")==0)
printf("nanometer:%.2f\nmillimeter:%lf",m1,m1* 0.000001)
else if(strcmp(n2,"centimeter")==0)
printf("nanometer:%.2f\ncentimeter:%lf",m1,m1*0.0000001);
else if(strcmp(n2,"meter")==0)
printf("nanometer:%.2f\nmeter:%lf",m1,m1*0.000000001);
else if(strcmp(n2,"kilometer")==0)
printf("nanometer:%.2f\nkilometer:%lf",m1,m1*0.000000000001);
else if(strcmp(n2,"feet")==0)
printf("nanometer:%.2f\nfeet:%lf",m1,m1*0.00000000328084);
else if(strcmp(n2,"yard")==0)
printf("nanometer:%.2f\nyard:%lf",m1,m1*0.00000000109361);
else if(strcmp(n2,"inch")==0)
printf("nanometer:%.2f\ninch:%lf",m1,m1*0.00000003937008);
else
printf("enter the unit corrrectly");
}
else if(strcmp(n1,"micrometer")==0){
if(strcmp(n2,"nanometer")==0)
printf("micrometer:%.2f\nnanometer:%lf",m1,m1*1000.0);
else if(strcmp(n2,"millimeter")==0)
printf("micrometer:%.2f\nmillimeter:%lf",m1,m1*0.001);
else if(strcmp(n2,"centimeter")==0)
printf("micrometer:%.2f\ncentimeter:%lf",m1,m1*0.0001);
else if(strcmp(n2,"meter")==0)
printf("micrometer:%.2f\nmeter:%lf",m1,m1*0.000001);
else if(strcmp(n2,"kilometer")==0)
printf("micrometer:%.2f\nkilometer:%lf",m1,m1*0.000000001);
else if(strcmp(n2,"feet")==0)
printf("micrometer:%.2f\nfeet:%lf",m1,m1*0.0000032808);
else if(strcmp(n2,"yard")==0)
printf("micrometer:%.2f\nyard:%lf",m1,m1*0.0000010936);
else if(strcmp(n2,"inch")==0)
printf("micrometer:%.2f\ninch:%lf",m1,m1*0.00003937);
else
printf("enter the unit corrrectly");
}
else if(strcmp(n1,"yard")==0){
if(strcmp(n2,"nanometer")==0)
printf("yard:%.2f\nnanometer:%lf",m1,m1*914400000);
else if(strcmp(n2,"micrometer")==0)
printf("yard:%.2f\nmicrometer:%lf",m1,m1*914400);
else if(strcmp(n2,"millimeter")==0)
printf("yard:%.2f\nmillimeter:%lf",m1,m1*914.4);
else if(strcmp(n2,"centimeter")==0)
printf("yard:%.2f\ncentimeter:%lf",m1,m1*91.44);
else if(strcmp(n2,"meter")==0)
printf("yard:%.2f\nmeter:%lf",m1,m1*0.9144);
else if(strcmp(n2,"kilometer")==0)
printf("yard:%.2f\nkilometer:%lf",m1,m1*0.000914);
else if(strcmp(n2,"feet")==0)
printf("yard:%.2f\nfeet:%lf",m1,m1*3.0);
else if(strcmp(n2,"inch")==0)
printf("yard:%.2f\ninch:%lf",m1,m1*36.0);
else
printf("enter the unit corrrectly");
}
else if(strcmp(n1,"feet")==0){
if(strcmp(n2,"nanometer")==0)
printf("feet:%.2f\nnanometer:%lf",m1,m1*304800000.0);
else if(strcmp(n2,"micrometer")==0)
printf("feet:%.2f\nmicrometer:%lf",m1,m1*304800.0);
else if(strcmp(n2,"millimeter")==0)
printf("feet:%.2f\nmillimeter:%lf",m1,m1*304.8);
else if(strcmp(n2,"centimeter")==0)
printf("feet:%.2f\ncentimeter:%lf",m1,m1*30.48);
else if(strcmp(n2,"meter")==0)
printf("feet:%.2f\nmeter:%lf",m1,m1*0.3048);
else if(strcmp(n2,"kilometer")==0)
printf("feet:%.2f\nkilometer:%lf",m1,m1*0.0003048);
else if(strcmp(n2,"yard")==0)
16
printf("feet:%.2f\nyard:%lf",m1,m1*0.33333333333333);
else if(strcmp(n2,"inch")==0)
printf("foot:%.2f\ninch:%lf",m1,m1*12.00000000000000);
else
printf("enter the unit corrrectly");
}
else if(strcmp(n1,"inch")==0){
if(strcmp(n2,"nanometer")==0)
printf("inch:%.2f\nnanometer:%lf",m1,m1*25400000.0);
else if(strcmp(n2,"micrometer")==0)
printf("inch:%.2f\nmicrometer:%lf",m1,m1*25400.0);
else if(strcmp(n2,"millimeter")==0)
printf("inch:%.2f\nmillimeter:%lf",m1,m1*25.4);
else if(strcmp(n2,"centimeter")==0)
printf("inch:%.2f\ncentimeter:%lf",m1,m1*2.54);
else if(strcmp(n2,"meter")==0)
printf("inch:%.2f\nmeter:%lf",m1,m1*0.0254);
else if(strcmp(n2,"kilometer")==0)
printf("inch:%.2f\nkilometer:%lf",m1,m1*0.0000254);
else if(strcmp(n2,"yard")==0)
printf("inch:%.2f\nyard:%lf",m1,m1*0.02777777777778);
else if(strcmp(n2,"feet")==0)
printf("inch:%.2f\nfeet:%lf",m1,m1*0.08333333333333);
else
printf("enter the unit corrrectly");
}
else
printf("enter the unit corrrectly");
}
//function for temperature convertor
void temp(){
printf("TEMPERATURE CONVERTOR\n");
printf("---------------\n");
float m1;
char n1[50],n2[50];
printf("1.celsius");
printf("\n2.fahrenheit");
printf("\n3.kelvin");
printf("\n4.rakine");
printf("\n5.reaumur\n");
printf("enter the input unit:");
scanf("%s",&n1);
strlwr(n1);
printf("enter the input temperature:");
scanf("%f",&m1);
printf("enter the unit to be converted:");
scanf("%s",&n2);
strlwr(n2);
if(strcmp(n1,n2)==0){
printf("both the units are same");}
else if(strcmp(n1,"celsius")==0){
if(strcmp(n2,"fahrenheit")==0)
printf("celsius:%.2f\nfahrenheit:%lf",m1,(m1*9/5)+32);
else if(strcmp(n2,"kelvin")==0)
printf("celsius:%.2f\nkelvin:%lf",m1,m1+273.15);
else if(strcmp(n2,"rakine")==0)
printf("celsius:%.2f\nrakine:%lf",m1,(m1+273.15)*9/5);
else if(strcmp(n2,"reaumur")==0)
printf("celsius:%.2f\nreaumur:%lf",m1,m1*4/5);
else
printf("enter the unit corrrectly");
}
else if(strcmp(n1,"fahrenheit")==0){
if(strcmp(n2,"celsius")==0)
printf("fahrenheit:%.2f\ncelsius:%lf",m1,(m1-32)*5/9);
else if(strcmp(n2,"kelvin")==0)
printf("fahrenheit:%.2f\nkelvin:%lf",m1,(m1+459.67)*5/9);
else if(strcmp(n2,"rakine")==0)
printf("fahrenheit:%.2f\nrakine:%lf",m1,m1+459.67);
else if(strcmp(n2,"reaumur")==0)
printf("fahrenheit:%.2f\nreaumur:%lf",m1,(m1-32)*4/9);
else
printf("enter the unit corrrectly");
}
else if(strcmp(n1,"kelvin")==0){
if(strcmp(n2,"celsius")==0)
printf("kelvin:%.2f\ncelsius:%lf",m1,(m1-273.15));
else if(strcmp(n2,"fahrenheit")==0)
printf("kelvin:%.2f\nfahrenheit:%lf",m1,(m1*9/5)-459.67);
else if(strcmp(n2,"rakine")==0)
printf("kelvin:%.2f\nrakine:%lf",m1,m1*9/5);
else if(strcmp(n2,"reaumur")==0)
printf("kelvin:%.2f\nreaumur:%lf",m1,(m1-273.15)*4/5);
else
printf("enter the unit corrrectly");
}
else if(strcmp(n1,"rakine")==0){
if(strcmp(n2,"celsius")==0)
printf("rakine:%.2f\ncelsius:%lf",m1,(m1-491.67)*5/9);
else if(strcmp(n2,"fahrenheit")==0)
printf("rakine:%.2f\nfahrenheit:%lf",m1,m1-459.67);
else if(strcmp(n2,"kelvin")==0)
printf("rakine:%.2f\nkelvin:%lf",m1,m1*5/9);
else if(strcmp(n2,"reaumur")==0)
printf("rakine:%.2f\nreaumur:%lf",m1,(m1-491.67)*4/9);
else
printf("enter the unit corrrectly");
}
else if(strcmp(n1,"reaumur")==0){
if(strcmp(n2,"celsius")==0)
printf("reaumur:%.2f\ncelsius:%lf",m1,m1*5/4);
else if(strcmp(n2,"fahrenheit")==0)
printf("reaumur%.2f\nfahrenheit:%lf",m1,(m1*9/4)+32);
else if(strcmp(n2,"kelvin")==0)
printf("reaumur%.2f\nkelvin:%lf",m1,m1*5/4+273.15);
else if(strcmp(n2,"rakine")==0)
printf("reaumur%.2f\nrakine:%lf",m1, (m1*9/4)+491.67);
else
printf("enter the unit corrrectly");
}
else
printf("enter the unit corrrectly");
}
int main(){
int n;
printf("WELCOME TO CONVERTOR\n");
printf("---------------\n");
printf("1.LENGTH CONVERTOR\n");
printf("2.TMPERATURE CONVERTOR\n");
printf("3.MASS CONVERTOR\n");
printf("4.TIME CONVERTOR\n");
printf("5.BMI CALCULATOR\n");
printf("---------------\n");
printf("enter the number to open the particular convertor:");
scanf("%d",&n);
printf("---------------\n");
switch(n){
case(1):
length();
break;
case(2):
temp();
break;
case(3):
mass();
break;
case(4):
22
time();
break;
case(5):
bmi();
break;
default:
printf("the number is invalid");
}
return 0;
}
