
/* v8::internal::IrregexpInterpreter::MatchForCallFromRuntime(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSRegExp>, v8::internal::Handle<v8::internal::String>, int*,
   int, int) */

void v8::internal::IrregexpInterpreter::MatchForCallFromRuntime
               (undefined8 param_1,undefined8 *param_2,ulong *param_3,undefined8 param_4,
               undefined4 param_5,undefined4 param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_48;
  
  local_48 = *param_2;
  uVar6 = *param_3;
  uVar5 = uVar6;
  if (FLAG_regexp_tier_up != '\0') {
    JSRegExp::TierUpTick((JSRegExp *)&local_48);
  }
  do {
    uVar1 = *(ushort *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1)) + 7);
    if ((uVar1 & 9) == 0) {
      bVar4 = false;
LAB_01547c8c:
      uVar3 = JSRegExp::Bytecode((JSRegExp *)&local_48,bVar4);
      uVar2 = JSRegExp::BacktrackLimit((JSRegExp *)&local_48);
      MatchInternal(param_1,uVar3,uVar6,param_4,param_5,param_6,0,uVar2);
      return;
    }
    if ((uVar1 & 9) == 8) {
      bVar4 = true;
      goto LAB_01547c8c;
    }
    uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
  } while( true );
}

