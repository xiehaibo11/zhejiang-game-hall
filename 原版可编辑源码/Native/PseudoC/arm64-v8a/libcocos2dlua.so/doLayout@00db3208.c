
/* cocos2d::ui::LinearVerticalLayoutManager::doLayout(cocos2d::ui::LayoutProtocol*) */

void __thiscall
cocos2d::ui::LinearVerticalLayoutManager::doLayout
          (LinearVerticalLayoutManager *this,LayoutProtocol *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long **pplVar7;
  long lVar8;
  long *plVar9;
  LinearLayoutParameter *this_00;
  float *pfVar10;
  Margin *pMVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_e0 [12];
  float local_d4;
  float local_d0;
  float fStack_cc;
  Size aSStack_c8 [4];
  float local_c4;
  float local_c0;
  float fStack_bc;
  long *local_b8;
  long *local_b0;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  long local_98;
  
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00db3240 to 00eb324b has its CatchHandler @ 00db329c */
                    /* try { // try from 00db324c to 00eb32fb has its CatchHandler @ 00db3090 */
  (**(code **)(*(long *)param_1 + 0x18))(&local_a0,param_1);
  pplVar7 = (long **)(**(code **)(*(long *)param_1 + 0x20))(param_1);
  local_b8 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_a8 = 0;
  if (&local_b8 == pplVar7) {
    plVar9 = (long *)0x0;
    plVar3 = (long *)0x0;
    plVar4 = local_b0;
  }
  else {
    std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
    assign<cocos2d::Node**>
              ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)&local_b8,
               (Node **)*pplVar7,(Node **)pplVar7[1]);
    plVar4 = local_b0;
    plVar9 = local_b8;
    plVar3 = local_b8;
    if (local_b8 != local_b0) {
      do {
        Ref::retain((Ref *)*plVar9);
        plVar5 = local_b0;
                    /* catch() { ... } // from try @ 00db3240 with catch @ 00db329c */
        plVar9 = plVar9 + 1;
                    /* catch() { ... } // from try @ 00db3178 with catch @ 00db32a0 */
                    /* catch() { ... } // from try @ 00db3138 with catch @ 00db32a4 */
      } while (plVar4 != plVar9);
                    /* catch() { ... } // from try @ 00db3120 with catch @ 00db32a8 */
                    /* catch() { ... } // from try @ 00db30dc with catch @ 00db32ac */
      plVar9 = local_b0;
      plVar3 = local_b0;
      plVar4 = local_b0;
      if (local_b8 != local_b0) {
                    /* catch() { ... } // from try @ 00db31ec with catch @ 00db32bc */
                    /* catch() { ... } // from try @ 00db31e4 with catch @ 00db32d4 */
                    /* catch() { ... } // from try @ 00db31d4 with catch @ 00db32d8 */
        lVar8 = *local_b8;
        plVar2 = local_b8;
        fVar12 = local_9c;
        do {
                    /* try { // try from 00db3320 to 00eb332b has its CatchHandler @ 00db3384 */
                    /* try { // try from 00db332c to 00eb33bb has its CatchHandler @ 00db32fc */
          if ((((lVar8 != 0) &&
               (plVar9 = (long *)__dynamic_cast(lVar8,&Node::typeinfo,
                                                &LayoutParameterProtocol::typeinfo,
                                                0xfffffffffffffffe), plVar9 != (long *)0x0)) &&
              (lVar8 = (**(code **)(*plVar9 + 0x10))(), lVar8 != 0)) &&
             (this_00 = (LinearLayoutParameter *)
                        __dynamic_cast(lVar8,&LayoutParameter::typeinfo,
                                       &LinearLayoutParameter::typeinfo,0),
             this_00 != (LinearLayoutParameter *)0x0)) {
            iVar6 = LinearLayoutParameter::getGravity(this_00);
            pfVar10 = (float *)(**(code **)(*(long *)*plVar2 + 0x150))();
            fVar15 = *pfVar10;
            fVar13 = pfVar10[1];
            (**(code **)(*(long *)*plVar2 + 0x370))(&local_d0,(long *)*plVar2);
            Size::Size((Size *)&local_c0,aSStack_c8);
            fVar14 = fStack_bc;
                    /* catch() { ... } // from try @ 00db3320 with catch @ 00db3384 */
            if (iVar6 == 3) {
              fVar15 = 1.0 - fVar15;
              fVar16 = local_a0;
LAB_00db33ac:
              fVar16 = fVar16 - fVar15 * local_c0;
            }
            else {
              if (iVar6 == 6) {
                fVar15 = 0.5 - fVar15;
                fVar16 = local_a0 * 0.5;
                goto LAB_00db33ac;
              }
              fVar16 = fVar15 * local_c0;
            }
                    /* catch() { ... } // from try @ 00db33ec with catch @ 00db33bc */
            pMVar11 = (Margin *)LayoutParameter::getMargin((LayoutParameter *)this_00);
            Margin::Margin((Margin *)&local_d0,pMVar11);
                    /* try { // try from 00db33e0 to 00eb33eb has its CatchHandler @ 00db3444 */
                    /* try { // try from 00db33ec to 00eb347b has its CatchHandler @ 00db33bc */
            (**(code **)(*(long *)*plVar2 + 200))
                      (fVar16 + local_d0,(fVar12 - (1.0 - fVar13) * fVar14) - fStack_cc);
            lVar8 = (**(code **)(*(long *)*plVar2 + 0xb0))();
            fVar12 = *(float *)(lVar8 + 4);
            lVar8 = (**(code **)(*(long *)*plVar2 + 0x150))((long *)*plVar2);
            fVar14 = *(float *)(lVar8 + 4);
            (**(code **)(*(long *)*plVar2 + 0x370))(auStack_e0,(long *)*plVar2);
                    /* catch() { ... } // from try @ 00db33e0 with catch @ 00db3444 */
            fVar12 = (fVar12 - fVar14 * local_d4) - local_c4;
          }
          plVar2 = plVar2 + 1;
          plVar9 = local_b8;
          plVar3 = local_b8;
          plVar4 = local_b0;
          if (plVar5 == plVar2) break;
                    /* catch() { ... } // from try @ 00db332c with catch @ 00db32fc */
          lVar8 = *plVar2;
        } while( true );
      }
    }
  }
  for (; plVar5 = local_b0, plVar9 != local_b0; plVar9 = plVar9 + 1) {
    local_b0 = plVar4;
    Ref::release((Ref *)*plVar9);
    plVar3 = local_b8;
    plVar4 = local_b0;
    local_b0 = plVar5;
                    /* try { // try from 00db347c to 00eb3587 has its CatchHandler @ 00db347c
                       catch() { ... } // from try @ 00db347c with catch @ 00db347c
                       catch() { ... } // from try @ 00db3598 with catch @ 00db347c
                       catch() { ... } // from try @ 00db35cc with catch @ 00db347c
                       catch() { ... } // from try @ 00db3600 with catch @ 00db347c */
  }
  local_b0 = plVar3;
  if (plVar3 != (long *)0x0) {
    operator_delete(plVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

