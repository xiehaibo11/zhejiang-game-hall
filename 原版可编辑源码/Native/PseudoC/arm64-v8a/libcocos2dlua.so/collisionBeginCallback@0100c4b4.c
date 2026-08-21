
/* cocos2d::PhysicsWorld::collisionBeginCallback(cocos2d::PhysicsContact&) */

bool __thiscall
cocos2d::PhysicsWorld::collisionBeginCallback(PhysicsWorld *this,PhysicsContact *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  PhysicsContact PVar5;
  long lVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  PhysicsWorld *pPVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *local_70;
  long *local_68;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  lVar1 = *(long *)(param_1 + 0x60);
  lVar2 = *(long *)(param_1 + 0x68);
  lVar12 = *(long *)(lVar1 + 0x28);
  lVar13 = *(long *)(lVar2 + 0x28);
  std::__ndk1::vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>::vector
            ((vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>> *)
             &local_70,(vector *)(lVar12 + 0x50));
  if (local_70 != local_68) {
    plVar8 = local_70;
    do {
      lVar9 = *plVar8;
      for (pPVar10 = *(PhysicsWorld **)(this + 0x58);
          (this + 0x50 != pPVar10 && (*(long *)(pPVar10 + 0x10) != lVar9));
          pPVar10 = *(PhysicsWorld **)(pPVar10 + 8)) {
      }
      if ((this + 0x50 != pPVar10) && (*(char *)(lVar9 + 0x59) == '\0')) {
        lVar11 = *(long *)(lVar9 + 0x38);
        if (lVar11 == lVar12) {
          lVar11 = *(long *)(lVar9 + 0x40);
        }
        if (lVar11 == lVar13) {
          bVar7 = false;
          param_1[0x74] = (PhysicsContact)0x0;
          goto joined_r0x0100c690;
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != local_68);
  }
  uVar3 = *(uint *)(lVar1 + 0x7c);
  if (((*(uint *)(lVar2 + 0x84) & uVar3) == 0) ||
     ((*(uint *)(lVar2 + 0x7c) & *(uint *)(lVar1 + 0x84)) == 0)) {
    param_1[0x74] = (PhysicsContact)0x0;
    iVar4 = *(int *)(lVar1 + 0x88);
  }
  else {
    iVar4 = *(int *)(lVar1 + 0x88);
  }
  if ((iVar4 == 0) || (iVar4 != *(int *)(lVar2 + 0x88))) {
    if (((*(uint *)(lVar2 + 0x80) & uVar3) == 0) ||
       ((*(uint *)(lVar1 + 0x80) & *(uint *)(lVar2 + 0x7c)) == 0)) {
      bVar7 = false;
      PVar5 = param_1[0x74];
    }
    else {
      bVar7 = true;
      PVar5 = param_1[0x74];
    }
  }
  else {
                    /* try { // try from 0100c5bc to 0110c643 has its CatchHandler @ 0100c5bc
                       catch() { ... } // from try @ 0100c5bc with catch @ 0100c5bc
                       catch() { ... } // from try @ 0100c694 with catch @ 0100c5bc
                       catch() { ... } // from try @ 0100c794 with catch @ 0100c5bc */
    bVar7 = 0 < iVar4;
    PVar5 = param_1[0x74];
  }
  if (PVar5 != (PhysicsContact)0x0) {
    *(undefined4 *)(param_1 + 0x70) = 1;
    *(PhysicsWorld **)(param_1 + 0x58) = this;
    EventDispatcher::dispatchEvent(*(EventDispatcher **)(this + 0x88),(Event *)param_1);
  }
  if (bVar7) {
    PVar5 = param_1[0x75];
    param_1[0x75] = (PhysicsContact)0x1;
    bVar7 = PVar5 != (PhysicsContact)0x0;
  }
  else {
    bVar7 = false;
                    /* try { // try from 0100c644 to 0110c693 has its CatchHandler @ 0100c7dc */
  }
joined_r0x0100c690:
  if (local_70 != (long *)0x0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

