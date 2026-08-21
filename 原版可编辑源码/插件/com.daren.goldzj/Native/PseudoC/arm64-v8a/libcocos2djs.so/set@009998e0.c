
/* cocos2d::Mat4::set(float, float, float, float, float, float, float, float, float, float, float,
   float, float, float, float, float) */

void cocos2d::Mat4::set(float param_1,float param_2,float param_3,float param_4,float param_5,
                       float param_6,float param_7,float param_8,float param_9,float param_10,
                       float param_11,float param_12,float param_13,float param_14,float param_15,
                       float param_16)

{
  float *in_x0;
  
                    /* catch() { ... } // from try @ 00999698 with catch @ 009998e4
                       catch() { ... } // from try @ 00999750 with catch @ 009998e4 */
                    /* catch() { ... } // from try @ 00999658 with catch @ 009998fc */
                    /* catch() { ... } // from try @ 0099964c with catch @ 00999900 */
  *in_x0 = param_1;
  in_x0[1] = param_5;
                    /* catch() { ... } // from try @ 0099962c with catch @ 00999904 */
  in_x0[4] = param_2;
  in_x0[5] = param_6;
  in_x0[8] = param_3;
  in_x0[9] = param_7;
  in_x0[0xc] = param_4;
  in_x0[0xd] = param_8;
  in_x0[2] = param_9;
  in_x0[3] = param_13;
                    /* catch() { ... } // from try @ 00999664 with catch @ 00999914
                       catch() { ... } // from try @ 009996e4 with catch @ 00999914
                       catch() { ... } // from try @ 00999810 with catch @ 00999914 */
  in_x0[6] = param_10;
  in_x0[7] = param_14;
  in_x0[10] = param_11;
  in_x0[0xb] = param_15;
  in_x0[0xe] = param_12;
  in_x0[0xf] = param_16;
  return;
}

