
/* v8::StartupData::CanBeRehashed() const */

void __thiscall v8::StartupData::CanBeRehashed(StartupData *this)

{
  internal::Snapshot::ExtractRehashability(this);
  return;
}

