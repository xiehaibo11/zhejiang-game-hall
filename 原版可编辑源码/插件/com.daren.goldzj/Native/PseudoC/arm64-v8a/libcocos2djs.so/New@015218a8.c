
/* v8::internal::interpreter::BytecodeLabels::New() */

long * __thiscall v8::internal::interpreter::BytecodeLabels::New(BytecodeLabels *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  Zone *this_00;
  long lVar4;
  undefined4 uStack_30;
  undefined3 uStack_2c;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  this_00 = *(Zone **)(this + 0x18);
  plVar2 = *(long **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar2) < 0x20) {
    plVar2 = (long *)Zone::NewExpand(this_00,0x20);
  }
  else {
    *(long **)(this_00 + 0x10) = plVar2 + 4;
  }
  *plVar2 = 0;
  *(undefined1 *)(plVar2 + 2) = 0;
  plVar2[3] = -1;
  plVar2[1] = (long)this;
  *(uint *)((long)plVar2 + 0x14) = CONCAT31(uStack_2c,uStack_30._3_1_);
  *(undefined4 *)((long)plVar2 + 0x11) = uStack_30;
  lVar4 = *(long *)this;
  *plVar2 = lVar4;
  *(long **)(lVar4 + 8) = plVar2;
  *(long **)this = plVar2;
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return plVar2 + 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

