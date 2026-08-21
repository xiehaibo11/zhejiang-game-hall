
/* v8::internal::TransitionArray::GrowPrototypeTransitionArray(v8::internal::Handle<v8::internal::WeakFixedArray>,
   int, v8::internal::Isolate*) */

void v8::internal::TransitionArray::GrowPrototypeTransitionArray
               (long *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(*param_1 + 3);
  if (0xff < param_2) {
    param_2 = 0x100;
  }
  plVar2 = (long *)Factory::CopyWeakFixedArrayAndGrow(param_3,param_1,(param_2 - (iVar1 >> 1)) + 1);
  if (iVar1 < 2) {
    *(undefined4 *)(*plVar2 + 7) = 0;
  }
  return;
}

