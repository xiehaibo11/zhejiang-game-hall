package com.mbridge.msdk.widget.custom.b;

public final class b {
    public static java.lang.String a = "FastBlurUtil";
    public static int b = 2048;


    static class 2 implements com.mbridge.msdk.foundation.same.c.c {
        final com.mbridge.msdk.widget.custom.baseview.MBImageView a;
        final int b;
        final int c;
        final android.widget.ImageView d;
        final com.mbridge.msdk.widget.custom.DownloadMessageDialog e;



        2(com.mbridge.msdk.widget.custom.baseview.MBImageView r1, int r2, int r3, android.widget.ImageView r4, com.mbridge.msdk.widget.custom.DownloadMessageDialog r5) {
                r0 = this;
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r5
                r0.<init>()
                return
        }

        @Override
        public final void onFailedLoad(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                com.mbridge.msdk.widget.custom.baseview.MBImageView r1 = r0.a
                com.mbridge.msdk.widget.custom.b.b$2$2 r2 = new com.mbridge.msdk.widget.custom.b.b$2$2
                r2.<init>(r0)
                r1.post(r2)
                return
        }

        @Override
        public final void onSuccessLoad(android.graphics.Bitmap r2, java.lang.String r3) {
                r1 = this;
                com.mbridge.msdk.widget.custom.baseview.MBImageView r3 = r1.a
                com.mbridge.msdk.widget.custom.b.b$2$1 r0 = new com.mbridge.msdk.widget.custom.b.b$2$1
                r0.<init>(r1, r2)
                r3.post(r0)
                return
        }
    }

    static {
            return
    }

