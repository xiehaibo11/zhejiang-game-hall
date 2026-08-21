package com.sigmob.sdk.videoplayer;

public class m extends android.view.TextureView {
    protected static final java.lang.String a = "ResizeTextureView";
    public int b;
    public int c;

    public m(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.b = r1
            r0.c = r1
            r0.b = r1
            r0.c = r1
            return
    }

    public m(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.b = r1
            r0.c = r1
            r0.b = r1
            r0.c = r1
            return
    }

    public void a(int r2, int r3) {
            r1 = this;
            int r0 = r1.b
            if (r0 != r2) goto L8
            int r0 = r1.c
            if (r0 == r3) goto Lf
        L8:
            r1.b = r2
            r1.c = r3
            r1.requestLayout()
        Lf:
            return
    }

    @Override
    protected void onMeasure(int r18, int r19) {
            r17 = this;
            r0 = r17
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onMeasure  ["
            r1.append(r2)
            int r2 = r17.hashCode()
            r1.append(r2)
            java.lang.String r2 = "] "
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ResizeTextureView"
            android.util.Log.i(r2, r1)
            float r1 = r17.getRotation()
            int r1 = (int) r1
            int r3 = r0.b
            int r4 = r0.c
            android.view.ViewParent r5 = r17.getParent()
            android.view.View r5 = (android.view.View) r5
            int r5 = r5.getMeasuredHeight()
            android.view.ViewParent r6 = r17.getParent()
            android.view.View r6 = (android.view.View) r6
            int r6 = r6.getMeasuredWidth()
            r7 = 270(0x10e, float:3.78E-43)
            r8 = 90
            if (r6 == 0) goto L5b
            if (r5 == 0) goto L5b
            if (r3 == 0) goto L5b
            if (r4 == 0) goto L5b
            int r9 = com.sigmob.sdk.videoplayer.g.u
            r10 = 1
            if (r9 != r10) goto L5b
            if (r1 == r8) goto L53
            if (r1 != r7) goto L58
        L53:
            r16 = r6
            r6 = r5
            r5 = r16
        L58:
            int r4 = r3 * r5
            int r4 = r4 / r6
        L5b:
            if (r1 == r8) goto L65
            if (r1 != r7) goto L60
            goto L65
        L60:
            r9 = r18
            r10 = r19
            goto L69
        L65:
            r10 = r18
            r9 = r19
        L69:
            int r11 = getDefaultSize(r3, r9)
            int r12 = getDefaultSize(r4, r10)
            if (r3 <= 0) goto L103
            if (r4 <= 0) goto L103
            int r11 = android.view.View.MeasureSpec.getMode(r9)
            int r12 = android.view.View.MeasureSpec.getSize(r9)
            int r13 = android.view.View.MeasureSpec.getMode(r10)
            int r14 = android.view.View.MeasureSpec.getSize(r10)
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            java.lang.String r7 = "widthMeasureSpec  ["
            r15.append(r7)
            java.lang.String r7 = android.view.View.MeasureSpec.toString(r9)
            r15.append(r7)
            java.lang.String r7 = "]"
            r15.append(r7)
            java.lang.String r9 = r15.toString()
            android.util.Log.i(r2, r9)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r15 = "heightMeasureSpec ["
            r9.append(r15)
            java.lang.String r10 = android.view.View.MeasureSpec.toString(r10)
            r9.append(r10)
            r9.append(r7)
            java.lang.String r7 = r9.toString()
            android.util.Log.i(r2, r7)
            r2 = 1073741824(0x40000000, float:2.0)
            if (r11 != r2) goto Ld3
            if (r13 != r2) goto Ld3
            int r2 = r3 * r14
            int r7 = r12 * r4
            if (r2 >= r7) goto Lcc
        Lc9:
            int r11 = r2 / r4
            goto Lf2
        Lcc:
            if (r2 <= r7) goto Ld1
            int r2 = r7 / r3
            goto Le1
        Ld1:
            r11 = r12
            goto Lf2
        Ld3:
            r7 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r11 != r2) goto Le4
            int r2 = r12 * r4
            int r2 = r2 / r3
            if (r13 != r7) goto Le1
            if (r2 <= r14) goto Le1
            int r2 = r14 * r3
            goto Lc9
        Le1:
            r11 = r12
            r12 = r2
            goto L103
        Le4:
            if (r13 != r2) goto Lf4
            int r2 = r14 * r3
            int r2 = r2 / r4
            if (r11 != r7) goto Lf1
            if (r2 <= r12) goto Lf1
        Led:
            int r2 = r12 * r4
            int r2 = r2 / r3
            goto Le1
        Lf1:
            r11 = r2
        Lf2:
            r12 = r14
            goto L103
        Lf4:
            if (r13 != r7) goto Lfc
            if (r4 <= r14) goto Lfc
            int r2 = r14 * r3
            int r2 = r2 / r4
            goto Lfe
        Lfc:
            r2 = r3
            r14 = r4
        Lfe:
            if (r11 != r7) goto Lf1
            if (r2 <= r12) goto Lf1
            goto Led
        L103:
            if (r6 == 0) goto L13e
            if (r5 == 0) goto L13e
            if (r3 == 0) goto L13e
            if (r4 == 0) goto L13e
            int r2 = com.sigmob.sdk.videoplayer.g.u
            r7 = 3
            if (r2 != r7) goto L111
            goto L140
        L111:
            int r2 = com.sigmob.sdk.videoplayer.g.u
            r7 = 2
            if (r2 != r7) goto L13e
            if (r1 == r8) goto L11c
            r2 = 270(0x10e, float:3.78E-43)
            if (r1 != r2) goto L121
        L11c:
            r16 = r6
            r6 = r5
            r5 = r16
        L121:
            double r1 = (double) r4
            double r3 = (double) r3
            double r1 = r1 / r3
            double r3 = (double) r5
            double r7 = (double) r6
            double r9 = r3 / r7
            int r13 = (r1 > r9 ? 1 : (r1 == r9 ? 0 : -1))
            if (r13 <= 0) goto L133
            double r1 = (double) r11
            double r7 = r7 / r1
            double r1 = (double) r12
            double r7 = r7 * r1
            int r4 = (int) r7
            r3 = r6
            goto L140
        L133:
            int r1 = (r1 > r9 ? 1 : (r1 == r9 ? 0 : -1))
            if (r1 >= 0) goto L13e
            double r1 = (double) r12
            double r3 = r3 / r1
            double r1 = (double) r11
            double r3 = r3 * r1
            int r3 = (int) r3
            r4 = r5
            goto L140
        L13e:
            r3 = r11
            r4 = r12
        L140:
            r0.setMeasuredDimension(r3, r4)
            return
    }

    @Override
    public void setRotation(float r2) {
            r1 = this;
            float r0 = r1.getRotation()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto Le
            super.setRotation(r2)
            r1.requestLayout()
        Le:
            return
    }
}
