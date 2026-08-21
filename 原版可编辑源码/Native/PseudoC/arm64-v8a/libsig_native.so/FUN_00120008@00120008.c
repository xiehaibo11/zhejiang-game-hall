
undefined8 * FUN_00120008(long *param_1)

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
  uVar3 = __strlen_chk(&DAT_0012efd8,3);
  pcVar13 = (char *)*param_1;
  if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_001200f0:
    uVar3 = __strlen_chk(&DAT_0012efdb,3);
    pcVar13 = (char *)*param_1;
    if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
      if (uVar3 != 0) {
        pcVar10 = "an";
        uVar11 = uVar3;
        pcVar12 = pcVar13;
        do {
          if (*pcVar10 != *pcVar12) goto LAB_0012015c;
          pcVar10 = pcVar10 + 1;
          uVar11 = uVar11 - 1;
          pcVar12 = pcVar12 + 1;
        } while (uVar11 != 0);
      }
      *param_1 = (long)(pcVar13 + uVar3);
      pcVar13 = "&";
      uVar9 = 2;
      goto LAB_001206b8;
    }
LAB_0012015c:
    uVar3 = __strlen_chk(&DAT_0012efde,3);
    pcVar13 = (char *)*param_1;
    if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_001201c4:
      uVar3 = __strlen_chk(&DAT_0012efe1,3);
      pcVar13 = (char *)*param_1;
      if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
        if (uVar3 != 0) {
          pcVar10 = "aS";
          uVar11 = uVar3;
          pcVar12 = pcVar13;
          do {
            if (*pcVar10 != *pcVar12) goto LAB_00120230;
            pcVar10 = pcVar10 + 1;
            uVar11 = uVar11 - 1;
            pcVar12 = pcVar12 + 1;
          } while (uVar11 != 0);
        }
        *param_1 = (long)(pcVar13 + uVar3);
        pcVar13 = "=";
        uVar9 = 2;
        goto LAB_001206b8;
      }
LAB_00120230:
      uVar3 = __strlen_chk(&DAT_0012efe4,3);
      pcVar13 = (char *)*param_1;
      if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
        if (uVar3 != 0) {
          pcVar10 = "cm";
          uVar11 = uVar3;
          pcVar12 = pcVar13;
          do {
            if (*pcVar10 != *pcVar12) goto LAB_0012029c;
            pcVar10 = pcVar10 + 1;
            uVar11 = uVar11 - 1;
            pcVar12 = pcVar12 + 1;
          } while (uVar11 != 0);
        }
        *param_1 = (long)(pcVar13 + uVar3);
        pcVar13 = ",";
        uVar9 = 2;
        goto LAB_001206b8;
      }
LAB_0012029c:
      uVar3 = __strlen_chk(&DAT_0012efe7,3);
      pcVar13 = (char *)*param_1;
      if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_00120304:
        uVar3 = __strlen_chk(&DAT_0012efea,3);
        pcVar13 = (char *)*param_1;
        if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
          if (uVar3 != 0) {
            pcVar10 = "dv";
            uVar11 = uVar3;
            pcVar12 = pcVar13;
            do {
              if (*pcVar10 != *pcVar12) goto LAB_00120370;
              pcVar10 = pcVar10 + 1;
              uVar11 = uVar11 - 1;
              pcVar12 = pcVar12 + 1;
            } while (uVar11 != 0);
          }
          *param_1 = (long)(pcVar13 + uVar3);
          pcVar13 = "/";
          uVar9 = 2;
          goto LAB_001206b8;
        }