    public static android.graphics.Bitmap a(android.graphics.Bitmap r35, int r36) {
            if (r36 > 0) goto L5
            r0 = 10
            goto L7
        L5:
            r0 = r36
        L7:
            int r1 = r35.getWidth()
            int r1 = r1 / r0
            int r2 = r35.getHeight()
            int r2 = r2 / r0
            r0 = 0
            r3 = r35
            android.graphics.Bitmap r1 = android.graphics.Bitmap.createScaledBitmap(r3, r1, r2, r0)
            int r2 = r1.getWidth()
            int r11 = r1.getHeight()
            int r12 = r2 * r11
            int[] r13 = new int[r12]
            r5 = 0
            r7 = 0
            r8 = 0
            r3 = r1
            r4 = r13
            r6 = r2
            r9 = r2
            r10 = r11
            r3.getPixels(r4, r5, r6, r7, r8, r9, r10)
            int r3 = r2 + (-1)
            int r4 = r11 + (-1)
            r5 = 17
            int[] r6 = new int[r12]
            int[] r7 = new int[r12]
            int[] r8 = new int[r12]
            int r9 = java.lang.Math.max(r2, r11)
            int[] r9 = new int[r9]
            r10 = 20736(0x5100, float:2.9057E-41)
            int[] r12 = new int[r10]
            r14 = r0
        L46:
            if (r14 >= r10) goto L4f
            int r15 = r14 / 81
            r12[r14] = r15
            int r14 = r14 + 1
            goto L46
        L4f:
            r10 = 3
            r14 = 2
            int[] r15 = new int[r14]
            r16 = 1
            r15[r16] = r10
            r15[r0] = r5
            java.lang.Class<int> r10 = int.class
            java.lang.Object r10 = java.lang.reflect.Array.newInstance(r10, r15)
            int[][] r10 = (int[][]) r10
            r15 = r0
            r17 = r15
            r18 = r17
        L66:
            r19 = -8
            r5 = 8
            if (r15 >= r11) goto L182
            r20 = r0
            r21 = r20
            r22 = r21
            r23 = r22
            r24 = r23
            r25 = r24
            r26 = r25
            r27 = r26
            r14 = r19
            r19 = r27
        L80:
            r28 = 65280(0xff00, float:9.1477E-41)
            r29 = 16711680(0xff0000, float:2.3418052E-38)
            if (r14 > r5) goto Le3
            int r5 = java.lang.Math.max(r14, r0)
            int r5 = java.lang.Math.min(r3, r5)
            int r5 = r17 + r5
            r5 = r13[r5]
            int r31 = r14 + 8
            r31 = r10[r31]
            r29 = r5 & r29
            int r29 = r29 >> 16
            r31[r0] = r29
            r28 = r5 & r28
            r29 = 8
            int r28 = r28 >> 8
            r31[r16] = r28
            r5 = r5 & 255(0xff, float:3.57E-43)
            r28 = 2
            r31[r28] = r5
            int r5 = java.lang.Math.abs(r14)
            int r5 = 9 - r5
            r29 = r31[r0]
            int r29 = r29 * r5
            int r19 = r19 + r29
            r29 = r31[r16]
            int r29 = r29 * r5
            int r20 = r20 + r29
            r29 = r31[r28]
            int r29 = r29 * r5
            int r21 = r21 + r29
            if (r14 <= 0) goto Ld2
            r5 = r31[r0]
            int r25 = r25 + r5
            r5 = r31[r16]
            int r26 = r26 + r5
            r5 = r31[r28]
            int r27 = r27 + r5
            goto Lde
        Ld2:
            r5 = r31[r0]
            int r22 = r22 + r5
            r5 = r31[r16]
            int r23 = r23 + r5
            r5 = r31[r28]
            int r24 = r24 + r5
        Lde:
            int r14 = r14 + 1
            r5 = 8
            goto L80
        Le3:
            r14 = r0
            r5 = 8
        Le6:
            if (r14 >= r2) goto L178
            r31 = r12[r19]
            r6[r17] = r31
            r31 = r12[r20]
            r7[r17] = r31
            r31 = r12[r21]
            r8[r17] = r31
            int r19 = r19 - r22
            int r20 = r20 - r23
            int r21 = r21 - r24
            int r31 = r5 + (-8)
            r32 = 17
            int r31 = r31 + 17
            int r31 = r31 % 17
            r31 = r10[r31]
            r32 = r31[r0]
            int r22 = r22 - r32
            r32 = r31[r16]
            int r23 = r23 - r32
            r32 = 2
            r33 = r31[r32]
            int r24 = r24 - r33
            if (r15 != 0) goto L11e
            int r32 = r14 + 8
            int r0 = r32 + 1
            int r0 = java.lang.Math.min(r0, r3)
            r9[r14] = r0
        L11e:
            r0 = r9[r14]
            int r0 = r18 + r0
            r0 = r13[r0]
            r32 = r0 & r29
            int r32 = r32 >> 16
            r33 = 0
            r31[r33] = r32
            r32 = r0 & r28
            r30 = 8
            int r32 = r32 >> 8
            r31[r16] = r32
            r0 = r0 & 255(0xff, float:3.57E-43)
            r32 = 2
            r31[r32] = r0
            r0 = r31[r33]
            int r25 = r25 + r0
            r0 = r31[r16]
            int r26 = r26 + r0
            r0 = r31[r32]
            int r27 = r27 + r0
            int r19 = r19 + r25
            int r20 = r20 + r26
            int r21 = r21 + r27
            int r5 = r5 + 1
            r0 = 17
            int r5 = r5 % r0
            int r0 = r5 % 17
            r0 = r10[r0]
            r31 = 0
            r32 = r0[r31]
            int r22 = r22 + r32
            r32 = r0[r16]
            int r23 = r23 + r32
            r32 = 2
            r33 = r0[r32]
            int r24 = r24 + r33
            r34 = r0[r31]
            int r25 = r25 - r34
            r31 = r0[r16]
            int r26 = r26 - r31
            r0 = r0[r32]
            int r27 = r27 - r0
            int r17 = r17 + 1
            int r14 = r14 + 1
            r0 = 0
            goto Le6
        L178:
            int r18 = r18 + r2
            int r15 = r15 + 1
            r0 = 0
            r5 = 17
            r14 = 2
            goto L66
        L182:
            r0 = 0
        L183:
            if (r0 >= r2) goto L2ac
            int r3 = r19 * r2
            r24 = r1
            r25 = r9
            r1 = r19
            r5 = 0
            r9 = 8
            r14 = 0
            r15 = 0
            r17 = 0
            r18 = 0
            r20 = 0
            r21 = 0
            r22 = 0
            r23 = 0
        L19e:
            if (r1 > r9) goto L1fa
            r9 = 0
            int r26 = java.lang.Math.max(r9, r3)
            int r26 = r26 + r0
            int r27 = r1 + 8
            r27 = r10[r27]
            r28 = r6[r26]
            r27[r9] = r28
            r9 = r7[r26]
            r27[r16] = r9
            r9 = r8[r26]
            r28 = 2
            r27[r28] = r9
            int r9 = java.lang.Math.abs(r1)
            int r9 = 9 - r9
            r28 = r6[r26]
            int r28 = r28 * r9
            int r5 = r5 + r28
            r28 = r7[r26]
            int r28 = r28 * r9
            int r14 = r14 + r28
            r26 = r8[r26]
            int r26 = r26 * r9
            int r15 = r15 + r26
            if (r1 <= 0) goto L1e3
            r9 = 0
            r26 = r27[r9]
            int r21 = r21 + r26
            r26 = r27[r16]
            int r22 = r22 + r26
            r26 = 2
            r27 = r27[r26]
            int r23 = r23 + r27
            goto L1f2
        L1e3:
            r9 = 0
            r26 = 2
            r28 = r27[r9]
            int r17 = r17 + r28
            r9 = r27[r16]
            int r18 = r18 + r9
            r9 = r27[r26]
            int r20 = r20 + r9
        L1f2:
            if (r1 >= r4) goto L1f5
            int r3 = r3 + r2
        L1f5:
            int r1 = r1 + 1
            r9 = 8
            goto L19e
        L1fa:
            r3 = r0
            r1 = 0
            r29 = 8
        L1fe:
            if (r1 >= r11) goto L29a
            r9 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r26 = r13[r3]
            r9 = r26 & r9
            r26 = r12[r5]
            int r26 = r26 << 16
            r9 = r9 | r26
            r26 = r12[r14]
            r27 = 8
            int r26 = r26 << 8
            r9 = r9 | r26
            r26 = r12[r15]
            r9 = r9 | r26
            r13[r3] = r9
            int r5 = r5 - r17
            int r14 = r14 - r18
            int r15 = r15 - r20
            int r9 = r29 + (-8)
            r26 = 17
            int r9 = r9 + 17
            int r9 = r9 % 17
            r9 = r10[r9]
            r26 = 0
            r28 = r9[r26]
            int r17 = r17 - r28
            r26 = r9[r16]
            int r18 = r18 - r26
            r26 = 2
            r28 = r9[r26]
            int r20 = r20 - r28
            if (r0 != 0) goto L248
            r26 = r12
            int r12 = r1 + 9
            int r12 = java.lang.Math.min(r12, r4)
            int r12 = r12 * r2
            r25[r1] = r12
            goto L24a
        L248:
            r26 = r12
        L24a:
            r12 = r25[r1]
            int r12 = r12 + r0
            r28 = r6[r12]
            r30 = 0
            r9[r30] = r28
            r28 = r7[r12]
            r9[r16] = r28
            r12 = r8[r12]
            r28 = 2
            r9[r28] = r12
            r12 = r9[r30]
            int r21 = r21 + r12
            r12 = r9[r16]
            int r22 = r22 + r12
            r9 = r9[r28]
            int r23 = r23 + r9
            int r5 = r5 + r21
            int r14 = r14 + r22
            int r15 = r15 + r23
            int r29 = r29 + 1
            r9 = 17
            int r29 = r29 % 17
            r12 = r10[r29]
            r28 = 0
            r30 = r12[r28]
            int r17 = r17 + r30
            r30 = r12[r16]
            int r18 = r18 + r30
            r30 = 2
            r31 = r12[r30]
            int r20 = r20 + r31
            r31 = r12[r28]
            int r21 = r21 - r31
            r31 = r12[r16]
            int r22 = r22 - r31
            r12 = r12[r30]
            int r23 = r23 - r12
            int r3 = r3 + r2
            int r1 = r1 + 1
            r12 = r26
            goto L1fe
        L29a:
            r26 = r12
            r9 = 17
            r27 = 8
            r28 = 0
            r30 = 2
            int r0 = r0 + 1
            r1 = r24
            r9 = r25
            goto L183
        L2ac:
            r24 = r1
            r5 = 0
            r7 = 0
            r8 = 0
            r3 = r24
            r4 = r13
            r6 = r2
            r9 = r2
            r10 = r11
            r3.setPixels(r4, r5, r6, r7, r8, r9, r10)
            return r24
    }

