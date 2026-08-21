
/* v8::internal::compiler::MapRef::AsElementsKind(v8::internal::ElementsKind) const */

void v8::internal::compiler::MapRef::AsElementsKind
               (undefined8 *param_1,ObjectRef *param_2,uint param_3)

{
  undefined8 *puVar1;
  short sVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *local_50;
  undefined8 uStack_48;
  
  if (*(int *)(*(undefined8 **)param_2 + 1) == 2) {
    puVar8 = *(undefined8 **)(param_2 + 8);
    uVar3 = Map::AsElementsKind(*puVar8,**(undefined8 **)param_2,param_3);
    ObjectRef::ObjectRef((ObjectRef *)&local_50,puVar8,uVar3,0);
    puVar8 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_50);
    if (*(int *)(puVar8 + 1) == 2) {
      uVar6 = *(ulong *)*puVar8;
      if ((uVar6 & 1) == 0) goto LAB_01721344;
      sVar2 = *(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1));
    }
    else {
      if (*(int *)(puVar8 + 1) == 0) goto LAB_01721344;
      sVar2 = *(short *)(puVar8[2] + 0x18);
    }
    if (sVar2 == 0xa2) {
LAB_0172131c:
      *(undefined1 *)param_1 = 1;
LAB_01721328:
      param_1[2] = uStack_48;
      param_1[1] = local_50;
      return;
    }
  }
  else {
    lVar4 = ObjectRef::data(param_2);
    if (*(int *)(lVar4 + 8) != 1) {
LAB_0172136c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
    }
    if (*(short *)(*(long *)(lVar4 + 0x10) + 0x18) == 0xa2) {
      if ((uint)(*(byte *)(lVar4 + 0x21) >> 3) == (param_3 & 0xff)) {
        *(undefined1 *)param_1 = 1;
        uStack_48 = *(undefined8 *)(param_2 + 8);
        local_50 = *(undefined8 **)param_2;
        goto LAB_01721328;
      }
      lVar4 = ObjectRef::data(param_2);
      if (*(int *)(lVar4 + 8) != 1) goto LAB_0172136c;
      if (*(short *)(*(long *)(lVar4 + 0x10) + 0x18) == 0xa2) {
        if (*(char *)(lVar4 + 0x43) != '\x01') {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","serialized_elements_kind_generalizations_");
        }
        puVar8 = *(undefined8 **)(lVar4 + 0x48);
        puVar1 = *(undefined8 **)(lVar4 + 0x50);
        do {
          if (puVar8 == puVar1) {
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            return;
          }
          uStack_48 = *(undefined8 *)(param_2 + 8);
          puVar9 = (undefined8 *)*puVar8;
          local_50 = puVar9;
          if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","(data_) != nullptr");
          }
          puVar5 = (undefined8 *)ObjectRef::data((ObjectRef *)&local_50);
          if (*(int *)(puVar5 + 1) == 2) {
            uVar6 = *(ulong *)*puVar5;
            if ((uVar6 & 1) == 0) break;
            sVar2 = *(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1));
          }
          else {
            if (*(int *)(puVar5 + 1) == 0) break;
            sVar2 = *(short *)(puVar5[2] + 0x18);
          }
          if (sVar2 != 0xa2) break;
          if (*(int *)(puVar9 + 1) == 2) {
            pbVar7 = (byte *)(*(long *)*puVar9 + 10);
          }
          else {
            lVar4 = ObjectRef::data((ObjectRef *)&local_50);
            if (*(int *)(lVar4 + 8) != 1) goto LAB_0172136c;
            if (*(short *)(*(long *)(lVar4 + 0x10) + 0x18) != 0xa2) break;
            pbVar7 = (byte *)(lVar4 + 0x21);
          }
          if ((uint)(*pbVar7 >> 3) == (param_3 & 0xff)) goto LAB_0172131c;
          puVar8 = puVar8 + 1;
        } while( true );
      }
    }
  }
LAB_01721344:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

