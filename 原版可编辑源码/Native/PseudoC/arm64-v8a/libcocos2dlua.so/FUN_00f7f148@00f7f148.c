
void FUN_00f7f148(undefined8 param_1,void *param_2,size_t param_3)

{
  long *plVar1;
  
  plVar1 = (long *)png_get_io_ptr();
  if ((long)((int)plVar1[2] + (int)param_3) <= plVar1[1]) {
    memcpy(param_2,(void *)(*plVar1 + (long)(int)plVar1[2]),param_3);
    *(int *)(plVar1 + 2) = (int)plVar1[2] + (int)param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"pngReaderCallback failed");
}

