
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
  size_t sVar12;
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
LAB_009e85d4:
        utils::CMD5Checksum::GetMD5((CMD5Checksum *)(in_x0 + 0x38),in_x1);
        bVar4 = *(byte *)(in_x0 + 0x50);
        sVar12 = (size_t)(local_60[0] >> 1);
        sVar8 = sVar12;
        if ((local_60[0] & 1) != 0) {
          sVar8 = local_58;
        }
        sVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(in_x0 + 0x58);
        }
        if (sVar8 == sVar1) {
          __s2 = *(char **)(in_x0 + 0x60);
          pcVar7 = (char *)((ulong)local_60 | 1);
          __s1 = pcVar7;
          if ((local_60[0] & 1) != 0) {
            __s1 = local_50;
          }
          if ((bVar4 & 1) == 0) {
            __s2 = (char *)(in_x0 + 0x51);
          }
          if ((local_60[0] & 1) != 0) {
            if ((sVar8 != 0) && (iVar6 = memcmp(__s1,__s2,sVar8), iVar6 != 0)) goto LAB_009e86e4;
            goto LAB_009e8728;
          }
          while (sVar8 != 0) {
            if (*pcVar7 != *__s2) goto LAB_009e86e4;
            pcVar7 = pcVar7 + 1;
            __s2 = __s2 + 1;
            sVar12 = sVar12 - 1;
            sVar8 = sVar12;
          }
        }
        else {
LAB_009e86e4:
          *(undefined1 *)(in_x0 + 0x90) = 4;
          pbVar9 = (basic_string *)TanGaoXiong::getInstance();
          TanGaoXiong::removeFile(pbVar9);
          pcVar7 = (char *)Translated::getInstance();
          if ((*(byte *)(in_x0 + 0x20) & 1) == 0) {
            lVar10 = in_x0 + 0x21;
          }
          else {
            lVar10 = *(long *)(in_x0 + 0x30);
          }
          Translated::log(pcVar7,&DAT_012f4990,lVar10);
          if ((local_60[0] & 1) != 0) {
LAB_009e8728:
            operator_delete(local_50);
          }
        }
      }
    }
    else if (*(long *)(in_x0 + 0x58) != 0) goto LAB_009e85d4;
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
    Translated::log(pcVar7,0x12f49c6,(ulong)*(byte *)(in_x0 + 0x90),lVar10,lVar11);
  }
  bVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (in_x0 + 0x98);
  if (((byte)bVar2 & 1) == 0) {
    if ((byte)bVar2 >> 1 == 0) {
LAB_009e85b0:
      if ((ulong)(long)*(char *)(in_x0 + 0x90) < 6) {
        pcVar7 = (&PTR_s_SUCCESS_01275ecf_0x3c_016a0d88)[*(char *)(in_x0 + 0x90)];
      }
      else {
        pcVar7 = "";
      }
      sVar8 = strlen(pcVar7);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (in_x0 + 0x98),pcVar7,sVar8);
      cVar3 = *(char *)(in_x0 + 0x90);
      goto joined_r0x009e8684;
    }
  }
  else if (*(long *)(in_x0 + 0xa0) == 0) goto LAB_009e85b0;
  cVar3 = *(char *)(in_x0 + 0x90);
joined_r0x009e8684:
  if (cVar3 == '\0') {
    pcVar7 = (char *)Translated::getInstance();
    if ((*(byte *)(in_x0 + 0x38) & 1) == 0) {
      lVar10 = in_x0 + 0x39;
    }
    else {
      lVar10 = *(long *)(in_x0 + 0x48);
    }
    Translated::log(pcVar7,&LAB_012f4a00,lVar10);
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

