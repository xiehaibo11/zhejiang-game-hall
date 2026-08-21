
void cpArbiterCallWildcardSeparateB(long param_1,undefined8 param_2)

{
  *(bool *)(param_1 + 0x88) = *(char *)(param_1 + 0x88) == '\0';
  (**(code **)(*(long *)(param_1 + 0x80) + 0x28))
            (param_1,param_2,*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x30));
  *(bool *)(param_1 + 0x88) = *(char *)(param_1 + 0x88) == '\0';
  return;
}

