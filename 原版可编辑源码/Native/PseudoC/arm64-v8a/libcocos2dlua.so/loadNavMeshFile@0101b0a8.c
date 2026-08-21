
/* cocos2d::NavMesh::loadNavMeshFile() */

undefined4 __thiscall cocos2d::NavMesh::loadNavMeshFile(NavMesh *this)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  dtNavMesh *this_00;
  long lVar8;
  dtTileCacheAlloc *this_01;
  dtTileCacheCompressor *pdVar9;
  MeshProcess *this_02;
  uchar *__dest;
  dtCrowd *this_03;
  dtNavMeshQuery *this_04;
  undefined4 uVar10;
  uint uVar11;
  NavMeshAgent *local_c8;
  Data aDStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  float local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0101b0cc to 0111b0d3 has its CatchHandler @ 0101b184 */
  plVar5 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar5 + 0x28))(aDStack_c0,plVar5,this + 0x160);
  uVar6 = Data::isNull(aDStack_c0);
                    /* try { // try from 0101b0f0 to 0111b107 has its CatchHandler @ 0101b19c */
  if ((uVar6 & 1) == 0) {
    puVar7 = (undefined8 *)Data::getBytes(aDStack_c0);
    uStack_a8 = puVar7[1];
    local_b0 = *puVar7;
    uStack_98 = puVar7[3];
    uStack_a0 = puVar7[2];
                    /* try { // try from 0101b108 to 0111b12f has its CatchHandler @ 0101affc */
    uStack_88 = puVar7[5];
    local_90 = puVar7[4];
    uStack_78 = puVar7[7];
    local_80 = puVar7[6];
    uStack_5c = *(undefined8 *)((long)puVar7 + 0x54);
    uStack_70 = puVar7[8];
    bVar3 = (int)local_b0 == 0x54534554;
    uStack_60 = (undefined4)((ulong)*(undefined8 *)((long)puVar7 + 0x4c) >> 0x20);
    local_68 = (float)puVar7[9];
    local_64 = (undefined4)((ulong)puVar7[9] >> 0x20);
                    /* try { // try from 0101b130 to 0111b133 has its CatchHandler @ 0101b1e8 */
                    /* try { // try from 0101b134 to 0111b1b3 has its CatchHandler @ 0101affc */
    if ((bVar3) &&
       (local_b0._4_4_ = (int)((ulong)local_b0 >> 0x20), bVar3 = local_b0._4_4_ == 1, bVar3)) {
      this_00 = (dtNavMesh *)dtAllocNavMesh();
      *(dtNavMesh **)(this + 0x28) = this_00;
      if ((this_00 != (dtNavMesh *)0x0) &&
         (iVar4 = dtNavMesh::init(this_00,(dtNavMeshParams *)((ulong)&local_b0 | 0xc)), -1 < iVar4))
      {
        lVar8 = dtAllocTileCache();
        *(long *)(this + 0x40) = lVar8;
        if (lVar8 != 0) {
          this_01 = operator_new(0x20,(nothrow_t *)&std::nothrow);
          if (this_01 != (dtTileCacheAlloc *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0101b0cc with catch @ 0101b184
                        */
            LinearAllocator::LinearAllocator((LinearAllocator *)this_01,32000);
          }
          *(dtTileCacheAlloc **)(this + 0x48) = this_01;
          pdVar9 = operator_new(8,(nothrow_t *)&std::nothrow);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0101b030 with catch @ 0101b19c
                       catch(type#1 @ 00000000) { ... } // from try @ 0101b0f0 with catch @ 0101b19c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0101b054 with catch @ 0101b1a0
                        */
          if (pdVar9 != (dtTileCacheCompressor *)0x0) {
            *(undefined ***)pdVar9 = &PTR__dtTileCacheCompressor_017272a8;
          }
                    /* try { // try from 0101b1b4 to 0111b1b7 has its CatchHandler @ 0101b1e4 */
          *(dtTileCacheCompressor **)(this + 0x50) = pdVar9;
                    /* try { // try from 0101b1b8 to 0111b1fb has its CatchHandler @ 0101affc */
          this_02 = operator_new(0x10,(nothrow_t *)&std::nothrow);
          if (this_02 != (MeshProcess *)0x0) {
            MeshProcess::MeshProcess(this_02,*(GeomData **)(this + 0x60));
            this_01 = *(dtTileCacheAlloc **)(this + 0x48);
            pdVar9 = *(dtTileCacheCompressor **)(this + 0x50);
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0101b1b4 with catch @ 0101b1e4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0101b130 with catch @ 0101b1e8
                        */
          *(MeshProcess **)(this + 0x58) = this_02;
                    /* catch() { ... } // from try @ 0101b22c with catch @ 0101b1fc */
          iVar4 = dtTileCache::init(*(dtTileCache **)(this + 0x40),(dtTileCacheParams *)&uStack_88,
                                    this_01,pdVar9,(dtTileCacheMeshProcess *)this_02);
          if (-1 < iVar4) {
            if (0 < (int)uStack_a8) {
              iVar4 = 0;
              uVar11 = 0x5c;
              do {
                lVar8 = Data::getBytes(aDStack_c0);
                if (*(int *)(lVar8 + (ulong)uVar11) == 0) break;
                iVar1 = ((int *)(lVar8 + (ulong)uVar11))[1];
                if (iVar1 == 0) break;
                    /* catch() { ... } // from try @ 0101b224 with catch @ 0101b288 */
                __dest = (uchar *)dtAlloc(iVar1,0);
                if (__dest == (uchar *)0x0) break;
                lVar8 = Data::getBytes(aDStack_c0);
                memcpy(__dest,(void *)(lVar8 + (ulong)(uVar11 + 8)),(long)iVar1);
                local_c8 = (NavMeshAgent *)((ulong)local_c8 & 0xffffffff00000000);
                dtTileCache::addTile
                          (*(dtTileCache **)(this + 0x40),__dest,iVar1,'\x01',(uint *)&local_c8);
                if ((uint)local_c8 != 0) {
                  dtTileCache::buildNavMeshTile
                            (*(dtTileCache **)(this + 0x40),(uint)local_c8,
                             *(dtNavMesh **)(this + 0x28));
                }
                iVar4 = iVar4 + 1;
                uVar11 = iVar1 + uVar11 + 8;
              } while (iVar4 < (int)uStack_a8);
            }
            this_03 = (dtCrowd *)dtAllocCrowd();
            *(dtCrowd **)(this + 0x38) = this_03;
            dtCrowd::init(this_03,0x80,local_68,*(dtNavMesh **)(this + 0x28));
            this_04 = (dtNavMeshQuery *)dtAllocNavMeshQuery();
            *(dtNavMeshQuery **)(this + 0x30) = this_04;
            dtNavMeshQuery::init(this_04,*(dtNavMesh **)(this + 0x28),0x800);
            local_c8 = (NavMeshAgent *)0x0;
            std::__ndk1::
            vector<cocos2d::NavMeshAgent*,std::__ndk1::allocator<cocos2d::NavMeshAgent*>>::assign
                      ((vector<cocos2d::NavMeshAgent*,std::__ndk1::allocator<cocos2d::NavMeshAgent*>>
                        *)(this + 0x68),0x80,&local_c8);
            local_c8 = (NavMeshAgent *)0x0;
            std::__ndk1::
            vector<cocos2d::NavMeshObstacle*,std::__ndk1::allocator<cocos2d::NavMeshObstacle*>>::
            assign((vector<cocos2d::NavMeshObstacle*,std::__ndk1::allocator<cocos2d::NavMeshObstacle*>>
                    *)(this + 0x80),(long)uStack_5c._4_4_,(NavMeshObstacle **)&local_c8);
            uVar10 = 1;
            goto LAB_0101b220;
          }
        }
      }
    }
  }
  uVar10 = 0;
LAB_0101b220:
                    /* try { // try from 0101b224 to 0111b22b has its CatchHandler @ 0101b288 */
  Data::~Data(aDStack_c0);
                    /* try { // try from 0101b22c to 0111b2a3 has its CatchHandler @ 0101b1fc */
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

