
/* std::__ndk1::enable_if<__is_forward_iterator<cocos2d::Terrain::TerrainVertexData*>::value&&is_constructible<cocos2d::Terrain::TerrainVertexData,
   std::__ndk1::iterator_traits<cocos2d::Terrain::TerrainVertexData*>::reference>::value,
   void>::type std::__ndk1::vector<cocos2d::Terrain::TerrainVertexData,
   std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>
   >::assign<cocos2d::Terrain::TerrainVertexData*>(cocos2d::Terrain::TerrainVertexData*,
   cocos2d::Terrain::TerrainVertexData*) */

void __thiscall
std::__ndk1::
vector<cocos2d::Terrain::TerrainVertexData,std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>>
::assign<cocos2d::Terrain::TerrainVertexData*>
          (vector<cocos2d::Terrain::TerrainVertexData,std::__ndk1::allocator<cocos2d::Terrain::TerrainVertexData>>
           *this,TerrainVertexData *param_1,TerrainVertexData *param_2)

{
  TerrainVertexData *__src;
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  void *pvVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(this + 0x10);
  pvVar4 = *(void **)this;
  sVar3 = (long)param_2 - (long)param_1;
  uVar5 = (long)sVar3 >> 5;
                    /* try { // try from 00d4be20 to 00e4be23 has its CatchHandler @ 00d4c11c */
                    /* try { // try from 00d4be24 to 00e4be33 has its CatchHandler @ 00d4c118 */
  if ((ulong)(lVar1 - (long)pvVar4 >> 5) < uVar5) {
    if (pvVar4 != (void *)0x0) {
      *(void **)(this + 8) = pvVar4;
      operator_delete(pvVar4);
      lVar1 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
    }
    if (uVar5 >> 0x3b != 0) {
LAB_00d4be7c:
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(lVar1 >> 5) < 0x3ffffffffffffff) {
      uVar2 = lVar1 >> 4;
      if ((uVar5 <= uVar2) && (uVar5 = uVar2, uVar2 >> 0x3b != 0)) goto LAB_00d4be7c;
    }
    else {
      uVar5 = 0x7ffffffffffffff;
    }
    pvVar4 = operator_new(uVar5 * 0x20);
    *(void **)this = pvVar4;
    *(void **)(this + 8) = pvVar4;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar5 * 0x20);
    if (0 < (long)sVar3) {
      memcpy(pvVar4,param_1,sVar3);
      pvVar4 = (void *)((long)pvVar4 + sVar3);
    }
    *(void **)(this + 8) = pvVar4;
  }
  else {
                    /* try { // try from 00d4be84 to 00e4c08b has its CatchHandler @ 00d4c178 */
    uVar2 = *(long *)(this + 8) - (long)pvVar4 >> 5;
    __src = param_1 + (*(long *)(this + 8) - (long)pvVar4);
    if (uVar5 <= uVar2) {
      __src = param_2;
    }
    sVar3 = (long)__src - (long)param_1;
    if (sVar3 != 0) {
      memmove(pvVar4,param_1,sVar3);
    }
    if (uVar2 < uVar5) {
      pvVar4 = *(void **)(this + 8);
      sVar3 = (long)param_2 - (long)__src;
      if (0 < (long)sVar3) {
        memcpy(pvVar4,__src,sVar3);
        pvVar4 = (void *)((long)pvVar4 + sVar3);
      }
      *(void **)(this + 8) = pvVar4;
    }
    else {
      *(void **)(this + 8) = (void *)((long)pvVar4 + ((long)sVar3 >> 5) * 0x20);
    }
  }
  return;
}

