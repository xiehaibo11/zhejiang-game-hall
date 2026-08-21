package com.tkay.core.common.l;

public final class b {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(int r2, int r3, int r4, int r5) {
            r0 = 1
            if (r4 > 0) goto L6
            if (r5 > 0) goto L6
            return r0
        L6:
            int r1 = r2 / r0
            if (r1 <= r4) goto L11
            int r1 = r3 / r0
            if (r1 <= r5) goto L11
            int r0 = r0 * 2
            goto L6
        L11:
            return r0
    }

    public static android.graphics.Bitmap a(android.content.Context r6, android.graphics.Bitmap r7) {
            boolean r0 = r7.isRecycled()
            r1 = 0
            if (r0 == 0) goto L17
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()
            java.lang.String r6 = r6.q()
            java.lang.String r7 = "Error"
            java.lang.String r0 = "Error, cannot access an invalid/free'd bitmap here!"
            com.tkay.core.common.k.c.a(r7, r0, r6)
            return r1
        L17:
            int r0 = r7.getWidth()     // Catch: java.lang.Throwable -> L85
            int r0 = r0 / 3
            int r2 = r7.getHeight()     // Catch: java.lang.Throwable -> L85
            int r2 = r2 / 3
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.Throwable -> L85
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r0, r2, r3)     // Catch: java.lang.Throwable -> L85
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L85
            r3 = 17
            if (r2 < r3) goto L69
            android.renderscript.RenderScript r6 = android.renderscript.RenderScript.create(r6)     // Catch: java.lang.Throwable -> L85
            android.renderscript.Element r2 = android.renderscript.Element.U8_4(r6)     // Catch: java.lang.Throwable -> L66
            android.renderscript.ScriptIntrinsicBlur r2 = android.renderscript.ScriptIntrinsicBlur.create(r6, r2)     // Catch: java.lang.Throwable -> L66
            android.renderscript.Allocation r7 = android.renderscript.Allocation.createFromBitmap(r6, r7)     // Catch: java.lang.Throwable -> L62
            android.renderscript.Allocation r3 = android.renderscript.Allocation.createFromBitmap(r6, r0)     // Catch: java.lang.Throwable -> L5f
            r4 = 1103626240(0x41c80000, float:25.0)
            r2.setRadius(r4)     // Catch: java.lang.Throwable -> L5d
            r2.setInput(r7)     // Catch: java.lang.Throwable -> L5d
            r2.forEach(r3)     // Catch: java.lang.Throwable -> L5d
            r3.copyTo(r0)     // Catch: java.lang.Throwable -> L5d
            android.graphics.Canvas r4 = new android.graphics.Canvas     // Catch: java.lang.Throwable -> L5d
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L5d
            r5 = 855638016(0x33000000, float:2.9802322E-8)
            r4.drawColor(r5)     // Catch: java.lang.Throwable -> L5d
            r1 = r6
            goto L70
        L5d:
            r0 = move-exception
            goto L8a
        L5f:
            r0 = move-exception
            r3 = r1
            goto L8a
        L62:
            r0 = move-exception
            r7 = r1
            r3 = r7
            goto L8a
        L66:
            r0 = move-exception
            r7 = r1
            goto L88
        L69:
            android.graphics.Bitmap r0 = a(r0)     // Catch: java.lang.Throwable -> L85
            r7 = r1
            r2 = r7
            r3 = r2
        L70:
            if (r1 == 0) goto L75
            r1.destroy()     // Catch: java.lang.Throwable -> L75
        L75:
            if (r2 == 0) goto L7a
            r2.destroy()     // Catch: java.lang.Throwable -> L7a
        L7a:
            if (r7 == 0) goto L7f
            r7.destroy()     // Catch: java.lang.Throwable -> L7f
        L7f:
            if (r3 == 0) goto L84
            r3.destroy()     // Catch: java.lang.Throwable -> L84
        L84:
            return r0
        L85:
            r0 = move-exception
            r6 = r1
            r7 = r6
        L88:
            r2 = r7
            r3 = r2
        L8a:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> La2
            if (r6 == 0) goto L92
            r6.destroy()     // Catch: java.lang.Throwable -> L92
        L92:
            if (r2 == 0) goto L97
            r2.destroy()     // Catch: java.lang.Throwable -> L97
        L97:
            if (r7 == 0) goto L9c
            r7.destroy()     // Catch: java.lang.Throwable -> L9c
        L9c:
            if (r3 == 0) goto La1
            r3.destroy()     // Catch: java.lang.Throwable -> La1
        La1:
            return r1
        La2:
            r0 = move-exception
            if (r6 == 0) goto La8
            r6.destroy()     // Catch: java.lang.Throwable -> La8
        La8:
            if (r2 == 0) goto Lad
            r2.destroy()     // Catch: java.lang.Throwable -> Lad
        Lad:
            if (r7 == 0) goto Lb2
            r7.destroy()     // Catch: java.lang.Throwable -> Lb2
        Lb2:
            if (r3 == 0) goto Lb7
            r3.destroy()     // Catch: java.lang.Throwable -> Lb7
        Lb7:
            throw r0
    }

    private static android.graphics.Bitmap a(android.graphics.Bitmap r33) {
            int r8 = r33.getWidth()
            int r9 = r33.getHeight()
            int r10 = r8 * r9
            int[] r11 = new int[r10]
            r2 = 0
            r4 = 0
            r5 = 0
            r0 = r33
            r1 = r11
            r3 = r8
            r6 = r8
            r7 = r9
            r0.getPixels(r1, r2, r3, r4, r5, r6, r7)
            int r0 = r8 + (-1)
            int r1 = r9 + (-1)
            int[] r2 = new int[r10]
            int[] r3 = new int[r10]
            int[] r4 = new int[r10]
            int r5 = java.lang.Math.max(r8, r9)
            int[] r5 = new int[r5]
            r6 = 173056(0x2a400, float:2.42503E-40)
            int[] r7 = new int[r6]
            r12 = 0
        L2e:
            if (r12 >= r6) goto L37
            int r13 = r12 / 676
            r7[r12] = r13
            int r12 = r12 + 1
            goto L2e
        L37:
            r6 = 2
            int[] r12 = new int[r6]
            r12 = {x029a: FILL_ARRAY_DATA , data: [51, 3} // fill-array
            java.lang.Class<int> r13 = int.class
            java.lang.Object r12 = java.lang.reflect.Array.newInstance(r13, r12)
            int[][] r12 = (int[][]) r12
            r13 = 0
            r14 = 0
            r15 = 0
        L48:
            r16 = -25
            r6 = 25
            r18 = 1
            if (r13 >= r9) goto L16b
            r10 = r16
            r16 = 0
            r20 = 0
            r21 = 0
            r22 = 0
            r23 = 0
            r24 = 0
            r25 = 0
            r26 = 0
            r27 = 0
        L64:
            r28 = 65280(0xff00, float:9.1477E-41)
            r29 = 16711680(0xff0000, float:2.3418052E-38)
            if (r10 > r6) goto Lc9
            r31 = r9
            r6 = 0
            int r9 = java.lang.Math.max(r10, r6)
            int r9 = java.lang.Math.min(r0, r9)
            int r9 = r9 + r14
            r9 = r11[r9]
            int r19 = r10 + 25
            r32 = r12[r19]
            r19 = r9 & r29
            int r19 = r19 >> 16
            r32[r6] = r19
            r19 = r9 & r28
            int r19 = r19 >> 8
            r32[r18] = r19
            r9 = r9 & 255(0xff, float:3.57E-43)
            r17 = 2
            r32[r17] = r9
            int r9 = java.lang.Math.abs(r10)
            int r9 = 26 - r9
            r19 = r32[r6]
            int r19 = r19 * r9
            int r16 = r16 + r19
            r19 = r32[r18]
            int r19 = r19 * r9
            int r20 = r20 + r19
            r19 = r32[r17]
            int r19 = r19 * r9
            int r21 = r21 + r19
            if (r10 <= 0) goto Lb6
            r9 = r32[r6]
            int r25 = r25 + r9
            r9 = r32[r18]
            int r26 = r26 + r9
            r9 = r32[r17]
            int r27 = r27 + r9
            goto Lc2
        Lb6:
            r9 = r32[r6]
            int r22 = r22 + r9
            r6 = r32[r18]
            int r23 = r23 + r6
            r6 = r32[r17]
            int r24 = r24 + r6
        Lc2:
            int r10 = r10 + 1
            r9 = r31
            r6 = 25
            goto L64
        Lc9:
            r31 = r9
            r6 = 25
            r9 = 0
        Lce:
            if (r9 >= r8) goto L161
            r10 = r7[r16]
            r2[r14] = r10
            r10 = r7[r20]
            r3[r14] = r10
            r10 = r7[r21]
            r4[r14] = r10
            int r16 = r16 - r22
            int r20 = r20 - r23
            int r21 = r21 - r24
            int r10 = r6 + (-25)
            int r10 = r10 + 51
            int r10 = r10 % 51
            r10 = r12[r10]
            r19 = 0
            r30 = r10[r19]
            int r22 = r22 - r30
            r30 = r10[r18]
            int r23 = r23 - r30
            r17 = 2
            r30 = r10[r17]
            int r24 = r24 - r30
            if (r13 != 0) goto L109
            int r30 = r9 + 25
            r32 = r7
            int r7 = r30 + 1
            int r7 = java.lang.Math.min(r7, r0)
            r5[r9] = r7
            goto L10b
        L109:
            r32 = r7
        L10b:
            r7 = r5[r9]
            int r7 = r7 + r15
            r7 = r11[r7]
            r30 = r7 & r29
            int r30 = r30 >> 16
            r19 = 0
            r10[r19] = r30
            r30 = r7 & r28
            int r30 = r30 >> 8
            r10[r18] = r30
            r7 = r7 & 255(0xff, float:3.57E-43)
            r17 = 2
            r10[r17] = r7
            r7 = r10[r19]
            int r25 = r25 + r7
            r7 = r10[r18]
            int r26 = r26 + r7
            r7 = r10[r17]
            int r27 = r27 + r7
            int r16 = r16 + r25
            int r20 = r20 + r26
            int r21 = r21 + r27
            int r6 = r6 + 1
            int r6 = r6 % 51
            int r7 = r6 % 51
            r7 = r12[r7]
            r10 = 0
            r19 = r7[r10]
            int r22 = r22 + r19
            r19 = r7[r18]
            int r23 = r23 + r19
            r17 = 2
            r19 = r7[r17]
            int r24 = r24 + r19
            r30 = r7[r10]
            int r25 = r25 - r30
            r10 = r7[r18]
            int r26 = r26 - r10
            r7 = r7[r17]
            int r27 = r27 - r7
            int r14 = r14 + 1
            int r9 = r9 + 1
            r7 = r32
            goto Lce
        L161:
            r32 = r7
            int r15 = r15 + r8
            int r13 = r13 + 1
            r9 = r31
            r6 = 2
            goto L48
        L16b:
            r32 = r7
            r31 = r9
            r6 = 0
        L170:
            if (r6 >= r8) goto L289
            int r0 = r8 * (-25)
            r23 = r5
            r24 = r11
            r5 = r16
            r7 = 0
            r9 = 0
            r10 = 0
            r11 = 25
            r13 = 0
            r14 = 0
            r15 = 0
            r20 = 0
            r21 = 0
            r22 = 0
        L188:
            if (r5 > r11) goto L1e2
            r11 = 0
            int r19 = java.lang.Math.max(r11, r0)
            int r25 = r19 + r6
            int r19 = r5 + 25
            r26 = r12[r19]
            r19 = r2[r25]
            r26[r11] = r19
            r11 = r3[r25]
            r26[r18] = r11
            r11 = r4[r25]
            r17 = 2
            r26[r17] = r11
            int r11 = java.lang.Math.abs(r5)
            int r11 = 26 - r11
            r27 = r2[r25]
            int r27 = r27 * r11
            int r7 = r7 + r27
            r27 = r3[r25]
            int r27 = r27 * r11
            int r9 = r9 + r27
            r25 = r4[r25]
            int r25 = r25 * r11
            int r10 = r10 + r25
            if (r5 <= 0) goto L1cd
            r11 = 0
            r19 = r26[r11]
            int r20 = r20 + r19
            r19 = r26[r18]
            int r21 = r21 + r19
            r17 = 2
            r19 = r26[r17]
            int r22 = r22 + r19
            goto L1da
        L1cd:
            r11 = 0
            r17 = 2
            r25 = r26[r11]
            int r13 = r13 + r25
            r11 = r26[r18]
            int r14 = r14 + r11
            r11 = r26[r17]
            int r15 = r15 + r11
        L1da:
            if (r5 >= r1) goto L1dd
            int r0 = r0 + r8
        L1dd:
            int r5 = r5 + 1
            r11 = 25
            goto L188
        L1e2:
            r5 = r6
            r11 = r31
            r0 = 0
            r25 = 25
        L1e8:
            if (r0 >= r11) goto L27b
            r26 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r27 = r24[r5]
            r26 = r27 & r26
            r27 = r32[r7]
            int r27 = r27 << 16
            r26 = r26 | r27
            r27 = r32[r9]
            int r27 = r27 << 8
            r26 = r26 | r27
            r27 = r32[r10]
            r26 = r26 | r27
            r24[r5] = r26
            int r7 = r7 - r13
            int r9 = r9 - r14
            int r10 = r10 - r15
            int r26 = r25 + (-25)
            int r26 = r26 + 51
            int r26 = r26 % 51
            r26 = r12[r26]
            r19 = 0
            r27 = r26[r19]
            int r13 = r13 - r27
            r27 = r26[r18]
            int r14 = r14 - r27
            r17 = 2
            r27 = r26[r17]
            int r15 = r15 - r27
            if (r6 != 0) goto L22b
            r31 = r11
            int r11 = r0 + 26
            int r11 = java.lang.Math.min(r11, r1)
            int r11 = r11 * r8
            r23[r0] = r11
            goto L22d
        L22b:
            r31 = r11
        L22d:
            r11 = r23[r0]
            int r11 = r11 + r6
            r27 = r2[r11]
            r19 = 0
            r26[r19] = r27
            r27 = r3[r11]
            r26[r18] = r27
            r11 = r4[r11]
            r17 = 2
            r26[r17] = r11
            r11 = r26[r19]
            int r20 = r20 + r11
            r11 = r26[r18]
            int r21 = r21 + r11
            r11 = r26[r17]
            int r22 = r22 + r11
            int r7 = r7 + r20
            int r9 = r9 + r21
            int r10 = r10 + r22
            int r25 = r25 + 1
            int r25 = r25 % 51
            r11 = r12[r25]
            r19 = 0
            r26 = r11[r19]
            int r13 = r13 + r26
            r26 = r11[r18]
            int r14 = r14 + r26
            r17 = 2
            r26 = r11[r17]
            int r15 = r15 + r26
            r26 = r11[r19]
            int r20 = r20 - r26
            r26 = r11[r18]
            int r21 = r21 - r26
            r11 = r11[r17]
            int r22 = r22 - r11
            int r5 = r5 + r8
            int r0 = r0 + 1
            r11 = r31
            goto L1e8
        L27b:
            r31 = r11
            r17 = 2
            r19 = 0
            int r6 = r6 + 1
            r5 = r23
            r11 = r24
            goto L170
        L289:
            r24 = r11
            r2 = 0
            r4 = 0
            r5 = 0
            r0 = r33
            r1 = r24
            r3 = r8
            r6 = r8
            r7 = r31
            r0.setPixels(r1, r2, r3, r4, r5, r6, r7)
            return r33
    }

    public static android.graphics.Bitmap a(java.io.FileDescriptor r4, int r5, int r6) {
            r0 = 0
            android.graphics.BitmapFactory$Options r1 = new android.graphics.BitmapFactory$Options     // Catch: java.lang.Throwable -> L1e java.lang.OutOfMemoryError -> L23
            r1.<init>()     // Catch: java.lang.Throwable -> L1e java.lang.OutOfMemoryError -> L23
            r2 = 1
            r1.inJustDecodeBounds = r2     // Catch: java.lang.Throwable -> L1e java.lang.OutOfMemoryError -> L23
            android.graphics.BitmapFactory.decodeFileDescriptor(r4, r0, r1)     // Catch: java.lang.Throwable -> L1e java.lang.OutOfMemoryError -> L23
            int r2 = r1.outWidth     // Catch: java.lang.Throwable -> L1e java.lang.OutOfMemoryError -> L23
            int r3 = r1.outHeight     // Catch: java.lang.Throwable -> L1e java.lang.OutOfMemoryError -> L23
            int r5 = a(r2, r3, r5, r6)     // Catch: java.lang.Throwable -> L1e java.lang.OutOfMemoryError -> L23
            r1.inSampleSize = r5     // Catch: java.lang.Throwable -> L1e java.lang.OutOfMemoryError -> L23
            r5 = 0
            r1.inJustDecodeBounds = r5     // Catch: java.lang.Throwable -> L1e java.lang.OutOfMemoryError -> L23
            android.graphics.Bitmap r4 = android.graphics.BitmapFactory.decodeFileDescriptor(r4, r0, r1)     // Catch: java.lang.Throwable -> L1e java.lang.OutOfMemoryError -> L23
            return r4
        L1e:
            r4 = move-exception
            r4.printStackTrace()
            goto L27
        L23:
            r4 = move-exception
            r4.printStackTrace()
        L27:
            return r0
    }

    private static android.graphics.Bitmap a(java.lang.String r3, int r4, int r5) {
            android.graphics.BitmapFactory$Options r0 = new android.graphics.BitmapFactory$Options     // Catch: java.lang.Exception -> L1d java.lang.OutOfMemoryError -> L21
            r0.<init>()     // Catch: java.lang.Exception -> L1d java.lang.OutOfMemoryError -> L21
            r1 = 1
            r0.inJustDecodeBounds = r1     // Catch: java.lang.Exception -> L1d java.lang.OutOfMemoryError -> L21
            android.graphics.BitmapFactory.decodeFile(r3, r0)     // Catch: java.lang.Exception -> L1d java.lang.OutOfMemoryError -> L21
            int r1 = r0.outWidth     // Catch: java.lang.Exception -> L1d java.lang.OutOfMemoryError -> L21
            int r2 = r0.outHeight     // Catch: java.lang.Exception -> L1d java.lang.OutOfMemoryError -> L21
            int r4 = a(r1, r2, r4, r5)     // Catch: java.lang.Exception -> L1d java.lang.OutOfMemoryError -> L21
            r0.inSampleSize = r4     // Catch: java.lang.Exception -> L1d java.lang.OutOfMemoryError -> L21
            r4 = 0
            r0.inJustDecodeBounds = r4     // Catch: java.lang.Exception -> L1d java.lang.OutOfMemoryError -> L21
            android.graphics.Bitmap r3 = android.graphics.BitmapFactory.decodeFile(r3, r0)     // Catch: java.lang.Exception -> L1d java.lang.OutOfMemoryError -> L21
            return r3
        L1d:
            r3 = move-exception
            r3.printStackTrace()
        L21:
            r3 = 0
            return r3
    }

    public static int[] a(java.lang.String r4) {
            android.graphics.BitmapFactory$Options r0 = new android.graphics.BitmapFactory$Options     // Catch: java.lang.Exception -> L18 java.lang.OutOfMemoryError -> L1c
            r0.<init>()     // Catch: java.lang.Exception -> L18 java.lang.OutOfMemoryError -> L1c
            r1 = 1
            r0.inJustDecodeBounds = r1     // Catch: java.lang.Exception -> L18 java.lang.OutOfMemoryError -> L1c
            android.graphics.BitmapFactory.decodeFile(r4, r0)     // Catch: java.lang.Exception -> L18 java.lang.OutOfMemoryError -> L1c
            r4 = 2
            int[] r4 = new int[r4]     // Catch: java.lang.Exception -> L18 java.lang.OutOfMemoryError -> L1c
            r2 = 0
            int r3 = r0.outWidth     // Catch: java.lang.Exception -> L18 java.lang.OutOfMemoryError -> L1c
            r4[r2] = r3     // Catch: java.lang.Exception -> L18 java.lang.OutOfMemoryError -> L1c
            int r0 = r0.outHeight     // Catch: java.lang.Exception -> L18 java.lang.OutOfMemoryError -> L1c
            r4[r1] = r0     // Catch: java.lang.Exception -> L18 java.lang.OutOfMemoryError -> L1c
            return r4
        L18:
            r4 = move-exception
            r4.printStackTrace()
        L1c:
            r4 = 0
            return r4
    }
}
