
/* cocos2d::experimental::AudioPlayerProvider::getFileInfo(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::experimental::AudioPlayerProvider::getFileInfo(basic_string *param_1)

{
  __shared_weak_count *p_Var1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  FILE *__stream;
  long lVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar14;
  long lVar15;
  __shared_weak_count *p_Var16;
  bool bVar17;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  long local_80;
  undefined8 local_78;
  long *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  *(undefined8 *)(in_x8 + 0x30) = 0;
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)(in_x8 + 0x28) = 0;
  *(undefined8 *)(in_x8 + 0x20) = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)in_x8 = 0;
  local_80 = 0;
  local_78 = 0;
  bVar3 = *in_x1;
  pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (in_x1 + 0x10);
  if (((byte)bVar3 & 1) == 0) {
    pbVar14 = in_x1 + 1;
  }
  if (*pbVar14 ==
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x2f) {
    __stream = fopen((char *)pbVar14,"rb");
    if (__stream == (FILE *)0x0) goto LAB_00e6c374;
    fseek(__stream,0,2);
    lVar8 = ftell(__stream);
    fclose(__stream);
    iVar7 = -1;
  }
  else {
    uStack_98 = 0;
    local_90 = (undefined1 *)0x0;
    local_a0 = (undefined8 *)0x0;
    pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (in_x1 + 8);
    }
    if (6 < (long)pbVar2) {
      pbVar9 = pbVar14;
      pbVar13 = pbVar2;
      do {
        if ((pbVar13 + -6 ==
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0)
           || (pbVar9 = memchr(pbVar9,0x61,(size_t)(pbVar13 + -6)),
              pbVar9 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)0x0)) break;
        iVar7 = memcmp(pbVar9,"assets/",7);
        if (iVar7 == 0) {
          if ((pbVar9 != pbVar14 + (long)pbVar2) && (pbVar9 == pbVar14)) {
            uVar10 = __strlen_chk("assets/",8);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string((basic_string *)&local_b8,(ulong)in_x1,uVar10,
                         (allocator *)0xffffffffffffffff);
            if (((ulong)local_a0 & 1) != 0) {
              *local_90 = 0;
              uStack_98 = 0;
              if (((ulong)local_a0 & 1) != 0) {
                operator_delete(local_90);
              }
            }
            uStack_98 = uStack_b0;
            local_a0 = local_b8;
            local_90 = local_a8;
            goto LAB_00e6c27c;
          }
          break;
        }
        pbVar9 = pbVar9 + 1;
        pbVar13 = pbVar14 + (long)pbVar2 + -(long)pbVar9;
      } while (6 < (long)pbVar13);
    }
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_a0
        != in_x1) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,(char *)pbVar14,(ulong)pbVar2);
    }
LAB_00e6c27c:
    local_b8 = &local_78;
    local_70 = &local_80;
    plVar11 = *(long **)(param_1 + 0x40);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    iVar7 = (**(code **)(*plVar11 + 0x30))(plVar11,&local_a0,&local_b8,&local_70);
    if (iVar7 < 1) {
      pbVar14 = in_x1 + 1;
      if (((byte)*in_x1 & 1) != 0) {
        pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(in_x1 + 0x10);
      }
      __android_log_print(6,"AudioPlayerProvider","Failed to open file descriptor for \'%s\'",
                          pbVar14);
      bVar17 = false;
      bVar5 = true;
      lVar8 = 0;
    }
    else {
      bVar5 = false;
      bVar17 = true;
      lVar8 = local_80;
    }
    if (((ulong)local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if (!bVar17) {
      if (!bVar5) {
        p_Var16 = *(__shared_weak_count **)(in_x8 + 0x20);
        if (p_Var16 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var16 + 8;
          do {
            lVar8 = *(long *)p_Var1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar5) {
              *(long *)p_Var1 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*(long *)p_Var16 + 0x10))(p_Var16);
            std::__ndk1::__shared_weak_count::__release_weak(p_Var16);
          }
        }
        if (((byte)*in_x8 & 1) != 0) {
          operator_delete(*(void **)(in_x8 + 0x10));
        }
      }
      goto LAB_00e6c374;
    }
  }
  if (in_x8 != in_x1) {
    puVar12 = (undefined8 *)(ulong)((byte)*in_x1 >> 1);
    pbVar14 = in_x1 + 1;
    if (((byte)*in_x1 & 1) != 0) {
      puVar12 = *(undefined8 **)(in_x1 + 8);
      pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (in_x1 + 0x10);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,(char *)pbVar14,(ulong)puVar12);
  }
  puVar12 = operator_new(0x20);
  puVar12[2] = 0;
  *puVar12 = &PTR____shared_ptr_emplace_016f3d58;
  puVar12[1] = 0;
  AssetFd::AssetFd((AssetFd *)(puVar12 + 3),iVar7);
  p_Var16 = *(__shared_weak_count **)(in_x8 + 0x20);
  *(AssetFd **)(in_x8 + 0x18) = (AssetFd *)(puVar12 + 3);
  *(undefined8 **)(in_x8 + 0x20) = puVar12;
  if (p_Var16 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var16 + 8;
    do {
      lVar15 = *(long *)p_Var1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = lVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar15 == 0) {
      (**(code **)(*(long *)p_Var16 + 0x10))(p_Var16);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var16);
    }
  }
  *(undefined8 *)(in_x8 + 0x28) = local_78;
  *(long *)(in_x8 + 0x30) = lVar8;
LAB_00e6c374:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

