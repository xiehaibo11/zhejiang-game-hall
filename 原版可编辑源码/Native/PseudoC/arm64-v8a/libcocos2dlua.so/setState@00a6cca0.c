
/* fairygui::GButton::setState(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::GButton::setState(GButton *this,basic_string *param_1)

{
  size_t sVar1;
  basic_string *pbVar2;
  basic_string bVar3;
  size_t sVar4;
  long lVar5;
  basic_string *pbVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  basic_string *pbVar12;
  size_t sVar13;
  float fVar14;
  float fVar15;
  Value aVStack_78 [16];
  long local_68;
  
                    /* try { // try from 00a6ccb0 to 00b6ccb7 has its CatchHandler @ 00a6cfe8 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(GController **)(this + 0x298) != (GController *)0x0) {
                    /* try { // try from 00a6ccdc to 00b6cd2b has its CatchHandler @ 00a6d03c */
    GController::setSelectedPage(*(GController **)(this + 0x298),param_1,true);
  }
  if (*(int *)(this + 0x340) != 2) {
    if (*(int *)(this + 0x340) != 1) goto LAB_00a6d188;
    iVar8 = GComponent::numChildren((GComponent *)this);
    bVar3 = *param_1;
    sVar13 = (size_t)((byte)bVar3 >> 1);
    sVar1 = sVar13;
    if (((byte)bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 8);
    }
    sVar4 = (ulong)(DOWN >> 1);
    if ((DOWN & 1) != 0) {
      sVar4 = DAT_01782558;
    }
                    /* try { // try from 00a6cd40 to 00b6cd63 has its CatchHandler @ 00a6cffc */
    if (sVar1 == sVar4) {
      pbVar12 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar3 & 1) == 0) {
        pbVar12 = param_1 + 1;
      }
      pbVar2 = DAT_01782560;
      if ((DOWN & 1) == 0) {
        pbVar2 = (basic_string *)&DAT_01782551;
      }
      sVar4 = sVar13;
      pbVar6 = param_1;
      sVar7 = sVar1;
      if (((byte)bVar3 & 1) == 0) {
        while (sVar7 != 0) {
                    /* try { // try from 00a6cd7c to 00b6cde7 has its CatchHandler @ 00a6d040 */
          if (pbVar6[1] != *pbVar2) goto LAB_00a6ce20;
          pbVar2 = pbVar2 + 1;
          sVar4 = sVar4 - 1;
          pbVar6 = pbVar6 + 1;
          sVar7 = sVar4;
        }
      }
      else if ((sVar1 != 0) && (iVar9 = memcmp(pbVar12,pbVar2,sVar1), iVar9 != 0))
      goto LAB_00a6ce20;
