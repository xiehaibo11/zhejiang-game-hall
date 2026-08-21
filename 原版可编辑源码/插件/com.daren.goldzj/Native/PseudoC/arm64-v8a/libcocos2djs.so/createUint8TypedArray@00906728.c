
/* se::Object::createUint8TypedArray(unsigned char*, unsigned long) */

void se::Object::createUint8TypedArray(uchar *param_1,ulong param_2)

{
  long lVar1;
  ArrayBuffer *this;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_70;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  this = (ArrayBuffer *)v8::ArrayBuffer::New(DAT_01d371a8,param_2);
  if (param_1 == (uchar *)0x0) {
    v8::ArrayBuffer::GetContents(this);
    memset(local_70,0,param_2);
  }
  else {
    v8::ArrayBuffer::GetContents(this);
    memcpy(local_70,param_1,param_2);
  }
  uVar2 = v8::Uint8Array::New(this,0,param_2);
  _createJSObject(0,uVar2);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

