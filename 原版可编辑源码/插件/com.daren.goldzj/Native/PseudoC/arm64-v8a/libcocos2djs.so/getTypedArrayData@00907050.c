
/* se::Object::getTypedArrayData(unsigned char**, unsigned long*) const */

undefined8 __thiscall se::Object::getTypedArrayData(Object *this,uchar **param_1,ulong *param_2)

{
  long lVar1;
  ArrayBufferView *this_00;
  ArrayBuffer *this_01;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long local_80;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  this_00 = (ArrayBufferView *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
  this_01 = (ArrayBuffer *)v8::ArrayBufferView::Buffer(this_00);
  v8::ArrayBuffer::GetContents(this_01);
  lVar2 = v8::ArrayBufferView::ByteOffset(this_00);
  *param_1 = (uchar *)(local_80 + lVar2);
  uVar3 = v8::ArrayBufferView::ByteLength(this_00);
  *param_2 = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

