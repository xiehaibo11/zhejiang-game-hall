
long FUN_00e30bf8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 < 0x7362786f) {
    if (param_2 < 0x68617363) {
      switch(param_2) {
      case 0x67737030:
        if (*(ushort *)(param_1 + 0x39a) < 2) {
          return 0;
        }
        return *(long *)(param_1 + 0x3a0);
      case 0x67737031:
        if (*(ushort *)(param_1 + 0x39a) < 3) {
          return 0;
        }
        return *(long *)(param_1 + 0x3a0) + 4;
      case 0x67737032:
        if (*(ushort *)(param_1 + 0x39a) < 4) {
          return 0;
        }
        return *(long *)(param_1 + 0x3a0) + 8;
      case 0x67737033:
        if (*(ushort *)(param_1 + 0x39a) < 5) {
          return 0;
        }
        return *(long *)(param_1 + 0x3a0) + 0xc;
      case 0x67737034:
        if (*(ushort *)(param_1 + 0x39a) < 6) {
          return 0;
        }
        return *(long *)(param_1 + 0x3a0) + 0x10;
      case 0x67737035:
        if (*(ushort *)(param_1 + 0x39a) < 7) {
          return 0;
        }
        return *(long *)(param_1 + 0x3a0) + 0x14;
      case 0x67737036:
        if (*(ushort *)(param_1 + 0x39a) < 8) {
          return 0;
        }
        return *(long *)(param_1 + 0x3a0) + 0x18;
      case 0x67737037:
        if (*(ushort *)(param_1 + 0x39a) < 9) {
          return 0;
        }
        return *(long *)(param_1 + 0x3a0) + 0x1c;
      case 0x67737038:
        if (*(ushort *)(param_1 + 0x39a) < 10) {
          return 0;
        }
        return *(long *)(param_1 + 0x3a0) + 0x20;
      case 0x67737039:
        if (*(ushort *)(param_1 + 0x39a) < 0xb) {
          return 0;
        }
        return *(long *)(param_1 + 0x3a0) + 0x24;
      default:
        if (param_2 == 0x63706874) {
          return param_1 + 0x2e2;
        }
      }
    }
    else if (param_2 < 0x6863726e) {
      if (param_2 < 0x68636c64) {
        if (param_2 == 0x68617363) {
          return param_1 + 0x2c2;
        }
        if (param_2 == 0x68636c61) {
          return param_1 + 0x2c8;
        }
      }
      else {
        if (param_2 == 0x68636c64) {
          return param_1 + 0x2ca;
        }
        if (param_2 == 0x68636f66) {
          return param_1 + 0x1aa;
        }
      }
    }
    else if (param_2 < 0x68647363) {
      if (param_2 == 0x6863726e) {
        return param_1 + 0x1a8;
      }
      if (param_2 == 0x68637273) {
        return param_1 + 0x1a6;
      }
    }
    else {
      if (param_2 == 0x68647363) {
        return param_1 + 0x2c4;
      }
      if (param_2 == 0x686c6770) {
        return param_1 + 0x2c6;
      }
    }
  }
  else if (param_2 < 0x73747273) {
    if (param_2 < 0x7370786f) {
      if (param_2 < 0x7362796f) {
        if (param_2 == 0x7362786f) {
          return param_1 + 0x276;
        }
        if (param_2 == 0x73627873) {
          return param_1 + 0x272;
        }
      }
      else {
        if (param_2 == 0x7362796f) {
          return param_1 + 0x278;
        }
        if (param_2 == 0x73627973) {
          return param_1 + 0x274;
        }
      }
    }
    else if (param_2 < 0x7370796f) {
      if (param_2 == 0x7370786f) {
        return param_1 + 0x27e;
      }
      if (param_2 == 0x73707873) {
        return param_1 + 0x27a;
      }
    }
    else {
      if (param_2 == 0x7370796f) {
        return param_1 + 0x280;
      }
      if (param_2 == 0x73707973) {
        return param_1 + 0x27c;
      }
      if (param_2 == 0x7374726f) {
        return param_1 + 0x284;
      }
    }
  }
  else if (param_2 < 0x7663726e) {
    if (param_2 < 0x756e6473) {
      if (param_2 == 0x73747273) {
        return param_1 + 0x282;
      }
      if (param_2 == 0x756e646f) {
        return param_1 + 0x300;
      }
    }
    else {
      if (param_2 == 0x756e6473) {
        return param_1 + 0x302;
      }
      if (param_2 == 0x76617363) {
        return param_1 + 0x200;
      }
      if (param_2 == 0x76636f66) {
        return param_1 + 0x212;
      }
    }
  }
  else if (param_2 < 0x76647363) {
    if (param_2 == 0x7663726e) {
      return param_1 + 0x210;
    }
    if (param_2 == 0x76637273) {
      return param_1 + 0x20e;
    }
  }
  else {
    if (param_2 == 0x76647363) {
      return param_1 + 0x202;
    }
    if (param_2 == 0x766c6770) {
      lVar1 = param_1 + 0x204;
    }
    else if (param_2 == 0x78686774) {
      return param_1 + 0x2e0;
    }
  }
  return lVar1;
}

