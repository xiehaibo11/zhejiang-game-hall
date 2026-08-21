
/* v8::internal::ConstantPool::RecordEntry(unsigned int, v8::internal::RelocInfo::Mode) */

void __thiscall
v8::internal::ConstantPool::RecordEntry(ConstantPool *this,undefined4 param_1,undefined1 param_3)

{
  long lVar1;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined1 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 1;
  local_38 = param_1;
  local_30 = param_3;
  RecordKey(this,local_40,*(int *)(*(long *)this + 0x20) - *(int *)(*(long *)this + 0x10));
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

