
/* WARNING: Removing unreachable block (ram,0x00dcc0c0) */
/* WARNING: Removing unreachable block (ram,0x00dcc098) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *
TIFFClientOpen(char *param_1,char *param_2,undefined8 param_3,long param_4,long param_5,long param_6
              ,long param_7,long param_8,code *param_9,code *param_10)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  undefined8 *__s;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined8 local_68;
  
  cVar1 = *param_2;
  if ((cVar1 == 'a') || (cVar1 == 'w')) {
    uVar9 = 0x242;
    if (cVar1 != 'w') {
      uVar9 = 0x42;
    }
  }
  else {
    if (cVar1 != 'r') {
      TIFFErrorExt(0,"TIFFClientOpen","\"%s\": Bad mode",param_2);
      return (undefined8 *)0x0;
    }
    uVar9 = (uint)(param_2[1] == '+') << 1;
  }
  sVar3 = strlen(param_1);
  __s = _TIFFmalloc(sVar3 + 0x439);
  if (__s == (undefined8 *)0x0) {
    TIFFErrorExt(param_3,"TIFFClientOpen","%s: Out of memory (TIFF structure)",param_1);
    return (undefined8 *)0x0;
  }
  _TIFFmemset(__s,0,0x438);
  *__s = __s + 0x87;
  strcpy((char *)(__s + 0x87),param_1);
  __s[0x51] = 0;
  *(uint *)((long)__s + 0xc) = uVar9 & 2;
  *(undefined2 *)(__s + 0x50) = 0xffff;
  *(undefined4 *)((long)__s + 0x284) = 0xffffffff;
  *(undefined4 *)((long)__s + 0x27c) = 0xffffffff;
  __s[0x77] = param_3;
  if ((((param_4 == 0) || (param_5 == 0)) || (param_6 == 0)) || ((param_7 == 0 || (param_8 == 0))))
  {
    TIFFErrorExt(param_3,"TIFFClientOpen","One of the client procedures is NULL pointer.");
    return (undefined8 *)0x0;
  }
  if (param_9 == (code *)0x0) {
    param_9 = FUN_00dcc438;
  }
  if (param_10 == (code *)0x0) {
    param_10 = FUN_00dcc440;
  }
  __s[0x78] = param_4;
  __s[0x79] = param_5;
  __s[0x7a] = param_6;
  __s[0x7b] = param_7;
  __s[0x7c] = param_8;
  __s[0x75] = param_9;
  __s[0x76] = param_10;
  _TIFFSetDefaultCompressionState(__s);
  uVar10 = 0x801;
  if (uVar9 != 0) {
    uVar10 = 1;
  }
  uVar11 = uVar10 | 0x8000;
  if ((uVar9 | 2) != 2) {
    uVar11 = uVar10;
  }
  *(uint *)(__s + 2) = uVar11;
  pcVar7 = param_2;
  if (uVar9 == 0) {
    do {
      switch(*pcVar7) {
      case '\0':
        goto switchD_00dcc084_caseD_0;
      default:
        goto switchD_00dcc084_caseD_1;
      case '8':
        goto switchD_00dcc084_caseD_1;
      case 'B':
      case 'H':
        uVar11 = uVar11 & 0xfffffffc | 1;
        break;
      case 'C':
        uVar11 = uVar11 | 0x8000;
        break;
      case 'L':
        uVar11 = uVar11 & 0xfffffffc | 2;
        break;
      case 'M':
        uVar11 = uVar11 | 0x800;
        break;
      case 'b':
        goto switchD_00dcc084_caseD_1;
      case 'c':
        uVar11 = uVar11 & 0xffff7fff;
        break;
      case 'h':
        uVar11 = uVar11 | 0x10000;
        break;
      case 'm':
        uVar11 = uVar11 & 0xfffff7ff;
      }
      *(uint *)(__s + 2) = uVar11;
switchD_00dcc084_caseD_1:
      pcVar7 = pcVar7 + 1;
    } while( true );
  }
  do {
    switch(*pcVar7) {
    case '8':
      if ((uVar9 >> 6 & 1) != 0) {
        uVar11 = uVar11 | 0x80000;
        goto LAB_00dcbff0;
      }
      break;
    case '9':
    case ':':
    case ';':
    case '<':
    case '=':
    case '>':
    case '?':
    case '@':
    case 'A':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'I':
    case 'J':
    case 'K':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '[':
    case '\\':
    case ']':
    case '^':
    case '_':
    case '`':
    case 'a':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
      break;
    case 'B':
    case 'H':
      uVar11 = uVar11 & 0xfffffffc | 1;
      goto LAB_00dcbff0;
    case 'L':
      uVar11 = uVar11 & 0xfffffffc | 2;
      goto LAB_00dcbff0;
    case 'b':
      if ((uVar9 >> 6 & 1) != 0) {
        uVar11 = uVar11 | 0x80;
        goto LAB_00dcbff0;
      }
      break;
    case 'h':
      uVar11 = uVar11 | 0x10000;
LAB_00dcbff0:
      *(uint *)(__s + 2) = uVar11;
      break;
    default:
      if (*pcVar7 == '\0') goto switchD_00dcc084_caseD_0;
    }
    pcVar7 = pcVar7 + 1;
  } while( true );
switchD_00dcc084_caseD_0:
  if (uVar9 >> 9 == 0) {
    lVar4 = (*(code *)__s[0x78])(__s[0x77],__s + 0x4d,8);
    if (lVar4 != 8) goto LAB_00dcc140;
    uVar8 = *(ushort *)(__s + 0x4d);
    if (uVar8 != 0x4949) {
      if (uVar8 == 0x4d4d) {
        *(uint *)(__s + 2) = *(uint *)(__s + 2) | 0x80;
        goto LAB_00dcc240;
      }
      if (uVar8 == 0x5045) goto LAB_00dcc240;
      uVar5 = __s[0x77];
      pcVar7 = "Not a TIFF or MDI file, bad magic number %d (0x%x)";
LAB_00dcc2dc:
      TIFFErrorExt(uVar5,param_1,pcVar7,uVar8,uVar8);
      goto LAB_00dcc360;
    }
LAB_00dcc240:
    if (*(char *)(__s + 2) < '\0') {
      TIFFSwabShort((ushort *)((long)__s + 0x26a));
    }
    uVar8 = *(ushort *)((long)__s + 0x26a);
    if ((uVar8 & 0xfffe) != 0x2a) {
      uVar5 = __s[0x77];
      pcVar7 = "Not a TIFF file, bad version number %d (0x%x)";
      goto LAB_00dcc2dc;
    }
    if (uVar8 == 0x2a) {
      uVar9 = *(uint *)(__s + 2);
      if ((uVar9 >> 7 & 1) != 0) {
        TIFFSwabLong((long)__s + 0x26c);
        uVar9 = *(uint *)(__s + 2);
      }
      *(undefined2 *)(__s + 0x4f) = 8;
LAB_00dcc288:
      uVar10 = uVar9 | 0x200;
      __s[0x71] = 0;
      *(uint *)(__s + 2) = uVar10;
      __s[0x70] = 0;
      __s[0x6f] = 0;
      __s[0x6e] = 0;
      __s[0x6d] = 0;
      if (*param_2 == 'a') {
        iVar2 = TIFFDefaultDirectory(__s);
        if (iVar2 != 0) {
          return __s;
        }
      }
      else if (*param_2 == 'r') {
        if ((uVar9 >> 0x13 & 1) == 0) {
          __s[4] = (ulong)*(uint *)((long)__s + 0x26c);
        }
        else {
          __s[4] = __s[0x4e];
        }
        if ((uVar9 >> 0xb & 1) != 0) {
          iVar2 = (*(code *)__s[0x75])(__s[0x77],__s + 0x73,&local_68);
          if (iVar2 == 0) {
            uVar10 = *(uint *)(__s + 2) & 0xfffff7ff;
            *(uint *)(__s + 2) = uVar10;
          }
          else {
            uVar10 = *(uint *)(__s + 2);
            __s[0x74] = local_68;
          }
        }
        if ((uVar10 >> 0x10 & 1) != 0) {
          return __s;
        }
        iVar2 = TIFFReadDirectory(__s);
        if (iVar2 != 0) {
          __s[0x72] = 0xffffffffffffffff;
          *(uint *)(__s + 2) = *(uint *)(__s + 2) | 0x10;
          return __s;
        }
      }
      goto LAB_00dcc360;
    }
    lVar4 = (*(code *)__s[0x78])(__s[0x77],__s + 0x4e,8);
    if (lVar4 == 8) {
      if (*(char *)(__s + 2) < '\0') {
        TIFFSwabShort((ushort *)((long)__s + 0x26c));
        TIFFSwabLong8(__s + 0x4e);
      }
      uVar8 = *(ushort *)((long)__s + 0x26c);
      if (uVar8 == 8) {
        uVar8 = *(ushort *)((long)__s + 0x26e);
        if (uVar8 == 0) {
          *(undefined2 *)(__s + 0x4f) = 0x10;
          uVar9 = *(uint *)(__s + 2) | 0x80000;
          *(uint *)(__s + 2) = uVar9;
          goto LAB_00dcc288;
        }
        uVar5 = __s[0x77];
        pcVar7 = "Not a TIFF file, bad BigTIFF unused %d (0x%x)";
      }
      else {
        uVar5 = __s[0x77];
        pcVar7 = "Not a TIFF file, bad BigTIFF offsetsize %d (0x%x)";
      }
      goto LAB_00dcc2dc;
    }
LAB_00dcc34c:
    uVar5 = __s[0x77];
    pcVar7 = "Cannot read TIFF header";
  }
  else {
LAB_00dcc140:
    if (*(int *)((long)__s + 0xc) == 0) goto LAB_00dcc34c;
    uVar9 = *(uint *)(__s + 2);
    uVar12 = 0x4d4d;
    if ((uVar9 & 0x80) == 0) {
      uVar12 = 0x4949;
    }
    *(undefined2 *)(__s + 0x4d) = uVar12;
    if ((uVar9 >> 0x13 & 1) == 0) {
      *(undefined2 *)((long)__s + 0x26a) = 0x2a;
      *(undefined4 *)((long)__s + 0x26c) = 0;
      if ((uVar9 >> 7 & 1) != 0) {
        TIFFSwabShort();
      }
      uVar12 = 8;
    }
    else {
      *(undefined4 *)((long)__s + 0x26a) = 0x8002b;
      *(undefined2 *)((long)__s + 0x26e) = 0;
      __s[0x4e] = 0;
      if ((uVar9 >> 7 & 1) != 0) {
        TIFFSwabShort();
        TIFFSwabShort((long)__s + 0x26c);
      }
      uVar12 = 0x10;
    }
    *(undefined2 *)(__s + 0x4f) = uVar12;
    (*(code *)__s[0x7a])(__s[0x77],0,0);
    uVar6 = (*(code *)__s[0x79])(__s[0x77],__s + 0x4d,*(undefined2 *)(__s + 0x4f));
    if (uVar6 == *(ushort *)(__s + 0x4f)) {
      if (*(short *)(__s + 0x4d) == 0x4d4d) {
        *(uint *)(__s + 2) = *(uint *)(__s + 2) | 0x80;
      }
      iVar2 = TIFFDefaultDirectory(__s);
      if (iVar2 != 0) {
        __s[3] = 0;
        __s[5] = 0;
        *(undefined4 *)(__s + 6) = 0;
        return __s;
      }
      goto LAB_00dcc360;
    }
    uVar5 = __s[0x77];
    pcVar7 = "Error writing TIFF header";
  }
  TIFFErrorExt(uVar5,param_1,pcVar7);
LAB_00dcc360:
  *(undefined4 *)((long)__s + 0xc) = 0;
  TIFFCleanup(__s);
  return (undefined8 *)0x0;
}

