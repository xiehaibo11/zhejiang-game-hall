
/* v8::internal::compiler::SlackTrackingPrediction::SlackTrackingPrediction(v8::internal::compiler::MapRef,
   int) */

void __thiscall
v8::internal::compiler::SlackTrackingPrediction::SlackTrackingPrediction
          (SlackTrackingPrediction *this,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  *(int *)this = param_4;
  local_30 = param_2;
  uStack_28 = param_3;
  iVar1 = MapRef::GetInObjectPropertiesStartInWords((MapRef *)&local_30);
  *(int *)(this + 4) = (param_4 >> 2) - iVar1;
  return;
}

