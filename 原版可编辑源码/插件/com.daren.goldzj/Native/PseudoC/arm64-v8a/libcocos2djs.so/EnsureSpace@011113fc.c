
/* v8::internal::FrameArray::EnsureSpace(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::FrameArray>, int) */

long * v8::internal::FrameArray::EnsureSpace(undefined8 param_1,long *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  iVar1 = *(int *)(*param_2 + 3) >> 1;
  if (iVar1 < param_3) {
    iVar2 = param_3;
    if (param_3 < 0) {
      iVar2 = param_3 + 1;
    }
    iVar2 = iVar2 >> 1;
    if (iVar2 < 3) {
      iVar2 = 2;
    }
    plVar3 = (long *)Factory::CopyFixedArrayAndGrow(param_1,param_2,(iVar2 + param_3) - iVar1);
    return plVar3;
  }
  return param_2;
}

