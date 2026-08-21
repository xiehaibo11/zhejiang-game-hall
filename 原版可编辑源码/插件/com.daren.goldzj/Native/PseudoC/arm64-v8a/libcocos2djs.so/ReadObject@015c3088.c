
/* v8::internal::Deserializer::ReadObject() */

undefined8 __thiscall v8::internal::Deserializer::ReadObject(Deserializer *this)

{
  bool bVar1;
  undefined8 local_18;
  
  local_18 = 0;
  bVar1 = ReadData<v8::internal::FullMaybeObjectSlot>(this,&local_18,&stack0xfffffffffffffff0,1,0);
  if (bVar1) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","filled");
}

