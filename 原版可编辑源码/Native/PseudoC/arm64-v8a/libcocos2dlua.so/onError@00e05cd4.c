
/* cocos2d::extension::AssetsManagerEx::onError(cocos2d::network::DownloadTask const&, int, int,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::extension::AssetsManagerEx::onError
          (AssetsManagerEx *this,DownloadTask *param_1,int param_2,int param_3,basic_string *param_4
          )

{
  size_t __n;
  size_t sVar1;
  basic_string bVar2;
  int iVar3;
  DownloadTask *pDVar4;
  ulong uVar5;
  DownloadTask *pDVar6;
  basic_string *pbVar7;
  ulong uVar8;
  
  pbVar7 = (basic_string *)(param_1 + 8);
  bVar2 = *pbVar7;
  uVar8 = (ulong)((byte)bVar2 >> 1);
  __n = uVar8;
  if (((byte)bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x10);
  }
  sVar1 = (ulong)(VERSION_ID >> 1);
  if ((VERSION_ID & 1) != 0) {
    sVar1 = DAT_01788b50;
  }
  if (__n == sVar1) {
    pDVar6 = *(DownloadTask **)(param_1 + 0x18);
    if (((byte)bVar2 & 1) == 0) {
      pDVar6 = param_1 + 9;
    }
    pDVar4 = DAT_01788b58;
    if ((VERSION_ID & 1) == 0) {
      pDVar4 = (DownloadTask *)&DAT_01788b49;
    }
    if (((byte)bVar2 & 1) == 0) {
      if (__n != 0) {
        pDVar6 = param_1 + 9;
        uVar5 = uVar8;
        do {
          if (*pDVar6 != *pDVar4) goto LAB_00e05d9c;
          uVar5 = uVar5 - 1;
          pDVar6 = pDVar6 + 1;
          pDVar4 = pDVar4 + 1;
        } while (uVar5 != 0);
      }
LAB_00e05e08:
      *(undefined4 *)(this + 0x50) = 4;
      downloadManifest(this);
      return;
    }
    if ((__n == 0) || (iVar3 = memcmp(pDVar6,pDVar4,__n), iVar3 == 0)) goto LAB_00e05e08;
  }
LAB_00e05d9c:
  sVar1 = (ulong)(MANIFEST_ID >> 1);
  if ((MANIFEST_ID & 1) != 0) {
    sVar1 = DAT_01788b68;
  }
  if (__n != sVar1) {
LAB_00e05e40:
    fileError(this,pbVar7,param_4,param_2,param_3);
    return;
  }
  pDVar6 = *(DownloadTask **)(param_1 + 0x18);
  if (((byte)bVar2 & 1) == 0) {
    pDVar6 = param_1 + 9;
  }
  pDVar4 = DAT_01788b70;
  if ((MANIFEST_ID & 1) == 0) {
    pDVar4 = (DownloadTask *)&DAT_01788b61;
  }
  if (((byte)bVar2 & 1) == 0) {
    if (__n != 0) {
      pDVar6 = param_1 + 9;
      do {
        if (*pDVar6 != *pDVar4) goto LAB_00e05e40;
        uVar8 = uVar8 - 1;
        pDVar6 = pDVar6 + 1;
        pDVar4 = pDVar4 + 1;
      } while (uVar8 != 0);
    }
  }
  else if ((__n != 0) && (iVar3 = memcmp(pDVar6,pDVar4,__n), iVar3 != 0)) goto LAB_00e05e40;
  dispatchUpdateEvent(this,1,pbVar7,param_4,param_2,param_3);
  *(undefined4 *)(this + 0x50) = 0xb;
  return;
}

