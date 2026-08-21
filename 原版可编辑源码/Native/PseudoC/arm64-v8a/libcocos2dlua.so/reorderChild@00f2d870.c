
/* cocos2d::ParticleBatchNode::reorderChild(cocos2d::Node*, int) */

void __thiscall
cocos2d::ParticleBatchNode::reorderChild(ParticleBatchNode *this,Node *param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  size_t __n;
  long lVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  TextureAtlas *this_00;
  Node *pNVar13;
  ulong uVar14;
  ulong uVar15;
  int local_74;
  Ref *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00f2d8b4 to 0102d8c3 has its CatchHandler @ 00f2d90c */
  iVar6 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
  if (iVar6 != param_2) {
    lVar10 = *(long *)(this + 0x178);
                    /* try { // try from 00f2d8c8 to 0102d8cf has its CatchHandler @ 00f2d908 */
    if (lVar10 != *(long *)(this + 0x180)) {
      uVar11 = *(long *)(this + 0x180) - lVar10;
                    /* try { // try from 00f2d8d0 to 0102d91f has its CatchHandler @ 00f2d7d4 */
      if ((long)uVar11 < 1) {
        local_74 = 0;
        iVar6 = 0;
        iVar7 = (int)(uVar11 >> 3);
      }
      else {
        iVar6 = 0;
        uVar14 = 0;
        uVar15 = 0;
        bVar5 = false;
        bVar4 = false;
        local_74 = 0;
        while( true ) {
          pNVar13 = *(Node **)(lVar10 + uVar15 * 8);
                    /* catch() { ... } // from try @ 00f2d8c8 with catch @ 00f2d908 */
                    /* catch() { ... } // from try @ 00f2d8b4 with catch @ 00f2d90c */
          iVar7 = (**(code **)(*(long *)pNVar13 + 0x30))(pNVar13);
          iVar8 = (int)uVar15;
          if ((!bVar4) && (param_2 < iVar7)) {
            iVar7 = iVar8;
            if (bVar5) goto LAB_00f2d998;
            bVar4 = true;
            uVar14 = uVar15 & 0xffffffff;
          }
          iVar7 = (int)uVar14;
          if (pNVar13 == param_1) {
            iVar6 = iVar8;
            if (bVar4) goto LAB_00f2d998;
            bVar5 = true;
            local_74 = -1;
          }
          uVar15 = uVar15 + 1;
          if ((long)uVar11 >> 3 <= (long)uVar15) break;
          lVar10 = *(long *)(this + 0x178);
        }
        if (!bVar4) {
          iVar7 = (int)(uVar11 >> 3);
        }
      }
LAB_00f2d998:
      if (iVar6 != local_74 + iVar7) {
        Ref::retain((Ref *)param_1);
        puVar1 = (undefined8 *)(*(long *)(this + 0x178) + (long)iVar6 * 8);
        Ref::release((Ref *)*puVar1);
        __n = *(long *)(this + 0x180) - (long)(puVar1 + 1);
        if (__n != 0) {
          memmove(puVar1,puVar1 + 1,__n);
        }
        *(undefined8 **)(this + 0x180) = puVar1 + ((long)__n >> 3);
        local_70 = (Ref *)param_1;
        std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::insert
                  ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(this + 0x178),
                   *(long *)(this + 0x178) + (long)(local_74 + iVar7) * 8,&local_70);
        Ref::retain(local_70);
        Ref::release((Ref *)param_1);
        plVar2 = *(long **)(this + 0x180);
        iVar6 = *(int *)(param_1 + 0x468);
        if (*(long **)(this + 0x178) == plVar2) {
LAB_00f2da60:
          lVar10 = 0;
        }
        else {
          iVar7 = 0;
          plVar9 = *(long **)(this + 0x178);
          do {
            plVar12 = plVar9 + 1;
            plVar9 = (long *)*plVar9;
            *(int *)(plVar9 + 0x8d) = iVar7;
            iVar8 = (**(code **)(*plVar9 + 0x660))();
            iVar7 = iVar8 + iVar7;
            plVar9 = plVar12;
          } while (plVar2 != plVar12);
          puVar1 = *(undefined8 **)(this + 0x178);
          do {
            if (puVar1 == *(undefined8 **)(this + 0x180)) goto LAB_00f2da60;
            pNVar13 = (Node *)*puVar1;
            puVar1 = puVar1 + 1;
          } while (pNVar13 != param_1);
          lVar10 = (long)*(int *)(param_1 + 0x468);
        }
        this_00 = *(TextureAtlas **)(this + 0x300);
        iVar7 = (**(code **)(*(long *)param_1 + 0x660))(param_1);
        TextureAtlas::moveQuadsFromIndex(this_00,(long)iVar6,(long)iVar7,lVar10);
        (**(code **)(*(long *)param_1 + 0x540))(param_1);
      }
    }
    (**(code **)(*(long *)param_1 + 0x18))(param_1,param_2);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

