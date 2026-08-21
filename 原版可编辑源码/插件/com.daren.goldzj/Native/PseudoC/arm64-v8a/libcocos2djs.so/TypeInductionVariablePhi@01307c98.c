
/* v8::internal::compiler::Typer::Visitor::TypeInductionVariablePhi(v8::internal::compiler::Node*)
    */

long __thiscall
v8::internal::compiler::Typer::Visitor::TypeInductionVariablePhi(Visitor *this,Node *param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined **local_190;
  undefined **local_188;
  locale alStack_180 [8];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined **local_130 [17];
  undefined8 local_a8;
  undefined4 local_a0;
  double local_98;
  double local_90;
  long local_88;
  long local_48;
  
  plVar4 = (long *)NodeProperties::GetControlInput(param_1,0);
  iVar3 = *(int *)(*plVar4 + 0x1c);
  plVar4 = (long *)(*(long *)(this + 0x10) + 0x68);
  plVar9 = (long *)*plVar4;
  if (plVar9 == (long *)0x0) {
LAB_01307d20:
    plVar8 = plVar4;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x14) & 0xffffff;
    plVar8 = plVar4;
    do {
      if ((int)uVar1 <= (int)plVar9[4]) {
        plVar8 = plVar9;
      }
      plVar9 = (long *)plVar9[(int)plVar9[4] < (int)uVar1];
    } while (plVar9 != (long *)0x0);
    if ((plVar8 == plVar4) || ((int)uVar1 < (int)plVar8[4])) goto LAB_01307d20;
  }
  lVar11 = plVar8[5];
  iVar10 = *(int *)(lVar11 + 0x68);
  lVar5 = NodeProperties::GetValueInput(param_1,0);
  lVar5 = *(long *)(lVar5 + 8);
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  local_48 = lVar5;
  lVar6 = NodeProperties::GetValueInput(param_1,2);
  local_88 = *(long *)(lVar6 + 8);
  if (local_88 == 0) {
    local_88 = 1;
  }
  lVar6 = *(long *)(this + 8);
  if (lVar5 != *(long *)(*(long *)(lVar6 + 0x18) + 0x150)) {
    uVar7 = Type::SlowIs((Type *)&local_48);
    if ((uVar7 & 1) == 0) goto LAB_01307de0;
    lVar6 = *(long *)(this + 8);
    lVar5 = *(long *)(*(long *)(lVar6 + 0x18) + 0x150);
  }
  if (local_88 != lVar5) {
    uVar7 = Type::SlowIs((Type *)&local_88,lVar5);
    if ((uVar7 & 1) == 0) goto LAB_01307de0;
    lVar6 = *(long *)(this + 8);
  }
  if (iVar10 == 0) {
    local_190 = (undefined **)
                OperationTyper::NumberAdd((OperationTyper *)(lVar6 + 0x28),local_48,local_88);
  }
  else {
    local_190 = (undefined **)OperationTyper::NumberSubtract();
  }
  uVar7 = Type::Maybe((Type *)&local_190,0x1001);
  if ((uVar7 & 1) == 0) {
    if (local_48 == 1) {
      return 1;
    }
    if (local_88 == *(long *)(*(long *)(*(long *)(this + 8) + 0x18) + 0xe0)) {
      return local_48;
    }
    uVar7 = Type::SlowIs((Type *)&local_88);
    if ((uVar7 & 1) != 0) {
      return local_48;
    }
    local_98 = INFINITY;
    local_90 = -INFINITY;
    if (iVar10 == 0) {
      dVar12 = (double)Type::Min((Type *)&local_88);
      dVar13 = (double)Type::Max((Type *)&local_88);
    }
    else {
      dVar12 = (double)Type::Max((Type *)&local_88);
      dVar12 = -dVar12;
      dVar13 = (double)Type::Min((Type *)&local_88);
      dVar13 = -dVar13;
    }
    if (dVar12 < 0.0) {
      if (0.0 < dVar13) {
        return *(long *)(*(long *)(*(long *)(this + 8) + 0x18) + 0x150);
      }
      dVar14 = (double)Type::Max((Type *)&local_48);
      plVar9 = *(long **)(lVar11 + 0x30);
      dVar13 = -INFINITY;
      local_98 = dVar14;
      dVar15 = local_90;
      for (plVar4 = *(long **)(lVar11 + 0x28); plVar4 != plVar9; plVar4 = plVar4 + 2) {
        lVar5 = plVar4[1];
        local_190 = *(undefined ***)(*plVar4 + 8);
        if (local_190 == (undefined **)0x0) {
          local_190 = (undefined **)0x1;
        }
        if ((local_190 == *(undefined ***)(*(long *)(*(long *)(this + 8) + 0x18) + 0x150)) ||
           (uVar7 = Type::SlowIs((Type *)&local_190), dVar15 = dVar13, (uVar7 & 1) != 0)) {
          if (local_190 == (undefined **)0x1) {
            dVar13 = (double)Type::Min((Type *)&local_48);
            dVar15 = dVar13;
            break;
          }
          dVar15 = (double)Type::Min((Type *)&local_190);
          dVar16 = dVar15 + 1.0;
          if ((int)lVar5 != 0) {
            dVar16 = dVar15;
          }
          dVar15 = dVar12 + dVar16;
          if (dVar12 + dVar16 <= dVar13) {
            dVar15 = dVar13;
          }
        }
        dVar13 = dVar15;
      }
      local_90 = dVar15;
      dVar12 = (double)Type::Min((Type *)&local_48);
      local_90 = dVar12;
      if (dVar13 <= dVar12) {
        dVar12 = dVar13;
        local_90 = dVar13;
      }
    }
    else {
      dVar12 = (double)Type::Min((Type *)&local_48);
      plVar9 = *(long **)(lVar11 + 0x50);
      dVar15 = INFINITY;
      dVar14 = local_98;
      local_90 = dVar12;
      for (plVar4 = *(long **)(lVar11 + 0x48); plVar4 != plVar9; plVar4 = plVar4 + 2) {
        lVar5 = plVar4[1];
        local_190 = *(undefined ***)(*plVar4 + 8);
        if (local_190 == (undefined **)0x0) {
          local_190 = (undefined **)0x1;
        }
        if ((local_190 == *(undefined ***)(*(long *)(*(long *)(this + 8) + 0x18) + 0x150)) ||
           (uVar7 = Type::SlowIs((Type *)&local_190), dVar14 = dVar15, (uVar7 & 1) != 0)) {
          if (local_190 == (undefined **)0x1) {
            dVar15 = (double)Type::Max((Type *)&local_48);
            dVar14 = dVar15;
            break;
          }
          dVar14 = (double)Type::Max((Type *)&local_190);
          dVar16 = dVar14 + -1.0;
          if ((int)lVar5 != 0) {
            dVar16 = dVar14;
          }
          dVar14 = dVar13 + dVar16;
          if (dVar15 <= dVar13 + dVar16) {
            dVar14 = dVar15;
          }
        }
        dVar15 = dVar14;
      }
      local_98 = dVar14;
      dVar14 = (double)Type::Max((Type *)&local_48);
      local_98 = dVar14;
      if (dVar14 <= dVar15) {
        dVar14 = dVar15;
        local_98 = dVar15;
      }
    }
    if (FLAG_trace_turbo_loop != '\0') {
      local_190 = (undefined **)0x1ca1178;
      local_130[0] = (undefined **)0x1ca11a0;
      std::__ndk1::ios_base::init((ios_base *)local_130,(AndroidLogStream *)&local_188);
      local_a0 = 0xffffffff;
      local_188 = &PTR__basic_streambuf_01c671a8;
      local_a8 = 0;
      local_190 = &PTR__StdoutStream_01ca1128;
      local_130[0] = &PTR__StdoutStream_01ca1150;
      std::__ndk1::locale::locale(alStack_180);
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      local_188 = &PTR__AndroidLogStream_01cbc008;
      uStack_150 = 0;
      local_158 = 0;
      uStack_160 = 0;
      local_168 = 0;
      uStack_170 = 0;
      local_178 = 0;
      *(undefined8 *)(alStack_180 + (long)local_190[-3]) = 10;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_190,"Loop (",6);
      lVar5 = NodeProperties::GetControlInput(param_1,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_190,
                 *(uint *)(lVar5 + 0x14) & 0xffffff);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_190,") variable bounds in ",0x15);
      pcVar2 = "addition";
      if (iVar10 != 0) {
        pcVar2 = "subtraction";
      }
      uVar7 = 8;
      if (iVar10 != 0) {
        uVar7 = 0xb;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_190,pcVar2,uVar7);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_190," for phi ",9);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_190,
                 *(uint *)(param_1 + 0x14) & 0xffffff);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_190,": (",3);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_190,dVar12);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_190,", ",2);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_190,dVar14);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_190,")\n",2);
      local_190 = &PTR__StdoutStream_01ca1128;
      local_130[0] = &PTR__StdoutStream_01ca1150;
      AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_188);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_130);
    }
    lVar5 = Type::Range(dVar12,dVar14,(Zone *)**(undefined8 **)(*(long *)(this + 8) + 8));
    return lVar5;
  }
LAB_01307de0:
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  if (0 < iVar3) {
    iVar10 = 0;
    do {
      lVar11 = NodeProperties::GetValueInput(param_1,iVar10);
      lVar11 = *(long *)(lVar11 + 8);
      if (lVar11 == 0) {
        lVar11 = 1;
      }
      lVar5 = Type::Union(lVar5,lVar11,**(undefined8 **)(*(long *)(this + 8) + 8));
      iVar10 = iVar10 + 1;
    } while (iVar3 != iVar10);
  }
  return lVar5;
}

