
/* se::Object::getTypedArrayType() const */

undefined4 __thiscall se::Object::getTypedArrayType(Object *this)

{
  Value *this_00;
  ulong uVar1;
  undefined4 uVar2;
  
  this_00 = (Value *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
  uVar1 = v8::Value::IsInt8Array(this_00);
  if ((uVar1 & 1) == 0) {
    uVar1 = v8::Value::IsInt16Array(this_00);
    if ((uVar1 & 1) == 0) {
      uVar1 = v8::Value::IsInt32Array(this_00);
      if ((uVar1 & 1) == 0) {
        uVar1 = v8::Value::IsUint8Array(this_00);
        if ((uVar1 & 1) == 0) {
          uVar1 = v8::Value::IsUint8ClampedArray(this_00);
          if ((uVar1 & 1) == 0) {
            uVar1 = v8::Value::IsUint16Array(this_00);
            if ((uVar1 & 1) == 0) {
              uVar1 = v8::Value::IsUint32Array(this_00);
              if ((uVar1 & 1) == 0) {
                uVar1 = v8::Value::IsFloat32Array(this_00);
                if ((uVar1 & 1) == 0) {
                  uVar1 = v8::Value::IsFloat64Array(this_00);
                  uVar2 = 9;
                  if ((uVar1 & 1) == 0) {
                    uVar2 = 0;
                  }
                }
                else {
                  uVar2 = 8;
                }
              }
              else {
                uVar2 = 7;
              }
            }
            else {
              uVar2 = 6;
            }
          }
          else {
            uVar2 = 5;
          }
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

