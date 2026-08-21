
void FUN_00a0a068(uv_write_s *param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  ZhouLuJun *pZVar3;
  GuoPengFei *this;
  
  pZVar3 = *(ZhouLuJun **)param_1;
  this = (GuoPengFei *)**(undefined8 **)(param_1 + 0x50);
                    /* try { // try from 00a0a090 to 00b0a0a3 has its CatchHandler @ 00a0a128 */
  free(param_1);
  if (pZVar3 == (ZhouLuJun *)0x0) {
                    /* try { // try from 00a0a0a8 to 00b0a0db has its CatchHandler @ 00a0a12c */
    return;
  }
  if (param_2 < 0) {
    pcVar1 = (char *)universe::Translated::getInstance();
    uVar2 = uv_err_name(param_2);
    universe::Translated::log(pcVar1,"tcp write error. %s",uVar2);
                    /* try { // try from 00a0a0dc to 00b0a177 has its CatchHandler @ 00a09efc */
  }
  universe::network::GuoPengFei::onWrite(this,param_1,pZVar3,param_2 >= 0);
  return;
}

