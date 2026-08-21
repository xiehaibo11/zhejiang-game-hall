
/* se::Object::createTypedArray(se::Object::TypedArrayType, void*, unsigned long) */

void se::Object::createTypedArray(int param_1,void *param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  ArrayBuffer *this;
  char *pcVar3;
  long lVar4;
  void *local_80;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  if (param_1 == 5) {
    pcVar3 = "Doesn\'t support to create Uint8ClampedArray with Object::createTypedArray API!";
  }
  else {
    if (param_1 != 0) {
      this = (ArrayBuffer *)v8::ArrayBuffer::New(DAT_01d371a8,param_3);
      if (param_2 == (void *)0x0) {
        v8::ArrayBuffer::GetContents(this);
        memset(local_80,0,param_3);
      }
      else {
        v8::ArrayBuffer::GetContents(this);
        memcpy(local_80,param_2,param_3);
      }
      uVar2 = 0;
      switch(param_1) {
      case 1:
        uVar2 = v8::Int8Array::New(this,0,param_3);
        break;
      case 2:
        uVar2 = v8::Int16Array::New(this,0,param_3 >> 1);
        break;
      case 3:
        uVar2 = v8::Int32Array::New(this,0,param_3 >> 2);
        break;
      case 4:
        uVar2 = v8::Uint8Array::New(this,0,param_3);
        break;
      case 6:
        uVar2 = v8::Uint16Array::New(this,0,param_3 >> 1);
        break;
      case 7:
        uVar2 = v8::Uint32Array::New(this,0,param_3 >> 2);
        break;
      case 8:
        uVar2 = v8::Float32Array::New(this,0,param_3 >> 2);
        break;
      case 9:
        uVar2 = v8::Float64Array::New(this,0,param_3 >> 3);
      }
      uVar2 = _createJSObject(0,uVar2);
      goto LAB_009066fc;
    }
    pcVar3 = "Don\'t pass se::Object::TypedArrayType::NONE to createTypedArray API!";
  }
  __android_log_print(6,"jswrapper",pcVar3);
  uVar2 = 0;
LAB_009066fc:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

