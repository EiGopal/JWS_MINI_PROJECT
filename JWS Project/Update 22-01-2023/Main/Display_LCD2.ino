void LCD1_Display()
{
  
    //Tampil Jam
  lcd1.setCursor(0, 0); //Collom / Row
  if(jam<10){
  lcd1.print("0");
  lcd1.print(jam);}
  else if(jam>9){
  lcd1.setCursor(0, 0); //Collom / Row
  lcd1.print(jam);}
  
  //Animasi Colon Detik
  if(detik%2==0){
  
  lcd1.setCursor(2, 0); //Collom / Row
  lcd1.print(":");
  }
  else if(detik%2!=0){
  lcd1.setCursor(2, 0); //Collom / Row
  lcd1.print(" ");
  slide=slide+1;
  }
  
    //Tampil Menit  
  lcd1.setCursor(3, 0); //Collom / Row
  if(menit<10){
  lcd1.print("0");
    lcd1.print(menit);}
    else if(menit>9){
  lcd1.setCursor(3, 0); //Collom / Row
  lcd1.print(menit);}
  
  //Tampil Tanggal
  lcd1.setCursor(6, 0); //Collom / Row
  if(tanggal<10){
  lcd1.print("0");
    lcd1.print(tanggal);}
    else if(tanggal>9){
  lcd1.setCursor(6, 0); //Collom / Row
  lcd1.print(tanggal);}
  
  lcd1.setCursor(8, 0); //Collom / Row
  lcd1.print("/");
  
  //Tampil Bulan
  lcd1.setCursor(9, 0); //Collom / Row
  if(bulan<10){
  lcd1.print("0");
    lcd1.print(bulan);}
    else if(bulan>9){
  lcd1.setCursor(9, 0); //Collom / Row
  lcd1.print(bulan);}
  
  lcd1.setCursor(11, 0); //Collom / Row
  lcd1.print("/");
  
  //Tampil Tahun
  lcd1.setCursor(12, 0); //Collom / Row
  lcd1.print(tahun+2000);
  
  //Tampil Hari
  lcd1.setCursor(0, 1); //Collom / Row
  lcd1.print(namahari[hari]);
  
  //Tampil Tanggal Jawa
  lcd1.setCursor(10, 1); //Collom / Row
  lcd1.print(pasar[jumlahhari()%5]);
}

void LCD2_Display()
{
  




  switch (slide){
    case 1: //Imsak Subuh 
  jamShalatdisplay1 = jadwalShalat(satuanWaktu[IMSAK][JAM]).toInt();
  menitShalatdisplay1 = jadwalShalat(satuanWaktu[IMSAK][MENIT]).toInt();
  
  jamShalatdisplay2 = jadwalShalat(satuanWaktu[SUBUH][JAM]).toInt();
  menitShalatdisplay2 = jadwalShalat(satuanWaktu[SUBUH][MENIT]).toInt();
  
    namaA = 0;
    namaB = 1;
    hijriyahON=false;
    break;
    case 9:
  jamShalatdisplay1 = jadwalShalat(satuanWaktu[DZUHUR][JAM]).toInt();
  menitShalatdisplay1 = jadwalShalat(satuanWaktu[DZUHUR][MENIT]).toInt();
  
  jamShalatdisplay2 = jadwalShalat(satuanWaktu[ASHAR][JAM]).toInt();
  menitShalatdisplay2 = jadwalShalat(satuanWaktu[ASHAR][MENIT]).toInt();
    namaA = 2;
    namaB = 3;
     hijriyahON=false;
    break;
    case 18:
  jamShalatdisplay1 = jadwalShalat(satuanWaktu[MAGHRIB][JAM]).toInt();
  menitShalatdisplay1 = jadwalShalat(satuanWaktu[MAGHRIB][MENIT]).toInt();
  
  jamShalatdisplay2 = jadwalShalat(satuanWaktu[ISYA][JAM]).toInt();
  menitShalatdisplay2 = jadwalShalat(satuanWaktu[ISYA][MENIT]).toInt();
    namaA = 4;
    namaB = 5;
     hijriyahON=false;
    break;
    
    case 27:
    hijriyahON=true;
    //Tampil Hijriyah
    break;

    case 36:
    slide=0;
    break;

    default :
  
    break;
  }
    if(hijriyahON==false){

  lcd2.setCursor(0, 0); //Collom / Row
  lcd2.print(sholat[namaA]);
  lcd2.setCursor(7, 0); //Collom / Row
  
  lcd2.setCursor(7, 0); //Collom / Row
  lcd2.print(" : ");
  //Tampil Jam
  lcd2.setCursor(11, 0); //Collom / Row
  if(jamShalatdisplay1<10){
  lcd2.print("0");
  lcd2.print(jamShalatdisplay1);}
  else if(jamShalatdisplay1>9){
  lcd2.setCursor(11, 0); //Collom / Row
  lcd2.print(jamShalatdisplay1);}
  lcd2.setCursor(13, 0); //Collom / Row
  lcd2.print(":");
  //Tampil Menit  
  lcd2.setCursor(14, 0); //Collom / Row
  if(menitShalatdisplay1<10){
  lcd2.print("0");
  lcd2.print(menitShalatdisplay1);}
  else if(menitShalatdisplay1>9){
  lcd2.setCursor(14, 0); //Collom / Row
  lcd2.print(menitShalatdisplay1);}


lcd2.setCursor(0, 1); //Collom / Row
lcd2.print(sholat[namaB]);
lcd2.setCursor(7, 1); //Collom / Row
  
  lcd2.setCursor(7, 1); //Collom / Row
  lcd2.print(" : ");
  //Tampil Jam
  lcd2.setCursor(11, 1); //Collom / Row
  if(jamShalatdisplay2<10){
  lcd2.print("0");
  lcd2.print(jamShalatdisplay2);}
  else if(jamShalatdisplay2>9){
  lcd2.setCursor(11, 1); //Collom / Row
  lcd2.print(jamShalatdisplay2);}
  lcd2.setCursor(13, 1); //Collom / Row
  lcd2.print(":");
  //Tampil Menit  
  lcd2.setCursor(14, 1); //Collom / Row
  if(menitShalatdisplay2<10){
  lcd2.print("0");
lcd2.print(menitShalatdisplay2);}
else if(menitShalatdisplay2>9){
lcd2.setCursor(14, 1); //Collom / Row
lcd2.print(menitShalatdisplay2);}
}
else if (hijriyahON==true){
  lcd2.clear();
}
}
