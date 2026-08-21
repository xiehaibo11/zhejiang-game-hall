
/* v8::internal::Histogram::CreateHistogram() const */

undefined8 __thiscall v8::internal::Histogram::CreateHistogram(Histogram *this)

{
  undefined8 uVar1;
  
  if (*(code **)(*(long *)(this + 0x20) + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01053f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)(this + 0x20) + 0x20))
                      (*(undefined8 *)this,*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc),
                       (long)*(int *)(this + 0x10));
    return uVar1;
  }
  return 0;
}

