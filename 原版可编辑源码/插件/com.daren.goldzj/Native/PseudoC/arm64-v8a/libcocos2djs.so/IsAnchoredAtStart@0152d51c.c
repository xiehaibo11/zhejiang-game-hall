
/* v8::internal::RegExpLookaround::IsAnchoredAtStart() */

undefined8 __thiscall v8::internal::RegExpLookaround::IsAnchoredAtStart(RegExpLookaround *this)

{
  undefined8 uVar1;
  
  if ((this[0x10] != (RegExpLookaround)0x0) && (*(int *)(this + 0x1c) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0152d540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 8) + 0x28))();
    return uVar1;
  }
  return 0;
}

