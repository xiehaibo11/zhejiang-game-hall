
/* v8::internal::Smi::SmiVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::Smi::SmiVerify(Smi *this,Isolate *param_1)

{
  if (((byte)*this & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsSmi()");
}

