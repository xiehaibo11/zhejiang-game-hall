
/* v8::internal::RegExpImpl::IrregexpExec(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSRegExp>, v8::internal::Handle<v8::internal::String>, int,
   v8::internal::Handle<v8::internal::RegExpMatchInfo>) */

long v8::internal::RegExpImpl::IrregexpExec
               (long param_1,ulong *param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5
               )

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  void *pvVar5;
  long *plVar6;
  ulong uVar7;
  void *pvVar8;
  ulong local_48;
  
  plVar4 = (long *)String::Flatten(param_1,param_3,0);
  if ((FLAG_regexp_tier_up != '\0') && (999 < *(int *)(*plVar4 + 7))) {
    local_48 = *param_2;
    JSRegExp::MarkTierUpForNextExec((JSRegExp *)&local_48);
    if (FLAG_trace_regexp_tier_up != '\0') {
      PrintF("Forcing tier-up for very long strings in RegExpImpl::IrregexpExec\n");
    }
  }
  uVar2 = RegExp::IrregexpPrepare(param_1,param_2,plVar4);
  if ((int)uVar2 < 0) {
    param_1 = 0;
  }
  else {
    if ((int)uVar2 < 0x81) {
      pvVar5 = (void *)0x0;
      pvVar8 = (void *)(param_1 + 0xb82c);
      bVar1 = true;
    }
    else {
      uVar7 = (ulong)uVar2 << 2;
      pvVar5 = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
      if (pvVar5 == (void *)0x0) {
        plVar6 = (long *)V8::GetCurrentPlatform();
        (**(code **)(*plVar6 + 0x18))();
        pvVar5 = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
        }
      }
      bVar1 = false;
      pvVar8 = pvVar5;
    }
    iVar3 = IrregexpExecRaw(param_1,param_2,plVar4,param_4,pvVar8,(ulong)uVar2);
    if (iVar3 == -1) {
      param_1 = 0;
    }
    else if (iVar3 == 1) {
      param_1 = RegExp::SetLastMatchInfo
                          (param_1,param_5,plVar4,
                           *(int *)((*param_2 & 0xffffffff00000000 |
                                    (ulong)*(uint *)(*param_2 + 0xb)) + 0x27) >> 1,pvVar8);
    }
    else {
      param_1 = param_1 + 0xb0;
    }
    if (!bVar1) {
      operator_delete__(pvVar5);
    }
  }
  return param_1;
}

