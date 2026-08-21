
/* cocos2d::utils::getLanguageTypeByISO2(char const*) */

undefined4 cocos2d::utils::getLanguageTypeByISO2(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strncmp(param_1,"zh",2);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = strncmp(param_1,"ja",2);
    if (iVar1 == 0) {
      uVar2 = 9;
    }
    else {
      uVar2 = 2;
      iVar1 = strncmp(param_1,"fr",2);
      if (iVar1 != 0) {
        iVar1 = strncmp(param_1,"it",2);
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = strncmp(param_1,"de",2);
          if (iVar1 == 0) {
            uVar2 = 4;
          }
          else {
            iVar1 = strncmp(param_1,"es",2);
            if (iVar1 == 0) {
              uVar2 = 5;
            }
            else {
              iVar1 = strncmp(param_1,"nl",2);
              if (iVar1 == 0) {
                uVar2 = 6;
              }
              else {
                iVar1 = strncmp(param_1,"ru",2);
                if (iVar1 == 0) {
                  uVar2 = 7;
                }
                else {
                  iVar1 = strncmp(param_1,"hu",2);
                  if (iVar1 == 0) {
                    uVar2 = 10;
                  }
                  else {
                    iVar1 = strncmp(param_1,"pt",2);
                    if (iVar1 == 0) {
                      uVar2 = 0xb;
                    }
                    else {
                      iVar1 = strncmp(param_1,"ko",2);
                      if (iVar1 == 0) {
                        uVar2 = 8;
                      }
                      else {
                        iVar1 = strncmp(param_1,"ar",2);
                        if (iVar1 == 0) {
                          uVar2 = 0xc;
                        }
                        else {
                          iVar1 = strncmp(param_1,"nb",2);
                          if (iVar1 == 0) {
                            uVar2 = 0xd;
                          }
                          else {
                            iVar1 = strncmp(param_1,"pl",2);
                            if (iVar1 == 0) {
                              uVar2 = 0xe;
                            }
                            else {
                              iVar1 = strncmp(param_1,"tr",2);
                              if (iVar1 == 0) {
                                uVar2 = 0xf;
                              }
                              else {
                                iVar1 = strncmp(param_1,"uk",2);
                                if (iVar1 == 0) {
                                  uVar2 = 0x10;
                                }
                                else {
                                  iVar1 = strncmp(param_1,"ro",2);
                                  if (iVar1 == 0) {
                                    uVar2 = 0x11;
                                  }
                                  else {
                                    iVar1 = strncmp(param_1,"bg",2);
                                    if (iVar1 == 0) {
                                      uVar2 = 0x12;
                                    }
                                    else {
                                      iVar1 = strncmp(param_1,"be",2);
                                      uVar2 = 0x13;
                                      if (iVar1 != 0) {
                                        uVar2 = 0;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