LAB_00120370:
        uVar3 = __strlen_chk(&DAT_0012efed,3);
        pcVar13 = (char *)*param_1;
        if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_001203d8:
          uVar3 = __strlen_chk(&DAT_0012eff0,3);
          pcVar13 = (char *)*param_1;
          if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
            if (uVar3 != 0) {
              pcVar10 = "eo";
              uVar11 = uVar3;
              pcVar12 = pcVar13;
              do {
                if (*pcVar10 != *pcVar12) goto LAB_00120444;
                pcVar10 = pcVar10 + 1;
                uVar11 = uVar11 - 1;
                pcVar12 = pcVar12 + 1;
              } while (uVar11 != 0);
            }
            *param_1 = (long)(pcVar13 + uVar3);
            pcVar13 = "^";
            uVar9 = 2;
            goto LAB_001206b8;
          }
LAB_00120444:
          uVar3 = __strlen_chk(&DAT_0012eff3,3);
          pcVar13 = (char *)*param_1;
          if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_001204ac:
            uVar3 = __strlen_chk(&DAT_0012eff6,3);
            pcVar13 = (char *)*param_1;
            if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_00120514:
              uVar3 = __strlen_chk(&DAT_0012eff9,3);
              pcVar13 = (char *)*param_1;
              if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0012057c:
                uVar3 = __strlen_chk(&DAT_0012effc,3);
                pcVar13 = (char *)*param_1;
                if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                  if (uVar3 != 0) {
                    pcVar10 = "gt";
                    uVar11 = uVar3;
                    pcVar12 = pcVar13;
                    do {
                      if (*pcVar10 != *pcVar12) goto LAB_001205e8;
                      pcVar10 = pcVar10 + 1;
                      uVar11 = uVar11 - 1;
                      pcVar12 = pcVar12 + 1;
                    } while (uVar11 != 0);
                  }
                  *param_1 = (long)(pcVar13 + uVar3);
                  pcVar13 = ">";
                  uVar9 = 2;
                  goto LAB_001206b8;
                }
LAB_001205e8:
                uVar3 = __strlen_chk("le",3);
                pcVar13 = (char *)*param_1;
                if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_00120650:
                  uVar3 = __strlen_chk("ls",3);
                  pcVar13 = (char *)*param_1;
                  if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_0012076c:
                    uVar3 = __strlen_chk(&DAT_0012efff,3);
                    pcVar13 = (char *)*param_1;
                    if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                      if (uVar3 != 0) {
                        pcVar10 = "lS";
                        uVar11 = uVar3;
                        pcVar12 = pcVar13;
                        do {
                          if (*pcVar10 != *pcVar12) goto LAB_001207d8;
                          pcVar10 = pcVar10 + 1;
                          uVar11 = uVar11 - 1;
                          pcVar12 = pcVar12 + 1;
                        } while (uVar11 != 0);
                      }
                      *param_1 = (long)(pcVar13 + uVar3);
                      pcVar13 = "operator<<=";
LAB_001207d0:
                      pcVar13 = pcVar13 + 8;
                      uVar9 = 4;
                      goto LAB_001206b8;
                    }
LAB_001207d8:
                    uVar3 = __strlen_chk(&DAT_0012f002,3);
                    pcVar13 = (char *)*param_1;
                    if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                      if (uVar3 != 0) {
                        pcVar10 = "lt";
                        uVar11 = uVar3;
                        pcVar12 = pcVar13;
                        do {
                          if (*pcVar10 != *pcVar12) goto LAB_00120844;
                          pcVar10 = pcVar10 + 1;
                          uVar11 = uVar11 - 1;
                          pcVar12 = pcVar12 + 1;
                        } while (uVar11 != 0);
                      }
                      *param_1 = (long)(pcVar13 + uVar3);
                      pcVar13 = "<";
                      uVar9 = 2;
                      goto LAB_001206b8;
                    }
LAB_00120844:
                    uVar3 = __strlen_chk(&DAT_0012f005,3);
                    pcVar13 = (char *)*param_1;
                    if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                      if (uVar3 != 0) {
                        pcVar10 = "mi";
                        uVar11 = uVar3;
                        pcVar12 = pcVar13;
                        do {
                          if (*pcVar10 != *pcVar12) goto LAB_001208b0;
                          pcVar10 = pcVar10 + 1;
                          uVar11 = uVar11 - 1;
                          pcVar12 = pcVar12 + 1;
                        } while (uVar11 != 0);
                      }
                      *param_1 = (long)(pcVar13 + uVar3);
                      pcVar13 = "-";
                      uVar9 = 2;
                      goto LAB_001206b8;
                    }
