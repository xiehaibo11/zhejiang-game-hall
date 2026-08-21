
/* void std::__ndk1::vector<cocos2d::NavMeshDebugDraw::V3F_C4F,
   std::__ndk1::allocator<cocos2d::NavMeshDebugDraw::V3F_C4F>
   >::__push_back_slow_path<cocos2d::NavMeshDebugDraw::V3F_C4F
   const&>(cocos2d::NavMeshDebugDraw::V3F_C4F const&) */

void __thiscall
std::__ndk1::
vector<cocos2d::NavMeshDebugDraw::V3F_C4F,std::__ndk1::allocator<cocos2d::NavMeshDebugDraw::V3F_C4F>>
::__push_back_slow_path<cocos2d::NavMeshDebugDraw::V3F_C4F_const&>
          (vector<cocos2d::NavMeshDebugDraw::V3F_C4F,std::__ndk1::allocator<cocos2d::NavMeshDebugDraw::V3F_C4F>>
           *this,V3F_C4F *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar9;
  
  lVar4 = *(long *)(this + 8) - *(long *)this >> 2;
  uVar11 = 0x924924924924924;
  uVar1 = lVar4 * 0x6db6db6db6db6db7 + 1;
  if (0x924924924924924 < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this >> 2;
  if ((ulong)(lVar5 * 0x6db6db6db6db6db7) < 0x492492492492492) {
    uVar6 = lVar5 * -0x2492492492492492;
    uVar11 = uVar1;
                    /* catch() { ... } // from try @ 0101e18c with catch @ 0101e0f4 */
    if (uVar1 <= uVar6) {
      uVar11 = uVar6;
    }
    if (uVar11 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_0101e10c;
    }
  }
  pvVar3 = operator_new(uVar11 * 0x1c);
LAB_0101e10c:
  uVar7 = *(undefined8 *)param_1;
  puVar12 = (undefined8 *)((long)pvVar3 + lVar4 * 4);
  *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(param_1 + 8);
  *puVar12 = uVar7;
  cocos2d::Vec4::Vec4((Vec4 *)((long)puVar12 + 0xc),(Vec4 *)(param_1 + 0xc));
  puVar10 = *(undefined8 **)this;
  lVar4 = (long)puVar12 + 0x1c;
  puVar9 = *(undefined8 **)(this + 8);
  puVar8 = puVar10;
  if (*(undefined8 **)(this + 8) != puVar10) {
    do {
      puVar8 = (undefined8 *)((long)puVar9 + -0x1c);
      uVar2 = *(undefined4 *)((long)puVar9 + -0x14);
      *(undefined8 *)((long)puVar12 + -0x1c) = *puVar8;
      *(undefined4 *)((long)puVar12 + -0x14) = uVar2;
                    /* try { // try from 0101e158 to 0111e18b has its CatchHandler @ 0101e1ec */
      cocos2d::Vec4::Vec4((Vec4 *)(puVar12 + -2),(Vec4 *)(puVar9 + -2));
      puVar12 = (undefined8 *)((long)puVar12 + -0x1c);
      puVar9 = puVar8;
    } while (puVar10 != puVar8);
    puVar10 = *(undefined8 **)this;
    puVar8 = *(undefined8 **)(this + 8);
  }
  *(undefined8 **)this = puVar12;
  *(long *)(this + 8) = lVar4;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar11 * 0x1c);
  for (; puVar8 != puVar10; puVar8 = (undefined8 *)((long)puVar8 + -0x1c)) {
    cocos2d::Vec4::~Vec4((Vec4 *)(puVar8 + -2));
                    /* try { // try from 0101e18c to 0111e223 has its CatchHandler @ 0101e0f4 */
  }
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
    return;
  }
  return;
}

