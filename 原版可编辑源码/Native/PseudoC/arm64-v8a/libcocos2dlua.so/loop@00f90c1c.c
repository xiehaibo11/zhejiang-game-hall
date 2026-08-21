
/* WARNING: Removing unreachable block (ram,0x00f9103c) */
/* cocos2d::Console::loop() */

void __thiscall cocos2d::Console::loop(Console *this)

{
  char *__s1;
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  Console CVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  size_t __n;
  int *piVar11;
  Console *pCVar12;
  ulong uVar13;
  byte *pbVar14;
  int *piVar15;
  byte *pbVar16;
  int local_12c;
  int *local_128;
  int *local_120;
  int *piStack_118;
  timeval local_110;
  fd_set local_100;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  pCVar12 = this + 0x50;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)pCVar12 = 0;
  this[0xd0] = (Console)0x1;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  __FD_SET_chk(*(undefined4 *)(this + 0x24),pCVar12,0x80);
  iVar7 = *(int *)(this + 0x24);
  *(int *)(this + 0x28) = iVar7;
  if (this[0xd1] != (Console)0x0) {
LAB_00f910b0:
    piVar11 = *(int **)(this + 0x38);
    for (piVar9 = *(int **)(this + 0x30); piVar9 != piVar11; piVar9 = piVar9 + 1) {
      close(*piVar9);
    }
    iVar7 = close(*(int *)(this + 0x24));
    this[0xd0] = (Console)0x0;
    if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar7);
    }
    return;
  }
  do {
    local_100.fds_bits[5] = *(__fd_mask *)(this + 0x78);
    local_100.fds_bits[4] = *(__fd_mask *)(this + 0x70);
    local_100.fds_bits[7] = *(__fd_mask *)(this + 0x88);
    local_100.fds_bits[6] = *(__fd_mask *)(this + 0x80);
    local_100.fds_bits[1] = *(__fd_mask *)(this + 0x58);
    local_100.fds_bits[0] = *(__fd_mask *)pCVar12;
    local_100.fds_bits[3] = *(__fd_mask *)(this + 0x68);
    local_100.fds_bits[2] = *(__fd_mask *)(this + 0x60);
    local_100.fds_bits[0xd] = *(__fd_mask *)(this + 0xb8);
    local_100.fds_bits[0xc] = *(__fd_mask *)(this + 0xb0);
    local_100.fds_bits[0xf] = *(__fd_mask *)(this + 200);
    local_100.fds_bits[0xe] = *(__fd_mask *)(this + 0xc0);
    local_100.fds_bits[9] = *(__fd_mask *)(this + 0x98);
    local_100.fds_bits[8] = *(__fd_mask *)(this + 0x90);
    local_100.fds_bits[0xb] = *(__fd_mask *)(this + 0xa8);
    local_100.fds_bits[10] = *(__fd_mask *)(this + 0xa0);
    local_110.tv_usec = 0;
    local_110.tv_sec = 1;
    iVar7 = select(iVar7 + 1,&local_100,(fd_set *)0x0,(fd_set *)0x0,&local_110);
    if (iVar7 == 0) {
LAB_00f90e60:
      if ((*(long *)(this + 0x130) != *(long *)(this + 0x138)) &&
         (uVar10 = std::__ndk1::mutex::try_lock((mutex *)(this + 0x104)), (uVar10 & 1) != 0)) {
        pbVar14 = *(byte **)(this + 0x130);
        pbVar1 = *(byte **)(this + 0x138);
        if (pbVar14 != pbVar1) {
          do {
            piVar9 = *(int **)(this + 0x30);
            piVar11 = *(int **)(this + 0x38);
            if (piVar9 != piVar11) {
              do {
                iVar7 = *piVar9;
                if ((*pbVar14 & 1) == 0) {
                  uVar10 = (ulong)(*pbVar14 >> 1);
                  pbVar16 = pbVar14 + 1;
                }
                else {
                  uVar10 = *(ulong *)(pbVar14 + 8);
                  pbVar16 = *(byte **)(pbVar14 + 0x10);
                }
                uVar13 = (ulong)(Utility::_prompt >> 1);
                if ((Utility::_prompt & 1) != 0) {
                  uVar13 = DAT_0178fc00;
                }
                if (uVar13 == uVar10) {
                  __s1 = DAT_0178fc08;
                  if ((Utility::_prompt & 1) == 0) {
                    __s1 = &DAT_0178fbf9;
                  }
                  iVar8 = strncmp(__s1,(char *)pbVar16,uVar10);
                  if (iVar8 != 0) goto LAB_00f90f40;
                  fwrite("bad parameter error: a buffer is the prompt string.\n",0x34,1,
                         (FILE *)pthread_rwlock_tryrdlock);
                }
                else {
LAB_00f90f40:
                  if (uVar10 != 0) {
                    uVar13 = 0;
                    do {
                      __n = uVar10 - uVar13;
                      if (0x1ff < __n) {
                        __n = 0x200;
                      }
                      sendto(iVar7,pbVar16 + uVar13,__n,0,(sockaddr *)0x0,0);
                      uVar13 = __n + uVar13;
                    } while (uVar13 < uVar10);
                  }
                }
                piVar9 = piVar9 + 1;
              } while (piVar9 != piVar11);
            }
            pbVar14 = pbVar14 + 0x18;
          } while (pbVar14 != pbVar1);
          pbVar14 = *(byte **)(this + 0x130);
          pbVar1 = *(byte **)(this + 0x138);
          if (pbVar1 != pbVar14) {
            bVar3 = pbVar1[-0x18];
            pbVar16 = pbVar1 + -0x18;
            while( true ) {
              if ((bVar3 & 1) != 0) {
                operator_delete(*(void **)(pbVar1 + -8));
              }
              if (pbVar14 == pbVar16) break;
              bVar3 = pbVar16[-0x18];
              pbVar1 = pbVar16;
              pbVar16 = pbVar16 + -0x18;
            }
          }
        }
        *(byte **)(this + 0x138) = pbVar14;
        std::__ndk1::mutex::unlock((mutex *)(this + 0x104));
      }
LAB_00f910a0:
      CVar4 = this[0xd1];
    }
    else {
      if (iVar7 != -1) {
        iVar8 = __FD_ISSET_chk(*(undefined4 *)(this + 0x24),&local_100,0x80);
        if (iVar8 != 0) {
          addClient(this);
          if (iVar7 < 2) goto LAB_00f910a0;
          iVar7 = iVar7 + -1;
        }
        local_120 = (int *)0x0;
        piStack_118 = (int *)0x0;
        local_128 = (int *)0x0;
        piVar11 = *(int **)(this + 0x38);
        for (piVar9 = *(int **)(this + 0x30); piVar6 = local_128, piVar2 = local_120,
            piVar9 != piVar11; piVar9 = piVar9 + 1) {
          iVar8 = __FD_ISSET_chk(*piVar9,&local_100,0x80);
          if (iVar8 != 0) {
            local_12c = 0;
            iVar8 = ioctl(*piVar9,0x541b,&local_12c);
            if (iVar8 < 0) {
              cocos2d::log("Abnormal error in ioctl()\n");
              piVar6 = local_128;
              piVar2 = local_120;
              break;
            }
            if (local_12c == 0) {
              if (local_120 == piStack_118) {
                std::__ndk1::vector<int,std::__ndk1::allocator<int>>::
                __push_back_slow_path<int_const&>
                          ((vector<int,std::__ndk1::allocator<int>> *)&local_128,piVar9);
              }
              else {
                *local_120 = *piVar9;
                local_120 = local_120 + 1;
              }
            }
            else {
              uVar10 = parseCommand(this,*piVar9);
              if ((uVar10 & 1) == 0) {
                if (local_120 == piStack_118) {
                  std::__ndk1::vector<int,std::__ndk1::allocator<int>>::
                  __push_back_slow_path<int_const&>
                            ((vector<int,std::__ndk1::allocator<int>> *)&local_128,piVar9);
                }
                else {
                  *local_120 = *piVar9;
                  local_120 = local_120 + 1;
                }
              }
              piVar6 = local_128;
              piVar2 = local_120;
              if (iVar7 < 2) break;
              iVar7 = iVar7 + -1;
            }
          }
        }
        for (; piVar9 = local_120, piVar6 != local_120; piVar6 = piVar6 + 1) {
          iVar7 = *piVar6;
          local_120 = piVar2;
          __FD_CLR_chk(iVar7,pCVar12,0x80);
          piVar11 = *(int **)(this + 0x30);
          piVar2 = *(int **)(this + 0x38);
          if ((piVar11 != piVar2) && (*piVar11 != iVar7)) {
            do {
              piVar15 = piVar2;
              if (piVar2 + -1 == piVar11) goto LAB_00f91020;
              piVar15 = piVar11 + 1;
              piVar11 = piVar11 + 1;
            } while (*piVar15 != iVar7);
          }
          piVar15 = piVar11;
          if (piVar11 != piVar2) {
            while (piVar11 = piVar11 + 1, piVar11 != piVar2) {
              if (*piVar11 != iVar7) {
                *piVar15 = *piVar11;
                piVar15 = piVar15 + 1;
              }
            }
          }
LAB_00f91020:
          if (piVar15 != piVar2) {
            *(int **)(this + 0x38) = piVar15;
          }
          piVar2 = local_120;
          local_120 = piVar9;
        }
        local_120 = piVar2;
        if (local_128 != (int *)0x0) {
          local_120 = local_128;
          operator_delete(local_128);
        }
        goto LAB_00f90e60;
      }
      piVar9 = (int *)__errno();
      if (*piVar9 == 4) goto LAB_00f910a0;
      cocos2d::log("Abnormal error in select()\n");
      CVar4 = this[0xd1];
    }
    if (CVar4 != (Console)0x0) goto LAB_00f910b0;
    iVar7 = *(int *)(this + 0x28);
  } while( true );
}

