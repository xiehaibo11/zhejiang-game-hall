
/* v8::internal::Debug::SetBreakpointForFunction(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::String>, int*) */

uint __thiscall
v8::internal::Debug::SetBreakpointForFunction
          (Debug *this,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_24;
  
  iVar1 = *(int *)(this + 0x80) + 1;
  *(int *)(this + 0x80) = iVar1;
  *param_4 = iVar1;
  uVar3 = Factory::NewBreakPoint(*(Factory **)(this + 0x88),iVar1);
  local_24 = 0;
  uVar2 = SetBreakpoint(this,param_2,uVar3,&local_24);
  return uVar2 & 1;
}

