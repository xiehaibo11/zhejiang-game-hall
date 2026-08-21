
/* v8::internal::JSFunction::PrintName(__sFILE*) */

void __thiscall v8::internal::JSFunction::PrintName(JSFunction *this,__sFILE *param_1)

{
  void *pvVar1;
  ulong local_30;
  undefined8 local_28;
  void *local_8;
  
  local_30 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  local_28 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_30);
  String::ToCString(&local_8,&local_28,1,1,0);
  PrintF(param_1,"%s",local_8);
  pvVar1 = local_8;
  local_8 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return;
}

