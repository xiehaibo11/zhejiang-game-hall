
void FUN_01259414(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_0125a13c(param_1,&v8::internal::SerializedData::kMagicNumber);
  uVar1 = v8::base::hash_value(v8::internal::Version::patch_);
  uVar1 = v8::base::hash_combine(0,uVar1);
  uVar2 = v8::base::hash_value(v8::internal::Version::build_);
  uVar1 = v8::base::hash_combine(uVar1,uVar2);
  uVar2 = v8::base::hash_value(v8::internal::Version::minor_);
  uVar1 = v8::base::hash_combine(uVar1,uVar2);
  uVar2 = v8::base::hash_value(v8::internal::Version::major_);
  local_24 = v8::base::hash_combine(uVar1,uVar2);
  FUN_0125a13c(param_1,&local_24);
  if (v8::internal::CpuFeatures::initialized_ == '\0') {
    v8::internal::CpuFeatures::initialized_ = '\x01';
    v8::internal::CpuFeatures::ProbeImpl(false);
  }
  local_28 = v8::internal::CpuFeatures::supported_;
  FUN_0125a13c(param_1,&local_28);
  local_2c = v8::internal::FlagList::Hash();
  FUN_0125a13c(param_1,&local_2c);
  return;
}

