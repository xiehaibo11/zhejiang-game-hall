
/* dragonBones::ArmatureData::addAction(dragonBones::ActionData*, bool) */

void __thiscall
dragonBones::ArmatureData::addAction(ArmatureData *this,ActionData *param_1,bool param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  void *__src;
  size_t sVar5;
  ulong uVar6;
  
                    /* try { // try from 00d87d88 to 00e87d8f has its CatchHandler @ 00d87efc */
                    /* try { // try from 00d87d90 to 00e87d97 has its CatchHandler @ 00d87ef8 */
                    /* try { // try from 00d87d98 to 00e87da3 has its CatchHandler @ 00d87f40 */
  if (!param_2) {
                    /* try { // try from 00d87dbc to 00e87dc3 has its CatchHandler @ 00d87eec */
    puVar1 = *(undefined8 **)(this + 0xb0);
                    /* try { // try from 00d87dc4 to 00e87dcb has its CatchHandler @ 00d87ee8 */
    if (puVar1 != *(undefined8 **)(this + 0xb8)) {
      *puVar1 = param_1;
                    /* try { // try from 00d87dcc to 00e87dd3 has its CatchHandler @ 00d87ee4 */
      *(undefined8 **)(this + 0xb0) = puVar1 + 1;
      return;
    }
    __src = *(void **)(this + 0xa8);
    sVar5 = (long)puVar1 - (long)__src;
                    /* try { // try from 00d87e34 to 00e87e3b has its CatchHandler @ 00d87ebc */
    uVar6 = ((long)sVar5 >> 3) + 1;
                    /* try { // try from 00d87e3c to 00e87e3f has its CatchHandler @ 00d87f48 */
                    /* try { // try from 00d87e40 to 00e87e47 has its CatchHandler @ 00d87eb8 */
    if (uVar6 >> 0x3d != 0) goto LAB_00d87e6c;
    lVar3 = (long)*(undefined8 **)(this + 0xb8) - (long)__src;
                    /* try { // try from 00d87e48 to 00e87e4f has its CatchHandler @ 00d87eb4 */
                    /* try { // try from 00d87e50 to 00e87e57 has its CatchHandler @ 00d87eb0 */
    if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
      uVar4 = lVar3 >> 2;
                    /* try { // try from 00d87e58 to 00e87e5f has its CatchHandler @ 00d87eac */
      if (uVar6 <= uVar4) {
        uVar6 = uVar4;
      }
                    /* try { // try from 00d87e60 to 00e87e6b has its CatchHandler @ 00d87f40 */
      if (uVar6 != 0) {
        if (uVar6 >> 0x3d != 0) goto LAB_00d87e6c;
        goto LAB_00d87eb8;
      }
                    /* catch() { ... } // from try @ 00d87d3c with catch @ 00d87f18 */
      pvVar2 = (void *)0x0;
                    /* catch() { ... } // from try @ 00d87d24 with catch @ 00d87f1c */
    }
    else {
                    /* catch() { ... } // from try @ 00d87e48 with catch @ 00d87eb4 */
      uVar6 = 0x1fffffffffffffff;
LAB_00d87eb8:
                    /* catch() { ... } // from try @ 00d87e40 with catch @ 00d87eb8 */
                    /* catch() { ... } // from try @ 00d87e34 with catch @ 00d87ebc */
      pvVar2 = operator_new(uVar6 << 3);
                    /* catch() { ... } // from try @ 00d87e14 with catch @ 00d87ec0 */
    }
                    /* catch() { ... } // from try @ 00d87e0c with catch @ 00d87ec4 */
    puVar1 = (undefined8 *)((long)pvVar2 + ((long)sVar5 >> 3) * 8);
                    /* catch() { ... } // from try @ 00d87e04 with catch @ 00d87ec8 */
                    /* catch() { ... } // from try @ 00d87dfc with catch @ 00d87ecc */
                    /* catch() { ... } // from try @ 00d87df4 with catch @ 00d87ed0 */
    *puVar1 = param_1;
                    /* catch() { ... } // from try @ 00d87dec with catch @ 00d87ed4 */
    if (0 < (long)sVar5) {
                    /* catch() { ... } // from try @ 00d87de4 with catch @ 00d87ed8 */
                    /* catch() { ... } // from try @ 00d87ddc with catch @ 00d87edc */
                    /* catch() { ... } // from try @ 00d87dd4 with catch @ 00d87ee0 */
                    /* catch() { ... } // from try @ 00d87dcc with catch @ 00d87ee4 */
      memcpy(pvVar2,__src,sVar5);
    }
                    /* catch() { ... } // from try @ 00d87dc4 with catch @ 00d87ee8 */
    *(void **)(this + 0xa8) = pvVar2;
    *(undefined8 **)(this + 0xb0) = puVar1 + 1;
                    /* catch() { ... } // from try @ 00d87dbc with catch @ 00d87eec */
    *(void **)(this + 0xb8) = (void *)((long)pvVar2 + uVar6 * 8);
    goto joined_r0x00d87ef0;
  }
                    /* try { // try from 00d87da4 to 00e87dab has its CatchHandler @ 00d87f48 */
  puVar1 = *(undefined8 **)(this + 0x98);
                    /* try { // try from 00d87dac to 00e87db3 has its CatchHandler @ 00d87ef4 */
  if (puVar1 != *(undefined8 **)(this + 0xa0)) {
    *puVar1 = param_1;
                    /* try { // try from 00d87db4 to 00e87dbb has its CatchHandler @ 00d87ef0 */
    *(undefined8 **)(this + 0x98) = puVar1 + 1;
    return;
  }
  __src = *(void **)(this + 0x90);
                    /* try { // try from 00d87dec to 00e87df3 has its CatchHandler @ 00d87ed4 */
  sVar5 = (long)puVar1 - (long)__src;
                    /* try { // try from 00d87df4 to 00e87dfb has its CatchHandler @ 00d87ed0 */
  uVar6 = ((long)sVar5 >> 3) + 1;
                    /* try { // try from 00d87dfc to 00e87e03 has its CatchHandler @ 00d87ecc */
  if (uVar6 >> 0x3d != 0) {
LAB_00d87e6c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00d87e6c to 00e87e8f has its CatchHandler @ 00d87f48 */
    abort();
  }
  lVar3 = (long)*(undefined8 **)(this + 0xa0) - (long)__src;
                    /* try { // try from 00d87e04 to 00e87e0b has its CatchHandler @ 00d87ec8 */
                    /* try { // try from 00d87e0c to 00e87e13 has its CatchHandler @ 00d87ec4 */
  if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
    uVar4 = lVar3 >> 2;
                    /* try { // try from 00d87e14 to 00e87e1b has its CatchHandler @ 00d87ec0 */
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
                    /* try { // try from 00d87e1c to 00e87e33 has its CatchHandler @ 00d87f48 */
    if (uVar6 != 0) {
      if (uVar6 >> 0x3d != 0) goto LAB_00d87e6c;
      goto LAB_00d87e74;
    }
                    /* catch() { ... } // from try @ 00d87d54 with catch @ 00d87f10 */
    pvVar2 = (void *)0x0;
                    /* catch() { ... } // from try @ 00d87d4c with catch @ 00d87f14 */
  }
  else {
    uVar6 = 0x1fffffffffffffff;
LAB_00d87e74:
    pvVar2 = operator_new(uVar6 << 3);
  }
  puVar1 = (undefined8 *)((long)pvVar2 + ((long)sVar5 >> 3) * 8);
  *puVar1 = param_1;
                    /* try { // try from 00d87e90 to 00e87e93 has its CatchHandler @ 00d87ea8 */
  if (0 < (long)sVar5) {
                    /* try { // try from 00d87e94 to 00e87e97 has its CatchHandler @ 00d87f48 */
                    /* try { // try from 00d87e98 to 00e87e9f has its CatchHandler @ 00d87ea4 */
                    /* try { // try from 00d87ea0 to 00e88017 has its CatchHandler @ 00d86504 */
    memcpy(pvVar2,__src,sVar5);
  }
                    /* catch() { ... } // from try @ 00d87e98 with catch @ 00d87ea4 */
  *(void **)(this + 0x90) = pvVar2;
  *(undefined8 **)(this + 0x98) = puVar1 + 1;
                    /* catch() { ... } // from try @ 00d87e90 with catch @ 00d87ea8 */
  *(void **)(this + 0xa0) = (void *)((long)pvVar2 + uVar6 * 8);
                    /* catch() { ... } // from try @ 00d87e58 with catch @ 00d87eac */
joined_r0x00d87ef0:
                    /* catch() { ... } // from try @ 00d87db4 with catch @ 00d87ef0 */
  if (__src == (void *)0x0) {
                    /* try { // try from 00d87dd4 to 00e87ddb has its CatchHandler @ 00d87ee0 */
                    /* try { // try from 00d87ddc to 00e87de3 has its CatchHandler @ 00d87edc */
                    /* try { // try from 00d87de4 to 00e87deb has its CatchHandler @ 00d87ed8 */
    return;
  }
                    /* catch() { ... } // from try @ 00d87dac with catch @ 00d87ef4 */
                    /* catch() { ... } // from try @ 00d87d90 with catch @ 00d87ef8 */
                    /* catch() { ... } // from try @ 00d87d88 with catch @ 00d87efc */
                    /* catch() { ... } // from try @ 00d87d74 with catch @ 00d87f00 */
                    /* catch() { ... } // from try @ 00d87d6c with catch @ 00d87f04 */
                    /* catch() { ... } // from try @ 00d87d64 with catch @ 00d87f08 */
                    /* catch() { ... } // from try @ 00d87d5c with catch @ 00d87f0c */
  operator_delete(__src);
  return;
}

