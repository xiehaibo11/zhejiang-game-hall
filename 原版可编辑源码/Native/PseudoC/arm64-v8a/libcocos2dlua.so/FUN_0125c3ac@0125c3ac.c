
undefined8 * FUN_0125c3ac(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  void *pvVar15;
  
  pcVar13 = (char *)*param_1;
  if ((pcVar13 == (char *)param_1[1]) || (*pcVar13 != 'f')) {
    return (undefined8 *)0x0;
  }
  pcVar10 = pcVar13 + 1;
  *param_1 = (long)pcVar10;
  if ((char *)param_1[1] == pcVar10) {
    return (undefined8 *)0x0;
  }
  cVar1 = *pcVar10;
  bVar2 = true;
  switch(cVar1) {
  case 'L':
  case 'l':
    break;
  default:
    return (undefined8 *)0x0;
  case 'R':
  case 'r':
    bVar2 = false;
  }
  *param_1 = (long)(pcVar13 + 2);
  uVar3 = __strlen_chk("aa",3);
  pcVar13 = (char *)*param_1;
  if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125c494:
    uVar3 = __strlen_chk(&DAT_013c6bf2,3);
    pcVar13 = (char *)*param_1;
    if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
      if (uVar3 != 0) {
        pcVar10 = "an";
        uVar11 = uVar3;
        pcVar12 = pcVar13;
        do {
          if (*pcVar10 != *pcVar12) goto LAB_0125c500;
          pcVar10 = pcVar10 + 1;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar12 + 1;
        } while (uVar11 != 0);
      }
      *param_1 = (long)(pcVar13 + uVar3);
      pcVar13 = "&";
      uVar9 = 2;
      goto LAB_0125ca5c;
    }
LAB_0125c500:
    uVar3 = __strlen_chk(&DAT_012f0667,3);
    pcVar13 = (char *)*param_1;
    if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125c568:
      uVar3 = __strlen_chk(&DAT_014a8011,3);
      pcVar13 = (char *)*param_1;
      if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
        if (uVar3 != 0) {
          pcVar10 = "aS";
          uVar11 = uVar3;
          pcVar12 = pcVar13;
          do {
            if (*pcVar10 != *pcVar12) goto LAB_0125c5d4;
            pcVar10 = pcVar10 + 1;
            uVar11 = uVar11 - 1;
            pcVar12 = pcVar12 + 1;
          } while (uVar11 != 0);
        }
        *param_1 = (long)(pcVar13 + uVar3);
        pcVar13 = "=";
        uVar9 = 2;
        goto LAB_0125ca5c;
      }
LAB_0125c5d4:
      uVar3 = __strlen_chk(&DAT_013e7b38,3);
      pcVar13 = (char *)*param_1;
      if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
        if (uVar3 != 0) {
          pcVar10 = "cm";
          uVar11 = uVar3;
          pcVar12 = pcVar13;
          do {
            if (*pcVar10 != *pcVar12) goto LAB_0125c640;
            pcVar10 = pcVar10 + 1;
            uVar11 = uVar11 - 1;
            pcVar12 = pcVar12 + 1;
          } while (uVar11 != 0);
        }
        *param_1 = (long)(pcVar13 + uVar3);
        pcVar13 = ",";
        uVar9 = 2;
        goto LAB_0125ca5c;
      }
LAB_0125c640:
      uVar3 = __strlen_chk("ds",3);
      pcVar13 = (char *)*param_1;
      if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125c6a8:
        uVar3 = __strlen_chk("dv",3);
        pcVar13 = (char *)*param_1;
        if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
          if (uVar3 != 0) {
            pcVar10 = "dv";
            uVar11 = uVar3;
            pcVar12 = pcVar13;
            do {
              if (*pcVar10 != *pcVar12) goto LAB_0125c714;
              pcVar10 = pcVar10 + 1;
              uVar11 = uVar11 - 1;
              pcVar12 = pcVar12 + 1;
            } while (uVar11 != 0);
          }
          *param_1 = (long)(pcVar13 + uVar3);
          pcVar13 = "/";
          uVar9 = 2;
          goto LAB_0125ca5c;
        }
