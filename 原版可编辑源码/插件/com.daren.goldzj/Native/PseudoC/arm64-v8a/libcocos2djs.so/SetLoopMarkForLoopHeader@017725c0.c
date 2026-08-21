
/* v8::internal::compiler::LoopFinderImpl::SetLoopMarkForLoopHeader(v8::internal::compiler::Node*,
   int) */

void __thiscall
v8::internal::compiler::LoopFinderImpl::SetLoopMarkForLoopHeader
          (LoopFinderImpl *this,Node *param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  plVar6 = (long *)(*(long *)(this + 0x68) + uVar4 * 0x10);
  if (*plVar6 == 0) {
    *plVar6 = (long)param_1;
    uVar4 = (ulong)(*(uint *)(param_1 + 0x14) & 0xffffff);
  }
  iVar2 = param_2 >> 5;
  lVar5 = (ulong)(uint)(iVar2 + *(int *)(this + 0xd4) * (int)uVar4) * 4;
  uVar3 = 1 << (ulong)(param_2 & 0x1f);
  *(uint *)(*(long *)(this + 0xd8) + lVar5) = *(uint *)(*(long *)(this + 0xd8) + lVar5) | uVar3;
  *(int *)(*(long *)(*(long *)(this + 200) + 0x48) +
          ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 4) = param_2;
  plVar6 = *(long **)(param_1 + 0x18);
  do {
    if (plVar6 == (long *)0x0) {
      return;
    }
    plVar7 = plVar6 + (ulong)(*(uint *)(plVar6 + 2) >> 1) * 3 + 3;
    if ((*(uint *)(plVar6 + 2) & 1) == 0) {
      plVar7 = (long *)*plVar7;
    }
    if (*(ushort *)(*plVar7 + 0x10) - 0x23 < 2) {
      uVar4 = (ulong)*(uint *)((long)plVar7 + 0x14) & 0xffffff;
      plVar8 = (long *)(*(long *)(this + 0x68) + uVar4 * 0x10);
      if (*plVar8 == 0) {
        *plVar8 = (long)plVar7;
        uVar4 = (ulong)(*(uint *)((long)plVar7 + 0x14) & 0xffffff);
      }
      lVar5 = (ulong)(uint)(iVar2 + *(int *)(this + 0xd4) * (int)uVar4) * 4;
      *(uint *)(*(long *)(this + 0xd8) + lVar5) = *(uint *)(*(long *)(this + 0xd8) + lVar5) | uVar3;
      *(int *)(*(long *)(*(long *)(this + 200) + 0x48) +
              ((ulong)*(uint *)((long)plVar7 + 0x14) & 0xffffff) * 4) = param_2;
    }
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      if (1 < *(int *)(*(long *)(param_1 + 0x20) + 8)) {
LAB_017726e8:
        if (*(short *)(*plVar7 + 0x10) == 0x34) {
          uVar4 = (ulong)*(uint *)((long)plVar7 + 0x14) & 0xffffff;
          plVar8 = (long *)(*(long *)(this + 0x68) + uVar4 * 0x10);
          if (*plVar8 == 0) {
            *plVar8 = (long)plVar7;
            uVar4 = (ulong)(*(uint *)((long)plVar7 + 0x14) & 0xffffff);
          }
          lVar5 = (ulong)(uint)(iVar2 + *(int *)(this + 0xd4) * (int)uVar4) * 4;
          *(uint *)(*(long *)(this + 0xd8) + lVar5) =
               *(uint *)(*(long *)(this + 0xd8) + lVar5) | uVar3;
          *(int *)(*(long *)(*(long *)(this + 200) + 0x48) +
                  ((ulong)*(uint *)((long)plVar7 + 0x14) & 0xffffff) * 4) = param_2;
          for (plVar7 = (long *)plVar7[3]; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            plVar8 = plVar7 + (ulong)(*(uint *)(plVar7 + 2) >> 1) * 3 + 3;
            if ((*(uint *)(plVar7 + 2) & 1) == 0) {
              plVar8 = (long *)*plVar8;
            }
            if (*(ushort *)(*plVar8 + 0x10) - 0x35 < 2) {
              uVar4 = (ulong)*(uint *)((long)plVar8 + 0x14) & 0xffffff;
              plVar1 = (long *)(*(long *)(this + 0x68) + uVar4 * 0x10);
              if (*plVar1 == 0) {
                *plVar1 = (long)plVar8;
                uVar4 = (ulong)(*(uint *)((long)plVar8 + 0x14) & 0xffffff);
              }
              lVar5 = (ulong)(uint)(iVar2 + *(int *)(this + 0xd4) * (int)uVar4) * 4;
              *(uint *)(*(long *)(this + 0xd8) + lVar5) =
                   *(uint *)(*(long *)(this + 0xd8) + lVar5) | uVar3;
              *(int *)(*(long *)(*(long *)(this + 200) + 0x48) +
                      ((ulong)*(uint *)((long)plVar8 + 0x14) & 0xffffff) * 4) = param_2;
            }
          }
        }
      }
    }
    else if (1 < (*(uint *)(param_1 + 0x14) >> 0x18 & 0xf)) goto LAB_017726e8;
    plVar6 = (long *)*plVar6;
  } while( true );
}

