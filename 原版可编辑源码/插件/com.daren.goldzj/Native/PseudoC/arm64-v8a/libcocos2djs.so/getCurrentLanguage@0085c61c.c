
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::Application::getCurrentLanguage() const */

undefined4 cocos2d::Application::getCurrentLanguage(void)

{
  char *__s2;
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getCurrentLanguageJNI();
  __s2 = (char *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    __s2 = local_40;
  }
  iVar2 = strcmp("zh",__s2);
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  else {
    iVar2 = strcmp("en",__s2);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      iVar2 = strcmp("fr",__s2);
      if (iVar2 == 0) {
        uVar3 = 2;
      }
      else {
        iVar2 = strcmp("it",__s2);
        if (iVar2 == 0) {
          uVar3 = 3;
        }
        else {
          iVar2 = strcmp("de",__s2);
          if (iVar2 == 0) {
            uVar3 = 4;
          }
          else {
            iVar2 = strcmp("es",__s2);
            if (iVar2 == 0) {
              uVar3 = 5;
            }
            else {
              iVar2 = strcmp("ru",__s2);
              if (iVar2 == 0) {
                uVar3 = 7;
              }
              else {
                iVar2 = strcmp("nl",__s2);
                if (iVar2 == 0) {
                  uVar3 = 6;
                }
                else {
                  iVar2 = strcmp("ko",__s2);
                  if (iVar2 == 0) {
                    uVar3 = 8;
                  }
                  else {
                    iVar2 = strcmp("ja",__s2);
                    if (iVar2 == 0) {
                      uVar3 = 9;
                    }
                    else {
                      iVar2 = strcmp("hu",__s2);
                      if (iVar2 == 0) {
                        uVar3 = 10;
                      }
                      else {
                        iVar2 = strcmp("pt",__s2);
                        if (iVar2 == 0) {
                          uVar3 = 0xb;
                        }
                        else {
                          iVar2 = strcmp("ar",__s2);
                          if (iVar2 == 0) {
                            uVar3 = 0xc;
                          }
                          else {
                            iVar2 = strcmp("nb",__s2);
                            if (iVar2 == 0) {
                              uVar3 = 0xd;
                            }
                            else {
                              iVar2 = strcmp("pl",__s2);
                              if (iVar2 == 0) {
                                uVar3 = 0xe;
                              }
                              else {
                                iVar2 = strcmp("tr",__s2);
                                if (iVar2 == 0) {
                                  uVar3 = 0xf;
                                }
                                else {
                                  iVar2 = strcmp("uk",__s2);
                                  if (iVar2 == 0) {
                                    uVar3 = 0x10;
                                  }
                                  else {
                                    iVar2 = strcmp("ro",__s2);
                                    if (iVar2 == 0) {
                                      uVar3 = 0x11;
                                    }
                                    else {
                                      iVar2 = strcmp("bg",__s2);
                                      uVar3 = 0x12;
                                      if (iVar2 != 0) {
                                        uVar3 = 0;
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
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

