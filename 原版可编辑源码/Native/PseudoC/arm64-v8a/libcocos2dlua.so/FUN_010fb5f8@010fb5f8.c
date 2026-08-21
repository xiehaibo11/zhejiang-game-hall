
ulong FUN_010fb5f8(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  code *pcVar11;
  uint uVar12;
  long local_68;
  
  iVar2 = *(int *)(param_1 + 0x1b0);
  lVar6 = *(long *)(param_1 + 0x250);
  while ((*(int *)(param_1 + 0xac) < *(int *)(param_1 + 0xb4) ||
         ((*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb4) &&
          (*(uint *)(param_1 + 0xb0) <= *(uint *)(param_1 + 0xb8)))))) {
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x260))(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar7 = *(long *)(param_1 + 0x130);
    local_68 = 0;
    do {
      if (*(int *)(lVar7 + 0x34) != 0) {
        lVar4 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                          (param_1,*(undefined8 *)(lVar6 + local_68 * 8 + 0x88),
                           *(int *)(lVar7 + 0xc) * *(int *)(param_1 + 0xb8),*(int *)(lVar7 + 0xc),0)
        ;
        if (*(uint *)(param_1 + 0xb8) < iVar2 - 1U) {
          uVar1 = *(uint *)(lVar7 + 0xc);
        }
        else {
          uVar1 = *(uint *)(lVar7 + 0xc);
          uVar5 = 0;
          if (uVar1 != 0) {
            uVar5 = *(uint *)(lVar7 + 0x20) / uVar1;
          }
          uVar5 = *(uint *)(lVar7 + 0x20) - uVar5 * uVar1;
          if (uVar5 != 0) {
            uVar1 = uVar5;
          }
        }
        if (0 < (int)uVar1) {
          uVar3 = 0;
          lVar8 = *(long *)(param_2 + local_68 * 8);
          pcVar11 = *(code **)(*(long *)(param_1 + 0x278) + local_68 * 8 + 8);
          uVar5 = *(uint *)(lVar7 + 0x1c);
          do {
            if (uVar5 != 0) {
              lVar10 = *(long *)(lVar4 + uVar3 * 8);
              iVar9 = 0;
              uVar12 = 0;
              do {
                (*pcVar11)(param_1,lVar7,lVar10,lVar8,iVar9);
                uVar5 = *(uint *)(lVar7 + 0x1c);
                uVar12 = uVar12 + 1;
                lVar10 = lVar10 + 0x80;
                iVar9 = *(int *)(lVar7 + 0x24) + iVar9;
              } while (uVar12 < uVar5);
            }
            uVar3 = uVar3 + 1;
            lVar8 = lVar8 + (long)*(int *)(lVar7 + 0x28) * 8;
          } while (uVar3 != uVar1);
        }
      }
      lVar7 = lVar7 + 0x60;
      local_68 = local_68 + 1;
    } while (local_68 < *(int *)(param_1 + 0x38));
  }
  uVar1 = *(int *)(param_1 + 0xb8) + 1;
  *(uint *)(param_1 + 0xb8) = uVar1;
  uVar5 = 3;
  if (*(uint *)(param_1 + 0x1b0) <= uVar1) {
    uVar5 = 4;
  }
  return (ulong)uVar5;
}

