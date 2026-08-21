
/* v8::internal::compiler::JSHeapBroker::SetTargetNativeContextRef(v8::internal::Handle<v8::internal::NativeContext>)
    */

void __thiscall
v8::internal::compiler::JSHeapBroker::SetTargetNativeContextRef
          (JSHeapBroker *this,undefined8 param_2)

{
  short sVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  ObjectRef::ObjectRef((ObjectRef *)&local_30,this,param_2,0);
  puVar2 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_30);
  if (*(int *)(puVar2 + 1) == 2) {
    uVar3 = *(ulong *)*puVar2;
    if ((uVar3 & 1) == 0) goto LAB_017161cc;
    sVar1 = *(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1));
  }
  else {
    if (*(int *)(puVar2 + 1) == 0) goto LAB_017161cc;
    sVar1 = *(short *)(puVar2[2] + 0x18);
  }
  if (sVar1 == 0x8f) {
    *(undefined8 *)(this + 0x28) = uStack_28;
    *(undefined8 *)(this + 0x20) = local_30;
    if (this[0x18] == (JSHeapBroker)0x0) {
      this[0x18] = (JSHeapBroker)0x1;
    }
    return;
  }
LAB_017161cc:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsNativeContext()");
}

