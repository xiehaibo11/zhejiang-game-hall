
/* universe::Downloader2::DownloadJob::onFinish() */

void universe::Downloader2::DownloadJob::onFinish(void)

{
  size_t sVar1;
  char *__s1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  long in_x0;
  char *pcVar7;
  size_t sVar8;
  basic_string *pbVar9;
  basic_string *in_x1;
  basic_string *extraout_x1;
  long lVar10;
  long lVar11;
  char *__s2;
  byte local_60 [8];
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (*(FILE **)(in_x0 + 0xd0) != (FILE *)0x0) {
    fclose(*(FILE **)(in_x0 + 0xd0));
    *(undefined8 *)(in_x0 + 0xd0) = 0;
    in_x1 = extraout_x1;
  }
  if (*(char *)(in_x0 + 0x90) == '\0') {
    if ((*(byte *)(in_x0 + 0x50) & 1) == 0) {
      if (*(byte *)(in_x0 + 0x50) >> 1 != 0) {
LAB_00a00ec0:
                    /* try { // try from 00a00ec0 to 00b00ff7 has its CatchHandler @ 00a00aa8 */
                    /* catch() { ... } // from try @ 00a00c3c with catch @ 00a00ec8 */
        utils::CMD5Checksum::GetMD5((CMD5Checksum *)(in_x0 + 0x38),in_x1);
                    /* catch() { ... } // from try @ 00a00c2c with catch @ 00a00ed8 */
        bVar4 = *(byte *)(in_x0 + 0x50);
                    /* catch() { ... } // from try @ 00a00c10 with catch @ 00a00ee8 */
        sVar8 = (ulong)(local_60[0] >> 1);
        if ((local_60[0] & 1) != 0) {
          sVar8 = local_58;
        }
        sVar1 = (ulong)(bVar4 >> 1);
                    /* catch() { ... } // from try @ 00a00c00 with catch @ 00a00ef8 */
        if ((bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(in_x0 + 0x58);
        }
        if (sVar8 == sVar1) {
                    /* catch() { ... } // from try @ 00a00bec with catch @ 00a00f08 */
          __s2 = *(char **)(in_x0 + 0x60);
          pcVar7 = (char *)((ulong)local_60 | 1);
          __s1 = pcVar7;
          if ((local_60[0] & 1) != 0) {
            __s1 = local_50;
          }
          if ((bVar4 & 1) == 0) {
            __s2 = (char *)(in_x0 + 0x51);
          }
                    /* catch() { ... } // from try @ 00a00be0 with catch @ 00a00f20 */
          if ((local_60[0] & 1) != 0) {
            if ((sVar8 != 0) && (iVar6 = memcmp(__s1,__s2,sVar8), iVar6 != 0)) goto LAB_00a00fd4;
            goto LAB_00a01018;
          }
          if (sVar8 != 0) {
                    /* catch() { ... } // from try @ 00a00bcc with catch @ 00a00f28 */
            lVar10 = -(ulong)(local_60[0] >> 1);
            do {
                    /* catch() { ... } // from try @ 00a00ba4 with catch @ 00a00f2c */
                    /* catch() { ... } // from try @ 00a00b88 with catch @ 00a00f34 */
                    /* catch() { ... } // from try @ 00a00bac with catch @ 00a00f38 */
              if (*pcVar7 != *__s2) goto LAB_00a00fd4;
              pcVar7 = pcVar7 + 1;
              lVar10 = lVar10 + 1;
              __s2 = __s2 + 1;
            } while (lVar10 != 0);
          }
        }
        else {
LAB_00a00fd4:
          *(undefined1 *)(in_x0 + 0x90) = 4;
          pbVar9 = (basic_string *)CustomFileManager::getInstance();
          CustomFileManager::removeFile(pbVar9);
          pcVar7 = (char *)Translated::getInstance();
          if ((*(byte *)(in_x0 + 0x20) & 1) == 0) {
                    /* try { // try from 00a00ff8 to 00b01053 has its CatchHandler @ 00a00ff8
                       catch() { ... } // from try @ 00a00ff8 with catch @ 00a00ff8
                       catch() { ... } // from try @ 00a01268 with catch @ 00a00ff8
                       catch() { ... } // from try @ 00a01410 with catch @ 00a00ff8 */
            lVar10 = in_x0 + 0x21;
          }
          else {
            lVar10 = *(long *)(in_x0 + 0x30);
          }
          Translated::log(pcVar7,"Downloader2: job failed because md5 not match. url:%s",lVar10);
          if ((local_60[0] & 1) != 0) {
LAB_00a01018:
            operator_delete(local_50);
          }
        }
      }
    }
    else if (*(long *)(in_x0 + 0x58) != 0) goto LAB_00a00ec0;
  }
  else {
    pcVar7 = (char *)Translated::getInstance();
    if ((*(byte *)(in_x0 + 0x98) & 1) == 0) {
      lVar10 = in_x0 + 0x99;
    }
    else {
      lVar10 = *(long *)(in_x0 + 0xa8);
    }
    if ((*(byte *)(in_x0 + 0x20) & 1) == 0) {
      lVar11 = in_x0 + 0x21;
    }
    else {
      lVar11 = *(long *)(in_x0 + 0x30);
    }
    Translated::log(pcVar7,"Downloader2: job failed errorCode:%d, errorMsg:%s, url:%s",
                    (ulong)*(byte *)(in_x0 + 0x90),lVar10,lVar11);
  }
  bVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (in_x0 + 0x98);
  if (((byte)bVar2 & 1) == 0) {
    if ((byte)bVar2 >> 1 == 0) {
LAB_00a00e9c:
      if ((ulong)(long)*(char *)(in_x0 + 0x90) < 6) {
        pcVar7 = (&PTR_s_SUCCESS_01c6c9a8)[*(char *)(in_x0 + 0x90)];
      }
      else {
                    /* catch() { ... } // from try @ 00a00b7c with catch @ 00a00f50
                       catch() { ... } // from try @ 00a00e98 with catch @ 00a00f50 */
        pcVar7 = "";
      }
      sVar8 = strlen(pcVar7);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (in_x0 + 0x98),pcVar7,sVar8);
      cVar3 = *(char *)(in_x0 + 0x90);
      goto joined_r0x00a00e8c;
    }
  }
  else {
                    /* try { // try from 00a00e98 to 00b00ebf has its CatchHandler @ 00a00f50 */
    if (*(long *)(in_x0 + 0xa0) == 0) goto LAB_00a00e9c;
  }
  cVar3 = *(char *)(in_x0 + 0x90);
joined_r0x00a00e8c:
  if (cVar3 == '\0') {
    pcVar7 = (char *)Translated::getInstance();
    if ((*(byte *)(in_x0 + 0x38) & 1) == 0) {
                    /* catch() { ... } // from try @ 00a00b30 with catch @ 00a00f88 */
      lVar10 = in_x0 + 0x39;
                    /* catch() { ... } // from try @ 00a00b24 with catch @ 00a00f8c */
    }
    else {
                    /* catch() { ... } // from try @ 00a00b04 with catch @ 00a00f90 */
      lVar10 = *(long *)(in_x0 + 0x48);
    }
    Translated::log(pcVar7,"Downloader2: job success. file:%s",lVar10);
  }
                    /* catch() { ... } // from try @ 00a00b3c with catch @ 00a00fa0
                       catch() { ... } // from try @ 00a00c74 with catch @ 00a00fa0 */
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

