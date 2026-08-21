
/* v8::internal::JavaScriptFrame::CollectFunctionAndOffsetForICStats(v8::internal::JSFunction,
   v8::internal::AbstractCode, int) */

void v8::internal::JavaScriptFrame::CollectFunctionAndOffsetForICStats
               (ulong param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined **ppuVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_98;
  undefined **local_90;
  code *pcStack_88;
  undefined *local_80;
  undefined ***local_70;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  local_98 = param_2;
  if (ICStats::instance_ != '\x02') {
    local_80 = &DAT_01d3f538;
    local_90 = &PTR_FUN_01c984d0;
    pcStack_88 = base::
                 LazyInstanceImpl<v8::internal::ICStats,v8::base::StaticallyAllocatedInstanceTrait<v8::internal::ICStats>,v8::base::DefaultConstructTrait<v8::internal::ICStats>,v8::base::ThreadSafeInitOnceTrait,v8::base::LeakyInstanceTrait<v8::internal::ICStats>>
                 ::InitInstance;
    local_70 = &local_90;
    base::CallOnceImpl(&ICStats::instance_,&local_90);
    if (&local_90 == local_70) {
      pcVar9 = (code *)(*local_70)[4];
    }
    else {
      if (local_70 == (undefined ***)0x0) goto LAB_00f45d60;
      pcVar9 = (code *)(*local_70)[5];
    }
    (*pcVar9)();
  }
LAB_00f45d60:
  lVar2 = DAT_01d3f540;
  lVar11 = (long)DAT_01d3f5a8;
  uVar3 = *(uint *)(param_1 + 0xb);
  uVar12 = param_1 & 0xffffffff00000000;
  uVar8 = ICStats::GetOrCacheFunctionName((ICStats *)&DAT_01d3f538,param_1);
  lVar1 = lVar2 + lVar11 * 0x80;
  *(undefined8 *)(lVar1 + 0x18) = uVar8;
  *(int *)(lVar1 + 0x20) = param_3;
  iVar5 = AbstractCode::SourcePosition((AbstractCode *)&local_98,param_3);
  ppuVar10 = (undefined **)(uVar12 | *(uint *)((uVar12 | uVar3) + 0xf));
  if (*(short *)((uVar12 | 7) + (ulong)*(uint *)((long)ppuVar10 + -1)) == 0x5b) {
    ppuVar10 = (undefined **)(uVar12 | *(uint *)((long)ppuVar10 + 0xb));
  }
  if ((((ulong)ppuVar10 & 1) != 0) &&
     (*(short *)(((ulong)ppuVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)ppuVar10 + -1))
      == 0x65)) {
    local_90 = ppuVar10;
    iVar6 = Script::GetLineNumber((Script *)&local_90,iVar5);
    lVar2 = lVar2 + lVar11 * 0x80;
    *(int *)(lVar2 + 0x30) = iVar6 + 1;
    uVar7 = Script::GetColumnNumber((Script *)&local_90,iVar5);
    *(undefined4 *)(lVar2 + 0x34) = uVar7;
    uVar8 = ICStats::GetOrCacheScriptName((ICStats *)&DAT_01d3f538,local_90);
    *(undefined8 *)(lVar2 + 0x28) = uVar8;
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

