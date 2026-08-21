
/* v8::internal::JSDataView::JSDataViewVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::JSDataView::JSDataViewVerify(JSDataView *this,Isolate *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  TorqueGeneratedClassVerifiers::JSDataViewVerify(*(undefined8 *)this);
  uVar1 = *(ulong *)this;
  uVar2 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xb);
  if (((*(uint *)(uVar2 + 0x1b) >> 2 & 1) == 0) &&
     (*(long *)(uVar2 + 0x13) + *(long *)(uVar1 + 0xf) != *(long *)(uVar1 + 0x1f))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "reinterpret_cast<uint8_t*>( JSArrayBuffer::cast(buffer()).backing_store()) + byte_offset() == data_pointer()"
            );
  }
  return;
}

