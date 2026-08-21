
/* se::Object::getArrayBufferData(unsigned char**, unsigned long*) const */

undefined8 __thiscall se::Object::getArrayBufferData(Object *this,uchar **param_1,ulong *param_2)

{
  long lVar1;
  ArrayBuffer *this_00;
  long lVar2;
  uchar *local_70;
  ulong local_68;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  this_00 = (ArrayBuffer *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
  v8::ArrayBuffer::GetContents(this_00);
  *param_1 = local_70;
  *param_2 = local_68;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

