
/* v8::internal::IgnitionStatisticsExtension::GetIgnitionDispatchCounters(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void v8::internal::IgnitionStatisticsExtension::GetIgnitionDispatchCounters
               (FunctionCallbackInfo *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)param_1;
  puVar2 = (undefined8 *)
           interpreter::Interpreter::GetDispatchCountersObject
                     (*(Interpreter **)(*(long *)(lVar3 + 8) + 0xb6e8));
  puVar1 = (undefined8 *)(lVar3 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  *(undefined8 *)(lVar3 + 0x18) = *puVar1;
  return;
}

