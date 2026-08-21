
/* v8::internal::HeapSnapshotJSONSerializer::SerializeString(unsigned char const*) */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::SerializeString
          (HeapSnapshotJSONSerializer *this,uchar *param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong local_68;
  
  puVar4 = *(undefined8 **)(this + 0x28);
  iVar2 = *(int *)(puVar4 + 4);
  *(int *)(puVar4 + 4) = iVar2 + 1;
  *(undefined1 *)(puVar4[2] + (long)iVar2) = 10;
  if ((*(int *)(puVar4 + 4) == *(int *)(puVar4 + 1)) && (*(char *)((long)puVar4 + 0x24) == '\0')) {
    iVar2 = (**(code **)(*(long *)*puVar4 + 0x20))((long *)*puVar4,puVar4[2]);
    if (iVar2 == 1) {
      *(undefined1 *)((long)puVar4 + 0x24) = 1;
    }
    *(undefined4 *)(puVar4 + 4) = 0;
  }
  puVar4 = *(undefined8 **)(this + 0x28);
  iVar2 = *(int *)(puVar4 + 4);
  *(int *)(puVar4 + 4) = iVar2 + 1;
  *(undefined1 *)(puVar4[2] + (long)iVar2) = 0x22;
  if ((*(int *)(puVar4 + 4) == *(int *)(puVar4 + 1)) && (*(char *)((long)puVar4 + 0x24) == '\0')) {
    iVar2 = (**(code **)(*(long *)*puVar4 + 0x20))((long *)*puVar4,puVar4[2]);
    if (iVar2 == 1) {
      *(undefined1 *)((long)puVar4 + 0x24) = 1;
    }
    *(undefined4 *)(puVar4 + 4) = 0;
  }
LAB_011a6f5c:
  do {
    bVar1 = *param_1;
    switch(bVar1) {
    case 0:
      puVar4 = *(undefined8 **)(this + 0x28);
      iVar2 = *(int *)(puVar4 + 4);
      *(int *)(puVar4 + 4) = iVar2 + 1;
      *(undefined1 *)(puVar4[2] + (long)iVar2) = 0x22;
      if ((*(int *)(puVar4 + 4) == *(int *)(puVar4 + 1)) && (*(char *)((long)puVar4 + 0x24) == '\0')
         ) {
        iVar2 = (**(code **)(*(long *)*puVar4 + 0x20))((long *)*puVar4,puVar4[2]);
        if (iVar2 == 1) {
          *(undefined1 *)((long)puVar4 + 0x24) = 1;
        }
        *(undefined4 *)(puVar4 + 4) = 0;
      }
      return;
    case 8:
      OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"\\b");
      param_1 = param_1 + 1;
      break;
    case 9:
      OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"\\t");
      param_1 = param_1 + 1;
      break;
    case 10:
      OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"\\n");
      param_1 = param_1 + 1;
      break;
    case 0xc:
      OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"\\f");
      param_1 = param_1 + 1;
      break;
    case 0xd:
      goto switchD_011a6f74_caseD_d;
    case 0x22:
switchD_011a6f74_caseD_22:
      puVar4 = *(undefined8 **)(this + 0x28);
      iVar2 = *(int *)(puVar4 + 4);
      *(int *)(puVar4 + 4) = iVar2 + 1;
      *(undefined1 *)(puVar4[2] + (long)iVar2) = 0x5c;
      if ((*(int *)(puVar4 + 4) == *(int *)(puVar4 + 1)) && (*(char *)((long)puVar4 + 0x24) == '\0')
         ) {
        iVar2 = (**(code **)(*(long *)*puVar4 + 0x20))((long *)*puVar4,puVar4[2]);
        if (iVar2 == 1) {
          *(undefined1 *)((long)puVar4 + 0x24) = 1;
        }
        *(undefined4 *)(puVar4 + 4) = 0;
      }
      puVar4 = *(undefined8 **)(this + 0x28);
      bVar1 = *param_1;
      iVar2 = *(int *)(puVar4 + 4);
      *(int *)(puVar4 + 4) = iVar2 + 1;
      *(byte *)(puVar4[2] + (long)iVar2) = bVar1;
      goto LAB_011a7034;
    default:
      if (bVar1 == 0x5c) goto switchD_011a6f74_caseD_22;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xb:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
      if ((bVar1 < 0x20) || ((char)bVar1 < '\0')) {
        if (bVar1 < 0x20) {
          FUN_011a71f4(*(undefined8 *)(this + 0x28));
          param_1 = param_1 + 1;
          break;
        }
        local_68 = 0;
        if (param_1[1] == 0) {
          uVar3 = 1;
        }
        else if (param_1[2] == 0) {
          uVar3 = 2;
        }
        else if (param_1[3] == 0) {
          uVar3 = 3;
        }
        else {
          uVar3 = 4;
          if (param_1[4] != 0) {
            uVar3 = 5;
          }
        }
        iVar2 = unibrow::Utf8::CalculateValue(param_1,uVar3,&local_68);
        puVar4 = *(undefined8 **)(this + 0x28);
        if (iVar2 != 0xfffd) {
          FUN_011a71f4(puVar4,iVar2);
          param_1 = param_1 + local_68;
          break;
        }
        iVar2 = *(int *)(puVar4 + 4);
        *(int *)(puVar4 + 4) = iVar2 + 1;
        *(undefined1 *)(puVar4[2] + (long)iVar2) = 0x3f;
      }
      else {
        puVar4 = *(undefined8 **)(this + 0x28);
        iVar2 = *(int *)(puVar4 + 4);
        *(int *)(puVar4 + 4) = iVar2 + 1;
        *(byte *)(puVar4[2] + (long)iVar2) = bVar1;
      }
LAB_011a7034:
      if ((*(int *)(puVar4 + 4) == *(int *)(puVar4 + 1)) && (*(char *)((long)puVar4 + 0x24) == '\0')
         ) {
        iVar2 = (**(code **)(*(long *)*puVar4 + 0x20))((long *)*puVar4,puVar4[2]);
        if (iVar2 == 1) {
          *(undefined1 *)((long)puVar4 + 0x24) = 1;
        }
        *(undefined4 *)(puVar4 + 4) = 0;
      }
      param_1 = param_1 + 1;
      break;
    }
  } while( true );
switchD_011a6f74_caseD_d:
  OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),"\\r");
  param_1 = param_1 + 1;
  goto LAB_011a6f5c;
}

