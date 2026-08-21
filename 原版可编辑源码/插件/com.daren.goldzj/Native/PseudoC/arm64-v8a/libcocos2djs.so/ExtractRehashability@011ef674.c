
/* v8::internal::Snapshot::ExtractRehashability(v8::StartupData const*) */

bool v8::internal::Snapshot::ExtractRehashability(StartupData *param_1)

{
  if (*(uint *)(param_1 + 8) < 5) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kRehashabilityOffset < static_cast<uint32_t>(data->raw_size)");
  }
  if (*(uint *)(*(long *)param_1 + 4) < 2) {
    return *(uint *)(*(long *)param_1 + 4) != 0;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","rehashability != 0 implies rehashability == 1");
}

