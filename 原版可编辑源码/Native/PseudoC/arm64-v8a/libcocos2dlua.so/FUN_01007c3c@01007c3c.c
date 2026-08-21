
void FUN_01007c3c(long param_1)

{
                    /* try { // try from 01007c40 to 01107c47 has its CatchHandler @ 01007cdc */
  cpDampedSpringSetStiffness
            (*(undefined4 *)(param_1 + 0x10),**(undefined8 **)(*(long *)(param_1 + 8) + 8));
  return;
}

