
void * FUN_00bfe1e8(code *param_1,undefined8 param_2)

{
  int iVar1;
  void *__s;
  
  __s = (void *)(*param_1)(param_2,0,0,0xb80);
  if (__s == (void *)0x0) {
    __s = (void *)0x0;
  }
  else {
    memset(__s,0,0xb80);
    *(undefined1 *)((long)__s + 9) = 6;
    *(long *)((long)__s + 0x10) = (long)__s + 0x60;
    *(undefined1 *)((long)__s + 10) = 1;
    *(undefined1 *)((long)__s + 8) = 0x61;
    *(undefined1 *)((long)__s + 0x110) = 1;
    *(long *)((long)__s + 0x170) = (long)__s + 0x160;
    *(undefined1 *)((long)__s + 0x90) = 0x21;
    *(long *)((long)__s + 0x178) = (long)__s + 0x160;
    *(undefined1 *)((long)__s + 0x111) = 4;
    *(undefined8 *)((long)__s + 0x130) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x148) = 0xffffffffffffffff;
    *(undefined8 *)((long)__s + 0x150) = 0xffffffffffffffff;
    *(code **)((long)__s + 0x70) = param_1;
    *(undefined8 *)((long)__s + 0x78) = param_2;
    *(void **)((long)__s + 0x128) = __s;
    *(undefined4 *)((long)__s + 0x68) = 0xffffffff;
    *(undefined8 *)((long)__s + 0x100) = 0;
    *(undefined8 *)((long)__s + 0xe8) = 0;
    *(undefined8 *)((long)__s + 0xf0) = 0;
    *(undefined8 *)((long)__s + 0xf8) = 0;
    *(long *)((long)__s + 0xa0) = (long)__s + 0x98;
    *(undefined1 *)((long)__s + 0x91) = 0;
    *(void **)((long)__s + 0x98) = __s;
    *(undefined8 *)((long)__s + 0x80) = 0xb80;
    *(undefined4 *)((long)__s + 0xdc) = 200;
    *(undefined4 *)((long)__s + 0xd8) = 200;
    FUN_00bfe710(__s);
    *(undefined1 *)((long)__s + 0xb) = 6;
    iVar1 = FUN_00c17684(__s,0,0,FUN_00bfdde4);
    if (iVar1 == 0) {
      *(undefined1 *)((long)__s + 0xb) = 0;
    }
    else {
      FUN_00bfdf4c(__s);
      __s = (void *)0x0;
    }
  }
  return __s;
}

