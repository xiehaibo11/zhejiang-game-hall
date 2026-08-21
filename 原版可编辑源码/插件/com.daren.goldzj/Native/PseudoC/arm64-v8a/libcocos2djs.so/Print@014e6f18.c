
/* v8::internal::SourcePosition::Print(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::Code) const */

void __thiscall
v8::internal::SourcePosition::Print(SourcePosition *this,basic_ostream *param_1,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  ulong local_18;
  
  uVar3 = param_3 & 0xffffffff00000000;
  local_18 = uVar3 | *(uint *)(param_3 + 7);
  uVar4 = *(ulong *)this;
  if (((uVar4 & 1) == 0) && ((uVar4 & 0x7fff80000000) != 0)) {
    lVar1 = (uVar4 >> 0x1b & 0xffff0) + (uVar3 | *(uint *)(local_18 + 0x23));
    uStack_38 = *(undefined8 *)(lVar1 + -1);
    local_40 = *(undefined8 *)(lVar1 + -9);
    if ((int)uStack_38 == -1) {
      internal::operator<<(param_1,this);
    }
    else {
      uVar2 = DeoptimizationData::GetInlinedFunction((DeoptimizationData *)&local_18,(int)uStack_38)
      ;
      Print(this,param_1,uVar2);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1," inlined at ",0xc);
    Print((SourcePosition *)&local_40,param_1,param_3);
  }
  else {
    Print(this,param_1,uVar3 | *(uint *)(local_18 + 0x1f));
  }
  return;
}

