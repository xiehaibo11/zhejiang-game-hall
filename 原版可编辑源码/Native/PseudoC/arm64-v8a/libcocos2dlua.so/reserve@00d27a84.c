
/* std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,
   std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::
vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>
::reserve(vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>
          *this,ulong param_1)

{
  long lVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  
  puVar5 = *(undefined4 **)this;
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar5 >> 2) * -0x3333333333333333) < param_1) {
    if (0xccccccccccccccc < param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    puVar3 = *(undefined4 **)(this + 8);
    pvVar2 = operator_new(param_1 * 0x14);
    lVar1 = (long)pvVar2 + ((long)puVar3 - (long)puVar5);
    lVar6 = lVar1;
    if ((long)puVar3 - (long)puVar5 != 0) {
      do {
        puVar4 = puVar3 + -5;
        *(undefined4 *)(lVar6 + -0x14) = *puVar4;
        cocos2d::Quaternion::Quaternion((Quaternion *)(lVar6 + -0x10),(Quaternion *)(puVar3 + -4));
        lVar6 = lVar6 + -0x14;
        puVar3 = puVar4;
      } while (puVar5 != puVar4);
      puVar3 = *(undefined4 **)this;
      puVar5 = *(undefined4 **)(this + 8);
    }
    *(long *)this = lVar6;
    *(long *)(this + 8) = lVar1;
    *(void **)(this + 0x10) = (void *)((long)pvVar2 + param_1 * 0x14);
    for (; puVar5 != puVar3; puVar5 = puVar5 + -5) {
      cocos2d::Quaternion::~Quaternion((Quaternion *)(puVar5 + -4));
    }
    if (puVar3 != (undefined4 *)0x0) {
      operator_delete(puVar3);
      return;
    }
  }
  return;
}

