
void FUN_00ddd100(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
                    /* try { // try from 00ddd104 to 00edd10b has its CatchHandler @ 00ddd234 */
                    /* try { // try from 00ddd10c to 00edd113 has its CatchHandler @ 00ddd230 */
                    /* try { // try from 00ddd114 to 00edd11b has its CatchHandler @ 00ddd22c */
  puVar1 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
                    /* try { // try from 00ddd11c to 00edd123 has its CatchHandler @ 00ddd228 */
  while (puVar2 = puVar3, puVar2 != puVar1) {
    puVar3 = puVar2 + -3;
    puVar4 = (undefined8 *)*puVar3;
    puVar5 = (undefined8 *)puVar2[-2];
                    /* try { // try from 00ddd140 to 00edd14b has its CatchHandler @ 00ddd270 */
    if (puVar4 != puVar5) {
      do {
                    /* try { // try from 00ddd14c to 00edd153 has its CatchHandler @ 00ddd224 */
        cocos2d::Ref::release((Ref *)*puVar4);
        puVar4 = puVar4 + 1;
                    /* try { // try from 00ddd154 to 00edd15b has its CatchHandler @ 00ddd220 */
      } while (puVar5 != puVar4);
                    /* try { // try from 00ddd15c to 00edd163 has its CatchHandler @ 00ddd21c */
      puVar4 = (undefined8 *)*puVar3;
    }
    puVar2[-2] = puVar4;
                    /* try { // try from 00ddd164 to 00edd16b has its CatchHandler @ 00ddd218 */
    if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 00ddd16c to 00edd173 has its CatchHandler @ 00ddd214 */
      puVar2[-2] = puVar4;
      operator_delete(puVar4);
                    /* try { // try from 00ddd174 to 00edd17b has its CatchHandler @ 00ddd210 */
    }
  }
  param_1[1] = (long)puVar1;
                    /* try { // try from 00ddd17c to 00edd183 has its CatchHandler @ 00ddd20c */
                    /* try { // try from 00ddd184 to 00edd18b has its CatchHandler @ 00ddd208 */
                    /* try { // try from 00ddd18c to 00edd193 has its CatchHandler @ 00ddd204 */
  return;
}

