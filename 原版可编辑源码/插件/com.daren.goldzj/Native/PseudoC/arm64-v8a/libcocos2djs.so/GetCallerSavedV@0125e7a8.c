
/* v8::internal::CPURegList::GetCallerSavedV(int) */

undefined1  [16] v8::internal::CPURegList::GetCallerSavedV(int param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = (ulong)(uint)param_1 | 0x100000000;
  auVar1._0_8_ = 0xffff00ff;
  return auVar1;
}

