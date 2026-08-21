
void FUN_0107c098(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 local_1d0 [8];
  undefined8 auStack_1c8 [47];
  int local_44;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0107bf4c with catch @ 0107c0b0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0107beac with catch @ 0107c0b4
                        */
  piVar5 = *(int **)(param_1 + 0x348);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0107bf74 with catch @ 0107c0c4
                        */
  (*(code *)param_2[0xf])(param_2,local_1d0,0x10,&local_44);
  if (local_44 < 0) {
    iVar1 = 0xa2;
  }
  else {
    iVar1 = 3;
    if ((local_44 != 0) && (local_44 < 0x11)) {
      if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) {
        iVar1 = FUN_0107c1f0(param_1,local_44,0);
        if (iVar1 != 0) goto LAB_0107c198;
        piVar5 = *(int **)(param_1 + 0x348);
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0107bef4 with catch @ 0107c100
                        */
        if (*piVar5 != local_44) {
          iVar1 = 3;
          goto LAB_0107c198;
        }
      }
      uVar4 = *param_2;
      uVar6 = param_2[2];
      if (0 < local_44) {
        lVar7 = 0;
        puVar8 = auStack_1c8;
        do {
          *param_2 = puVar8[-1];
          param_2[2] = *puVar8;
          uVar2 = (*(code *)param_2[10])(param_2,0);
          lVar3 = lVar7 * 8;
          lVar7 = lVar7 + 1;
          *(undefined8 *)(*(long *)(piVar5 + 0x42) + lVar3) = uVar2;
          *(undefined8 *)(*(long *)(piVar5 + 0x44) + lVar3) = uVar2;
          puVar8 = puVar8 + 3;
        } while (lVar7 < local_44);
      }
      iVar1 = 0;
      *param_2 = uVar4;
      param_2[2] = uVar6;
    }
  }
LAB_0107c198:
  *(int *)(param_2 + 3) = iVar1;
  return;
}