LAB_0125c714:
        uVar3 = __strlen_chk("dV",3);
        pcVar13 = (char *)*param_1;
        if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125c77c:
          uVar3 = __strlen_chk("eo",3);
          pcVar13 = (char *)*param_1;
          if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
            if (uVar3 != 0) {
              pcVar10 = "eo";
              uVar11 = uVar3;
              pcVar12 = pcVar13;
              do {
                if (*pcVar10 != *pcVar12) goto LAB_0125c7e8;
                pcVar10 = pcVar10 + 1;
                uVar11 = uVar11 - 1;
                pcVar12 = pcVar12 + 1;
              } while (uVar11 != 0);
            }
            *param_1 = (long)(pcVar13 + uVar3);
            pcVar13 = "^";
            uVar9 = 2;
            goto LAB_0125ca5c;
          }
LAB_0125c7e8:
          uVar3 = __strlen_chk(&DAT_014a8014,3);
          pcVar13 = (char *)*param_1;
          if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125c850:
            uVar3 = __strlen_chk(&DAT_012efc26,3);
            pcVar13 = (char *)*param_1;
            if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125c8b8:
              uVar3 = __strlen_chk("ge",3);
              pcVar13 = (char *)*param_1;
              if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125c920:
                uVar3 = __strlen_chk(&DAT_01458aa3,3);
                pcVar13 = (char *)*param_1;
                if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                  if (uVar3 != 0) {
                    pcVar10 = "gt";
                    uVar11 = uVar3;
                    pcVar12 = pcVar13;
                    do {
                      if (*pcVar10 != *pcVar12) goto LAB_0125c98c;
                      pcVar10 = pcVar10 + 1;
                      uVar11 = uVar11 - 1;
                      pcVar12 = pcVar12 + 1;
                    } while (uVar11 != 0);
                  }
                  *param_1 = (long)(pcVar13 + uVar3);
                  pcVar13 = ">";
                  uVar9 = 2;
                  goto LAB_0125ca5c;
                }
LAB_0125c98c:
                uVar3 = __strlen_chk(&DAT_012efc22,3);
                pcVar13 = (char *)*param_1;
                if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125c9f4:
                  uVar3 = __strlen_chk("ls",3);
                  pcVar13 = (char *)*param_1;
                  if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125cb10:
                    uVar3 = __strlen_chk(&DAT_014a8017,3);
                    pcVar13 = (char *)*param_1;
                    if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                      if (uVar3 != 0) {
                        pcVar10 = "lS";
                        uVar11 = uVar3;
                        pcVar12 = pcVar13;
                        do {
                          if (*pcVar10 != *pcVar12) goto LAB_0125cb7c;
                          pcVar10 = pcVar10 + 1;
                          uVar11 = uVar11 - 1;
                          pcVar12 = pcVar12 + 1;
                        } while (uVar11 != 0);
                      }
                      *param_1 = (long)(pcVar13 + uVar3);
                      pcVar13 = "operator<<=";
LAB_0125cb74:
                      pcVar13 = pcVar13 + 8;
                      uVar9 = 4;
                      goto LAB_0125ca5c;
                    }
LAB_0125cb7c:
                    uVar3 = __strlen_chk(&DAT_012efc1e,3);
                    pcVar13 = (char *)*param_1;
                    if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                      if (uVar3 != 0) {
                        pcVar10 = "lt";
                        uVar11 = uVar3;
                        pcVar12 = pcVar13;
                        do {
                          if (*pcVar10 != *pcVar12) goto LAB_0125cbe8;
                          pcVar10 = pcVar10 + 1;
                          uVar11 = uVar11 - 1;
                          pcVar12 = pcVar12 + 1;
                        } while (uVar11 != 0);
                      }
                      *param_1 = (long)(pcVar13 + uVar3);
                      pcVar13 = "<";
                      uVar9 = 2;
                      goto LAB_0125ca5c;
                    }
LAB_0125cbe8:
                    uVar3 = __strlen_chk(&DAT_014a801a,3);
                    pcVar13 = (char *)*param_1;
                    if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                      if (uVar3 != 0) {
                        pcVar10 = "mi";
                        uVar11 = uVar3;
                        pcVar12 = pcVar13;
                        do {
                          if (*pcVar10 != *pcVar12) goto LAB_0125cc54;
                          pcVar10 = pcVar10 + 1;
                          uVar11 = uVar11 - 1;
                          pcVar12 = pcVar12 + 1;
                        } while (uVar11 != 0);
                      }
                      *param_1 = (long)(pcVar13 + uVar3);
                      pcVar13 = "-";
                      uVar9 = 2;
                      goto LAB_0125ca5c;
                    }
