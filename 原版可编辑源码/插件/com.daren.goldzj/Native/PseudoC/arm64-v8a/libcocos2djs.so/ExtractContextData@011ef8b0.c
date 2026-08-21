
/* v8::internal::Snapshot::ExtractContextData(v8::StartupData const*, unsigned int) */

undefined1  [16] v8::internal::Snapshot::ExtractContextData(StartupData *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < 1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kNumberOfContextsOffset < data->raw_size");
  }
  puVar4 = *(uint **)param_1;
  if (*puVar4 <= param_2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","index < num_contexts");
  }
  uVar2 = *(uint *)((long)puVar4 + (ulong)(param_2 * 4 + 0x50));
  if (uVar2 < uVar1) {
    uVar3 = uVar1;
    if (*puVar4 - 1 != param_2) {
      uVar3 = *(uint *)((long)puVar4 + (ulong)(param_2 * 4 + 0x54));
      if (uVar1 <= uVar3) goto LAB_011ef918;
    }
    auVar5._8_4_ = uVar3 - uVar2;
    auVar5._0_8_ = (long)puVar4 + (ulong)uVar2;
    auVar5._12_4_ = 0;
    return auVar5;
  }
LAB_011ef918:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","context_offset < static_cast<uint32_t>(data->raw_size)");
}

