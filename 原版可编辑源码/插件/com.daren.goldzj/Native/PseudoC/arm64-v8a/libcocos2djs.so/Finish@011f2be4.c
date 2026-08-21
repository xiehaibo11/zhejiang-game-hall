
/* v8::internal::IncrementalStringBuilder::Finish() */

undefined8 __thiscall v8::internal::IncrementalStringBuilder::Finish(IncrementalStringBuilder *this)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  Factory *this_00;
  
  puVar1 = (undefined8 *)
           SeqString::Truncate(*(undefined8 *)(this + 0x20),*(undefined4 *)(this + 0x14));
  **(undefined8 **)(this + 0x20) = *puVar1;
  plVar4 = *(long **)(this + 0x18);
  if (*(int *)(**(long **)(this + 0x20) + 7) + *(int *)(*plVar4 + 7) < 0xffffff1) {
    plVar2 = (long *)Factory::NewConsString();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    plVar4 = *(long **)(this + 0x18);
  }
  else {
    plVar2 = (long *)(*(long *)this + 200);
    this[0xc] = (IncrementalStringBuilder)0x1;
  }
  *plVar4 = *plVar2;
  if (this[0xc] == (IncrementalStringBuilder)0x0) {
    uVar3 = *(undefined8 *)(this + 0x18);
  }
  else {
    this_00 = *(Factory **)this;
    puVar1 = (undefined8 *)Factory::NewInvalidStringLengthError(this_00);
    Isolate::Throw((Isolate *)this_00,*puVar1,0);
    uVar3 = 0;
  }
  return uVar3;
}

