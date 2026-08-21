
/* v8::SnapshotCreator::SnapshotCreator(long const*, v8::StartupData*) */

void __thiscall
v8::SnapshotCreator::SnapshotCreator(SnapshotCreator *this,long *param_1,StartupData *param_2)

{
  Isolate *this_00;
  undefined8 *puVar1;
  
  this_00 = (Isolate *)internal::Isolate::New(1);
  puVar1 = operator_new(0x68);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = this_00;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *puVar1 = &PTR__Allocator_01c98458;
  puVar1[1] = this_00;
  *(undefined8 **)(this_00 + 0xc690) = puVar1;
  *(long **)(this_00 + 0xb7a8) = param_1;
  this_00[0xb6b8] = (Isolate)0x1;
  internal::Isolate::Enter(this_00);
  if (((param_2 == (StartupData *)0x0) &&
      (param_2 = (StartupData *)internal::Snapshot::DefaultSnapshotBlob(),
      param_2 == (StartupData *)0x0)) || (*(int *)(param_2 + 8) < 1)) {
    internal::Isolate::InitWithoutSnapshot(this_00);
  }
  else {
    *(StartupData **)(this_00 + 0xb7e8) = param_2;
    internal::Snapshot::Initialize(this_00);
  }
  *(undefined8 **)this = puVar1;
  return;
}

