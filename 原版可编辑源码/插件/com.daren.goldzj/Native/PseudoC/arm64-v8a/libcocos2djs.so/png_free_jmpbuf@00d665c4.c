
void png_free_jmpbuf(long param_1)

{
  int iVar1;
  long lVar2;
  __jmp_buf_tag _Stack_130;
  
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x108);
    if ((((lVar2 != 0) && (lVar2 != param_1)) && (*(long *)(param_1 + 0x110) != 0)) &&
       (iVar1 = setjmp(&_Stack_130), iVar1 == 0)) {
      *(undefined8 *)(param_1 + 0x110) = 0;
      *(code **)(param_1 + 0x100) = longjmp;
      *(__jmp_buf_tag **)(param_1 + 0x108) = &_Stack_130;
      png_free(param_1,lVar2);
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  return;
}

