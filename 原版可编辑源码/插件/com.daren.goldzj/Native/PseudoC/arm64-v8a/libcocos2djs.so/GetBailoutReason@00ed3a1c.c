
/* v8::CpuProfileNode::GetBailoutReason() const */

undefined * __thiscall v8::CpuProfileNode::GetBailoutReason(CpuProfileNode *this)

{
  undefined **ppuVar1;
  
  ppuVar1 = &internal::CodeEntry::kEmptyBailoutReason;
  if (*(long *)(*(long *)(this + 8) + 0x38) != 0) {
    ppuVar1 = (undefined **)(*(long *)(*(long *)(this + 8) + 0x38) + 8);
  }
  return *ppuVar1;
}

