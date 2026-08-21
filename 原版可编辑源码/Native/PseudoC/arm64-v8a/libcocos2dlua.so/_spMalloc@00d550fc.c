
void _spMalloc(void)

{
  if (DAT_017875e8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d55108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_017875e8)();
    return;
  }
  (*(code *)PTR_malloc_01777060)();
  return;
}

