
/* btDbvt::enumNodes(btDbvtNode const*, btDbvt::ICollide&) */

void btDbvt::enumNodes(btDbvtNode *param_1,ICollide *param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*(long *)param_2 + 0x18);
  while( true ) {
    (*pcVar1)(param_2,param_1);
    if (*(long *)(param_1 + 0x30) == 0) break;
    enumNodes(*(btDbvtNode **)(param_1 + 0x28),param_2);
    param_1 = *(btDbvtNode **)(param_1 + 0x30);
    pcVar1 = *(code **)(*(long *)param_2 + 0x18);
  }
  return;
}

