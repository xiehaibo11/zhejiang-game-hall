
/* v8::internal::compiler::BytecodeGraphBuilder::ExitThenEnterExceptionHandlers(int) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::ExitThenEnterExceptionHandlers
          (BytecodeGraphBuilder *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  BytecodeArrayRef local_80 [16];
  BytecodeArrayRef local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)(this + 0x30);
  local_60 = *(undefined8 *)(this + 0x28);
  local_70 = (BytecodeArrayRef  [16])
             SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)&local_60);
  uVar10 = BytecodeArrayRef::handler_table_address(local_70);
  uStack_58 = *(undefined8 *)(this + 0x30);
  local_60 = *(undefined8 *)(this + 0x28);
  local_80 = (BytecodeArrayRef  [16])
             SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)&local_60);
  uVar4 = BytecodeArrayRef::handler_table_size(local_80);
  HandlerTable::HandlerTable((HandlerTable *)&local_60,uVar10,uVar4,0);
  lVar12 = *(long *)(this + 0x138);
  while (lVar12 != 0) {
    lVar13 = lVar12 + -1;
    uVar1 = *(long *)(this + 0x130) + lVar13;
    if (param_1 < *(int *)(*(long *)(*(long *)(this + 0x108) + (uVar1 >> 5 & 0x7fffffffffffff8)) +
                           (uVar1 & 0xff) * 0x10 + 4)) break;
    lVar16 = *(long *)(this + 0x110);
    lVar2 = lVar12 + *(long *)(this + 0x130);
    *(long *)(this + 0x138) = lVar13;
    lVar12 = lVar16 - *(long *)(this + 0x108);
    lVar3 = 0;
    if (lVar12 != 0) {
      lVar3 = lVar12 * 0x20 + -1;
    }
    lVar12 = lVar13;
    if (0x1ff < (lVar3 - lVar2) + 1U) {
      puVar14 = *(undefined8 **)(lVar16 + -8);
      if ((*(long *)(this + 0x148) == 0) || (*(ulong *)(*(long *)(this + 0x148) + 8) < 0x101)) {
        puVar14[1] = 0x100;
        *puVar14 = *(undefined8 *)(this + 0x148);
        lVar16 = *(long *)(this + 0x110);
        lVar13 = *(long *)(this + 0x138);
        *(undefined8 **)(this + 0x148) = puVar14;
      }
      *(long *)(this + 0x110) = lVar16 + -8;
      lVar12 = lVar13;
    }
  }
  iVar5 = HandlerTable::NumberOfRangeEntries((HandlerTable *)&local_60);
  iVar6 = *(int *)(this + 0x150);
  if (iVar6 < iVar5) {
    do {
      iVar6 = HandlerTable::GetRangeStart((HandlerTable *)&local_60,iVar6);
      if (param_1 < iVar6) {
        return;
      }
      iVar7 = HandlerTable::GetRangeEnd((HandlerTable *)&local_60,*(int *)(this + 0x150));
      iVar8 = HandlerTable::GetRangeHandler((HandlerTable *)&local_60,*(int *)(this + 0x150));
      iVar9 = HandlerTable::GetRangeData((HandlerTable *)&local_60,*(int *)(this + 0x150));
      lVar12 = *(long *)(this + 0x108);
      lVar13 = *(long *)(this + 0x110);
      uVar1 = 0;
      if (lVar13 - lVar12 != 0) {
        uVar1 = (lVar13 - lVar12) * 0x20 - 1;
      }
      uVar15 = *(long *)(this + 0x138) + *(long *)(this + 0x130);
      if (uVar1 == uVar15) {
        std::__ndk1::
        deque<v8::internal::compiler::BytecodeGraphBuilder::ExceptionHandler,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::ExceptionHandler>>
        ::__add_back_capacity
                  ((deque<v8::internal::compiler::BytecodeGraphBuilder::ExceptionHandler,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::BytecodeGraphBuilder::ExceptionHandler>>
                    *)(this + 0x100));
        lVar12 = *(long *)(this + 0x108);
        lVar13 = *(long *)(this + 0x110);
        uVar15 = *(long *)(this + 0x130) + *(long *)(this + 0x138);
      }
      if (lVar13 == lVar12) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)(*(long *)(lVar12 + (uVar15 >> 5 & 0x7fffffffffffff8)) +
                         (uVar15 & 0xff) * 0x10);
      }
      *piVar11 = iVar6;
      piVar11[1] = iVar7;
      piVar11[2] = iVar8;
      piVar11[3] = iVar9;
      iVar6 = *(int *)(this + 0x150) + 1;
      *(long *)(this + 0x138) = *(long *)(this + 0x138) + 1;
      *(int *)(this + 0x150) = iVar6;
    } while (iVar6 < iVar5);
  }
  return;
}

