
int FUN_011ad1f4(long param_1,long *param_2)

{
  uint uVar1;
  long ******pppppplVar2;
  int iVar3;
  long ****pppplVar4;
  long *plVar5;
  long *****ppppplVar6;
  long *****ppppplVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long ******pppppplVar11;
  long *****local_b8;
  long *****local_b0;
  long *****local_88;
  long *****local_80;
  
  if (param_2 != (long *)0x0) {
    *(long **)(param_1 + 0x340) = param_2;
    local_88 = (long *****)&local_88;
    local_80 = (long *****)&local_88;
    do {
      plVar8 = param_2;
      param_2 = (long *)*plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
    if (plVar8 != (long *)0x0) {
      do {
        plVar5 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          plVar9 = (long *)plVar8[2];
          if ((plVar9 != (long *)0x0) &&
             (plVar5 = plVar8, plVar10 = plVar9, (long *)*plVar9 != plVar8)) {
            do {
              plVar9 = plVar10;
              if (plVar5 != (long *)plVar10[1]) break;
              plVar9 = (long *)plVar10[2];
              plVar5 = plVar10;
              plVar10 = plVar9;
            } while (plVar9 != (long *)0x0);
          }
        }
        else {
          do {
            plVar9 = plVar5;
            plVar5 = (long *)*plVar9;
          } while (plVar5 != (long *)0x0);
        }
        pppppplVar11 = (long ******)(plVar8 + 4);
        local_b8 = *pppppplVar11;
        *(undefined4 *)(plVar8 + 6) = 1;
        if (pppppplVar11 == (long ******)local_b8) {
          local_b8 = (long *****)&local_b8;
          local_b0 = (long *****)&local_b8;
        }
        else {
          local_b0 = (long *****)plVar8[5];
          *local_b0 = (long ****)&local_b8;
          ppppplVar7 = (long *****)local_b8[1];
          plVar8[5] = (long)ppppplVar7;
          *ppppplVar7 = (long ****)pppppplVar11;
          local_b8[1] = (long ****)&local_b8;
          while (pppppplVar2 = (long ******)local_b8, local_b8 = (long *****)pppppplVar2,
                &local_b8 != pppppplVar2) {
            ppppplVar7 = (long *****)FUN_0119f1b4(pppppplVar2[-2]);
            *pppppplVar2[1] = (long ****)*pppppplVar2;
            (*pppppplVar2)[1] = (long ****)pppppplVar2[1];
            *pppppplVar2 = (long *****)pppppplVar11;
            ppppplVar6 = (long *****)plVar8[5];
            pppppplVar2[1] = ppppplVar6;
            *ppppplVar6 = (long ****)pppppplVar2;
            plVar8[5] = (long)pppppplVar2;
            uVar1 = *(uint *)(pppppplVar2 + -3);
            if ((uVar1 >> 2 & 1) != 0) {
              ppppplVar6 = pppppplVar2[-0xd];
              pppplVar4 = ppppplVar6[0x68];
              if (pppplVar4 != (long ****)0x0) {
                do {
                  if (*(int *)(pppplVar4 + 8) <= *(int *)(pppppplVar2 + 2)) {
                    if (*(int *)(pppppplVar2 + 2) <= *(int *)(pppplVar4 + 8)) break;
                    pppplVar4 = pppplVar4 + 1;
                  }
                  pppplVar4 = (long ****)*pppplVar4;
                } while (pppplVar4 != (long ****)0x0);
              }
              *(undefined4 *)(pppppplVar2 + 2) = 0xffffffff;
              pppppplVar2[-2] = (long *****)0x0;
              *(uint *)(pppppplVar2 + -3) = uVar1 & 0xfffffffb;
              if ((uVar1 >> 3 & 1) != 0) {
                *(int *)(ppppplVar6 + 1) = *(int *)(ppppplVar6 + 1) + -1;
              }
              *pppppplVar2[1] = (long ****)*pppppplVar2;
              (*pppppplVar2)[1] = (long ****)pppppplVar2[1];
              FUN_011ad530(pppplVar4,pppppplVar2[-0xd]);
            }
            *pppppplVar2 = (long *****)&local_88;
            pppppplVar2[1] = local_80;
            *local_80 = (long ****)pppppplVar2;
            pppppplVar2[-2] = ppppplVar7;
            local_80 = (long *****)pppppplVar2;
          }
        }
        *(undefined4 *)(plVar8 + 6) = 0;
        FUN_011ad530(plVar8,param_1);
        plVar8 = plVar9;
      } while (plVar9 != (long *)0x0);
    }
    local_b8 = local_88;
    if (&local_88 != (long ******)local_88) {
      local_b0 = local_80;
      *local_80 = (long ****)&local_b8;
      local_80 = (long *****)local_b8[1];
      *local_80 = (long ****)&local_88;
      local_b8[1] = (long ****)&local_b8;
      if (&local_b8 != (long ******)local_b8) {
        do {
          *local_b8[1] = (long ***)*local_b8;
          (*local_b8)[1] = (long ***)local_b8[1];
          ppppplVar7 = (long *****)local_b8[-2];
          local_b8[-2] = (long ****)0x0;
          iVar3 = uv_fs_event_start(local_b8 + -0xe,local_b8[-1],ppppplVar7);
          FUN_0119f27c(ppppplVar7);
          if (iVar3 != 0) {
            return iVar3;
          }
        } while (&local_b8 != (long ******)local_b8);
      }
    }
  }
  return 0;
}

