
/* v8::internal::ScopeInfo::CreateForNativeContext(v8::internal::Isolate*) */

void v8::internal::ScopeInfo::CreateForNativeContext(Isolate *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)Factory::NewScopeInfo((Factory *)param_1,5,4);
  *(undefined4 *)(*plVar1 + 7) = 0x8020388;
  *(undefined4 *)(*plVar1 + 0xb) = 0;
  *(undefined4 *)(*plVar1 + 0xf) = 0;
  *(undefined4 *)(*plVar1 + 0x13) = 0;
  *(undefined4 *)(*plVar1 + 0x17) = 0;
  return;
}

