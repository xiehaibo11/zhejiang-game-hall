
/* v8::Object::Clone() */

void __thiscall v8::Object::Clone(Object *this)

{
  undefined4 uVar1;
  long lVar2;
  Factory *pFVar3;
  
  pFVar3 = (Factory *)((ulong)*(uint *)(this + 4) << 0x20);
  uVar1 = *(undefined4 *)(pFVar3 + 0x2c60);
  *(undefined4 *)(pFVar3 + 0x2c60) = 5;
  lVar2 = internal::Factory::CopyJSObject(pFVar3,this);
  if (lVar2 != 0) {
    *(undefined4 *)(pFVar3 + 0x2c60) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!result.is_null()");
}

