
/* v8::internal::AsmJsScanner::ConsumeNumber(int) */

void __thiscall v8::internal::AsmJsScanner::ConsumeNumber(AsmJsScanner *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  ulong uVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined4 uVar9;
  bool bVar10;
  long *plVar11;
  ulong uVar12;
  char *pcVar13;
  uint uVar14;
  double dVar15;
  ulong local_78;
  ulong local_70;
  char *local_68;
  
  local_70 = 0;
  local_68 = (char *)0x0;
  local_78 = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_78
         ,1,(char)param_1);
  bVar4 = param_1 == 0x2e;
  bVar3 = false;
  pcVar13 = (char *)((ulong)&local_78 | 1);
  do {
    plVar11 = *(long **)this;
    puVar7 = (ushort *)plVar11[2];
    if (puVar7 < (ushort *)plVar11[3]) {
LAB_0148f2f4:
      uVar14 = (uint)*puVar7;
    }
    else {
      if ((char)plVar11[6] == '\0') {
        uVar8 = (**(code **)(*plVar11 + 0x28))(plVar11);
        puVar7 = (ushort *)plVar11[2];
        if ((uVar8 & 1) != 0) goto LAB_0148f2f4;
      }
      uVar14 = 0xffffffff;
    }
    plVar11[2] = (long)(puVar7 + 1);
    if ((uVar14 - 0x30 < 10) || (uVar14 - 0x61 < 6)) {
      if ((uVar14 - 0x62 < 0x17) && ((1 << (ulong)(uVar14 - 0x62 & 0x1f) & 0x402001U) != 0))
      goto switchD_0148f334_caseD_62;
      if (uVar14 != 0x2e) goto switchD_0148f334_caseD_41;
      bVar10 = true;
      if ((local_78 & 1) != 0) goto LAB_0148f394;
LAB_0148f3c0:
      uVar6 = local_78 & 0xff;
      uVar8 = uVar6 >> 1;
      uVar12 = 0x16;
      bVar4 = bVar10;
      if (uVar8 == 0x16) {
LAB_0148f3d0:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__grow_by((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)&local_78,uVar12,1,uVar12,uVar12,0,0);
        uVar6 = local_78 & 0xff;
        bVar4 = bVar10;
      }
    }
    else {
      bVar10 = true;
      switch(uVar14) {
      case 0x2b:
      case 0x2d:
        if (bVar3) goto switchD_0148f334_caseD_2c;
        pcVar5 = pcVar13;
        uVar8 = local_78 >> 1 & 0x7f;
        if ((local_78 & 1) != 0) {
          pcVar5 = local_68;
          uVar8 = local_70;
        }
        if ((byte)(pcVar5[uVar8 - 1] | 0x20U) != 0x65) goto switchD_0148f334_caseD_2c;
        break;
      default:
        goto switchD_0148f334_caseD_2c;
      case 0x2e:
        goto switchD_0148f334_caseD_2e;
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
        break;
      case 0x62:
      case 0x6f:
      case 0x78:
switchD_0148f334_caseD_62:
        bVar3 = true;
      }
switchD_0148f334_caseD_41:
      bVar10 = bVar4;
switchD_0148f334_caseD_2e:
      if ((local_78 & 1) == 0) goto LAB_0148f3c0;
LAB_0148f394:
      uVar6 = local_78 & 0xff;
      uVar12 = (local_78 & 0xfffffffffffffffe) - 1;
      uVar8 = local_70;
      bVar4 = bVar10;
      if (local_70 == uVar12) goto LAB_0148f3d0;
    }
    if ((uVar6 & 1) == 0) {
      local_78 = CONCAT71(local_78._1_7_,(char)uVar8 * '\x02' + '\x02');
      pcVar5 = pcVar13;
    }
    else {
      local_70 = uVar8 + 1;
      pcVar5 = local_68;
    }
    pcVar5[uVar8] = (char)uVar14;
    (pcVar5 + uVar8)[1] = '\0';
  } while( true );
switchD_0148f334_caseD_2c:
  plVar11 = *(long **)this;
  uVar8 = plVar11[1];
  uVar12 = plVar11[2];
  if (uVar12 < uVar8 || uVar12 - uVar8 == 0) {
    plVar11[2] = uVar8;
    plVar11[4] = plVar11[4] + ((long)(uVar12 - uVar8) >> 1) + -1;
    if ((char)plVar11[6] == '\0') {
      (**(code **)(*plVar11 + 0x28))();
    }
  }
  else {
    plVar11[2] = uVar12 - 2;
  }
  pcVar5 = pcVar13;
  uVar8 = local_78 >> 1 & 0x7f;
  if ((local_78 & 1) != 0) {
    pcVar5 = local_68;
    uVar8 = local_70;
  }
  if (uVar8 == 1) {
    if (*pcVar5 == '0') {
      *(undefined4 *)(this + 0xe0) = 0;
LAB_0148f4e8:
      uVar9 = 0xfffffffd;
      goto LAB_0148f4ec;
    }
    pcVar5 = pcVar13;
    if ((local_78 & 1) != 0) {
      pcVar5 = local_68;
    }
    if (*pcVar5 != '.') goto LAB_0148f49c;
LAB_0148f494:
    uVar9 = 0x2e;
  }
  else {
LAB_0148f49c:
    dVar15 = (double)StringToDouble((internal *)0x0,pcVar5,(long)(int)uVar8,0xf);
    *(double *)(this + 0xd8) = dVar15;
    if (NAN(dVar15)) {
      uVar8 = local_78 & 0xff;
      if ((local_78 & 1) != 0) {
        pcVar13 = local_68;
      }
      if (*pcVar13 == '.') {
        uVar12 = local_78 >> 1 & 0x7f;
        if ((local_78 & 1) != 0) {
          uVar12 = local_70;
        }
        if (1 < uVar12) {
          uVar12 = 1;
          uVar6 = local_70;
          do {
            plVar11 = *(long **)this;
            uVar1 = plVar11[1];
            uVar2 = plVar11[2];
            if (uVar2 < uVar1 || uVar2 - uVar1 == 0) {
              plVar11[2] = uVar1;
              plVar11[4] = plVar11[4] + ((long)(uVar2 - uVar1) >> 1) + -1;
              if ((char)plVar11[6] == '\0') {
                (**(code **)(*plVar11 + 0x28))();
                uVar8 = local_78 & 0xff;
                uVar6 = local_70;
              }
            }
            else {
              plVar11[2] = uVar2 - 2;
            }
            uVar12 = uVar12 + 1;
            uVar1 = uVar8 >> 1;
            if ((uVar8 & 1) != 0) {
              uVar1 = uVar6;
            }
            uVar9 = 0x2e;
          } while (uVar12 < uVar1);
          goto LAB_0148f4ec;
        }
        goto LAB_0148f494;
      }
    }
    else {
      if (bVar4) {
        uVar9 = 0xfffffffc;
        goto LAB_0148f4ec;
      }
      if (dVar15 <= 4294967295.0) {
        *(int *)(this + 0xe0) = (int)dVar15;
        goto LAB_0148f4e8;
      }
    }
    uVar9 = 0xfffffffe;
  }
LAB_0148f4ec:
  *(undefined4 *)(this + 8) = uVar9;
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  return;
}

