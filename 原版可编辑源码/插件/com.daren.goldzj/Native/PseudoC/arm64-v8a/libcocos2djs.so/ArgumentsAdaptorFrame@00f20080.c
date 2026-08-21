
/* v8::internal::TranslatedFrame::ArgumentsAdaptorFrame(v8::internal::SharedFunctionInfo, int) */

void __thiscall
v8::internal::TranslatedFrame::ArgumentsAdaptorFrame
          (undefined8 *param_1,TranslatedFrame *this,undefined4 param_3)

{
  param_1[1] = this;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *param_1 = 0xffffffff00000001;
  param_1[10] = 0;
  param_1[9] = 0;
  return;
}

