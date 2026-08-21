
/* v8::internal::FixedArrayBase::GetMaxLengthForNewSpaceAllocation(v8::internal::ElementsKind) */

uint v8::internal::FixedArrayBase::GetMaxLengthForNewSpaceAllocation(void)

{
  uint uVar1;
  
  uVar1 = ElementsKindToShiftSize();
  return 0x1fff8 >> (ulong)(uVar1 & 0x1f);
}

