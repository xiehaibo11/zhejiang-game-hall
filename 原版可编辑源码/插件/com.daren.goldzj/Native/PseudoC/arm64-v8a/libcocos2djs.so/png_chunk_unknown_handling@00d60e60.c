
undefined1 png_chunk_unknown_handling(long param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 local_8;
  int *piVar2;
  
  local_8 = CONCAT13((char)param_2,
                     CONCAT12((char)((uint)param_2 >> 8),
                              CONCAT11((char)((uint)param_2 >> 0x10),(char)((uint)param_2 >> 0x18)))
                    );
  if ((param_1 != 0) && (*(int *)(param_1 + 0x43c) != 0)) {
    piVar2 = (int *)((long)*(int **)(param_1 + 0x440) + (ulong)(uint)(*(int *)(param_1 + 0x43c) * 5)
                    );
    do {
      piVar1 = (int *)((long)piVar2 + -5);
      if (local_8 == *piVar1) {
        return *(undefined1 *)((long)piVar2 + -1);
      }
      piVar2 = piVar1;
    } while (*(int **)(param_1 + 0x440) < piVar1);
  }
  return 0;
}

