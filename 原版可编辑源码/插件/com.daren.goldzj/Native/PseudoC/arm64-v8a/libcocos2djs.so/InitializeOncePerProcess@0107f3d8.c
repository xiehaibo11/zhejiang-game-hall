
/* v8::internal::ElementsAccessor::InitializeOncePerProcess() */

void v8::internal::ElementsAccessor::InitializeOncePerProcess(void)

{
  int iVar1;
  
  if (((DAT_01d3f730 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d3f730), iVar1 != 0)) {
    DAT_01d3f650 = operator_new(8);
    *DAT_01d3f650 = &PTR__ElementsAccessor_01cb28d8;
    DAT_01d3f658 = operator_new(8);
    *DAT_01d3f658 = &PTR__ElementsAccessor_01cb2a18;
    DAT_01d3f660 = operator_new(8);
    *DAT_01d3f660 = &PTR__ElementsAccessor_01cb2b58;
    DAT_01d3f668 = operator_new(8);
    *DAT_01d3f668 = &PTR__ElementsAccessor_01cb2c98;
    DAT_01d3f670 = operator_new(8);
    *DAT_01d3f670 = &PTR__ElementsAccessor_01cb2dd8;
    DAT_01d3f678 = operator_new(8);
    *DAT_01d3f678 = &PTR__ElementsAccessor_01cb2f18;
    DAT_01d3f680 = operator_new(8);
    *DAT_01d3f680 = &PTR__ElementsAccessor_01cb3058;
    DAT_01d3f688 = operator_new(8);
    *DAT_01d3f688 = &PTR__ElementsAccessor_01cb3198;
    DAT_01d3f690 = operator_new(8);
    *DAT_01d3f690 = &PTR__ElementsAccessor_01cb32d8;
    DAT_01d3f698 = operator_new(8);
    *DAT_01d3f698 = &PTR__ElementsAccessor_01cb3418;
    DAT_01d3f6a0 = operator_new(8);
    *DAT_01d3f6a0 = &PTR__ElementsAccessor_01cb3558;
    DAT_01d3f6a8 = operator_new(8);
    *DAT_01d3f6a8 = &PTR__ElementsAccessor_01cb3698;
    DAT_01d3f6b0 = operator_new(8);
    *DAT_01d3f6b0 = &PTR__ElementsAccessor_01cb37d8;
    DAT_01d3f6b8 = operator_new(8);
    *DAT_01d3f6b8 = &PTR__ElementsAccessor_01cb3918;
    DAT_01d3f6c0 = operator_new(8);
    *DAT_01d3f6c0 = &PTR__ElementsAccessor_01cb3a58;
    DAT_01d3f6c8 = operator_new(8);
    *DAT_01d3f6c8 = &PTR__ElementsAccessor_01cb3b98;
    DAT_01d3f6d0 = operator_new(8);
    *DAT_01d3f6d0 = &PTR__ElementsAccessor_01cb3cd8;
    DAT_01d3f6d8 = operator_new(8);
    *DAT_01d3f6d8 = &PTR__ElementsAccessor_01cb3e18;
    DAT_01d3f6e0 = operator_new(8);
    *DAT_01d3f6e0 = &PTR__ElementsAccessor_01cb3f58;
    DAT_01d3f6e8 = operator_new(8);
    *DAT_01d3f6e8 = &PTR__ElementsAccessor_01cb4098;
    DAT_01d3f6f0 = operator_new(8);
    *DAT_01d3f6f0 = &PTR__ElementsAccessor_01cb41d8;
    DAT_01d3f6f8 = operator_new(8);
    *DAT_01d3f6f8 = &PTR__ElementsAccessor_01cb4318;
    DAT_01d3f700 = operator_new(8);
    *DAT_01d3f700 = &PTR__ElementsAccessor_01cb4458;
    DAT_01d3f708 = operator_new(8);
    *DAT_01d3f708 = &PTR__ElementsAccessor_01cb4598;
    DAT_01d3f710 = operator_new(8);
    *DAT_01d3f710 = &PTR__ElementsAccessor_01cb46d8;
    DAT_01d3f718 = operator_new(8);
    *DAT_01d3f718 = &PTR__ElementsAccessor_01cb4818;
    DAT_01d3f720 = operator_new(8);
    *DAT_01d3f720 = &PTR__ElementsAccessor_01cb4958;
    DAT_01d3f728 = operator_new(8);
    *DAT_01d3f728 = &PTR__ElementsAccessor_01cb4a98;
    __cxa_guard_release(&DAT_01d3f730);
  }
  elements_accessors_ = &DAT_01d3f650;
  return;
}

