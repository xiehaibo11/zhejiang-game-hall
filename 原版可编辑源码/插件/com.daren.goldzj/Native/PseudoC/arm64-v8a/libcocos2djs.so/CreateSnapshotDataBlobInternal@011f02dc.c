
/* v8::internal::CreateSnapshotDataBlobInternal(v8::SnapshotCreator::FunctionCodeHandling, char
   const*, v8::Isolate*) */

undefined1  [16]
v8::internal::CreateSnapshotDataBlobInternal(undefined4 param_1,long param_2,Isolate *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  HandleScope aHStack_50 [24];
  SnapshotCreator aSStack_38 [8];
  
  if (param_3 == (Isolate *)0x0) {
    param_3 = (Isolate *)v8::Isolate::Allocate();
  }
  SnapshotCreator::SnapshotCreator(aSStack_38,param_3,(long *)0x0,(StartupData *)0x0);
  v8::HandleScope::HandleScope(aHStack_50,param_3);
  uVar1 = v8::Context::New(param_3,0,0,0,0,0,0);
  if ((param_2 == 0) || (uVar2 = FUN_011f03dc(param_3,uVar1,param_2,"<embedded>"), (uVar2 & 1) != 0)
     ) {
    SnapshotCreator::SetDefaultContext(aSStack_38,uVar1,0,0);
    v8::HandleScope::~HandleScope(aHStack_50);
    auVar4 = SnapshotCreator::CreateBlob(aSStack_38,param_1);
    uVar1 = auVar4._0_8_;
    uVar2 = auVar4._8_8_ & 0xffffffff00000000;
    uVar3 = auVar4._8_8_ & 0xffffffff;
  }
  else {
    v8::HandleScope::~HandleScope(aHStack_50);
    uVar1 = 0;
    uVar3 = 0;
    uVar2 = 0;
  }
  SnapshotCreator::~SnapshotCreator(aSStack_38);
  auVar4._8_8_ = uVar2 | uVar3;
  auVar4._0_8_ = uVar1;
  return auVar4;
}

