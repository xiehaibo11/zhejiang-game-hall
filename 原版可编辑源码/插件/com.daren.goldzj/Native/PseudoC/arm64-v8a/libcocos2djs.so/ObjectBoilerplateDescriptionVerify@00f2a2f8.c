
/* v8::internal::ObjectBoilerplateDescription::ObjectBoilerplateDescriptionVerify(v8::internal::Isolate*)
    */

void __thiscall
v8::internal::ObjectBoilerplateDescription::ObjectBoilerplateDescriptionVerify
          (ObjectBoilerplateDescription *this,Isolate *param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this;
  if (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) != 0x82) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsObjectBoilerplateDescription()");
  }
  if (1 < *(int *)(uVar1 + 3)) {
    TorqueGeneratedClassVerifiers::FixedArrayVerify();
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "this->length() >= ObjectBoilerplateDescription::kDescriptionStartIndex");
}

