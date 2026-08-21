
undefined8
FUN_011f7650(long param_1,uint param_2,long param_3,uint param_4,uint param_5,int *param_6,
            undefined1 *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = param_4 & 0x1fff;
  uVar8 = 0;
  uVar10 = param_2 & 0xffff;
LAB_011f7674:
  uVar4 = uVar10 - 1;
  uVar1 = uVar8;
LAB_011f7678:
  uVar8 = uVar1;
  uVar10 = uVar8 + (uVar4 - uVar8 >> 1);
  uVar1 = uVar10 + 1;
LAB_011f7694:
  uVar9 = uVar4;
  if ((uVar4 == uVar8) ||
     ((uVar3 = *(uint *)(param_1 + (long)(int)(uVar10 * 2) * 4) & 0x3fffffff, uVar3 <= uVar2 &&
      ((uVar9 = uVar10, uVar1 == (param_2 & 0xffff) ||
       (uVar2 < (*(uint *)(param_1 + (long)(int)(uVar1 * 2) * 4) & 0x3fffffff)))))))
  goto LAB_011f76f0;
  if (uVar2 <= uVar3) goto code_r0x011f76cc;
  goto LAB_011f7678;
code_r0x011f76cc:
  if (uVar3 <= uVar2) goto LAB_011f7694;
  uVar9 = uVar8;
  if (uVar10 != 0) goto LAB_011f7674;
LAB_011f76f0:
  uVar8 = *(uint *)(param_1 + (long)(int)(uVar9 << 1) * 4);
  uVar10 = uVar8 & 0x3fffffff;
  if (((uVar10 != uVar2) && (((uint)(uVar10 < uVar2) & (uVar8 & 0x40000000) >> 0x1e) == 0)) ||
     (uVar8 = *(uint *)(param_1 + (ulong)(uVar9 << 1 | 1) * 4), uVar8 == 0)) goto LAB_011f7784;
  if ((uVar8 & 3) == 0) {
    iVar7 = uVar10 + (param_4 - uVar2 & 0xffff) + ((int)uVar8 >> 2);
LAB_011f7790:
    uVar6 = 1;
    *param_6 = iVar7;
  }
  else {
    if ((uVar8 & 3) == 1) {
      if (param_7 != (undefined1 *)0x0) {
        *param_7 = 0;
      }
      iVar7 = *(int *)(param_3 + (long)((int)uVar8 >> 2) * 4);
      if (iVar7 != -1) goto LAB_011f7790;
    }
    else {
      if (param_7 != (undefined1 *)0x0) {
        *param_7 = 0;
      }
      if ((uVar8 & 0xfffffffc) == 4) {
        if ((param_5 == 0) || (uVar5 = unibrow::Letter::Is(param_5), (uVar5 & 1) == 0)) {
          iVar7 = 0x3c2;
        }
        else {
          iVar7 = 0x3c3;
        }
        goto LAB_011f7790;
      }
    }
LAB_011f7784:
    uVar6 = 0;
  }
  return uVar6;
}

