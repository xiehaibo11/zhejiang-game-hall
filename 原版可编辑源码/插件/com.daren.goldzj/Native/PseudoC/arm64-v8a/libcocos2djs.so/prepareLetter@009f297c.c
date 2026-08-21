
/* cocos2d::FontAtlas::prepareLetter(unsigned long, std::__ndk1::shared_ptr<cocos2d::GlyphBitmap>)
    */

uint __thiscall cocos2d::FontAtlas::prepareLetter(FontAtlas *this,ulong param_1,undefined8 *param_3)

{
  FontAtlasFrame *this_00;
  __shared_weak_count *p_Var1;
  int iVar2;
  __shared_weak_count *p_Var3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  void *__s;
  ulong uVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 local_88;
  __shared_weak_count *p_Stack_80;
  undefined8 local_78;
  __shared_weak_count *p_Stack_70;
  Rect aRStack_68 [16];
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  uVar11 = *(ulong *)(this + 0x10);
  if (uVar11 != 0) {
    uVar13 = uVar11 - 1;
    if ((uVar13 & uVar11) == 0) {
      uVar15 = uVar13 & param_1;
    }
    else {
      uVar15 = param_1;
      if (uVar11 <= param_1) {
        uVar15 = 0;
        if (uVar11 != 0) {
          uVar15 = param_1 / uVar11;
        }
        uVar15 = param_1 - uVar15 * uVar11;
      }
    }
    plVar16 = *(long **)(*(long *)(this + 8) + uVar15 * 8);
    if (plVar16 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
            plVar16 = (long *)*plVar16;
            if (plVar16 == (long *)0x0) goto LAB_009f2a3c;
            uVar17 = plVar16[1];
            if (uVar17 != param_1) break;
            if (plVar16[2] == param_1) goto LAB_009f2af8;
          }
          if ((uVar13 & uVar11) == 0) break;
          if (uVar11 <= uVar17) {
            uVar6 = 0;
            if (uVar11 != 0) {
              uVar6 = uVar17 / uVar11;
            }
            uVar17 = uVar17 - uVar6 * uVar11;
          }
          if (uVar17 != uVar15) goto LAB_009f2a3c;
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f293c with catch @ 009f2a30
                        */
      } while ((uVar17 & uVar13) == uVar15);
    }
  }
LAB_009f2a3c:
  Rect::Rect(aRStack_68);
  piVar12 = (int *)*param_3;
  this_00 = (FontAtlasFrame *)(this + 0x30);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f28dc with catch @ 009f2a50
                        */
  iVar8 = FontAtlasFrame::append(this_00,*piVar12,piVar12[1],(vector *)(piVar12 + 4),aRStack_68);
  if (iVar8 == 0) {
    local_88 = *param_3;
    p_Var3 = (__shared_weak_count *)param_3[1];
    if (p_Var3 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var3 + 8;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = *(long *)p_Var1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    p_Stack_80 = p_Var3;
    addLetterDef(this,param_1,&local_88,aRStack_68);
    if (p_Var3 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var3 + 8;
      do {
        lVar14 = *(long *)p_Var1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar14 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var3);
      }
    }
LAB_009f2af8:
    uVar10 = 1;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f27a0 with catch @ 009f2a64
                        */
    if (iVar8 == 1) {
      if (*(FontAtlasFrame **)(this + 0x90) < *(FontAtlasFrame **)(this + 0x98)) {
        FontAtlasFrame::FontAtlasFrame(*(FontAtlasFrame **)(this + 0x90),this_00);
        *(long *)(this + 0x90) = *(long *)(this + 0x90) + 0x58;
      }
      else {
        std::__ndk1::vector<cocos2d::FontAtlasFrame,std::__ndk1::allocator<cocos2d::FontAtlasFrame>>
        ::__push_back_slow_path<cocos2d::FontAtlasFrame>
                  ((vector<cocos2d::FontAtlasFrame,std::__ndk1::allocator<cocos2d::FontAtlasFrame>>
                    *)(this + 0x88),this_00);
      }
      iVar2 = *(int *)(this + 0xa4);
      iVar8 = *(int *)(this + 0xa8);
      *(undefined4 *)(this + 0x6c) = 2;
      *(undefined4 *)(this + 0x74) = 0;
      *(undefined4 *)(this + 0x78) = *(undefined4 *)(this + 0xac);
      *(int *)(this + 100) = iVar2;
      *(int *)(this + 0x68) = iVar8;
      *(int *)(this + 0xa0) = *(int *)(this + 0xa0) + 1;
      iVar9 = PixelModeSize();
      __s = *(void **)(this + 0x38);
      lVar14 = *(long *)(this + 0x40);
      uVar11 = (ulong)(iVar8 * iVar2 * iVar9);
                    /* try { // try from 009f2b4c to 00af2beb has its CatchHandler @ 009f2b4c
                       catch() { ... } // from try @ 009f2b4c with catch @ 009f2b4c
                       catch() { ... } // from try @ 009f2bf0 with catch @ 009f2b4c */
      uVar13 = lVar14 - (long)__s;
      if (uVar13 < uVar11) {
        std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
                  ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x38),
                   uVar11 - uVar13);
        __s = *(void **)(this + 0x38);
        lVar14 = *(long *)(this + 0x40);
      }
      else if (uVar13 != uVar11) {
        lVar14 = (long)__s + uVar11;
        *(long *)(this + 0x40) = lVar14;
      }
      if (0 < lVar14 - (long)__s) {
        memset(__s,0,lVar14 - (long)__s);
      }
      *(undefined4 *)(this + 0x50) = 0;
      FontAtlasFrame::getTexture(this_00);
      local_78 = *param_3;
      p_Var3 = (__shared_weak_count *)param_3[1];
      if (p_Var3 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Var3 + 8;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar5) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      p_Stack_70 = p_Var3;
      uVar10 = prepareLetter(this,param_1,&local_78);
      if (p_Var3 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Var3 + 8;
        do {
          lVar14 = *(long *)p_Var1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar5) {
            *(long *)p_Var1 = lVar14 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar14 == 0) {
                    /* try { // try from 009f2bec to 00af2bef has its CatchHandler @ 009f2c0c */
                    /* try { // try from 009f2bf0 to 00af2c27 has its CatchHandler @ 009f2b4c */
          (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var3);
        }
      }
    }
    else {
      uVar10 = 0;
    }
  }
                    /* catch() { ... } // from try @ 009f2bec with catch @ 009f2c0c */
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10 & 1;
}

