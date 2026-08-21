
/* v8::internal::compiler::BytecodeGraphBuilder::BytecodeGraphBuilder(v8::internal::compiler::JSHeapBroker*,
   v8::internal::Zone*, v8::internal::compiler::NativeContextRef const&,
   v8::internal::compiler::SharedFunctionInfoRef const&, v8::internal::compiler::FeedbackVectorRef
   const&, v8::internal::BailoutId, v8::internal::compiler::JSGraph*,
   v8::internal::compiler::CallFrequency const&, v8::internal::compiler::SourcePositionTable*, int,
   v8::base::Flags<v8::internal::compiler::BytecodeGraphBuilderFlag, int>,
   v8::internal::TickCounter*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::BytecodeGraphBuilder
          (BytecodeGraphBuilder *this,undefined8 param_1,undefined8 param_2,undefined8 *param_3,
          SharedFunctionInfoRef *param_4,undefined8 *param_5,int param_7,JSGraph *param_8,
          undefined4 *param_9,undefined8 param_10,int param_11,ulong param_12,undefined8 param_13)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  OffHeapBytecodeArray *pOVar6;
  SourcePositionTableIterator *pSVar7;
  void *pvVar8;
  ulong *puVar9;
  Isolate *pIVar10;
  ulong uVar11;
  ulong uVar12;
  CommonOperatorBuilder *pCVar13;
  JSHeapBroker *pJVar14;
  undefined1 auVar15 [16];
  OffHeapBytecodeArray *local_88;
  BytecodeArrayRef local_80 [16];
  undefined1 local_70 [16];
  
  *(undefined8 *)this = param_1;
  *(undefined8 *)(this + 8) = param_2;
  *(JSGraph **)(this + 0x10) = param_8;
  uVar5 = *param_3;
  *(undefined8 *)(this + 0x20) = param_3[1];
  *(undefined8 *)(this + 0x18) = uVar5;
  uVar5 = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x28) = uVar5;
  uVar5 = *param_5;
  *(undefined8 *)(this + 0x40) = param_5[1];
  *(undefined8 *)(this + 0x38) = uVar5;
  *(undefined4 *)(this + 0x48) = *param_9;
  JSTypeHintLowering::JSTypeHintLowering
            ((JSTypeHintLowering *)(this + 0x50),param_1,param_8,*param_5,param_5[1],
             param_12 >> 1 & 2);
  local_70._8_8_ = *(undefined8 *)(this + 0x30);
  local_70._0_8_ = *(undefined8 *)(this + 0x28);
  pCVar13 = *(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8);
  local_80 = (BytecodeArrayRef  [16])
             SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_70);
  uVar2 = BytecodeArrayRef::parameter_count(local_80);
  local_70._8_8_ = *(undefined8 *)(this + 0x30);
  local_70._0_8_ = *(undefined8 *)(this + 0x28);
  local_70 = SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_70);
  uVar3 = BytecodeArrayRef::register_count((BytecodeArrayRef *)local_70);
  uVar5 = SharedFunctionInfoRef::object(param_4);
  uVar5 = CommonOperatorBuilder::CreateFrameStateFunctionInfo(pCVar13,0,uVar2,uVar3,uVar5);
  local_70._8_8_ = *(undefined8 *)(this + 0x30);
  local_70._0_8_ = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(this + 0x78) = uVar5;
  *(undefined8 *)(this + 0x80) = 0;
  auVar15 = SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_70);
  pOVar6 = operator_new(0x18);
  OffHeapBytecodeArray::OffHeapBytecodeArray(pOVar6,auVar15._0_8_,auVar15._8_8_);
  local_88 = pOVar6;
  interpreter::BytecodeArrayIterator::BytecodeArrayIterator
            ((BytecodeArrayIterator *)(this + 0x88),&local_88);
  pOVar6 = local_88;
  local_88 = (OffHeapBytecodeArray *)0x0;
  if (pOVar6 != (OffHeapBytecodeArray *)0x0) {
    (**(code **)(*(long *)pOVar6 + 0x48))();
  }
  local_70._8_8_ = *(undefined8 *)(this + 0x30);
  local_70._0_8_ = *(undefined8 *)(this + 0x28);
  pJVar14 = *(JSHeapBroker **)this;
  local_70 = SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_70);
  uVar5 = BytecodeArrayRef::object((BytecodeArrayRef *)local_70);
  uVar5 = JSHeapBroker::GetBytecodeAnalysis
                    (pJVar14,uVar5,param_7,param_12 >> 1 & 1,FLAG_concurrent_inlining ^ 1);
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xb4) = 0xffffffff;
  this[0xb0] = (BytecodeGraphBuilder)(param_7 != -1);
  *(undefined8 *)(this + 0xa0) = uVar5;
  *(undefined8 *)(this + 0xa8) = 0;
  this[0xb8] = (BytecodeGraphBuilder)((byte)param_12 & 1);
  this[0xb9] = (BytecodeGraphBuilder)0x0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = param_2;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = param_2;
  *(undefined8 *)(this + 0xf8) = 0;
  *(BytecodeGraphBuilder **)(this + 0xe0) = this + 0xe8;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x120) = param_2;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x140) = param_2;
  *(undefined8 *)(this + 0x148) = 0;
  this[0x160] = (BytecodeGraphBuilder)0x1;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x188) = param_2;
  *(BytecodeGraphBuilder **)(this + 0xc0) = this + 200;
  StateValuesCache::StateValuesCache((StateValuesCache *)(this + 400),param_8);
  *(undefined8 *)(this + 0x1d8) = param_10;
  iVar4 = SharedFunctionInfoRef::StartPosition(param_4);
  *(ulong *)(this + 0x1e0) =
       (-(ulong)(iVar4 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(iVar4 + 1U) << 1) &
       0xffff80007fffffff | (long)(param_11 + 1) << 0x1f;
  *(undefined8 *)(this + 0x1e8) = param_13;
  if (FLAG_concurrent_inlining != 0) {
    local_70._8_8_ = *(undefined8 *)(this + 0x30);
    local_70._0_8_ = *(undefined8 *)(this + 0x28);
    auVar15 = SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_70);
    local_80 = (BytecodeArrayRef  [16])auVar15;
    uVar5 = BytecodeArrayRef::source_positions_address(local_80);
    local_70._8_8_ = *(undefined8 *)(this + 0x30);
    local_70._0_8_ = *(undefined8 *)(this + 0x28);
    local_70 = SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_70);
    iVar4 = BytecodeArrayRef::source_positions_size((BytecodeArrayRef *)local_70);
    pSVar7 = operator_new(0x40);
    SourcePositionTableIterator::SourcePositionTableIterator(pSVar7,uVar5,(long)iVar4,0);
    pvVar8 = *(void **)(this + 0x80);
    *(SourcePositionTableIterator **)(this + 0x80) = pSVar7;
    goto joined_r0x01670ec4;
  }
  local_70._8_8_ = *(undefined8 *)(this + 0x30);
  local_70._0_8_ = *(undefined8 *)(this + 0x28);
  local_70 = SharedFunctionInfoRef::GetBytecodeArray((SharedFunctionInfoRef *)local_70);
  puVar9 = (ulong *)BytecodeArrayRef::object((BytecodeArrayRef *)local_70);
  uVar1 = *(uint *)(*puVar9 + 0xf);
  uVar11 = *puVar9 & 0xffffffff00000000;
  if (((uVar1 & 1) == 0) ||
     ((uVar1 != *(uint *)(uVar11 + 0xa0) && (uVar1 != *(uint *)(uVar11 + 0x180))))) {
    uVar12 = uVar11 | uVar1;
    if (((uVar1 & 1) == 0) || (*(short *)((uVar11 | 7) + (ulong)*(uint *)(uVar12 - 1)) != 0x85)) {
      if (uVar1 == *(uint *)(uVar11 + 0x180)) goto LAB_01670e44;
      uVar12 = uVar11 | *(uint *)(uVar12 + 3);
    }
  }
  else {
LAB_01670e44:
    uVar12 = *(ulong *)(uVar11 + 0x3c0);
  }
  pIVar10 = *(Isolate **)(*(long *)(this + 0x10) + 0x168);
  if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(pIVar10 + 0x95a0);
    if (puVar9 == *(ulong **)(pIVar10 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(pIVar10);
    }
    *(ulong **)(pIVar10 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar12;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar12);
  }
  pSVar7 = operator_new(0x40);
  SourcePositionTableIterator::SourcePositionTableIterator(pSVar7,puVar9,0);
  pvVar8 = *(void **)(this + 0x80);
  *(SourcePositionTableIterator **)(this + 0x80) = pSVar7;
joined_r0x01670ec4:
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  return;
}

