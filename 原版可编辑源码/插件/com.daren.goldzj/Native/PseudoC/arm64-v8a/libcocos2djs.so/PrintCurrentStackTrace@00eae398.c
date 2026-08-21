
/* v8::Message::PrintCurrentStackTrace(v8::Isolate*, __sFILE*) */

void v8::Message::PrintCurrentStackTrace(Isolate *param_1,__sFILE *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  internal::Isolate::PrintCurrentStackTrace((Isolate *)param_1,param_2);
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  return;
}

