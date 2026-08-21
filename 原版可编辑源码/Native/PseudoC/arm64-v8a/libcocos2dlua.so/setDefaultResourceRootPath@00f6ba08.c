
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
  ulong uVar8;
  long lVar9;
  long lVar10;
  FileUtils *pFVar11;
  FileUtils *pFVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  void *pvVar13;
  
  std::__ndk1::recursive_mutex::lock((recursive_mutex *)(this + 8));
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0xa0);
  bVar3 = *this_00;
  bVar4 = *param_1;
  uVar8 = (ulong)((byte)bVar3 >> 1);
  __n = uVar8;
  if (((byte)bVar3 & 1) != 0) {
    __n = *(size_t *)(this + 0xa8);
  }
  sVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 8);
  }
  if (__n == sVar1) {
    pFVar11 = *(FileUtils **)(this + 0xb0);
    pFVar12 = *(FileUtils **)(param_1 + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pFVar11 = this + 0xa1;
    }
    if (((byte)bVar4 & 1) == 0) {
      pFVar12 = (FileUtils *)(param_1 + 1);
    }
    if (((byte)bVar3 & 1) == 0) {
      if (__n != 0) {
        pFVar11 = this + 0xa1;
        do {
          if (*pFVar11 != *pFVar12) goto LAB_00f6bab8;
          uVar8 = uVar8 - 1;
          pFVar11 = pFVar11 + 1;
          pFVar12 = pFVar12 + 1;
        } while (uVar8 != 0);
      }
      goto LAB_00f6bc90;
    }
    if ((__n == 0) || (iVar6 = memcmp(pFVar11,pFVar12,__n), iVar6 == 0)) goto LAB_00f6bc90;
  }
LAB_00f6bab8:
  if (*(long *)(this + 0xd0) != 0) {
    puVar5 = *(void **)(this + 200);
    while (puVar5 != (void *)0x0) {
      pvVar13 = (void *)*puVar5;
      if ((*(byte *)(puVar5 + 5) & 1) != 0) {
        operator_delete((void *)puVar5[7]);
      }
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        operator_delete((void *)puVar5[4]);
      }
      operator_delete(puVar5);
      puVar5 = pvVar13;
    }
    lVar9 = *(long *)(this + 0xc0);
    *(undefined8 *)(this + 200) = 0;
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0xb8) + lVar10 * 8) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar9 != lVar10);
    }
    *(undefined8 *)(this + 0xd0) = 0;
  }
  if (*(long *)(this + 0xf8) != 0) {
    puVar5 = *(void **)(this + 0xf0);
    while (puVar5 != (void *)0x0) {
      pvVar13 = (void *)*puVar5;
      if ((*(byte *)(puVar5 + 5) & 1) != 0) {
        operator_delete((void *)puVar5[7]);
      }
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        operator_delete((void *)puVar5[4]);
      }
      operator_delete(puVar5);
      puVar5 = pvVar13;
    }
    lVar9 = *(long *)(this + 0xe8);
    *(undefined8 *)(this + 0xf0) = 0;
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0xe0) + lVar10 * 8) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar9 != lVar10);
    }
    *(undefined8 *)(this + 0xf8) = 0;
  }
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar8 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar8 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar2,uVar8);
  }
  bVar3 = *this_00;
  if (((byte)bVar3 & 1) == 0) {
    if ((byte)bVar3 >> 1 != 0) {
LAB_00f6bbd8:
      if (((byte)bVar3 & 1) == 0) {
        uVar8 = (ulong)((byte)bVar3 >> 1);
        pFVar12 = this + 0xa1;
      }
      else {
        uVar8 = *(ulong *)(this + 0xa8);
        pFVar12 = *(FileUtils **)(this + 0xb0);
      }
      if (pFVar12[uVar8 - 1] != (FileUtils)0x2f) {
        if (((byte)bVar3 & 1) == 0) {
          uVar8 = (ulong)((byte)bVar3 >> 1);
          uVar7 = 0x16;
          if (uVar8 != 0x16) goto LAB_00f6bc20;
LAB_00f6bc44:
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__grow_by
                    (this_00,uVar7,1,uVar7,uVar7,0,0);
          if (((byte)*this_00 & 1) != 0) goto LAB_00f6bc24;
LAB_00f6bc68:
          pFVar12 = this + 0xa1;
          *this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     )((char)uVar8 * '\x02' + '\x02');
        }
        else {
          uVar8 = *(ulong *)(this + 0xa8);
          uVar7 = (*(ulong *)(this + 0xa0) & 0xfffffffffffffffe) - 1;
          if (uVar8 == uVar7) goto LAB_00f6bc44;
LAB_00f6bc20:
          if (((byte)bVar3 & 1) == 0) goto LAB_00f6bc68;
LAB_00f6bc24:
          pFVar12 = *(FileUtils **)(this + 0xb0);
          *(ulong *)(this + 0xa8) = uVar8 + 1;
        }
        *(undefined2 *)(pFVar12 + uVar8) = 0x2f;
      }
    }
  }
  else if (*(long *)(this + 0xa8) != 0) goto LAB_00f6bbd8;
  (**(code **)(*(long *)this + 0x88))(this,this + 0x88);
LAB_00f6bc90:
  std::__ndk1::recursive_mutex::unlock((recursive_mutex *)(this + 8));
  return;
}

