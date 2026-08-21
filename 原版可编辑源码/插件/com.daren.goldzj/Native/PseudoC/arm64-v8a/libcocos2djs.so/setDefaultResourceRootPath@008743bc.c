
/* cocos2d::FileUtils::setDefaultResourceRootPath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::FileUtils::setDefaultResourceRootPath(FileUtils *this,basic_string *param_1)

{
  size_t __n;
  size_t sVar1;
  basic_string *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string bVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  FileUtils *pFVar10;
  FileUtils *pFVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  void *pvVar12;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x78);
  bVar3 = *this_00;
  bVar4 = *param_1;
  __n = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    __n = *(size_t *)(this + 0x80);
  }
  sVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  if (__n == sVar1) {
    pFVar10 = *(FileUtils **)(this + 0x88);
    pFVar11 = *(FileUtils **)(param_1 + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pFVar10 = this + 0x79;
    }
    if (((byte)bVar4 & 1) == 0) {
      pFVar11 = (FileUtils *)(param_1 + 1);
    }
    if (((byte)bVar3 & 1) == 0) {
      if (__n != 0) {
        pFVar10 = this + 0x79;
        lVar8 = -(ulong)((byte)bVar3 >> 1);
        do {
          if (*pFVar10 != *pFVar11) goto LAB_00874464;
          pFVar10 = pFVar10 + 1;
          lVar8 = lVar8 + 1;
          pFVar11 = pFVar11 + 1;
        } while (lVar8 != 0);
      }
      return;
    }
    if (__n == 0) {
      return;
    }
    iVar6 = memcmp(pFVar10,pFVar11,__n);
    if (iVar6 == 0) {
      return;
    }
  }
LAB_00874464:
  if (*(long *)(this + 0xa8) != 0) {
    puVar5 = *(void **)(this + 0xa0);
    while (puVar5 != (void *)0x0) {
      pvVar12 = (void *)*puVar5;
      if ((*(byte *)(puVar5 + 5) & 1) != 0) {
        operator_delete((void *)puVar5[7]);
      }
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        operator_delete((void *)puVar5[4]);
      }
      operator_delete(puVar5);
      puVar5 = pvVar12;
    }
    lVar8 = *(long *)(this + 0x98);
    *(undefined8 *)(this + 0xa0) = 0;
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x90) + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    *(undefined8 *)(this + 0xa8) = 0;
  }
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar7 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar7 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar7);
  }
  bVar3 = *this_00;
  if (((byte)bVar3 & 1) == 0) {
    if ((byte)bVar3 >> 1 == 0) goto LAB_00874558;
  }
  else if (*(long *)(this + 0x80) == 0) goto LAB_00874558;
  if (((byte)bVar3 & 1) == 0) {
    uVar7 = (ulong)((byte)bVar3 >> 1);
    pFVar11 = this + 0x79;
  }
  else {
    uVar7 = *(ulong *)(this + 0x80);
    pFVar11 = *(FileUtils **)(this + 0x88);
  }
  if (pFVar11[uVar7 - 1] != (FileUtils)0x2f) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(this_00,'/');
  }
LAB_00874558:
                    /* WARNING: Could not recover jumptable at 0x00874578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x78))(this,this + 0x60);
  return;
}

