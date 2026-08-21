
/* v8::internal::TransitionsAccessor::TraverseTransitionTreeInternal(void (*)(v8::internal::Map,
   void*), void*, v8::internal::PerThreadAssertScopeDebugOnly<(v8::internal::PerThreadAssertType)0,
   false>*) */

void __thiscall
v8::internal::TransitionsAccessor::TraverseTransitionTreeInternal
          (TransitionsAccessor *this,_func_void_Map_void_ptr *param_1,void *param_2,
          PerThreadAssertScopeDebugOnly *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long local_90 [3];
  ulong local_78;
  int local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x20) != 4) {
    if (*(int *)(this + 0x20) == 3) {
      local_90[0] = *(long *)this;
      local_90[2] = *(ulong *)(this + 0x18) & 0xfffffffffffffffd;
      local_90[1] = 0;
      local_78 = (ulong)*(uint *)(local_90[2] + 0x23) + local_90[0];
      if (((local_78 & 1) == 0) || ((int)local_78 == 3)) {
        local_70 = 1;
      }
      else if ((local_78 & 3) == 1) {
        uVar6 = local_78 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar6 + *(uint *)(local_78 - 1)) == 0x98) {
          local_70 = 4;
        }
        else if (*(short *)(uVar6 + *(uint *)(local_78 - 1)) == 100) {
          local_70 = 0;
        }
        else {
          local_70 = 2;
        }
      }
      else {
        if ((local_78 & 3) != 3) {
LAB_0113e170:
          local_90[1] = 0;
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        local_70 = 3;
      }
      TraverseTransitionTreeInternal((TransitionsAccessor *)local_90,param_1,param_2,param_3);
    }
LAB_0113e0f4:
    (*param_1)(SUB81(*(undefined8 *)(this + 0x10),0),param_2);
    if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  uVar6 = *(ulong *)(this + 0x18);
  if (*(int *)(uVar6 + 7) != 0) {
    uVar4 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 7);
    if ((1 < *(uint *)(uVar4 + 3)) && (1 < *(int *)(uVar4 + 7))) {
      uVar8 = (ulong)(uint)(*(int *)(uVar4 + 7) >> 1);
      iVar9 = 4;
      do {
        uVar1 = *(uint *)(uVar4 + 7 + (long)iVar9);
        if ((uVar1 != 3) && (((ulong)uVar1 & 3) == 3)) {
          local_90[0] = *(long *)this;
          local_90[2] = (ulong)uVar1 & 0xfffffffffffffffd | uVar6 & 0xffffffff00000000;
          local_90[1] = 0;
          local_78 = (ulong)*(uint *)(local_90[2] + 0x23) + local_90[0];
          iVar3 = 1;
          if (((local_78 & 1) != 0) && ((int)local_78 != 3)) {
            uVar5 = local_78 & 3;
            iVar3 = (int)uVar5;
            if (uVar5 != 3) {
              if (uVar5 != 1) goto LAB_0113e170;
              uVar5 = local_78 & 0xffffffff00000000 | 7;
              if (*(short *)(uVar5 + *(uint *)(local_78 - 1)) == 0x98) {
                iVar3 = 4;
              }
              else {
                iVar3 = (uint)(*(short *)(uVar5 + *(uint *)(local_78 - 1)) != 100) << 1;
              }
            }
          }
          local_70 = iVar3;
          TraverseTransitionTreeInternal((TransitionsAccessor *)local_90,param_1,param_2,param_3);
        }
        uVar8 = uVar8 - 1;
        iVar9 = iVar9 + 4;
      } while (uVar8 != 0);
    }
  }
  lVar7 = 0;
  iVar9 = 0xc;
  do {
    uVar6 = *(ulong *)(this + 0x18);
    if (*(int *)(uVar6 + 3) < 4) {
      if (-1 < lVar7) goto LAB_0113e0f4;
    }
    else if (*(int *)(uVar6 + 0xb) >> 1 <= lVar7) goto LAB_0113e0f4;
    local_90[0] = *(long *)this;
    local_90[1] = 0;
    local_90[2] = uVar6 & 0xffffffff00000000 |
                  (ulong)*(uint *)(uVar6 + (long)iVar9 + 7) & 0xfffffffd;
    local_78 = (ulong)*(uint *)(local_90[2] + 0x23) + local_90[0];
    iVar3 = 1;
    if (((local_78 & 1) != 0) && ((int)local_78 != 3)) {
      uVar6 = local_78 & 3;
      iVar3 = (int)uVar6;
      if (uVar6 != 3) {
        if (uVar6 != 1) goto LAB_0113e170;
        uVar6 = local_78 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar6 + *(uint *)(local_78 - 1)) == 0x98) {
          iVar3 = 4;
        }
        else {
          iVar3 = (uint)(*(short *)(uVar6 + *(uint *)(local_78 - 1)) != 100) << 1;
        }
      }
    }
    local_70 = iVar3;
    TraverseTransitionTreeInternal((TransitionsAccessor *)local_90,param_1,param_2,param_3);
    lVar7 = lVar7 + 1;
    iVar9 = iVar9 + 8;
  } while( true );
}

