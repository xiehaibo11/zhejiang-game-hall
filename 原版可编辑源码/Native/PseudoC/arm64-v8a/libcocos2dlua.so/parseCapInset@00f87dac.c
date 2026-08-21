
/* cocos2d::NinePatchImageParser::parseCapInset() const */

void cocos2d::NinePatchImageParser::parseCapInset(void)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long in_x0;
  int iVar7;
  int iVar8;
  int iVar9;
  Rect *in_x8;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  char *pcVar14;
  char cVar15;
  long lVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  Rect aRStack_68 [16];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  Rect::Rect(in_x8);
  cVar4 = *(char *)(in_x0 + 0x20);
  iVar3 = *(int *)(*(long *)(in_x0 + 8) + 0x38);
  lVar13 = *(long *)(*(long *)(in_x0 + 8) + 0x28);
  lVar11 = 0x18;
  if (cVar4 != '\0') {
    lVar11 = 0x1c;
  }
  iVar12 = (int)*(float *)(in_x0 + 0x14);
  iVar7 = (int)*(float *)(in_x0 + 0x10);
  iVar8 = (iVar7 + iVar3 * iVar12) * 4;
  lVar16 = (long)iVar8;
  iVar9 = (int)(*(float *)(in_x0 + 0x10) + (float)(int)*(float *)(in_x0 + lVar11));
  pfVar1 = (float *)(in_x0 + 0x1c);
  if (iVar9 < iVar7) {
    iVar10 = 0;
  }
  else {
    pcVar14 = (char *)(lVar13 + lVar16 + 3);
    iVar17 = 0;
    lVar11 = 0;
    iVar10 = 0;
    cVar15 = *pcVar14;
    do {
      cVar5 = pcVar14[iVar17];
      if (cVar5 != cVar15) {
        if (cVar5 == '\0') {
          if (cVar4 == '\0') goto LAB_00f87eb0;
          goto LAB_00f87e9c;
        }
        iVar10 = (int)lVar11;
      }
      lVar11 = lVar11 + 1;
      iVar17 = iVar17 + 4;
      cVar15 = cVar5;
    } while ((long)iVar7 + -1 + lVar11 < (long)iVar9);
  }
  lVar11 = 0;
  if (cVar4 != '\0') {
LAB_00f87e9c:
    lVar16 = (long)(iVar8 + (int)*pfVar1 * 4 + -4);
  }
LAB_00f87eb0:
  pfVar2 = pfVar1;
  if (cVar4 != '\0') {
    pfVar2 = (float *)(in_x0 + 0x18);
  }
  iVar8 = (int)(*(float *)(in_x0 + 0x14) + (float)(int)*pfVar2);
  if (iVar8 < iVar12) {
    iVar9 = 0;
  }
  else {
    pcVar14 = (char *)(lVar13 + lVar16 + 3);
    iVar7 = 0;
    lVar13 = 0;
    iVar9 = 0;
    cVar15 = *pcVar14;
    do {
      cVar5 = pcVar14[iVar7];
      if (cVar5 != cVar15) {
        if (cVar5 == '\0') goto LAB_00f87f48;
        iVar9 = (int)lVar13;
      }
      lVar13 = lVar13 + 1;
      iVar7 = iVar7 + iVar3 * 4;
      cVar15 = cVar5;
    } while ((long)iVar12 + -1 + lVar13 < (long)iVar8);
  }
  lVar13 = 0;
LAB_00f87f48:
  fVar18 = (float)iVar10;
  fVar21 = (float)(int)lVar11;
  fVar19 = (float)iVar9;
  fVar22 = (float)(int)lVar13;
  if (cVar4 == '\0') {
    fVar20 = fVar21 - fVar18;
    fVar21 = fVar22 - fVar19;
  }
  else {
    fVar20 = fVar22 - fVar19;
    fVar19 = *pfVar1 - fVar21;
    fVar21 = fVar21 - fVar18;
    fVar18 = fVar22;
  }
  Rect::Rect(aRStack_68,fVar18,fVar19,fVar20,fVar21);
  Rect::operator=(in_x8,aRStack_68);
  fVar22 = *(float *)in_x8;
  lVar11 = Director::getInstance();
  fVar18 = *(float *)(lVar11 + 0x1a0);
  fVar20 = *(float *)(in_x8 + 4);
  lVar11 = Director::getInstance();
  fVar19 = *(float *)(lVar11 + 0x1a0);
  fVar23 = *(float *)(in_x8 + 8);
  lVar11 = Director::getInstance();
  fVar21 = *(float *)(lVar11 + 0x1a0);
  fVar24 = *(float *)(in_x8 + 0xc);
  lVar11 = Director::getInstance();
  Rect::Rect(aRStack_68,fVar22 / fVar18,fVar20 / fVar19,fVar23 / fVar21,
             fVar24 / *(float *)(lVar11 + 0x1a0));
  Rect::operator=(in_x8,aRStack_68);
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

