
/* ClipperLib::FindSegment(ClipperLib::OutPt*&, bool, ClipperLib::IntPoint&, ClipperLib::IntPoint&)
    */

undefined8 ClipperLib::FindSegment(OutPt **param_1,bool param_2,IntPoint *param_3,IntPoint *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  OutPt *pOVar10;
  OutPt *pOVar11;
  
                    /* try { // try from 01031838 to 0113188f has its CatchHandler @ 01031838
                       catch() { ... } // from try @ 01031838 with catch @ 01031838
                       catch() { ... } // from try @ 010318b4 with catch @ 01031838
                       catch() { ... } // from try @ 01031920 with catch @ 01031838
                       catch() { ... } // from try @ 010319b8 with catch @ 01031838
                       catch() { ... } // from try @ 01031a08 with catch @ 01031838
                       catch() { ... } // from try @ 01031a58 with catch @ 01031838
                       catch() { ... } // from try @ 01031ac0 with catch @ 01031838
                       catch() { ... } // from try @ 01031b14 with catch @ 01031838
                       catch() { ... } // from try @ 01031b64 with catch @ 01031838
                       catch() { ... } // from try @ 01031bb4 with catch @ 01031838
                       catch() { ... } // from try @ 01031c04 with catch @ 01031838
                       catch() { ... } // from try @ 01031c54 with catch @ 01031838
                       catch() { ... } // from try @ 01031ca4 with catch @ 01031838
                       catch() { ... } // from try @ 01031cf4 with catch @ 01031838
                       catch() { ... } // from try @ 01031d44 with catch @ 01031838
                       catch() { ... } // from try @ 01031d94 with catch @ 01031838
                       catch() { ... } // from try @ 01031de4 with catch @ 01031838
                       catch() { ... } // from try @ 01031e34 with catch @ 01031838
                       catch() { ... } // from try @ 01031e84 with catch @ 01031838
                       catch() { ... } // from try @ 01031ed4 with catch @ 01031838
                       catch() { ... } // from try @ 01031f24 with catch @ 01031838
                       catch() { ... } // from try @ 01031f74 with catch @ 01031838
                       catch() { ... } // from try @ 01031fc4 with catch @ 01031838
                       catch() { ... } // from try @ 01032014 with catch @ 01031838
                       catch() { ... } // from try @ 01032064 with catch @ 01031838
                       catch() { ... } // from try @ 010320b4 with catch @ 01031838
                       catch() { ... } // from try @ 01032104 with catch @ 01031838
                       catch() { ... } // from try @ 01032154 with catch @ 01031838
                       catch() { ... } // from try @ 010321a4 with catch @ 01031838
                       catch() { ... } // from try @ 010321f4 with catch @ 01031838
                       catch() { ... } // from try @ 01032258 with catch @ 01031838
                       catch() { ... } // from try @ 010322ac with catch @ 01031838
                       catch() { ... } // from try @ 010322fc with catch @ 01031838
                       catch() { ... } // from try @ 0103234c with catch @ 01031838
                       catch() { ... } // from try @ 0103239c with catch @ 01031838
                       catch() { ... } // from try @ 010323ec with catch @ 01031838
                       catch() { ... } // from try @ 0103243c with catch @ 01031838
                       catch() { ... } // from try @ 0103248c with catch @ 01031838
                       catch() { ... } // from try @ 010324ec with catch @ 01031838
                       catch() { ... } // from try @ 0103253c with catch @ 01031838
                       catch() { ... } // from try @ 0103258c with catch @ 01031838
                       catch() { ... } // from try @ 010325dc with catch @ 01031838
                       catch() { ... } // from try @ 0103262c with catch @ 01031838
                       catch() { ... } // from try @ 0103267c with catch @ 01031838
                       catch() { ... } // from try @ 010326cc with catch @ 01031838
                       catch() { ... } // from try @ 0103271c with catch @ 01031838
                       catch() { ... } // from try @ 0103276c with catch @ 01031838
                       catch() { ... } // from try @ 010327d4 with catch @ 01031838
                       catch() { ... } // from try @ 01032808 with catch @ 01031838
                       catch() { ... } // from try @ 01032858 with catch @ 01031838
                       catch() { ... } // from try @ 010328c0 with catch @ 01031838
                       catch() { ... } // from try @ 010328f4 with catch @ 01031838
                       catch() { ... } // from try @ 01032924 with catch @ 01031838
                       catch() { ... } // from try @ 01032978 with catch @ 01031838
                       catch() { ... } // from try @ 010329ec with catch @ 01031838
                       catch() { ... } // from try @ 01032a20 with catch @ 01031838
                       catch() { ... } // from try @ 01032a70 with catch @ 01031838
                       catch() { ... } // from try @ 01032ac0 with catch @ 01031838
                       catch() { ... } // from try @ 01032b10 with catch @ 01031838
                       catch() { ... } // from try @ 01032f88 with catch @ 01031838
                       catch() { ... } // from try @ 01033098 with catch @ 01031838
                       catch() { ... } // from try @ 0103310c with catch @ 01031838
                       catch() { ... } // from try @ 01033194 with catch @ 01031838 */
  pOVar10 = *param_1;
  if (pOVar10 != (OutPt *)0x0) {
    uVar1 = *(undefined8 *)param_3;
    uVar5 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)param_4;
    uVar6 = *(undefined8 *)(param_4 + 8);
    pOVar11 = pOVar10;
    do {
                    /* try { // try from 01031890 to 011318b3 has its CatchHandler @ 01033354 */
      uVar3 = *(undefined8 *)(pOVar11 + 8);
      uVar7 = *(undefined8 *)(pOVar11 + 0x10);
      uVar4 = *(undefined8 *)(*(long *)(pOVar11 + 0x20) + 8);
      uVar8 = *(undefined8 *)(*(long *)(pOVar11 + 0x20) + 0x10);
                    /* try { // try from 010318b4 to 011318f7 has its CatchHandler @ 01031838 */
      uVar9 = SlopesEqual(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,param_2);
                    /* try { // try from 010318f8 to 0113191f has its CatchHandler @ 01033340 */
      if (((uVar9 & 1) != 0) &&
         (uVar9 = SlopesEqual(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,param_2), (uVar9 & 1) != 0)) {
                    /* try { // try from 01031920 to 01131993 has its CatchHandler @ 01031838 */
        uVar9 = GetOverlapSegment(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,param_3,param_4);
        if ((uVar9 & 1) != 0) {
          return 1;
        }
        pOVar11 = *param_1;
      }
      pOVar11 = *(OutPt **)(pOVar11 + 0x18);
      *param_1 = pOVar11;
    } while (pOVar11 != pOVar10);
  }
  return 0;
}