    public static void a(android.graphics.Bitmap r4, android.widget.ImageView r5, int r6, android.widget.ImageView r7) {
            java.lang.String r0 = "15dp"
            java.lang.String r1 = "1dp"
            if (r4 == 0) goto Lf
            boolean r2 = r4.isRecycled()     // Catch: java.lang.Throwable -> L73
            if (r2 != 0) goto Lf
            r5.setImageBitmap(r4)     // Catch: java.lang.Throwable -> L73
        Lf:
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.CENTER_INSIDE     // Catch: java.lang.Throwable -> L73
            r5.setScaleType(r2)     // Catch: java.lang.Throwable -> L73
            com.mbridge.msdk.widget.custom.a.b r2 = com.mbridge.msdk.widget.custom.a.b.a()     // Catch: java.lang.Throwable -> L73
            java.lang.String r3 = "20dp"
            int r2 = r2.c(r3)     // Catch: java.lang.Throwable -> L73
            int r6 = r6 - r2
            float r2 = (float) r6     // Catch: java.lang.Throwable -> L73
            r3 = 1057342095(0x3f05c28f, float:0.5225)
            float r2 = r2 * r3
            int r2 = (int) r2     // Catch: java.lang.Throwable -> L73
            if (r7 == 0) goto L37
            android.view.ViewGroup$LayoutParams r3 = r7.getLayoutParams()     // Catch: java.lang.Throwable -> L73
            android.widget.RelativeLayout$LayoutParams r3 = (android.widget.RelativeLayout.LayoutParams) r3     // Catch: java.lang.Throwable -> L73
            r3.width = r6     // Catch: java.lang.Throwable -> L73
            r3.height = r2     // Catch: java.lang.Throwable -> L73
            r7.setLayoutParams(r3)     // Catch: java.lang.Throwable -> L73
            a(r7, r4)     // Catch: java.lang.Throwable -> L73
        L37:
            android.view.ViewGroup$LayoutParams r4 = r5.getLayoutParams()     // Catch: java.lang.Throwable -> L73
            android.widget.RelativeLayout$LayoutParams r4 = (android.widget.RelativeLayout.LayoutParams) r4     // Catch: java.lang.Throwable -> L73
            r4.width = r6     // Catch: java.lang.Throwable -> L73
            r4.height = r2     // Catch: java.lang.Throwable -> L73
            com.mbridge.msdk.widget.custom.a.b r6 = com.mbridge.msdk.widget.custom.a.b.a()     // Catch: java.lang.Throwable -> L73
            int r6 = r6.c(r1)     // Catch: java.lang.Throwable -> L73
            com.mbridge.msdk.widget.custom.a.b r7 = com.mbridge.msdk.widget.custom.a.b.a()     // Catch: java.lang.Throwable -> L73
            int r7 = r7.c(r0)     // Catch: java.lang.Throwable -> L73
            com.mbridge.msdk.widget.custom.a.b r2 = com.mbridge.msdk.widget.custom.a.b.a()     // Catch: java.lang.Throwable -> L73
            int r1 = r2.c(r1)     // Catch: java.lang.Throwable -> L73
            com.mbridge.msdk.widget.custom.a.b r2 = com.mbridge.msdk.widget.custom.a.b.a()     // Catch: java.lang.Throwable -> L73
            int r0 = r2.c(r0)     // Catch: java.lang.Throwable -> L73
            r4.setMargins(r6, r7, r1, r0)     // Catch: java.lang.Throwable -> L73
            r6 = 9
            r7 = -1
            r4.addRule(r6, r7)     // Catch: java.lang.Throwable -> L73
            r6 = 11
            r4.addRule(r6, r7)     // Catch: java.lang.Throwable -> L73
            r5.setLayoutParams(r4)     // Catch: java.lang.Throwable -> L73
            goto L7d
        L73:
            r4 = move-exception
            java.lang.String r5 = com.mbridge.msdk.widget.custom.b.b.a
            java.lang.String r4 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
        L7d:
            return
    }

