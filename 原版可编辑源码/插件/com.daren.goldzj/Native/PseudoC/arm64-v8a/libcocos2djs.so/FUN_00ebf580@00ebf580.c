
undefined8 FUN_00ebf580(ulong *param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  if (0xa9 < *(ushort *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1))) {
    uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1);
    bVar1 = *(byte *)(uVar5 + 3);
    uVar4 = (uint)bVar1;
    if (bVar1 != 0) {
      if (*(short *)(uVar5 + 7) == 0x421) {
        iVar2 = 0xc;
      }
      else {
        iVar2 = v8::internal::JSObject::GetHeaderSize
                          (*(short *)(uVar5 + 7),*(char *)(uVar5 + 9) < '\0');
      }
      iVar2 = (((int)((uint)bVar1 * 4 - iVar2) >> 2) - (uint)*(byte *)(uVar5 + 3)) +
              (uint)*(byte *)(uVar5 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      uVar4 = iVar2 >> 1;
    }
    if (param_2 < (int)uVar4) {
      return 1;
    }
  }
  lVar3 = v8::base::Thread::GetThreadLocal(v8::internal::Isolate::isolate_key_);
  if (lVar3 != 0) {
    if (*(code **)(lVar3 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar3 + 0xb738))(param_3,"Internal field out of bounds");
      *(undefined1 *)(lVar3 + 0xb6b9) = 1;
      return 0;
    }
  }
  v8::base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n",param_3,"Internal field out of bounds");
                    /* WARNING: Subroutine does not return */
  v8::base::OS::Abort();
}

