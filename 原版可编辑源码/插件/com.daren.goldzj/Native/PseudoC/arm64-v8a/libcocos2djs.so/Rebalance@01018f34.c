
/* v8::internal::NewSpace::Rebalance() */

undefined8 __thiscall v8::internal::NewSpace::Rebalance(NewSpace *this)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = SemiSpace::EnsureCurrentCapacity((SemiSpace *)(this + 0xd0));
  if ((uVar1 & 1) != 0) {
    uVar2 = SemiSpace::EnsureCurrentCapacity((SemiSpace *)(this + 0x170));
    return uVar2;
  }
  return 0;
}

