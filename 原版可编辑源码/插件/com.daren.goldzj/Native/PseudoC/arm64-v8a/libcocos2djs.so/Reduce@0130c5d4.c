
/* v8::internal::compiler::ValueNumberingReducer::Reduce(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::ValueNumberingReducer::Reduce(ValueNumberingReducer *this,Node *param_1)

{
  ulong uVar1;
  ulong uVar2;
  void *__s;
  long lVar3;
  Zone *this_00;
  Node *pNVar4;
  long *plVar5;
  uint uVar6;
  Node *pNVar7;
  ulong uVar8;
  ulong uVar9;
  long local_58;
  long local_38;
  
  if ((*(byte *)(*(long *)param_1 + 0x12) >> 2 & 1) != 0) {
    uVar1 = NodeProperties::HashCode(param_1);
    lVar3 = *(long *)(this + 8);
    if (lVar3 == 0) {
      this_00 = *(Zone **)(this + 0x20);
      *(undefined8 *)(this + 0x10) = 0x100;
      __s = *(void **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)__s) < 0x800) {
        __s = (void *)Zone::NewExpand(this_00,0x800);
      }
      else {
        *(long *)(this_00 + 0x10) = (long)__s + 0x800;
      }
      *(void **)(this + 8) = __s;
      memset(__s,0,0x800);
      *(Node **)(*(long *)(this + 8) + (uVar1 & 0xff) * 8) = param_1;
      *(undefined8 *)(this + 0x18) = 1;
      return (Node *)0x0;
    }
    uVar8 = *(ulong *)(this + 0x10) - 1;
    uVar1 = uVar1 & uVar8;
    plVar5 = (long *)(lVar3 + uVar1 * 8);
    pNVar7 = (Node *)*plVar5;
    uVar9 = *(ulong *)(this + 0x10);
    if (pNVar7 != (Node *)0x0) {
      do {
        if (pNVar7 == param_1) {
          uVar9 = uVar1 + 1 & uVar8;
          plVar5 = (long *)(lVar3 + uVar9 * 8);
          pNVar7 = (Node *)*plVar5;
          if (pNVar7 == (Node *)0x0) {
            return (Node *)0x0;
          }
          goto LAB_0130c738;
        }
        uVar6 = (byte)pNVar7[0x17] & 0xf;
        pNVar4 = pNVar7 + 0x20;
        if (uVar6 == 0xf) {
          uVar6 = *(uint *)(*(long *)pNVar4 + 8);
          pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
        }
        if (((int)uVar6 < 1) || (uVar2 = uVar1, *(long *)pNVar4 != 0)) {
          uVar2 = NodeProperties::Equals(pNVar7,param_1);
          if ((uVar2 & 1) != 0) {
            local_38 = *(long *)(pNVar7 + 8);
            if (local_38 == 0) {
              return pNVar7;
            }
            lVar3 = *(long *)(param_1 + 8);
            if (lVar3 == 0) {
              return pNVar7;
            }
            if (local_38 == lVar3) {
              return pNVar7;
            }
            local_58 = lVar3;
            uVar1 = Type::SlowIs((Type *)&local_38,lVar3);
            if ((uVar1 & 1) == 0) {
              if ((lVar3 != local_38) &&
                 (uVar1 = Type::SlowIs((Type *)&local_58), lVar3 = local_58, (uVar1 & 1) == 0)) {
                return (Node *)0x0;
              }
              *(long *)(pNVar7 + 8) = lVar3;
              return pNVar7;
            }
            return pNVar7;
          }
          lVar3 = *(long *)(this + 8);
          uVar2 = uVar9;
        }
        uVar1 = uVar1 + 1 & uVar8;
        pNVar7 = *(Node **)(lVar3 + uVar1 * 8);
        uVar9 = uVar2;
      } while (pNVar7 != (Node *)0x0);
      if (uVar2 != *(ulong *)(this + 0x10)) {
        *(Node **)(lVar3 + uVar2 * 8) = param_1;
        return (Node *)0x0;
      }
      plVar5 = (long *)(lVar3 + uVar1 * 8);
    }
    *plVar5 = (long)param_1;
    uVar1 = *(long *)(this + 0x18) + 1;
    *(ulong *)(this + 0x18) = uVar1;
    if (*(ulong *)(this + 0x10) <= uVar1 + (uVar1 >> 2)) {
      Grow(this);
      return (Node *)0x0;
    }
  }
  return (Node *)0x0;
LAB_0130c738:
  uVar6 = (byte)pNVar7[0x17] & 0xf;
  pNVar4 = pNVar7 + 0x20;
  if (uVar6 == 0xf) {
    uVar6 = *(uint *)(*(long *)pNVar4 + 8);
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  if (((int)uVar6 < 1) || (*(long *)pNVar4 != 0)) {
    if (pNVar7 == param_1) {
      if (*(long *)(lVar3 + (uVar9 + 1 & uVar8) * 8) == 0) {
        *plVar5 = 0;
        lVar3 = *(long *)(this + 0x18);
        pNVar7 = (Node *)0x0;
        goto LAB_0130c8b0;
      }
    }
    else {
      uVar2 = NodeProperties::Equals(pNVar7,param_1);
      if ((uVar2 & 1) != 0) {
        local_38 = *(long *)(pNVar7 + 8);
        if ((((local_38 != 0) && (lVar3 = *(long *)(param_1 + 8), lVar3 != 0)) &&
            (local_38 != lVar3)) &&
           (local_58 = lVar3, uVar2 = Type::SlowIs((Type *)&local_38,lVar3), (uVar2 & 1) == 0)) {
          if ((lVar3 != local_38) &&
             (uVar2 = Type::SlowIs((Type *)&local_58), lVar3 = local_58, (uVar2 & 1) == 0)) {
            return (Node *)0x0;
          }
          *(long *)(pNVar7 + 8) = lVar3;
        }
        *(Node **)(*(long *)(this + 8) + uVar1 * 8) = pNVar7;
        if (*(long *)(*(long *)(this + 8) + (uVar9 + 1 & uVar8) * 8) != 0) {
          return pNVar7;
        }
        *(undefined8 *)(*(long *)(this + 8) + uVar9 * 8) = 0;
        lVar3 = *(long *)(this + 0x18);
LAB_0130c8b0:
        *(long *)(this + 0x18) = lVar3 + -1;
        return pNVar7;
      }
      lVar3 = *(long *)(this + 8);
    }
  }
  uVar9 = uVar9 + 1 & uVar8;
  plVar5 = (long *)(lVar3 + uVar9 * 8);
  pNVar7 = (Node *)*plVar5;
  if (pNVar7 == (Node *)0x0) {
    return (Node *)0x0;
  }
  goto LAB_0130c738;
}

