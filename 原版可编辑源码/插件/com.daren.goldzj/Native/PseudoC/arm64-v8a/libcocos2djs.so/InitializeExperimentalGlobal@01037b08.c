
/* v8::internal::Genesis::InitializeExperimentalGlobal() */

void __thiscall v8::internal::Genesis::InitializeExperimentalGlobal(Genesis *this)

{
  InitializeGlobal_harmony_string_replaceall(this);
  InitializeGlobal_harmony_weak_refs(this);
  InitializeGlobal_harmony_regexp_match_indices(this);
  InitializeGlobal_harmony_sharedarraybuffer(this);
  InitializeGlobal_harmony_promise_all_settled(this);
  return;
}

