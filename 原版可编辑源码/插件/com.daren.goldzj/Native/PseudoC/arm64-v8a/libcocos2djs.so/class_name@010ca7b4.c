
/* v8::internal::JSReceiver::class_name() */

ulong __thiscall v8::internal::JSReceiver::class_name(JSReceiver *this)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)this;
  uVar2 = uVar6 & 0xffffffff00000000;
  uVar4 = uVar2 | 7;
  if (0x437 < *(ushort *)(uVar4 + *(uint *)(uVar6 - 1))) {
LAB_010ca7d8:
    puVar3 = (ulong *)(uVar2 + 0x6d0);
    goto LAB_010ca810;
  }
  puVar5 = (uint *)(uVar6 - 1);
  if (*(short *)(uVar4 + *puVar5) == 0x422) {
    puVar3 = (ulong *)(uVar2 + 0x4c0);
    goto LAB_010ca810;
  }
  if (*(short *)(uVar4 + *puVar5) == 0x423) {
    puVar3 = (ulong *)(uVar2 + 0x4d8);
    goto LAB_010ca810;
  }
  if (*(short *)(uVar4 + *puVar5) == 0x424) {
    if ((*(uint *)(uVar6 + 0x1b) >> 4 & 1) == 0) {
      puVar3 = (ulong *)(uVar2 + 0x4e8);
    }
    else {
      puVar3 = (ulong *)(uVar2 + 0x9c8);
    }
    goto LAB_010ca810;
  }
  if (*(short *)(uVar4 + *puVar5) == 0x425) {
    puVar3 = (ulong *)(uVar2 + 0x4f0);
    goto LAB_010ca810;
  }
  if (*(short *)(uVar4 + *puVar5) == 0x428) {
    puVar3 = (ulong *)(uVar2 + 0x5d8);
    goto LAB_010ca810;
  }
  if (*(short *)(uVar4 + *puVar5) == 0x429) {
    puVar3 = (ulong *)(uVar2 + 0x680);
    goto LAB_010ca810;
  }
  if (*(ushort *)(uVar4 + *puVar5) - 0x417 < 3) {
    puVar3 = (ulong *)(uVar2 + 0x6f0);
    goto LAB_010ca810;
  }
  if (*(short *)(uVar4 + *puVar5) == 0x41c) {
    puVar3 = (ulong *)(uVar2 + 0x7e0);
    goto LAB_010ca810;
  }
  if (*(ushort *)(uVar4 + *puVar5) - 0x412 < 3) {
    puVar3 = (ulong *)(uVar2 + 0x7e8);
    goto LAB_010ca810;
  }
  if (*(short *)(uVar4 + *puVar5) == 0xa9) {
    if ((*(byte *)((uVar2 | *puVar5) + 9) >> 1 & 1) != 0) goto LAB_010ca7d8;
    goto LAB_010ca8fc;
  }
  if (*(short *)(uVar4 + *puVar5) == 0x42e) {
    puVar3 = (ulong *)(uVar2 + 0x950);
    goto LAB_010ca810;
  }
  if (*(short *)(uVar4 + *puVar5) == 0x41d) {
    puVar3 = (ulong *)(uVar2 + 0x998);
    goto LAB_010ca810;
  }
  if (*(ushort *)(uVar4 + *puVar5) - 0x415 < 2) {
    puVar3 = (ulong *)(uVar2 + 0x9b8);
    goto LAB_010ca810;
  }
  if (*(short *)(uVar4 + *puVar5) == 0x41b) {
    if ((*(byte *)((uVar2 | *puVar5) + 10) & 0xf8) == 0x88) {
      puVar3 = (ulong *)(uVar2 + 0xa98);
      goto LAB_010ca810;
    }
    if ((*(byte *)((uVar2 | *puVar5) + 10) & 0xf8) == 0x90) {
      puVar3 = (ulong *)(uVar2 + 0x788);
      goto LAB_010ca810;
    }
    if ((*(byte *)((uVar2 | *puVar5) + 10) & 0xf8) == 0x98) {
      puVar3 = (ulong *)(uVar2 + 0xa88);
      goto LAB_010ca810;
    }
    if ((*(byte *)((uVar2 | *puVar5) + 10) & 0xf8) == 0xa0) {
      puVar3 = (ulong *)(uVar2 + 0x778);
      goto LAB_010ca810;
    }
    if ((*(byte *)((uVar2 | *puVar5) + 10) & 0xf8) == 0xa8) {
      puVar3 = (ulong *)(uVar2 + 0xa90);
      goto LAB_010ca810;
    }
    if ((*(byte *)((uVar2 | *puVar5) + 10) & 0xf8) == 0xb0) {
      puVar3 = (ulong *)(uVar2 + 0x780);
      goto LAB_010ca810;
    }
    if ((*(byte *)((uVar2 | *puVar5) + 10) & 0xf8) == 0xb8) {
      puVar3 = (ulong *)(uVar2 + 0x6b8);
      goto LAB_010ca810;
    }
    if ((*(byte *)((uVar2 | *puVar5) + 10) & 0xf8) == 0xc0) {
      puVar3 = (ulong *)(uVar2 + 0x6c0);
      goto LAB_010ca810;
    }
    if ((*(byte *)((uVar2 | *puVar5) + 10) & 0xf8) == 200) {
      puVar3 = (ulong *)(uVar2 + 0xaa0);
      goto LAB_010ca810;
    }
    if ((*(byte *)((uVar2 | *puVar5) + 10) & 0xf8) == 0xd0) {
      puVar3 = (ulong *)(uVar2 + 0x530);
      goto LAB_010ca810;
    }
    if ((*(byte *)((uVar2 | *puVar5) + 10) & 0xf8) == 0xd8) {
      puVar3 = (ulong *)(uVar2 + 0x528);
      goto LAB_010ca810;
    }
  }
  if (*(short *)(uVar4 + *puVar5) == 0x411) {
    if ((*(uint *)(uVar6 + 0xb) & 1) != 0) {
      uVar6 = uVar2 | *(uint *)(uVar6 + 0xb);
      if ((*(short *)(uVar4 + *(uint *)(uVar6 - 1)) == 0x43) &&
         ((*(uint *)(uVar6 + 0x17) >> 1 & 0xff) < 2)) {
        puVar3 = (ulong *)(uVar2 + 0x540);
        goto LAB_010ca810;
      }
      if (*(ushort *)(uVar4 + *(uint *)(uVar6 - 1)) < 0x40) {
        puVar3 = (ulong *)(uVar2 + 0x9f8);
        goto LAB_010ca810;
      }
      if (*(short *)(uVar4 + *(uint *)(uVar6 - 1)) != 0x42) {
        if (*(short *)(uVar4 + *(uint *)(uVar6 - 1)) == 0x41) {
          puVar3 = (ulong *)(uVar2 + 0x518);
        }
        else if (*(short *)(uVar4 + *(uint *)(uVar6 - 1)) == 0x40) {
          puVar3 = (ulong *)(uVar2 + 0xa18);
        }
        else {
          if (*(short *)(uVar4 + *(uint *)(uVar6 - 1)) != 0x65) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          puVar3 = (ulong *)(uVar2 + 0x980);
        }
        goto LAB_010ca810;
      }
    }
    puVar3 = (ulong *)(uVar2 + 0x888);
    goto LAB_010ca810;
  }
  if (*(short *)(uVar4 + *puVar5) == 0x41e) {
    puVar3 = (ulong *)(uVar2 + 0xad8);
    goto LAB_010ca810;
  }
  if (*(short *)(uVar4 + *puVar5) == 0x41f) {
    puVar3 = (ulong *)(uVar2 + 0xae8);
    goto LAB_010ca810;
  }
  if (*(short *)(uVar4 + *puVar5) == 0xab) {
    puVar3 = (ulong *)(uVar2 + 0x718);
    goto LAB_010ca810;
  }
  uVar6 = uVar2 | *puVar5;
  do {
    uVar1 = *(uint *)(uVar6 + 0x13);
    uVar6 = uVar2 | uVar1;
    if ((uVar1 & 1) == 0) break;
  } while (*(short *)(uVar4 + *(uint *)(uVar6 - 1)) == 0xa2);
  if ((uVar1 & 1) != 0) {
    if (((*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x439) &&
        (uVar1 = *(uint *)((uVar2 | *(uint *)(uVar6 + 0xb)) + 3), (uVar1 & 1) != 0)) &&
       (*(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) == 0x4e)) {
      uVar1 = *(uint *)((uVar2 | *(uint *)(uVar6 + 0xb)) + 3);
      if ((uVar1 & 1) == 0) goto LAB_010ca8fc;
      uVar6 = uVar2 | uVar1;
    }
    uVar4 = uVar6 & 0xffffffff00000000 | 7;
    if (((*(short *)(uVar4 + *(uint *)(uVar6 - 1)) == 0x4e) && ((*(uint *)(uVar6 + 0x1b) & 1) != 0))
       && (uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x1b),
          *(ushort *)(uVar4 + *(uint *)(uVar6 - 1)) < 0x40)) {
      return uVar6;
    }
  }
LAB_010ca8fc:
  puVar3 = (ulong *)(uVar2 + 0x8a0);
LAB_010ca810:
  return *puVar3;
}

