
/* v8::internal::Snapshot::ExtractReadOnlyData(v8::StartupData const*) */

undefined1  [16] v8::internal::Snapshot::ExtractReadOnlyData(StartupData *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *(long *)param_1;
  uVar1 = *(uint *)(lVar3 + 0x4c);
  uVar2 = *(uint *)(lVar3 + 0x50);
  if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","start_offset < end_offset");
  }
  if ((0 < (int)*(uint *)(param_1 + 8)) && (uVar2 < *(uint *)(param_1 + 8))) {
    auVar4._8_4_ = uVar2 - uVar1;
    auVar4._0_8_ = lVar3 + (ulong)uVar1;
    auVar4._12_4_ = 0;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","end_offset < snapshot->raw_size");
}

