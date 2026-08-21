
/* v8::internal::Deoptimizer::QueueValueForMaterialization(unsigned long, v8::internal::Object,
   v8::internal::TranslatedFrame::iterator const&) */

void __thiscall
v8::internal::Deoptimizer::QueueValueForMaterialization
          (Deoptimizer *this,undefined8 param_1,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (param_3 == *(int *)(*(long *)this + 0x178)) {
    uStack_30 = *(undefined4 *)(param_4 + 2);
    uStack_38 = param_4[1];
    uStack_40 = *param_4;
    puVar1 = *(undefined8 **)(this + 0x100);
    local_48 = param_1;
    if (puVar1 < *(undefined8 **)(this + 0x108)) {
      puVar1[1] = uStack_40;
      *puVar1 = param_1;
      puVar1[3] = CONCAT44(uStack_2c,uStack_30);
      puVar1[2] = uStack_38;
      *(long *)(this + 0x100) = *(long *)(this + 0x100) + 0x20;
    }
    else {
      std::__ndk1::
      vector<v8::internal::Deoptimizer::ValueToMaterialize,std::__ndk1::allocator<v8::internal::Deoptimizer::ValueToMaterialize>>
      ::__push_back_slow_path<v8::internal::Deoptimizer::ValueToMaterialize>
                ((vector<v8::internal::Deoptimizer::ValueToMaterialize,std::__ndk1::allocator<v8::internal::Deoptimizer::ValueToMaterialize>>
                  *)(this + 0xf8),(ValueToMaterialize *)&local_48);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

