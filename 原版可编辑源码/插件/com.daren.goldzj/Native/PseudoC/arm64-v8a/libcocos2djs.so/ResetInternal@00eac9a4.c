
/* v8::TryCatch::ResetInternal() */

void __thiscall v8::TryCatch::ResetInternal(TryCatch *this)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)this + 0xa8);
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = uVar1;
  return;
}

