
/* v8::internal::Snapshot::ExtractContextOffset(v8::StartupData const*, unsigned int) */

void v8::internal::Snapshot::ExtractContextOffset(StartupData *param_1,uint param_2)

{
  if (*(uint *)(*(long *)param_1 + (ulong)(param_2 * 4 + 0x50)) < *(uint *)(param_1 + 8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","context_offset < static_cast<uint32_t>(data->raw_size)");
}

