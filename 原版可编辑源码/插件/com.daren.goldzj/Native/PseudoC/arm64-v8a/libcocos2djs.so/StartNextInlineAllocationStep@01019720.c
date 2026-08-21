
/* v8::internal::SpaceWithLinearArea::StartNextInlineAllocationStep() */

void __thiscall
v8::internal::SpaceWithLinearArea::StartNextInlineAllocationStep(SpaceWithLinearArea *this)

{
  if (((*(char *)(*(long *)(this + 0x40) + 0x1a0) == '\0') &&
      (this[0x38] == (SpaceWithLinearArea)0x0)) && (*(long *)(this + 8) != *(long *)(this + 0x10)))
  {
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x68);
                    /* WARNING: Could not recover jumptable at 0x01019758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x88))(this,0);
    return;
  }
  return;
}

