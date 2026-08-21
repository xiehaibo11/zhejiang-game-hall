
/* cocos2d::Terrain::Triangle::getIntersectPoint(cocos2d::Ray const&, cocos2d::Vec3&) const */

void __thiscall
cocos2d::Terrain::Triangle::getIntersectPoint(Triangle *this,Ray *param_1,Vec3 *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  Vec3 aVStack_a8 [16];
  undefined8 local_98;
  float local_90;
  Vec3 aVStack_88 [16];
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00d4a7d0 to 00e4a7e7 has its CatchHandler @ 00d4aefc */
  fVar2 = (float)*(undefined8 *)this;
  fVar6 = (float)((ulong)*(undefined8 *)this >> 0x20);
  local_68 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xc) >> 0x20) - fVar6,
                      (float)*(undefined8 *)(this + 0xc) - fVar2);
  local_60 = *(float *)(this + 0x14) - *(float *)(this + 8);
  local_78 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) - fVar6,
                      (float)*(undefined8 *)(this + 0x18) - fVar2);
  local_70 = *(float *)(this + 0x20) - *(float *)(this + 8);
  Vec3::Vec3(aVStack_88);
                    /* try { // try from 00d4a814 to 00e4a827 has its CatchHandler @ 00d4af04 */
  Vec3::cross((Vec3 *)(param_1 + 0xc),(Vec3 *)&local_78,aVStack_88);
  fVar2 = (float)Vec3::dot((Vec3 *)&local_68,aVStack_88);
                    /* try { // try from 00d4a828 to 00e4a85f has its CatchHandler @ 00d4af10 */
  Vec3::Vec3((Vec3 *)&local_98);
  if (fVar2 <= 0.0) {
    uVar4 = *(undefined8 *)this;
    local_90 = *(float *)(this + 8);
    uVar5 = *(undefined8 *)param_1;
    fVar6 = *(float *)(param_1 + 8);
    fVar2 = -fVar2;
  }
  else {
    uVar4 = *(undefined8 *)param_1;
    local_90 = *(float *)(param_1 + 8);
    uVar5 = *(undefined8 *)this;
    fVar6 = *(float *)(this + 8);
  }
  local_98 = CONCAT44((float)((ulong)uVar4 >> 0x20) - (float)((ulong)uVar5 >> 0x20),
                      (float)uVar4 - (float)uVar5);
  local_90 = local_90 - fVar6;
  if (0.0001 <= fVar2) {
    fVar6 = (float)Vec3::dot((Vec3 *)&local_98,aVStack_88);
    uVar4 = 0;
    if ((0.0 <= fVar6) && (fVar6 <= fVar2)) {
      Vec3::Vec3(aVStack_a8);
      Vec3::cross((Vec3 *)&local_98,(Vec3 *)&local_68,aVStack_a8);
                    /* try { // try from 00d4a8f8 to 00e4a913 has its CatchHandler @ 00d4af00 */
      fVar3 = (float)Vec3::dot((Vec3 *)(param_1 + 0xc),aVStack_a8);
      uVar4 = 0;
      if ((0.0 <= fVar3) && (fVar6 + fVar3 <= fVar2)) {
                    /* try { // try from 00d4a918 to 00e4a91f has its CatchHandler @ 00d4aef8 */
        fVar6 = (float)Vec3::dot((Vec3 *)&local_78,aVStack_a8);
        fVar3 = *(float *)(param_1 + 0x14);
        fVar6 = (1.0 / fVar2) * fVar6;
        fVar2 = *(float *)(param_1 + 8);
        uVar4 = 1;
        *(ulong *)param_2 =
             CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20) * fVar6 +
                      (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                      (float)*(undefined8 *)(param_1 + 0xc) * fVar6 + (float)*(undefined8 *)param_1)
        ;
        *(float *)(param_2 + 8) = fVar6 * fVar3 + fVar2;
      }
    }
  }
  else {
    uVar4 = 0;
  }
                    /* try { // try from 00d4a890 to 00e4a8b3 has its CatchHandler @ 00d4aeb8 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

