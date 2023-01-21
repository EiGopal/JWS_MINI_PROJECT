//JWS KR
//Koordinat Sumedang Selatan
byte tanggalSekarang;
byte bulanSekarang;
int tahunSekarang;

float latitudeSetempat = -6.8671778;
float longitudeSetempat = 107.9172078;
byte timezoneSetempat = 7; // WIB=7, WITA=8, WIT=9
#include "JadwalWaktuShalat.h"
boolean flagSubuh = false; 
boolean flagDzuhur = false; 
boolean flagAshar = false; 
boolean flagMaghrib = false;
boolean flagIsya= false;


#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "uRTCLib.h"

uRTCLib rtc;


int jam, menit, detik, tanggal, bulan, tahun, hari;

//Variable Custom 
int jamShalatdisplay1, menitShalatdisplay1,jamShalatdisplay2,menitShalatdisplay2 ; 
byte  namaA, namaB;
boolean hijriyahON= false;
byte slide;


//jenis LCD 16x2
LiquidCrystal_I2C lcd1(0x27, 16, 2); 
LiquidCrystal_I2C lcd2(0x25, 16, 2);
const char*namahari[]={"Minggu","Senin ","Selasa","Rabu  ","Kamis ","Jum'at","Sabtu "};
char *pasar[] ={"Wage  ","Kliwon","Legi  ","Pahing","Pon   "};   
const char *sholat[] = {"Imsak  ","Subuh  ","Dzuhur ","Ashar  ","Maghrib","Isya'  "};  

void setup()

{

  Serial.begin(19200);
 URTCLIB_WIRE.begin();
 
  //rtc.set(0, 56, 12, 5, 13, 1, 22);
  // rtc.set(second, minute, hour, dayOfWeek, dayOfMonth, month, year)
  // set day of week (1=Sunday, 7=Saturday)


  waktuShalatDimulai();

  //inisialisasi LCD 1 dan LCD 2
  lcd1.init();
  lcd2.init();
//aktifkan backlight LCD 1 dan LCD 2
  lcd1.backlight();
  lcd2.backlight();
//hapus tampilan LCD 1
  lcd1.clear();
  lcd2.clear();
  
}

void loop()
{
rtc.refresh();
RTC_Call();
LCD1_Display();
dapatkanWaktuShalat();
LCD2_Display();
}


void JWSe() {

}
