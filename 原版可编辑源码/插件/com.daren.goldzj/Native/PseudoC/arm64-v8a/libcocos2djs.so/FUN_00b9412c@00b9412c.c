
/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_00b9412c(CONF *param_1,byte *param_2,undefined8 *param_3,byte *param_4)

{
  int iVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  BUF_MEM *str;
  size_t sVar6;
  char *__s;
  byte *section;
  char cVar7;
  uint uVar8;
  void *pvVar10;
  ulong uVar11;
  byte bVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  byte bVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar9;
  
  str = BUF_MEM_new();
  if (str != (BUF_MEM *)0x0) {
    sVar6 = strlen((char *)param_4);
    iVar4 = BUF_MEM_grow(str,(long)((sVar6 << 0x20) + 0x100000000) >> 0x20);
    if (iVar4 != 0) {
      uVar20 = 0;
      bVar3 = 0;
LAB_00b94250:
      do {
        while( true ) {
          pvVar10 = param_1->meth_data;
          bVar12 = *param_4;
          uVar2 = *(ushort *)((long)pvVar10 + (ulong)bVar12 * 2);
          uVar8 = (uint)bVar12;
          iVar4 = (int)uVar20;
          uVar9 = (uint)bVar12;
          if ((uVar2 >> 6 & 1) == 0) break;
          pbVar13 = param_4 + 1;
          bVar12 = *pbVar13;
          uVar19 = (ulong)bVar12;
          if ((bVar12 != uVar9) &&
             (uVar2 = *(ushort *)((long)pvVar10 + (ulong)(uint)bVar12 * 2), (uVar2 >> 3 & 1) == 0))
          {
            uVar11 = (long)iVar4;
            do {
              pbVar14 = pbVar13;
              bVar12 = (byte)uVar19;
              if ((uVar2 >> 5 & 1) != 0) {
                pbVar14 = param_4 + 2;
                bVar12 = *pbVar14;
                uVar19 = (ulong)bVar12;
                if ((*(byte *)((long)pvVar10 + uVar19 * 2) >> 3 & 1) != 0) {
                  uVar20 = uVar11 & 0xffffffff;
                  pbVar13 = pbVar14;
                  break;
                }
              }
              uVar20 = uVar11 + 1;
              str->data[uVar11] = bVar12;
              pbVar13 = pbVar14 + 1;
              bVar12 = *pbVar13;
              uVar19 = (ulong)bVar12;
              if (bVar12 == uVar9) break;
              pvVar10 = param_1->meth_data;
              uVar2 = *(ushort *)((long)pvVar10 + (ulong)(uint)bVar12 * 2);
              uVar11 = uVar20;
              param_4 = pbVar14;
            } while ((uVar2 >> 3 & 1) == 0);
          }
          param_4 = pbVar13;
          if ((uint)uVar19 == uVar8) {
            param_4 = pbVar13 + 1;
          }
        }
        if ((uVar2 >> 10 & 1) != 0) {
          pbVar13 = param_4 + 1;
          uVar19 = (ulong)*pbVar13;
          if ((*(byte *)((long)pvVar10 + uVar19 * 2) >> 3 & 1) == 0) {
            uVar11 = (long)iVar4;
            pbVar14 = param_4;
            do {
              param_4 = pbVar13;
              bVar16 = (byte)uVar19;
              if (((uint)uVar19 == uVar8) &&
                 (param_4 = pbVar14 + 2, bVar16 = bVar12, *param_4 != uVar9)) {
                uVar20 = uVar11 & 0xffffffff;
                uVar19 = (ulong)bVar12;
                param_4 = pbVar14;
                break;
              }
              uVar20 = uVar11 + 1;
              str->data[uVar11] = bVar16;
              pbVar13 = param_4 + 1;
              uVar19 = (ulong)*pbVar13;
              uVar11 = uVar20;
              pbVar14 = param_4;
            } while ((*(byte *)((long)param_1->meth_data + uVar19 * 2) >> 3 & 1) == 0);
          }
          param_4 = param_4 + 2;
          if ((uint)uVar19 != uVar8) {
            param_4 = pbVar13;
          }
          goto LAB_00b94250;
        }
        if ((uVar2 >> 5 & 1) == 0) {
          if ((uVar2 >> 3 & 1) != 0) {
LAB_00b944b4:
            str->data[iVar4] = '\0';
            CRYPTO_free((void *)*param_3);
            *param_3 = str->data;
            CRYPTO_free(str);
            return 1;
          }
          if (uVar8 != 0x24) {
            str->data[iVar4] = bVar12;
            uVar20 = (ulong)(iVar4 + 1);
            param_4 = param_4 + 1;
            goto LAB_00b94250;
          }
          iVar5 = 0x29;
          if (param_4[1] != 0x28) {
            iVar5 = 0;
          }
          iVar1 = 0x7d;
          if (param_4[1] != 0x7b) {
            iVar1 = iVar5;
          }
          pbVar13 = param_4 + 2;
          if (iVar1 == 0) {
            pbVar13 = param_4 + 1;
          }
          pbVar17 = pbVar13 + -1;
          pbVar14 = pbVar13;
          do {
            pbVar18 = pbVar17;
            pbVar14 = pbVar14 + 1;
            pbVar17 = pbVar18 + 1;
            uVar19 = (ulong)*pbVar17;
          } while ((*(ushort *)((long)pvVar10 + uVar19 * 2) & 0x107) != 0);
          if (*pbVar17 == 0x3a) {
            if (pbVar18[2] != 0x3a) {
              uVar19 = 0x3a;
              goto LAB_00b943f0;
            }
            *pbVar17 = 0;
            do {
              pbVar14 = pbVar14 + 1;
              uVar19 = (ulong)*pbVar14;
            } while ((*(ushort *)((long)param_1->meth_data + uVar19 * 2) & 0x107) != 0);
            bVar3 = 0x3a;
            section = pbVar13;
            pbVar13 = pbVar18 + 3;
            pbVar18 = pbVar17;
            pbVar17 = pbVar14;
          }
          else {
LAB_00b943f0:
            pbVar18 = (byte *)0x0;
            section = param_2;
          }
          *pbVar17 = 0;
          pbVar14 = pbVar17;
          if (iVar1 == 0) {
LAB_00b94418:
            __s = _CONF_get_string(param_1,(char *)section,(char *)pbVar13);
            if (pbVar18 != (byte *)0x0) {
              *pbVar18 = bVar3;
            }
            bVar12 = (byte)uVar19;
            *pbVar17 = bVar12;
            if (__s == (char *)0x0) {
              iVar4 = 0x68;
              iVar5 = 0x1ff;
            }
            else {
              sVar6 = strlen(__s);
              iVar5 = BUF_MEM_grow_clean(str,(size_t)(param_4 +
                                                     str->length + (sVar6 - (long)pbVar14)));
              if (iVar5 != 0) {
                cVar7 = *__s;
                param_4 = pbVar14;
                if (cVar7 == '\0') {
                  *pbVar17 = bVar12;
                }
                else {
                  lVar15 = (long)iVar4;
                  do {
                    __s = __s + 1;
                    uVar20 = (ulong)((int)uVar20 + 1);
                    str->data[lVar15] = cVar7;
                    cVar7 = *__s;
                    lVar15 = lVar15 + 1;
                  } while (cVar7 != '\0');
                  *pbVar17 = bVar12;
                }
                goto LAB_00b94250;
              }
              iVar4 = 0x41;
              iVar5 = 0x204;
            }
          }
          else {
            if (iVar1 == (int)uVar19) {
              pbVar14 = pbVar17 + 1;
              goto LAB_00b94418;
            }
            iVar4 = 0x66;
            iVar5 = 0x1eb;
          }
          ERR_put_error(0xe,0x65,iVar4,"crypto/conf/conf_def.c",iVar5);
          break;
        }
        bVar12 = param_4[1];
        if ((*(byte *)((long)pvVar10 + (ulong)bVar12 * 2) >> 3 & 1) != 0) goto LAB_00b944b4;
        uVar9 = (bVar12 - 0x62) * 0x80;
        uVar8 = bVar12 - 0x62 >> 1 & 0x7f;
        if ((uVar9 & 0xff | uVar8) < 10) {
          bVar16 = 0xd;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar9 & 0xff | uVar8) {
          case 0:
            bVar16 = 8;
            break;
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 7:
            goto switchD_00b941f0_caseD_1;
          case 6:
            bVar16 = 10;
            break;
          case 8:
            break;
          case 9:
            bVar16 = 9;
            break;
          case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          default:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0xe:
          case 0x10:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
switchD_00b941f0_caseD_1:
          bVar16 = bVar12;
        }
        str->data[iVar4] = bVar16;
        uVar20 = (ulong)(iVar4 + 1);
        param_4 = param_4 + 2;
      } while( true );
    }
    BUF_MEM_free(str);
  }
  return 0;
}

