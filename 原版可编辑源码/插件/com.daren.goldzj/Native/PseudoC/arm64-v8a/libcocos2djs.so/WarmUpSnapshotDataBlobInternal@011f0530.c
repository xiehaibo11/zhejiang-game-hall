
/* v8::internal::WarmUpSnapshotDataBlobInternal(v8::StartupData, char const*) */

undefined1  [16] __thiscall
v8::internal::WarmUpSnapshotDataBlobInternal(internal *this,undefined8 param_2,long param_3)

{
  Isolate *this_00;
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  HandleScope aHStack_68 [24];
  internal *local_50;
  undefined8 uStack_48;
  SnapshotCreator aSStack_28 [8];
  
  local_50 = this;
  uStack_48 = param_2;
  if ((0 < (int)param_2) && (this != (internal *)0x0)) {
    if (param_3 != 0) {
      SnapshotCreator::SnapshotCreator(aSStack_28,(long *)0x0,(StartupData *)&local_50);
      this_00 = (Isolate *)SnapshotCreator::GetIsolate(aSStack_28);
      v8::HandleScope::HandleScope(aHStack_68,this_00);
      uVar1 = v8::Context::New(this_00,0,0,0,0,0,0);
      uVar2 = FUN_011f03dc(this_00,uVar1,param_3,"<warm-up>");
      v8::HandleScope::~HandleScope(aHStack_68);
      uVar1 = 0;
      uVar4 = 0;
      uVar3 = 0;
      if ((uVar2 & 1) != 0) {
        v8::HandleScope::HandleScope(aHStack_68,this_00);
        v8::Isolate::ContextDisposedNotification(this_00,false);
        uVar1 = v8::Context::New(this_00,0,0,0,0,0,0);
        SnapshotCreator::SetDefaultContext(aSStack_28,uVar1,0,0);
        v8::HandleScope::~HandleScope(aHStack_68);
        auVar5 = SnapshotCreator::CreateBlob(aSStack_28,1);
        uVar1 = auVar5._0_8_;
        uVar3 = auVar5._8_8_ & 0xffffffff00000000;
        uVar4 = auVar5._8_8_ & 0xffffffff;
      }
      SnapshotCreator::~SnapshotCreator(aSStack_28);
      auVar5._8_8_ = uVar3 | uVar4;
      auVar5._0_8_ = uVar1;
      return auVar5;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(warmup_source) != nullptr");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "cold_snapshot_blob.raw_size > 0 && cold_snapshot_blob.data != nullptr");
}

