package com.mbridge.msdk.playercommon.exoplayer2.text;

public class Cue {
    public static final int ANCHOR_TYPE_END = 2;
    public static final int ANCHOR_TYPE_MIDDLE = 1;
    public static final int ANCHOR_TYPE_START = 0;
    public static final float DIMEN_UNSET = Float.MIN_VALUE;
    public static final int LINE_TYPE_FRACTION = 0;
    public static final int LINE_TYPE_NUMBER = 1;
    public static final int TEXT_SIZE_TYPE_ABSOLUTE = 2;
    public static final int TEXT_SIZE_TYPE_FRACTIONAL = 0;
    public static final int TEXT_SIZE_TYPE_FRACTIONAL_IGNORE_PADDING = 1;
    public static final int TYPE_UNSET = Integer.MIN_VALUE;
    public final android.graphics.Bitmap bitmap;
    public final float bitmapHeight;
    public final float line;
    public final int lineAnchor;
    public final int lineType;
    public final float position;
    public final int positionAnchor;
    public final float size;
    public final java.lang.CharSequence text;
    public final android.text.Layout.Alignment textAlignment;
    public final float textSize;
    public final int textSizeType;
    public final int windowColor;
    public final boolean windowColorSet;

    public @interface AnchorType {
    }

    public @interface LineType {
    }

    public @interface TextSizeType {
    }

    public Cue(android.graphics.Bitmap r16, float r17, int r18, float r19, int r20, float r21, float r22) {
            r15 = this;
            r1 = 0
            r2 = 0
            r5 = 0
            r9 = -2147483648(0xffffffff80000000, float:-0.0)
            r10 = 1
            r13 = 0
            r14 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0 = r15
            r3 = r16
            r4 = r19
            r6 = r20
            r7 = r17
            r8 = r18
            r11 = r21
            r12 = r22
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            return
    }

    public Cue(java.lang.CharSequence r10) {
            r9 = this;
            r2 = 0
            r3 = 1
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            r5 = -2147483648(0xffffffff80000000, float:-0.0)
            r6 = 1
            r7 = -2147483648(0xffffffff80000000, float:-0.0)
            r8 = 1
            r0 = r9
            r1 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public Cue(java.lang.CharSequence r12, android.text.Layout.Alignment r13, float r14, int r15, int r16, float r17, int r18, float r19) {
            r11 = this;
            r9 = 0
            r10 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return
    }

    public Cue(java.lang.CharSequence r16, android.text.Layout.Alignment r17, float r18, int r19, int r20, float r21, int r22, float r23, int r24, float r25) {
            r15 = this;
            r3 = 0
            r12 = 1
            r13 = 0
            r14 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0 = r15
            r1 = r16
            r2 = r17
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r8 = r22
            r9 = r24
            r10 = r25
            r11 = r23
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            return
    }

    public Cue(java.lang.CharSequence r16, android.text.Layout.Alignment r17, float r18, int r19, int r20, float r21, int r22, float r23, boolean r24, int r25) {
            r15 = this;
            r3 = 0
            r9 = -2147483648(0xffffffff80000000, float:-0.0)
            r10 = 1
            r12 = 1
            r0 = r15
            r1 = r16
            r2 = r17
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r8 = r22
            r11 = r23
            r13 = r24
            r14 = r25
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            return
    }

    private Cue(java.lang.CharSequence r1, android.text.Layout.Alignment r2, android.graphics.Bitmap r3, float r4, int r5, int r6, float r7, int r8, int r9, float r10, float r11, float r12, boolean r13, int r14) {
            r0 = this;
            r0.<init>()
            r0.text = r1
            r0.textAlignment = r2
            r0.bitmap = r3
            r0.line = r4
            r0.lineType = r5
            r0.lineAnchor = r6
            r0.position = r7
            r0.positionAnchor = r8
            r0.size = r11
            r0.bitmapHeight = r12
            r0.windowColorSet = r13
            r0.windowColor = r14
            r0.textSizeType = r9
            r0.textSize = r10
            return
    }
}
