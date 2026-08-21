
/* fairygui::FUIRichText::doHorizontalAlignment(std::__ndk1::vector<cocos2d::Node*,
   std::__ndk1::allocator<cocos2d::Node*> > const&, float) */

void __thiscall
fairygui::FUIRichText::doHorizontalAlignment(FUIRichText *this,vector *param_1,float param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  float *pfVar10;
  basic_string *pbVar11;
  undefined8 *puVar12;
  size_t sVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  float fVar21;
  ulong local_98;
  size_t local_90;
  byte *local_88;
  locale alStack_80 [8];
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if (*(int *)(this + 0x38c) == 0) goto LAB_00aa9ee8;
  fVar21 = 0.0;
  if (*(long *)param_1 != *(long *)(param_1 + 8)) {
    lVar8 = *(long *)(*(long *)(param_1 + 8) + -8);
    if ((lVar8 != 0) &&
       (plVar9 = (long *)__dynamic_cast(lVar8,&cocos2d::Node::typeinfo,&cocos2d::Label::typeinfo,0),
       plVar9 != (long *)0x0)) {
      pfVar10 = (float *)(**(code **)(*plVar9 + 0x168))();
      fVar21 = *pfVar10;
      pbVar11 = (basic_string *)(**(code **)(*plVar9 + 0x590))(plVar9);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_98,pbVar11);
      if ((local_98 & 1) == 0) {
        pbVar18 = (byte *)((ulong)&local_98 | 1);
        pbVar16 = pbVar18 + (local_98 >> 1 & 0x7f);
        pbVar14 = pbVar16;
        if (pbVar16 != pbVar18) {
LAB_00aa9c90:
          while( true ) {
            pbVar19 = pbVar16 + -1;
            bVar4 = *pbVar19;
            std::__ndk1::locale::locale(alStack_80);
            lVar8 = std::__ndk1::locale::use_facet(alStack_80,(id *)&std::__ndk1::ctype<char>::id);
            pbVar14 = pbVar16;
            if ((char)bVar4 < '\0') break;
            uVar20 = *(ulong *)(*(long *)(lVar8 + 0x10) + (long)(char)bVar4 * 8);
            std::__ndk1::locale::~locale(alStack_80);
            if (((uVar20 & 1) == 0) || (pbVar16 = pbVar19, pbVar14 = pbVar18, pbVar18 == pbVar19))
            goto joined_r0x00aa9f34;
          }
          std::__ndk1::locale::~locale(alStack_80);
        }
      }
      else {
        pbVar16 = local_88 + local_90;
        pbVar18 = local_88;
        pbVar14 = pbVar16;
        if (pbVar16 != local_88) goto LAB_00aa9c90;
      }
joined_r0x00aa9f34:
      pbVar16 = local_88;
      uVar20 = local_90;
      if ((local_98 & 1) == 0) {
        pbVar16 = (byte *)((ulong)&local_98 | 1);
        uVar20 = (local_98 & 0xff) >> 1;
      }
      uVar15 = (long)pbVar14 - (long)pbVar16;
      pbVar18 = (byte *)(uVar20 - uVar15);
      if (uVar20 < uVar15) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar16 = pbVar16 + (uVar20 - (long)pbVar14);
      if (pbVar16 != (byte *)0x0) {
        pbVar14 = (byte *)((ulong)&local_98 | 1);
        if ((local_98 & 1) != 0) {
          pbVar14 = local_88;
        }
        pbVar19 = pbVar18;
        if (pbVar16 <= pbVar18) {
          pbVar19 = pbVar16;
        }
        if ((long)pbVar18 - (long)pbVar19 != 0) {
          memmove(pbVar14 + uVar15,pbVar14 + uVar15 + (long)pbVar19,(long)pbVar18 - (long)pbVar19);
        }
        sVar13 = uVar20 - (long)pbVar19;
        sVar1 = sVar13;
        if ((local_98 & 1) == 0) {
          local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar13 << 1));
          sVar1 = local_90;
        }
        local_90 = sVar1;
        pbVar14[sVar13] = 0;
      }
      pbVar16 = (byte *)(**(code **)(*plVar9 + 0x590))(plVar9);
      uVar20 = local_98;
      bVar4 = *pbVar16;
      sVar13 = (size_t)(bVar4 >> 1);
      sVar1 = sVar13;
      if ((bVar4 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar16 + 8);
      }
      sVar2 = local_98 >> 1 & 0x7f;
      if ((local_98 & 1) != 0) {
        sVar2 = local_90;
      }
      if (sVar1 == sVar2) {
        pbVar14 = *(byte **)(pbVar16 + 0x10);
        if ((bVar4 & 1) == 0) {
          pbVar14 = pbVar16 + 1;
        }
        pbVar18 = (byte *)((ulong)&local_98 | 1);
        if ((local_98 & 1) != 0) {
          pbVar18 = local_88;
        }
        if ((bVar4 & 1) == 0) {
          while (sVar1 != 0) {
            pbVar16 = pbVar16 + 1;
            if (*pbVar16 != *pbVar18) goto LAB_00aa9e14;
            pbVar18 = pbVar18 + 1;
            sVar13 = sVar13 - 1;
            sVar1 = sVar13;
          }
        }
        else if ((sVar1 != 0) && (iVar7 = memcmp(pbVar14,pbVar18,sVar1), iVar7 != 0))
        goto LAB_00aa9e14;
        bVar6 = false;
      }
      else {
LAB_00aa9e14:
        (**(code **)(*plVar9 + 0x588))(plVar9,&local_98);
        pfVar10 = (float *)(**(code **)(*plVar9 + 0x168))(plVar9);
        bVar6 = true;
        fVar21 = *pfVar10 - fVar21;
        uVar20 = local_98;
      }
      if ((uVar20 & 1) != 0) {
        operator_delete(local_88);
      }
      if (bVar6) goto LAB_00aa9e60;
    }
    fVar21 = 0.0;
  }
LAB_00aa9e60:
  fVar21 = *(float *)(this + 0x344) - (fVar21 + param_2);
  if (*(int *)(this + 0x38c) != 2) {
    if (*(int *)(this + 0x38c) == 1) {
      fVar21 = fVar21 * 0.5;
    }
    else {
      fVar21 = 0.0;
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  for (puVar17 = *(undefined8 **)param_1; puVar17 != puVar3; puVar17 = puVar17 + 1) {
    plVar9 = (long *)*puVar17;
    puVar12 = (undefined8 *)(**(code **)(*plVar9 + 0xb0))(plVar9);
    local_98 = CONCAT44((float)((ulong)*puVar12 >> 0x20) + 0.0,fVar21 + (float)*puVar12);
    (**(code **)(*plVar9 + 0x98))(plVar9,&local_98);
  }
LAB_00aa9ee8:
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

