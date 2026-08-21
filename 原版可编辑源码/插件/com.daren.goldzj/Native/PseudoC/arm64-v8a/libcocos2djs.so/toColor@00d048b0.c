
/* spine::SkeletonJson::toColor(char const*, unsigned long) */

float spine::SkeletonJson::toColor(char *param_1,ulong param_2)

{
  long lVar1;
  size_t sVar2;
  ulong uVar3;
  float fVar4;
  char *local_48;
  char local_3c;
  char local_3b;
  undefined1 local_3a;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_1);
  fVar4 = -1.0;
  if (param_2 < sVar2 >> 1) {
    local_3c = param_1[param_2 * 2];
    local_3b = (param_1 + param_2 * 2)[1];
    local_3a = 0;
    uVar3 = strtoul(&local_3c,&local_48,0x10);
    if (*local_48 == '\0') {
      fVar4 = (float)(int)uVar3 / 255.0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return fVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

