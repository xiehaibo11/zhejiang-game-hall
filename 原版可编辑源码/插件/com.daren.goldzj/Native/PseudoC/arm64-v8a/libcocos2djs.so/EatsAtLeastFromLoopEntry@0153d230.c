
/* v8::internal::LoopChoiceNode::EatsAtLeastFromLoopEntry() */

ulong __thiscall v8::internal::LoopChoiceNode::EatsAtLeastFromLoopEntry(LoopChoiceNode *this)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = (**(code **)(*(long *)this + 0x60))();
  if ((uVar2 & 1) != 0) {
    return (ulong)*(ushort *)(this + 0x1a);
  }
  iVar1 = (uint)*(byte *)(*(long *)(this + 0x48) + 0x1b) -
          (uint)*(byte *)(*(long *)(this + 0x50) + 0x1b);
                    /* WARNING: Could not recover jumptable at 0x0153d288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&UNK_0153d28c +
                    (ulong)(byte)(&DAT_01a4b1b8)[CONCAT14(0xff < iVar1,iVar1) >> 0x1f] * 4))();
  return uVar2;
}

