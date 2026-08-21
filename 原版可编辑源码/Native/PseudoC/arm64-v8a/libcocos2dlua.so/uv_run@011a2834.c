
bool uv_run(long param_1,int param_2)

{
  long ****pppplVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  undefined4 uVar6;
  ulong uVar7;
  long ****pppplVar8;
  long ***ppplVar9;
  long lVar10;
  long ***local_70;
  long *local_68;
  
  if (((*(int *)(param_1 + 8) == 0) && (*(int *)(param_1 + 0x20) == 0)) &&
     (*(long *)(param_1 + 0x168) == 0)) {
    uVar7 = FUN_011ac764(1);
    bVar5 = false;
    *(ulong *)(param_1 + 0x220) = uVar7 / 1000000;
  }
  else {
    pppplVar1 = (long ****)(param_1 + 0x48);
    do {
      if (*(int *)(param_1 + 0x30) != 0) {
        bVar5 = true;
        goto LAB_011a2af4;
      }
      bVar3 = 1;
      uVar7 = FUN_011ac764(1);
      *(ulong *)(param_1 + 0x220) = uVar7 / 1000000;
      FUN_0119f130(param_1);
      pppplVar8 = *(long *****)(param_1 + 0x48);
      if (pppplVar1 != pppplVar8) {
        local_68 = *(long **)(param_1 + 0x50);
        *local_68 = (long)&local_70;
        ppplVar9 = pppplVar8[1];
        *(long ****)(param_1 + 0x50) = ppplVar9;
        *ppplVar9 = (long **)pppplVar1;
        pppplVar8[1] = (long ***)&local_70;
        local_70 = (long ***)pppplVar8;
        while (&local_70 != (long ****)local_70) {
          *local_70[1] = (long *)*local_70;
          (*local_70)[1] = (long *)local_70[1];
          *local_70 = (long **)local_70;
          local_70[1] = (long **)local_70;
          (*(code *)local_70[-1])(param_1,local_70 + -1,4);
        }
        bVar3 = 0;
      }
      FUN_011a4e30(param_1);
      FUN_011a4a40(param_1);
      if (((((param_2 == 0) || ((bool)(param_2 == 1 & bVar3))) &&
           ((*(int *)(param_1 + 0x30) == 0 &&
            ((*(int *)(param_1 + 8) != 0 || (*(int *)(param_1 + 0x20) != 0)))))) &&
          ((long *)(param_1 + 0x1a0) == *(long **)(param_1 + 0x1a0))) &&
         ((pppplVar1 == (long ****)*pppplVar1 && (*(long *)(param_1 + 0x168) == 0)))) {
        uVar6 = FUN_0119f0f8(param_1);
      }
      else {
        uVar6 = 0;
      }
      FUN_011ac184(param_1,uVar6);
      FUN_011a4c38(param_1);
      lVar10 = *(long *)(param_1 + 0x168);
      *(undefined8 *)(param_1 + 0x168) = 0;
      while (lVar4 = lVar10, lVar4 != 0) {
        lVar10 = *(long *)(lVar4 + 0x50);
        *(uint *)(lVar4 + 0x58) = *(uint *)(lVar4 + 0x58) | 2;
        switch(*(undefined4 *)(lVar4 + 0x10)) {
        case 7:
        case 0xc:
        case 0xe:
          FUN_011a8838(lVar4);
        default:
          uVar2 = *(uint *)(lVar4 + 0x58);
          break;
        case 0xf:
          FUN_011aab50(lVar4);
          uVar2 = *(uint *)(lVar4 + 0x58);
        }
        if (((uVar2 >> 3 & 1) != 0) &&
           (*(uint *)(lVar4 + 0x58) = uVar2 & 0xfffffff7, (uVar2 & 5) == 4)) {
          *(int *)(*(long *)(lVar4 + 8) + 8) = *(int *)(*(long *)(lVar4 + 8) + 8) + -1;
        }
        **(undefined8 **)(lVar4 + 0x28) = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 *)(*(long *)(lVar4 + 0x20) + 8) = *(undefined8 *)(lVar4 + 0x28);
        if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
          (**(code **)(lVar4 + 0x18))(lVar4);
        }
      }
      if (param_2 == 1) {
        uVar7 = FUN_011ac764(1);
        *(ulong *)(param_1 + 0x220) = uVar7 / 1000000;
        FUN_0119f130(param_1);
      }
      if ((*(int *)(param_1 + 8) == 0) && (*(int *)(param_1 + 0x20) == 0)) {
        bVar5 = *(long *)(param_1 + 0x168) != 0;
      }
      else {
        bVar5 = true;
      }
      if (param_2 - 1U < 2) goto LAB_011a2aec;
    } while (bVar5 != false);
    bVar5 = false;
  }
LAB_011a2aec:
  if (*(int *)(param_1 + 0x30) != 0) {
LAB_011a2af4:
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return bVar5;
}

