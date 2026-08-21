
void FUN_012fa794(uint *param_1,long *param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *param_2;
  cVar1 = (char)param_2[1];
  if (lVar4 == 0) {
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(char *)(param_1 + 0x46) = cVar1;
  }
  else {
    *param_1 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    puVar3 = param_1 + 2;
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(char *)(param_1 + 0x46) = cVar1;
    if ('\0' < *(char *)(lVar4 + 0xc)) {
      uVar2 = 0;
      do {
        lVar7 = *(long *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
        lVar5 = lVar4;
        lVar8 = lVar7;
        if ((*(int *)(lVar4 + 0x10) << (ulong)(uVar2 & 0x1f) < 0) &&
           (lVar5 = lVar7, lVar8 = lVar4, lVar7 == 0)) {
          (param_1 + (long)(int)uVar2 * 2 + 6)[0] = 0;
          (param_1 + (long)(int)uVar2 * 2 + 6)[1] = 0;
        }
        else {
          *(long *)(param_1 + (long)(int)uVar2 * 2 + 6) = lVar8;
          lVar4 = lVar5;
        }
        uVar2 = *param_1 + 1;
        *param_1 = uVar2;
      } while ((int)uVar2 < (int)*(char *)(lVar4 + 0xc));
    }
    *(long *)(param_1 + 4) = lVar4;
    puVar6 = *(undefined8 **)(lVar4 + 0x18);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)puVar3 = *puVar6;
    }
    if (lVar4 != 0) {
      if (puVar6 == (undefined8 *)0x0) goto LAB_012fa858;
      do {
        uVar2 = (uint)*(byte *)(*(long *)(param_1 + 2) + 0x24);
        while( true ) {
          if ((cVar1 != '\0') == ((uVar2 & 1) == 0)) {
            return;
          }
          FUN_012fa8a8(param_1);
          lVar4 = *(long *)(param_1 + 4);
          if (lVar4 == 0) {
            return;
          }
          if (*(long *)(lVar4 + 0x18) != 0) break;
LAB_012fa858:
          uVar2 = *(uint *)(lVar4 + 8);
        }
      } while( true );
    }
  }
  return;
}

