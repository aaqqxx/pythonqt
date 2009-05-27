#ifndef PYTHONQTWRAPPER_QLOCALE_H
#define PYTHONQTWRAPPER_QLOCALE_H

#include <qlocale.h>
#include <QObject>

#include <PythonQt.h>

#include <QDate>
#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qlist.h>
#include <qlocale.h>

class PythonQtWrapper_QLocale : public QObject
{ Q_OBJECT
public:
Q_ENUMS(MeasurementSystem NumberOption FormatType Country Language )
Q_FLAGS(NumberOptions )
enum MeasurementSystem{
  MetricSystem = QLocale::MetricSystem,   ImperialSystem = QLocale::ImperialSystem};
enum NumberOption{
  OmitGroupSeparator = QLocale::OmitGroupSeparator,   RejectGroupSeparator = QLocale::RejectGroupSeparator};
enum FormatType{
  LongFormat = QLocale::LongFormat,   ShortFormat = QLocale::ShortFormat};
enum Country{
  AnyCountry = QLocale::AnyCountry,   Afghanistan = QLocale::Afghanistan,   Albania = QLocale::Albania,   Algeria = QLocale::Algeria,   AmericanSamoa = QLocale::AmericanSamoa,   Andorra = QLocale::Andorra,   Angola = QLocale::Angola,   Anguilla = QLocale::Anguilla,   Antarctica = QLocale::Antarctica,   AntiguaAndBarbuda = QLocale::AntiguaAndBarbuda,   Argentina = QLocale::Argentina,   Armenia = QLocale::Armenia,   Aruba = QLocale::Aruba,   Australia = QLocale::Australia,   Austria = QLocale::Austria,   Azerbaijan = QLocale::Azerbaijan,   Bahamas = QLocale::Bahamas,   Bahrain = QLocale::Bahrain,   Bangladesh = QLocale::Bangladesh,   Barbados = QLocale::Barbados,   Belarus = QLocale::Belarus,   Belgium = QLocale::Belgium,   Belize = QLocale::Belize,   Benin = QLocale::Benin,   Bermuda = QLocale::Bermuda,   Bhutan = QLocale::Bhutan,   Bolivia = QLocale::Bolivia,   BosniaAndHerzegowina = QLocale::BosniaAndHerzegowina,   Botswana = QLocale::Botswana,   BouvetIsland = QLocale::BouvetIsland,   Brazil = QLocale::Brazil,   BritishIndianOceanTerritory = QLocale::BritishIndianOceanTerritory,   BruneiDarussalam = QLocale::BruneiDarussalam,   Bulgaria = QLocale::Bulgaria,   BurkinaFaso = QLocale::BurkinaFaso,   Burundi = QLocale::Burundi,   Cambodia = QLocale::Cambodia,   Cameroon = QLocale::Cameroon,   Canada = QLocale::Canada,   CapeVerde = QLocale::CapeVerde,   CaymanIslands = QLocale::CaymanIslands,   CentralAfricanRepublic = QLocale::CentralAfricanRepublic,   Chad = QLocale::Chad,   Chile = QLocale::Chile,   China = QLocale::China,   ChristmasIsland = QLocale::ChristmasIsland,   CocosIslands = QLocale::CocosIslands,   Colombia = QLocale::Colombia,   Comoros = QLocale::Comoros,   DemocraticRepublicOfCongo = QLocale::DemocraticRepublicOfCongo,   PeoplesRepublicOfCongo = QLocale::PeoplesRepublicOfCongo,   CookIslands = QLocale::CookIslands,   CostaRica = QLocale::CostaRica,   IvoryCoast = QLocale::IvoryCoast,   Croatia = QLocale::Croatia,   Cuba = QLocale::Cuba,   Cyprus = QLocale::Cyprus,   CzechRepublic = QLocale::CzechRepublic,   Denmark = QLocale::Denmark,   Djibouti = QLocale::Djibouti,   Dominica = QLocale::Dominica,   DominicanRepublic = QLocale::DominicanRepublic,   EastTimor = QLocale::EastTimor,   Ecuador = QLocale::Ecuador,   Egypt = QLocale::Egypt,   ElSalvador = QLocale::ElSalvador,   EquatorialGuinea = QLocale::EquatorialGuinea,   Eritrea = QLocale::Eritrea,   Estonia = QLocale::Estonia,   Ethiopia = QLocale::Ethiopia,   FalklandIslands = QLocale::FalklandIslands,   FaroeIslands = QLocale::FaroeIslands,   FijiCountry = QLocale::FijiCountry,   Finland = QLocale::Finland,   France = QLocale::France,   MetropolitanFrance = QLocale::MetropolitanFrance,   FrenchGuiana = QLocale::FrenchGuiana,   FrenchPolynesia = QLocale::FrenchPolynesia,   FrenchSouthernTerritories = QLocale::FrenchSouthernTerritories,   Gabon = QLocale::Gabon,   Gambia = QLocale::Gambia,   Georgia = QLocale::Georgia,   Germany = QLocale::Germany,   Ghana = QLocale::Ghana,   Gibraltar = QLocale::Gibraltar,   Greece = QLocale::Greece,   Greenland = QLocale::Greenland,   Grenada = QLocale::Grenada,   Guadeloupe = QLocale::Guadeloupe,   Guam = QLocale::Guam,   Guatemala = QLocale::Guatemala,   Guinea = QLocale::Guinea,   GuineaBissau = QLocale::GuineaBissau,   Guyana = QLocale::Guyana,   Haiti = QLocale::Haiti,   HeardAndMcDonaldIslands = QLocale::HeardAndMcDonaldIslands,   Honduras = QLocale::Honduras,   HongKong = QLocale::HongKong,   Hungary = QLocale::Hungary,   Iceland = QLocale::Iceland,   India = QLocale::India,   Indonesia = QLocale::Indonesia,   Iran = QLocale::Iran,   Iraq = QLocale::Iraq,   Ireland = QLocale::Ireland,   Israel = QLocale::Israel,   Italy = QLocale::Italy,   Jamaica = QLocale::Jamaica,   Japan = QLocale::Japan,   Jordan = QLocale::Jordan,   Kazakhstan = QLocale::Kazakhstan,   Kenya = QLocale::Kenya,   Kiribati = QLocale::Kiribati,   DemocraticRepublicOfKorea = QLocale::DemocraticRepublicOfKorea,   RepublicOfKorea = QLocale::RepublicOfKorea,   Kuwait = QLocale::Kuwait,   Kyrgyzstan = QLocale::Kyrgyzstan,   Lao = QLocale::Lao,   Latvia = QLocale::Latvia,   Lebanon = QLocale::Lebanon,   Lesotho = QLocale::Lesotho,   Liberia = QLocale::Liberia,   LibyanArabJamahiriya = QLocale::LibyanArabJamahiriya,   Liechtenstein = QLocale::Liechtenstein,   Lithuania = QLocale::Lithuania,   Luxembourg = QLocale::Luxembourg,   Macau = QLocale::Macau,   Macedonia = QLocale::Macedonia,   Madagascar = QLocale::Madagascar,   Malawi = QLocale::Malawi,   Malaysia = QLocale::Malaysia,   Maldives = QLocale::Maldives,   Mali = QLocale::Mali,   Malta = QLocale::Malta,   MarshallIslands = QLocale::MarshallIslands,   Martinique = QLocale::Martinique,   Mauritania = QLocale::Mauritania,   Mauritius = QLocale::Mauritius,   Mayotte = QLocale::Mayotte,   Mexico = QLocale::Mexico,   Micronesia = QLocale::Micronesia,   Moldova = QLocale::Moldova,   Monaco = QLocale::Monaco,   Mongolia = QLocale::Mongolia,   Montserrat = QLocale::Montserrat,   Morocco = QLocale::Morocco,   Mozambique = QLocale::Mozambique,   Myanmar = QLocale::Myanmar,   Namibia = QLocale::Namibia,   NauruCountry = QLocale::NauruCountry,   Nepal = QLocale::Nepal,   Netherlands = QLocale::Netherlands,   NetherlandsAntilles = QLocale::NetherlandsAntilles,   NewCaledonia = QLocale::NewCaledonia,   NewZealand = QLocale::NewZealand,   Nicaragua = QLocale::Nicaragua,   Niger = QLocale::Niger,   Nigeria = QLocale::Nigeria,   Niue = QLocale::Niue,   NorfolkIsland = QLocale::NorfolkIsland,   NorthernMarianaIslands = QLocale::NorthernMarianaIslands,   Norway = QLocale::Norway,   Oman = QLocale::Oman,   Pakistan = QLocale::Pakistan,   Palau = QLocale::Palau,   PalestinianTerritory = QLocale::PalestinianTerritory,   Panama = QLocale::Panama,   PapuaNewGuinea = QLocale::PapuaNewGuinea,   Paraguay = QLocale::Paraguay,   Peru = QLocale::Peru,   Philippines = QLocale::Philippines,   Pitcairn = QLocale::Pitcairn,   Poland = QLocale::Poland,   Portugal = QLocale::Portugal,   PuertoRico = QLocale::PuertoRico,   Qatar = QLocale::Qatar,   Reunion = QLocale::Reunion,   Romania = QLocale::Romania,   RussianFederation = QLocale::RussianFederation,   Rwanda = QLocale::Rwanda,   SaintKittsAndNevis = QLocale::SaintKittsAndNevis,   StLucia = QLocale::StLucia,   StVincentAndTheGrenadines = QLocale::StVincentAndTheGrenadines,   Samoa = QLocale::Samoa,   SanMarino = QLocale::SanMarino,   SaoTomeAndPrincipe = QLocale::SaoTomeAndPrincipe,   SaudiArabia = QLocale::SaudiArabia,   Senegal = QLocale::Senegal,   Seychelles = QLocale::Seychelles,   SierraLeone = QLocale::SierraLeone,   Singapore = QLocale::Singapore,   Slovakia = QLocale::Slovakia,   Slovenia = QLocale::Slovenia,   SolomonIslands = QLocale::SolomonIslands,   Somalia = QLocale::Somalia,   SouthAfrica = QLocale::SouthAfrica,   SouthGeorgiaAndTheSouthSandwichIslands = QLocale::SouthGeorgiaAndTheSouthSandwichIslands,   Spain = QLocale::Spain,   SriLanka = QLocale::SriLanka,   StHelena = QLocale::StHelena,   StPierreAndMiquelon = QLocale::StPierreAndMiquelon,   Sudan = QLocale::Sudan,   Suriname = QLocale::Suriname,   SvalbardAndJanMayenIslands = QLocale::SvalbardAndJanMayenIslands,   Swaziland = QLocale::Swaziland,   Sweden = QLocale::Sweden,   Switzerland = QLocale::Switzerland,   SyrianArabRepublic = QLocale::SyrianArabRepublic,   Taiwan = QLocale::Taiwan,   Tajikistan = QLocale::Tajikistan,   Tanzania = QLocale::Tanzania,   Thailand = QLocale::Thailand,   Togo = QLocale::Togo,   Tokelau = QLocale::Tokelau,   TongaCountry = QLocale::TongaCountry,   TrinidadAndTobago = QLocale::TrinidadAndTobago,   Tunisia = QLocale::Tunisia,   Turkey = QLocale::Turkey,   Turkmenistan = QLocale::Turkmenistan,   TurksAndCaicosIslands = QLocale::TurksAndCaicosIslands,   Tuvalu = QLocale::Tuvalu,   Uganda = QLocale::Uganda,   Ukraine = QLocale::Ukraine,   UnitedArabEmirates = QLocale::UnitedArabEmirates,   UnitedKingdom = QLocale::UnitedKingdom,   UnitedStates = QLocale::UnitedStates,   UnitedStatesMinorOutlyingIslands = QLocale::UnitedStatesMinorOutlyingIslands,   Uruguay = QLocale::Uruguay,   Uzbekistan = QLocale::Uzbekistan,   Vanuatu = QLocale::Vanuatu,   VaticanCityState = QLocale::VaticanCityState,   Venezuela = QLocale::Venezuela,   VietNam = QLocale::VietNam,   BritishVirginIslands = QLocale::BritishVirginIslands,   USVirginIslands = QLocale::USVirginIslands,   WallisAndFutunaIslands = QLocale::WallisAndFutunaIslands,   WesternSahara = QLocale::WesternSahara,   Yemen = QLocale::Yemen,   Yugoslavia = QLocale::Yugoslavia,   Zambia = QLocale::Zambia,   Zimbabwe = QLocale::Zimbabwe,   SerbiaAndMontenegro = QLocale::SerbiaAndMontenegro,   LastCountry = QLocale::LastCountry};
enum Language{
  C = QLocale::C,   Abkhazian = QLocale::Abkhazian,   Afan = QLocale::Afan,   Afar = QLocale::Afar,   Afrikaans = QLocale::Afrikaans,   Albanian = QLocale::Albanian,   Amharic = QLocale::Amharic,   Arabic = QLocale::Arabic,   Armenian = QLocale::Armenian,   Assamese = QLocale::Assamese,   Aymara = QLocale::Aymara,   Azerbaijani = QLocale::Azerbaijani,   Bashkir = QLocale::Bashkir,   Basque = QLocale::Basque,   Bengali = QLocale::Bengali,   Bhutani = QLocale::Bhutani,   Bihari = QLocale::Bihari,   Bislama = QLocale::Bislama,   Breton = QLocale::Breton,   Bulgarian = QLocale::Bulgarian,   Burmese = QLocale::Burmese,   Byelorussian = QLocale::Byelorussian,   Cambodian = QLocale::Cambodian,   Catalan = QLocale::Catalan,   Chinese = QLocale::Chinese,   Corsican = QLocale::Corsican,   Croatian = QLocale::Croatian,   Czech = QLocale::Czech,   Danish = QLocale::Danish,   Dutch = QLocale::Dutch,   English = QLocale::English,   Esperanto = QLocale::Esperanto,   Estonian = QLocale::Estonian,   Faroese = QLocale::Faroese,   FijiLanguage = QLocale::FijiLanguage,   Finnish = QLocale::Finnish,   French = QLocale::French,   Frisian = QLocale::Frisian,   Gaelic = QLocale::Gaelic,   Galician = QLocale::Galician,   Georgian = QLocale::Georgian,   German = QLocale::German,   Greek = QLocale::Greek,   Greenlandic = QLocale::Greenlandic,   Guarani = QLocale::Guarani,   Gujarati = QLocale::Gujarati,   Hausa = QLocale::Hausa,   Hebrew = QLocale::Hebrew,   Hindi = QLocale::Hindi,   Hungarian = QLocale::Hungarian,   Icelandic = QLocale::Icelandic,   Indonesian = QLocale::Indonesian,   Interlingua = QLocale::Interlingua,   Interlingue = QLocale::Interlingue,   Inuktitut = QLocale::Inuktitut,   Inupiak = QLocale::Inupiak,   Irish = QLocale::Irish,   Italian = QLocale::Italian,   Japanese = QLocale::Japanese,   Javanese = QLocale::Javanese,   Kannada = QLocale::Kannada,   Kashmiri = QLocale::Kashmiri,   Kazakh = QLocale::Kazakh,   Kinyarwanda = QLocale::Kinyarwanda,   Kirghiz = QLocale::Kirghiz,   Korean = QLocale::Korean,   Kurdish = QLocale::Kurdish,   Kurundi = QLocale::Kurundi,   Laothian = QLocale::Laothian,   Latin = QLocale::Latin,   Latvian = QLocale::Latvian,   Lingala = QLocale::Lingala,   Lithuanian = QLocale::Lithuanian,   Macedonian = QLocale::Macedonian,   Malagasy = QLocale::Malagasy,   Malay = QLocale::Malay,   Malayalam = QLocale::Malayalam,   Maltese = QLocale::Maltese,   Maori = QLocale::Maori,   Marathi = QLocale::Marathi,   Moldavian = QLocale::Moldavian,   Mongolian = QLocale::Mongolian,   NauruLanguage = QLocale::NauruLanguage,   Nepali = QLocale::Nepali,   Norwegian = QLocale::Norwegian,   NorwegianBokmal = QLocale::NorwegianBokmal,   Occitan = QLocale::Occitan,   Oriya = QLocale::Oriya,   Pashto = QLocale::Pashto,   Persian = QLocale::Persian,   Polish = QLocale::Polish,   Portuguese = QLocale::Portuguese,   Punjabi = QLocale::Punjabi,   Quechua = QLocale::Quechua,   RhaetoRomance = QLocale::RhaetoRomance,   Romanian = QLocale::Romanian,   Russian = QLocale::Russian,   Samoan = QLocale::Samoan,   Sangho = QLocale::Sangho,   Sanskrit = QLocale::Sanskrit,   Serbian = QLocale::Serbian,   SerboCroatian = QLocale::SerboCroatian,   Sesotho = QLocale::Sesotho,   Setswana = QLocale::Setswana,   Shona = QLocale::Shona,   Sindhi = QLocale::Sindhi,   Singhalese = QLocale::Singhalese,   Siswati = QLocale::Siswati,   Slovak = QLocale::Slovak,   Slovenian = QLocale::Slovenian,   Somali = QLocale::Somali,   Spanish = QLocale::Spanish,   Sundanese = QLocale::Sundanese,   Swahili = QLocale::Swahili,   Swedish = QLocale::Swedish,   Tagalog = QLocale::Tagalog,   Tajik = QLocale::Tajik,   Tamil = QLocale::Tamil,   Tatar = QLocale::Tatar,   Telugu = QLocale::Telugu,   Thai = QLocale::Thai,   Tibetan = QLocale::Tibetan,   Tigrinya = QLocale::Tigrinya,   TongaLanguage = QLocale::TongaLanguage,   Tsonga = QLocale::Tsonga,   Turkish = QLocale::Turkish,   Turkmen = QLocale::Turkmen,   Twi = QLocale::Twi,   Uigur = QLocale::Uigur,   Ukrainian = QLocale::Ukrainian,   Urdu = QLocale::Urdu,   Uzbek = QLocale::Uzbek,   Vietnamese = QLocale::Vietnamese,   Volapuk = QLocale::Volapuk,   Welsh = QLocale::Welsh,   Wolof = QLocale::Wolof,   Xhosa = QLocale::Xhosa,   Yiddish = QLocale::Yiddish,   Yoruba = QLocale::Yoruba,   Zhuang = QLocale::Zhuang,   Zulu = QLocale::Zulu,   NorwegianNynorsk = QLocale::NorwegianNynorsk,   Nynorsk = QLocale::Nynorsk,   Bosnian = QLocale::Bosnian,   Divehi = QLocale::Divehi,   Manx = QLocale::Manx,   Cornish = QLocale::Cornish,   Akan = QLocale::Akan,   Konkani = QLocale::Konkani,   Ga = QLocale::Ga,   Igbo = QLocale::Igbo,   Kamba = QLocale::Kamba,   Syriac = QLocale::Syriac,   Blin = QLocale::Blin,   Geez = QLocale::Geez,   Koro = QLocale::Koro,   Sidamo = QLocale::Sidamo,   Atsam = QLocale::Atsam,   Tigre = QLocale::Tigre,   Jju = QLocale::Jju,   Friulian = QLocale::Friulian,   Venda = QLocale::Venda,   Ewe = QLocale::Ewe,   Walamo = QLocale::Walamo,   Hawaiian = QLocale::Hawaiian,   Tyap = QLocale::Tyap,   Chewa = QLocale::Chewa,   LastLanguage = QLocale::LastLanguage};
Q_DECLARE_FLAGS(NumberOptions, NumberOption)
public slots:
QLocale* new_QLocale();
QLocale* new_QLocale(QLocale::Language  language, QLocale::Country  country = QLocale::AnyCountry);
QLocale* new_QLocale(const QLocale&  other);
QLocale* new_QLocale(const QString&  name);
void delete_QLocale(QLocale* obj) { delete obj; } 
   QChar  groupSeparator(QLocale* theWrappedObject) const;
   float  toFloat(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0) const;
   ushort  toUShort(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0, int  base = 0) const;
   QDateTime  toDateTime(QLocale* theWrappedObject, const QString&  string, const QString&  format) const;
   QString  toString(QLocale* theWrappedObject, float  i, char  f = 'g', int  prec = 6) const;
   void writeTo(QLocale* theWrappedObject, QDataStream&  arg__1);
   QTime  toTime(QLocale* theWrappedObject, const QString&  string, const QString&  format) const;
   QDateTime  toDateTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  format = QLocale::LongFormat) const;
   bool  operator_equal(QLocale* theWrappedObject, const QLocale&  other) const;
   QString  toString(QLocale* theWrappedObject, short  i) const;
   QLocale::NumberOptions  numberOptions(QLocale* theWrappedObject) const;
   short  toShort(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0, int  base = 0) const;
   QTime  toTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  arg__2 = QLocale::LongFormat) const;
   QString  static_QLocale_countryToString(QLocale::Country  country);
   QChar  zeroDigit(QLocale* theWrappedObject) const;
   QDate  toDate(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  arg__2 = QLocale::LongFormat) const;
   QString  dayName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  toString(QLocale* theWrappedObject, double  i, char  f = 'g', int  prec = 6) const;
   QString  dateFormat(QLocale* theWrappedObject, QLocale::FormatType  format = QLocale::LongFormat) const;
   QLocale::Language  language(QLocale* theWrappedObject) const;
   QString  toString(QLocale* theWrappedObject, const QTime&  time, const QString&  formatStr) const;
   QLocale  static_QLocale_c();
   QString  toString(QLocale* theWrappedObject, const QDateTime&  dateTime, QLocale::FormatType  format = QLocale::LongFormat) const;
   QChar  negativeSign(QLocale* theWrappedObject) const;
   double  toDouble(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0) const;
   void readFrom(QLocale* theWrappedObject, QDataStream&  arg__1);
   QString  dateTimeFormat(QLocale* theWrappedObject, QLocale::FormatType  format = QLocale::LongFormat) const;
   QLocale  static_QLocale_system();
   QString  monthName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  name(QLocale* theWrappedObject) const;
   void setNumberOptions(QLocale* theWrappedObject, QLocale::NumberOptions  options);
   QString  toString(QLocale* theWrappedObject, qulonglong  i) const;
   QChar  decimalPoint(QLocale* theWrappedObject) const;
   void static_QLocale_setDefault(const QLocale&  locale);
   int  toInt(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0, int  base = 0) const;
   QString  toString(QLocale* theWrappedObject, const QDate&  date, const QString&  formatStr) const;
   QList<QLocale::Country >  static_QLocale_countriesForLanguage(QLocale::Language  lang);
   QLocale::Country  country(QLocale* theWrappedObject) const;
   QString  toString(QLocale* theWrappedObject, const QDate&  date, QLocale::FormatType  format = QLocale::LongFormat) const;
   QChar  exponential(QLocale* theWrappedObject) const;
   QString  toString(QLocale* theWrappedObject, const QTime&  time, QLocale::FormatType  format = QLocale::LongFormat) const;
   QString  toString(QLocale* theWrappedObject, const QDateTime&  dateTime, const QString&  format) const;
   QDate  toDate(QLocale* theWrappedObject, const QString&  string, const QString&  format) const;
   QString  static_QLocale_languageToString(QLocale::Language  language);
   QLocale::MeasurementSystem  measurementSystem(QLocale* theWrappedObject) const;
   QChar  percent(QLocale* theWrappedObject) const;
   QString  timeFormat(QLocale* theWrappedObject, QLocale::FormatType  format = QLocale::LongFormat) const;
   qlonglong  toLongLong(QLocale* theWrappedObject, const QString&  s, bool*  ok = 0, int  base = 0) const;
   QString  toString(QLocale* theWrappedObject, int  i) const;
};

#endif // PYTHONQTWRAPPER_QLOCALE_H
