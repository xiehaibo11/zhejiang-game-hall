
/* ClipperLib::ClipperBase::GetBounds() */

void ClipperLib::ClipperBase::GetBounds(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  long in_x0;
  long lVar5;
  long *in_x8;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  lVar6 = *(long *)(in_x0 + 0x10);
  if (lVar6 == 0) {
                    /* try { // try from 01032e64 to 01132e6b has its CatchHandler @ 010331cc */
    in_x8[1] = 0;
    *in_x8 = 0;
    in_x8[3] = 0;
    in_x8[2] = 0;
  }
  else {
                    /* try { // try from 01032d58 to 01132d73 has its CatchHandler @ 010331f8 */
    plVar7 = *(long **)(lVar6 + 8);
    lVar9 = *plVar7;
    lVar8 = plVar7[1];
    *in_x8 = lVar9;
    in_x8[1] = lVar8;
    in_x8[2] = lVar9;
    in_x8[3] = lVar8;
    lVar10 = lVar8;
    lVar11 = lVar9;
    while( true ) {
      plVar12 = *(long **)(lVar6 + 0x10);
      plVar13 = plVar7;
      do {
        lVar5 = *plVar13;
        bVar4 = lVar5 < lVar11;
        plVar3 = (long *)plVar13[0xe];
        plVar2 = plVar13;
        while (plVar1 = plVar3, plVar1 != (long *)0x0) {
          if (bVar4) {
            *in_x8 = lVar5;
            lVar11 = lVar5;
          }
          if (lVar9 < lVar5) {
            in_x8[2] = lVar5;
            lVar9 = lVar5;
          }
          lVar5 = *plVar1;
          bVar4 = lVar5 < lVar11;
          plVar2 = plVar1;
                    /* try { // try from 01032dc8 to 01132dcf has its CatchHandler @ 010331c8 */
          plVar3 = (long *)plVar1[0xe];
        }
        if (bVar4) {
                    /* try { // try from 01032df4 to 01132dfb has its CatchHandler @ 0103319c */
          *in_x8 = lVar5;
          lVar11 = lVar5;
        }
                    /* try { // try from 01032e00 to 01132e1b has its CatchHandler @ 010331cc */
        if (lVar9 < lVar5) {
          in_x8[2] = lVar5;
          lVar9 = lVar5;
        }
        lVar5 = plVar2[4];
        if (lVar5 < lVar11) {
          *in_x8 = lVar5;
          lVar11 = lVar5;
        }
                    /* try { // try from 01032e24 to 01132e2f has its CatchHandler @ 01033194 */
        if (lVar9 < lVar5) {
          in_x8[2] = lVar5;
          lVar9 = lVar5;
        }
                    /* try { // try from 01032e30 to 01132e53 has its CatchHandler @ 010331bc */
        lVar5 = plVar2[5];
        if (lVar5 < lVar8) {
          in_x8[1] = lVar5;
          lVar8 = lVar5;
        }
        bVar4 = plVar13 == plVar7;
        plVar13 = plVar12;
      } while (bVar4);
      lVar6 = *(long *)(lVar6 + 0x18);
      if (lVar6 == 0) break;
      plVar7 = *(long **)(lVar6 + 8);
      lVar5 = plVar7[1];
      if (lVar10 < lVar5) {
        in_x8[3] = lVar5;
        lVar10 = lVar5;
      }
    }
  }
  return;
}

