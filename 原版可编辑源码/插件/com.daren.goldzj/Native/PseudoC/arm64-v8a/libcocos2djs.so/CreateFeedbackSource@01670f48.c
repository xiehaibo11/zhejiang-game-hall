
/* v8::internal::compiler::BytecodeGraphBuilder::CreateFeedbackSource(int) */

undefined1  [16] __thiscall
v8::internal::compiler::BytecodeGraphBuilder::CreateFeedbackSource
          (BytecodeGraphBuilder *this,int param_1)

{
  undefined1 auVar1 [16];
  FeedbackSource local_20 [16];
  undefined1 auVar2 [15];
  
  FeedbackSource::FeedbackSource
            (local_20,*(undefined8 *)(this + 0x38),*(undefined8 *)(this + 0x40),param_1);
  auVar1[0] = local_20[0];
  auVar2[1] = local_20[1];
  auVar2[2] = local_20[2];
  auVar2[3] = local_20[3];
  auVar2[4] = local_20[4];
  auVar2[5] = local_20[5];
  auVar2[6] = local_20[6];
  auVar2[7] = local_20[7];
  auVar2[8] = local_20[8];
  auVar2[9] = local_20[9];
  auVar2[10] = local_20[10];
  auVar2[0xb] = local_20[0xb];
  auVar2[0xc] = local_20[0xc];
  auVar2[0xd] = local_20[0xd];
  auVar2[0xe] = local_20[0xe];
  register0x0000400f = local_20[0xf];
  return auVar1;
}