LAB_0125cc54:
                    uVar3 = __strlen_chk(&DAT_014a801d,3);
                    pcVar13 = (char *)*param_1;
                    if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125ccbc:
                      uVar3 = __strlen_chk("ml",3);
                      pcVar13 = (char *)*param_1;
                      if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                        if (uVar3 != 0) {
                          pcVar10 = "ml";
                          uVar11 = uVar3;
                          pcVar12 = pcVar13;
                          do {
                            if (*pcVar10 != *pcVar12) goto LAB_0125cd28;
                            pcVar10 = pcVar10 + 1;
                            uVar11 = uVar11 - 1;
                            pcVar12 = pcVar12 + 1;
                          } while (uVar11 != 0);
                        }
                        *param_1 = (long)(pcVar13 + uVar3);
                        pcVar13 = "*";
                        uVar9 = 2;
                        goto LAB_0125ca5c;
                      }
LAB_0125cd28:
                      uVar3 = __strlen_chk(&DAT_014a8020,3);
                      pcVar13 = (char *)*param_1;
                      if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125cd90:
                        uVar3 = __strlen_chk("ne",3);
                        pcVar13 = (char *)*param_1;
                        if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125cdf8:
                          uVar3 = __strlen_chk(&DAT_014a8023,3);
                          pcVar13 = (char *)*param_1;
                          if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125ce60:
                            uVar3 = __strlen_chk(&DAT_012f1588,3);
                            pcVar13 = (char *)*param_1;
                            if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                              if (uVar3 != 0) {
                                pcVar10 = "or";
                                uVar11 = uVar3;
                                pcVar12 = pcVar13;
                                do {
                                  if (*pcVar10 != *pcVar12) goto LAB_0125cecc;
                                  pcVar10 = pcVar10 + 1;
                                  uVar11 = uVar11 - 1;
                                  pcVar12 = pcVar12 + 1;
                                } while (uVar11 != 0);
                              }
                              *param_1 = (long)(pcVar13 + uVar3);
                              pcVar13 = "|";
                              uVar9 = 2;
                              goto LAB_0125ca5c;
                            }
LAB_0125cecc:
                            uVar3 = __strlen_chk(&DAT_014a8026,3);
                            pcVar13 = (char *)*param_1;
                            if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125cf34:
                              uVar3 = __strlen_chk("pl",3);
                              pcVar13 = (char *)*param_1;
                              if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                                if (uVar3 != 0) {
                                  pcVar10 = "pl";
                                  uVar11 = uVar3;
                                  pcVar12 = pcVar13;
                                  do {
                                    if (*pcVar10 != *pcVar12) goto LAB_0125cfa0;
                                    pcVar10 = pcVar10 + 1;
                                    uVar11 = uVar11 - 1;
                                    pcVar12 = pcVar12 + 1;
                                  } while (uVar11 != 0);
                                }
                                *param_1 = (long)(pcVar13 + uVar3);
                                pcVar13 = "+";
                                uVar9 = 2;
                                goto LAB_0125ca5c;
                              }
LAB_0125cfa0:
                              uVar3 = __strlen_chk(&DAT_014a8029,3);
                              pcVar13 = (char *)*param_1;
                              if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125d008:
                                uVar3 = __strlen_chk("rm",3);
                                pcVar13 = (char *)*param_1;
                                if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                                  if (uVar3 != 0) {
                                    pcVar10 = "rm";
                                    uVar11 = uVar3;
                                    pcVar12 = pcVar13;
                                    do {
                                      if (*pcVar10 != *pcVar12) goto LAB_0125d074;
                                      pcVar10 = pcVar10 + 1;
                                      uVar11 = uVar11 - 1;
                                      pcVar12 = pcVar12 + 1;
                                    } while (uVar11 != 0);
                                  }
                                  *param_1 = (long)(pcVar13 + uVar3);
                                  pcVar13 = "%";
                                  uVar9 = 2;
                                  goto LAB_0125ca5c;
                                }
