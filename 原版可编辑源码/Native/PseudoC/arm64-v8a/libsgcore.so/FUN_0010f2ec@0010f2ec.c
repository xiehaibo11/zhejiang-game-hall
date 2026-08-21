
undefined1 * FUN_0010f2ec(byte *param_1)

{
  int iVar1;
  byte bVar2;
  void *pvVar3;
  undefined1 *puVar4;
  uint __c;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if (param_1 == (byte *)0x0) {
    puVar4 = (undefined1 *)(*(code *)PTR_malloc_00113048)(1);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 0;
    }
  }
  else {
    __c = (uint)*param_1;
    if (*param_1 == 0) {
LAB_0010f364:
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      pbVar6 = param_1;
      do {
        pbVar6 = pbVar6 + 1;
        iVar1 = iVar5 + 1;
        if (iVar1 == 0) goto LAB_0010f364;
        pvVar3 = memchr(&DAT_00110358,__c,8);
        if (pvVar3 == (void *)0x0) {
          iVar5 = iVar5 + 6;
          if (0x1f < __c) {
            iVar5 = iVar1;
          }
        }
        else {
          iVar5 = iVar5 + 2;
        }
        __c = (uint)*pbVar6;
      } while (__c != 0);
    }
    puVar4 = (undefined1 *)(*(code *)PTR_malloc_00113048)((long)(iVar5 + 3));
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 0x22;
      bVar2 = *param_1;
      pbVar6 = puVar4 + 1;
      while (bVar2 != 0) {
        if (((bVar2 < 0x20) || (bVar2 == 0x22)) || (bVar2 == 0x5c)) {
          *pbVar6 = 0x5c;
          bVar2 = *param_1;
          switch(bVar2) {
          case 8:
            pbVar6[1] = 0x62;
            break;
          case 9:
            pbVar6[1] = 0x74;
            break;
          case 10:
            pbVar6[1] = 0x6e;
            break;
          case 0xb:
switchD_0010f3fc_caseD_b:
            sprintf((char *)(pbVar6 + 1),"u%04x");
            pbVar7 = pbVar6 + 6;
            goto LAB_0010f484;
          case 0xc:
            pbVar6[1] = 0x66;
            break;
          case 0xd:
            pbVar6[1] = 0x72;
            break;
          default:
            if (bVar2 == 0x22) {
              pbVar6[1] = 0x22;
            }
            else {
              if (bVar2 != 0x5c) goto switchD_0010f3fc_caseD_b;
              pbVar6[1] = 0x5c;
            }
          }
          pbVar7 = pbVar6 + 2;
        }
        else {
          pbVar7 = pbVar6 + 1;
          *pbVar6 = bVar2;
        }
LAB_0010f484:
        param_1 = param_1 + 1;
        pbVar6 = pbVar7;
        bVar2 = *param_1;
      }
      pbVar6[0] = 0x22;
      pbVar6[1] = 0;
    }
  }
  return puVar4;
}

