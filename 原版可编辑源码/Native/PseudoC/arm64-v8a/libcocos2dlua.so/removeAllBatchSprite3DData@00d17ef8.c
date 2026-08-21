
/* cocos2d::BatchSprite3DCache::removeAllBatchSprite3DData() */

void __thiscall cocos2d::BatchSprite3DCache::removeAllBatchSprite3DData(BatchSprite3DCache *this)

{
  undefined8 *puVar1;
  bool bVar2;
  void *pvVar3;
  BatchSprite3DCache *pBVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  void *pvVar8;
  MeshData *this_00;
  BatchSprite3DCache *pBVar9;
  void *pvVar10;
  
  pBVar9 = *(BatchSprite3DCache **)this;
  while (pBVar9 != this + 8) {
    plVar6 = *(long **)(pBVar9 + 0x40);
    if (plVar6 != (long *)0x0) {
      puVar7 = (undefined8 *)*plVar6;
      puVar1 = (undefined8 *)plVar6[1];
      if (puVar7 == puVar1) {
        plVar6[1] = (long)puVar7;
      }
      else {
        do {
          this_00 = (MeshData *)*puVar7;
          if (this_00 != (MeshData *)0x0) {
            MeshData::~MeshData(this_00);
            operator_delete(this_00);
          }
          puVar7 = puVar7 + 1;
        } while (puVar1 != puVar7);
        puVar7 = (undefined8 *)*plVar6;
        plVar6[1] = (long)puVar7;
      }
      if (puVar7 != (undefined8 *)0x0) {
        plVar6[1] = (long)puVar7;
        operator_delete(puVar7);
      }
      operator_delete(plVar6);
    }
    if (*(long **)(pBVar9 + 0x38) != (long *)0x0) {
      (**(code **)(**(long **)(pBVar9 + 0x38) + 8))();
    }
    puVar7 = *(undefined8 **)(pBVar9 + 0x48);
    if (puVar7 != (undefined8 *)0x0) {
      pvVar10 = (void *)*puVar7;
      if (pvVar10 != (void *)0x0) {
        pvVar8 = (void *)puVar7[1];
        pvVar3 = pvVar10;
        if (pvVar8 != pvVar10) {
          do {
            pvVar8 = (void *)((long)pvVar8 + -0x30);
            FUN_0090b07c(puVar7 + 2,pvVar8);
          } while (pvVar10 != pvVar8);
          pvVar3 = (void *)*puVar7;
        }
        puVar7[1] = pvVar10;
        operator_delete(pvVar3);
      }
      operator_delete(puVar7);
    }
    pBVar4 = *(BatchSprite3DCache **)(pBVar9 + 8);
    if (*(BatchSprite3DCache **)(pBVar9 + 8) == (BatchSprite3DCache *)0x0) {
      pBVar4 = pBVar9 + 0x10;
      bVar2 = *(BatchSprite3DCache **)*(BatchSprite3DCache **)pBVar4 != pBVar9;
      pBVar9 = *(BatchSprite3DCache **)pBVar4;
      if (bVar2) {
        do {
          lVar5 = *(long *)pBVar4;
          pBVar4 = (BatchSprite3DCache *)(lVar5 + 0x10);
          pBVar9 = *(BatchSprite3DCache **)pBVar4;
        } while (*(long *)pBVar9 != lVar5);
      }
    }
    else {
      do {
        pBVar9 = pBVar4;
        pBVar4 = *(BatchSprite3DCache **)pBVar9;
      } while (*(BatchSprite3DCache **)pBVar9 != (BatchSprite3DCache *)0x0);
    }
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::BatchSprite3DCache::BatchSprite3DData>>>
             *)this,*(__tree_node **)(this + 8));
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(BatchSprite3DCache **)this = this + 8;
  return;
}

