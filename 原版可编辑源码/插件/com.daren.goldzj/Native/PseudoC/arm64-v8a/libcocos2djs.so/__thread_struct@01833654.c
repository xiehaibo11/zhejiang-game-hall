
/* std::__ndk1::__thread_struct::__thread_struct() */

void __thiscall std::__ndk1::__thread_struct::__thread_struct(__thread_struct *this)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  *(undefined8 **)this = puVar1;
  return;
}

