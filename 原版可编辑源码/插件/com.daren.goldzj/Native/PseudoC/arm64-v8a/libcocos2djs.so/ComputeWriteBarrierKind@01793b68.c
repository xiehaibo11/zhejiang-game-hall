
/* v8::internal::compiler::MemoryLowering::ComputeWriteBarrierKind(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*,
   v8::internal::compiler::MemoryLowering::AllocationState const*,
   v8::internal::compiler::WriteBarrierKind) */

uint __thiscall
v8::internal::compiler::MemoryLowering::ComputeWriteBarrierKind
          (MemoryLowering *this,undefined8 param_1,Node *param_2,Node *param_3,long *param_4,
          uint param_6)

{
  ulong uVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  Node *pNVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_60;
  undefined8 local_58;
  Node *pNStack_50;
  undefined8 local_48;
  
  if (((param_4 != (long *)0x0) && (lVar9 = *param_4, lVar9 != 0)) &&
     (*(char *)(lVar9 + 0x20) == '\0')) {
    plVar7 = (long *)(lVar9 + 8);
    plVar10 = (long *)*plVar7;
    pNVar8 = param_2;
    if (plVar10 != (long *)0x0) goto LAB_01793ca0;
    do {
      do {
        uVar4 = *(ushort *)(*(long *)pNVar8 + 0x10);
        if (uVar4 < 0x1b6) {
          if ((uVar4 != 0x12f) && (uVar4 != 0x142)) goto LAB_01793ba8;
        }
        else if ((uVar4 != 0x1b8) && (uVar4 != 0x1b6)) goto LAB_01793ba8;
        pNVar8 = (Node *)NodeProperties::GetValueInput(pNVar8,0);
        plVar10 = (long *)*plVar7;
      } while (plVar10 == (long *)0x0);
LAB_01793ca0:
      uVar2 = *(uint *)(pNVar8 + 0x14) & 0xffffff;
      plVar11 = plVar7;
      do {
        bVar5 = *(uint *)((long)plVar10 + 0x1c) < uVar2;
        if (!bVar5) {
          plVar11 = plVar10;
        }
        plVar10 = (long *)plVar10[bVar5];
      } while (plVar10 != (long *)0x0);
    } while ((plVar11 == plVar7) || (uVar2 < *(uint *)((long)plVar11 + 0x1c)));
    param_6 = 0;
  }
LAB_01793ba8:
  lVar9 = *(long *)(this + 0x10);
  while( true ) {
    sVar3 = *(short *)(*(Operator **)param_3 + 0x10);
    if (sVar3 != 0x1cf) break;
    param_3 = (Node *)NodeProperties::GetValueInput(param_3,0);
  }
  if (sVar3 == 0x1e) {
    uVar6 = HeapConstantOf(*(Operator **)param_3);
    if (((lVar9 + 0x1010U <= uVar6) || (uVar1 = lVar9 + 0x80, uVar6 < uVar1)) ||
       (0x1d6 < ((uint)((int)uVar6 - (int)uVar1) >> 3 & 0xffff))) goto LAB_01793c18;
  }
  else if (sVar3 != 0x1b9) {
LAB_01793c18:
    if ((param_6 & 0xff) != 1) {
      return param_6;
    }
    local_58 = *(undefined8 *)(this + 0x80);
    local_60 = *(undefined8 *)(this + 0x18);
    plVar7 = *(long **)(this + 0x70);
    pNStack_50 = param_2;
    local_48 = param_1;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_48,&pNStack_50,&local_58,&local_60);
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_008589d0();
  }
  return 0;
}

