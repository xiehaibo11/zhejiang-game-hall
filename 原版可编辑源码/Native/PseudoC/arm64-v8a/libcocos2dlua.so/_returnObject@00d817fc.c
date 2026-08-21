
/* dragonBones::BaseObject::_returnObject(dragonBones::BaseObject*) */

void dragonBones::BaseObject::_returnObject(BaseObject *param_1)

{
  void *__src;
  uint uVar1;
  ulong uVar2;
  void *__dest;
  __tree_node_base *p_Var3;
  undefined8 *puVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  __tree_node_base *p_Var9;
  size_t __n;
  __tree_node_base *p_Var10;
  ulong uVar11;
  
                    /* try { // try from 00d81810 to 00e8181f has its CatchHandler @ 00d81a14 */
  uVar2 = (**(code **)(*(long *)param_1 + 0x18))();
                    /* try { // try from 00d81828 to 00e8183f has its CatchHandler @ 00d81a10 */
  if (DAT_01787770 == (undefined8 *)0x0) {
LAB_00d8186c:
    puVar5 = &_defaultMaxCount;
  }
  else {
    puVar4 = &DAT_01787770;
    puVar8 = DAT_01787770;
    do {
                    /* try { // try from 00d81844 to 00e8185b has its CatchHandler @ 00d81a0c */
      if ((ulong)puVar8[4] >= uVar2) {
        puVar4 = puVar8;
      }
      puVar8 = (undefined8 *)puVar8[(ulong)puVar8[4] < uVar2];
    } while (puVar8 != (undefined8 *)0x0);
                    /* try { // try from 00d81860 to 00e81877 has its CatchHandler @ 00d81a08 */
    if (((undefined8 **)puVar4 == &DAT_01787770) || (uVar2 < (ulong)puVar4[4])) goto LAB_00d8186c;
    puVar5 = (uint *)(puVar4 + 5);
  }
                    /* try { // try from 00d8187c to 00e81893 has its CatchHandler @ 00d81a04 */
  uVar1 = *puVar5;
  p_Var10 = (__tree_node_base *)&DAT_01787788;
  p_Var3 = p_Var10;
  if (DAT_01787788 == (__tree_node_base *)0x0) {
LAB_00d818f4:
    p_Var9 = operator_new(0x40);
                    /* try { // try from 00d818fc to 00e81917 has its CatchHandler @ 00d81a38 */
    *(ulong *)(p_Var9 + 0x20) = uVar2;
    *(undefined8 *)(p_Var9 + 0x28) = 0;
    *(undefined8 *)(p_Var9 + 0x30) = 0;
    *(undefined8 *)(p_Var9 + 0x38) = 0;
    *(undefined8 *)p_Var9 = 0;
    *(undefined8 *)(p_Var9 + 8) = 0;
    *(__tree_node_base **)(p_Var9 + 0x10) = p_Var3;
    *(__tree_node_base **)p_Var10 = p_Var9;
                    /* try { // try from 00d8191c to 00e81937 has its CatchHandler @ 00d81a34 */
    p_Var3 = p_Var9;
    if ((long *)*_poolsMap != (long *)0x0) {
      p_Var3 = *(__tree_node_base **)p_Var10;
      _poolsMap = (long *)*_poolsMap;
    }
                    /* try { // try from 00d8193c to 00e81957 has its CatchHandler @ 00d81a30 */
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (DAT_01787788,p_Var3);
    DAT_01787790 = DAT_01787790 + 1;
  }
  else {
    p_Var9 = DAT_01787788;
    p_Var10 = (__tree_node_base *)&DAT_01787788;
    do {
      while (p_Var3 = p_Var9, uVar2 < *(ulong *)(p_Var3 + 0x20)) {
                    /* try { // try from 00d81898 to 00e818b7 has its CatchHandler @ 00d81a00 */
        p_Var9 = *(__tree_node_base **)p_Var3;
        p_Var10 = p_Var3;
        if (*(__tree_node_base **)p_Var3 == (__tree_node_base *)0x0) {
          p_Var9 = *(__tree_node_base **)p_Var3;
          if (p_Var9 != (__tree_node_base *)0x0) goto LAB_00d8194c;
          goto LAB_00d818f4;
        }
      }
      if (uVar2 <= *(ulong *)(p_Var3 + 0x20)) break;
                    /* try { // try from 00d818b8 to 00e818fb has its CatchHandler @ 00d81a3c */
      p_Var10 = p_Var3 + 8;
      p_Var9 = *(__tree_node_base **)p_Var10;
    } while (*(__tree_node_base **)p_Var10 != (__tree_node_base *)0x0);
    p_Var9 = *(__tree_node_base **)p_Var10;
    if (p_Var9 == (__tree_node_base *)0x0) goto LAB_00d818f4;
  }
LAB_00d8194c:
  __src = *(void **)(p_Var9 + 0x28);
  puVar4 = *(undefined8 **)(p_Var9 + 0x30);
  __n = (long)puVar4 - (long)__src;
  uVar2 = (long)__n >> 3;
                    /* try { // try from 00d8195c to 00e81977 has its CatchHandler @ 00d81a2c */
  if (uVar1 <= uVar2) {
    if (param_1 == (BaseObject *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00d819ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 8))(param_1);
    return;
  }
  if (param_1[0xc] != (BaseObject)0x0) {
    return;
  }
  param_1[0xc] = (BaseObject)0x1;
                    /* try { // try from 00d81978 to 00e819af has its CatchHandler @ 00d81a40 */
  if (*(undefined8 **)(p_Var9 + 0x38) != puVar4) {
    *puVar4 = param_1;
    *(undefined8 **)(p_Var9 + 0x30) = puVar4 + 1;
    return;
  }
                    /* try { // try from 00d819b0 to 00e81a5b has its CatchHandler @ 00d81368 */
  uVar11 = uVar2 + 1;
  if (uVar11 >> 0x3d != 0) {
LAB_00d819e4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = (long)*(undefined8 **)(p_Var9 + 0x38) - (long)__src;
  if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
    uVar7 = lVar6 >> 2;
    if (uVar11 <= uVar7) {
      uVar11 = uVar7;
    }
    if (uVar11 == 0) {
      __dest = (void *)0x0;
      goto LAB_00d819f8;
    }
    if (uVar11 >> 0x3d != 0) goto LAB_00d819e4;
  }
  else {
    uVar11 = 0x1fffffffffffffff;
  }
  __dest = operator_new(uVar11 << 3);
LAB_00d819f8:
  puVar4 = (undefined8 *)((long)__dest + uVar2 * 8);
                    /* catch() { ... } // from try @ 00d81898 with catch @ 00d81a00 */
                    /* catch() { ... } // from try @ 00d8187c with catch @ 00d81a04 */
  *puVar4 = param_1;
                    /* catch() { ... } // from try @ 00d81860 with catch @ 00d81a08 */
  if (0 < (long)__n) {
                    /* catch() { ... } // from try @ 00d81844 with catch @ 00d81a0c */
                    /* catch() { ... } // from try @ 00d81828 with catch @ 00d81a10 */
                    /* catch() { ... } // from try @ 00d81810 with catch @ 00d81a14 */
                    /* catch() { ... } // from try @ 00d817e4 with catch @ 00d81a18 */
    memcpy(__dest,__src,__n);
  }
  *(void **)(p_Var9 + 0x28) = __dest;
  *(undefined8 **)(p_Var9 + 0x30) = puVar4 + 1;
  *(void **)(p_Var9 + 0x38) = (void *)((long)__dest + uVar11 * 8);
  if (__src == (void *)0x0) {
    return;
  }
                    /* catch() { ... } // from try @ 00d8195c with catch @ 00d81a2c */
                    /* catch() { ... } // from try @ 00d8193c with catch @ 00d81a30 */
                    /* catch() { ... } // from try @ 00d8191c with catch @ 00d81a34 */
                    /* catch() { ... } // from try @ 00d818fc with catch @ 00d81a38 */
                    /* catch() { ... } // from try @ 00d818b8 with catch @ 00d81a3c */
                    /* catch() { ... } // from try @ 00d81978 with catch @ 00d81a40 */
  operator_delete(__src);
  return;
}

