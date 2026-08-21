
/* cocos2d::network::DownloaderAndroid::_onFinish(int, int, char const*,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&) */

void __thiscall
cocos2d::network::DownloaderAndroid::_onFinish
          (DownloaderAndroid *this,int param_1,int param_2,char *param_3,vector *param_4)

{
  __shared_weak_count *p_Var1;
  char *__s;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  size_t __n;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  __shared_weak_count *this_00;
  void *pvVar13;
  long lVar14;
  ulong local_a0;
  size_t local_98;
  void *local_90;
  int local_84;
  void *local_80 [3];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar7 = *(ulong *)(this + 0x88);
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    uVar9 = (ulong)param_1;
    if ((uVar8 & uVar7) == 0) {
      uVar10 = uVar8 & uVar9;
    }
    else {
      uVar10 = uVar9;
      if (uVar7 <= uVar9) {
        uVar10 = 0;
        if (uVar7 != 0) {
          uVar10 = uVar9 / uVar7;
        }
        uVar10 = uVar9 - uVar10 * uVar7;
      }
    }
    plVar11 = *(long **)(*(long *)(this + 0x80) + uVar10 * 8);
    if (plVar11 != (long *)0x0) {
      for (plVar11 = (long *)*plVar11; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
        uVar12 = plVar11[1];
        if (uVar12 == uVar9) {
          if (*(int *)(plVar11 + 2) == param_1) {
            if (plVar11 != (long *)0x0) {
                    /* try { // try from 009a7ae0 to 00aa7bc3 has its CatchHandler @ 009a791c */
              lVar14 = plVar11[3];
              __s = param_3;
              if (param_3 == (char *)0x0) {
                __s = "";
              }
              local_a0 = 0;
              local_98 = 0;
              local_90 = (void *)0x0;
              __n = strlen(__s);
              if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (__n < 0x17) {
                pvVar13 = (void *)((ulong)&local_a0 | 1);
                local_a0 = CONCAT71(local_a0._1_7_,(char)((int)__n << 1));
                if (__n != 0) goto LAB_009a7b5c;
              }
              else {
                uVar7 = __n + 0x10 & 0xfffffffffffffff0;
                pvVar13 = operator_new(uVar7);
                local_a0 = uVar7 | 1;
                    /* catch() { ... } // from try @ 009a799c with catch @ 009a7b54 */
                    /* catch() { ... } // from try @ 009a7990 with catch @ 009a7b58 */
                local_98 = __n;
                local_90 = pvVar13;
LAB_009a7b5c:
                    /* catch() { ... } // from try @ 009a7970 with catch @ 009a7b5c */
                memcpy(pvVar13,__s,__n);
              }
                    /* catch() { ... } // from try @ 009a79a8 with catch @ 009a7b6c */
              *(undefined1 *)((long)pvVar13 + __n) = 0;
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>>>
              ::remove(local_80,this + 0x80,plVar11);
              pvVar13 = local_80[0];
              local_80[0] = (void *)0x0;
              if (pvVar13 != (void *)0x0) {
                operator_delete(pvVar13);
              }
              uVar6 = 0xfffffffd;
              if (param_3 == (char *)0x0) {
                uVar6 = 0;
              }
              local_80[0] = (void *)CONCAT44(local_80[0]._4_4_,uVar6);
              plVar11 = *(long **)(this + 0x60);
              local_84 = param_2;
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_008589d0(0,*(undefined8 *)(lVar14 + 0x10));
              }
                    /* try { // try from 009a7bc4 to 00aa7c17 has its CatchHandler @ 009a7bc4
                       catch() { ... } // from try @ 009a7bc4 with catch @ 009a7bc4
                       catch() { ... } // from try @ 009a7d84 with catch @ 009a7bc4 */
              (**(code **)(*plVar11 + 0x30))
                        (plVar11,*(undefined8 *)(lVar14 + 0x10),local_80,&local_84,&local_a0,param_4
                        );
              this_00 = *(__shared_weak_count **)(lVar14 + 0x18);
              *(undefined8 *)(lVar14 + 0x10) = 0;
              *(undefined8 *)(lVar14 + 0x18) = 0;
              if (this_00 != (__shared_weak_count *)0x0) {
                p_Var1 = this_00 + 8;
                do {
                  lVar14 = *(long *)p_Var1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
                  if (bVar3) {
                    *(long *)p_Var1 = lVar14 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (lVar14 == 0) {
                  (**(code **)(*(long *)this_00 + 0x10))(this_00);
                  std::__ndk1::__shared_weak_count::__release_weak(this_00);
                }
              }
              if ((local_a0 & 1) != 0) {
                operator_delete(local_90);
              }
            }
            break;
          }
        }
        else {
          if ((uVar8 & uVar7) == 0) {
            uVar12 = uVar12 & uVar8;
          }
          else if (uVar7 <= uVar12) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = uVar12 / uVar7;
            }
            uVar12 = uVar12 - uVar4 * uVar7;
          }
          if (uVar12 != uVar10) break;
        }
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 009a7c18 to 00aa7c2f has its CatchHandler @ 009a7e00 */
  __stack_chk_fail();
}

