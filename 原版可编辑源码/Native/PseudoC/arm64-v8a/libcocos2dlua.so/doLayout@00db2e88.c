
/* cocos2d::ui::LinearHorizontalLayoutManager::doLayout(cocos2d::ui::LayoutProtocol*) */

void __thiscall
cocos2d::ui::LinearHorizontalLayoutManager::doLayout
          (LinearHorizontalLayoutManager *this,LayoutProtocol *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  long *plVar6;
  int iVar7;
  long **pplVar8;
  long lVar9;
  Widget *this_00;
  LinearLayoutParameter *this_01;
  float *pfVar10;
  Margin *pMVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8 [2];
  float local_c0;
  float fStack_bc;
  long *local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [4];
  float local_9c;
  long local_98;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 00db2eb8 to 00eb2ebf has its CatchHandler @ 00db306c */
  local_98 = *(long *)(lVar2 + 0x28);
  (**(code **)(*(long *)param_1 + 0x18))(auStack_a0,param_1);
  pplVar8 = (long **)(**(code **)(*(long *)param_1 + 0x20))(param_1);
                    /* try { // try from 00db2eec to 00eb2ef3 has its CatchHandler @ 00db3048 */
  local_b8 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_a8 = 0;
  if (&local_b8 == pplVar8) {
    plVar12 = (long *)0x0;
    plVar3 = (long *)0x0;
    plVar4 = local_b0;
                    /* try { // try from 00db3090 to 00eb30db has its CatchHandler @ 00db3090
                       catch() { ... } // from try @ 00db3090 with catch @ 00db3090
                       catch() { ... } // from try @ 00db324c with catch @ 00db3090 */
  }
  else {
                    /* try { // try from 00db2f00 to 00eb2f27 has its CatchHandler @ 00db3070 */
    std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
    assign<cocos2d::Node**>
              ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)&local_b8,
               (Node **)*pplVar8,(Node **)pplVar8[1]);
    plVar4 = local_b0;
    plVar12 = local_b8;
    plVar3 = local_b8;
    if (local_b8 != local_b0) {
      do {
        Ref::retain((Ref *)*plVar12);
        plVar6 = local_b0;
        plVar12 = plVar12 + 1;
      } while (plVar4 != plVar12);
                    /* try { // try from 00db2f28 to 00eb308f has its CatchHandler @ 00db286c */
      plVar12 = local_b0;
      plVar3 = local_b0;
      plVar4 = local_b0;
      if (local_b8 != local_b0) {
        fVar13 = 0.0;
        lVar9 = *local_b8;
        plVar1 = local_b8;
        while( true ) {
                    /* catch() { ... } // from try @ 00db2aec with catch @ 00db2fc0 */
          if ((((lVar9 != 0) &&
               (this_00 = (Widget *)__dynamic_cast(lVar9,&Node::typeinfo,&Widget::typeinfo,0),
               this_00 != (Widget *)0x0)) &&
              (lVar9 = (**(code **)(*(long *)this_00 + 0x5f8))(), lVar9 != 0)) &&
             (this_01 = (LinearLayoutParameter *)
                        __dynamic_cast(lVar9,&LayoutParameter::typeinfo,
                                       &LinearLayoutParameter::typeinfo,0),
             this_01 != (LinearLayoutParameter *)0x0)) {
            iVar7 = LinearLayoutParameter::getGravity(this_01);
                    /* catch() { ... } // from try @ 00db2ae0 with catch @ 00db2fe0 */
            pfVar10 = (float *)(**(code **)(*(long *)this_00 + 0x150))(this_00);
                    /* catch() { ... } // from try @ 00db2c28 with catch @ 00db2fe4 */
            fVar14 = *pfVar10;
            fVar15 = pfVar10[1];
            (**(code **)(*(long *)this_00 + 0x370))(&local_d0,this_00);
                    /* catch() { ... } // from try @ 00db2c10 with catch @ 00db2ffc */
                    /* catch() { ... } // from try @ 00db2b9c with catch @ 00db3000 */
                    /* catch() { ... } // from try @ 00db2b94 with catch @ 00db3004 */
            Size::Size((Size *)&local_c0,(Size *)local_c8);
            fVar5 = local_c0;
                    /* catch() { ... } // from try @ 00db2d94 with catch @ 00db3008 */
                    /* catch() { ... } // from try @ 00db2bd8 with catch @ 00db300c */
                    /* catch() { ... } // from try @ 00db2a6c with catch @ 00db3010 */
            if (iVar7 == 4) {
              fVar16 = fVar15 * fStack_bc;
            }
            else {
                    /* catch() { ... } // from try @ 00db2d0c with catch @ 00db3014 */
                    /* catch() { ... } // from try @ 00db29dc with catch @ 00db3018 */
                    /* catch() { ... } // from try @ 00db29f0 with catch @ 00db301c */
              if (iVar7 == 5) {
                    /* catch() { ... } // from try @ 00db29e4 with catch @ 00db3020 */
                    /* catch() { ... } // from try @ 00db29a8 with catch @ 00db3024 */
                fVar15 = 0.5 - fVar15;
                fVar16 = local_9c * 0.5;
                    /* catch() { ... } // from try @ 00db2bf8 with catch @ 00db3028
                       catch() { ... } // from try @ 00db2c54 with catch @ 00db3028 */
              }
              else {
                fVar15 = 1.0 - fVar15;
                fVar16 = local_9c;
              }
              fVar16 = fVar16 - fVar15 * fStack_bc;
            }
            pMVar11 = (Margin *)LayoutParameter::getMargin((LayoutParameter *)this_01);
                    /* catch() { ... } // from try @ 00db2eec with catch @ 00db3048 */
                    /* catch() { ... } // from try @ 00db2a04 with catch @ 00db304c
                       catch() { ... } // from try @ 00db2aac with catch @ 00db304c */
            Margin::Margin((Margin *)&local_d0,pMVar11);
            local_d8 = fVar13 + fVar14 * fVar5 + local_d0;
            fStack_d4 = fVar16 - fStack_cc;
                    /* catch() { ... } // from try @ 00db2eb8 with catch @ 00db306c */
                    /* catch() { ... } // from try @ 00db2f00 with catch @ 00db3070 */
                    /* catch() { ... } // from try @ 00db2e54 with catch @ 00db3074 */
            (**(code **)(*(long *)this_00 + 0x98))(this_00,&local_d8);
            fVar13 = (float)Widget::getRightBoundary(this_00);
            fVar13 = fVar13 + local_c8[0];
          }
          plVar1 = plVar1 + 1;
                    /* catch() { ... } // from try @ 00db2af8 with catch @ 00db2f78 */
          plVar12 = local_b8;
          plVar3 = local_b8;
          plVar4 = local_b0;
          if (plVar6 == plVar1) break;
          lVar9 = *plVar1;
        }
      }
    }
  }
  for (; plVar6 = local_b0, plVar12 != local_b0; plVar12 = plVar12 + 1) {
    local_b0 = plVar4;
    Ref::release((Ref *)*plVar12);
    plVar3 = local_b8;
    plVar4 = local_b0;
    local_b0 = plVar6;
  }
  local_b0 = plVar3;
  if (plVar3 != (long *)0x0) {
    operator_delete(plVar3);
  }
                    /* try { // try from 00db30dc to 00eb311f has its CatchHandler @ 00db32ac */
  if (*(long *)(lVar2 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

