
/* v8::internal::compiler::LoadElimination::AbstractState::KillAll(v8::internal::Zone*) const */

undefined1 * __thiscall
v8::internal::compiler::LoadElimination::AbstractState::KillAll(AbstractState *this,Zone *param_1)

{
  undefined1 *__s;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = 0;
  do {
    if (*(long *)(this + 0x108 + lVar1) != 0) {
      __s = *(undefined1 **)(param_1 + 0x10);
      if ((ulong)(*(long *)(param_1 + 0x18) - (long)__s) < 0x210) {
        __s = (undefined1 *)Zone::NewExpand(param_1,0x210);
      }
      else {
        *(undefined1 **)(param_1 + 0x10) = __s + 0x210;
      }
      memset(__s,0,0x210);
      uVar2 = *(undefined8 *)(this + 0x128);
      uVar4 = *(undefined8 *)(this + 0x140);
      uVar3 = *(undefined8 *)(this + 0x138);
      uVar6 = *(undefined8 *)(this + 0x110);
      uVar5 = *(undefined8 *)(this + 0x108);
      uVar8 = *(undefined8 *)(this + 0x120);
      uVar7 = *(undefined8 *)(this + 0x118);
      *(undefined8 *)(__s + 0x130) = *(undefined8 *)(this + 0x130);
      *(undefined8 *)(__s + 0x128) = uVar2;
      *(undefined8 *)(__s + 0x140) = uVar4;
      *(undefined8 *)(__s + 0x138) = uVar3;
      *(undefined8 *)(__s + 0x110) = uVar6;
      *(undefined8 *)(__s + 0x108) = uVar5;
      *(undefined8 *)(__s + 0x120) = uVar8;
      *(undefined8 *)(__s + 0x118) = uVar7;
      uVar2 = *(undefined8 *)(this + 0x168);
      uVar4 = *(undefined8 *)(this + 0x180);
      uVar3 = *(undefined8 *)(this + 0x178);
      uVar6 = *(undefined8 *)(this + 0x150);
      uVar5 = *(undefined8 *)(this + 0x148);
      uVar8 = *(undefined8 *)(this + 0x160);
      uVar7 = *(undefined8 *)(this + 0x158);
      *(undefined8 *)(__s + 0x170) = *(undefined8 *)(this + 0x170);
      *(undefined8 *)(__s + 0x168) = uVar2;
      *(undefined8 *)(__s + 0x180) = uVar4;
      *(undefined8 *)(__s + 0x178) = uVar3;
      *(undefined8 *)(__s + 0x150) = uVar6;
      *(undefined8 *)(__s + 0x148) = uVar5;
      *(undefined8 *)(__s + 0x160) = uVar8;
      *(undefined8 *)(__s + 0x158) = uVar7;
      uVar2 = *(undefined8 *)(this + 0x1a8);
      uVar4 = *(undefined8 *)(this + 0x1c0);
      uVar3 = *(undefined8 *)(this + 0x1b8);
      uVar6 = *(undefined8 *)(this + 400);
      uVar5 = *(undefined8 *)(this + 0x188);
      uVar8 = *(undefined8 *)(this + 0x1a0);
      uVar7 = *(undefined8 *)(this + 0x198);
      *(undefined8 *)(__s + 0x1b0) = *(undefined8 *)(this + 0x1b0);
      *(undefined8 *)(__s + 0x1a8) = uVar2;
      *(undefined8 *)(__s + 0x1c0) = uVar4;
      *(undefined8 *)(__s + 0x1b8) = uVar3;
      *(undefined8 *)(__s + 400) = uVar6;
      *(undefined8 *)(__s + 0x188) = uVar5;
      *(undefined8 *)(__s + 0x1a0) = uVar8;
      *(undefined8 *)(__s + 0x198) = uVar7;
      uVar2 = *(undefined8 *)(this + 0x1e8);
      uVar4 = *(undefined8 *)(this + 0x200);
      uVar3 = *(undefined8 *)(this + 0x1f8);
      uVar6 = *(undefined8 *)(this + 0x1d0);
      uVar5 = *(undefined8 *)(this + 0x1c8);
      uVar8 = *(undefined8 *)(this + 0x1e0);
      uVar7 = *(undefined8 *)(this + 0x1d8);
      *(undefined8 *)(__s + 0x1f0) = *(undefined8 *)(this + 0x1f0);
      *(undefined8 *)(__s + 0x1e8) = uVar2;
      *(undefined8 *)(__s + 0x200) = uVar4;
      *(undefined8 *)(__s + 0x1f8) = uVar3;
      *(undefined8 *)(__s + 0x1d0) = uVar6;
      *(undefined8 *)(__s + 0x1c8) = uVar5;
      *(undefined8 *)(__s + 0x1e0) = uVar8;
      *(undefined8 *)(__s + 0x1d8) = uVar7;
      return __s;
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x100);
  return empty_state_;
}

