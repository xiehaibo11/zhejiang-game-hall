
/* v8::internal::compiler::Schedule::EnsureCFGWellFormedness() */

void __thiscall v8::internal::compiler::Schedule::EnsureCFGWellFormedness(Schedule *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  Zone *this_00;
  undefined8 *puVar4;
  
  uVar2 = *(long *)(this + 0x10) - *(long *)(this + 8);
  if (uVar2 != 0) {
    if ((ulong)((long)uVar2 >> 3) >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    this_00 = *(Zone **)(this + 0x20);
    puVar3 = *(undefined8 **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar3) < uVar2) {
      puVar3 = (undefined8 *)Zone::NewExpand(this_00,uVar2);
    }
    else {
      *(ulong *)(this_00 + 0x10) = (long)puVar3 + uVar2;
    }
    puVar1 = *(undefined8 **)(this + 0x10);
    for (puVar4 = *(undefined8 **)(this + 8); puVar4 != puVar1; puVar4 = puVar4 + 1) {
      *puVar3 = *puVar4;
      puVar3 = puVar3 + 1;
    }
  }
  EliminateRedundantPhiNodes(this);
  return;
}

