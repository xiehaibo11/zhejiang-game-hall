package com.tkay.basead.ui;

public class AutoResizeTextView extends android.widget.TextView {
    private static final int a = 1000;
    private static final int b = 5;
    private android.text.TextPaint c;
    private float d;
    private float e;
    private boolean f;
    private boolean g;

    public AutoResizeTextView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.d = r1
            r1 = 0
            r0.e = r1
            r1 = 0
            r0.f = r1
            r0.g = r1
            r0.a()
            return
    }

    public AutoResizeTextView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.d = r1
            r1 = 0
            r0.e = r1
            r1 = 0
            r0.f = r1
            r0.g = r1
            r0.a()
            return
    }

    public AutoResizeTextView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.d = r1
            r1 = 0
            r0.e = r1
            r1 = 0
            r0.f = r1
            r0.g = r1
            r0.a()
            return
    }

    private int a(java.lang.CharSequence r10, int r11) {
            r9 = this;
            android.text.StaticLayout r8 = new android.text.StaticLayout
            android.text.TextPaint r2 = r9.c
            android.text.Layout$Alignment r4 = android.text.Layout.Alignment.ALIGN_NORMAL
            float r5 = r9.d
            float r6 = r9.e
            r7 = 1
            r0 = r8
            r1 = r10
            r3 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            int r10 = r8.getHeight()
            return r10
    }

    private void a() {
            r1 = this;
            android.text.TextPaint r0 = new android.text.TextPaint
            r0.<init>()
            r1.c = r0
            return
    }

    private void b() {
            r15 = this;
            java.lang.CharSequence r8 = r15.getText()
            int r0 = r15.getWidth()
            int r1 = r15.getPaddingLeft()
            int r0 = r0 - r1
            int r1 = r15.getPaddingRight()
            int r9 = r0 - r1
            int r0 = r15.getHeight()
            int r1 = r15.getPaddingTop()
            int r0 = r0 - r1
            int r1 = r15.getPaddingBottom()
            int r10 = r0 - r1
            if (r9 == 0) goto L72
            if (r10 == 0) goto L72
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto L2d
            goto L72
        L2d:
            r0 = 1
            r15.g = r0
            float r0 = r15.getTextSize()
            int r0 = (int) r0
            r11 = r0
        L36:
            r0 = 5
            r12 = 0
            if (r11 < r0) goto L67
            android.text.TextPaint r0 = r15.c
            float r1 = (float) r11
            r0.setTextSize(r1)
            android.text.TextPaint r0 = r15.c
            int r1 = r8.length()
            float r0 = r0.measureText(r8, r12, r1)
            int r13 = (int) r0
            android.text.StaticLayout r14 = new android.text.StaticLayout
            android.text.TextPaint r2 = r15.c
            android.text.Layout$Alignment r4 = android.text.Layout.Alignment.ALIGN_NORMAL
            float r5 = r15.d
            float r6 = r15.e
            r7 = 1
            r0 = r14
            r1 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            int r0 = r14.getHeight()
            if (r13 >= r9) goto L64
            if (r0 < r10) goto L67
        L64:
            int r11 = r11 + (-1)
            goto L36
        L67:
            float r0 = (float) r11
            r15.setTextSize(r12, r0)
            r15.g = r12
            r15.f = r12
            r15.invalidate()
        L72:
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r15) {
            r14 = this;
            boolean r0 = r14.g
            if (r0 == 0) goto L5
            return
        L5:
            boolean r0 = r14.f
            if (r0 == 0) goto L7b
            java.lang.CharSequence r15 = r14.getText()
            int r0 = r14.getWidth()
            int r1 = r14.getPaddingLeft()
            int r0 = r0 - r1
            int r1 = r14.getPaddingRight()
            int r0 = r0 - r1
            int r1 = r14.getHeight()
            int r2 = r14.getPaddingTop()
            int r1 = r1 - r2
            int r2 = r14.getPaddingBottom()
            int r9 = r1 - r2
            if (r0 == 0) goto L7a
            if (r9 == 0) goto L7a
            boolean r1 = android.text.TextUtils.isEmpty(r15)
            if (r1 == 0) goto L35
            goto L7a
        L35:
            r1 = 1
            r14.g = r1
            float r1 = r14.getTextSize()
            int r1 = (int) r1
            r10 = r1
        L3e:
            r1 = 5
            r11 = 0
            if (r10 < r1) goto L6f
            android.text.TextPaint r1 = r14.c
            float r2 = (float) r10
            r1.setTextSize(r2)
            android.text.TextPaint r1 = r14.c
            int r2 = r15.length()
            float r1 = r1.measureText(r15, r11, r2)
            int r12 = (int) r1
            android.text.StaticLayout r13 = new android.text.StaticLayout
            android.text.TextPaint r3 = r14.c
            android.text.Layout$Alignment r5 = android.text.Layout.Alignment.ALIGN_NORMAL
            float r6 = r14.d
            float r7 = r14.e
            r8 = 1
            r1 = r13
            r2 = r15
            r4 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            int r1 = r13.getHeight()
            if (r12 >= r0) goto L6c
            if (r1 < r9) goto L6f
        L6c:
            int r10 = r10 + (-1)
            goto L3e
        L6f:
            float r15 = (float) r10
            r14.setTextSize(r11, r15)
            r14.g = r11
            r14.f = r11
            r14.invalidate()
        L7a:
            return
        L7b:
            super.onDraw(r15)
            return
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onSizeChanged(r1, r2, r3, r4)
            r1 = 1
            r0.f = r1
            return
    }

    @Override
    protected void onTextChanged(java.lang.CharSequence r1, int r2, int r3, int r4) {
            r0 = this;
            super.onTextChanged(r1, r2, r3, r4)
            r1 = 1
            r0.f = r1
            return
    }

    @Override
    public void setLineSpacing(float r1, float r2) {
            r0 = this;
            super.setLineSpacing(r1, r2)
            r0.d = r2
            r0.e = r1
            return
    }
}
