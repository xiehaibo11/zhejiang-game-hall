
/* v8::internal::IrregexpInterpreter::Match(v8::internal::Isolate*, v8::internal::JSRegExp,
   v8::internal::String, int*, int, int, v8::internal::RegExp::CallOrigin) */

void v8::internal::IrregexpInterpreter::Match
               (undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 local_38;
  
  uVar5 = param_3;
  local_38 = param_2;
  if (FLAG_regexp_tier_up != '\0') {
    JSRegExp::TierUpTick((JSRegExp *)&local_38);
  }
  do {
    uVar1 = *(ushort *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1)) + 7);
    if ((uVar1 & 9) == 0) {
      bVar4 = false;
LAB_01544f60:
      uVar3 = JSRegExp::Bytecode((JSRegExp *)&local_38,bVar4);
      uVar2 = JSRegExp::BacktrackLimit((JSRegExp *)&local_38);
      MatchInternal(param_1,uVar3,param_3,param_4,param_5,param_6,param_7,uVar2);
      return;
    }
    if ((uVar1 & 9) == 8) {
      bVar4 = true;
      goto LAB_01544f60;
    }
    uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
  } while( true );
}

