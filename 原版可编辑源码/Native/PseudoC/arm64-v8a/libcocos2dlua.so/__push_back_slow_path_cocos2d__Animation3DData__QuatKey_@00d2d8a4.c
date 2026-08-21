
/* void std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,
   std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>
   >::__push_back_slow_path<cocos2d::Animation3DData::QuatKey>(cocos2d::Animation3DData::QuatKey&&)
    */

void __thiscall
std::__ndk1::
vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>
::__push_back_slow_path<cocos2d::Animation3DData::QuatKey>
          (vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>
           *this,QuatKey *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  lVar4 = *(long *)(this + 8) - *(long *)this >> 2;
  uVar9 = 0xccccccccccccccc;
  uVar1 = lVar4 * -0x3333333333333333 + 1;
  if (0xccccccccccccccc < uVar1) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this >> 2;
  if ((ulong)(lVar5 * -0x3333333333333333) < 0x666666666666666) {
    uVar6 = lVar5 * -0x6666666666666666;
    uVar9 = uVar1;
    if (uVar1 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 == 0) {
      pvVar3 = (void *)0x0;
      goto LAB_00d2d934;
    }
  }
  pvVar3 = operator_new(uVar9 * 0x14);
LAB_00d2d934:
  puVar10 = (undefined4 *)((long)pvVar3 + lVar4 * 4);
  *puVar10 = *(undefined4 *)param_1;
  cocos2d::Quaternion::Quaternion((Quaternion *)(puVar10 + 1),(Quaternion *)(param_1 + 4));
  puVar8 = *(undefined4 **)this;
  puVar2 = puVar10 + 5;
  puVar7 = *(undefined4 **)(this + 8);
  puVar11 = puVar8;
  if (*(undefined4 **)(this + 8) != puVar8) {
    do {
      puVar11 = puVar7 + -5;
      puVar10[-5] = *puVar11;
      cocos2d::Quaternion::Quaternion((Quaternion *)(puVar10 + -4),(Quaternion *)(puVar7 + -4));
      puVar10 = puVar10 + -5;
      puVar7 = puVar11;
    } while (puVar8 != puVar11);
    puVar8 = *(undefined4 **)this;
    puVar11 = *(undefined4 **)(this + 8);
  }
  *(undefined4 **)this = puVar10;
  *(undefined4 **)(this + 8) = puVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar9 * 0x14);
  for (; puVar11 != puVar8; puVar11 = puVar11 + -5) {
    cocos2d::Quaternion::~Quaternion((Quaternion *)(puVar11 + -4));
  }
  if (puVar8 != (undefined4 *)0x0) {
    operator_delete(puVar8);
    return;
  }
  return;
}

