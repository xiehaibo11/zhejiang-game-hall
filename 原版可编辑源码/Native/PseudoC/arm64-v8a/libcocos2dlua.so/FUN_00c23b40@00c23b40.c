
ulong FUN_00c23b40(long param_1,int param_2,uint *param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  ulong local_8;
  
  lVar9 = *(long *)(param_1 + 0x20);
  lVar7 = (long)param_2 * 8 + -8;
  uVar6 = lVar9 + lVar7;
  if (uVar6 < *(ulong *)(param_1 + 0x28)) {
    uVar2 = *(ulong *)(lVar9 + lVar7);
    uVar4 = (uint)((long)uVar2 >> 0x2f);
    if (0xfffffff2 < uVar4) {
      if (uVar4 == 0xfffffff5) {
        plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
        plVar3[2] = param_1;
        lVar8 = *plVar3;
        uVar2 = *(ulong *)(lVar9 + lVar7) & 0x7fffffffffff;
        uVar6 = (ulong)*(ushort *)(uVar2 + 10);
        uVar4 = *(uint *)(lVar8 + uVar6 * 0x18);
        if ((uVar4 & 0xf0800000) == 0x20800000) {
          lVar7 = *(long *)(uVar2 + 0x10);
          uVar6 = (ulong)(uVar4 & 0xffff);
        }
        else {
          lVar7 = uVar2 + 0x10;
        }
        lVar9 = uVar6 * 0x18;
        uVar4 = *(uint *)(lVar8 + lVar9);
        while( true ) {
          if (uVar4 >> 0x1c != 8) break;
          lVar9 = (ulong)(ushort)uVar4 * 0x18;
          uVar4 = *(uint *)(lVar8 + lVar9);
        }
        if (uVar4 >> 0x1c == 5) {
          lVar9 = (ulong)(ushort)uVar4 * 0x18;
        }
        if ((*(ulong *)(lVar8 + lVar9) & 0xfffffffffc800000) == 0x800800000) {
          lVar5 = 0x120;
          *param_3 = 0xc;
        }
        else if (*param_3 == 0) {
          lVar5 = 0x108;
          *param_3 = 0xb;
        }
        else {
          lVar5 = (ulong)*param_3 * 0x18;
        }
        FUN_00c21820(plVar3,lVar8 + lVar5,(ulong *)(lVar8 + lVar9),&local_8,lVar7,param_2 << 8);
        return local_8;
      }
      if ((uVar4 != 0xfffffffb) || (iVar1 = FUN_00c1f7ac(uVar2 & 0x7fffffffffff,uVar6), iVar1 == 0))
      goto LAB_00c23d0c;
      uVar2 = *(ulong *)(lVar9 + lVar7);
    }
    if ((int)((long)uVar2 >> 0x2f) == -0xe) {
      uVar2 = (ulong)*(uint *)(lVar9 + lVar7);
    }
    else {
      dVar10 = *(double *)(lVar9 + lVar7) + 6755399441055744.0;
      *(int *)(lVar9 + lVar7) = SUB84(dVar10,0);
      uVar2 = (ulong)dVar10 & 0xffffffff;
      *(undefined4 *)(uVar6 + 4) = 0xfff90000;
    }
    return uVar2;
  }
LAB_00c23d0c:
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,param_2,3);
}

