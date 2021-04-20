//int BPM=75;
//int PS=129;
//int PD=83;
//int edad=4;
String indicadorBPM,persona,indicadorP;
double seno;
double Amplitud=1;
double desf=0;
double fre=60;
String R;
double per;
int ban=0;
double i=0;
int ban2=0;    
char aa;
String frst;
String a,svl;
int vl;
String BPM, edad, PS, PD,PM;
String Ruido;

void setup() {
  Serial.begin(115200);
}
void loop() {
  //indicadores();
 
  while (ban==0){
  comunica();
  }
 
  //en indicadores sale indicadorBPM,persona,indicadorP
  //entra BPM PS PD edad 
  //indicadores();
  
 // while (Ruido=="si" && ban2==0 ){
  if(Ruido=="si"){
    //aquí entra amplitud desf fre PM 
    //sale señal+Ruido
    Ruid();
    }
  ban=0;
  ban2=0;
  //Serial.println(seno);
}

/*void indicadores(){
    if(edad>=1 && edad<=18){
     persona="El paciente es un niño";
     Serial.println(persona);
     
     if (edad>=1 && edad<3 ){
     if (80 <= BPM && BPM <= 130){
        indicadorBPM="Latidos por minuto normales";
        Serial.println(indicadorBPM); }
     if (BPM<80){
        indicadorBPM="Posible bradicardia (consulta tu médico)";
        Serial.println(indicadorBPM); }
     if (BPM > 130){
        indicadorBPM="Posible Taquicardia (consulta tu médico)";
        Serial.println(indicadorBPM); 
        }
     if(PS>=90 && PS<=100 && PD>=60 && PD<=69){
        indicadorP="Presión Arterial Normal";
        Serial.println(indicadorP);}
     if(PS>100 && PD>=70){
        indicadorP="Presión Arterial Alta(consulta tu médico)";
        Serial.println(indicadorP);} 
     if(PS<90 && PD<60){
        indicadorP="Presión Arterial Baja(consulta tu médico)";
        Serial.println(indicadorP);}      
     }
     
     if (edad>=3 && edad<=5 ){
     if (80 <= BPM && BPM <= 120){   
        indicadorBPM="Latidos por minuto normales";
        Serial.println(indicadorBPM);}  
     if (BPM<80){
        indicadorBPM="Posible bradicardia (consulta tu médico)";
        Serial.println(indicadorBPM); }
     if (BPM > 120){
        indicadorBPM="Posible Taquicardia (consulta tu médico)";
        Serial.println(indicadorBPM);}
     if(PS>=90 && PS<=100 && PD>=60 && PD<=69){
        indicadorP="Presión Arterial Normal";
        Serial.println(indicadorP);}
     if(PS>=101 && PD>=70){
        indicadorP="Presión Arterial Alta(consulta tu médico)";
        Serial.println(indicadorP);} 
     if(PS<90 && PD<60){
        indicadorP="Presión Arterial Baja(consulta tu médico)";
        Serial.println(indicadorP);}
     }
    
     if (edad>=6 && edad<=10 ){
     if (70 <= BPM && BPM <= 110){        
        indicadorBPM="Latidos por minuto normales";
        Serial.println(indicadorBPM);}
     if (BPM<70){
        indicadorBPM="Posible bradicardia (consulta tu médico)";
        Serial.println(indicadorBPM); }        
     if (BPM > 110){
        indicadorBPM="Posible Taquicardia (consulta tu médico)";
        Serial.println(indicadorBPM);    }
     if(PS>=105 && PS<=113 && PD>=66 && PD<=73){
        indicadorP="Presión Arterial Normal";
        Serial.println(indicadorP);}
     if(PS>=114 && PD>=74){
        indicadorP="Presión Arterial Alta(consulta tu médico)";
        Serial.println(indicadorP);} 
     if(PS<105 && PD<66){
        indicadorP="Presión Arterial Baja(consulta tu médico)";
        Serial.println(indicadorP);}
        }
    
     if (edad>=11 && edad<=14 ){
     if (60 <= BPM && BPM <= 105){
        indicadorBPM="Latidos por minuto normales";
        Serial.println(indicadorBPM);} 
     if (BPM<60){
        indicadorBPM="Posible bradicardia (consulta tu médico)";
        Serial.println(indicadorBPM); }        
     if (BPM > 105){
        indicadorBPM="Posible Taquicardia (consulta tu médico)";
        Serial.println(indicadorBPM); }
     if(PS>=110 && PS<=117 && PD>=75 && PD<=80){
        indicadorP="Presión Arterial Normal";
        Serial.println(indicadorP);}
     if(PS>=118 && PD>=74){
        indicadorP="Presión Arterial Alta(consulta tu médico)";
        Serial.println(indicadorP);} 
     if(PS<110 && PD<75){
        indicadorP="Presión Arterial Baja(consulta tu médico)";
        Serial.println(indicadorP);}
        } 
     
     if (edad>14){
     if (60 <= BPM && BPM <= 100){ 
        indicadorBPM="Latidos por minuto normales";
        Serial.println(indicadorBPM); }
     if (BPM<80){
        indicadorBPM="Posible bradicardia (consulta tu médico)";
        Serial.println(indicadorBPM); }        
     if (BPM > 100){
        indicadorBPM="Posible Taquicardia (consulta tu médico)";
        Serial.println(indicadorBPM); }
     if(PS>=117 && PS<=129 && PD>=77 && PD<=79){
        indicadorP="Presión Arterial Normal";
        Serial.println(indicadorP);}
     if(PS>=130 && PD>=80){
        indicadorP="Presión Arterial Alta(consulta tu médico)";
        Serial.println(indicadorP);} 
     if(PS<117 && PD<77){
        indicadorP="Presión Arterial Baja(consulta tu médico)";
        Serial.println(indicadorP);}        
        }     
        }

    if(edad>=19 && edad<=39){
     persona="El paciente es un Adulto joven";
     Serial.println(persona);
    if(edad>19 && edad<=29){ 
     if (60 <= BPM && BPM <= 85){
        indicadorBPM="Latidos por minuto normales";
        Serial.println(indicadorBPM); }
     if (BPM<60){
        indicadorBPM="Posible bradicardia (consulta tu médico)";
        Serial.println(indicadorBPM); }
     if (BPM > 86){
        indicadorBPM="Posible Taquicardia (consulta tu médico)";
        Serial.println(indicadorBPM);  }
     if(PS>=118 && PS<=128 && PD>=77 && PD<=82){
        indicadorP="Presión Arterial Normal";
        Serial.println(indicadorP);}
     if(PS>128 && PD>=82){
        indicadorP="Presión Arterial Alta(consulta tu médico)";
        Serial.println(indicadorP);} 
     if(PS<118 && PD<77){
        indicadorP="Presión Arterial Baja(consulta tu médico)";
        Serial.println(indicadorP);}     
    } 
    
    if(edad>29 && edad<=39){ 
     if (62 <= BPM && BPM <= 85){
        indicadorBPM="Latidos por minuto normales";
        Serial.println(indicadorBPM); }
     if (BPM<62){
        indicadorBPM="Posible bradicardia (consulta tu médico)";
        Serial.println(indicadorBPM); }
     if (BPM > 86){
        indicadorBPM="Posible Taquicardia (consulta tu médico)";
        Serial.println(indicadorBPM); }
     if(PS>=118 && PS<=129 && PD>=78 && PD<=83){
        indicadorP="Presión Arterial Normal";
        Serial.println(indicadorP);}
     if(PS>129 && PD>=83){
        indicadorP="Presión Arterial Alta(consulta tu médico)";
        Serial.println(indicadorP);} 
     if(PS<118 && PD<78){
        indicadorP="Presión Arterial Baja(consulta tu médico)";
        Serial.println(indicadorP);}     
    }   
  }

    if(edad>=40 && edad<=59){
     persona="El paciente es un Adulto de mediana edad";
     Serial.println(persona);
    if(edad>40 && edad<=49){ 
    if (66 <= BPM && BPM <= 88){
        indicadorBPM="Latidos por minuto normales";
        Serial.println(indicadorBPM); }
     if (BPM<66){
        indicadorBPM="Posible bradicardia (consulta tu médico)";
        Serial.println(indicadorBPM); }
     if (BPM > 88){
        indicadorBPM="Posible Taquicardia (consulta tu médico)";
        Serial.println(indicadorBPM);  }
     if(PS>=120 && PS<=135 && PD>=79 && PD<=85){
        indicadorP="Presión Arterial Normal";
        Serial.println(indicadorP);}
     if(PS>135 && PD>85){
        indicadorP="Presión Arterial Alta(consulta tu médico)";
        Serial.println(indicadorP);} 
     if(PS<120 && PD<79){
        indicadorP="Presión Arterial Baja(consulta tu médico)";
        Serial.println(indicadorP);}     
    }  
    if(edad>=50 && edad<=59){ 
     if (68 <= BPM && BPM <= 88){
        indicadorBPM="Latidos por minuto normales";
        Serial.println(indicadorBPM); }
     if (BPM<68){
        indicadorBPM="Posible bradicardia (consulta tu médico)";
        Serial.println(indicadorBPM); }
     if (BPM > 88){
        indicadorBPM="Posible Taquicardia (consulta tu médico)";
        Serial.println(indicadorBPM);  }
     if(PS>=125 && PS<=135 && PD>=80 && PD<=88){
        indicadorP="Presión Arterial Normal";
        Serial.println(indicadorP);}
     if(PS>135 && PD>88){
        indicadorP="Presión Arterial Alta(consulta tu médico)";
        Serial.println(indicadorP);} 
     if(PS<125 && PD<80){
        indicadorP="Presión Arterial Baja(consulta tu médico)";
        Serial.println(indicadorP);}     
    }
  
  }
    
    if(edad>=60){
     persona="El paciente es un Adulto Mayor";
     Serial.println(persona);
    if (66 <= BPM && BPM <= 88){
        indicadorBPM="Latidos por minuto normales";
        Serial.println(indicadorBPM); }
     if (BPM<66){
        indicadorBPM="Posible bradicardia (consulta tu médico)";
        Serial.println(indicadorBPM); }
     if (BPM > 88){
        indicadorBPM="Posible Taquicardia (consulta tu médico)";
        Serial.println(indicadorBPM);  }
     if(PS>=131 && PS<=140 && PD>=86 && PD<=90){
        indicadorP="Presión Arterial Normal";
        Serial.println(indicadorP);}
     if(PS>131 && PD>90){
        indicadorP="Presión Arterial Alta(consulta tu médico)";
        Serial.println(indicadorP);} 
     if(PS<131 && PD<86){
        indicadorP="Presión Arterial Baja(consulta tu médico)";
        Serial.println(indicadorP);} 
 
  }
}
*/
void Ruid(){
    per=(2*PI)/fre;

 //   while(i<per){
    seno=Amplitud*sin(fre*i +desf);
    Serial.println(seno + PM.toInt()/100.0,6);  
    //Serial.println(PM);
    ban2=1;
    
    i=i+0.0001;
   // }
   //PMr=seno+PM;   
  }


