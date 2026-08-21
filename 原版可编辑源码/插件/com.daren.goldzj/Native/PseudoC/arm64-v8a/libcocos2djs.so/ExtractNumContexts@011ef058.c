
/* v8::internal::Snapshot::ExtractNumContexts(v8::StartupData const*) */

undefined4 v8::internal::Snapshot::ExtractNumContexts(StartupData *param_1)

{
  if (0 < *(int *)(param_1 + 8)) {
    return **(undefined4 **)param_1;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kNumberOfContextsOffset < data->raw_size");
}

