
/* v8::internal::Factory::NewOrderedHashSet() */

void __thiscall v8::internal::Factory::NewOrderedHashSet(Factory *this)

{
  long lVar1;
  
  lVar1 = OrderedHashSet::Allocate(this,4,0);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

