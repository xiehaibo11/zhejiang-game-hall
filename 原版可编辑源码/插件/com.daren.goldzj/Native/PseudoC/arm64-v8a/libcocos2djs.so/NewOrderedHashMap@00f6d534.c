
/* v8::internal::Factory::NewOrderedHashMap() */

void __thiscall v8::internal::Factory::NewOrderedHashMap(Factory *this)

{
  long lVar1;
  
  lVar1 = OrderedHashMap::Allocate(this,4,0);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

