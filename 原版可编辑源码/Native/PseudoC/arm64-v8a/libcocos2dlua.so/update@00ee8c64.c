
/* cocos2d::ShatteredTiles3D::update(float) */

void cocos2d::ShatteredTiles3D::update(float param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  TiledGrid3DAction *in_x0;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  long local_48;
  
                    /* try { // try from 00ee8c64 to 00fe8c7f has its CatchHandler @ 00ee8dc4 */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (in_x0[0x6c] == (TiledGrid3DAction)0x0) {
    fVar7 = *(float *)(in_x0 + 0x58);
                    /* try { // try from 00ee8c9c to 00fe8ca3 has its CatchHandler @ 00ee8d74 */
    if (0.0 < fVar7) {
      param_1 = *(float *)(in_x0 + 0x5c);
                    /* try { // try from 00ee8ca4 to 00fe8e5f has its CatchHandler @ 00ee8bec */
      iVar5 = 0;
      fVar8 = 0.0;
      do {
        if (0.0 < param_1) {
          fVar7 = 0.0;
          iVar6 = 1;
          do {
            local_80 = fVar8;
            fStack_7c = fVar7;
            TiledGrid3DAction::getOriginalTile(in_x0);
            iVar4 = rand();
            iVar1 = *(int *)(in_x0 + 0x68) * 2;
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar4 / iVar1;
            }
            local_78 = local_78 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
            iVar4 = rand();
            iVar1 = *(int *)(in_x0 + 0x68) * 2;
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar4 / iVar1;
            }
            local_6c = local_6c + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
            iVar4 = rand();
                    /* catch() { ... } // from try @ 00ee8c9c with catch @ 00ee8d74 */
            iVar1 = *(int *)(in_x0 + 0x68) * 2;
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar4 / iVar1;
            }
            local_60 = local_60 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
            iVar4 = rand();
            iVar1 = *(int *)(in_x0 + 0x68) * 2;
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar4 / iVar1;
            }
            local_54 = local_54 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
            iVar4 = rand();
                    /* catch() { ... } // from try @ 00ee8c64 with catch @ 00ee8dc4 */
            iVar1 = *(int *)(in_x0 + 0x68) * 2;
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar4 / iVar1;
            }
            local_74 = local_74 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
                    /* catch() { ... } // from try @ 00ee8c58 with catch @ 00ee8de4 */
            iVar4 = rand();
            iVar1 = *(int *)(in_x0 + 0x68) * 2;
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar4 / iVar1;
            }
                    /* catch() { ... } // from try @ 00ee8c4c with catch @ 00ee8e04 */
            local_68 = local_68 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
            iVar4 = rand();
            iVar1 = *(int *)(in_x0 + 0x68) * 2;
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar4 / iVar1;
            }
                    /* catch() { ... } // from try @ 00ee8c40 with catch @ 00ee8e24 */
            local_5c = local_5c + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
            iVar4 = rand();
            iVar1 = *(int *)(in_x0 + 0x68) * 2;
                    /* catch() { ... } // from try @ 00ee8c34 with catch @ 00ee8e44 */
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar4 / iVar1;
            }
            local_50 = local_50 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
                    /* try { // try from 00ee8e60 to 00fe8ea3 has its CatchHandler @ 00ee8e60
                       catch() { ... } // from try @ 00ee8e60 with catch @ 00ee8e60
                       catch() { ... } // from try @ 00ee8f04 with catch @ 00ee8e60 */
            if (in_x0[0x6d] != (TiledGrid3DAction)0x0) {
              iVar4 = rand();
              iVar1 = *(int *)(in_x0 + 0x68) * 2;
              iVar2 = 0;
              if (iVar1 != 0) {
                iVar2 = iVar4 / iVar1;
              }
              local_70 = local_70 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
              iVar4 = rand();
              iVar1 = *(int *)(in_x0 + 0x68) * 2;
              iVar2 = 0;
              if (iVar1 != 0) {
                iVar2 = iVar4 / iVar1;
              }
                    /* try { // try from 00ee8ea4 to 00fe8eaf has its CatchHandler @ 00ee9064 */
              local_64 = local_64 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
                    /* try { // try from 00ee8eb0 to 00fe8ebb has its CatchHandler @ 00ee9044 */
              iVar4 = rand();
                    /* try { // try from 00ee8ebc to 00fe8ec7 has its CatchHandler @ 00ee9024 */
              iVar1 = *(int *)(in_x0 + 0x68) * 2;
              iVar2 = 0;
              if (iVar1 != 0) {
                iVar2 = iVar4 / iVar1;
              }
                    /* try { // try from 00ee8ec8 to 00fe8edf has its CatchHandler @ 00ee9004 */
              local_58 = local_58 + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
              iVar4 = rand();
              iVar1 = *(int *)(in_x0 + 0x68) * 2;
              iVar2 = 0;
              if (iVar1 != 0) {
                iVar2 = iVar4 / iVar1;
              }
                    /* try { // try from 00ee8efc to 00fe8f03 has its CatchHandler @ 00ee8fbc */
              local_4c = local_4c + (float)((iVar4 - iVar2 * iVar1) - *(int *)(in_x0 + 0x68));
                    /* try { // try from 00ee8f04 to 00fe907f has its CatchHandler @ 00ee8e60 */
            }
            local_80 = fVar8;
            fStack_7c = fVar7;
            TiledGrid3DAction::setTile(in_x0,(Vec2 *)&local_80,(Quad3 *)&local_78);
            param_1 = *(float *)(in_x0 + 0x5c);
            fVar7 = (float)iVar6;
            iVar6 = iVar6 + 1;
          } while (fVar7 < param_1);
          fVar7 = *(float *)(in_x0 + 0x58);
        }
        iVar5 = iVar5 + 1;
        fVar8 = (float)iVar5;
      } while (fVar8 < fVar7);
    }
    in_x0[0x6c] = (TiledGrid3DAction)0x1;
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}