void comunica(){
  
    while (Serial.available() > 0) {
    //digitalWrite(ledPin,HIGH);

       a=Serial.readString();
       //Serial.println(a);
        frst=a.substring(0,1); 
      
       if (frst == "a" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,3);
        PS=a.substring(3,6);
        PD=a.substring(6,8);
        Ruido=a.substring(8,10);
        edad=a.substring(10,12);
        PM=a.substring(12);
        a = "";
        ban=1;
       }
       if (frst == "A" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,3);
        PS=a.substring(3,6);
        PD=a.substring(6,8);
        Ruido=a.substring(8,10);
        edad=a.substring(10);
        PM=a.substring(11);
        a = "";
       }
       if (frst == "b" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,3);
        PS=a.substring(3,5);
        PD=a.substring(5,7);
        Ruido=a.substring(7,9);
        edad=a.substring(9,11);
        PM=a.substring(11);
        a = "";
       }
       if (frst == "B" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,3);
        PS=a.substring(3,5);
        PD=a.substring(5,7);
        Ruido=a.substring(7,9);
        edad=a.substring(9);
        PM=a.substring(10);
        a = "";
       }
       if (frst == "c" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,3);
        PS=a.substring(3,6);
        PD=a.substring(6,9);
        Ruido=a.substring(9,11);
        edad=a.substring(11,13);
        PM=a.substring(13);
        a = "";
       }
       if (frst == "C" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,3);
        PS=a.substring(3,6);
        PD=a.substring(6,9);
        Ruido=a.substring(9,11);
        edad=a.substring(11);
        PM=a.substring(12);
        a = "";
       }       
       if (frst == "d" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,3);
        PS=a.substring(3,6);
        PD=a.substring(6,8);
        Ruido=a.substring(8,10);
        edad=a.substring(10,12);
        PM=a.substring(12);
        a = "";
       }       
       if (frst == "D" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,3);
        PS=a.substring(3,6);
        PD=a.substring(6,8);
        Ruido=a.substring(8,10);
        edad=a.substring(10);
        PM=a.substring(11);
        a = "";
       }     
       if (frst == "e" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,3);
        PS=a.substring(3,5);
        PD=a.substring(5,7);
        Ruido=a.substring(7,9);
        edad=a.substring(9,11);
        PM=a.substring(11);
        a = "";
       }    
       if (frst == "E" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,3);
        PS=a.substring(3,5);
        PD=a.substring(5,7);
        Ruido=a.substring(7,9);
        edad=a.substring(9);
        PM=a.substring(10);
        a = "";
       }     
       if (frst == "f" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,3);
        PS=a.substring(3,6);
        PD=a.substring(6,9);
        Ruido=a.substring(9,11);
        edad=a.substring(11,13);
        PM=a.substring(13);
        a = "";
       }
       if (frst == "F" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,3);
        PS=a.substring(3,6);
        PD=a.substring(6,9);
        Ruido=a.substring(9,11);
        edad=a.substring(11);
        PM=a.substring(12);
        a = "";
       }
       if (frst == "g" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,4);
        PS=a.substring(4,7);
        PD=a.substring(7,9);
        Ruido=a.substring(9,11);
        edad=a.substring(11,13);
        PM=a.substring(13);
        a = "";
       }     
       if (frst == "G" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,4);
        PS=a.substring(4,7);
        PD=a.substring(7,9);
        Ruido=a.substring(9,11);
        edad=a.substring(11);
        PM=a.substring(12);
        a = "";
       }    
       if (frst == "h" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,4);
        PS=a.substring(4,6);
        PD=a.substring(6,8);
        Ruido=a.substring(8,10);
        edad=a.substring(10,12);
        PM=a.substring(12);
        a = "";
       }
       if (frst == "H" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,4);
        PS=a.substring(4,6);
        PD=a.substring(6,8);
        Ruido=a.substring(8,10);
        edad=a.substring(10);
        PM=a.substring(11);
        a = "";
       }
       if (frst == "i" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,4);
        PS=a.substring(4,7);
        PD=a.substring(7,10);
        Ruido=a.substring(10,12);
        edad=a.substring(12,14);
        PM=a.substring(14);
        a = "";
       }
       if (frst == "I" ){
        //digitalWrite(ledPin,HIGH);
        svl= a.substring(1,4);
        vl = svl.toInt();

        //recepcion NIBP
        BPM=a.substring(1,4);
        PS=a.substring(4,7);
        PD=a.substring(7,10);
        Ruido=a.substring(10,12);
        edad=a.substring(12);
        PM=a.substring(13);
        a = "";
       }

    }
      Serial.flush();
      a = "";    
}


  
