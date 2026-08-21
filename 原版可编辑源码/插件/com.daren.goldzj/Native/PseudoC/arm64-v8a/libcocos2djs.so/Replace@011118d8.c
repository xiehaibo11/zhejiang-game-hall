
/* v8::internal::DescriptorArray::Replace(v8::internal::InternalIndex, v8::internal::Descriptor*) */

void __thiscall
v8::internal::DescriptorArray::Replace(DescriptorArray *this,undefined8 param_2,undefined8 *param_3)

{
  ulong *puVar1;
  
  *(uint *)(param_3 + 3) =
       *(uint *)(param_3 + 3) & 0xfff801ff |
       *(uint *)(*(long *)this + ((long)(int)param_2 * 0xc00000000 + 0x1000000000 >> 0x20 | 3U)) >>
       1 & 0x7fe00;
  puVar1 = (ulong *)param_3[2];
  if (*(int *)(param_3 + 1) == 0) {
    if (puVar1 != (ulong *)0x0) {
      Set(this,param_2,*(undefined8 *)*param_3,*puVar1 | 2);
      return;
    }
  }
  else if (puVar1 != (ulong *)0x0) {
    Set(this,param_2,*(undefined8 *)*param_3,*puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

