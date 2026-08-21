
void FUN_00d89530(long param_1,long param_2,uint *param_3,uint param_4,undefined8 param_5,
                 uint *param_6,uint param_7)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  if (*param_6 < param_7) {
    lVar8 = *(long *)(param_1 + 0x200);
    iVar4 = *(int *)(param_1 + 0x164) * 3;
    do {
      uVar1 = *param_3;
      if (uVar1 < param_4) {
        uVar3 = *(int *)(lVar8 + 0x6c) - *(int *)(lVar8 + 100);
        if (param_4 - uVar1 <= uVar3) {
          uVar3 = param_4 - uVar1;
        }
        (**(code **)(*(long *)(param_1 + 0x218) + 8))
                  (param_1,param_2 + (ulong)uVar1 * 8,lVar8 + 0x10,*(int *)(lVar8 + 100),uVar3);
        if ((*(int *)(lVar8 + 0x60) == *(int *)(param_1 + 0x34)) &&
           (iVar7 = *(int *)(param_1 + 0x5c), 0 < iVar7)) {
          iVar10 = *(int *)(param_1 + 0x164);
          lVar9 = 0;
          do {
            if (0 < iVar10) {
              iVar7 = 0;
              iVar6 = -1;
              do {
                uVar5 = *(undefined8 *)(lVar8 + lVar9 * 8 + 0x10);
                jcopy_sample_rows(uVar5,0,uVar5,iVar6,1,*(undefined4 *)(param_1 + 0x30));
                iVar10 = *(int *)(param_1 + 0x164);
                iVar7 = iVar7 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar7 < iVar10);
              iVar7 = *(int *)(param_1 + 0x5c);
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < iVar7);
        }
        *param_3 = *param_3 + uVar3;
        iVar10 = *(int *)(lVar8 + 0x6c);
        iVar7 = *(int *)(lVar8 + 100) + uVar3;
        *(uint *)(lVar8 + 0x60) = *(int *)(lVar8 + 0x60) - uVar3;
        *(int *)(lVar8 + 100) = iVar7;
LAB_00d89714:
        if (iVar7 == iVar10) goto LAB_00d89720;
      }
      else {
        if (*(int *)(lVar8 + 0x60) != 0) {
          return;
        }
        iVar7 = *(int *)(lVar8 + 100);
        iVar10 = *(int *)(lVar8 + 0x6c);
        if (iVar10 <= iVar7) goto LAB_00d89714;
        iVar6 = *(int *)(param_1 + 0x5c);
        if (0 < iVar6) {
          lVar9 = 0;
          if (iVar10 <= iVar7) goto LAB_00d896f8;
          do {
            uVar5 = *(undefined8 *)(lVar8 + lVar9 * 8 + 0x10);
            uVar2 = *(undefined4 *)(param_1 + 0x30);
            iVar6 = iVar7 + -1;
            do {
              jcopy_sample_rows(uVar5,iVar6,uVar5,iVar7,1,uVar2);
              iVar7 = iVar7 + 1;
            } while (iVar10 != iVar7);
            iVar6 = *(int *)(param_1 + 0x5c);
LAB_00d896f8:
            do {
              lVar9 = lVar9 + 1;
              if (iVar6 <= lVar9) {
                iVar10 = *(int *)(lVar8 + 0x6c);
                goto LAB_00d89708;
              }
              iVar7 = *(int *)(lVar8 + 100);
              iVar10 = *(int *)(lVar8 + 0x6c);
            } while (iVar10 <= iVar7);
          } while( true );
        }
LAB_00d89708:
        *(int *)(lVar8 + 100) = iVar10;
LAB_00d89720:
        (**(code **)(*(long *)(param_1 + 0x220) + 8))
                  (param_1,lVar8 + 0x10,*(undefined4 *)(lVar8 + 0x68),param_5,*param_6);
        *param_6 = *param_6 + 1;
        iVar6 = *(int *)(param_1 + 0x164);
        iVar10 = *(int *)(lVar8 + 100);
        iVar7 = *(int *)(lVar8 + 0x68) + iVar6;
        if (iVar4 <= iVar7) {
          iVar7 = 0;
        }
        *(int *)(lVar8 + 0x68) = iVar7;
        if (iVar4 <= iVar10) {
          iVar10 = 0;
          *(undefined4 *)(lVar8 + 100) = 0;
        }
        *(int *)(lVar8 + 0x6c) = iVar6 + iVar10;
      }
    } while (*param_6 < param_7);
  }
  return;
}

