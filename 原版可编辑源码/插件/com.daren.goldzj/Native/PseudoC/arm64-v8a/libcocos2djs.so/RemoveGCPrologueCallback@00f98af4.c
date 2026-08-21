
/* v8::internal::Heap::RemoveGCPrologueCallback(void (*)(v8::Isolate*, v8::GCType,
   v8::GCCallbackFlags, void*), void*) */

void __thiscall
v8::internal::Heap::RemoveGCPrologueCallback
          (Heap *this,_func_void_Isolate_ptr_GCType_GCCallbackFlags_void_ptr *param_1,void *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(this + 0x618);
  puVar2 = *(undefined8 **)(this + 0x610);
  lVar1 = lVar3 - (long)puVar2;
  if (lVar1 != 0) {
    uVar4 = 0;
    do {
      if (((_func_void_Isolate_ptr_GCType_GCCallbackFlags_void_ptr *)*puVar2 == param_1) &&
         ((void *)puVar2[2] == param_2)) {
        uVar6 = *(undefined8 *)(lVar3 + -0x10);
        uVar5 = *(undefined8 *)(lVar3 + -0x18);
        puVar2[2] = *(undefined8 *)(lVar3 + -8);
        puVar2[1] = uVar6;
        *puVar2 = uVar5;
        *(long *)(this + 0x618) = *(long *)(this + 0x618) + -0x18;
        return;
      }
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 3;
    } while (uVar4 < (ulong)((lVar1 >> 3) * -0x5555555555555555));
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

