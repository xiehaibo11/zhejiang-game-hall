
/* cocos2d::network::HttpURLConnection::saveResponseCookies(char const*, unsigned long) */

void __thiscall
cocos2d::network::HttpURLConnection::saveResponseCookies
          (HttpURLConnection *this,char *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  long *plVar5;
  HttpURLConnection *pHVar6;
  FILE *__s;
  HttpURLConnection *pHVar7;
  HttpURLConnection HVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined7 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 == (char *)0x0) {
    uVar4 = 0;
    goto LAB_00e98f60;
  }
  sVar3 = strlen(param_1);
  uVar4 = 0;
  if ((param_2 == 0) || (sVar3 == 0)) goto LAB_00e98f60;
  pHVar7 = this + 0x40;
  HVar8 = *pHVar7;
  if (((byte)HVar8 & 1) == 0) {
    if ((byte)HVar8 >> 1 == 0) {
LAB_00e98e78:
      plVar5 = (long *)FileUtils::getInstance();
      (**(code **)(*plVar5 + 0xa0))(local_80);
      pHVar6 = (HttpURLConnection *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append(local_80,"cookieFile.txt",0xe);
      uVar1 = *(undefined8 *)(pHVar6 + 0x10);
      HVar8 = *pHVar6;
      uStack_60 = (undefined7)((ulong)*(undefined8 *)(pHVar6 + 8) >> 8);
      uStack_68 = (undefined7)*(undefined8 *)(pHVar6 + 1);
      local_61 = (undefined1)((ulong)*(undefined8 *)(pHVar6 + 1) >> 0x38);
      *(undefined8 *)pHVar6 = 0;
      *(undefined8 *)(pHVar6 + 8) = 0;
      *(undefined8 *)(pHVar6 + 0x10) = 0;
      if (((byte)*pHVar7 & 1) == 0) {
        *(undefined2 *)pHVar7 = 0;
      }
      else {
        **(undefined1 **)(this + 0x50) = 0;
        *(undefined8 *)(this + 0x48) = 0;
        if (((byte)this[0x40] & 1) != 0) {
          operator_delete(*(void **)(this + 0x50));
          *(undefined8 *)(this + 0x40) = 0;
        }
      }
      this[0x40] = HVar8;
      *(ulong *)(this + 0x48) = CONCAT71(uStack_60,local_61);
      *(undefined8 *)(this + 0x50) = uVar1;
      *(ulong *)(this + 0x41) = CONCAT17(local_61,uStack_68);
      uStack_60 = 0;
      uStack_68 = 0;
      local_61 = 0;
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
        HVar8 = *pHVar7;
      }
    }
  }
  else if (*(long *)(this + 0x48) == 0) goto LAB_00e98e78;
  if (((byte)HVar8 & 1) == 0) {
    pHVar7 = this + 0x41;
  }
  else {
    pHVar7 = *(HttpURLConnection **)(this + 0x50);
  }
  __s = fopen((char *)pHVar7,"w");
  uVar4 = 0;
  if (__s != (FILE *)0x0) {
    fwrite(param_1,1,param_2,__s);
    fclose(__s);
    uVar4 = param_2;
  }
LAB_00e98f60:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

