
undefined8 * FUN_018412cc(long *param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  char cVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  void *pvVar13;
  
  pcVar1 = (char *)*param_1;
  pcVar11 = (char *)param_1[1];
  if (pcVar1 == pcVar11) {
    return (undefined8 *)0x0;
  }
  if (*pcVar1 != 'f') {
    return (undefined8 *)0x0;
  }
  pcVar12 = pcVar1 + 1;
  *param_1 = (long)pcVar12;
  if (pcVar11 == pcVar12) {
    return (undefined8 *)0x0;
  }
  cVar2 = *pcVar12;
  bVar3 = true;
  switch(cVar2) {
  case 'L':
  case 'l':
    break;
  default:
    return (undefined8 *)0x0;
  case 'R':
  case 'r':
    bVar3 = false;
  }
  pcVar12 = pcVar1 + 2;
  *param_1 = (long)pcVar12;
  if ((ulong)((long)pcVar11 - (long)pcVar12) < 2) {
    return (undefined8 *)0x0;
  }
  cVar9 = *pcVar12;
  if (cVar9 == 'a') {
    if (pcVar1[3] != 'a') {
      cVar9 = *pcVar12;
      if (cVar9 == 'a') {
        if (pcVar1[3] == 'n') {
          pcVar11 = "&";
          pcVar12 = "";
          goto LAB_018417bc;
        }
        cVar9 = *pcVar12;
        if (cVar9 == 'a') {
          if (pcVar1[3] == 'N') {
            pcVar11 = "&=";
            goto LAB_018417b8;
          }
          cVar9 = *pcVar12;
          if (cVar9 == 'a') {
            if (pcVar1[3] == 'S') {
              pcVar11 = "=";
              pcVar12 = "";
              goto LAB_018417bc;
            }
            cVar9 = *pcVar12;
          }
        }
      }
      goto LAB_01841410;
    }
    pcVar11 = "&&";
    goto LAB_018417b8;
  }
LAB_01841410:
  if ((cVar9 == 'c') && (pcVar1[3] == 'm')) {
    pcVar11 = ",";
    pcVar12 = "";
    goto LAB_018417bc;
  }
  if (*pcVar12 == 'd') {
    if (pcVar1[3] == 's') {
      pcVar11 = ".*";
      goto LAB_018417b8;
    }
    if (*pcVar12 != 'd') goto LAB_018414a4;
    if (pcVar1[3] == 'v') {
      pcVar11 = "/";
      pcVar12 = "";
      goto LAB_018417bc;
    }
    cVar9 = *pcVar12;
    if (cVar9 == 'd') {
      if (pcVar1[3] == 'V') {
        pcVar11 = "/=";
        goto LAB_018417b8;
      }
      goto LAB_018414a4;
    }
  }
  else {
LAB_018414a4:
    cVar9 = *pcVar12;
  }
  if ((cVar9 == 'e') && (pcVar1[3] == 'o')) {
    pcVar11 = "^";
    pcVar12 = "";
    goto LAB_018417bc;
  }
  cVar9 = *pcVar12;
  if (cVar9 == 'e') {
    if (pcVar1[3] != 'O') {
      cVar9 = *pcVar12;
      if (cVar9 == 'e') {
        if (pcVar1[3] == 'q') {
          pcVar11 = "==";
          goto LAB_018417b8;
        }
        cVar9 = *pcVar12;
      }
      goto LAB_01841518;
    }
    pcVar11 = "^=";
  }
  else {
LAB_01841518:
    if ((cVar9 == 'g') && (pcVar1[3] == 'e')) {
      pcVar11 = ">=";
    }
    else {
      cVar9 = *pcVar12;
      if (cVar9 == 'g') {
        if (pcVar1[3] == 't') {
          pcVar11 = ">";
          pcVar12 = "";
          goto LAB_018417bc;
        }
        cVar9 = *pcVar12;
      }
      if ((cVar9 == 'l') && (pcVar1[3] == 'e')) {
        pcVar11 = "<=";
      }
      else if (*pcVar12 == 'l') {
        if (pcVar1[3] != 's') {
          if (*pcVar12 != 'l') goto LAB_018415f8;
          if (pcVar1[3] != 'S') {
            cVar9 = *pcVar12;
            if (cVar9 == 'l') {
              if (pcVar1[3] == 't') {
                pcVar11 = "<";
                pcVar12 = "";
                goto LAB_018417bc;
              }
              goto LAB_018415f8;
            }
            goto LAB_018415fc;
          }
          pcVar11 = "<<=";
LAB_018415c8:
          pcVar12 = pcVar11 + 3;
          goto LAB_018417bc;
        }
        pcVar11 = "<<";
      }
      else {
LAB_018415f8:
        cVar9 = *pcVar12;
LAB_018415fc:
        if ((cVar9 == 'm') && (pcVar1[3] == 'i')) {
          pcVar11 = "-";
          pcVar12 = "";
          goto LAB_018417bc;
        }
        if (*pcVar12 == 'm') {
          if (pcVar1[3] == 'I') {
            pcVar11 = "-=";
            goto LAB_018417b8;
          }
          if (*pcVar12 != 'm') goto LAB_01841690;
          if (pcVar1[3] == 'l') {
            pcVar11 = "*";
            pcVar12 = "";
            goto LAB_018417bc;
          }
          cVar9 = *pcVar12;
          if (cVar9 == 'm') {
            if (pcVar1[3] == 'L') {
              pcVar11 = "*=";
              goto LAB_018417b8;
            }
            goto LAB_01841690;
          }
        }
        else {
LAB_01841690:
          cVar9 = *pcVar12;
        }
        if ((cVar9 == 'n') && (pcVar1[3] == 'e')) {
          pcVar11 = "!=";
        }
        else {
          if (*pcVar12 == 'o') {
            if (pcVar1[3] == 'o') {
              pcVar11 = "||";
              goto LAB_018417b8;
            }
            if (*pcVar12 != 'o') goto LAB_01841724;
            if (pcVar1[3] == 'r') {
              pcVar11 = "|";
              pcVar12 = "";
              goto LAB_018417bc;
            }
            cVar9 = *pcVar12;
            if (cVar9 == 'o') {
              if (pcVar1[3] == 'R') {
                pcVar11 = "|=";
                goto LAB_018417b8;
              }
              goto LAB_01841724;
            }
          }
          else {
LAB_01841724:
            cVar9 = *pcVar12;
          }
          if ((cVar9 == 'p') && (pcVar1[3] == 'l')) {
            pcVar11 = "+";
            pcVar12 = "";
            goto LAB_018417bc;
          }
          cVar9 = *pcVar12;
          if (cVar9 == 'p') {
            if (pcVar1[3] == 'L') {
              pcVar11 = "+=";
              goto LAB_018417b8;
            }
            cVar9 = *pcVar12;
          }
          if ((cVar9 == 'r') && (pcVar1[3] == 'm')) {
            pcVar11 = "%";
            pcVar12 = "";
            goto LAB_018417bc;
          }
          if (*pcVar12 != 'r') {
            return (undefined8 *)0x0;
          }
          if (pcVar1[3] == 'M') {
            pcVar11 = "%=";
          }
          else {
            if (*pcVar12 != 'r') {
              return (undefined8 *)0x0;
            }
            if (pcVar1[3] != 's') {
              if (*pcVar12 != 'r') {
                return (undefined8 *)0x0;
              }
              if (pcVar1[3] != 'S') {
                return (undefined8 *)0x0;
              }
              pcVar11 = ">>=";
              goto LAB_018415c8;
            }
            pcVar11 = ">>";
          }
        }
      }
    }
  }
LAB_018417b8:
  pcVar12 = pcVar11 + 2;
LAB_018417bc:
  *param_1 = (long)(pcVar1 + 4);
  lVar4 = FUN_0183e610(param_1);
  if (lVar4 == 0) {
    return (undefined8 *)0x0;
  }
  if ((cVar2 == 'R') || (cVar2 == 'L')) {
    lVar5 = FUN_0183e610(param_1);
    if (lVar5 == 0) {
      return (undefined8 *)0x0;
    }
    lVar10 = lVar5;
    if (!bVar3) {
      lVar10 = lVar4;
      lVar4 = lVar5;
    }
  }
  else {
    lVar10 = lVar4;
    lVar4 = 0;
  }
  pvVar13 = (void *)param_1[0x25c];
  plVar8 = (long *)((long)pvVar13 + 8);
  lVar5 = *plVar8;
  puVar6 = pvVar13;
  if (0xfef < lVar5 + 0x40U) {
    puVar6 = malloc(0x1000);
    if (puVar6 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = 0;
    *puVar6 = pvVar13;
    plVar8 = puVar6 + 1;
    *plVar8 = 0;
    param_1[0x25c] = (long)puVar6;
  }
  *plVar8 = lVar5 + 0x40;
  puVar7 = (undefined8 *)((long)puVar6 + lVar5 + 0x10);
  *puVar7 = &PTR_FUN_01cdff90;
  *(undefined4 *)((long)puVar6 + lVar5 + 0x18) = 0x1010139;
  *(long *)((long)puVar6 + lVar5 + 0x20) = lVar10;
  *(long *)((long)puVar6 + lVar5 + 0x28) = lVar4;
  *(char **)((long)puVar6 + lVar5 + 0x30) = pcVar11;
  *(char **)((long)puVar6 + lVar5 + 0x38) = pcVar12;
  *(bool *)((long)puVar6 + lVar5 + 0x40) = bVar3;
  return puVar7;
}

