
/* v8::internal::compiler::LoadElimination::AbstractElements::Kill(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::Zone*) const */

AbstractElements * __thiscall
v8::internal::compiler::LoadElimination::AbstractElements::Kill
          (AbstractElements *this,Node *param_1,Node *param_2,Zone *param_3)

{
  AbstractElements *pAVar1;
  AbstractElements *pAVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  AbstractElements *pAVar7;
  undefined8 local_78;
  long local_70;
  long lStack_68;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (((((((*(long *)this != 0) && (uVar6 = FUN_0176c280(param_1,*(long *)this), (uVar6 & 1) != 0))
         || ((*(long *)(this + 0x20) != 0 && (uVar6 = FUN_0176c280(param_1), (uVar6 & 1) != 0)))) ||
        ((*(long *)(this + 0x40) != 0 && (uVar6 = FUN_0176c280(param_1), (uVar6 & 1) != 0)))) ||
       ((*(long *)(this + 0x60) != 0 && (uVar6 = FUN_0176c280(param_1), (uVar6 & 1) != 0)))) ||
      ((((*(long *)(this + 0x80) != 0 && (uVar6 = FUN_0176c280(param_1), (uVar6 & 1) != 0)) ||
        ((*(long *)(this + 0xa0) != 0 && (uVar6 = FUN_0176c280(param_1), (uVar6 & 1) != 0)))) ||
       ((*(long *)(this + 0xc0) != 0 && (uVar6 = FUN_0176c280(param_1), (uVar6 & 1) != 0)))))) ||
     ((pAVar7 = this, *(long *)(this + 0xe0) != 0 &&
      (uVar6 = FUN_0176c280(param_1), (uVar6 & 1) != 0)))) {
    pAVar7 = *(AbstractElements **)(param_3 + 0x10);
    if ((ulong)(*(long *)(param_3 + 0x18) - (long)pAVar7) < 0x108) {
      pAVar7 = (AbstractElements *)Zone::NewExpand(param_3,0x108);
    }
    else {
      *(AbstractElements **)(param_3 + 0x10) = pAVar7 + 0x108;
    }
    pAVar1 = this + 0x100;
    *(undefined8 *)(pAVar7 + 0x100) = 0;
    *(undefined8 *)(pAVar7 + 8) = 0;
    *(undefined8 *)(pAVar7 + 0x10) = 0;
    *(undefined8 *)pAVar7 = 0;
    pAVar7[0x18] = (AbstractElements)0x0;
    *(undefined8 *)(pAVar7 + 0x28) = 0;
    *(undefined8 *)(pAVar7 + 0x30) = 0;
    *(undefined8 *)(pAVar7 + 0x20) = 0;
    pAVar7[0x38] = (AbstractElements)0x0;
    *(undefined8 *)(pAVar7 + 0x48) = 0;
    *(undefined8 *)(pAVar7 + 0x50) = 0;
    *(undefined8 *)(pAVar7 + 0x40) = 0;
    pAVar7[0x58] = (AbstractElements)0x0;
    *(undefined8 *)(pAVar7 + 0x68) = 0;
    *(undefined8 *)(pAVar7 + 0x70) = 0;
    *(undefined8 *)(pAVar7 + 0x60) = 0;
    pAVar7[0x78] = (AbstractElements)0x0;
    *(undefined8 *)(pAVar7 + 0x80) = 0;
    *(undefined8 *)(pAVar7 + 0x88) = 0;
    pAVar7[0x98] = (AbstractElements)0x0;
    *(undefined8 *)(pAVar7 + 0x90) = 0;
    *(undefined8 *)(pAVar7 + 0xa0) = 0;
    *(undefined8 *)(pAVar7 + 0xa8) = 0;
    pAVar7[0xb8] = (AbstractElements)0x0;
    *(undefined8 *)(pAVar7 + 0xb0) = 0;
    *(undefined8 *)(pAVar7 + 200) = 0;
    *(undefined8 *)(pAVar7 + 0xd0) = 0;
    *(undefined8 *)(pAVar7 + 0xc0) = 0;
    pAVar7[0xd8] = (AbstractElements)0x0;
    *(undefined8 *)(pAVar7 + 0xe8) = 0;
    *(undefined8 *)(pAVar7 + 0xf0) = 0;
    *(undefined8 *)(pAVar7 + 0xe0) = 0;
    pAVar7[0xf8] = (AbstractElements)0x0;
    do {
      lStack_68 = *(long *)(this + 0x18);
      local_70 = *(long *)(this + 0x10);
      lVar3 = *(long *)this;
      lVar4 = *(long *)(this + 8);
      if (lVar3 != 0) {
        uVar6 = FUN_0176c280(param_1,lVar3);
        if ((uVar6 & 1) != 0) {
          local_78 = *(undefined8 *)(param_2 + 8);
          uVar6 = Type::Maybe((Type *)&local_78,*(undefined8 *)(lVar4 + 8));
          if ((uVar6 & 1) != 0) goto LAB_0176c1e0;
        }
        pAVar2 = pAVar7 + *(long *)(pAVar7 + 0x100) * 0x20;
        *(long *)(pAVar7 + 0x100) = *(long *)(pAVar7 + 0x100) + 1;
        *(long *)pAVar2 = lVar3;
        *(long *)(pAVar2 + 8) = lVar4;
        pAVar2[0x18] = lStack_68._0_1_;
        *(long *)(pAVar2 + 0x10) = local_70;
      }
LAB_0176c1e0:
      this = this + 0x20;
    } while (this != pAVar1);
    *(ulong *)(pAVar7 + 0x100) = *(ulong *)(pAVar7 + 0x100) & 7;
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pAVar7;
}

