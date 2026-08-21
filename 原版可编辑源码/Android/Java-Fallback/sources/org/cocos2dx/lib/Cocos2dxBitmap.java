package org.cocos2dx.lib;

public final class Cocos2dxBitmap {
    private static final int HORIZONTAL_ALIGN_CENTER = 3;
    private static final int HORIZONTAL_ALIGN_LEFT = 1;
    private static final int HORIZONTAL_ALIGN_RIGHT = 2;
    private static final int VERTICAL_ALIGN_BOTTOM = 2;
    private static final int VERTICAL_ALIGN_CENTER = 3;
    private static final int VERTICAL_ALIGN_TOP = 1;
    private static android.content.Context sContext;

    public Cocos2dxBitmap() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.graphics.Typeface calculateShrinkTypeFace(java.lang.String r17, int r18, int r19, android.text.Layout.Alignment r20, float r21, android.text.TextPaint r22, boolean r23) {
            r8 = r17
            r9 = r18
            r10 = r19
            r11 = r21
            r12 = r22
            if (r9 == 0) goto L8c
            if (r10 != 0) goto L10
            goto L8c
        L10:
            int r0 = r9 + 1
            float r0 = (float) r0
            int r1 = r10 + 1
            float r1 = (float) r1
            r13 = 1065353216(0x3f800000, float:1.0)
            float r2 = r11 + r13
            r14 = 0
            if (r23 != 0) goto L48
        L1d:
            float r3 = (float) r9
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 > 0) goto L27
            float r0 = (float) r10
            int r0 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r0 <= 0) goto L85
        L27:
            float r2 = r2 - r13
            float r0 = android.text.StaticLayout.getDesiredWidth(r8, r12)
            double r0 = (double) r0
            double r0 = java.lang.Math.ceil(r0)
            int r0 = (int) r0
            float r0 = (float) r0
            int r1 = (int) r0
            android.graphics.Typeface r3 = r22.getTypeface()
            int r1 = getTextHeight(r8, r1, r2, r3)
            float r1 = (float) r1
            r12.setTextSize(r2)
            int r3 = (r2 > r14 ? 1 : (r2 == r14 ? 0 : -1))
            if (r3 > 0) goto L1d
            r12.setTextSize(r11)
            goto L85
        L48:
            float r3 = (float) r10
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 > 0) goto L52
            float r1 = (float) r9
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 <= 0) goto L85
        L52:
            float r15 = r2 - r13
            android.text.StaticLayout r7 = new android.text.StaticLayout
            r5 = 1065353216(0x3f800000, float:1.0)
            r6 = 0
            r16 = 0
            r0 = r7
            r1 = r17
            r2 = r22
            r3 = r18
            r4 = r20
            r23 = r7
            r7 = r16
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            int r0 = r23.getWidth()
            float r0 = (float) r0
            int r1 = r23.getLineCount()
            r2 = r23
            int r1 = r2.getLineTop(r1)
            float r1 = (float) r1
            r12.setTextSize(r15)
            int r2 = (r15 > r14 ? 1 : (r15 == r14 ? 0 : -1))
            if (r2 > 0) goto L8a
            r12.setTextSize(r11)
        L85:
            android.graphics.Typeface r0 = r22.getTypeface()
            return r0
        L8a:
            r2 = r15
            goto L48
        L8c:
            android.graphics.Typeface r0 = r22.getTypeface()
            return r0
    }

    public static boolean createTextBitmapShadowStroke(byte[] r19, java.lang.String r20, int r21, int r22, int r23, int r24, int r25, int r26, int r27, int r28, float r29, boolean r30, float r31, float r32, float r33, float r34, boolean r35, int r36, int r37, int r38, int r39, float r40, boolean r41, int r42) {
            r0 = r19
            r7 = r27
            r8 = r42
            if (r0 == 0) goto L10f
            int r1 = r0.length
            if (r1 != 0) goto Ld
            goto L10f
        Ld:
            java.lang.String r11 = new java.lang.String
            r11.<init>(r0)
            android.text.Layout$Alignment r0 = android.text.Layout.Alignment.ALIGN_NORMAL
            r6 = r26 & 15
            r5 = 3
            r4 = 1
            r3 = 2
            if (r6 == r4) goto L25
            if (r6 == r3) goto L23
            if (r6 == r5) goto L20
            goto L25
        L20:
            android.text.Layout$Alignment r0 = android.text.Layout.Alignment.ALIGN_CENTER
            goto L25
        L23:
            android.text.Layout$Alignment r0 = android.text.Layout.Alignment.ALIGN_OPPOSITE
        L25:
            r14 = r0
            android.text.TextPaint r2 = newPaint(r20, r21)
            if (r35 == 0) goto L36
            android.graphics.Paint$Style r0 = android.graphics.Paint.Style.STROKE
            r2.setStyle(r0)
            r0 = r40
            r2.setStrokeWidth(r0)
        L36:
            if (r7 > 0) goto L44
            float r0 = android.text.StaticLayout.getDesiredWidth(r11, r2)
            double r0 = (double) r0
            double r0 = java.lang.Math.ceil(r0)
            int r0 = (int) r0
            r13 = r0
            goto L45
        L44:
            r13 = r7
        L45:
            if (r8 != r4) goto L66
            if (r41 != 0) goto L66
            float r0 = android.text.StaticLayout.getDesiredWidth(r11, r2)
            double r0 = (double) r0
            double r0 = java.lang.Math.ceil(r0)
            int r13 = (int) r0
            android.text.StaticLayout r0 = new android.text.StaticLayout
            r15 = 1065353216(0x3f800000, float:1.0)
            r17 = 0
            r10 = r0
            r12 = r2
            r16 = r29
            r10.<init>(r11, r12, r13, r14, r15, r16, r17)
            r4 = r2
            r18 = r6
            r2 = 3
            r9 = 1
            goto L96
        L66:
            if (r8 != r3) goto L7f
            r0 = r21
            float r10 = (float) r0
            r0 = r11
            r1 = r27
            r15 = r2
            r2 = r28
            r12 = 2
            r3 = r14
            r9 = 1
            r4 = r10
            r10 = 3
            r5 = r15
            r18 = r6
            r6 = r41
            calculateShrinkTypeFace(r0, r1, r2, r3, r4, r5, r6)
            goto L85
        L7f:
            r15 = r2
            r18 = r6
            r9 = 1
            r10 = 3
            r12 = 2
        L85:
            android.text.StaticLayout r0 = new android.text.StaticLayout
            r1 = 1065353216(0x3f800000, float:1.0)
            r17 = 0
            r2 = 3
            r10 = r0
            r3 = 2
            r12 = r15
            r4 = r15
            r15 = r1
            r16 = r29
            r10.<init>(r11, r12, r13, r14, r15, r16, r17)
        L96:
            int r1 = r0.getWidth()
            int r5 = r0.getLineCount()
            int r5 = r0.getLineTop(r5)
            int r6 = java.lang.Math.max(r1, r7)
            if (r28 <= 0) goto Lab
            r10 = r28
            goto Lac
        Lab:
            r10 = r5
        Lac:
            if (r8 != r9) goto Lb3
            if (r41 != 0) goto Lb3
            if (r7 <= 0) goto Lb3
            r6 = r7
        Lb3:
            if (r6 == 0) goto L10d
            if (r10 != 0) goto Lb8
            goto L10d
        Lb8:
            r7 = r18
            if (r7 != r2) goto Lc0
            int r1 = r6 - r1
            int r1 = r1 / r3
            goto Lc6
        Lc0:
            if (r7 != r3) goto Lc5
            int r1 = r6 - r1
            goto Lc6
        Lc5:
            r1 = 0
        Lc6:
            int r7 = r26 >> 4
            r7 = r7 & 15
            if (r7 == r3) goto Ld4
            if (r7 == r2) goto Ld0
            r2 = 0
            goto Ld6
        Ld0:
            int r2 = r10 - r5
            int r2 = r2 / r3
            goto Ld6
        Ld4:
            int r2 = r10 - r5
        Ld6:
            android.graphics.Bitmap$Config r3 = android.graphics.Bitmap.Config.ARGB_8888
            android.graphics.Bitmap r3 = android.graphics.Bitmap.createBitmap(r6, r10, r3)
            android.graphics.Canvas r5 = new android.graphics.Canvas
            r5.<init>(r3)
            float r1 = (float) r1
            float r2 = (float) r2
            r5.translate(r1, r2)
            if (r35 == 0) goto Lf6
            r1 = r36
            r2 = r37
            r6 = r38
            r7 = r39
            r4.setARGB(r7, r1, r2, r6)
            r0.draw(r5)
        Lf6:
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.FILL
            r4.setStyle(r1)
            r1 = r22
            r2 = r23
            r6 = r24
            r7 = r25
            r4.setARGB(r7, r1, r2, r6)
            r0.draw(r5)
            initNativeObject(r3)
            return r9
        L10d:
            r0 = 0
            return r0
        L10f:
            r0 = 0
            return r0
    }

    public static int getFontSizeAccordingHeight(int r8) {
            android.text.TextPaint r0 = new android.text.TextPaint
            r0.<init>()
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            android.graphics.Typeface r2 = android.graphics.Typeface.DEFAULT
            r0.setTypeface(r2)
            r2 = 0
            r3 = 1
            r4 = 0
            r5 = 1
        L13:
            if (r4 != 0) goto L2c
            float r6 = (float) r5
            r0.setTextSize(r6)
            r6 = 6
            java.lang.String r7 = "SghMNy"
            r0.getTextBounds(r7, r2, r6, r1)
            int r5 = r5 + 1
            int r6 = r1.height()
            int r6 = r8 - r6
            r7 = 2
            if (r6 > r7) goto L13
            r4 = 1
            goto L13
        L2c:
            return r5
    }

    private static byte[] getPixels(android.graphics.Bitmap r3) {
            if (r3 == 0) goto L1f
            int r0 = r3.getWidth()
            int r1 = r3.getHeight()
            int r0 = r0 * r1
            int r0 = r0 * 4
            byte[] r0 = new byte[r0]
            java.nio.ByteBuffer r1 = java.nio.ByteBuffer.wrap(r0)
            java.nio.ByteOrder r2 = java.nio.ByteOrder.nativeOrder()
            r1.order(r2)
            r3.copyPixelsToBuffer(r1)
            return r0
        L1f:
            r3 = 0
            return r3
    }

    private static java.lang.String getStringWithEllipsis(java.lang.String r2, float r3, float r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            java.lang.String r2 = ""
            return r2
        L9:
            android.text.TextPaint r0 = new android.text.TextPaint
            r0.<init>()
            android.graphics.Typeface r1 = android.graphics.Typeface.DEFAULT
            r0.setTypeface(r1)
            r0.setTextSize(r4)
            android.text.TextUtils$TruncateAt r4 = android.text.TextUtils.TruncateAt.END
            java.lang.CharSequence r2 = android.text.TextUtils.ellipsize(r2, r0, r3, r4)
            java.lang.String r2 = r2.toString()
            return r2
    }

    public static int getTextHeight(java.lang.String r9, int r10, float r11, android.graphics.Typeface r12) {
            android.text.TextPaint r7 = new android.text.TextPaint
            r0 = 129(0x81, float:1.81E-43)
            r7.<init>(r0)
            r7.setTextSize(r11)
            r7.setTypeface(r12)
            int r11 = r9.length()
            r12 = 0
            r8 = 0
        L13:
            if (r12 >= r11) goto L29
            r4 = 1
            float r5 = (float) r10
            r6 = 0
            r0 = r7
            r1 = r9
            r2 = r12
            r3 = r11
            int r0 = r0.breakText(r1, r2, r3, r4, r5, r6)
            if (r0 != 0) goto L25
            int r12 = r12 + 1
            goto L13
        L25:
            int r12 = r12 + r0
            int r8 = r8 + 1
            goto L13
        L29:
            float r9 = r7.ascent()
            float r9 = java.lang.Math.abs(r9)
            float r10 = r7.descent()
            float r10 = java.lang.Math.abs(r10)
            float r9 = r9 + r10
            float r10 = (float) r8
            float r10 = r10 * r9
            double r9 = (double) r10
            double r9 = java.lang.Math.floor(r9)
            int r9 = (int) r9
            return r9
    }

    private static void initNativeObject(android.graphics.Bitmap r2) {
            byte[] r0 = getPixels(r2)
            if (r0 != 0) goto L7
            return
        L7:
            int r1 = r2.getWidth()
            int r2 = r2.getHeight()
            nativeInitBitmapDC(r1, r2, r0)
            return
    }

    private static native void nativeInitBitmapDC(int r0, int r1, byte[] r2);

    private static android.text.TextPaint newPaint(java.lang.String r3, int r4) {
            android.text.TextPaint r0 = new android.text.TextPaint
            r0.<init>()
            float r4 = (float) r4
            r0.setTextSize(r4)
            r4 = 1
            r0.setAntiAlias(r4)
            java.lang.String r4 = ".ttf"
            boolean r4 = r3.endsWith(r4)
            r1 = 0
            if (r4 == 0) goto L3e
            android.content.Context r4 = org.cocos2dx.lib.Cocos2dxBitmap.sContext     // Catch: java.lang.Exception -> L20
            android.graphics.Typeface r4 = org.cocos2dx.lib.Cocos2dxTypefaces.get(r4, r3)     // Catch: java.lang.Exception -> L20
            r0.setTypeface(r4)     // Catch: java.lang.Exception -> L20
            goto L45
        L20:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "error to create ttf type face: "
            r4.append(r2)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r2 = "Cocos2dxBitmap"
            android.util.Log.e(r2, r4)
            android.graphics.Typeface r3 = android.graphics.Typeface.create(r3, r1)
            r0.setTypeface(r3)
            goto L45
        L3e:
            android.graphics.Typeface r3 = android.graphics.Typeface.create(r3, r1)
            r0.setTypeface(r3)
        L45:
            return r0
    }

    public static void setContext(android.content.Context r0) {
            org.cocos2dx.lib.Cocos2dxBitmap.sContext = r0
            return
    }
}
