
/* v8::internal::JSSetIterator::JSSetIteratorVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::JSSetIterator::JSSetIteratorVerify(JSSetIterator *this,Isolate *param_1)

{
  ulong uVar1;
  
  if (1 < *(ushort *)
           ((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1)) -
          0x415) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSSetIterator()");
  }
  TorqueGeneratedJSCollectionIterator<v8::internal::JSCollectionIterator,v8::internal::JSObject>::
  JSCollectionIteratorVerify((Isolate *)this);
  uVar1 = *(ulong *)this;
  if (((*(uint *)(uVar1 + 0xb) & 1) != 0) &&
     (*(short *)((uVar1 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xb)) - 1))
      == 0x7d)) {
    if ((*(byte *)(uVar1 + 0xf) & 1) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","index().IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","table().IsOrderedHashSet()");
}