LAB_0125d074:
                                uVar3 = __strlen_chk(&DAT_01412bc5,3);
                                pcVar13 = (char *)*param_1;
                                if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125d0dc:
                                  uVar3 = __strlen_chk("rs",3);
                                  pcVar13 = (char *)*param_1;
                                  if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0125d144:
                                    uVar3 = __strlen_chk(&DAT_014a802c,3);
                                    pcVar10 = (char *)*param_1;
                                    if ((ulong)(param_1[1] - (long)pcVar10) < uVar3) {
                                      return (undefined8 *)0x0;
                                    }
                                    if (uVar3 != 0) {
                                      pcVar13 = "rS";
                                      uVar11 = uVar3;
                                      pcVar12 = pcVar10;
                                      do {
                                        if (*pcVar13 != *pcVar12) {
                                          return (undefined8 *)0x0;
                                        }
                                        pcVar13 = pcVar13 + 1;
                                        uVar11 = uVar11 - 1;
                                        pcVar12 = pcVar12 + 1;
                                      } while (uVar11 != 0);
                                    }
                                    pcVar13 = "operator>>=";
                                    *param_1 = (long)(pcVar10 + uVar3);
                                    goto LAB_0125cb74;
                                  }
                                  if (uVar3 != 0) {
                                    pcVar10 = "rs";
                                    uVar11 = uVar3;
                                    pcVar12 = pcVar13;
                                    do {
                                      if (*pcVar10 != *pcVar12) goto LAB_0125d144;
                                      pcVar10 = pcVar10 + 1;
                                      uVar11 = uVar11 - 1;
                                      pcVar12 = pcVar12 + 1;
                                    } while (uVar11 != 0);
                                  }
                                  *param_1 = (long)(pcVar13 + uVar3);
                                  pcVar13 = ">>";
                                }
                                else {
                                  if (uVar3 != 0) {
                                    pcVar10 = "rM";
                                    uVar11 = uVar3;
                                    pcVar12 = pcVar13;
                                    do {
                                      if (*pcVar10 != *pcVar12) goto LAB_0125d0dc;
                                      pcVar10 = pcVar10 + 1;
                                      uVar11 = uVar11 - 1;
                                      pcVar12 = pcVar12 + 1;
                                    } while (uVar11 != 0);
                                  }
                                  *param_1 = (long)(pcVar13 + uVar3);
                                  pcVar13 = "%=";
                                }
                              }
                              else {
                                if (uVar3 != 0) {
                                  pcVar10 = "pL";
                                  uVar11 = uVar3;
                                  pcVar12 = pcVar13;
                                  do {
                                    if (*pcVar10 != *pcVar12) goto LAB_0125d008;
                                    pcVar10 = pcVar10 + 1;
                                    uVar11 = uVar11 - 1;
                                    pcVar12 = pcVar12 + 1;
                                  } while (uVar11 != 0);
                                }
                                *param_1 = (long)(pcVar13 + uVar3);
                                pcVar13 = "+=";
                              }
                            }
                            else {
                              if (uVar3 != 0) {
                                pcVar10 = "oR";
                                uVar11 = uVar3;
                                pcVar12 = pcVar13;
                                do {
                                  if (*pcVar10 != *pcVar12) goto LAB_0125cf34;
                                  pcVar10 = pcVar10 + 1;
                                  uVar11 = uVar11 - 1;
                                  pcVar12 = pcVar12 + 1;
                                } while (uVar11 != 0);
                              }
                              *param_1 = (long)(pcVar13 + uVar3);
                              pcVar13 = "|=";
                            }
                          }
                          else {
                            if (uVar3 != 0) {
                              pcVar10 = "oo";
                              uVar11 = uVar3;
                              pcVar12 = pcVar13;
                              do {
                                if (*pcVar10 != *pcVar12) goto LAB_0125ce60;
                                pcVar10 = pcVar10 + 1;
                                uVar11 = uVar11 - 1;
                                pcVar12 = pcVar12 + 1;
                              } while (uVar11 != 0);
                            }
                            *param_1 = (long)(pcVar13 + uVar3);
                            pcVar13 = "||";
                          }
                        }
                        else {
                          if (uVar3 != 0) {
                            pcVar10 = "ne";
                            uVar11 = uVar3;
                            pcVar12 = pcVar13;
                            do {
                              if (*pcVar10 != *pcVar12) goto LAB_0125cdf8;
                              pcVar10 = pcVar10 + 1;
                              uVar11 = uVar11 - 1;
                              pcVar12 = pcVar12 + 1;
                            } while (uVar11 != 0);
                          }
                          *param_1 = (long)(pcVar13 + uVar3);
                          pcVar13 = "!=";
                        }
                      }
                      else {
                        if (uVar3 != 0) {
                          pcVar10 = "mL";
                          uVar11 = uVar3;
                          pcVar12 = pcVar13;
                          do {
                            if (*pcVar10 != *pcVar12) goto LAB_0125cd90;
                            pcVar10 = pcVar10 + 1;
                            uVar11 = uVar11 - 1;
                            pcVar12 = pcVar12 + 1;
                          } while (uVar11 != 0);
                        }
                        *param_1 = (long)(pcVar13 + uVar3);
                        pcVar13 = "*=";
                      }
                    }
                    else {
                      if (uVar3 != 0) {
                        pcVar10 = "mI";
                        uVar11 = uVar3;
                        pcVar12 = pcVar13;
                        do {
                          if (*pcVar10 != *pcVar12) goto LAB_0125ccbc;
                          pcVar10 = pcVar10 + 1;
                          uVar11 = uVar11 - 1;
                          pcVar12 = pcVar12 + 1;
                        } while (uVar11 != 0);
                      }
                      *param_1 = (long)(pcVar13 + uVar3);
                      pcVar13 = "-=";
                    }
                  }
                  else {
                    if (uVar3 != 0) {
                      pcVar10 = "ls";
                      uVar11 = uVar3;
                      pcVar12 = pcVar13;
                      do {
                        if (*pcVar10 != *pcVar12) goto LAB_0125cb10;
                        pcVar10 = pcVar10 + 1;
                        uVar11 = uVar11 - 1;
                        pcVar12 = pcVar12 + 1;
                      } while (uVar11 != 0);
                    }
                    *param_1 = (long)(pcVar13 + uVar3);
                    pcVar13 = "<<";
                  }
                }
                else {
                  if (uVar3 != 0) {
                    pcVar10 = "le";
                    uVar11 = uVar3;
                    pcVar12 = pcVar13;
                    do {
                      if (*pcVar10 != *pcVar12) goto LAB_0125c9f4;
                      pcVar10 = pcVar10 + 1;
                      uVar11 = uVar11 - 1;
                      pcVar12 = pcVar12 + 1;
                    } while (uVar11 != 0);
                  }
                  *param_1 = (long)(pcVar13 + uVar3);
                  pcVar13 = "<=";
                }
              }
              else {
                if (uVar3 != 0) {
                  pcVar10 = "ge";
                  uVar11 = uVar3;
                  pcVar12 = pcVar13;
                  do {
                    if (*pcVar10 != *pcVar12) goto LAB_0125c920;
                    pcVar10 = pcVar10 + 1;
                    uVar11 = uVar11 - 1;
                    pcVar12 = pcVar12 + 1;
                  } while (uVar11 != 0);
                }
                *param_1 = (long)(pcVar13 + uVar3);
                pcVar13 = ">=";
              }
            }
            else {
              if (uVar3 != 0) {
                pcVar10 = "eq";
                uVar11 = uVar3;
                pcVar12 = pcVar13;
                do {
                  if (*pcVar10 != *pcVar12) goto LAB_0125c8b8;
                  pcVar10 = pcVar10 + 1;
                  uVar11 = uVar11 - 1;
                  pcVar12 = pcVar12 + 1;
                } while (uVar11 != 0);
              }
              *param_1 = (long)(pcVar13 + uVar3);
              pcVar13 = "==";
            }
          }
          else {
            if (uVar3 != 0) {
              pcVar10 = "eO";
              uVar11 = uVar3;
              pcVar12 = pcVar13;
              do {
                if (*pcVar10 != *pcVar12) goto LAB_0125c850;
                pcVar10 = pcVar10 + 1;
                uVar11 = uVar11 - 1;
                pcVar12 = pcVar12 + 1;
              } while (uVar11 != 0);
            }
            *param_1 = (long)(pcVar13 + uVar3);
            pcVar13 = "^=";
          }
        }
        else {
          if (uVar3 != 0) {
            pcVar10 = "dV";
            uVar11 = uVar3;
            pcVar12 = pcVar13;
            do {
              if (*pcVar10 != *pcVar12) goto LAB_0125c77c;
              pcVar10 = pcVar10 + 1;
              uVar11 = uVar11 - 1;
              pcVar12 = pcVar12 + 1;
            } while (uVar11 != 0);
          }
          *param_1 = (long)(pcVar13 + uVar3);
          pcVar13 = "/=";
        }
      }
      else {
        if (uVar3 != 0) {
          pcVar10 = "ds";
          uVar11 = uVar3;
          pcVar12 = pcVar13;
          do {
            if (*pcVar10 != *pcVar12) goto LAB_0125c6a8;
            pcVar10 = pcVar10 + 1;
            uVar11 = uVar11 - 1;
            pcVar12 = pcVar12 + 1;
          } while (uVar11 != 0);
        }
        *param_1 = (long)(pcVar13 + uVar3);
        pcVar13 = ".*";
      }
    }
    else {
      if (uVar3 != 0) {
        pcVar10 = "aN";
        uVar11 = uVar3;
        pcVar12 = pcVar13;
        do {
          if (*pcVar10 != *pcVar12) goto LAB_0125c568;
          pcVar10 = pcVar10 + 1;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar12 + 1;
        } while (uVar11 != 0);
      }
      *param_1 = (long)(pcVar13 + uVar3);
      pcVar13 = "&=";
    }
  }
  else {
    if (uVar3 != 0) {
      pcVar10 = "aa";
      uVar11 = uVar3;
      pcVar12 = pcVar13;
      do {
        if (*pcVar10 != *pcVar12) goto LAB_0125c494;
        pcVar10 = pcVar10 + 1;
        uVar11 = uVar11 - 1;
        pcVar12 = pcVar12 + 1;
      } while (uVar11 != 0);
    }
    *param_1 = (long)(pcVar13 + uVar3);
    pcVar13 = "&&";
  }
  uVar9 = 3;
