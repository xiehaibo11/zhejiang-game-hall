
/* cocos2d::FontFreeType::loadFont() */

void __thiscall cocos2d::FontFreeType::loadFont(FontFreeType *this)

{
  Data *this_00;
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  FontFreeType *pFVar7;
  long lVar8;
  undefined8 uVar9;
  Data aDStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar3 + 0x20))(aDStack_58,plVar3,this + 0x28);
  this_00 = (Data *)(this + 0x40);
  Data::operator=(this_00,aDStack_58);
  Data::~Data(aDStack_58);
  uVar9 = **(undefined8 **)(this + 8);
  uVar4 = Data::getBytes(this_00);
  uVar5 = Data::getSize(this_00);
  iVar2 = FT_New_Memory_Face(uVar9,uVar4,uVar5,0,this + 0x58);
  if (iVar2 == 0) {
    iVar2 = FT_Select_Charmap(*(undefined8 *)(this + 0x58),*(undefined4 *)(this + 0x60));
    if (iVar2 == 0) {
LAB_009f3eb0:
      iVar2 = FT_Set_Char_Size(*(undefined8 *)(this + 0x58),
                               (long)(int)(*(float *)(this + 0x20) * 64.0),
                               (long)(int)(*(float *)(this + 0x20) * 64.0),
                               *(undefined4 *)(this + 100),*(undefined4 *)(this + 100));
      if (iVar2 == 0) {
        uVar4 = 1;
        *(float *)(this + 0x24) =
             (float)(int)((ulong)(*(long *)(*(long *)(*(long *)(this + 0x58) + 0xa0) + 0x30) -
                                 *(long *)(*(long *)(*(long *)(this + 0x58) + 0xa0) + 0x38)) >> 6);
        goto LAB_009f3e74;
      }
    }
    else {
      lVar6 = *(long *)(this + 0x58);
      iVar2 = *(int *)(lVar6 + 0x48);
      if (0 < iVar2) {
        lVar8 = *(long *)(lVar6 + 0x50);
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(lVar8 + lVar6 * 8) + 8) != 0) {
            *(undefined4 *)(this + 0x60) = *(undefined4 *)(*(long *)(lVar8 + lVar6 * 8) + 8);
            iVar2 = FT_Select_Charmap();
            if (iVar2 == 0) goto LAB_009f3eb0;
            break;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar2);
      }
    }
  }
  else {
    if (((byte)this[0x28] & 1) == 0) {
      pFVar7 = this + 0x29;
    }
    else {
      pFVar7 = *(FontFreeType **)(this + 0x38);
    }
    log("[error] failed to parse font %s",pFVar7);
  }
  uVar4 = 0;
LAB_009f3e74:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

