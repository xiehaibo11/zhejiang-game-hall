
/* cocos2d::Sprite3D::getMeshArrayByName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

void cocos2d::Sprite3D::getMeshArrayByName(basic_string *param_1)

{
  size_t __n;
  size_t sVar1;
  undefined8 *puVar2;
  Mesh MVar3;
  byte bVar4;
  int iVar5;
  byte *in_x1;
  Mesh *__s2;
  vector<cocos2d::Mesh*,std::__ndk1::allocator<cocos2d::Mesh*>> *in_x8;
  ulong uVar6;
  Mesh *pMVar7;
  Mesh **ppMVar8;
  Mesh **ppMVar9;
  Mesh *pMVar10;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  ppMVar8 = *(Mesh ***)(param_1 + 0x350);
  ppMVar9 = *(Mesh ***)(param_1 + 0x358);
                    /* try { // try from 00d40734 to 00e4073b has its CatchHandler @ 00d4081c */
  if (ppMVar8 != ppMVar9) {
                    /* try { // try from 00d4073c to 00e4084b has its CatchHandler @ 00d40514 */
    do {
      pMVar10 = *ppMVar8;
      MVar3 = pMVar10[0x50];
      bVar4 = *in_x1;
      uVar6 = (ulong)((byte)MVar3 >> 1);
      __n = uVar6;
      if (((byte)MVar3 & 1) != 0) {
        __n = *(size_t *)(pMVar10 + 0x58);
      }
      sVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar1 = *(size_t *)(in_x1 + 8);
      }
      if (__n == sVar1) {
        pMVar7 = *(Mesh **)(pMVar10 + 0x60);
        if (((byte)MVar3 & 1) == 0) {
          pMVar7 = pMVar10 + 0x51;
        }
        __s2 = (Mesh *)(in_x1 + 1);
        if ((bVar4 & 1) != 0) {
          __s2 = *(Mesh **)(in_x1 + 0x10);
        }
        if (((byte)MVar3 & 1) == 0) {
          if (__n != 0) {
            pMVar7 = pMVar10 + 0x51;
            do {
              if (*pMVar7 != *__s2) goto LAB_00d4075c;
              uVar6 = uVar6 - 1;
              pMVar7 = pMVar7 + 1;
              __s2 = __s2 + 1;
            } while (uVar6 != 0);
          }
        }
        else if ((__n != 0) && (iVar5 = memcmp(pMVar7,__s2,__n), iVar5 != 0)) goto LAB_00d4075c;
        puVar2 = *(undefined8 **)(in_x8 + 8);
        if (puVar2 == *(undefined8 **)(in_x8 + 0x10)) {
          std::__ndk1::vector<cocos2d::Mesh*,std::__ndk1::allocator<cocos2d::Mesh*>>::
          __push_back_slow_path<cocos2d::Mesh*const&>(in_x8,ppMVar8);
        }
        else {
          *puVar2 = pMVar10;
          *(undefined8 **)(in_x8 + 8) = puVar2 + 1;
        }
      }
LAB_00d4075c:
      ppMVar8 = ppMVar8 + 1;
    } while (ppMVar8 != ppMVar9);
  }
  return;
}