    private static void a(android.widget.ImageView r1, android.graphics.Bitmap r2) {
            if (r2 == 0) goto L20
            boolean r0 = r2.isRecycled()     // Catch: java.lang.Throwable -> L16
            if (r0 != 0) goto L20
            r0 = 5
            android.graphics.Bitmap r2 = a(r2, r0)     // Catch: java.lang.Throwable -> L16
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.CENTER_CROP     // Catch: java.lang.Throwable -> L16
            r1.setScaleType(r0)     // Catch: java.lang.Throwable -> L16
            r1.setImageBitmap(r2)     // Catch: java.lang.Throwable -> L16
            goto L20
        L16:
            r1 = move-exception
            java.lang.String r2 = com.mbridge.msdk.widget.custom.b.b.a
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L20:
            return
    }

    public static void a(com.mbridge.msdk.widget.custom.baseview.MBImageView r8, android.widget.ImageView r9, java.lang.String r10, int r11, int r12, com.mbridge.msdk.widget.custom.DownloadMessageDialog r13) {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            com.mbridge.msdk.widget.custom.b.b$2 r7 = new com.mbridge.msdk.widget.custom.b.b$2
            r1 = r7
            r2 = r8
            r3 = r11
            r4 = r12
            r5 = r9
            r6 = r13
            r1.<init>(r2, r3, r4, r5, r6)
            r0.a(r10, r7)
            return
    }

