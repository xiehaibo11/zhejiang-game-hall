
void FUN_00df8998(long param_1,undefined8 param_2,undefined8 *param_3)

{
  __shared_weak_count *p_Var1;
  AssetsManager *__s1;
  size_t sVar2;
  size_t sVar3;
  AssetsManager AVar4;
  AssetsManager AVar5;
  char cVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  char *pcVar11;
  AssetsManager *pAVar12;
  long lVar13;
  ulong uVar14;
  AssetsManager *pAVar15;
  AssetsManager *__s2;
  AssetsManager *this;
  basic_string *pbVar16;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_188 [8];
  __shared_weak_count *local_180;
  void *local_178;
  ulong local_170;
  undefined8 uStack_168;
  void *local_160;
  __murmur2_or_cityhash<unsigned_long,64ul> local_158 [8];
  size_t local_150;
  AssetsManager *local_148;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  this = *(AssetsManager **)(param_1 + 8);
  if (((byte)this[0x310] & 1) == 0) {
    pAVar12 = this + 0x311;
    uVar14 = (ulong)((byte)this[0x310] >> 1);
  }
  else {
    pAVar12 = *(AssetsManager **)(this + 800);
    uVar14 = *(ulong *)(this + 0x318);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  insert<char_const*>((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)(this + 0x310),pAVar12 + uVar14,*param_3,param_3[1]);
  cocos2d::extension::AssetsManager::getVersion(this);
  pAVar12 = local_148;
  AVar4 = this[0x310];
  uVar14 = (ulong)((byte)local_158[0] >> 1);
  sVar2 = uVar14;
  if (((byte)local_158[0] & 1) != 0) {
    sVar2 = local_150;
  }
  sVar3 = (ulong)((byte)AVar4 >> 1);
  if (((byte)AVar4 & 1) != 0) {
    sVar3 = *(size_t *)(this + 0x318);
  }
  if (sVar2 == sVar3) {
    __s2 = *(AssetsManager **)(this + 800);
    pAVar15 = (AssetsManager *)((ulong)local_158 | 1);
    __s1 = pAVar15;
    if (((byte)local_158[0] & 1) != 0) {
      __s1 = local_148;
    }
    if (((byte)AVar4 & 1) == 0) {
      __s2 = this + 0x311;
    }
    if (((byte)local_158[0] & 1) == 0) {
      if (sVar2 != 0) {
        do {
          if (*pAVar15 != *__s2) goto LAB_00df8a8c;
          uVar14 = uVar14 - 1;
          pAVar15 = pAVar15 + 1;
          __s2 = __s2 + 1;
        } while (uVar14 != 0);
        bVar8 = true;
                    /* try { // try from 00df8a84 to 00ef8a87 has its CatchHandler @ 00df8fa8 */
        goto joined_r0x00df8a90;
      }
      goto LAB_00df8aa0;
    }
    if (sVar2 != 0) {
      iVar9 = memcmp(__s1,__s2,sVar2);
      operator_delete(pAVar12);
      if (iVar9 == 0) goto LAB_00df8aa0;
      goto LAB_00df8b08;
    }
    operator_delete(local_148);
    plVar10 = *(long **)(this + 0x380);
joined_r0x00df8aa4:
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10,2);
    }
    cocos2d::extension::AssetsManager::setSearchPath(this);
  }
  else {
LAB_00df8a8c:
    bVar8 = false;
joined_r0x00df8a90:
    if (((byte)local_158[0] & 1) != 0) {
      operator_delete(local_148);
    }
    if (bVar8) {
LAB_00df8aa0:
      plVar10 = *(long **)(this + 0x380);
      goto joined_r0x00df8aa4;
    }
LAB_00df8b08:
    if (((byte)this[0x340] & 1) == 0) {
                    /* try { // try from 00df8b14 to 00ef8b57 has its CatchHandler @ 00df8fa4 */
      if ((byte)this[0x340] >> 1 != 0) {
LAB_00df8b18:
        if (((byte)this[0x328] & 1) == 0) {
          if ((byte)this[0x328] >> 1 != 0) {
LAB_00df8b40:
            plVar10 = (long *)cocos2d::FileUtils::getInstance();
            (**(code **)(*plVar10 + 0x138))(local_158,plVar10,(basic_string *)(this + 0x328));
            sVar2 = (ulong)((byte)local_158[0] >> 1);
            if (((byte)local_158[0] & 1) != 0) {
              sVar2 = local_150;
            }
            if (sVar2 == 4) {
              pAVar12 = (AssetsManager *)((ulong)local_158 | 1);
              if (((byte)local_158[0] & 1) != 0) {
                pAVar12 = local_148;
              }
                    /* try { // try from 00df8b90 to 00ef8bd7 has its CatchHandler @ 00df8fec */
              bVar8 = *(int *)pAVar12 != 0x70697a2e;
            }
            else {
              bVar8 = true;
            }
            if (((byte)local_158[0] & 1) != 0) {
              operator_delete(local_148);
            }
            if (!bVar8) {
              pcVar11 = (char *)cocos2d::UserDefault::getInstance();
                    /* try { // try from 00df8bd8 to 00ef8bfb has its CatchHandler @ 00df7f60 */
              pAVar12 = *(AssetsManager **)(this + 0x338);
              uVar14 = *(ulong *)(this + 0x330);
              if (((byte)this[0x328] & 1) == 0) {
                pAVar12 = this + 0x329;
                uVar14 = (ulong)((byte)this[0x328] >> 1);
              }
              std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                        (local_158,pAVar12,uVar14);
                    /* try { // try from 00df8bfc to 00ef8c07 has its CatchHandler @ 00df8fac */
              FUN_00df8418(local_158);
                    /* try { // try from 00df8c1c to 00ef8c23 has its CatchHandler @ 00df8fec */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>(local_188,(char *)local_158);
                    /* try { // try from 00df8c30 to 00ef8c37 has its CatchHandler @ 00df8f8c */
                    /* try { // try from 00df8c38 to 00ef8c83 has its CatchHandler @ 00df7f60 */
              cocos2d::UserDefault::getStringForKey(pcVar11);
              if (((byte)this[0x358] & 1) == 0) {
                *(undefined2 *)(this + 0x358) = 0;
              }
              else {
                **(undefined1 **)(this + 0x368) = 0;
                *(undefined8 *)(this + 0x360) = 0;
                if (((byte)this[0x358] & 1) != 0) {
                  operator_delete(*(void **)(this + 0x368));
                  *(undefined8 *)(this + 0x358) = 0;
                }
              }
              *(void **)(this + 0x368) = local_160;
              *(undefined8 *)(this + 0x360) = uStack_168;
              *(ulong *)(this + 0x358) = local_170;
                    /* try { // try from 00df8c84 to 00ef8ca3 has its CatchHandler @ 00df8fec */
              uStack_168 = 0;
              local_160 = (void *)0x0;
              local_170 = 0;
              if (((byte)local_188[0] & 1) != 0) {
                operator_delete(local_178);
              }
              AVar4 = this[0x358];
              AVar5 = this[0x310];
              uVar14 = (ulong)((byte)AVar4 >> 1);
              sVar2 = uVar14;
              if (((byte)AVar4 & 1) != 0) {
                sVar2 = *(size_t *)(this + 0x360);
              }
              sVar3 = (ulong)((byte)AVar5 >> 1);
              if (((byte)AVar5 & 1) != 0) {
                sVar3 = *(size_t *)(this + 0x318);
              }
              if (sVar2 == sVar3) {
                pAVar15 = *(AssetsManager **)(this + 0x368);
                pAVar12 = *(AssetsManager **)(this + 800);
                if (((byte)AVar4 & 1) == 0) {
                  pAVar15 = this + 0x359;
                }
                if (((byte)AVar5 & 1) == 0) {
                  pAVar12 = this + 0x311;
                }
                if (((byte)AVar4 & 1) == 0) {
                  if (sVar2 != 0) {
                    pAVar15 = this + 0x359;
                    do {
                      if (*pAVar15 != *pAVar12) goto LAB_00df8d20;
                      uVar14 = uVar14 - 1;
                      pAVar15 = pAVar15 + 1;
                      pAVar12 = pAVar12 + 1;
                    } while (uVar14 != 0);
                  }
                }
                else if ((sVar2 != 0) && (iVar9 = memcmp(pAVar15,pAVar12,sVar2), iVar9 != 0))
                goto LAB_00df8d20;
                cocos2d::extension::AssetsManager::downloadAndUncompress(this);
              }
              else {
LAB_00df8d20:
                FUN_007c1fb0(local_158,this + 0x2f8,"cocos2dx-update-temp-package.zip");
                pbVar16 = *(basic_string **)(this + 0x370);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_170,"");
                cocos2d::network::Downloader::createDownloadFileTask
                          (pbVar16,(basic_string *)(this + 0x328),(basic_string *)local_158);
                if (local_180 != (__shared_weak_count *)0x0) {
                  p_Var1 = local_180 + 8;
                  do {
                    lVar13 = *(long *)p_Var1;
                    cVar6 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
                    if (bVar8) {
                      *(long *)p_Var1 = lVar13 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (lVar13 == 0) {
                    (**(code **)(*(long *)local_180 + 0x10))(local_180);
                    std::__ndk1::__shared_weak_count::__release_weak(local_180);
                  }
                }
                if ((local_170 & 1) != 0) {
                  operator_delete(local_160);
                }
                if (((byte)local_158[0] & 1) != 0) {
                    /* try { // try from 00df8db4 to 00ef8dd3 has its CatchHandler @ 00df900c */
                  operator_delete(local_148);
                }
              }
              goto LAB_00df8ac4;
            }
          }
        }
        else if (*(long *)(this + 0x330) != 0) goto LAB_00df8b40;
      }
    }
    else if (*(long *)(this + 0x348) != 0) goto LAB_00df8b18;
  }
  this[0x388] = (AssetsManager)0x0;
LAB_00df8ac4:
  if (*(long *)(lVar7 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

