
/* v8::internal::IncrementalStringBuilder::Extend() */

void __thiscall v8::internal::IncrementalStringBuilder::Extend(IncrementalStringBuilder *this)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x18);
  if (*(int *)(**(long **)(this + 0x20) + 7) + *(int *)(*plVar4 + 7) < 0xffffff1) {
    plVar2 = (long *)Factory::NewConsString();
    if (plVar2 == (long *)0x0) goto LAB_011f2bd0;
    plVar4 = *(long **)(this + 0x18);
  }
  else {
    plVar2 = (long *)(*(long *)this + 200);
    this[0xc] = (IncrementalStringBuilder)0x1;
  }
  *plVar4 = *plVar2;
  iVar1 = *(int *)(this + 0x10);
  if (iVar1 < 0x2001) {
    iVar1 = iVar1 << 1;
    *(int *)(this + 0x10) = iVar1;
  }
  if (*(int *)(this + 8) == 0) {
    puVar3 = (undefined8 *)Factory::NewRawOneByteString(*(Factory **)this,iVar1,0);
  }
  else {
    puVar3 = (undefined8 *)Factory::NewRawTwoByteString();
  }
  if (puVar3 != (undefined8 *)0x0) {
    **(undefined8 **)(this + 0x20) = *puVar3;
    *(undefined4 *)(this + 0x14) = 0;
    return;
  }
LAB_011f2bd0:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

