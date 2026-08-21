
/* v8::internal::FrameInspector::ParameterIsShadowedByContextLocal(v8::internal::Handle<v8::internal::ScopeInfo>,
   v8::internal::Handle<v8::internal::String>) */

bool __thiscall
v8::internal::FrameInspector::ParameterIsShadowedByContextLocal
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  iVar1 = ScopeInfo::ContextSlotIndex(*param_2,*param_3,auStack_14,auStack_18,auStack_1c,auStack_20)
  ;
  return iVar1 != -1;
}

