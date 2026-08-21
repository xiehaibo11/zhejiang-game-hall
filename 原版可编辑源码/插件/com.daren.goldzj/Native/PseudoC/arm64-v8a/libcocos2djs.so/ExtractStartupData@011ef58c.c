
/* v8::internal::Snapshot::ExtractStartupData(v8::StartupData const*) */

undefined1  [16] v8::internal::Snapshot::ExtractStartupData(StartupData *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  
  if ((int)*(uint *)(param_1 + 8) < 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kNumberOfContextsOffset < data->raw_size");
  }
  piVar3 = *(int **)param_1;
  uVar2 = piVar3[0x13];
  uVar1 = *piVar3 * 4 + 0x57U & 0xfffffff8;
  if (uVar1 <= uVar2 && uVar2 - uVar1 != 0) {
    if (uVar2 < *(uint *)(param_1 + 8)) {
      auVar4._8_4_ = uVar2 - uVar1;
      auVar4._0_8_ = (long)piVar3 + (ulong)uVar1;
      auVar4._12_4_ = 0;
      return auVar4;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","end_offset < snapshot->raw_size");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","start_offset < end_offset");
}

