
/* cocos2d::ui::RelativeLayoutManager::getRelativeWidget(cocos2d::ui::Widget*) */

long __thiscall
cocos2d::ui::RelativeLayoutManager::getRelativeWidget(RelativeLayoutManager *this,Widget *param_1)

{
  byte *__s2;
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  byte bVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar6;
  int iVar7;
  long lVar8;
  RelativeLayoutParameter *pRVar9;
  basic_string *pbVar10;
  long *plVar11;
  byte *pbVar12;
  size_t sVar13;
  byte *__s1;
  long *plVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  size_t local_78;
  byte *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* catch() { ... } // from try @ 00db37fc with catch @ 00db389c */
  lVar8 = (**(code **)(*(long *)param_1 + 0x5f8))(param_1);
  pRVar9 = (RelativeLayoutParameter *)0x0;
  if (lVar8 != 0) {
                    /* try { // try from 00db38b8 to 00eb39b7 has its CatchHandler @ 00db38b8
                       catch() { ... } // from try @ 00db38b8 with catch @ 00db38b8
                       catch() { ... } // from try @ 00db3e88 with catch @ 00db38b8 */
    pRVar9 = (RelativeLayoutParameter *)
             __dynamic_cast(lVar8,&LayoutParameter::typeinfo,&RelativeLayoutParameter::typeinfo,0);
  }
  pbVar10 = (basic_string *)RelativeLayoutParameter::getRelativeToWidgetName(pRVar9);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_80,pbVar10);
  sVar1 = (ulong)((byte)local_80[0] >> 1);
  if (((byte)local_80[0] & 1) != 0) {
    sVar1 = local_78;
  }
  if (sVar1 != 0) {
    plVar14 = *(long **)(this + 0x30);
    plVar3 = *(long **)(this + 0x38);
    if (plVar14 != plVar3) {
      plVar11 = (long *)*plVar14;
      if (plVar11 != (long *)0x0) goto LAB_00db3938;
      do {
        while( true ) {
          do {
            do {
              do {
                plVar14 = plVar14 + 1;
                if (plVar14 == plVar3) {
                  lVar8 = 0;
                  bVar6 = local_80[0];
                  goto joined_r0x00db3a50;
                }
                plVar11 = (long *)*plVar14;
              } while (plVar11 == (long *)0x0);
LAB_00db3938:
              lVar8 = (**(code **)(*plVar11 + 0x5f8))();
            } while ((lVar8 == 0) ||
                    (pRVar9 = (RelativeLayoutParameter *)
                              __dynamic_cast(lVar8,&LayoutParameter::typeinfo,
                                             &RelativeLayoutParameter::typeinfo,0),
                    pRVar9 == (RelativeLayoutParameter *)0x0));
            pbVar12 = (byte *)RelativeLayoutParameter::getRelativeName(pRVar9);
            bVar6 = local_80[0];
            bVar4 = *pbVar12;
            sVar13 = (size_t)(bVar4 >> 1);
            sVar1 = sVar13;
            if ((bVar4 & 1) != 0) {
              sVar1 = *(size_t *)(pbVar12 + 8);
            }
            sVar2 = (ulong)((byte)local_80[0] >> 1);
            if (((byte)local_80[0] & 1) != 0) {
              sVar2 = local_78;
            }
          } while (sVar1 != sVar2);
          __s1 = *(byte **)(pbVar12 + 0x10);
          if ((bVar4 & 1) == 0) {
            __s1 = pbVar12 + 1;
          }
          __s2 = (byte *)((ulong)local_80 | 1);
          if (((byte)local_80[0] & 1) != 0) {
            __s2 = local_70;
          }
          if ((bVar4 & 1) != 0) break;
          while( true ) {
            if (sVar1 == 0) goto LAB_00db39f0;
                    /* try { // try from 00db39b8 to 00eb39c3 has its CatchHandler @ 00db3eec */
            pbVar12 = pbVar12 + 1;
                    /* try { // try from 00db39c4 to 00eb39d7 has its CatchHandler @ 00db3ee8 */
            if (*pbVar12 != *__s2) break;
            sVar13 = sVar13 - 1;
            __s2 = __s2 + 1;
                    /* try { // try from 00db39d8 to 00eb39e3 has its CatchHandler @ 00db3f08 */
            sVar1 = sVar13;
          }
        }
      } while ((sVar1 != 0) && (iVar7 = memcmp(__s1,__s2,sVar1), iVar7 != 0));
LAB_00db39f0:
      lVar8 = *plVar14;
      *(RelativeLayoutParameter **)(this + 0x58) = pRVar9;
      goto joined_r0x00db3a50;
    }
  }
  lVar8 = 0;
  bVar6 = local_80[0];
joined_r0x00db3a50:
  if (((byte)bVar6 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