LAB_0125ca5c:
  lVar4 = __strlen_chk(pcVar13,uVar9);
  lVar5 = FUN_01259b70(param_1);
  if (lVar5 == 0) {
    return (undefined8 *)0x0;
  }
  if ((cVar1 == 'R') || (cVar1 == 'L')) {
    lVar6 = FUN_01259b70(param_1);
    if (lVar6 == 0) {
      return (undefined8 *)0x0;
    }
    lVar14 = lVar6;
    if (!bVar2) {
      lVar14 = lVar5;
      lVar5 = lVar6;
    }
  }
  else {
    lVar14 = lVar5;
    lVar5 = 0;
  }
  pvVar15 = (void *)param_1[0x25c];
  lVar6 = *(long *)((long)pvVar15 + 8);
  puVar7 = pvVar15;
  if (0xfef < lVar6 + 0x40U) {
    puVar7 = malloc(0x1000);
    if (puVar7 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar6 = 0;
    *puVar7 = pvVar15;
    puVar7[1] = 0;
    param_1[0x25c] = (long)puVar7;
  }
  *(long *)((long)puVar7 + 8) = lVar6 + 0x40;
  puVar8 = (undefined8 *)((long)puVar7 + lVar6 + 0x10);
  *puVar8 = &PTR_FUN_01735db8;
  *(undefined4 *)((long)puVar7 + lVar6 + 0x18) = 0x1010139;
  *(long *)((long)puVar7 + lVar6 + 0x20) = lVar14;
  *(long *)((long)puVar7 + lVar6 + 0x28) = lVar5;
  *(char **)((long)puVar7 + lVar6 + 0x30) = pcVar13;
  *(char **)((long)puVar7 + lVar6 + 0x38) = pcVar13 + lVar4;
  *(bool *)((long)puVar7 + lVar6 + 0x40) = bVar2;
  return puVar8;
}

