
/* v8::internal::AllocationSite::AllocationSiteVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::AllocationSite::AllocationSiteVerify(AllocationSite *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)this;
  uVar3 = uVar4 & 0xffffffff00000000;
  uVar2 = uVar3 | 7;
  if (*(short *)(uVar2 + *(uint *)(uVar4 - 1)) != 0x55) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsAllocationSite()");
  }
  if (1 < *(ushort *)(uVar2 + *(uint *)((uVar3 | *(uint *)(uVar4 + 0xb)) - 1)) - 0x97) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","dependent_code().IsDependentCode()");
  }
  if (((*(uint *)(uVar4 + 3) & 1) != 0) &&
     (*(ushort *)(uVar2 + *(uint *)((uVar3 | *(uint *)(uVar4 + 3)) - 1)) < 0xaa)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "transition_info_or_boilerplate().IsSmi() || transition_info_or_boilerplate().IsJSObject()"
            );
  }
  uVar1 = *(uint *)(uVar4 + 7);
  if ((uVar1 & 1) == 0) {
    if (uVar1 == 0) {
      return;
    }
  }
  else {
    if (uVar1 == 0) {
      return;
    }
    if (*(short *)(uVar2 + *(uint *)((uVar3 | uVar1) - 1)) == 0x55) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","nested_site().IsAllocationSite() || nested_site() == Smi::zero()");
}

