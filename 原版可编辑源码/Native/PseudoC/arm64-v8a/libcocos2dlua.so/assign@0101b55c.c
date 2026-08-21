
/* std::__ndk1::vector<cocos2d::NavMeshObstacle*, std::__ndk1::allocator<cocos2d::NavMeshObstacle*>
   >::assign(unsigned long, cocos2d::NavMeshObstacle* const&) */

void __thiscall
std::__ndk1::vector<cocos2d::NavMeshObstacle*,std::__ndk1::allocator<cocos2d::NavMeshObstacle*>>::
assign(vector<cocos2d::NavMeshObstacle*,std::__ndk1::allocator<cocos2d::NavMeshObstacle*>> *this,
      ulong param_1,NavMeshObstacle **param_2)

{
  NavMeshObstacle *pNVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0101b5b4 with catch @ 0101b56c
                       catch(type#1 @ 00000000) { ... } // from try @ 0101b61c with catch @ 0101b56c
                        */
  lVar5 = *(long *)(this + 0x10);
  puVar3 = *(undefined8 **)this;
  if ((ulong)(lVar5 - (long)puVar3 >> 3) < param_1) {
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 **)(this + 8) = puVar3;
                    /* try { // try from 0101b594 to 0111b59b has its CatchHandler @ 0101b604 */
      operator_delete(puVar3);
      lVar5 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (param_1 >> 0x3d != 0) {
LAB_0101b5d4:
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 0101b5b0 to 0111b5b3 has its CatchHandler @ 0101b64c */
                    /* try { // try from 0101b5b4 to 0111b617 has its CatchHandler @ 0101b56c */
    if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
      uVar7 = lVar5 >> 2;
      uVar6 = param_1;
      if ((param_1 <= uVar7) && (uVar6 = uVar7, uVar7 >> 0x3d != 0)) goto LAB_0101b5d4;
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0101b594 with catch @ 0101b604
                        */
      uVar6 = 0x1fffffffffffffff;
    }
    puVar4 = operator_new(uVar6 * 8);
                    /* try { // try from 0101b618 to 0111b61b has its CatchHandler @ 0101b648 */
    lVar5 = param_1 * 8;
                    /* try { // try from 0101b61c to 0111b65f has its CatchHandler @ 0101b56c */
    *(undefined8 **)(this + 0x10) = puVar4 + uVar6;
    puVar3 = puVar4 + param_1;
    *(undefined8 **)this = puVar4;
    *(undefined8 **)(this + 8) = puVar4;
    do {
      lVar5 = lVar5 + -8;
      *puVar4 = *param_2;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
    goto LAB_0101b6f8;
  }
  uVar7 = *(long *)(this + 8) - (long)puVar3 >> 3;
  uVar6 = uVar7;
  if (param_1 <= uVar7) {
    uVar6 = param_1;
  }
  if (uVar6 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0101b618 with catch @ 0101b648
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0101b5b0 with catch @ 0101b64c
                        */
    if ((3 < uVar6) &&
       (((undefined8 *)((long)param_2 + 1U) <= puVar3 || (puVar3 + uVar6 <= param_2)))) {
      pNVar1 = *param_2;
      uVar8 = uVar6 & 0xfffffffffffffffc;
      puVar4 = puVar3 + 2;
      uVar9 = uVar8;
      do {
        puVar4[-1] = pNVar1;
        puVar4[-2] = pNVar1;
        puVar4[1] = pNVar1;
        *puVar4 = pNVar1;
        uVar9 = uVar9 - 4;
        puVar4 = puVar4 + 4;
      } while (uVar9 != 0);
      bVar2 = uVar6 == uVar8;
      uVar6 = uVar6 - uVar8;
      puVar3 = puVar3 + uVar8;
      if (bVar2) goto LAB_0101b6a8;
    }
    do {
      uVar6 = uVar6 - 1;
      *puVar3 = *param_2;
      puVar3 = puVar3 + 1;
    } while (uVar6 != 0);
  }
LAB_0101b6a8:
  if (uVar7 < param_1) {
    puVar4 = *(undefined8 **)(this + 8);
    puVar3 = puVar4;
    if (param_1 - uVar7 != 0) {
      puVar3 = puVar4 + (param_1 - uVar7);
      lVar5 = param_1 * 8 + uVar7 * -8;
      do {
        lVar5 = lVar5 + -8;
        *puVar4 = *param_2;
        puVar4 = puVar4 + 1;
      } while (lVar5 != 0);
    }
    *(undefined8 **)(this + 8) = puVar3;
    return;
  }
  puVar3 = (undefined8 *)(*(long *)this + param_1 * 8);
LAB_0101b6f8:
  *(undefined8 **)(this + 8) = puVar3;
  return;
}

