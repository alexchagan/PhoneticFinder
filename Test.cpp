
#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
#include <iostream>
using namespace std;



TEST_CASE("tests for word 'happy' ") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "haffy") == string("happy"));
    CHECK(find(text, "hafpy") == string("happy"));
    CHECK(find(text, "habfy") == string("happy"));
    CHECK(find(text, "hafby") == string("happy"));
    CHECK(find(text, "happi") == string("happy"));
    CHECK(find(text, "habpi") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "Happy") == string("happy"));
    CHECK(find(text, "happY") == string("happy"));
    CHECK(find(text, "haPpy") == string("happy"));
    CHECK(find(text, "hAppy") == string("happy"));
    CHECK(find(text, "hAppI") == string("happy"));
    CHECK(find(text, "haPPy") == string("happy"));
    CHECK(find(text, "hAPPY") == string("happy"));
    CHECK(find(text, "haBpY") == string("happy"));
    CHECK(find(text, "HABBY") == string("happy"));
    CHECK(find(text, "HABBI") == string("happy"));
    
}

TEST_CASE("replacement of lower case and upper case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text, "HaPPI") == string("Happi"));
    CHECK(find(text, "haPpI") == string("Happi"));
    CHECK(find(text, "HAPpI") == string("Happi"));
    CHECK(find(text, "happI") == string("Happi"));
    CHECK(find(text, "hAppI") == string("Happi"));
    CHECK(find(text, "HAPPi") == string("Happi"));
    CHECK(find(text, "HAppi") == string("Happi"));
}

TEST_CASE("tests for word 'worry'"){
string text = "xxx worry yyy";
CHECK(find(text,"worry") == string("worry"));
CHECK(find(text,"vorry") == string("worry"));
CHECK(find(text,"wurry") == string("worry"));
CHECK(find(text,"worri") == string("worry"));
CHECK(find(text,"vorry") == string("worry"));
CHECK(find(text,"vurry") == string("worry"));
CHECK(find(text,"vorri") == string("worry"));
CHECK(find(text,"vurri") == string("worry"));
CHECK(find(text,"wurri") == string("worry"));
CHECK(find(text,"Worry") == string("worry"));
CHECK(find(text,"Wurry") == string("worry"));
CHECK(find(text,"woRRy") == string("worry"));
CHECK(find(text,"worRY") == string("worry"));
CHECK(find(text,"vurrY") == string("worry"));
CHECK(find(text,"VorrY") == string("worry"));
CHECK(find(text,"vUrRy") == string("worry"));
CHECK(find(text,"WorrI") == string("worry"));
CHECK(find(text,"WORRY") == string("worry"));
CHECK(find(text,"wUrRi") == string("worry"));
CHECK(find(text,"worRI") == string("worry"));
CHECK(find(text,"wUrrY") == string("worry"));
}

TEST_CASE("tests for the word 'dont'")
{
    string text = "dont xxx yyy";
    CHECK(find(text,"dont") == string("dont"));
    CHECK(find(text,"dOnt") == string("dont"));
    CHECK(find(text,"doNt") == string("dont"));
    CHECK(find(text,"Dont") == string("dont"));
    CHECK(find(text,"donT") == string("dont"));
    CHECK(find(text,"DOnt") == string("dont"));
    CHECK(find(text,"DOnD") == string("dont"));
    CHECK(find(text,"DuNT") == string("dont"));
    CHECK(find(text,"tunt") == string("dont"));
    CHECK(find(text,"dunt") == string("dont"));
    CHECK(find(text,"dUNt") == string("dont"));
    CHECK(find(text,"DuND") == string("dont"));
    CHECK(find(text,"dund") == string("dont"));
    CHECK(find(text,"DUNT") == string("dont"));
    CHECK(find(text,"donD") == string("dont"));
    CHECK(find(text,"tond") == string("dont"));
    CHECK(find(text,"Tond") == string("dont"));
    CHECK(find(text,"tOnd") == string("dont"));
    CHECK(find(text,"toNd") == string("dont"));
    CHECK(find(text,"tonD") == string("dont"));
    CHECK(find(text,"TOnd") == string("dont"));
    CHECK(find(text,"ToNd") == string("dont"));
    CHECK(find(text,"TonD") == string("dont"));
    CHECK(find(text,"tOnD") == string("dont"));
    CHECK(find(text,"toND") == string("dont"));
    CHECK(find(text,"tOND") == string("dont"));
    CHECK(find(text,"tund") == string("dont"));
    CHECK(find(text,"Tund") == string("dont"));
    CHECK(find(text,"tUnd") == string("dont"));
    CHECK(find(text,"tuNd") == string("dont"));
    CHECK(find(text,"tunD") == string("dont"));
    CHECK(find(text,"TUnd") == string("dont"));
    CHECK(find(text,"TuNd") == string("dont"));
    CHECK(find(text,"TunD") == string("dont"));
    CHECK(find(text,"tUnD") == string("dont"));
    CHECK(find(text,"tuND") == string("dont"));
    CHECK(find(text,"TUNd") == string("dont"));
    CHECK(find(text,"TUnD") == string("dont"));
    CHECK(find(text,"TuND") == string("dont"));
    CHECK(find(text,"tUND") == string("dont"));
    CHECK(find(text,"TUND") == string("dont"));
    CHECK(find(text,"tont") == string("dont"));
    CHECK(find(text,"Tont") == string("dont"));
    CHECK(find(text,"tOnt") == string("dont"));
    CHECK(find(text,"toNt") == string("dont"));
    CHECK(find(text,"tonT") == string("dont"));
    CHECK(find(text,"TOnt") == string("dont"));
    CHECK(find(text,"ToNt") == string("dont"));
    CHECK(find(text,"TonT") == string("dont"));
    CHECK(find(text,"tOnT") == string("dont"));
    CHECK(find(text,"toNT") == string("dont"));
}
