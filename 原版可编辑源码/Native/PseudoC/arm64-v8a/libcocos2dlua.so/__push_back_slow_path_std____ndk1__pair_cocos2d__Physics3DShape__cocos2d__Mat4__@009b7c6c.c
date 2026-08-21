
/* void std::__ndk1::vector<std::__ndk1::pair<cocos2d::Physics3DShape*, cocos2d::Mat4>,
   std::__ndk1::allocator<std::__ndk1::pair<cocos2d::Physics3DShape*, cocos2d::Mat4> >
   >::__push_back_slow_path<std::__ndk1::pair<cocos2d::Physics3DShape*, cocos2d::Mat4>
   >(std::__ndk1::pair<cocos2d::Physics3DShape*, cocos2d::Mat4>&&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::pair<cocos2d::Physics3DShape*,cocos2d::Mat4>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::Physics3DShape*,cocos2d::Mat4>>>
::__push_back_slow_path<std::__ndk1::pair<cocos2d::Physics3DShape*,cocos2d::Mat4>>
          (vector<std::__ndk1::pair<cocos2d::Physics3DShape*,cocos2d::Mat4>,std::__ndk1::allocator<std::__ndk1::pair<cocos2d::Physics3DShape*,cocos2d::Mat4>>>
           *this,pair *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  lVar4 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar9 = 0x38e38e38e38e38e;
  uVar1 = lVar4 * -0x71c71c71c71c71c7 + 1;
  if (0x38e38e38e38e38e < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
                    /* catch() { ... } // from try @ 009b7c50 with catch @ 009b7cc4 */
  lVar5 = *(long *)(this + 0x10) - *(long *)this >> 3;
                    /* try { // try from 009b7ce0 to 00ab7d5f has its CatchHandler @ 009b7ce0
                       catch() { ... } // from try @ 009b7ce0 with catch @ 009b7ce0
                       catch() { ... } // from try @ 009b7dfc with catch @ 009b7ce0 */
  if ((ulong)(lVar5 * -0x71c71c71c71c71c7) < 0x1c71c71c71c71c7) {
    uVar6 = lVar5 * 0x1c71c71c71c71c72;
    uVar9 = uVar1;
    if (uVar1 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_009b7d10;
    }
  }
  pvVar3 = operator_new(uVar9 * 0x48);
LAB_009b7d10:
  puVar10 = (undefined8 *)((long)pvVar3 + lVar4 * 8);
  *puVar10 = *(undefined8 *)param_1;
  cocos2d::Mat4::Mat4((Mat4 *)(puVar10 + 1),(Mat4 *)(param_1 + 8));
  puVar8 = *(undefined8 **)this;
  puVar2 = puVar10 + 9;
  puVar7 = *(undefined8 **)(this + 8);
  puVar11 = puVar8;
  if (*(undefined8 **)(this + 8) != puVar8) {
    do {
      puVar11 = puVar7 + -9;
      puVar10[-9] = *puVar11;
      cocos2d::Mat4::Mat4((Mat4 *)(puVar10 + -8),(Mat4 *)(puVar7 + -8));
      puVar10 = puVar10 + -9;
      puVar7 = puVar11;
    } while (puVar8 != puVar11);
    puVar8 = *(undefined8 **)this;
    puVar11 = *(undefined8 **)(this + 8);
                    /* try { // try from 009b7d60 to 00ab7d6f has its CatchHandler @ 009b7e80 */
  }
  *(undefined8 **)this = puVar10;
  *(undefined8 **)(this + 8) = puVar2;
                    /* try { // try from 009b7d74 to 00ab7d83 has its CatchHandler @ 009b7e7c */
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar9 * 0x48);
  for (; puVar11 != puVar8; puVar11 = puVar11 + -9) {
    cocos2d::Mat4::~Mat4((Mat4 *)(puVar11 + -8));
  }
  if (puVar8 != (undefined8 *)0x0) {
                    /* try { // try from 009b7d9c to 00ab7dcf has its CatchHandler @ 009b7e4c */
    operator_delete(puVar8);
    return;
  }
  return;
}

