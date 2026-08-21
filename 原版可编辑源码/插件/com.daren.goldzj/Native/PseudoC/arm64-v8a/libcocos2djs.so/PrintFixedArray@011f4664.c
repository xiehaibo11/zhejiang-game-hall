
/* v8::internal::StringStream::PrintFixedArray(v8::internal::FixedArray, unsigned int) */

void __thiscall
v8::internal::StringStream::PrintFixedArray(StringStream *this,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  uint local_70 [2];
  ulong local_68;
  
  if (param_3 != 0) {
    uVar6 = 0;
    do {
      if (*(int *)(param_2 + 7 + uVar6 * 4) != *(int *)((param_2 & 0xffffffff00000000) + 0xa8)) {
        iVar5 = 0x11;
        do {
          while( true ) {
            uVar1 = *(uint *)(this + 0xc);
            uVar2 = *(uint *)(this + 0x10);
            if (uVar1 - uVar2 != 1) break;
LAB_011f46f0:
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) goto LAB_011f47a4;
          }
          if (uVar2 != uVar1 - 2) {
            lVar3 = *(long *)(this + 0x18);
LAB_011f46d0:
            *(undefined1 *)(lVar3 + (ulong)uVar2) = 0x20;
            *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) + 1)) = 0;
            *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
            goto LAB_011f46f0;
          }
          local_70[0] = uVar1;
          lVar3 = (**(code **)(**(long **)this + 0x18))(*(long **)this,local_70);
          uVar1 = *(uint *)(this + 0xc);
          if (uVar1 < local_70[0]) {
            uVar2 = *(uint *)(this + 0x10);
            *(uint *)(this + 0xc) = local_70[0];
            *(long *)(this + 0x18) = lVar3;
            goto LAB_011f46d0;
          }
          *(uint *)(this + 0x10) = uVar1 - 1;
          *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(uVar1 - 5)) = 0x2e;
          *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 3)) = 0x2e;
          *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 2)) = 0x2e;
          *(undefined1 *)(*(long *)(this + 0x18) + (ulong)(*(int *)(this + 0x10) - 1)) = 10;
          *(undefined1 *)(*(long *)(this + 0x18) + (ulong)*(uint *)(this + 0x10)) = 0;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
LAB_011f47a4:
        uVar1 = *(uint *)(param_2 + 7 + uVar6 * 4);
        uVar4 = __strlen_chk("%d: %o\n",8);
        local_70[0] = (uint)uVar6;
        local_68 = param_2 & 0xffffffff00000000 | (ulong)uVar1;
        Add(this,"%d: %o\n",uVar4,local_70,2);
      }
      uVar6 = uVar6 + 1;
    } while ((uVar6 < 10) && (uVar6 < param_3));
    if (9 < param_3) {
      uVar4 = __strlen_chk(&DAT_019e250f,0x17);
      Add(this,&DAT_019e250f,uVar4,0,0);
    }
  }
  return;
}

