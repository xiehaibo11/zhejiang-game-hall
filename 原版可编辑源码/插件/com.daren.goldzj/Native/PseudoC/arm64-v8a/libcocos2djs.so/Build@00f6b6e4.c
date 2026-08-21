
/* v8::internal::Factory::CodeBuilder::Build() */

void __thiscall v8::internal::Factory::CodeBuilder::Build(CodeBuilder *this)

{
  long lVar1;
  
  lVar1 = BuildInternal(this,true);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

