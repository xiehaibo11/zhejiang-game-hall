
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
  long lVar5;
  DownloadTask *pDVar6;
  basic_string *pbVar7;
  ulong uVar8;
  
                    /* catch() { ... } // from try @ 00a68008 with catch @ 00a681c4 */
                    /* catch() { ... } // from try @ 00a67ffc with catch @ 00a681c8 */
                    /* catch() { ... } // from try @ 00a67fdc with catch @ 00a681cc */
                    /* catch() { ... } // from try @ 00a68014 with catch @ 00a681dc */
  pbVar7 = (basic_string *)(param_1 + 8);
  bVar2 = *pbVar7;
  uVar8 = (ulong)((byte)bVar2 >> 1);
  __n = uVar8;
  if (((byte)bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x10);
  }
  sVar1 = (ulong)(VERSION_ID >> 1);
  if ((VERSION_ID & 1) != 0) {
    sVar1 = DAT_01d38c30;
  }
  if (__n == sVar1) {
    pDVar6 = *(DownloadTask **)(param_1 + 0x18);
                    /* try { // try from 00a68234 to 00b68287 has its CatchHandler @ 00a68234
                       catch() { ... } // from try @ 00a68234 with catch @ 00a68234
                       catch() { ... } // from try @ 00a6839c with catch @ 00a68234 */
    if (((byte)bVar2 & 1) == 0) {
      pDVar6 = param_1 + 9;
    }
    pDVar4 = DAT_01d38c38;
    if ((VERSION_ID & 1) == 0) {
      pDVar4 = (DownloadTask *)&DAT_01d38c29;
    }
    if (((byte)bVar2 & 1) == 0) {
      if (__n != 0) {
        pDVar6 = param_1 + 9;
        lVar5 = -uVar8;
        do {
          if (*pDVar6 != *pDVar4) goto LAB_00a68288;
          pDVar6 = pDVar6 + 1;
          lVar5 = lVar5 + 1;
          pDVar4 = pDVar4 + 1;
        } while (lVar5 != 0);
      }
LAB_00a682f8:
      *(undefined4 *)(this + 0x30) = 5;
      downloadManifest(this);
      return;
    }
    if ((__n == 0) || (iVar3 = memcmp(pDVar6,pDVar4,__n), iVar3 == 0)) goto LAB_00a682f8;
  }
LAB_00a68288:
                    /* try { // try from 00a68288 to 00b6829f has its CatchHandler @ 00a68418 */
  sVar1 = (ulong)(MANIFEST_ID >> 1);
  if ((MANIFEST_ID & 1) != 0) {
    sVar1 = DAT_01d38c48;
  }
                    /* try { // try from 00a682a8 to 00b682b3 has its CatchHandler @ 00a68414 */
  if (__n != sVar1) {
LAB_00a68330:
    fileError(this,pbVar7,param_4,param_2,param_3);
    return;
  }
  pDVar6 = *(DownloadTask **)(param_1 + 0x18);
                    /* try { // try from 00a682b4 to 00b682bf has its CatchHandler @ 00a68410 */
  if (((byte)bVar2 & 1) == 0) {
    pDVar6 = param_1 + 9;
  }
  pDVar4 = DAT_01d38c50;
                    /* try { // try from 00a682c0 to 00b6839b has its CatchHandler @ 00a68428 */
  if ((MANIFEST_ID & 1) == 0) {
    pDVar4 = (DownloadTask *)&DAT_01d38c41;
  }
  if (((byte)bVar2 & 1) == 0) {
    if (__n != 0) {
      pDVar6 = param_1 + 9;
      lVar5 = -uVar8;
      do {
        if (*pDVar6 != *pDVar4) goto LAB_00a68330;
        pDVar6 = pDVar6 + 1;
        lVar5 = lVar5 + 1;
        pDVar4 = pDVar4 + 1;
      } while (lVar5 != 0);
    }
  }
  else if ((__n != 0) && (iVar3 = memcmp(pDVar6,pDVar4,__n), iVar3 != 0)) goto LAB_00a68330;
  dispatchUpdateEvent(this,1,pbVar7,param_4,param_2,param_3);
  *(undefined4 *)(this + 0x30) = 0xd;
                    /* try { // try from 00a6839c to 00b6847f has its CatchHandler @ 00a68234 */
  return;
}

