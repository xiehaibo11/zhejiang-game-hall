
/* v8::debug::Coverage::ScriptData::ScriptData(unsigned long,
   std::__ndk1::shared_ptr<v8::internal::Coverage>) */

void __thiscall
v8::debug::Coverage::ScriptData::ScriptData(ScriptData *this,ulong param_1,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = *(long *)*param_3;
  if (param_1 < (ulong)(((long *)*param_3)[1] - lVar1 >> 5)) {
    *(ulong *)this = lVar1 + param_1 * 0x20;
    *(undefined8 *)(this + 8) = *param_3;
    *(undefined8 *)(this + 0x10) = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