LAB_00a6d088:
      cocos2d::Value::Value(aVStack_78,(int)(*(float *)(this + 0x348) * 255.0) * 0x10101);
      if (0 < iVar8) {
                    /* try { // try from 00a6d0bc to 00b6d0f3 has its CatchHandler @ 00a6d178 */
        iVar9 = 0;
        do {
                    /* try { // try from 00a6d0f4 to 00b6d123 has its CatchHandler @ 00a6d06c */
          plVar10 = (long *)GComponent::getChildAt((GComponent *)this,iVar9);
          if ((plVar10 == (long *)0x0) ||
             (lVar11 = __dynamic_cast(plVar10,&GObject::typeinfo,&GTextField::typeinfo,0),
             lVar11 == 0)) {
            (**(code **)(*plVar10 + 0x38))(plVar10,2,aVStack_78);
          }
          iVar9 = iVar9 + 1;
        } while (iVar8 != iVar9);
      }
    }
    else {
LAB_00a6ce20:
      sVar4 = (ulong)(SELECTED_OVER >> 1);
      if ((SELECTED_OVER & 1) != 0) {
        sVar4 = DAT_01782588;
      }
      if (sVar1 == sVar4) {
        pbVar12 = *(basic_string **)(param_1 + 0x10);
                    /* try { // try from 00a6ce40 to 00b6ce73 has its CatchHandler @ 00a6d010 */
        if (((byte)bVar3 & 1) == 0) {
          pbVar12 = param_1 + 1;
        }
        pbVar2 = DAT_01782590;
        if ((SELECTED_OVER & 1) == 0) {
          pbVar2 = (basic_string *)&DAT_01782581;
        }
        sVar4 = sVar13;
        pbVar6 = param_1;
        sVar7 = sVar1;
        if (((byte)bVar3 & 1) == 0) {
          while (sVar7 != 0) {
            if (pbVar6[1] != *pbVar2) goto LAB_00a6cf10;
                    /* try { // try from 00a6ce7c to 00b6ce8b has its CatchHandler @ 00a6cfe4 */
            pbVar2 = pbVar2 + 1;
            sVar4 = sVar4 - 1;
            pbVar6 = pbVar6 + 1;
            sVar7 = sVar4;
          }
        }
        else {
                    /* try { // try from 00a6cf04 to 00b6cf17 has its CatchHandler @ 00a6d000 */
          if ((sVar1 != 0) && (iVar9 = memcmp(pbVar12,pbVar2,sVar1), iVar9 != 0)) goto LAB_00a6cf10;
        }
        goto LAB_00a6d088;
      }
LAB_00a6cf10:
      sVar4 = (ulong)(SELECTED_DISABLED >> 1);
                    /* try { // try from 00a6cf28 to 00b6cf3b has its CatchHandler @ 00a6d010 */
      if ((SELECTED_DISABLED & 1) != 0) {
        sVar4 = DAT_017825b8;
      }
      if (sVar1 == sVar4) {
        pbVar12 = *(basic_string **)(param_1 + 0x10);
        if (((byte)bVar3 & 1) == 0) {
          pbVar12 = param_1 + 1;
        }
        pbVar2 = DAT_017825c0;
        if ((SELECTED_DISABLED & 1) == 0) {
          pbVar2 = (basic_string *)&DAT_017825b1;
        }
                    /* try { // try from 00a6cf4c to 00b6cf5f has its CatchHandler @ 00a6d03c */
        if (((byte)bVar3 & 1) == 0) {
          while (sVar1 != 0) {
            param_1 = param_1 + 1;
                    /* try { // try from 00a6cf64 to 00b6cf77 has its CatchHandler @ 00a6d040 */
            if (*param_1 != *pbVar2) goto LAB_00a6d008;
            pbVar2 = pbVar2 + 1;
            sVar13 = sVar13 - 1;
            sVar1 = sVar13;
          }
        }
        else {
                    /* catch() { ... } // from try @ 00a6ce04 with catch @ 00a6cff8 */
                    /* catch() { ... } // from try @ 00a6cd40 with catch @ 00a6cffc */
                    /* catch() { ... } // from try @ 00a6cc2c with catch @ 00a6d000
                       catch() { ... } // from try @ 00a6cf04 with catch @ 00a6d000 */
          if ((sVar1 != 0) && (iVar9 = memcmp(pbVar12,pbVar2,sVar1), iVar9 != 0)) goto LAB_00a6d008;
        }
        goto LAB_00a6d088;
      }
LAB_00a6d008:
                    /* catch() { ... } // from try @ 00a6ce40 with catch @ 00a6d010
                       catch() { ... } // from try @ 00a6cf28 with catch @ 00a6d010 */
      cocos2d::Value::Value(aVStack_78,0xffffff);
      if (0 < iVar8) {
        iVar9 = 0;
        do {
          plVar10 = (long *)GComponent::getChildAt((GComponent *)this,iVar9);
                    /* try { // try from 00a6d06c to 00b6d0bb has its CatchHandler @ 00a6d06c
                       catch() { ... } // from try @ 00a6d06c with catch @ 00a6d06c
                       catch() { ... } // from try @ 00a6d0f4 with catch @ 00a6d06c
                       catch() { ... } // from try @ 00a6d138 with catch @ 00a6d06c */
          if ((plVar10 == (long *)0x0) ||
             (lVar11 = __dynamic_cast(plVar10,&GObject::typeinfo,&GTextField::typeinfo,0),
             lVar11 == 0)) {
                    /* catch() { ... } // from try @ 00a6ccdc with catch @ 00a6d03c
                       catch() { ... } // from try @ 00a6cf4c with catch @ 00a6d03c */
                    /* catch() { ... } // from try @ 00a6cd7c with catch @ 00a6d040
                       catch() { ... } // from try @ 00a6cf64 with catch @ 00a6d040 */
            (**(code **)(*plVar10 + 0x38))(plVar10,2,aVStack_78);
          }
          iVar9 = iVar9 + 1;
        } while (iVar8 != iVar9);
      }
    }
                    /* try { // try from 00a6d124 to 00b6d137 has its CatchHandler @ 00a6d178 */
    cocos2d::Value::~Value(aVStack_78);
    goto LAB_00a6d188;
  }
  bVar3 = *param_1;
  sVar13 = (size_t)((byte)bVar3 >> 1);
  sVar1 = sVar13;
  if (((byte)bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  sVar4 = (ulong)(DOWN >> 1);
  if ((DOWN & 1) != 0) {
    sVar4 = DAT_01782558;
  }
  if (sVar1 == sVar4) {
    pbVar12 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pbVar12 = param_1 + 1;
    }
    pbVar2 = DAT_01782560;
    if ((DOWN & 1) == 0) {
      pbVar2 = (basic_string *)&DAT_01782551;
    }
    sVar4 = sVar13;
    pbVar6 = param_1;
    sVar7 = sVar1;
    if (((byte)bVar3 & 1) == 0) {
      while (sVar7 != 0) {
        if (pbVar6[1] != *pbVar2) goto LAB_00a6ce98;
                    /* try { // try from 00a6ce04 to 00b6ce23 has its CatchHandler @ 00a6cff8 */
        pbVar2 = pbVar2 + 1;
        sVar4 = sVar4 - 1;
        pbVar6 = pbVar6 + 1;
        sVar7 = sVar4;
      }
    }
    else {
                    /* try { // try from 00a6ce94 to 00b6ceab has its CatchHandler @ 00a6cfe0 */
      if ((sVar1 != 0) && (iVar8 = memcmp(pbVar12,pbVar2,sVar1), iVar8 != 0)) goto LAB_00a6ce98;
    }
LAB_00a6d160:
    if (this[0x344] != (GButton)0x0) goto LAB_00a6d188;
    this[0x344] = (GButton)0x1;
                    /* catch() { ... } // from try @ 00a6d0bc with catch @ 00a6d178
                       catch() { ... } // from try @ 00a6d124 with catch @ 00a6d178 */
    fVar14 = *(float *)(this + 0xe0) * *(float *)(this + 0x348);
    fVar15 = *(float *)(this + 0x348) * *(float *)(this + 0xe4);
  }
  else {
LAB_00a6ce98:
    sVar4 = (ulong)(SELECTED_OVER >> 1);
    if ((SELECTED_OVER & 1) != 0) {
      sVar4 = DAT_01782588;
    }
    if (sVar1 == sVar4) {
      pbVar12 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar3 & 1) == 0) {
        pbVar12 = param_1 + 1;
      }
                    /* try { // try from 00a6cec4 to 00b6cecb has its CatchHandler @ 00a6cfdc */
      pbVar2 = DAT_01782590;
      if ((SELECTED_OVER & 1) == 0) {
        pbVar2 = (basic_string *)&DAT_01782581;
      }
                    /* try { // try from 00a6cecc to 00b6cf03 has its CatchHandler @ 00a6cbc0 */
      sVar4 = sVar13;
      pbVar6 = param_1;
      sVar7 = sVar1;
      if (((byte)bVar3 & 1) == 0) {
        while (sVar7 != 0) {
          if (pbVar6[1] != *pbVar2) goto LAB_00a6cf8c;
          pbVar2 = pbVar2 + 1;
          sVar4 = sVar4 - 1;
          pbVar6 = pbVar6 + 1;
          sVar7 = sVar4;
        }
      }
      else if ((sVar1 != 0) && (iVar8 = memcmp(pbVar12,pbVar2,sVar1), iVar8 != 0))
      goto LAB_00a6cf8c;
      goto LAB_00a6d160;
    }