LAB_001208b0:
                    uVar3 = __strlen_chk(&DAT_0012f008,3);
                    pcVar13 = (char *)*param_1;
                    if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_00120918:
                      uVar3 = __strlen_chk(&DAT_0012f00b,3);
                      pcVar13 = (char *)*param_1;
                      if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                        if (uVar3 != 0) {
                          pcVar10 = "ml";
                          uVar11 = uVar3;
                          pcVar12 = pcVar13;
                          do {
                            if (*pcVar10 != *pcVar12) goto LAB_00120984;
                            pcVar10 = pcVar10 + 1;
                            uVar11 = uVar11 - 1;
                            pcVar12 = pcVar12 + 1;
                          } while (uVar11 != 0);
                        }
                        *param_1 = (long)(pcVar13 + uVar3);
                        pcVar13 = "*";
                        uVar9 = 2;
                        goto LAB_001206b8;
                      }
LAB_00120984:
                      uVar3 = __strlen_chk(&DAT_0012f00e,3);
                      pcVar13 = (char *)*param_1;
                      if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_001209ec:
                        uVar3 = __strlen_chk(&DAT_0012f011,3);
                        pcVar13 = (char *)*param_1;
                        if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_00120a54:
                          uVar3 = __strlen_chk(&DAT_0012f014,3);
                          pcVar13 = (char *)*param_1;
                          if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_00120abc:
                            uVar3 = __strlen_chk("or",3);
                            pcVar13 = (char *)*param_1;
                            if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                              if (uVar3 != 0) {
                                pcVar10 = "or";
                                uVar11 = uVar3;
                                pcVar12 = pcVar13;
                                do {
                                  if (*pcVar10 != *pcVar12) goto LAB_00120b28;
                                  pcVar10 = pcVar10 + 1;
                                  uVar11 = uVar11 - 1;
                                  pcVar12 = pcVar12 + 1;
                                } while (uVar11 != 0);
                              }
                              *param_1 = (long)(pcVar13 + uVar3);
                              pcVar13 = "|";
                              uVar9 = 2;
                              goto LAB_001206b8;
                            }
LAB_00120b28:
                            uVar3 = __strlen_chk(&DAT_0012f017,3);
                            pcVar13 = (char *)*param_1;
                            if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_00120b90:
                              uVar3 = __strlen_chk(&DAT_0012f01a,3);
                              pcVar13 = (char *)*param_1;
                              if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                                if (uVar3 != 0) {
                                  pcVar10 = "pl";
                                  uVar11 = uVar3;
                                  pcVar12 = pcVar13;
                                  do {
                                    if (*pcVar10 != *pcVar12) goto LAB_00120bfc;
                                    pcVar10 = pcVar10 + 1;
                                    uVar11 = uVar11 - 1;
                                    pcVar12 = pcVar12 + 1;
                                  } while (uVar11 != 0);
                                }
                                *param_1 = (long)(pcVar13 + uVar3);
                                pcVar13 = "+";
                                uVar9 = 2;
                                goto LAB_001206b8;
                              }
LAB_00120bfc:
                              uVar3 = __strlen_chk(&DAT_0012f01d,3);
                              pcVar13 = (char *)*param_1;
                              if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_00120c64:
                                uVar3 = __strlen_chk(&DAT_0012f020,3);
                                pcVar13 = (char *)*param_1;
                                if (uVar3 <= (ulong)(param_1[1] - (long)pcVar13)) {
                                  if (uVar3 != 0) {
                                    pcVar10 = "rm";
                                    uVar11 = uVar3;
                                    pcVar12 = pcVar13;
                                    do {
                                      if (*pcVar10 != *pcVar12) goto LAB_00120cd0;
                                      pcVar10 = pcVar10 + 1;
                                      uVar11 = uVar11 - 1;
                                      pcVar12 = pcVar12 + 1;
                                    } while (uVar11 != 0);
                                  }
                                  *param_1 = (long)(pcVar13 + uVar3);
                                  pcVar13 = "%";
                                  uVar9 = 2;
                                  goto LAB_001206b8;
                                }
