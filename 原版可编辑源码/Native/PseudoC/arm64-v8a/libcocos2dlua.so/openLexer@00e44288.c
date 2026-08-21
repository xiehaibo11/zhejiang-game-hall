
/* cocos2d::PUScriptLexer::openLexer(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::vector<cocos2d::PUScriptToken*, std::__ndk1::allocator<cocos2d::PUScriptToken*> >&)
    */

void __thiscall
cocos2d::PUScriptLexer::openLexer
          (PUScriptLexer *this,basic_string *param_1,basic_string *param_2,vector *param_3)

{
  basic_string bVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  PUScriptLexer *pPVar6;
  PUScriptLexer *extraout_x0;
  PUScriptLexer *extraout_x0_00;
  ulong uVar7;
  char cVar8;
  basic_string *pbVar9;
  basic_string *pbVar10;
  basic_string *pbVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  basic_string *pbVar15;
  basic_string bVar16;
  ulong local_a8;
  ulong local_a0;
  basic_string *local_98;
  ulong local_90;
  ulong local_88;
  basic_string *local_80;
  undefined7 uStack_78;
  undefined1 local_71;
  undefined7 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_88 = 0;
  local_80 = (basic_string *)0x0;
  local_90 = 0;
  uVar14 = *(ulong *)(param_1 + 8);
  pbVar15 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar15 = param_1 + 1;
    uVar14 = (ulong)((byte)*param_1 >> 1);
  }
  if (uVar14 == 0) goto joined_r0x00e44bfc;
  pbVar10 = (basic_string *)((ulong)&local_90 | 1);
  cVar8 = '\0';
  pbVar11 = (basic_string *)((ulong)&local_a8 | 1);
  iVar12 = 1;
  bVar16 = (basic_string)0x0;
  do {
    bVar1 = *pbVar15;
    switch(cVar8) {
    case '\0':
      if ((bVar16 == (basic_string)0x2f) && (bVar1 == (basic_string)0x2f)) {
        this = (PUScriptLexer *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_90,"",0);
LAB_00e4443c:
        cVar8 = '\x01';
      }
      else if ((bVar16 == (basic_string)0x2f) && (bVar1 == (basic_string)0x2a)) {
        this = (PUScriptLexer *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_90,"",0);
LAB_00e444d4:
        cVar8 = '\x02';
      }
      else {
        if (bVar1 != (basic_string)0x22) {
          cVar8 = '\0';
          switch(bVar1) {
          case (basic_string)0x9:
          case (basic_string)0x20:
            break;
          case (basic_string)0xa:
          case (basic_string)0xd:
            if ((local_90 & 1) == 0) {
              local_90 = CONCAT71(local_90._1_7_,2);
              pbVar9 = pbVar10;
            }
            else {
              local_88 = 1;
              pbVar9 = local_80;
            }
            *pbVar9 = bVar1;
            pbVar9[1] = (basic_string)0x0;
            this = (PUScriptLexer *)setToken(this,(basic_string *)&local_90,iVar12,param_2,param_3);
            cVar8 = '\0';
            break;
          default:
            if ((local_90 & 1) == 0) {
              local_90 = CONCAT71(local_90._1_7_,2);
              pbVar9 = pbVar10;
            }
            else {
              local_88 = 1;
              pbVar9 = local_80;
            }
            *pbVar9 = bVar1;
            pbVar9[1] = (basic_string)0x0;
            cVar8 = '\x06';
            if (bVar1 != (basic_string)0x2f) {
              cVar8 = '\x03';
            }
            goto joined_r0x00e4451c;
          case (basic_string)0x24:
            if ((local_90 & 1) == 0) {
              local_90 = CONCAT71(local_90._1_7_,2);
              pbVar9 = pbVar10;
            }
            else {
              local_88 = 1;
              pbVar9 = local_80;
            }
            *(undefined2 *)pbVar9 = 0x24;
            cVar8 = '\x05';
            goto LAB_00e44314;
          }
          goto switchD_00e44340_default;
        }
        if ((local_90 & 1) == 0) {
          local_90 = CONCAT71(local_90._1_7_,2);
          pbVar9 = pbVar10;
        }
        else {
          local_88 = 1;
          pbVar9 = local_80;
        }
        *(undefined2 *)pbVar9 = 0x22;
        cVar8 = '\x04';
      }
      goto LAB_00e44314;
    case '\x01':
      cVar8 = bVar1 != (basic_string)0xa && bVar1 != (basic_string)0xd;
      break;
    case '\x02':
      cVar8 = '\0';
      if (bVar1 != (basic_string)0x2f || bVar16 != (basic_string)0x2a) {
        cVar8 = '\x02';
      }
      break;
    case '\x03':
      goto code_r0x00e444e8;
    case '\x04':
      if (bVar1 == (basic_string)0x5c) {
        cVar8 = '\x04';
        goto LAB_00e44314;
      }
      if ((bVar16 != (basic_string)0x5c) || (bVar1 != (basic_string)0x22)) {
        if (bVar1 != (basic_string)0x22) {
          if (bVar16 == (basic_string)0x5c) {
            this = (PUScriptLexer *)FUN_007c1fb0(&local_a8,&local_90,&DAT_012f2b5b);
            if ((local_a8 & 1) == 0) {
              uVar13 = (ulong)((byte)local_a8._0_1_ >> 1);
              uVar7 = 0x16;
            }
            else {
              uVar7 = (local_a8 & 0xfffffffffffffffe) - 1;
              uVar13 = local_a0;
            }
            bVar2 = local_a8._0_1_;
            if (uVar13 == uVar7) {
              this = (PUScriptLexer *)
                     std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::__grow_by((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_a8,uVar7,1,uVar7,uVar7,0,0);
              bVar2 = local_a8._0_1_;
            }
            pbVar9 = local_98;
            if (((byte)bVar2 & 1) == 0) {
              local_a8._0_1_ =
                   (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                   ((char)uVar13 * '\x02' + '\x02');
              local_98 = pbVar11;
            }
            bVar2 = local_a8._0_1_;
            local_98[uVar13] = bVar1;
            (local_98 + uVar13)[1] = (basic_string)0x0;
            local_a0 = 0;
            local_98 = (basic_string *)0x0;
            uStack_70 = (undefined7)((ulong)*(undefined8 *)(pbVar11 + 7) >> 8);
            uStack_78 = (undefined7)*(undefined8 *)pbVar11;
            local_71 = (undefined1)((ulong)*(undefined8 *)pbVar11 >> 0x38);
            local_a8 = 0;
            if ((local_90 & 1) == 0) {
              local_90 = local_90 & 0xffffffffffff0000;
            }
            else {
              *local_80 = (basic_string)0x0;
              local_88 = 0;
              if ((local_90 & 1) != 0) {
                operator_delete(local_80);
                local_90 = 0;
                this = extraout_x0;
              }
            }
            uVar5 = CONCAT71(uStack_70,local_71);
            uVar4 = CONCAT17(local_71,uStack_78);
            local_90 = CONCAT71(local_90._1_7_,bVar2);
            local_80 = pbVar9;
            uStack_78 = 0;
            local_71 = 0;
            uStack_70 = 0;
            *(undefined8 *)(pbVar10 + 7) = uVar5;
            *(undefined8 *)pbVar10 = uVar4;
            if ((local_a8 & 1) != 0) {
              operator_delete(local_98);
              this = extraout_x0_00;
            }
          }
          else {
            if ((local_90 & 1) == 0) {
              uVar13 = (ulong)((byte)local_90._0_1_ >> 1);
              uVar7 = 0x16;
              if (uVar13 != 0x16) goto LAB_00e44984;
LAB_00e449c4:
              this = (PUScriptLexer *)
                     std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::__grow_by((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_90,uVar7,1,uVar7,uVar7,0,0);
              if ((local_90 & 1) != 0) goto LAB_00e44988;
LAB_00e449e8:
              local_90 = CONCAT71(local_90._1_7_,(char)uVar13 * '\x02' + '\x02');
              pbVar9 = pbVar10;
            }
            else {
              uVar7 = (local_90 & 0xfffffffffffffffe) - 1;
              uVar13 = local_88;
              if (local_88 == uVar7) goto LAB_00e449c4;
LAB_00e44984:
              if ((local_90 & 1) == 0) goto LAB_00e449e8;
LAB_00e44988:
              local_88 = uVar13 + 1;
              pbVar9 = local_80;
            }
            pbVar9[uVar13] = bVar1;
            (pbVar9 + uVar13)[1] = (basic_string)0x0;
          }
          cVar8 = '\x04';
          break;
        }
        if ((local_90 & 1) == 0) {
          uVar13 = (ulong)((byte)local_90._0_1_ >> 1);
          uVar7 = 0x16;
          if (uVar13 != 0x16) goto LAB_00e44618;
LAB_00e44910:
          this = (PUScriptLexer *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 __grow_by((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_90,uVar7,1,uVar7,uVar7,0,0);
          if ((local_90 & 1) != 0) goto LAB_00e4461c;
LAB_00e44934:
          local_90 = CONCAT71(local_90._1_7_,(char)uVar13 * '\x02' + '\x02');
          pbVar9 = pbVar10;
        }
        else {
          uVar7 = (local_90 & 0xfffffffffffffffe) - 1;
          uVar13 = local_88;
          if (local_88 == uVar7) goto LAB_00e44910;
LAB_00e44618:
          if ((local_90 & 1) == 0) goto LAB_00e44934;
LAB_00e4461c:
          local_88 = uVar13 + 1;
          pbVar9 = local_80;
        }
        *(undefined2 *)(pbVar9 + uVar13) = 0x22;
        this = (PUScriptLexer *)setToken(this,(basic_string *)&local_90,iVar12,param_2,param_3);
        cVar8 = '\0';
        goto LAB_00e44314;
      }
      if ((local_90 & 1) == 0) {
        uVar13 = (ulong)((byte)local_90._0_1_ >> 1);
        uVar7 = 0x16;
        if (uVar13 != 0x16) goto LAB_00e44474;
LAB_00e447bc:
        this = (PUScriptLexer *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               __grow_by((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_90,uVar7,1,uVar7,uVar7,0,0);
        if ((local_90 & 1) != 0) goto LAB_00e44478;
LAB_00e447e0:
        local_90 = CONCAT71(local_90._1_7_,(char)uVar13 * '\x02' + '\x02');
        pbVar9 = pbVar10;
      }
      else {
        uVar7 = (local_90 & 0xfffffffffffffffe) - 1;
        uVar13 = local_88;
        if (local_88 == uVar7) goto LAB_00e447bc;
LAB_00e44474:
        if ((local_90 & 1) == 0) goto LAB_00e447e0;
LAB_00e44478:
        local_88 = uVar13 + 1;
        pbVar9 = local_80;
      }
      *(undefined2 *)(pbVar9 + uVar13) = 0x22;
      cVar8 = '\x04';
      goto LAB_00e44314;
    case '\x05':
      switch(bVar1) {
      case (basic_string)0x9:
      case (basic_string)0x20:
        this = (PUScriptLexer *)setToken(this,(basic_string *)&local_90,iVar12,param_2,param_3);
        goto LAB_00e44514;
      case (basic_string)0xa:
      case (basic_string)0xd:
        pPVar6 = (PUScriptLexer *)setToken(this,(basic_string *)&local_90,iVar12,param_2,param_3);
        if ((local_90 & 1) == 0) {
          local_90 = CONCAT71(local_90._1_7_,2);
          pbVar9 = pbVar10;
        }
        else {
          local_88 = 1;
          pbVar9 = local_80;
        }
        *pbVar9 = bVar1;
        pbVar9[1] = (basic_string)0x0;
        this = (PUScriptLexer *)setToken(pPVar6,(basic_string *)&local_90,iVar12,param_2,param_3);
        cVar8 = '\0';
        break;
      case (basic_string)0xb:
      case (basic_string)0xc:
      case (basic_string)0xe:
      case (basic_string)0xf:
      case (basic_string)0x10:
      case (basic_string)0x11:
      case (basic_string)0x12:
      case (basic_string)0x13:
      case (basic_string)0x14:
      case (basic_string)0x15:
      case (basic_string)0x16:
      case (basic_string)0x17:
      case (basic_string)0x18:
      case (basic_string)0x19:
      case (basic_string)0x1a:
      case (basic_string)0x1b:
      case (basic_string)0x1c:
      case (basic_string)0x1d:
      case (basic_string)0x1e:
      case (basic_string)0x1f:
      case (basic_string)0x21:
      case (basic_string)0x22:
      case (basic_string)0x23:
      case (basic_string)0x24:
      case (basic_string)0x25:
      case (basic_string)0x26:
      case (basic_string)0x27:
      case (basic_string)0x28:
      case (basic_string)0x29:
      case (basic_string)0x2a:
      case (basic_string)0x2b:
      case (basic_string)0x2c:
      case (basic_string)0x2d:
      case (basic_string)0x2e:
      case (basic_string)0x2f:
      case (basic_string)0x30:
      case (basic_string)0x31:
      case (basic_string)0x32:
      case (basic_string)0x33:
      case (basic_string)0x34:
      case (basic_string)0x35:
      case (basic_string)0x36:
      case (basic_string)0x37:
      case (basic_string)0x38:
      case (basic_string)0x39:
        goto switchD_00e443f8_caseD_b;
      case (basic_string)0x3a:
switchD_00e443f8_caseD_3a:
        pPVar6 = (PUScriptLexer *)setToken(this,(basic_string *)&local_90,iVar12,param_2,param_3);
        if ((local_90 & 1) == 0) {
          local_90 = CONCAT71(local_90._1_7_,2);
          pbVar9 = pbVar10;
        }
        else {
          local_88 = 1;
          pbVar9 = local_80;
        }
        *pbVar9 = bVar1;
        pbVar9[1] = (basic_string)0x0;
        this = (PUScriptLexer *)setToken(pPVar6,(basic_string *)&local_90,iVar12,param_2,param_3);
        cVar8 = '\0';
        break;
      default:
        if ((bVar1 == (basic_string)0x7b) || (bVar1 == (basic_string)0x7d))
        goto switchD_00e443f8_caseD_3a;
switchD_00e443f8_caseD_b:
        if ((local_90 & 1) == 0) {
          uVar13 = (ulong)((byte)local_90._0_1_ >> 1);
          uVar7 = 0x16;
          if (uVar13 != 0x16) goto LAB_00e44728;
LAB_00e448b0:
          this = (PUScriptLexer *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 __grow_by((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_90,uVar7,1,uVar7,uVar7,0,0);
          if ((local_90 & 1) != 0) goto LAB_00e4472c;
LAB_00e448d4:
          local_90 = CONCAT71(local_90._1_7_,(char)uVar13 * '\x02' + '\x02');
          pbVar9 = pbVar10;
        }
        else {
          uVar7 = (local_90 & 0xfffffffffffffffe) - 1;
          uVar13 = local_88;
          if (local_88 == uVar7) goto LAB_00e448b0;
LAB_00e44728:
          if ((local_90 & 1) == 0) goto LAB_00e448d4;
LAB_00e4472c:
          local_88 = uVar13 + 1;
          pbVar9 = local_80;
        }
        pbVar9[uVar13] = bVar1;
        (pbVar9 + uVar13)[1] = (basic_string)0x0;
        cVar8 = '\x05';
        goto joined_r0x00e4451c;
      }
      goto switchD_00e44340_default;
    case '\x06':
      if ((bVar16 == (basic_string)0x2f) && (bVar1 == (basic_string)0x2f)) {
        this = (PUScriptLexer *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_90,"",0);
        goto LAB_00e4443c;
      }
      if ((bVar16 == (basic_string)0x2f) && (bVar1 == (basic_string)0x2a)) {
        this = (PUScriptLexer *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_90,"",0);
        goto LAB_00e444d4;
      }
code_r0x00e444e8:
      switch(bVar1) {
      case (basic_string)0x9:
      case (basic_string)0x20:
        this = (PUScriptLexer *)setToken(this,(basic_string *)&local_90,iVar12,param_2,param_3);
LAB_00e44514:
        cVar8 = '\0';
        goto joined_r0x00e4451c;
      case (basic_string)0xa:
      case (basic_string)0xd:
        pPVar6 = (PUScriptLexer *)setToken(this,(basic_string *)&local_90,iVar12,param_2,param_3);
        if ((local_90 & 1) == 0) {
          local_90 = CONCAT71(local_90._1_7_,2);
          pbVar9 = pbVar10;
        }
        else {
          local_88 = 1;
          pbVar9 = local_80;
        }
        *pbVar9 = bVar1;
        pbVar9[1] = (basic_string)0x0;
        this = (PUScriptLexer *)setToken(pPVar6,(basic_string *)&local_90,iVar12,param_2,param_3);
        cVar8 = '\0';
        break;
      case (basic_string)0xb:
      case (basic_string)0xc:
      case (basic_string)0xe:
      case (basic_string)0xf:
      case (basic_string)0x10:
      case (basic_string)0x11:
      case (basic_string)0x12:
      case (basic_string)0x13:
      case (basic_string)0x14:
      case (basic_string)0x15:
      case (basic_string)0x16:
      case (basic_string)0x17:
      case (basic_string)0x18:
      case (basic_string)0x19:
      case (basic_string)0x1a:
      case (basic_string)0x1b:
      case (basic_string)0x1c:
      case (basic_string)0x1d:
      case (basic_string)0x1e:
      case (basic_string)0x1f:
      case (basic_string)0x21:
      case (basic_string)0x22:
      case (basic_string)0x23:
      case (basic_string)0x24:
      case (basic_string)0x25:
      case (basic_string)0x26:
      case (basic_string)0x27:
      case (basic_string)0x28:
      case (basic_string)0x29:
      case (basic_string)0x2a:
      case (basic_string)0x2b:
      case (basic_string)0x2c:
      case (basic_string)0x2d:
      case (basic_string)0x2e:
      case (basic_string)0x2f:
      case (basic_string)0x30:
      case (basic_string)0x31:
      case (basic_string)0x32:
      case (basic_string)0x33:
      case (basic_string)0x34:
      case (basic_string)0x35:
      case (basic_string)0x36:
      case (basic_string)0x37:
      case (basic_string)0x38:
      case (basic_string)0x39:
        goto switchD_00e444fc_caseD_b;
      case (basic_string)0x3a:
switchD_00e444fc_caseD_3a:
        pPVar6 = (PUScriptLexer *)setToken(this,(basic_string *)&local_90,iVar12,param_2,param_3);
        if ((local_90 & 1) == 0) {
          local_90 = CONCAT71(local_90._1_7_,2);
          pbVar9 = pbVar10;
        }
        else {
          local_88 = 1;
          pbVar9 = local_80;
        }
        *pbVar9 = bVar1;
        pbVar9[1] = (basic_string)0x0;
        this = (PUScriptLexer *)setToken(pPVar6,(basic_string *)&local_90,iVar12,param_2,param_3);
        cVar8 = '\0';
        break;
      default:
        if ((bVar1 == (basic_string)0x7b) || (bVar1 == (basic_string)0x7d))
        goto switchD_00e444fc_caseD_3a;
switchD_00e444fc_caseD_b:
        if ((local_90 & 1) == 0) {
          uVar13 = (ulong)((byte)local_90._0_1_ >> 1);
          uVar7 = 0x16;
          if (uVar13 != 0x16) goto LAB_00e44698;
LAB_00e44850:
          this = (PUScriptLexer *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 __grow_by((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_90,uVar7,1,uVar7,uVar7,0,0);
          if ((local_90 & 1) != 0) goto LAB_00e4469c;
LAB_00e44874:
          local_90 = CONCAT71(local_90._1_7_,(char)uVar13 * '\x02' + '\x02');
          pbVar9 = pbVar10;
        }
        else {
          uVar7 = (local_90 & 0xfffffffffffffffe) - 1;
          uVar13 = local_88;
          if (local_88 == uVar7) goto LAB_00e44850;
LAB_00e44698:
          if ((local_90 & 1) == 0) goto LAB_00e44874;
LAB_00e4469c:
          local_88 = uVar13 + 1;
          pbVar9 = local_80;
        }
        pbVar9[uVar13] = bVar1;
        (pbVar9 + uVar13)[1] = (basic_string)0x0;
        cVar8 = '\x03';
        goto joined_r0x00e4451c;
      }
switchD_00e44340_default:
      break;
    default:
      goto switchD_00e44340_default;
    }
joined_r0x00e4451c:
    if ((bVar1 == (basic_string)0xd) ||
       ((bVar1 == (basic_string)0xa && (bVar16 != (basic_string)0xd)))) {
      iVar12 = iVar12 + 1;
    }
LAB_00e44314:
    uVar14 = uVar14 - 1;
    pbVar15 = pbVar15 + 1;
    bVar16 = bVar1;
  } while (uVar14 != 0);
  if (cVar8 != '\x05') {
    if (cVar8 == '\x04') {
      puts("Exception");
      goto joined_r0x00e44bfc;
    }
    if (cVar8 != '\x03') goto joined_r0x00e44bfc;
  }
  uVar14 = local_90 >> 1 & 0x7f;
  if ((local_90 & 1) != 0) {
    uVar14 = local_88;
  }
  if (uVar14 != 0) {
    setToken(this,(basic_string *)&local_90,iVar12,param_2,param_3);
  }
joined_r0x00e44bfc:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

