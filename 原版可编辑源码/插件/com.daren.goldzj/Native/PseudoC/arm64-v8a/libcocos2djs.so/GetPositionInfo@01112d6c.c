
/* v8::internal::Script::GetPositionInfo(int, v8::internal::Script::PositionInfo*,
   v8::internal::Script::OffsetFlag) const */

undefined8 __thiscall
v8::internal::Script::GetPositionInfo(Script *this,uint param_1,int *param_2,int param_4)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_70;
  uint local_6c;
  ulong local_68;
  
  uVar4 = *(ulong *)this;
  uVar8 = uVar4 & 0xffffffff00000000;
  if ((*(uint *)(uVar4 + 0x17) & 0xfffffffe) == 6) {
    lVar5 = *(long *)(**(long **)(*(long *)((uVar8 | *(uint *)(uVar4 + 0x27)) + 3) + 0x18) + 200);
    if (*(long *)(lVar5 + 0x90) != *(long *)(lVar5 + 0x88)) {
      *param_2 = 0;
      param_2[1] = param_1;
      param_2[2] = *(int *)(*(long *)(lVar5 + 0x88) + 0x10);
      param_2[3] = *(int *)(*(long *)(lVar5 + 0x90) + -0xc) +
                   *(int *)(*(long *)(lVar5 + 0x90) + -0x10);
      return 1;
    }
  }
  else {
    uVar2 = *(uint *)(uVar4 + 0x1b);
    if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(uVar8 + 0xa0))) {
      uVar8 = uVar8 | uVar2;
      iVar10 = *(int *)(uVar8 + 3) >> 1;
      if (iVar10 != 0) {
        if ((int)param_1 < 0) {
          param_1 = 0;
        }
        else if (*(int *)(uVar8 + 7 + (long)(iVar10 * 4 + -4)) >> 1 < (int)param_1) {
          return 0;
        }
        piVar6 = (int *)(uVar8 + 7);
        if (*piVar6 >> 1 < (int)param_1) {
          iVar10 = iVar10 + -1;
          if (0 < iVar10) {
            iVar7 = 0;
            do {
              iVar1 = iVar7 + iVar10;
              if (iVar1 < 0) {
                iVar1 = iVar1 + 1;
              }
              iVar1 = iVar1 >> 1;
              if (*(int *)((long)piVar6 + (long)(iVar1 << 2)) >> 1 < (int)param_1) {
                iVar7 = iVar1 + 1;
              }
              else {
                iVar10 = iVar1 + -1;
                if (*(int *)((long)piVar6 + (long)(iVar10 * 4)) >> 1 < (int)param_1) {
                  *param_2 = iVar1;
                  break;
                }
              }
            } while (0 < iVar10);
          }
          lVar5 = (long)(*param_2 * 4);
          iVar10 = (*(int *)((long)piVar6 + (long)(*param_2 * 4 + -4)) >> 1) + 1;
          param_2[1] = param_1 - iVar10;
          param_2[2] = iVar10;
        }
        else {
          lVar5 = 0;
          param_2[1] = param_1;
          param_2[2] = 0;
          *param_2 = 0;
        }
        iVar7 = *(int *)((long)piVar6 + lVar5);
        iVar10 = iVar7 >> 1;
        param_2[3] = iVar10;
        if (1 < iVar7) {
          uVar4 = *(ulong *)this & 0xffffffff00000000;
          local_68 = uVar4 | *(uint *)(*(ulong *)this + 3);
          if (iVar10 <= *(int *)(local_68 + 7)) {
            local_6c = iVar10 - 1;
            local_70 = (uint)*(ushort *)((uVar4 | *(uint *)(local_68 - 1)) + 7);
            sVar3 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                              (&local_70,&local_68,&local_6c);
            if (sVar3 == 0xd) {
              param_2[3] = param_2[3] + -1;
            }
          }
        }
joined_r0x0111300c:
        if (param_4 != 1) {
          return 1;
        }
        if (*param_2 == 0) {
          param_2[1] = param_2[1] + (*(int *)(*(long *)this + 0xf) >> 1);
        }
        *param_2 = *param_2 + (*(int *)(*(long *)this + 0xb) >> 1);
        return 1;
      }
    }
    else if ((((*(uint *)(uVar4 + 3) & 1) != 0) &&
             (uVar4 = uVar8 | *(uint *)(uVar4 + 3),
             *(ushort *)((uVar8 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0x40)) &&
            (uVar2 = *(uint *)(uVar4 + 7), -1 < (int)uVar2)) {
      uVar9 = 0;
      uVar11 = 0;
      iVar10 = 0;
      param_1 = param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
      if (uVar2 == 0) goto LAB_01112ed8;
      do {
        local_70 = (uint)*(ushort *)((uVar8 | *(uint *)(uVar4 - 1)) + 7);
        local_6c = uVar9;
        local_68 = uVar4;
        sVar3 = _ZN2v88internal11StringShape33DispatchToSpecificTypeWithoutCastIZNS1_22DispatchToSpecificTypeIZNS0_6String3GetEiE19StringGetDispatchertJRiEEET0_S4_DpOT1_E17CastingDispatchertJRS4_S6_EEES7_SA_
                          (&local_70,&local_68,&local_6c);
        if (sVar3 != 10) {
          uVar9 = uVar9 + 1;
          goto LAB_01112e90;
        }
LAB_01112ed8:
        do {
          if (param_1 <= uVar9) {
            param_2[2] = uVar11;
            param_2[3] = uVar9;
            *param_2 = iVar10;
            param_2[1] = param_1 - uVar11;
            goto joined_r0x0111300c;
          }
          uVar11 = uVar9 + 1;
          iVar10 = iVar10 + 1;
          uVar9 = uVar11;
LAB_01112e90:
          if (uVar9 == uVar2 + 1) {
            return 0;
          }
        } while (uVar9 == uVar2);
      } while( true );
    }
  }
  return 0;
}

