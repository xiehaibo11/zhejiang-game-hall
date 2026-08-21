
/* v8::internal::compiler::InstructionSequence::InstructionBlocksFor(v8::internal::Zone*,
   v8::internal::compiler::Schedule const*) */

long * v8::internal::compiler::InstructionSequence::InstructionBlocksFor
                 (Zone *param_1,Schedule *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
  vVar4;
  vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
  vVar5;
  vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
  *this;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  Zone *this_00;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  
  plVar7 = *(long **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)plVar7) < 0x20) {
    plVar7 = (long *)Zone::NewExpand(param_1,0x20);
  }
  else {
    *(long **)(param_1 + 0x10) = plVar7 + 4;
  }
  lVar19 = *(long *)(param_2 + 0x48);
  lVar21 = *(long *)(param_2 + 0x50);
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)param_1;
  lVar10 = (lVar21 - lVar19) * 0x20000000;
  if (lVar10 != 0) {
    uVar17 = (lVar21 - lVar19) * 0x20000000 >> 0x20;
    if (uVar17 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar9 = lVar10 >> 0x1d;
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar8) < uVar9) {
      puVar8 = (undefined8 *)Zone::NewExpand(param_1,uVar9);
    }
    else {
      *(ulong *)(param_1 + 0x10) = (long)puVar8 + uVar9;
    }
    *plVar7 = (long)puVar8;
    plVar7[1] = (long)puVar8;
    plVar7[2] = (long)(puVar8 + uVar17);
    do {
      *puVar8 = 0;
      uVar17 = uVar17 - 1;
      puVar8 = (undefined8 *)(plVar7[1] + 8);
      plVar7[1] = (long)puVar8;
    } while (uVar17 != 0);
  }
  plVar18 = *(long **)(param_2 + 0x48);
  if (plVar18 != *(long **)(param_2 + 0x50)) {
    lVar19 = 0;
    do {
      lVar21 = *plVar18;
      if (*(undefined8 **)(lVar21 + 0x40) == *(undefined8 **)(lVar21 + 0x48)) {
        vVar5 = (vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
                 )0x0;
      }
      else {
        vVar5 = (vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
                 )(*(short *)(*(long *)**(undefined8 **)(lVar21 + 0x40) + 0x10) == 7);
      }
      this = *(vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
               **)(param_1 + 0x10);
      if ((ulong)(*(long *)(param_1 + 0x18) - (long)this) < 0x80) {
        this = (vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
                *)Zone::NewExpand(param_1,0x80);
      }
      else {
        *(vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
          **)(param_1 + 0x10) = this + 0x80;
      }
      uVar3 = *(undefined4 *)(lVar21 + 4);
      if (*(long *)(lVar21 + 0x20) == 0) {
        uVar11 = 0xffffffff;
        lVar10 = *(long *)(lVar21 + 0x28);
        if (lVar10 != 0) goto LAB_01647bb4;
LAB_01647bc8:
        uVar12 = 0xffffffff;
      }
      else {
        uVar11 = *(undefined4 *)(*(long *)(lVar21 + 0x20) + 4);
        lVar10 = *(long *)(lVar21 + 0x28);
        if (lVar10 == 0) goto LAB_01647bc8;
LAB_01647bb4:
        uVar12 = *(undefined4 *)(lVar10 + 4);
      }
      vVar4 = *(vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
                *)(lVar21 + 8);
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
      *(undefined8 *)(this + 0x10) = 0;
      *(Zone **)(this + 0x18) = param_1;
      *(undefined8 *)(this + 0x28) = 0;
      *(undefined8 *)(this + 0x30) = 0;
      *(undefined8 *)(this + 0x20) = 0;
      *(Zone **)(this + 0x38) = param_1;
      *(undefined8 *)(this + 0x40) = 0;
      *(undefined8 *)(this + 0x48) = 0;
      *(undefined8 *)(this + 0x50) = 0;
      *(Zone **)(this + 0x58) = param_1;
      *(undefined4 *)(this + 0x60) = 0xffffffff;
      *(undefined4 *)(this + 100) = uVar3;
      *(undefined4 *)(this + 0x68) = uVar11;
      *(undefined4 *)(this + 0x6c) = uVar12;
      *(undefined4 *)(this + 0x74) = 0xffffffff;
      this[0x79] = vVar5;
      this[0x7e] = (vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
                    )0x0;
      this[0x78] = vVar4;
      *(undefined4 *)(this + 0x7a) = 0;
      plVar20 = *(long **)(lVar21 + 0x60);
      plVar16 = *(long **)(lVar21 + 0x68);
      lVar10 = *(long *)this;
      uVar17 = (long)plVar16 - (long)plVar20 >> 3;
      if ((ulong)(*(long *)(this + 0x10) - lVar10 >> 2) < uVar17) {
        lVar13 = *(long *)(this + 8);
        lVar6 = *(long *)(param_1 + 0x10);
        uVar9 = ((long)plVar16 - (long)plVar20 >> 1) + 7U & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(param_1 + 0x18) - lVar6) < uVar9) {
          lVar6 = Zone::NewExpand(param_1,uVar9);
        }
        else {
          *(ulong *)(param_1 + 0x10) = lVar6 + uVar9;
        }
        puVar2 = *(undefined4 **)this;
        puVar15 = *(undefined4 **)(this + 8);
        puVar1 = (undefined4 *)(lVar6 + (lVar13 - lVar10 >> 2) * 4);
        puVar14 = puVar1;
        while (puVar15 != puVar2) {
          puVar15 = puVar15 + -1;
          puVar14 = puVar14 + -1;
          *puVar14 = *puVar15;
        }
        *(undefined4 **)this = puVar14;
        *(undefined4 **)(this + 8) = puVar1;
        *(ulong *)(this + 0x10) = lVar6 + uVar17 * 4;
        plVar20 = *(long **)(lVar21 + 0x60);
        plVar16 = *(long **)(lVar21 + 0x68);
      }
      for (; plVar20 != plVar16; plVar20 = plVar20 + 1) {
        if (*plVar20 == 0) {
          local_68[0] = 0xffffffff;
        }
        else {
          local_68[0] = *(undefined4 *)(*plVar20 + 4);
        }
        if (*(undefined4 **)(this + 8) < *(undefined4 **)(this + 0x10)) {
          **(undefined4 **)(this + 8) = local_68[0];
          *(long *)(this + 8) = *(long *)(this + 8) + 4;
        }
        else {
          std::__ndk1::
          vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
          ::__push_back_slow_path<v8::internal::compiler::RpoNumber>(this,(RpoNumber *)local_68);
        }
      }
      plVar20 = *(long **)(lVar21 + 0x80);
      plVar16 = *(long **)(lVar21 + 0x88);
      lVar10 = *(long *)(this + 0x20);
      uVar17 = (long)plVar16 - (long)plVar20 >> 3;
      if ((ulong)(*(long *)(this + 0x30) - lVar10 >> 2) < uVar17) {
        lVar13 = *(long *)(this + 0x28);
        this_00 = *(Zone **)(this + 0x38);
        lVar6 = *(long *)(this_00 + 0x10);
        uVar9 = ((long)plVar16 - (long)plVar20 >> 1) + 7U & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(this_00 + 0x18) - lVar6) < uVar9) {
          lVar6 = Zone::NewExpand(this_00,uVar9);
        }
        else {
          *(ulong *)(this_00 + 0x10) = lVar6 + uVar9;
        }
        puVar2 = *(undefined4 **)(this + 0x20);
        puVar15 = *(undefined4 **)(this + 0x28);
        puVar1 = (undefined4 *)(lVar6 + (lVar13 - lVar10 >> 2) * 4);
        puVar14 = puVar1;
        while (puVar15 != puVar2) {
          puVar15 = puVar15 + -1;
          puVar14 = puVar14 + -1;
          *puVar14 = *puVar15;
        }
        *(undefined4 **)(this + 0x20) = puVar14;
        *(undefined4 **)(this + 0x28) = puVar1;
        *(ulong *)(this + 0x30) = lVar6 + uVar17 * 4;
        plVar20 = *(long **)(lVar21 + 0x80);
        plVar16 = *(long **)(lVar21 + 0x88);
        if (plVar20 != plVar16) {
LAB_01647dbc:
          do {
            if (*plVar20 == 0) {
              local_70[0] = 0xffffffff;
            }
            else {
              local_70[0] = *(undefined4 *)(*plVar20 + 4);
            }
            if (*(undefined4 **)(this + 0x28) < *(undefined4 **)(this + 0x30)) {
              **(undefined4 **)(this + 0x28) = local_70[0];
              *(long *)(this + 0x28) = *(long *)(this + 0x28) + 4;
            }
            else {
              std::__ndk1::
              vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
              ::__push_back_slow_path<v8::internal::compiler::RpoNumber>
                        (this + 0x20,(RpoNumber *)local_70);
            }
            plVar20 = plVar20 + 1;
          } while (plVar16 != plVar20);
          plVar20 = *(long **)(lVar21 + 0x80);
          plVar16 = *(long **)(lVar21 + 0x88);
        }
      }
      else if (plVar20 != plVar16) goto LAB_01647dbc;
      if (((long)plVar16 - (long)plVar20 == 8) && (*(int *)(*plVar20 + 0x34) == 4)) {
        this[0x7a] = (vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
                      )0x1;
      }
      plVar18 = plVar18 + 1;
      *(vector<v8::internal::compiler::RpoNumber,v8::internal::ZoneAllocator<v8::internal::compiler::RpoNumber>>
        **)(*plVar7 + lVar19 * 8) = this;
      lVar19 = lVar19 + 1;
    } while (plVar18 != *(long **)(param_2 + 0x50));
  }
  return plVar7;
}

