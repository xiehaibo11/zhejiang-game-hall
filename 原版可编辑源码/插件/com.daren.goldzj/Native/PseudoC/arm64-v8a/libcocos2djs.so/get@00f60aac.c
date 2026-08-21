
/* v8::internal::MicrotaskQueue::get(long) const */

undefined8 __thiscall v8::internal::MicrotaskQueue::get(MicrotaskQueue *this,long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0x10);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = (*(long *)(this + 0x18) + param_1) / lVar1;
  }
  return *(undefined8 *)
          (*(long *)(this + 0x20) + ((*(long *)(this + 0x18) + param_1) - lVar2 * lVar1) * 8);
}

