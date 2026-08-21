
/* v8::internal::compiler::VariableTracker::State::Get(v8::internal::compiler::Variable) const */

undefined8 __thiscall v8::internal::compiler::VariableTracker::State::Get(State *this,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  uint *puVar7;
  long *plVar8;
  
  if (param_2 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","var != Variable::Invalid()");
  }
  uVar1 = base::hash_value(param_2);
  puVar2 = *(uint **)this;
  if (puVar2 != (uint *)0x0) {
    uVar4 = 0;
    while (puVar2[5] != uVar1) {
      puVar7 = puVar2 + (long)(int)uVar4 * 2 + 6;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
        puVar7 = puVar7 + 2;
      } while (-1 < (int)((puVar2[5] ^ uVar1) << (ulong)(uVar5 & 0x1f)));
      if (((int)(char)puVar2[4] <= (int)uVar5) || (puVar2 = *(uint **)puVar7, puVar2 == (uint *)0x0)
         ) goto LAB_016b9090;
    }
    if (*(long *)(puVar2 + 6) == 0) {
      if (*puVar2 == param_2) {
        this = (State *)(puVar2 + 2);
        goto LAB_016b9094;
      }
    }
    else {
      plVar6 = (long *)(*(long *)(puVar2 + 6) + 8);
      plVar8 = (long *)*plVar6;
      plVar3 = plVar6;
      if (plVar8 != (long *)0x0) goto LAB_016b90b8;
    }
  }
LAB_016b9090:
  this = this + 8;
LAB_016b9094:
  return *(undefined8 *)this;
LAB_016b90b8:
  do {
    if ((int)param_2 <= (int)plVar8[4]) {
      plVar3 = plVar8;
    }
    plVar8 = (long *)plVar8[(int)plVar8[4] < (int)param_2];
  } while (plVar8 != (long *)0x0);
  if ((plVar3 != plVar6) && ((int)plVar3[4] <= (int)param_2)) {
    this = (State *)(plVar3 + 5);
    goto LAB_016b9094;
  }
  goto LAB_016b9090;
}

