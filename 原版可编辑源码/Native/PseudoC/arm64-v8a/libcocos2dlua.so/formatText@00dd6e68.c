
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::ui::RichText::formatText() */

void __thiscall cocos2d::ui::RichText::formatText(RichText *this)

{
  uint uVar1;
  RichText RVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  ulong uVar7;
  Size *pSVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  Label *this_00;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  Size aSStack_f0 [8];
  undefined8 local_e8;
  undefined **local_e0;
  code *local_d8;
  undefined8 uStack_d0;
  RichText *local_c8;
  undefined ***local_c0;
  undefined **local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  RichText *local_98;
  undefined ***local_90;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  if (this[0x4f0] != (RichText)0x0) {
    (**(code **)(*(long *)this + 0x560))();
    puVar18 = *(undefined8 **)(this + 0x510);
    puVar14 = *(undefined8 **)(this + 0x518);
    while (puVar4 = puVar14, puVar4 != puVar18) {
      puVar14 = puVar4 + -3;
      puVar17 = (undefined8 *)*puVar14;
      puVar19 = (undefined8 *)puVar4[-2];
      if (puVar17 != puVar19) {
        do {
          Ref::release((Ref *)*puVar17);
          puVar17 = puVar17 + 1;
                    /* try { // try from 00dd6ef0 to 00ed6f7b has its CatchHandler @ 00dd72bc */
        } while (puVar19 != puVar17);
        puVar17 = (undefined8 *)*puVar14;
      }
      puVar4[-2] = puVar17;
      if (puVar17 != (undefined8 *)0x0) {
        puVar4[-2] = puVar17;
        operator_delete(puVar17);
      }
    }
    RVar2 = this[0x387];
    *(undefined8 **)(this + 0x518) = puVar18;
    *(undefined8 *)(this + 0x530) = *(undefined8 *)(this + 0x528);
    addNewLine(this);
    lVar10 = *(long *)(this + 0x4f8);
    lVar12 = *(long *)(this + 0x500) - lVar10;
    if (RVar2 == (RichText)0x0) {
      if (0 < lVar12) {
        lVar20 = 0;
        while( true ) {
          lVar10 = *(long *)(lVar10 + lVar20 * 8);
          switch(*(undefined4 *)(lVar10 + 0x24)) {
          case 0:
            handleTextRenderer(this,(basic_string *)(lVar10 + 0x30),(basic_string *)(lVar10 + 0x48),
                               *(float *)(lVar10 + 0x60),(Color3B *)(lVar10 + 0x2c),
                               *(uchar *)(lVar10 + 0x2f),*(uint *)(lVar10 + 100),
                               (basic_string *)(lVar10 + 0x68),(Color3B *)(lVar10 + 0x80),
                               *(int *)(lVar10 + 0x84),(Color3B *)(lVar10 + 0x88),
                               (Size *)(lVar10 + 0x8c),*(int *)(lVar10 + 0x94),
                               (Color3B *)(lVar10 + 0x98));
            break;
          case 1:
            handleImageRenderer(this,lVar10 + 0x30,*(undefined4 *)(lVar10 + 0x58));
            break;
          case 2:
            handleCustomRenderer(this,*(Node **)(lVar10 + 0x30));
            break;
          case 3:
            addNewLine(this);
          }
          lVar20 = lVar20 + 1;
          if (lVar12 >> 3 <= lVar20) break;
          lVar10 = *(long *)(this + 0x4f8);
        }
      }
    }
    else if (0 < lVar12) {
      lVar20 = 0;
                    /* try { // try from 00dd6f7c to 00ed6f9f has its CatchHandler @ 00dd6c4c */
      do {
        lVar10 = *(long *)(lVar10 + lVar20 * 8);
                    /* try { // try from 00dd6fa0 to 00ed6fa7 has its CatchHandler @ 00dd7260 */
        switch(*(undefined4 *)(lVar10 + 0x24)) {
        case 0:
          plVar16 = (long *)FileUtils::getInstance();
          lVar13 = lVar10 + 0x48;
          uVar7 = (**(code **)(*plVar16 + 0x128))(plVar16,lVar13);
          if ((uVar7 & 1) == 0) {
                    /* try { // try from 00dd7028 to 00ed7037 has its CatchHandler @ 00dd7328 */
            this_00 = (Label *)Label::createWithSystemFont
                                         (*(undefined4 *)(lVar10 + 0x60),lVar10 + 0x30,lVar13,
                                          &Size::ZERO,0,0);
          }
          else {
            this_00 = (Label *)Label::createWithTTF(lVar10 + 0x30,lVar13,&Size::ZERO,0,0);
          }
          uVar1 = *(uint *)(lVar10 + 100);
          if ((uVar1 & 1) != 0) {
            Label::enableItalics(this_00);
            uVar1 = *(uint *)(lVar10 + 100);
          }
          if ((uVar1 >> 1 & 1) != 0) {
            Label::enableBold(this_00);
            uVar1 = *(uint *)(lVar10 + 100);
          }
          if ((uVar1 >> 2 & 1) != 0) {
            Label::enableUnderline(this_00);
            uVar1 = *(uint *)(lVar10 + 100);
          }
          if ((uVar1 >> 3 & 1) != 0) {
            Label::enableStrikethrough(this_00);
            uVar1 = *(uint *)(lVar10 + 100);
          }
          if ((uVar1 >> 4 & 1) != 0) {
            local_b0 = &PTR_FUN_016e2cb8;
            local_90 = &local_b0;
            uStack_a0 = 0;
            local_a8 = openUrl;
            local_98 = this;
            uVar9 = ListenerComponent::create(this_00,lVar10 + 0x68,&local_b0);
            (**(code **)(*(long *)this_00 + 0x460))(this_00,uVar9);
                    /* try { // try from 00dd70e4 to 00ed70ef has its CatchHandler @ 00dd7248 */
            if (&local_b0 == local_90) {
              pcVar11 = (code *)(*local_90)[4];
            }
            else {
              if (local_90 == (undefined ***)0x0) goto LAB_00dd7270;
              pcVar11 = (code *)(*local_90)[5];
            }
            (*pcVar11)();
          }
LAB_00dd7270:
          uVar1 = *(uint *)(lVar10 + 100);
          if ((uVar1 >> 5 & 1) != 0) {
                    /* catch() { ... } // from try @ 00dd7008 with catch @ 00dd7324 */
                    /* catch() { ... } // from try @ 00dd7028 with catch @ 00dd7328 */
            Color4B::Color4B((Color4B *)&local_e8,(Color3B *)(lVar10 + 0x80),0xff);
            (**(code **)(*(long *)this_00 + 0x5a8))
                      (this_00,&local_e8,*(undefined4 *)(lVar10 + 0x84));
            uVar1 = *(uint *)(lVar10 + 100);
          }
          if ((uVar1 >> 6 & 1) != 0) {
            Color4B::Color4B((Color4B *)&local_e8,(Color3B *)(lVar10 + 0x88),0xff);
            (**(code **)(*(long *)this_00 + 0x5a0))
                      (this_00,&local_e8,lVar10 + 0x8c,*(undefined4 *)(lVar10 + 0x94));
            uVar1 = *(uint *)(lVar10 + 100);
          }
          if ((uVar1 >> 7 & 1) != 0) {
            Color4B::Color4B((Color4B *)&local_e8,(Color3B *)(lVar10 + 0x98),0xff);
            (**(code **)(*(long *)this_00 + 0x5b0))(this_00,&local_e8);
          }
          Color4B::Color4B((Color4B *)&local_e8,(Color3B *)(lVar10 + 0x2c),0xff);
                    /* catch() { ... } // from try @ 00dd7160 with catch @ 00dd72b8 */
          puVar14 = &local_e8;
                    /* catch() { ... } // from try @ 00dd6ef0 with catch @ 00dd72bc */
          pcVar11 = *(code **)(*(long *)this_00 + 0x598);
          goto LAB_00dd72c0;
        case 1:
                    /* try { // try from 00dd7008 to 00ed7023 has its CatchHandler @ 00dd7324 */
          if (*(int *)(lVar10 + 0x58) == 0) {
            this_00 = (Label *)Sprite::create((basic_string *)(lVar10 + 0x30));
            if (this_00 != (Label *)0x0) goto LAB_00dd7108;
            goto LAB_00dd72c8;
          }
          this_00 = (Label *)Sprite::createWithSpriteFrameName((basic_string *)(lVar10 + 0x30));
          if (this_00 == (Label *)0x0) goto LAB_00dd72c8;
LAB_00dd7108:
                    /* try { // try from 00dd7110 to 00ed711b has its CatchHandler @ 00dd72dc */
          if ((*(int *)(lVar10 + 0x60) == -1) && (*(int *)(lVar10 + 0x5c) == -1)) goto LAB_00dd72c8;
          pSVar8 = (Size *)(**(code **)(*(long *)this_00 + 0x168))(this_00);
          Size::Size((Size *)&local_e8,pSVar8);
          if (*(int *)(lVar10 + 0x5c) != -1) {
                    /* try { // try from 00dd7160 to 00ed71c3 has its CatchHandler @ 00dd72b8 */
            (**(code **)(*(long *)this_00 + 0x50))
                      ((float)*(int *)(lVar10 + 0x5c) / (float)local_e8,this_00);
          }
          if (*(int *)(lVar10 + 0x60) != -1) {
            (**(code **)(*(long *)this_00 + 0x60))
                      ((float)*(int *)(lVar10 + 0x60) / local_e8._4_4_,this_00);
          }
          fVar5 = (float)local_e8;
          fVar21 = (float)(**(code **)(*(long *)this_00 + 0x58))(this_00);
          fVar6 = local_e8._4_4_;
          fVar22 = (float)(**(code **)(*(long *)this_00 + 0x68))(this_00);
          Size::Size(aSStack_f0,fVar5 * fVar21,fVar6 * fVar22);
          (**(code **)(*(long *)this_00 + 0x160))(this_00,aSStack_f0);
          local_e0 = &PTR_FUN_016e2cb8;
          local_c0 = &local_e0;
          uStack_d0 = 0;
          local_d8 = openUrl;
          local_c8 = this;
          uVar9 = ListenerComponent::create(this_00,lVar10 + 0x68,&local_e0);
          (**(code **)(*(long *)this_00 + 0x460))(this_00,uVar9);
                    /* try { // try from 00dd7220 to 00ed7227 has its CatchHandler @ 00dd722c */
                    /* try { // try from 00dd7228 to 00ed7363 has its CatchHandler @ 00dd6c4c */
                    /* catch() { ... } // from try @ 00dd7220 with catch @ 00dd722c */
          if (&local_e0 == local_c0) {
                    /* catch() { ... } // from try @ 00dd6db4 with catch @ 00dd7244 */
            pcVar11 = (code *)(*local_c0)[4];
LAB_00dd7248:
                    /* catch() { ... } // from try @ 00dd6dd8 with catch @ 00dd7248
                       catch() { ... } // from try @ 00dd70e4 with catch @ 00dd7248 */
            (*pcVar11)();
          }
          else {
                    /* catch() { ... } // from try @ 00dd6cc8 with catch @ 00dd7230 */
            if (local_c0 != (undefined ***)0x0) {
                    /* catch() { ... } // from try @ 00dd6cb0 with catch @ 00dd7234 */
              pcVar11 = (code *)(*local_c0)[5];
              goto LAB_00dd7248;
            }
          }
                    /* catch() { ... } // from try @ 00dd6d98 with catch @ 00dd724c */
                    /* catch() { ... } // from try @ 00dd6d88 with catch @ 00dd725c */
          (**(code **)(*(long *)this_00 + 0x4c0))(this_00,lVar10 + 0x2c);
                    /* catch() { ... } // from try @ 00dd6fa0 with catch @ 00dd7260 */
          goto LAB_00dd72cc;
        case 2:
          this_00 = *(Label **)(lVar10 + 0x30);
          puVar14 = (undefined8 *)(lVar10 + 0x2c);
          pcVar11 = *(code **)(*(long *)this_00 + 0x4c0);
LAB_00dd72c0:
          (*pcVar11)(this_00,puVar14);
LAB_00dd72c8:
          if (this_00 != (Label *)0x0) {
LAB_00dd72cc:
                    /* catch() { ... } // from try @ 00dd7110 with catch @ 00dd72dc */
            (**(code **)(*(long *)this_00 + 0x490))(this_00,*(undefined1 *)(lVar10 + 0x2f));
                    /* catch() { ... } // from try @ 00dd6d2c with catch @ 00dd72e0 */
            lVar10 = *(long *)(this + 0x510);
            if (*(long *)(this + 0x518) - lVar10 != 0) {
                    /* catch() { ... } // from try @ 00dd6e2c with catch @ 00dd72f0 */
                    /* catch() { ... } // from try @ 00dd6e0c with catch @ 00dd72f4 */
              lVar15 = (*(long *)(this + 0x518) - lVar10 >> 3) * -0x5555555555555555 + -1;
              lVar13 = lVar10 + lVar15 * 0x18;
              puVar14 = (undefined8 *)(lVar13 + 8);
              plVar16 = (long *)*puVar14;
              local_e8 = (Ref *)this_00;
              if (plVar16 == *(long **)(lVar13 + 0x10)) {
                std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
                __push_back_slow_path<cocos2d::Node*const&>
                          ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)
                           (lVar10 + lVar15 * 0x18),(Node **)&local_e8);
              }
              else {
                *plVar16 = (long)this_00;
                *puVar14 = plVar16 + 1;
              }
              Ref::retain(local_e8);
            }
          }
          break;
        case 3:
          addNewLine(this);
        }
        lVar20 = lVar20 + 1;
        if (lVar12 >> 3 <= lVar20) break;
        lVar10 = *(long *)(this + 0x4f8);
      } while( true );
    }
    formatRenderers(this);
    this[0x4f0] = (RichText)0x0;
  }
  if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

