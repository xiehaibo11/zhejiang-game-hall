
void FUN_00e3aeb0(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int local_254;
  undefined1 local_250 [8];
  undefined8 auStack_248 [11];
  int local_1ec;
  undefined8 local_1e8 [49];
  
  (*(code *)param_2[0xf])(param_2,local_1e8,0x10,&local_1ec);
  if (local_1ec < 0) {
    iVar2 = 0xa2;
  }
  else {
    iVar2 = 3;
    if ((local_1ec != 0) && (local_1ec < 0x11)) {
      uVar4 = *param_2;
      uVar5 = param_2[2];
      if (0 < local_1ec) {
        lVar9 = *(long *)(param_1 + 0x350);
        lVar7 = 0;
        iVar2 = 0;
        do {
          uVar3 = local_1e8[lVar7 * 3 + 1];
          *param_2 = local_1e8[lVar7 * 3];
          param_2[2] = uVar3;
          (*(code *)param_2[0xf])(param_2,local_250,4,&local_254);
          iVar1 = local_254;
          if (lVar7 == 0) {
            if (3 < local_254 - 1U) goto LAB_00e3b050;
            iVar2 = FUN_00e3b4e8(param_1,local_1ec,local_254);
            if (iVar2 != 0) goto LAB_00e3b02c;
            lVar9 = *(long *)(param_1 + 0x350);
            iVar2 = iVar1;
            iVar1 = local_254;
          }
          else {
            iVar1 = iVar2;
            if (local_254 != iVar2) {
LAB_00e3b050:
              iVar2 = 3;
              goto LAB_00e3b02c;
            }
          }
          if (0 < iVar1) {
            lVar6 = 0;
            puVar8 = auStack_248;
            do {
              *param_2 = puVar8[-1];
              param_2[2] = *puVar8;
              uVar3 = (*(code *)param_2[10])(param_2,0);
              *(undefined8 *)(*(long *)(lVar9 + lVar7 * 8 + 0x28) + lVar6 * 8) = uVar3;
              lVar6 = lVar6 + 1;
              puVar8 = puVar8 + 3;
            } while (lVar6 < local_254);
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < local_1ec);
      }
      iVar2 = 0;
      *param_2 = uVar4;
      param_2[2] = uVar5;
    }
  }
LAB_00e3b02c:
  *(int *)(param_2 + 3) = iVar2;
  return;
}

