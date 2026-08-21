
/* cocos2d::TextureAtlas::resizeCapacity(long) */

undefined8 __thiscall cocos2d::TextureAtlas::resizeCapacity(TextureAtlas *this,long param_1)

{
  ushort uVar1;
  ushort uVar2;
  void *__s;
  void *__s_00;
  int iVar3;
  long lVar4;
  uint uVar5;
  size_t sVar6;
  void *__ptr;
  TextureAtlas *pTVar7;
  long lVar8;
  
  lVar8 = *(long *)(this + 0x48);
  if (lVar8 == param_1) {
    return 1;
  }
  pTVar7 = this + 0x40;
  lVar4 = *(long *)pTVar7;
  if (param_1 <= *(long *)pTVar7) {
    lVar4 = param_1;
  }
  *(long *)pTVar7 = lVar4;
  *(long *)(this + 0x48) = param_1;
                    /* try { // try from 00fee954 to 010ee973 has its CatchHandler @ 00fee9d4 */
  sVar6 = param_1 * 0x60;
  if (*(void **)(this + 0x58) == (void *)0x0) {
    __s = malloc(sVar6);
    if (__s != (void *)0x0) {
                    /* catch() { ... } // from try @ 00fee8b8 with catch @ 00fee9b8 */
      memset(__s,0,sVar6);
    }
  }
  else {
    __s = realloc(*(void **)(this + 0x58),sVar6);
                    /* try { // try from 00fee974 to 010ee9f7 has its CatchHandler @ 00fee830 */
    if ((__s != (void *)0x0) &&
       (lVar4 = *(long *)(this + 0x48) - lVar8, lVar4 != 0 && lVar8 <= *(long *)(this + 0x48))) {
      memset((void *)((long)__s + lVar8 * 0x60),0,lVar4 * 0x60);
    }
    *(undefined8 *)(this + 0x58) = 0;
  }
  sVar6 = *(long *)(this + 0x48) * 0xc;
  if (*(void **)(this + 0x28) == (void *)0x0) {
    __s_00 = malloc(sVar6);
    __ptr = __s;
    if (__s_00 == (void *)0x0) goto joined_r0x00feeb34;
    memset(__s_00,0,sVar6);
  }
  else {
                    /* catch() { ... } // from try @ 00fee954 with catch @ 00fee9d4 */
    __s_00 = realloc(*(void **)(this + 0x28),sVar6);
    if ((__s_00 != (void *)0x0) &&
       (lVar4 = *(long *)(this + 0x48) - lVar8, lVar4 != 0 && lVar8 <= *(long *)(this + 0x48))) {
      memset((void *)((long)__s_00 + lVar8 * 2),0,lVar4 * 0xc);
    }
    *(undefined8 *)(this + 0x28) = 0;
  }
  __ptr = __s_00;
  if ((__s != (void *)0x0) && (__ptr = (void *)0x0, __s_00 != (void *)0x0)) {
    lVar8 = *(long *)(this + 0x48);
    *(void **)(this + 0x58) = __s;
    *(void **)(this + 0x28) = __s_00;
    if (0 < lVar8) {
      lVar4 = 0;
      uVar5 = 5;
      do {
        iVar3 = (int)lVar4;
        *(short *)((long)__s_00 + (ulong)(uVar5 - 5) * 2) = (short)(iVar3 << 2);
        uVar1 = (ushort)(iVar3 << 2) | 1;
        *(ushort *)((long)__s_00 + (ulong)(uVar5 - 4) * 2) = uVar1;
        uVar2 = (ushort)(iVar3 << 2) | 2;
        *(ushort *)((long)__s_00 + (ulong)(uVar5 - 3) * 2) = uVar2;
        *(ushort *)((long)__s_00 + (ulong)(uVar5 - 2) * 2) = (ushort)(iVar3 << 2) | 3;
        lVar4 = lVar4 + 1;
        *(ushort *)((long)__s_00 + (ulong)(uVar5 - 1) * 2) = uVar2;
        *(ushort *)((long)__s_00 + (ulong)uVar5 * 2) = uVar1;
        uVar5 = uVar5 + 6;
      } while (lVar8 != lVar4);
    }
    GL::bindVAO(0);
    glBindBuffer(0x8892,*(undefined4 *)(this + 0x34));
    glBufferData(0x8892,*(long *)(this + 0x48) * 0x60,*(undefined8 *)(this + 0x58),0x88e8);
    glBindBuffer(0x8892,0);
    glBindBuffer(0x8893,*(undefined4 *)(this + 0x38));
    glBufferData(0x8893,*(long *)(this + 0x48) * 0xc,*(undefined8 *)(this + 0x28),0x88e4);
    glBindBuffer(0x8893,0);
    this[0x3c] = (TextureAtlas)0x1;
    return 1;
  }
  if (__s != (void *)0x0) {
    free(__s);
  }
joined_r0x00feeb34:
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (*(void **)(this + 0x58) != (void *)0x0) {
    free(*(void **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    free(*(void **)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
  }
  *(undefined8 *)pTVar7 = 0;
  *(undefined8 *)(this + 0x48) = 0;
  return 0;
}

