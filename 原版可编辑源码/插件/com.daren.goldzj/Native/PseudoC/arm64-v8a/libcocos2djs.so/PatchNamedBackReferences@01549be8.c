
/* v8::internal::RegExpParser::PatchNamedBackReferences() */

void __thiscall v8::internal::RegExpParser::PatchNamedBackReferences(RegExpParser *this)

{
  ushort *puVar1;
  ushort *puVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  Zone *this_00;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  long lVar12;
  long lVar13;
  char *local_40;
  long lStack_38;
  
  plVar6 = *(long **)(this + 0x28);
  if (plVar6 != (long *)0x0) {
    if (*(long *)(this + 0x20) == 0) {
LAB_01549d6c:
      iVar4 = __strlen_chk("Invalid named capture referenced",0x21);
      if (this[0x51] == (RegExpParser)0x0) {
        lStack_38 = (long)iVar4;
        this[0x51] = (RegExpParser)0x1;
        local_40 = "Invalid named capture referenced";
        lVar12 = Factory::NewStringFromOneByte(*(undefined8 *)this,&local_40,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
        **(long **)(this + 0x10) = lVar12;
        *(undefined4 *)(this + 0x38) = 0x200000;
        *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(long *)(this + 0x30) + 0x24);
      }
    }
    else if (0 < *(int *)((long)plVar6 + 0xc)) {
      lVar12 = 0;
      do {
        this_00 = *(Zone **)(this + 8);
        puVar9 = *(undefined8 **)(this_00 + 0x10);
        lVar13 = *(long *)(*plVar6 + lVar12 * 8);
        if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar9) < 0x20) {
          puVar9 = (undefined8 *)Zone::NewExpand(this_00,0x20);
        }
        else {
          *(undefined8 **)(this_00 + 0x10) = puVar9 + 4;
        }
        *puVar9 = &PTR__RegExpTree_01cc79f0;
        puVar9[1] = 0;
        *(undefined4 *)(puVar9 + 2) = 0;
        puVar9[3] = 0;
        plVar7 = *(long **)(lVar13 + 0x10);
        puVar9[3] = plVar7;
        plVar8 = (long *)(*(long *)(this + 0x20) + 8);
        plVar6 = (long *)*plVar8;
        if (plVar6 == (long *)0x0) goto LAB_01549d6c;
        puVar1 = (ushort *)*plVar7;
        puVar2 = (ushort *)plVar7[1];
        plVar7 = plVar8;
        do {
          if (puVar1 != puVar2) {
            puVar10 = (ushort *)**(undefined8 **)(plVar6[4] + 0x18);
            puVar11 = puVar1;
            do {
              if ((ushort *)(*(undefined8 **)(plVar6[4] + 0x18))[1] == puVar10) {
LAB_01549d00:
                plVar3 = (long *)plVar6[1];
                goto joined_r0x01549d08;
              }
              if (*puVar10 < *puVar11) goto LAB_01549d00;
              if (*puVar11 < *puVar10) break;
              puVar11 = puVar11 + 1;
              puVar10 = puVar10 + 1;
            } while (puVar2 != puVar11);
          }
          plVar3 = (long *)*plVar6;
          plVar7 = plVar6;
joined_r0x01549d08:
          plVar6 = plVar3;
        } while (plVar6 != (long *)0x0);
        if (plVar7 == plVar8) goto LAB_01549d6c;
        puVar9 = *(undefined8 **)(plVar7[4] + 0x18);
        for (puVar11 = (ushort *)*puVar9; puVar11 != (ushort *)puVar9[1]; puVar11 = puVar11 + 1) {
          if (puVar2 == puVar1) goto LAB_01549d6c;
          if (*puVar1 < *puVar11) goto LAB_01549d6c;
          if (*puVar11 < *puVar1) break;
          puVar1 = puVar1 + 1;
        }
        uVar5 = GetCapture(this,*(int *)(plVar7[4] + 0x10));
        *(undefined8 *)(lVar13 + 8) = uVar5;
        plVar6 = *(long **)(this + 0x28);
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)((long)plVar6 + 0xc));
    }
  }
  return;
}

