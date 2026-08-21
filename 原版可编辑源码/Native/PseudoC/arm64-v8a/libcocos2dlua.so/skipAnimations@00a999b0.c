
/* fairygui::Transition::skipAnimations() */

void __thiscall fairygui::Transition::skipAnimations(Transition *this)

{
  long lVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  Value aVStack_88 [16];
  long local_78;
  
                    /* try { // try from 00a999bc to 00b999eb has its CatchHandler @ 00a9a06c */
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar7 = *(long *)(this + 0x48);
  if (0 < (int)((ulong)(*(long *)(this + 0x50) - lVar7) >> 3)) {
                    /* try { // try from 00a999f8 to 00b99a0f has its CatchHandler @ 00a9a0fc */
    uVar11 = 0;
    uVar12 = (ulong)(*(long *)(this + 0x50) - lVar7) >> 3 & 0xffffffff;
    do {
      pfVar6 = *(float **)(lVar7 + uVar11 * 8);
                    /* try { // try from 00a99a1c to 00b99a33 has its CatchHandler @ 00a9a0d0 */
      if (((pfVar6[8] == 9.80909e-45) && (*pfVar6 <= *(float *)(this + 0xcc))) &&
         (*(char *)(*(long *)(pfVar6 + 0x12) + 5) == '\0')) {
        plVar9 = *(long **)(pfVar6 + 0x22);
                    /* try { // try from 00a99a40 to 00b99a57 has its CatchHandler @ 00a9a0a4 */
        (**(code **)(*plVar9 + 0x30))(aVStack_88,plVar9,5);
        iVar4 = cocos2d::Value::asInt(aVStack_88);
                    /* try { // try from 00a99a5c to 00b99a8f has its CatchHandler @ 00a9a098 */
        cocos2d::Value::~Value(aVStack_88);
        (**(code **)(*plVar9 + 0x30))(aVStack_88,plVar9,4);
        uVar5 = cocos2d::Value::asBool(aVStack_88);
        cocos2d::Value::~Value(aVStack_88);
        fVar16 = (float)(int)-(~uVar5 & 1);
                    /* try { // try from 00a99a9c to 00b99ab3 has its CatchHandler @ 00a9a0f8 */
        fVar15 = 0.0;
        uVar10 = uVar11;
        do {
          pfVar6 = *(float **)(*(long *)(this + 0x48) + uVar10 * 8);
                    /* try { // try from 00a99ac0 to 00b99ad7 has its CatchHandler @ 00a9a0cc */
          if ((pfVar6[8] == 9.80909e-45) && (*(long **)(pfVar6 + 0x22) == plVar9)) {
            fVar13 = *pfVar6;
            fVar14 = *(float *)(this + 0xcc);
            if (fVar13 <= fVar14) {
                    /* try { // try from 00a99ae4 to 00b99afb has its CatchHandler @ 00a9a0a0 */
              piVar8 = *(int **)(pfVar6 + 0x12);
              *(undefined1 *)((long)piVar8 + 5) = 1;
              if (*piVar8 == -1) {
                    /* try { // try from 00a99b2c to 00b99b43 has its CatchHandler @ 00a9a04c */
                bVar3 = 0.0 <= fVar16;
                if ((char)piVar8[1] == '\0') {
                  fVar2 = -1.0;
                  if (bVar3) {
                    /* try { // try from 00a99b50 to 00b99b67 has its CatchHandler @ 00a99ff8 */
                    fVar15 = fVar15 + (fVar13 - fVar16);
                  }
                  goto joined_r0x00a99b5c;
                }
                fVar2 = fVar16;
                fVar16 = fVar13;
                if (bVar3) goto joined_r0x00a99b5c;
              }
              else {
                fVar2 = -1.0;
                if ((char)piVar8[1] != '\0') {
                  fVar2 = fVar13;
                }
                fVar15 = 0.0;
                    /* try { // try from 00a99b08 to 00b99b1f has its CatchHandler @ 00a9a074 */
                iVar4 = *piVar8;
joined_r0x00a99b5c:
                fVar16 = fVar2;
              }
              if ((fVar14 <= fVar13) && (*(long **)(pfVar6 + 0x1c) != (long *)0x0)) {
                (**(code **)(**(long **)(pfVar6 + 0x1c) + 0x30))();
              }
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar12 != uVar10);
        if (0.0 <= fVar16) {
                    /* try { // try from 00a99b6c to 00b99bab has its CatchHandler @ 00a99ff0 */
          fVar15 = fVar15 + (*(float *)(this + 0xcc) - fVar16);
        }
        cocos2d::Value::Value(aVStack_88,0.0 <= fVar16);
        (**(code **)(*plVar9 + 0x38))(plVar9,4,aVStack_88);
        cocos2d::Value::~Value(aVStack_88);
        cocos2d::Value::Value(aVStack_88,iVar4);
                    /* try { // try from 00a99bb8 to 00b99bcf has its CatchHandler @ 00a9a0f4 */
        (**(code **)(*plVar9 + 0x38))(plVar9,5,aVStack_88);
        cocos2d::Value::~Value(aVStack_88);
        if (0.0 < fVar15) {
                    /* try { // try from 00a99bdc to 00b99bf3 has its CatchHandler @ 00a9a0c8 */
          cocos2d::Value::Value(aVStack_88,fVar15);
          (**(code **)(*plVar9 + 0x38))(plVar9,6,aVStack_88);
                    /* try { // try from 00a99c00 to 00b99c17 has its CatchHandler @ 00a9a09c */
          cocos2d::Value::~Value(aVStack_88);
        }
      }
      uVar11 = uVar11 + 1;
      if (uVar11 == uVar12) break;
      lVar7 = *(long *)(this + 0x48);
    } while( true );
  }
                    /* try { // try from 00a99c24 to 00b99c3b has its CatchHandler @ 00a9a070 */
  if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* try { // try from 00a99c48 to 00b99c5f has its CatchHandler @ 00a9a048 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