LAB_00120cd0:
                                uVar3 = __strlen_chk(&DAT_0012f023,3);
                                pcVar13 = (char *)*param_1;
                                if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_00120d38:
                                  uVar3 = __strlen_chk(&DAT_0012f026,3);
                                  pcVar13 = (char *)*param_1;
                                  if ((ulong)(param_1[1] - (long)pcVar13) < uVar3) {
LAB_00120da0:
                                    uVar3 = __strlen_chk(&DAT_0012f029,3);
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
                                    goto LAB_001207d0;
                                  }
                                  if (uVar3 != 0) {
                                    pcVar10 = "rs";
                                    uVar11 = uVar3;
                                    pcVar12 = pcVar13;
                                    do {
                                      if (*pcVar10 != *pcVar12) goto LAB_00120da0;
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
                                      if (*pcVar10 != *pcVar12) goto LAB_00120d38;
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
                                    if (*pcVar10 != *pcVar12) goto LAB_00120c64;
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
                                  if (*pcVar10 != *pcVar12) goto LAB_00120b90;
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
                                if (*pcVar10 != *pcVar12) goto LAB_00120abc;
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
                              if (*pcVar10 != *pcVar12) goto LAB_00120a54;
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
                            if (*pcVar10 != *pcVar12) goto LAB_001209ec;
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
                          if (*pcVar10 != *pcVar12) goto LAB_00120918;
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
                        if (*pcVar10 != *pcVar12) goto LAB_0012076c;
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
                      if (*pcVar10 != *pcVar12) goto LAB_00120650;
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
                    if (*pcVar10 != *pcVar12) goto LAB_0012057c;
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
                  if (*pcVar10 != *pcVar12) goto LAB_00120514;
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
                if (*pcVar10 != *pcVar12) goto LAB_001204ac;
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
              if (*pcVar10 != *pcVar12) goto LAB_001203d8;
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
            if (*pcVar10 != *pcVar12) goto LAB_00120304;
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
          if (*pcVar10 != *pcVar12) goto LAB_001201c4;
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
        if (*pcVar10 != *pcVar12) goto LAB_001200f0;
        pcVar10 = pcVar10 + 1;
        uVar11 = uVar11 - 1;
        pcVar12 = pcVar12 + 1;
      } while (uVar11 != 0);
    }
    *param_1 = (long)(pcVar13 + uVar3);
    pcVar13 = "&&";
  }
  uVar9 = 3;
LAB_001206b8:
  lVar4 = __strlen_chk(pcVar13,uVar9);
  lVar5 = FUN_0011d7cc(param_1);
  if (lVar5 == 0) {
    return (undefined8 *)0x0;
  }
  if ((cVar1 == 'R') || (cVar1 == 'L')) {
    lVar6 = FUN_0011d7cc(param_1);
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
  *puVar8 = &PTR_FUN_00137418;
  *(undefined4 *)((long)puVar7 + lVar6 + 0x18) = 0x1010139;
  *(long *)((long)puVar7 + lVar6 + 0x20) = lVar14;
  *(long *)((long)puVar7 + lVar6 + 0x28) = lVar5;
  *(char **)((long)puVar7 + lVar6 + 0x30) = pcVar13;
  *(char **)((long)puVar7 + lVar6 + 0x38) = pcVar13 + lVar4;
  *(bool *)((long)puVar7 + lVar6 + 0x40) = bVar2;
  return puVar8;
}

