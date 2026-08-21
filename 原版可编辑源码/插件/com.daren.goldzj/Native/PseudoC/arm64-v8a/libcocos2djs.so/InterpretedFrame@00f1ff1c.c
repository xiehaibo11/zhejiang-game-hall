
/* v8::internal::TranslatedFrame::InterpretedFrame(v8::internal::BailoutId,
   v8::internal::SharedFunctionInfo, int, int, int) */

void __thiscall
v8::internal::TranslatedFrame::InterpretedFrame
          (undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = param_4;
  param_1[7] = param_5;
  param_1[8] = param_6;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *param_1 = 0;
  param_1[1] = param_2;
  return;
}

