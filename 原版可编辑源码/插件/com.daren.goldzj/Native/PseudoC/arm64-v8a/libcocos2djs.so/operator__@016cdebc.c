
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::AsC1VRegisterAllocationData const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,AsC1VRegisterAllocationData *param_2)

{
  long lVar1;
  basic_ostream *local_a8;
  undefined4 local_a0;
  Zone *local_98;
  undefined **local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  Zone aZStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_90 = &PTR__AccountingAllocator_01cbced0;
  uStack_88 = 0;
  local_80 = 0;
  Zone::Zone(aZStack_78,(AccountingAllocator *)&local_90,
             "../../src/compiler/graph-visualizer.cc:826");
  local_a0 = 0;
  local_a8 = param_1;
  local_98 = aZStack_78;
  GraphC1Visualizer::PrintLiveRanges
            ((GraphC1Visualizer *)&local_a8,*(char **)param_2,
             *(RegisterAllocationData **)(param_2 + 8));
  Zone::~Zone(aZStack_78);
  AccountingAllocator::~AccountingAllocator((AccountingAllocator *)&local_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

