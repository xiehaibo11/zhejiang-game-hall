
/* v8::internal::StringStream::PrintByteArray(v8::internal::ByteArray) */

void __thiscall v8::internal::StringStream::PrintByteArray(StringStream *this,long param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint local_78 [2];
  uint local_70;
  uint local_68;
  
  uVar1 = *(int *)(param_2 + 3) >> 1;
  if (uVar1 != 0) {
    uVar9 = 0;
    do {
      pcVar4 = " \'%c\'";
      bVar2 = *(byte *)(param_2 + 7 + uVar9);
      uVar3 = __strlen_chk("             %d: %3d 0x%02x",0x1c);
      local_78[0] = (uint)uVar9;
      local_70 = (uint)bVar2;
      local_68 = local_70;
      Add(this,"             %d: %3d 0x%02x",uVar3,local_78,3);
      uVar7 = (uint)bVar2;
      uVar8 = (uint)bVar2;
      if (uVar7 - 0x20 < 0x5f) {
        uVar3 = __strlen_chk(" \'%c\'",6);
        puVar5 = local_78;
        uVar6 = 1;
        local_78[0] = uVar8;
LAB_011f49b0:
        Add(this,pcVar4,uVar3,puVar5,uVar6);
      }
      else if (uVar7 != 0) {
        if (uVar7 == 0xd) {
          uVar3 = __strlen_chk(&DAT_019e254d,5);
          pcVar4 = " \'\r\'";
        }
        else {
          if (uVar7 != 10) {
            if (uVar8 < 0x1b) {
              pcVar4 = " ^%c";
              uVar3 = __strlen_chk(&DAT_019e2552,5);
              puVar5 = local_78;
              uVar6 = 1;
              local_78[0] = uVar8 + 0x40;
              goto LAB_011f49b0;
            }
            goto LAB_011f49b4;
          }
          uVar3 = __strlen_chk(&DAT_019e2548,5);
          pcVar4 = " \'\n\'";
        }
        puVar5 = (uint *)0x0;
        uVar6 = 0;
        goto LAB_011f49b0;
      }
LAB_011f49b4:
      uVar3 = __strlen_chk(&DAT_018938a8,2);
      Add(this,&DAT_018938a8,uVar3,0,0);
      uVar9 = uVar9 + 1;
    } while ((uVar9 < 10) && (uVar9 < uVar1));
    if (9 < uVar1) {
      uVar3 = __strlen_chk(&DAT_019e250f,0x17);
      Add(this,&DAT_019e250f,uVar3,0,0);
    }
  }
  return;
}

