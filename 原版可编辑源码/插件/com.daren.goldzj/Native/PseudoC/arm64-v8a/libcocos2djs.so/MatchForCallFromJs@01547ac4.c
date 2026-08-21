
/* v8::internal::IrregexpInterpreter::MatchForCallFromJs(unsigned long, int, unsigned long, unsigned
   long, int*, int, unsigned long, v8::internal::RegExp::CallOrigin, v8::internal::Isolate*,
   unsigned long) */

undefined4
v8::internal::IrregexpInterpreter::MatchForCallFromJs
          (ulong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
          ,undefined4 param_6,undefined8 param_7,undefined4 param_8,Isolate *param_9,
          undefined8 param_10)

{
  ushort uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 local_78;
  undefined8 local_70;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
            (aPStack_68,param_9);
  local_78 = param_10;
  uVar4 = JSRegExp::MarkedForTierUp((JSRegExp *)&local_78);
  if ((uVar4 & 1) == 0) {
    local_70 = local_78;
    uVar4 = param_1;
    if (FLAG_regexp_tier_up != '\0') {
      JSRegExp::TierUpTick((JSRegExp *)&local_70);
    }
    while( true ) {
      uVar1 = *(ushort *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 7);
      if ((uVar1 & 9) == 0) break;
      if ((uVar1 & 9) == 8) {
        bVar6 = true;
        goto LAB_01547b88;
      }
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb);
    }
    bVar6 = false;
LAB_01547b88:
    uVar5 = JSRegExp::Bytecode((JSRegExp *)&local_70,bVar6);
    uVar3 = JSRegExp::BacktrackLimit((JSRegExp *)&local_70);
    uVar3 = MatchInternal(param_9,uVar5,param_1,param_5,param_6,param_2,param_8,uVar3);
  }
  else {
    uVar3 = 0xfffffffe;
  }
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
            (aPStack_68);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}