LAB_00a6cf8c:
    sVar4 = (ulong)(SELECTED_DISABLED >> 1);
    if ((SELECTED_DISABLED & 1) != 0) {
      sVar4 = DAT_017825b8;
    }
    if (sVar1 == sVar4) {
      pbVar12 = *(basic_string **)(param_1 + 0x10);
      if (((byte)bVar3 & 1) == 0) {
        pbVar12 = param_1 + 1;
      }
      pbVar2 = DAT_017825c0;
      if ((SELECTED_DISABLED & 1) == 0) {
        pbVar2 = (basic_string *)&DAT_017825b1;
      }
      if (((byte)bVar3 & 1) == 0) {
        while (sVar1 != 0) {
          param_1 = param_1 + 1;
                    /* catch() { ... } // from try @ 00a6cec4 with catch @ 00a6cfdc */
                    /* catch() { ... } // from try @ 00a6ce94 with catch @ 00a6cfe0 */
          if (*param_1 != *pbVar2) goto LAB_00a6d140;
                    /* catch() { ... } // from try @ 00a6ccb0 with catch @ 00a6cfe8 */
                    /* catch() { ... } // from try @ 00a6cc70 with catch @ 00a6cfec */
          pbVar2 = pbVar2 + 1;
                    /* catch() { ... } // from try @ 00a6ce7c with catch @ 00a6cfe4 */
          sVar13 = sVar13 - 1;
                    /* catch() { ... } // from try @ 00a6cc58 with catch @ 00a6cff0 */
          sVar1 = sVar13;
        }
      }
      else {
                    /* try { // try from 00a6d138 to 00b6d193 has its CatchHandler @ 00a6d06c */
        if ((sVar1 != 0) && (iVar8 = memcmp(pbVar12,pbVar2,sVar1), iVar8 != 0)) goto LAB_00a6d140;
      }
      goto LAB_00a6d160;
    }
LAB_00a6d140:
    if (this[0x344] == (GButton)0x0) goto LAB_00a6d188;
    this[0x344] = (GButton)0x0;
    fVar14 = *(float *)(this + 0xe0) / *(float *)(this + 0x348);
    fVar15 = *(float *)(this + 0xe4) / *(float *)(this + 0x348);
  }
  GObject::setScale((GObject *)this,fVar14,fVar15);
LAB_00a6d188:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

