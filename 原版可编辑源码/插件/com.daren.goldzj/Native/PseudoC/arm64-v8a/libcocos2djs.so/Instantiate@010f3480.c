
/* v8::internal::Module::Instantiate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Module>, v8::Local<v8::Context>, v8::MaybeLocal<v8::Module>
   (*)(v8::Local<v8::Context>, v8::Local<v8::String>, v8::Local<v8::Module>)) */

undefined4
v8::internal::Module::Instantiate
          (Isolate *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long **pplVar4;
  undefined4 uVar5;
  undefined4 local_9c;
  long *local_98;
  Zone *pZStack_90;
  Zone aZStack_88 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(*param_2 + 0xb) < 2) {
    *(undefined4 *)(*param_2 + 0xb) = 2;
    uVar3 = GetCurrentStackPosition();
    if (uVar3 < *(ulong *)(param_1 + 0x58)) {
      Isolate::StackOverflow(param_1);
    }
    else {
      if (*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) == 0x44)
      {
        uVar3 = SourceTextModule::PrepareInstantiate();
      }
      else {
        uVar3 = SyntheticModule::PrepareInstantiate(param_1,param_2,param_3,param_4);
      }
      if ((uVar3 & 1) != 0) goto LAB_010f34bc;
    }
    ResetGraph(param_1,param_2);
    uVar5 = 0;
    goto LAB_010f3580;
  }
LAB_010f34bc:
  Zone::Zone(aZStack_88,*(AccountingAllocator **)(param_1 + 0x95d0),
             "../../src/objects/module.cc:185");
  local_98 = (long *)0x0;
  pZStack_90 = aZStack_88;
  local_9c = 0;
  if (3 < *(int *)(*param_2 + 0xb)) goto LAB_010f34f0;
  uVar3 = GetCurrentStackPosition();
  if (uVar3 < *(ulong *)(param_1 + 0x58)) {
    Isolate::StackOverflow(param_1);
    plVar2 = local_98;
joined_r0x010f3550:
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      Reset(param_1,plVar2[1]);
    }
    uVar5 = 0;
  }
  else {
    if (*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) != 0x44) {
      uVar3 = SyntheticModule::FinishInstantiate(param_1,param_2);
      plVar2 = local_98;
      if ((uVar3 & 1) != 0) goto LAB_010f34f0;
      goto joined_r0x010f3550;
    }
    uVar3 = SourceTextModule::FinishInstantiate(param_1,param_2,&local_98,&local_9c,aZStack_88);
    plVar2 = local_98;
    if ((uVar3 & 1) == 0) goto joined_r0x010f3550;
LAB_010f34f0:
    uVar5 = 1;
  }
  pplVar4 = &local_98;
  do {
    pplVar4 = (long **)*pplVar4;
  } while (pplVar4 != (long **)0x0);
  Zone::~Zone(aZStack_88);
LAB_010f3580:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

