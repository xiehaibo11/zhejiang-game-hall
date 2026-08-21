
/* v8::internal::ScriptData::ScriptData(unsigned char const*, int) */

void __thiscall v8::internal::ScriptData::ScriptData(ScriptData *this,uchar *param_1,int param_2)

{
  uchar *puVar1;
  long *plVar2;
  uchar *puVar3;
  ulong uVar4;
  
  *(uchar **)(this + 8) = param_1;
  *(int *)(this + 0x10) = param_2;
  *this = (ScriptData)((byte)*this & 0xfc);
  if (((ulong)param_1 & 7) != 0) {
    uVar4 = (ulong)param_2;
    puVar1 = operator_new__(uVar4,(nothrow_t *)&std::nothrow);
    if (puVar1 == (uchar *)0x0) {
      plVar2 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar2 + 0x18))();
      puVar1 = operator_new__(uVar4,(nothrow_t *)&std::nothrow);
      if (puVar1 == (uchar *)0x0) {
                    /* WARNING: Subroutine does not return */
        FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
    }
    if (param_2 != 0) {
      puVar3 = puVar1;
      if ((uint)param_2 < 8) {
        do {
          uVar4 = uVar4 - 1;
          *puVar3 = *param_1;
          puVar3 = puVar3 + 1;
          param_1 = param_1 + 1;
        } while (uVar4 != 0);
      }
      else {
        MemCopy(puVar1,param_1,uVar4);
      }
    }
    *(uchar **)(this + 8) = puVar1;
    *this = (ScriptData)((byte)*this | 1);
  }
  return;
}

