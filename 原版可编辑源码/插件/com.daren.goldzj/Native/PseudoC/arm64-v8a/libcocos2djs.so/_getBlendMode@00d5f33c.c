
/* dragonBones::DataParser::_getBlendMode(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

char dragonBones::DataParser::_getBlendMode(basic_string *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  void *__src;
  long *plVar8;
  ulong uVar9;
  ulong local_60;
  ulong uStack_58;
  long *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0;
  local_50 = (long *)0x0;
  local_60 = 0;
  if (((byte)*param_1 & 1) == 0) {
    local_50 = *(long **)(param_1 + 0x10);
    uStack_58 = *(ulong *)(param_1 + 8);
    local_60 = *(ulong *)param_1;
    uVar5 = local_60 & 0xff;
    if ((local_60 & 1) != 0) goto LAB_00d5f40c;
LAB_00d5f388:
    plVar6 = (long *)((ulong)&local_60 | 1);
    plVar8 = (long *)((long)plVar6 + (uVar5 >> 1));
    if (plVar6 != plVar8) goto LAB_00d5f41c;
  }
  else {
    uVar5 = *(ulong *)(param_1 + 8);
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(param_1 + 0x10);
    if (uVar5 < 0x17) {
      plVar8 = (long *)((ulong)&local_60 | 1);
      local_60 = (ulong)(byte)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_00d5f3f0;
    }
    else {
      uVar9 = uVar5 + 0x10 & 0xfffffffffffffff0;
      plVar8 = operator_new(uVar9);
      local_60 = uVar9 | 1;
      uStack_58 = uVar5;
      local_50 = plVar8;
LAB_00d5f3f0:
      memcpy(plVar8,__src,uVar5);
    }
    *(char *)((long)plVar8 + uVar5) = '\0';
    uVar5 = local_60 & 0xff;
    if ((local_60 & 1) == 0) goto LAB_00d5f388;
LAB_00d5f40c:
    plVar8 = (long *)((long)local_50 + uStack_58);
    plVar6 = local_50;
    if (local_50 != plVar8) {
LAB_00d5f41c:
      do {
        iVar4 = tolower((int)(char)*plVar6);
        plVar7 = (long *)((long)plVar6 + 1);
        *(char *)plVar6 = (char)iVar4;
        plVar6 = plVar7;
      } while (plVar8 != plVar7);
      uVar5 = local_60 & 0xff;
    }
  }
  uVar9 = uVar5 >> 1;
  if ((uVar5 & 1) != 0) {
    uVar9 = uStack_58;
  }
  cVar2 = '\0';
  switch(uVar9) {
  case 3:
    plVar8 = (long *)((ulong)&local_60 | 1);
    if ((uVar5 & 1) != 0) {
      plVar8 = local_50;
    }
    iVar4 = memcmp(plVar8,&DAT_019f1106,3);
    cVar2 = iVar4 == 0;
    goto joined_r0x00d5f6d0;
  default:
    goto switchD_00d5f46c_caseD_4;
  case 5:
    plVar8 = (long *)((ulong)&local_60 | 1);
    if ((uVar5 & 1) != 0) {
      plVar8 = local_50;
    }
    iVar4 = memcmp(plVar8,"alpha",5);
    if (iVar4 != 0) {
      cVar2 = '\x05';
      iVar4 = memcmp(plVar8,"erase",5);
      if (iVar4 == 0) goto switchD_00d5f46c_caseD_4;
      iVar4 = memcmp(plVar8,"layer",5);
      cVar2 = (iVar4 == 0) << 3;
      break;
    }
    cVar2 = '\x02';
joined_r0x00d5f6d0:
    if ((uVar5 & 1) == 0) goto LAB_00d5f6a0;
    goto LAB_00d5f698;
  case 6:
    plVar8 = (long *)((ulong)&local_60 | 1);
    if ((uVar5 & 1) != 0) {
      plVar8 = local_50;
    }
    iVar4 = memcmp(plVar8,"normal",6);
    if (iVar4 == 0) {
      cVar2 = '\0';
    }
    else {
      iVar4 = memcmp(plVar8,"darken",6);
      if (iVar4 == 0) {
        cVar2 = '\x03';
      }
      else {
        iVar4 = memcmp(plVar8,"invert",6);
        if (iVar4 != 0) {
          iVar4 = memcmp(plVar8,"screen",6);
          bVar3 = iVar4 == 0;
          cVar2 = '\f';
          goto LAB_00d5f690;
        }
        cVar2 = '\a';
      }
    }
    break;
  case 7:
    plVar8 = (long *)((ulong)&local_60 | 1);
    if ((uVar5 & 1) != 0) {
      plVar8 = local_50;
    }
    iVar4 = memcmp(plVar8,"lighten",7);
    if (iVar4 != 0) {
      iVar4 = memcmp(plVar8,"overlay",7);
      bVar3 = iVar4 == 0;
      cVar2 = '\v';
      goto LAB_00d5f690;
    }
    cVar2 = '\t';
    break;
  case 8:
    plVar8 = (long *)((ulong)&local_60 | 1);
    if ((uVar5 & 1) != 0) {
      plVar8 = local_50;
    }
    if (*plVar8 != 0x796c7069746c756d) {
      bVar3 = *plVar8 == 0x7463617274627573;
      cVar2 = '\r';
      goto LAB_00d5f690;
    }
    cVar2 = '\n';
    break;
  case 9:
    plVar8 = (long *)((ulong)&local_60 | 1);
    if ((uVar5 & 1) != 0) {
      plVar8 = local_50;
    }
    iVar4 = memcmp(plVar8,"hardlight",9);
    bVar3 = iVar4 == 0;
    cVar2 = '\x06';
LAB_00d5f690:
    if (!bVar3) {
      cVar2 = '\0';
    }
    goto switchD_00d5f46c_caseD_4;
  case 10:
    plVar8 = (long *)((ulong)&local_60 | 1);
    if ((uVar5 & 1) != 0) {
      plVar8 = local_50;
    }
    iVar4 = memcmp(plVar8,"difference",10);
    cVar2 = (iVar4 == 0) << 2;
  }
joined_r0x00d5f6dc:
  if ((uVar5 & 1) != 0) {
LAB_00d5f698:
    operator_delete(local_50);
  }
LAB_00d5f6a0:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar2;
switchD_00d5f46c_caseD_4:
  goto joined_r0x00d5f6dc;
}

