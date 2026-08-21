
/* v8::internal::wasm::AsmType::Name() */

void v8::internal::wasm::AsmType::Name(void)

{
  uint uVar1;
  undefined8 *in_x0;
  undefined8 *in_x8;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  char *pcVar5;
  
  if (((ulong)in_x0 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x014904cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*in_x0)();
    return;
  }
  uVar1 = (uint)in_x0 & 0xfffffffe;
  if ((int)uVar1 < 0x1f20) {
    if ((int)uVar1 < 0x4c) {
      switch(uVar1) {
      case 2:
        *in_x8 = 0;
        in_x8[1] = 0;
        in_x8[2] = 0;
        *(undefined1 *)in_x8 = 4;
        *(undefined2 *)((long)in_x8 + 1) = 0x5d5b;
        *(undefined1 *)((long)in_x8 + 3) = 0;
        return;
      case 4:
        in_x8[1] = 0;
        in_x8[2] = 0;
        *in_x8 = 0x20;
        builtin_strncpy((char *)((long)in_x8 + 9),"|double?",8);
        builtin_strncpy((char *)((long)in_x8 + 1),"floatish",8);
        *(undefined1 *)((long)in_x8 + 0x11) = 0;
        return;
      case 8:
        in_x8[1] = 0;
        in_x8[2] = 0;
        *in_x8 = 0x1c;
        builtin_strncpy((char *)((long)in_x8 + 7),"|double?",8);
        builtin_strncpy((char *)((long)in_x8 + 1),"float?|d",8);
        *(undefined1 *)((long)in_x8 + 0xf) = 0;
        return;
      case 0x10:
        *in_x8 = 0;
        in_x8[1] = 0;
        in_x8[2] = 0;
        *(undefined1 *)in_x8 = 8;
        *(undefined4 *)((long)in_x8 + 1) = 0x64696f76;
        *(undefined1 *)((long)in_x8 + 5) = 0;
        return;
      case 0x20:
        uVar2 = 0x65747865;
        uVar4 = 0x6e72;
        *in_x8 = 0;
        in_x8[1] = 0;
        in_x8[2] = 0;
        break;
      default:
        if (uVar1 == 0x80000000) {
          *in_x8 = 0;
          in_x8[1] = 0;
          in_x8[2] = 0;
          uVar2 = 0x6e6f6e3c;
          uVar4 = 0x3e65;
          break;
        }
      case 6:
      case 10:
      case 0xc:
      case 0xe:
      case 0x12:
      case 0x14:
      case 0x16:
      case 0x18:
      case 0x1a:
      case 0x1c:
      case 0x1e:
switchD_01490508_caseD_6:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
    }
    else if ((int)uVar1 < 0x300) {
      if (uVar1 == 0x4c) {
        *in_x8 = 0;
        in_x8[1] = 0;
        in_x8[2] = 0;
        *(undefined1 *)in_x8 = 0xe;
        *(undefined4 *)((long)in_x8 + 1) = 0x62756f64;
        *(undefined4 *)((long)in_x8 + 4) = 0x3f656c62;
        return;
      }
      if (uVar1 == 0xec) {
        *in_x8 = 0;
        in_x8[1] = 0;
        in_x8[2] = 0;
        uVar2 = 0x62756f64;
        uVar4 = 0x656c;
      }
      else {
        if (uVar1 != 0x100) goto switchD_01490508_caseD_6;
        *in_x8 = 0;
        in_x8[1] = 0;
        in_x8[2] = 0;
        uVar2 = 0x69746e69;
        uVar4 = 0x6873;
      }
    }
    else {
      if (uVar1 == 0x300) {
        *in_x8 = 0;
        in_x8[1] = 0;
        in_x8[2] = 0;
        *(undefined1 *)in_x8 = 6;
        *(undefined4 *)((long)in_x8 + 1) = 0x746e69;
        return;
      }
      if (uVar1 != 0x720) {
        if (uVar1 == 0xb00) {
          uVar3 = 0x64656e6769736e75;
          *in_x8 = 0;
          in_x8[1] = 0;
          in_x8[2] = 0;
          goto LAB_014908e4;
        }
        goto switchD_01490508_caseD_6;
      }
      *in_x8 = 0;
      in_x8[1] = 0;
      in_x8[2] = 0;
      uVar2 = 0x6e676973;
      uVar4 = 0x6465;
    }
LAB_0149097c:
    *(undefined1 *)in_x8 = 0xc;
    *(undefined4 *)((long)in_x8 + 1) = uVar2;
    *(undefined2 *)((long)in_x8 + 5) = uVar4;
    *(undefined1 *)((long)in_x8 + 7) = 0;
    return;
  }
  if ((int)uVar1 < 0x40002) {
    if ((int)uVar1 < 0xe00c) {
      if (uVar1 == 0x1f20) {
        *in_x8 = 0;
        in_x8[1] = 0;
        in_x8[2] = 0;
        uVar2 = 0x6e786966;
        uVar4 = 0x6d75;
      }
      else {
        if (uVar1 == 0x2004) {
          *in_x8 = 0;
          in_x8[1] = 0;
          in_x8[2] = 0;
          uVar3 = 0x68736974616f6c66;
LAB_014908e4:
          *(undefined1 *)in_x8 = 0x10;
          *(undefined8 *)((long)in_x8 + 1) = uVar3;
          *(undefined1 *)((long)in_x8 + 9) = 0;
          return;
        }
        if (uVar1 != 0x600c) goto switchD_01490508_caseD_6;
        *in_x8 = 0;
        in_x8[1] = 0;
        in_x8[2] = 0;
        uVar2 = 0x616f6c66;
        uVar4 = 0x3f74;
      }
      goto LAB_0149097c;
    }
    if (uVar1 == 0xe00c) {
      *in_x8 = 0;
      in_x8[1] = 0;
      in_x8[2] = 0;
      *(undefined1 *)in_x8 = 10;
      *(undefined4 *)((long)in_x8 + 1) = 0x616f6c66;
      *(undefined2 *)((long)in_x8 + 5) = 0x74;
      return;
    }
    if (uVar1 != 0x10002) {
      if (uVar1 == 0x20002) {
        in_x8[1] = 0;
        in_x8[2] = 0;
        *in_x8 = 0x12;
        *(undefined1 *)((long)in_x8 + 9) = 0x79;
        builtin_strncpy((char *)((long)in_x8 + 1),"Int8Arra",8);
        *(undefined1 *)((long)in_x8 + 10) = 0;
        return;
      }
      goto switchD_01490508_caseD_6;
    }
    pcVar5 = "Uint8Array";
    in_x8[2] = 0;
  }
  else {
    if ((int)uVar1 < 0x200002) {
      if (uVar1 == 0x40002) {
        pcVar5 = "Could not convert to Uint16Array";
        in_x8[2] = 0;
      }
      else {
        if (uVar1 == 0x80002) {
          in_x8[2] = 0;
          pcVar5 = "Int16Array";
          goto LAB_014907b8;
        }
        if (uVar1 != 0x100002) goto switchD_01490508_caseD_6;
        in_x8[2] = 0;
        pcVar5 = "Could not convert to Uint32Array";
      }
      uVar3 = *(undefined8 *)(pcVar5 + 0x15);
      *in_x8 = 0x16;
      in_x8[1] = 0;
      *(undefined4 *)(in_x8 + 1) = 0x79617272;
      *(undefined1 *)((long)in_x8 + 0xc) = 0;
      goto LAB_01490930;
    }
    if (uVar1 != 0x200002) {
      if (uVar1 == 0x400002) {
        pcVar5 = "Could not convert to Float32Array";
        in_x8[2] = 0;
      }
      else {
        if (uVar1 != 0x800002) goto switchD_01490508_caseD_6;
        in_x8[2] = 0;
        pcVar5 = "Could not convert to Float64Array";
      }
      uVar3 = *(undefined8 *)(pcVar5 + 0x15);
      *in_x8 = 0x18;
      in_x8[1] = 0;
      *(undefined4 *)((long)in_x8 + 9) = 0x79617272;
      *(undefined1 *)((long)in_x8 + 0xd) = 0;
      goto LAB_01490930;
    }
    in_x8[2] = 0;
    pcVar5 = "Int32Array";
  }
LAB_014907b8:
  uVar3 = *(undefined8 *)pcVar5;
  *in_x8 = 0x14;
  in_x8[1] = 0;
  *(undefined2 *)((long)in_x8 + 9) = 0x7961;
  *(undefined1 *)((long)in_x8 + 0xb) = 0;
LAB_01490930:
  *(undefined8 *)((long)in_x8 + 1) = uVar3;
  return;
}

