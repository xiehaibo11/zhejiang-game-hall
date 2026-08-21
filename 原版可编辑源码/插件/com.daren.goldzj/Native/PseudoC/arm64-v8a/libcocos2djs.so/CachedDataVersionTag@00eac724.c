
/* v8::ScriptCompiler::CachedDataVersionTag() */

void v8::ScriptCompiler::CachedDataVersionTag(void)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = base::hash_value(internal::Version::patch_);
  uVar3 = base::hash_combine(0,uVar3);
  uVar4 = base::hash_value(internal::Version::build_);
  uVar3 = base::hash_combine(uVar3,uVar4);
  uVar4 = base::hash_value(internal::Version::minor_);
  uVar3 = base::hash_combine(uVar3,uVar4);
  uVar4 = base::hash_value(internal::Version::major_);
  uVar1 = base::hash_combine(uVar3,uVar4);
  uVar2 = internal::FlagList::Hash();
  if (internal::CpuFeatures::initialized_ == '\0') {
    internal::CpuFeatures::initialized_ = '\x01';
    internal::CpuFeatures::ProbeImpl(false);
  }
  uVar3 = base::hash_value(internal::CpuFeatures::supported_);
  uVar3 = base::hash_combine(0,uVar3);
  uVar4 = base::hash_value(uVar2);
  uVar3 = base::hash_combine(uVar3,uVar4);
  uVar4 = base::hash_value(uVar1);
  base::hash_combine(uVar3,uVar4);
  return;
}

