
/* cocos2d::Terrain::insertIndicesLOD(int*, int, unsigned short*, int) */

void __thiscall
cocos2d::Terrain::insertIndicesLOD
          (Terrain *this,int *param_1,int param_2,ushort *param_3,int param_4)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  void *__src;
  size_t __n;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uStack_74;
  undefined4 local_6c;
  undefined2 uStack_68;
  undefined2 uStack_66;
  long local_58;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 00d47114 to 00e4712f has its CatchHandler @ 00d47200 */
  local_58 = *(long *)(lVar2 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 2);
  uVar8 = *(undefined8 *)param_1;
                    /* try { // try from 00d47130 to 00e47197 has its CatchHandler @ 00d470a4 */
  uStack_74 = (undefined4)((ulong)uVar9 >> 0x20);
  uStack_68 = (undefined2)param_4;
  glGenBuffers(1,&local_6c);
  glBindBuffer(0x8893,local_6c);
  glBufferData(0x8893,-(ulong)((uint)param_4 >> 0x1f) & 0xfffffffe00000000 |
                      (ulong)(uint)param_4 << 1,param_3,0x88e4);
  puVar6 = *(undefined8 **)(this + 0x300);
  if (puVar6 != *(undefined8 **)(this + 0x308)) {
    *(ulong *)((long)puVar6 + 0x14) = CONCAT26(uStack_66,CONCAT24(uStack_68,local_6c));
    *(ulong *)((long)puVar6 + 0xc) = CONCAT44(param_2,uStack_74);
    puVar6[1] = uVar9;
    *puVar6 = uVar8;
    *(long *)(this + 0x300) = (long)puVar6 + 0x1c;
    goto LAB_00d47268;
  }
                    /* try { // try from 00d47198 to 00e471a3 has its CatchHandler @ 00d47214 */
  __src = *(void **)(this + 0x2f8);
                    /* try { // try from 00d471a4 to 00e4721b has its CatchHandler @ 00d470a4 */
  __n = (long)puVar6 - (long)__src;
  uVar7 = 0x924924924924924;
  uVar1 = ((long)__n >> 2) * 0x6db6db6db6db6db7 + 1;
  if (0x924924924924924 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = (long)*(undefined8 **)(this + 0x308) - (long)__src >> 2;
  if ((ulong)(lVar4 * 0x6db6db6db6db6db7) < 0x492492492492492) {
    uVar5 = lVar4 * -0x2492492492492492;
    uVar7 = uVar1;
                    /* catch() { ... } // from try @ 00d47114 with catch @ 00d47200 */
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) goto LAB_00d47208;
    pvVar3 = (void *)0x0;
  }
  else {
LAB_00d47208:
    pvVar3 = operator_new(uVar7 * 0x1c);
  }
                    /* catch() { ... } // from try @ 00d47198 with catch @ 00d47214 */
  puVar6 = (undefined8 *)((long)pvVar3 + ((long)__n >> 2) * 4);
  *(ulong *)((long)puVar6 + 0x14) = CONCAT26(uStack_66,CONCAT24(uStack_68,local_6c));
  *(ulong *)((long)puVar6 + 0xc) = CONCAT44(param_2,uStack_74);
  puVar6[1] = uVar9;
  *puVar6 = uVar8;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar6 - __n),__src,__n);
  }
  *(void **)(this + 0x2f8) = (void *)((long)puVar6 - __n);
  *(long *)(this + 0x300) = (long)puVar6 + 0x1c;
  *(void **)(this + 0x308) = (void *)((long)pvVar3 + uVar7 * 0x1c);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
LAB_00d47268:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(CONCAT26(uStack_66,CONCAT24(uStack_68,local_6c)));
}

