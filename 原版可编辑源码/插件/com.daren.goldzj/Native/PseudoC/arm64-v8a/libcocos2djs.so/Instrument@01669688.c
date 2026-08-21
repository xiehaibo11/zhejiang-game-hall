
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::BasicBlockInstrumentor::Instrument(v8::internal::OptimizedCompilationInfo*,
   v8::internal::compiler::Graph*, v8::internal::compiler::Schedule*, v8::internal::Isolate*) */

Data * v8::internal::compiler::BasicBlockInstrumentor::Instrument
                 (OptimizedCompilationInfo *param_1,Graph *param_2,Schedule *param_3,
                 Isolate *param_4)

{
  ushort uVar1;
  long lVar2;
  void *pvVar3;
  BasicBlockProfiler *this;
  Data *this_00;
  Operator *pOVar4;
  Node *pNVar5;
  undefined **ppuVar6;
  long lVar7;
  Node *pNVar8;
  Node *pNVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  BasicBlock *pBVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  CommonOperatorBuilder aCStack_1b8 [16];
  void *local_1a8;
  MachineOperatorBuilder aMStack_1a0 [40];
  Node *local_178 [2];
  Node *local_168;
  Node *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar14 = (*(long *)(param_3 + 0x50) - *(long *)(param_3 + 0x48) >> 3) - 1;
  this = (BasicBlockProfiler *)BasicBlockProfiler::Get();
  this_00 = (Data *)BasicBlockProfiler::NewData(this,uVar14);
  OptimizedCompilationInfo::GetDebugName();
  BasicBlockProfiler::Data::SetFunctionName(this_00,&local_1a8);
  pvVar3 = local_1a8;
  local_1a8 = (void *)0x0;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  local_178[0] = (Node *)(std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>-in-std::
                          __ndk1::
                          basic_ostringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::construction_vtable + 0x18);
  local_108[0] = (undefined **)0x1c6c8d0;
  std::__ndk1::ios_base::init((ios_base *)local_108,local_178 + 1);
  local_78 = 0xffffffff;
  local_80 = 0;
  local_178[0] = (Node *)&PTR__basic_ostringstream_01c6c858;
  local_178[1] = (Node *)&PTR__basic_streambuf_01c671a8;
  local_108[0] = &PTR__basic_ostringstream_01c6c880;
  std::__ndk1::locale::locale((locale *)&local_168);
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  local_160 = (Node *)0x0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_178[1] = (Node *)&PTR__basic_stringbuf_01c67100;
  compiler::operator<<((basic_ostream *)local_178,param_3);
  BasicBlockProfiler::Data::SetSchedule((basic_ostringstream *)this_00);
  local_178[0] = (Node *)&PTR__basic_ostringstream_01c6c858;
  local_108[0] = &PTR__basic_ostringstream_01c6c880;
  if ((local_130 & 1) != 0) {
    local_178[1] = (Node *)&PTR__basic_stringbuf_01c67100;
    operator_delete(local_120);
  }
  local_178[1] = (Node *)&PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale((locale *)&local_168);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  CommonOperatorBuilder::CommonOperatorBuilder(aCStack_1b8,*(Zone **)param_2);
  pOVar4 = (Operator *)CommonOperatorBuilder::Int32Constant(aCStack_1b8,0);
  local_178[0] = (Node *)0x0;
  pNVar5 = (Node *)Graph::NewNode(param_2,pOVar4,0,local_178,false);
  pOVar4 = (Operator *)CommonOperatorBuilder::Int32Constant(aCStack_1b8,1);
  local_178[0] = (Node *)0x0;
  ppuVar6 = (undefined **)Graph::NewNode(param_2,pOVar4,0,local_178,false);
  MachineOperatorBuilder::MachineOperatorBuilder(aMStack_1a0,*(undefined8 *)param_2,5,0,2,0);
  if (uVar14 != 0) {
    puVar12 = *(undefined8 **)(param_3 + 0x48);
    uVar16 = 0;
    do {
      pBVar13 = (BasicBlock *)*puVar12;
      BasicBlockProfiler::Data::SetBlockRpoNumber(this_00,uVar16,*(int *)(pBVar13 + 4));
      lVar7 = BasicBlockProfiler::Data::GetCounterAddress(this_00,uVar16);
      pOVar4 = (Operator *)CommonOperatorBuilder::Int64Constant(aCStack_1b8,lVar7);
      local_178[0] = (Node *)0x0;
      pNVar8 = (Node *)Graph::NewNode(param_2,pOVar4,0,local_178,false);
      pOVar4 = (Operator *)MachineOperatorBuilder::Load(aMStack_1a0);
      local_168 = *(Node **)(param_2 + 8);
      local_178[0] = pNVar8;
      local_178[1] = pNVar5;
      local_160 = local_168;
      pNVar9 = (Node *)Graph::NewNode(param_2,pOVar4,4,local_178,false);
      pOVar4 = (Operator *)MachineOperatorBuilder::Int32Add(aMStack_1a0);
      local_178[0] = pNVar9;
      local_178[1] = (Node *)ppuVar6;
      uVar10 = Graph::NewNode(param_2,pOVar4,2,local_178,false);
      pOVar4 = (Operator *)MachineOperatorBuilder::Store(aMStack_1a0);
      local_160 = *(Node **)(param_2 + 8);
      local_178[0] = pNVar8;
      local_178[1] = pNVar5;
      local_168 = (Node *)uVar10;
      uStack_158 = local_160;
      local_150 = Graph::NewNode(param_2,pOVar4,5,local_178,false);
      puVar15 = *(undefined8 **)(pBVar13 + 0x40);
      local_178[0] = pNVar5;
      local_178[1] = (Node *)ppuVar6;
      local_168 = pNVar8;
      local_160 = pNVar9;
      uStack_158 = uVar10;
      if (*(undefined8 **)(pBVar13 + 0x48) != puVar15) {
        do {
          pOVar4 = *(Operator **)*puVar15;
          uVar11 = OperatorProperties::IsBasicBlockBegin(pOVar4);
          if (((uVar11 & 1) == 0) &&
             ((uVar1 = *(ushort *)(pOVar4 + 0x10), 0x32 < uVar1 ||
              ((1L << ((ulong)uVar1 & 0x3f) & 0x4001800000000U) == 0)))) break;
          puVar15 = puVar15 + 1;
        } while (puVar15 != *(undefined8 **)(pBVar13 + 0x48));
      }
      lVar7 = (ulong)(uVar16 != 0) << 1;
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::insert<v8::internal::compiler::Node**>
                ((vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
                  *)(pBVar13 + 0x40),puVar15,local_178 + (ulong)(uVar16 != 0) * 2,&uStack_148);
      do {
        Schedule::SetBlockForNode(param_3,pBVar13,local_178[lVar7]);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 6);
      uVar16 = uVar16 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar16 != uVar14);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}