    public static void a(com.mbridge.msdk.widget.custom.baseview.MBImageView r2, java.lang.String r3) {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.same.c.b r0 = com.mbridge.msdk.foundation.same.c.b.a(r0)
            com.mbridge.msdk.widget.custom.b.b$1 r1 = new com.mbridge.msdk.widget.custom.b.b$1
            r1.<init>(r2)
            r0.a(r3, r1)
            return
    }

    public static void b(android.graphics.Bitmap r6, android.widget.ImageView r7, int r8, android.widget.ImageView r9) {
            java.lang.String r0 = "15dp"
            java.lang.String r1 = "1dp"
            if (r6 == 0) goto Lf
            boolean r2 = r6.isRecycled()     // Catch: java.lang.Throwable -> L79
            if (r2 != 0) goto Lf
            r7.setImageBitmap(r6)     // Catch: java.lang.Throwable -> L79
        Lf:
            android.widget.ImageView$ScaleType r2 = android.widget.ImageView.ScaleType.CENTER_INSIDE     // Catch: java.lang.Throwable -> L79
            r7.setScaleType(r2)     // Catch: java.lang.Throwable -> L79
            double r2 = (double) r8     // Catch: java.lang.Throwable -> L79
            r4 = 4602678819172646912(0x3fe0000000000000, double:0.5)
            double r2 = r2 * r4
            com.mbridge.msdk.widget.custom.a.b r8 = com.mbridge.msdk.widget.custom.a.b.a()     // Catch: java.lang.Throwable -> L79
            java.lang.String r4 = "20dp"
            int r8 = r8.c(r4)     // Catch: java.lang.Throwable -> L79
            double r4 = (double) r8     // Catch: java.lang.Throwable -> L79
            double r2 = r2 - r4
            int r8 = (int) r2     // Catch: java.lang.Throwable -> L79
            float r2 = (float) r8     // Catch: java.lang.Throwable -> L79
            r3 = 1057342095(0x3f05c28f, float:0.5225)
            float r2 = r2 * r3
            int r2 = (int) r2     // Catch: java.lang.Throwable -> L79
            if (r9 == 0) goto L3d
            android.view.ViewGroup$LayoutParams r3 = r9.getLayoutParams()     // Catch: java.lang.Throwable -> L79
            android.widget.RelativeLayout$LayoutParams r3 = (android.widget.RelativeLayout.LayoutParams) r3     // Catch: java.lang.Throwable -> L79
            r3.width = r8     // Catch: java.lang.Throwable -> L79
            r3.height = r2     // Catch: java.lang.Throwable -> L79
            r9.setLayoutParams(r3)     // Catch: java.lang.Throwable -> L79
            a(r9, r6)     // Catch: java.lang.Throwable -> L79
        L3d:
            android.view.ViewGroup$LayoutParams r6 = r7.getLayoutParams()     // Catch: java.lang.Throwable -> L79
            android.widget.RelativeLayout$LayoutParams r6 = (android.widget.RelativeLayout.LayoutParams) r6     // Catch: java.lang.Throwable -> L79
            r6.width = r8     // Catch: java.lang.Throwable -> L79
            r6.height = r2     // Catch: java.lang.Throwable -> L79
            com.mbridge.msdk.widget.custom.a.b r8 = com.mbridge.msdk.widget.custom.a.b.a()     // Catch: java.lang.Throwable -> L79
            int r8 = r8.c(r1)     // Catch: java.lang.Throwable -> L79
            com.mbridge.msdk.widget.custom.a.b r9 = com.mbridge.msdk.widget.custom.a.b.a()     // Catch: java.lang.Throwable -> L79
            int r9 = r9.c(r0)     // Catch: java.lang.Throwable -> L79
            com.mbridge.msdk.widget.custom.a.b r2 = com.mbridge.msdk.widget.custom.a.b.a()     // Catch: java.lang.Throwable -> L79
            int r1 = r2.c(r1)     // Catch: java.lang.Throwable -> L79
            com.mbridge.msdk.widget.custom.a.b r2 = com.mbridge.msdk.widget.custom.a.b.a()     // Catch: java.lang.Throwable -> L79
            int r0 = r2.c(r0)     // Catch: java.lang.Throwable -> L79
            r6.setMargins(r8, r9, r1, r0)     // Catch: java.lang.Throwable -> L79
            r8 = 9
            r9 = -1
            r6.addRule(r8, r9)     // Catch: java.lang.Throwable -> L79
            r8 = 11
            r6.addRule(r8, r9)     // Catch: java.lang.Throwable -> L79
            r7.setLayoutParams(r6)     // Catch: java.lang.Throwable -> L79
            goto L83
        L79:
            r6 = move-exception
            java.lang.String r7 = com.mbridge.msdk.widget.custom.b.b.a
            java.lang.String r6 = r6.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r7, r6)
        L83:
            return
    }

    public static void c(android.graphics.Bitmap r2, android.widget.ImageView r3, int r4, android.widget.ImageView r5) {
            if (r2 == 0) goto Lb
            boolean r0 = r2.isRecycled()     // Catch: java.lang.Throwable -> L4a
            if (r0 != 0) goto Lb
            r3.setImageBitmap(r2)     // Catch: java.lang.Throwable -> L4a
        Lb:
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.CENTER_INSIDE     // Catch: java.lang.Throwable -> L4a
            r3.setScaleType(r0)     // Catch: java.lang.Throwable -> L4a
            com.mbridge.msdk.widget.custom.a.b r0 = com.mbridge.msdk.widget.custom.a.b.a()     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = "20dp"
            int r0 = r0.c(r1)     // Catch: java.lang.Throwable -> L4a
            int r4 = r4 - r0
            float r0 = (float) r4     // Catch: java.lang.Throwable -> L4a
            r1 = 1057342095(0x3f05c28f, float:0.5225)
            float r0 = r0 * r1
            int r0 = (int) r0     // Catch: java.lang.Throwable -> L4a
            if (r5 == 0) goto L33
            android.view.ViewGroup$LayoutParams r1 = r5.getLayoutParams()     // Catch: java.lang.Throwable -> L4a
            android.widget.RelativeLayout$LayoutParams r1 = (android.widget.RelativeLayout.LayoutParams) r1     // Catch: java.lang.Throwable -> L4a
            r1.width = r4     // Catch: java.lang.Throwable -> L4a
            r1.height = r0     // Catch: java.lang.Throwable -> L4a
            r5.setLayoutParams(r1)     // Catch: java.lang.Throwable -> L4a
            a(r5, r2)     // Catch: java.lang.Throwable -> L4a
        L33:
            android.view.ViewGroup$LayoutParams r2 = r3.getLayoutParams()     // Catch: java.lang.Throwable -> L4a
            android.widget.RelativeLayout$LayoutParams r2 = (android.widget.RelativeLayout.LayoutParams) r2     // Catch: java.lang.Throwable -> L4a
            r2.height = r0     // Catch: java.lang.Throwable -> L4a
            r4 = 10
            r5 = -1
            r2.addRule(r4, r5)     // Catch: java.lang.Throwable -> L4a
            r4 = 12
            r2.addRule(r4, r5)     // Catch: java.lang.Throwable -> L4a
            r3.setLayoutParams(r2)     // Catch: java.lang.Throwable -> L4a
            goto L54
        L4a:
            r2 = move-exception
            java.lang.String r3 = com.mbridge.msdk.widget.custom.b.b.a
            java.lang.String r2 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L54:
            return
    }
}
