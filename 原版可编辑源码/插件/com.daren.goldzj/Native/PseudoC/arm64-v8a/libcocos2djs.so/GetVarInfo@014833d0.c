
/* v8::internal::wasm::AsmJsParser::GetVarInfo(int) */

long __thiscall v8::internal::wasm::AsmJsParser::GetVarInfo(AsmJsParser *this,int param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  AsmJsParser *this_00;
  ulong uVar5;
  
  if (param_1 < 0x100) {
    if (-10000 < param_1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar2 = *(long *)(this + 0x138);
    lVar3 = *(long *)(this + 0x140) - lVar2 >> 3;
    uVar5 = -(long)param_1 - 10000;
    uVar4 = lVar3 * -0x3333333333333333;
    uVar1 = -(long)param_1 - 9999;
    if (uVar5 <= uVar4 && uVar4 - uVar5 != 0) {
      uVar1 = uVar4;
    }
    uVar1 = uVar1 + lVar3 * 0x3333333333333333;
    if ((uVar1 == 0) || (uVar5 <= uVar4 && uVar4 - uVar5 != 0)) goto LAB_01483488;
    this_00 = this + 0x138;
  }
  else {
    lVar2 = *(long *)(this + 0x118);
    lVar3 = *(long *)(this + 0x120) - lVar2 >> 3;
    uVar5 = (long)param_1 - 0x100;
    uVar4 = lVar3 * -0x3333333333333333;
    uVar1 = (long)param_1 - 0xff;
    if (uVar5 <= uVar4 && uVar4 - uVar5 != 0) {
      uVar1 = uVar4;
    }
    uVar1 = uVar1 + lVar3 * 0x3333333333333333;
    if ((uVar1 == 0) || (uVar5 <= uVar4 && uVar4 - uVar5 != 0)) goto LAB_01483488;
    this_00 = this + 0x118;
  }
  std::__ndk1::
  vector<v8::internal::wasm::AsmJsParser::VarInfo,v8::internal::ZoneAllocator<v8::internal::wasm::AsmJsParser::VarInfo>>
  ::__append((vector<v8::internal::wasm::AsmJsParser::VarInfo,v8::internal::ZoneAllocator<v8::internal::wasm::AsmJsParser::VarInfo>>
              *)this_00,uVar1);
  lVar2 = *(long *)this_00;
LAB_01483488:
  return lVar2 + uVar5 * 0x28;
}

