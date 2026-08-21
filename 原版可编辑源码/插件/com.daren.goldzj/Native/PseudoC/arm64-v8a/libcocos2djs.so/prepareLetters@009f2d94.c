
/* cocos2d::FontAtlas::prepareLetters(std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> > const&,
   cocos2d::FontFreeType*) */

uint __thiscall
cocos2d::FontAtlas::prepareLetters(FontAtlas *this,basic_string *param_1,FontFreeType *param_2)

{
  __shared_weak_count *p_Var1;
  basic_string *pbVar2;
  undefined4 uVar3;
  basic_string bVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  __shared_weak_count *p_Var8;
  bool bVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 local_88;
  __shared_weak_count *p_Stack_80;
  undefined8 local_78;
  __shared_weak_count *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  bVar4 = *param_1;
  uVar12 = (ulong)(byte)bVar4;
  uVar13 = *(ulong *)(param_1 + 8);
  bVar9 = ((byte)bVar4 & 1) == 0;
  uVar21 = (ulong)((byte)bVar4 >> 1);
  if (!bVar9) {
    uVar21 = uVar13;
  }
  if (uVar21 == 0) {
    uVar20 = 1;
  }
  else {
    uVar21 = 0;
    uVar20 = 1;
    do {
      uVar15 = *(ulong *)(this + 0x10);
      pbVar2 = param_1 + 4;
      if (!bVar9) {
        pbVar2 = *(basic_string **)(param_1 + 0x10);
      }
      uVar11 = (ulong)*(uint *)(pbVar2 + uVar21 * 4);
      if (uVar15 != 0) {
        uVar16 = uVar15 - 1;
        if ((uVar16 & uVar15) == 0) {
          uVar17 = uVar16 & uVar11;
        }
        else {
          uVar17 = uVar11;
          if (uVar15 <= uVar11) {
            uVar17 = 0;
            if (uVar15 != 0) {
              uVar17 = uVar11 / uVar15;
            }
            uVar17 = uVar11 - uVar17 * uVar15;
          }
        }
        plVar18 = *(long **)(*(long *)(this + 8) + uVar17 * 8);
        if (plVar18 != (long *)0x0) {
          do {
            while( true ) {
              while( true ) {
                plVar18 = (long *)*plVar18;
                if (plVar18 == (long *)0x0) goto LAB_009f2e90;
                uVar19 = plVar18[1];
                if (uVar19 != uVar11) break;
                if (plVar18[2] == uVar11) goto LAB_009f2f5c;
              }
              if ((uVar16 & uVar15) == 0) break;
              if (uVar15 <= uVar19) {
                uVar6 = 0;
                if (uVar15 != 0) {
                  uVar6 = uVar19 / uVar15;
                }
                uVar19 = uVar19 - uVar6 * uVar15;
              }
              if (uVar19 != uVar17) goto LAB_009f2e90;
            }
          } while ((uVar19 & uVar16) == uVar17);
        }
      }
LAB_009f2e90:
      FontFreeType::getGlyphBitmap(param_2,uVar11,(bool)this[0xb0]);
      p_Var8 = local_70;
      pbVar2 = param_1 + 4;
      if (((byte)*param_1 & 1) != 0) {
        pbVar2 = *(basic_string **)(param_1 + 0x10);
      }
      uVar3 = *(undefined4 *)(pbVar2 + uVar21 * 4);
      local_88 = local_78;
      p_Stack_80 = local_70;
      if (local_70 != (__shared_weak_count *)0x0) {
        p_Var1 = local_70 + 8;
        do {
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar9) {
            *(long *)p_Var1 = *(long *)p_Var1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar10 = prepareLetter(this,uVar3,&local_88);
      if (p_Var8 != (__shared_weak_count *)0x0) {
        p_Var1 = p_Var8 + 8;
        do {
          lVar14 = *(long *)p_Var1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar9) {
            *(long *)p_Var1 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*(long *)p_Var8 + 0x10))(p_Var8);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
        }
      }
      p_Var8 = local_70;
      uVar20 = uVar20 & uVar10;
      if (local_70 != (__shared_weak_count *)0x0) {
        p_Var1 = local_70 + 8;
        do {
          lVar14 = *(long *)p_Var1;
          cVar5 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar9) {
            *(long *)p_Var1 = lVar14 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar14 == 0) {
          (**(code **)(*(long *)local_70 + 0x10))(local_70);
          std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
        }
      }
      uVar12 = (ulong)(byte)*param_1;
      uVar13 = *(ulong *)(param_1 + 8);
LAB_009f2f5c:
      bVar9 = (uVar12 & 1) == 0;
      uVar21 = uVar21 + 1;
      uVar15 = uVar12 >> 1;
      if (!bVar9) {
        uVar15 = uVar13;
      }
    } while (uVar21 < uVar15);
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar20;
}

