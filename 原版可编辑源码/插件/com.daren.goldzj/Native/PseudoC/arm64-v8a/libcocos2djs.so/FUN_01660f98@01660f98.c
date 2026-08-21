
void FUN_01660f98(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  Zone *this;
  char *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long local_68;
  
  if ((long *)param_1[1] != param_1 + 2) {
    plVar9 = (long *)*param_1;
    plVar12 = (long *)param_1[1];
    do {
      local_68 = plVar12[4];
      plVar2 = *(long **)(param_2 + 0x20);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_68);
      if (((uVar3 & 1) != 0) && ((ulong)param_1[5] <= (ulong)plVar12[5])) {
        if ((int)*(uint *)((long)plVar9 + 0xc) < 1) {
          iVar10 = 0x20;
LAB_016610a8:
          *(undefined1 *)(param_4 + iVar10) = 1;
        }
        else {
          uVar3 = 0;
          iVar8 = 0;
          bVar1 = false;
          uVar11 = 0x20;
          iVar10 = (int)plVar12[6];
          while( true ) {
            if ((iVar10 != 0) && ((iVar8 < iVar10 || ((bool)(bVar1 & iVar10 == iVar8))))) {
              uVar11 = uVar3 & 0xffffffff;
              bVar1 = *(char *)(param_4 + uVar3) != '\0';
              iVar8 = iVar10;
            }
            iVar10 = (int)uVar11;
            uVar3 = uVar3 + 1;
            if (*(uint *)((long)plVar9 + 0xc) == uVar3) break;
            iVar10 = *(int *)((long)(plVar12 + 6) + uVar3 * 4);
          }
          if (!bVar1) goto LAB_016610a8;
          iVar10 = 0x20;
        }
        this = *(Zone **)(param_3 + 0x20);
        puVar6 = *(undefined8 **)(this + 0x10);
        if ((ulong)(*(long *)(this + 0x18) - (long)puVar6) < 0x20) {
          puVar6 = (undefined8 *)v8::internal::Zone::NewExpand(this,0x20);
        }
        else {
          *(undefined8 **)(this + 0x10) = puVar6 + 4;
        }
        lVar5 = plVar12[4];
        *(int *)(puVar6 + 3) = iVar10;
        puVar6[2] = lVar5;
        iVar8 = *(int *)(lVar5 + 0x5c);
        *puVar6 = 0;
        puVar6[1] = (long)iVar8;
        FUN_01666c04(param_3);
        if ((*(byte *)(*plVar9 + 0x1d0) >> 2 & 1) != 0) {
          pcVar4 = "unassigned";
          if (iVar10 != 0x20) {
            if ((int)plVar9[1] == 0) {
              if (iVar10 == -1) goto LAB_01661140;
              puVar6 = &v8::internal::RegisterName(v8::internal::Register)::Names;
            }
            else {
              if (iVar10 == -1) {
LAB_01661140:
                pcVar4 = "invalid";
                goto LAB_01661148;
              }
              puVar6 = &v8::internal::RegisterName(v8::internal::VRegister)::Names;
            }
            pcVar4 = (char *)puVar6[iVar10];
          }
LAB_01661148:
          v8::internal::PrintF
                    ("Reset %d as live due vote %zu in %s\n",
                     (ulong)*(uint *)(*(long *)(plVar12[4] + 0x20) + 0x5c),plVar12[5],pcVar4);
        }
      }
      plVar2 = (long *)plVar12[1];
      if ((long *)plVar12[1] == (long *)0x0) {
        plVar2 = plVar12 + 2;
        plVar7 = (long *)*plVar2;
        if ((long *)*plVar7 != plVar12) {
          do {
            lVar5 = *plVar2;
            plVar2 = (long *)(lVar5 + 0x10);
            plVar7 = (long *)*plVar2;
          } while (*plVar7 != lVar5);
        }
      }
      else {
        do {
          plVar7 = plVar2;
          plVar2 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      plVar12 = plVar7;
    } while (plVar7 != param_1 + 2);
  }
  return;
}

