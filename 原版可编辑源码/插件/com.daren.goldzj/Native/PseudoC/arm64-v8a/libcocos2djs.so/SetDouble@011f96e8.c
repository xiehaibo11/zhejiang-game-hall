
/* v8::tracing::TracedValue::SetDouble(char const*, double) */

void __thiscall v8::tracing::TracedValue::SetDouble(TracedValue *this,char *param_1,double param_2)

{
  long lVar1;
  char *pcVar2;
  undefined1 auStack_a0 [104];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  WriteName(this,param_1);
  pcVar2 = (char *)internal::DoubleToCString((internal *)param_2,auStack_a0,100);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 8),pcVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

