//Ambil Waktu dari RTC
void RTC_Call(){
 rtc.refresh();
         
  jam=rtc.hour();
  menit=rtc.minute();
  detik=rtc.second();
  
  tanggal=rtc.day();
  bulan=rtc.month();
  tahun=rtc.year();

  hari=rtc.dayOfWeek();
  tahunSekarang=tahun;
  bulanSekarang=bulan;
  tanggalSekarang=tanggal;
  
  
  
}






//Perhitungan Pasaran Jawa
int jumlahhari(){ 
  byte d = tanggal;
  byte m = bulan;
  int y = tahun;
  int hb[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
  int ht = (y - 1970) * 365 - 1;
  int hs = hb[m - 1] + d;
  int kab = 0;
  int i;
  if(y % 4 == 0) {
    if(m > 2) {
    hs++;
    }
  }
  for(i = 1970; i < y; i++) {
    if(i % 4 == 0) {
    kab++;
    }
  }
  return (ht + hs + kab); 
}

void temp1() {
   
  //Serial.print("Temperature: ");
  //Serial.print(rtc.temp()  / 100);
  //Serial.print("\xC2\xB0");   //shows degrees character
  //Serial.println("C");
}
