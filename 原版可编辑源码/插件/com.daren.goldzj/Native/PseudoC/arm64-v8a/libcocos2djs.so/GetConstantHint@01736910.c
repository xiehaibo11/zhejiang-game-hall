
/* v8::internal::compiler::GlobalAccessFeedback::GetConstantHint() const */

void v8::internal::compiler::GlobalAccessFeedback::GetConstantHint(void)

{
  ObjectRef *this;
  short sVar1;
  ushort uVar2;
  long in_x0;
  undefined8 *puVar3;
  undefined1 *in_x8;
  ulong uVar4;
  undefined1 auVar5 [16];
  PropertyCellRef local_40 [16];
  
  if (*(char *)(in_x0 + 8) == '\0') goto LAB_01736a48;
  this = (ObjectRef *)(in_x0 + 0x10);
  puVar3 = (undefined8 *)ObjectRef::data(this);
  if (*(int *)(puVar3 + 1) != 0) {
    if (*(int *)(puVar3 + 1) == 2) {
      uVar4 = *(ulong *)*puVar3;
      if ((uVar4 & 1) == 0) goto LAB_01736974;
      sVar1 = *(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1));
    }
    else {
      sVar1 = *(short *)(puVar3[2] + 0x18);
    }
    if (sVar1 == 0xa5) {
      if (*(char *)(in_x0 + 8) != '\0') {
        puVar3 = (undefined8 *)ObjectRef::data(this);
        if (*(int *)(puVar3 + 1) == 2) {
          uVar4 = *(ulong *)*puVar3;
          if ((uVar4 & 1) == 0) goto LAB_01736afc;
          sVar1 = *(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1));
        }
        else {
          if (*(int *)(puVar3 + 1) == 0) goto LAB_01736afc;
          sVar1 = *(short *)(puVar3[2] + 0x18);
        }
        if (sVar1 == 0xa5) {
          local_40 = (PropertyCellRef  [16])ObjectRef::AsPropertyCell(this);
          auVar5 = PropertyCellRef::value(local_40);
          *in_x8 = 1;
          *(undefined1 (*) [16])(in_x8 + 8) = auVar5;
          return;
        }
      }
LAB_01736afc:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsPropertyCell()");
    }
  }
LAB_01736974:
  if (*(char *)(in_x0 + 8) != '\0') {
    puVar3 = (undefined8 *)ObjectRef::data(this);
    if (*(int *)(puVar3 + 1) != 0) {
      if (*(int *)(puVar3 + 1) == 2) {
        uVar4 = *(ulong *)*puVar3;
        if ((uVar4 & 1) == 0) goto LAB_01736a48;
        uVar2 = *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1));
      }
      else {
        uVar2 = *(ushort *)(puVar3[2] + 0x18);
      }
      if ((uVar2 - 0x88 < 10) && ((*(byte *)(in_x0 + 0x23) >> 6 & 1) != 0)) {
        if (*(char *)(in_x0 + 8) != '\0') {
          puVar3 = (undefined8 *)ObjectRef::data(this);
          if (*(int *)(puVar3 + 1) == 2) {
            uVar4 = *(ulong *)*puVar3;
            if ((uVar4 & 1) == 0) goto LAB_01736b10;
            uVar2 = *(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1));
          }
          else {
            if (*(int *)(puVar3 + 1) == 0) goto LAB_01736b10;
            uVar2 = *(ushort *)(puVar3[2] + 0x18);
          }
          if (uVar2 - 0x88 < 10) {
            local_40 = (PropertyCellRef  [16])ObjectRef::AsContext(this);
            ContextRef::get(local_40,*(uint *)(in_x0 + 0x20) >> 0xc & 0x3ffff,0);
            return;
          }
        }
LAB_01736b10:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","IsScriptContextSlot()");
      }
    }
  }
LAB_01736a48:
  *in_x8 = 0;
  in_x8[8] = 0;
  return;
}

