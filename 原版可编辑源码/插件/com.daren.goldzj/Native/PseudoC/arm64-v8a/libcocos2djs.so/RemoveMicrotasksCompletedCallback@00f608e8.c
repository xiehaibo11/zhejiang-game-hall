
/* v8::internal::MicrotaskQueue::RemoveMicrotasksCompletedCallback(void (*)(v8::Isolate*, void*),
   void*) */

void __thiscall
v8::internal::MicrotaskQueue::RemoveMicrotasksCompletedCallback
          (MicrotaskQueue *this,_func_void_Isolate_ptr_void_ptr *param_1,void *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar4 = *(undefined8 **)(this + 0x50);
  puVar2 = *(undefined8 **)(this + 0x58);
  puVar3 = puVar4;
  if ((puVar2 != puVar4) &&
     (((_func_void_Isolate_ptr_void_ptr *)*puVar4 != param_1 || ((void *)puVar4[1] != param_2)))) {
    do {
      puVar5 = puVar3;
      if (puVar2 + -2 == puVar5) {
        return;
      }
      puVar3 = puVar5 + 2;
    } while (((_func_void_Isolate_ptr_void_ptr *)puVar5[2] != param_1) ||
            ((void *)puVar5[3] != param_2));
  }
  if (puVar3 == puVar2) {
    return;
  }
  puVar5 = puVar3 + 2;
  if (puVar5 != puVar2) {
    lVar7 = (long)puVar3 - (long)puVar4 >> 4;
    uVar1 = ((ulong)((long)puVar2 + ((-2 - lVar7) * 0x10 - (long)puVar4)) >> 4) + 1;
    if (3 < uVar1) {
      uVar6 = uVar1 & 0x1ffffffffffffffc;
      puVar3 = puVar3 + uVar6 * 2;
      puVar5 = puVar5 + uVar6 * 2;
      puVar4 = puVar4 + lVar7 * 2 + 4;
      uVar8 = uVar6;
      do {
        uVar8 = uVar8 - 4;
        puVar4[-3] = puVar4[-1];
        puVar4[-4] = puVar4[-2];
        puVar4[-1] = puVar4[1];
        puVar4[-2] = *puVar4;
        puVar4[1] = puVar4[3];
        *puVar4 = puVar4[2];
        puVar4[3] = puVar4[5];
        puVar4[2] = puVar4[4];
        puVar4 = puVar4 + 8;
      } while (uVar8 != 0);
      if (uVar1 == uVar6) goto LAB_00f609a8;
    }
    do {
      *puVar3 = *puVar5;
      puVar4 = puVar5 + 1;
      puVar5 = puVar5 + 2;
      puVar3[1] = *puVar4;
      puVar3 = puVar3 + 2;
    } while (puVar5 != puVar2);
  }
LAB_00f609a8:
  *(undefined8 **)(this + 0x58) = puVar3;
  return;
}

