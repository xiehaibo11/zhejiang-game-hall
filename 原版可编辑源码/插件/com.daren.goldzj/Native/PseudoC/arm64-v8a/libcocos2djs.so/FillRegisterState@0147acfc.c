
/* v8::sampler::SignalHandler::FillRegisterState(void*, v8::RegisterState*) */

void v8::sampler::SignalHandler::FillRegisterState(void *param_1,RegisterState *param_2)

{
  *(undefined8 *)param_2 = *(undefined8 *)((long)param_1 + 0x1b8);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)((long)param_1 + 0x1b0);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)((long)param_1 + 0x1a0);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)((long)param_1 + 0x1a8);
  return;
}

