
/* cocos2d::network::DownloaderAndroid::_onFinish(int, int, char const*,
   std::__ndk1::vector<unsigned char, std::__ndk1::allocator<unsigned char> >&) */

void __thiscall
cocos2d::network::DownloaderAndroid::_onFinish
          (DownloaderAndroid *this,int param_1,int param_2,char *param_3,vector *param_4)

{
  __shared_weak_count *p_Var1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  __shared_weak_count *this_00;
  long lVar15;
  undefined2 uVar16;
  undefined8 uVar17;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  int local_74;
  void *local_70 [3];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  uVar9 = *(ulong *)(this + 0x88);
  if (uVar9 != 0) {
    uVar17 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar16 = NEON_uaddlv(uVar17,1);
    uVar10 = CONCAT62((int6)((ulong)uVar17 >> 0x10),uVar16) & 0xffffffff;
    uVar11 = (ulong)param_1;
    if (uVar10 < 2) {
      uVar12 = uVar9 - 1 & uVar11;
    }
    else {
      uVar12 = uVar11;
      if (uVar9 <= uVar11) {
        uVar12 = 0;
        if (uVar9 != 0) {
          uVar12 = uVar11 / uVar9;
        }
        uVar12 = uVar11 - uVar12 * uVar9;
      }
    }
    plVar13 = *(long **)(*(long *)(this + 0x80) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      do {
        uVar14 = plVar13[1];
        if (uVar14 == uVar11) {
          if ((int)plVar13[2] == param_1) {
            if (plVar13 != (long *)0x0) {
              lVar15 = plVar13[3];
              pcVar2 = param_3;
              if (param_3 == (char *)0x0) {
                pcVar2 = "";
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>(local_90,pcVar2);
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>>>
              ::remove(local_70,this + 0x80,plVar13);
              pvVar7 = local_70[0];
              local_70[0] = (void *)0x0;
              if (pvVar7 != (void *)0x0) {
                operator_delete(pvVar7);
              }
              uVar8 = 0xfffffffd;
              if (param_3 == (char *)0x0) {
                uVar8 = 0;
              }
              local_70[0] = (void *)CONCAT44(local_70[0]._4_4_,uVar8);
              plVar13 = *(long **)(this + 0x60);
              local_74 = param_2;
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4(0,*(undefined8 *)(lVar15 + 0x10));
              }
              (**(code **)(*plVar13 + 0x30))
                        (plVar13,*(undefined8 *)(lVar15 + 0x10),local_70,&local_74,local_90,param_4)
              ;
              this_00 = *(__shared_weak_count **)(lVar15 + 0x18);
              *(undefined8 *)(lVar15 + 0x10) = 0;
              *(undefined8 *)(lVar15 + 0x18) = 0;
              if (this_00 != (__shared_weak_count *)0x0) {
                p_Var1 = this_00 + 8;
                do {
                  lVar15 = *(long *)p_Var1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
                  if (bVar4) {
                    *(long *)p_Var1 = lVar15 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (lVar15 == 0) {
                  (**(code **)(*(long *)this_00 + 0x10))(this_00);
                  std::__ndk1::__shared_weak_count::__release_weak(this_00);
                }
              }
              if (((byte)local_90[0] & 1) != 0) {
                operator_delete(local_80);
              }
            }
            break;
          }
        }
        else {
          if (uVar10 < 2) {
            uVar14 = uVar14 & uVar9 - 1;
          }
          else if (uVar9 <= uVar14) {
            uVar5 = 0;
            if (uVar9 != 0) {
              uVar5 = uVar14 / uVar9;
            }
            uVar14 = uVar14 - uVar5 * uVar9;
          }
          if (uVar14 != uVar12) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

