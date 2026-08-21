
/* v8::internal::MicrotaskQueue::AddMicrotasksCompletedCallback(void (*)(v8::Isolate*, void*),
   void*) */

void __thiscall
v8::internal::MicrotaskQueue::AddMicrotasksCompletedCallback
          (MicrotaskQueue *this,_func_void_Isolate_ptr_void_ptr *param_1,void *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  _func_void_Isolate_ptr_void_ptr *local_20;
  void *pvStack_18;
  
  puVar2 = *(undefined8 **)(this + 0x50);
  puVar1 = *(undefined8 **)(this + 0x58);
  if ((puVar2 != puVar1) &&
     (((_func_void_Isolate_ptr_void_ptr *)*puVar2 != param_1 || ((void *)puVar2[1] != param_2)))) {
    do {
      puVar3 = puVar2;
      if (puVar1 + -2 == puVar3) goto LAB_00f608ac;
      puVar2 = puVar3 + 2;
    } while (((_func_void_Isolate_ptr_void_ptr *)puVar3[2] != param_1) ||
            ((void *)puVar3[3] != param_2));
  }
  if (puVar2 == puVar1) {
LAB_00f608ac:
    if (puVar1 == *(undefined8 **)(this + 0x60)) {
      local_20 = param_1;
      pvStack_18 = param_2;
      std::__ndk1::
      vector<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>>>
      ::__push_back_slow_path<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>const&>
                ((vector<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>,std::__ndk1::allocator<std::__ndk1::pair<void(*)(v8::Isolate*,void*),void*>>>
                  *)(this + 0x50),(pair *)&local_20);
    }
    else {
      puVar1[1] = param_2;
      *puVar1 = param_1;
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + 0x10;
    }
  }
  return;
}

