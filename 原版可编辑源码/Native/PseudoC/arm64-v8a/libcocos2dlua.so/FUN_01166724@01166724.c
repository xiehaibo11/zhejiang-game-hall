
char * FUN_01166724(int param_1)

{
  char *pcVar1;
  
  if (param_1 < 6) {
    return (char *)0x5;
  }
  if (param_1 < 0xe) {
    pcVar1 = (char *)0xd;
  }
  else {
    if (param_1 < 0x18) {
      return (char *)0x17;
    }
    if (param_1 < 0x30) {
      return (char *)0x2f;
    }
    if (param_1 < 0x62) {
      return (char *)0x61;
    }
    if (param_1 < 0xc2) {
      return (char *)0xc1;
    }
    if (param_1 < 0x186) {
      return (char *)0x185;
    }
    if (param_1 < 0x302) {
      return (char *)0x301;
    }
    if (param_1 < 0x608) {
      return (char *)0x607;
    }
    if (param_1 < 0xc08) {
      return (char *)0xc07;
    }
    if (param_1 < 0x1808) {
      return (char *)0x1807;
    }
    if (param_1 < 0x3002) {
      return (char *)0x3001;
    }
    if (param_1 < 0x6012) {
      return (char *)0x6011;
    }
    if (param_1 < 0xc006) {
      return (char *)0xc005;
    }
    pcVar1 = (char *)0x1800d;
    if (((((0x1800d < param_1) && (pcVar1 = (char *)0x30005, 0x30005 < param_1)) &&
         (pcVar1 = (char *)0x60019, 0x60019 < param_1)) &&
        (((pcVar1 = (char *)0xc0001, 0xc0001 < param_1 &&
          (pcVar1 = (char *)0x180005, 0x180005 < param_1)) &&
         ((pcVar1 = "airygui5GList11resizeToFitEii", 0x30000b < param_1 &&
          ((pcVar1 = "M", 0x60000d < param_1 && (pcVar1 = "\f", 0xc00005 < param_1)))))))) &&
       ((pcVar1 = (char *)0x1800013, 0x1800013 < param_1 &&
        (((((pcVar1 = (char *)0x3000005, 0x3000005 < param_1 &&
            (pcVar1 = (char *)0x6000017, 0x6000017 < param_1)) &&
           (pcVar1 = (char *)0xc000013, 0xc000013 < param_1)) &&
          ((pcVar1 = (char *)0x18000005, 0x18000005 < param_1 &&
           (pcVar1 = (char *)0x30000059, 0x30000059 < param_1)))) &&
         (pcVar1 = (char *)0x60000005, 0x60000005 < param_1)))))) {
      cpMessage("primes[i]",
                "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/prime.h"
                ,0x40,1,1,"Tried to resize a hash table to a size greater than 1610612741 O_o");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return pcVar1;
}

