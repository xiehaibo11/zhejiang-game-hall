
/* v8::SnapshotCreator::SnapshotCreator(v8::Isolate*, long const*, v8::StartupData*) */

void __thiscall
v8::SnapshotCreator::SnapshotCreator
          (SnapshotCreator *this,Isolate *param_1,long *param_2,StartupData *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x68);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  *puVar1 = &PTR__Allocator_01c98458;
  puVar1[1] = param_1;
  *(undefined8 **)(param_1 + 0xc690) = puVar1;
  *(long **)(param_1 + 0xb7a8) = param_2;
  param_1[0xb6b8] = (Isolate)0x1;
  internal::Isolate::Enter((Isolate *)param_1);
  if (((param_3 == (StartupData *)0x0) &&
      (param_3 = (StartupData *)internal::Snapshot::DefaultSnapshotBlob(),
      param_3 == (StartupData *)0x0)) || (*(int *)(param_3 + 8) < 1)) {
    internal::Isolate::InitWithoutSnapshot((Isolate *)param_1);
  }
  else {
    *(StartupData **)(param_1 + 0xb7e8) = param_3;
    internal::Snapshot::Initialize((Isolate *)param_1);
  }
  *(undefined8 **)this = puVar1;
  return;
}

