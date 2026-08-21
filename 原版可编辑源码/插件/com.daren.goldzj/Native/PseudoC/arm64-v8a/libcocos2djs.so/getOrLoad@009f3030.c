
/* cocos2d::FontAtlas::getOrLoad(unsigned long, cocos2d::FontFreeType*) */

ulong __thiscall cocos2d::FontAtlas::getOrLoad(FontAtlas *this,ulong param_1,FontFreeType *param_2)

{
  __shared_weak_count *p_Var1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  __shared_weak_count *p_Var7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long local_68;
  __shared_weak_count *p_Stack_60;
  long local_58;
  __shared_weak_count *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(this + 0x10);
  if (uVar8 != 0) {
    uVar9 = uVar8 - 1;
    if ((uVar9 & uVar8) == 0) {
      uVar11 = uVar9 & param_1;
    }
    else {
      uVar11 = param_1;
      if (uVar8 <= param_1) {
        uVar11 = 0;
        if (uVar8 != 0) {
          uVar11 = param_1 / uVar8;
        }
        uVar11 = param_1 - uVar11 * uVar8;
      }
    }
    plVar12 = *(long **)(*(long *)(this + 8) + uVar11 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          while( true ) {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) goto LAB_009f30e8;
            uVar13 = plVar12[1];
            if (uVar13 != param_1) break;
            if (plVar12[2] == param_1) {
              param_1 = (ulong)(plVar12 + 3);
              goto LAB_009f3260;
            }
          }
          if ((uVar9 & uVar8) == 0) break;
          if (uVar8 <= uVar13) {
            uVar5 = 0;
            if (uVar8 != 0) {
              uVar5 = uVar13 / uVar8;
            }
            uVar13 = uVar13 - uVar5 * uVar8;
          }
          if (uVar13 != uVar11) goto LAB_009f30e8;
        }
      } while ((uVar13 & uVar9) == uVar11);
    }
  }
LAB_009f30e8:
  if (param_2 != (FontFreeType *)0x0) {
    FontFreeType::getGlyphBitmap(param_2,param_1,(bool)this[0xb0]);
    p_Var7 = local_50;
    if (local_58 == 0) {
LAB_009f31a8:
      bVar4 = true;
      p_Var7 = local_50;
    }
    else {
      local_68 = local_58;
      p_Stack_60 = local_50;
      if (local_50 != (__shared_weak_count *)0x0) {
        p_Var1 = local_50 + 8;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar8 = prepareLetter(this,param_1,&local_68);
      if (p_Var7 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Var7 + 8;
        do {
          lVar10 = *(long *)p_Var1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar4) {
            *(long *)p_Var1 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
        }
      }
      if ((uVar8 & 1) == 0) goto LAB_009f31a8;
      uVar8 = *(ulong *)(this + 0x10);
      p_Var7 = local_50;
      if (uVar8 != 0) {
        uVar9 = uVar8 - 1;
        if ((uVar9 & uVar8) == 0) {
          uVar11 = uVar9 & param_1;
        }
        else {
          uVar11 = param_1;
          if (uVar8 <= param_1) {
            uVar11 = 0;
            if (uVar8 != 0) {
              uVar11 = param_1 / uVar8;
            }
            uVar11 = param_1 - uVar11 * uVar8;
          }
        }
        plVar12 = *(long **)(*(long *)(this + 8) + uVar11 * 8);
        if (plVar12 != (long *)0x0) {
          do {
            while( true ) {
              plVar12 = (long *)*plVar12;
              if (plVar12 == (long *)0x0) goto LAB_009f3218;
              uVar13 = plVar12[1];
              if (uVar13 != param_1) break;
              if (plVar12[2] == param_1) {
                bVar4 = false;
                param_1 = (ulong)(plVar12 + 3);
                goto joined_r0x009f3298;
              }
            }
            if ((uVar9 & uVar8) == 0) {
              uVar13 = uVar13 & uVar9;
            }
            else if (uVar8 <= uVar13) {
              uVar5 = 0;
              if (uVar8 != 0) {
                uVar5 = uVar13 / uVar8;
              }
              uVar13 = uVar13 - uVar5 * uVar8;
            }
          } while (uVar13 == uVar11);
        }
      }
LAB_009f3218:
      param_1 = 0;
      bVar4 = false;
    }
joined_r0x009f3298:
    if (p_Var7 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var7 + 8;
      do {
        lVar10 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar2) {
          *(long *)p_Var1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)p_Var7 + 0x10))(p_Var7);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var7);
      }
    }
    if (!bVar4) goto LAB_009f3260;
  }
  param_1 = 0;
LAB_009f3260:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

