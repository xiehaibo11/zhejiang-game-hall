package com.mbridge.msdk.dycreator.baseview.cusview;

public class MBCusRoundImageView extends android.widget.ImageView {
    private int a;
    private int b;
    private int c;
    private int d;
    private android.graphics.Xfermode e;
    private int f;
    private int g;
    private int h;
    private int i;
    private int j;
    private int k;
    private int l;
    private int m;
    private int n;
    private float[] o;
    private float[] p;
    private android.graphics.RectF q;
    private android.graphics.RectF r;
    private boolean s;
    private boolean t;
    private android.graphics.Path u;
    private android.graphics.Paint v;

    static class 1 {
        static final int[] a = null;

        static {
                com.mbridge.msdk.dycreator.a.c[] r0 = com.mbridge.msdk.dycreator.a.c.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a = r0
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.a     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.T     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.Q     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.W     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> L3e
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.Y     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> L49
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.P     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> L54
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.X     // Catch: java.lang.NoSuchFieldError -> L54
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L54
                r2 = 7
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L54
            L54:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> L60
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.ah     // Catch: java.lang.NoSuchFieldError -> L60
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L60
                r2 = 8
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L60
            L60:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> L6c
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.ai     // Catch: java.lang.NoSuchFieldError -> L6c
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L6c
                r2 = 9
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L6c
            L6c:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> L78
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.aj     // Catch: java.lang.NoSuchFieldError -> L78
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L78
                r2 = 10
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L78
            L78:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> L84
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.ak     // Catch: java.lang.NoSuchFieldError -> L84
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L84
                r2 = 11
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L84
            L84:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> L90
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.al     // Catch: java.lang.NoSuchFieldError -> L90
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L90
                r2 = 12
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L90
            L90:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> L9c
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.b     // Catch: java.lang.NoSuchFieldError -> L9c
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L9c
                r2 = 13
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L9c
            L9c:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> La8
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.c     // Catch: java.lang.NoSuchFieldError -> La8
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> La8
                r2 = 14
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> La8
            La8:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> Lb4
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.U     // Catch: java.lang.NoSuchFieldError -> Lb4
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> Lb4
                r2 = 15
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> Lb4
            Lb4:
                int[] r0 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a     // Catch: java.lang.NoSuchFieldError -> Lc0
                com.mbridge.msdk.dycreator.a.c r1 = com.mbridge.msdk.dycreator.a.c.r     // Catch: java.lang.NoSuchFieldError -> Lc0
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> Lc0
                r2 = 16
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> Lc0
            Lc0:
                return
        }
    }

    public MBCusRoundImageView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public MBCusRoundImageView(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r0, r1)
            r2.setAttributeSet(r4)     // Catch: java.lang.Exception -> L10
            android.view.ViewGroup$LayoutParams r3 = r2.generateLayoutParams(r3, r4)     // Catch: java.lang.Exception -> L10
            r2.setLayoutParams(r3)     // Catch: java.lang.Exception -> L10
            goto L14
        L10:
            r3 = move-exception
            r3.printStackTrace()
        L14:
            return
    }

    public MBCusRoundImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            android.graphics.Path r1 = new android.graphics.Path
            r1.<init>()
            r0.u = r1
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.v = r1
            r1 = 8
            float[] r2 = new float[r1]
            r0.o = r2
            float[] r1 = new float[r1]
            r0.p = r1
            android.graphics.RectF r1 = new android.graphics.RectF
            r1.<init>()
            r0.r = r1
            android.graphics.RectF r1 = new android.graphics.RectF
            r1.<init>()
            r0.q = r1
            android.graphics.PorterDuffXfermode r1 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r2 = android.graphics.PorterDuff.Mode.DST_IN
            r1.<init>(r2)
            r0.e = r1
            return
    }

    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.content.Context r11, android.util.AttributeSet r12) {
            r10 = this;
            android.widget.RelativeLayout$LayoutParams r11 = new android.widget.RelativeLayout$LayoutParams
            r0 = -1
            r11.<init>(r0, r0)
            com.mbridge.msdk.dycreator.a.b r1 = com.mbridge.msdk.dycreator.a.b.a()
            java.util.HashMap r1 = r1.c()
            int r2 = r12.getAttributeCount()
            r3 = 0
        L13:
            if (r3 >= r2) goto Lb7
            java.lang.String r4 = r12.getAttributeName(r3)
            java.lang.Object r4 = r1.get(r4)
            com.mbridge.msdk.dycreator.a.c r4 = (com.mbridge.msdk.dycreator.a.c) r4
            if (r4 != 0) goto L23
            goto Lb3
        L23:
            int[] r5 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a
            int r4 = r4.ordinal()
            r4 = r5[r4]
            r5 = 6
            if (r4 == r5) goto L8f
            r5 = 13
            r6 = -2
            java.lang.String r7 = "wrap"
            java.lang.String r8 = "m"
            java.lang.String r9 = "f"
            if (r4 == r5) goto L67
            r5 = 14
            if (r4 == r5) goto L3f
            goto Lb3
        L3f:
            java.lang.String r4 = r12.getAttributeValue(r3)
            boolean r5 = r4.startsWith(r9)
            if (r5 != 0) goto L64
            boolean r5 = r4.startsWith(r8)
            if (r5 == 0) goto L50
            goto L64
        L50:
            boolean r5 = r4.startsWith(r7)
            if (r5 == 0) goto L59
            r11.height = r6
            goto Lb3
        L59:
            com.mbridge.msdk.dycreator.a.b r5 = com.mbridge.msdk.dycreator.a.b.a()
            int r4 = r5.b(r4)
            r11.height = r4
            goto Lb3
        L64:
            r11.height = r0
            goto Lb3
        L67:
            java.lang.String r4 = r12.getAttributeValue(r3)
            boolean r5 = r4.startsWith(r9)
            if (r5 != 0) goto L8c
            boolean r5 = r4.startsWith(r8)
            if (r5 == 0) goto L78
            goto L8c
        L78:
            boolean r5 = r4.startsWith(r7)
            if (r5 == 0) goto L81
            r11.width = r6
            goto Lb3
        L81:
            com.mbridge.msdk.dycreator.a.b r5 = com.mbridge.msdk.dycreator.a.b.a()
            int r4 = r5.b(r4)
            r11.width = r4
            goto Lb3
        L8c:
            r11.width = r0
            goto Lb3
        L8f:
            java.lang.String r4 = r12.getAttributeValue(r3)
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto Lb3
            java.lang.String r5 = "invisible"
            boolean r5 = r4.equals(r5)
            if (r5 == 0) goto La6
            r4 = 4
            r10.setVisibility(r4)
            goto Lb3
        La6:
            java.lang.String r5 = "gone"
            boolean r4 = r4.equalsIgnoreCase(r5)
            if (r4 == 0) goto Lb3
            r4 = 8
            r10.setVisibility(r4)
        Lb3:
            int r3 = r3 + 1
            goto L13
        Lb7:
            return r11
    }

    @Override
    protected void onDraw(android.graphics.Canvas r7) {
            r6 = this;
            if (r7 != 0) goto L3
            return
        L3:
            android.graphics.RectF r0 = r6.q     // Catch: java.lang.Exception -> Lc0
            r1 = 31
            r2 = 0
            r7.saveLayer(r0, r2, r1)     // Catch: java.lang.Exception -> Lc0
            int r0 = r6.f     // Catch: java.lang.Exception -> Lc0
            int r1 = r6.m     // Catch: java.lang.Exception -> Lc0
            int r1 = r1 * 2
            int r0 = r0 - r1
            float r0 = (float) r0     // Catch: java.lang.Exception -> Lc0
            r1 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 * r1
            int r3 = r6.f     // Catch: java.lang.Exception -> Lc0
            float r3 = (float) r3     // Catch: java.lang.Exception -> Lc0
            float r0 = r0 / r3
            int r3 = r6.g     // Catch: java.lang.Exception -> Lc0
            int r4 = r6.m     // Catch: java.lang.Exception -> Lc0
            int r4 = r4 * 2
            int r3 = r3 - r4
            float r3 = (float) r3     // Catch: java.lang.Exception -> Lc0
            float r3 = r3 * r1
            int r1 = r6.g     // Catch: java.lang.Exception -> Lc0
            float r1 = (float) r1     // Catch: java.lang.Exception -> Lc0
            float r3 = r3 / r1
            int r1 = r6.f     // Catch: java.lang.Exception -> Lc0
            float r1 = (float) r1     // Catch: java.lang.Exception -> Lc0
            r4 = 1073741824(0x40000000, float:2.0)
            float r1 = r1 / r4
            int r5 = r6.g     // Catch: java.lang.Exception -> Lc0
            float r5 = (float) r5     // Catch: java.lang.Exception -> Lc0
            float r5 = r5 / r4
            r7.scale(r0, r3, r1, r5)     // Catch: java.lang.Exception -> Lc0
            super.onDraw(r7)     // Catch: java.lang.Exception -> Lc0
            android.graphics.Paint r0 = r6.v     // Catch: java.lang.Exception -> Lc0
            if (r0 == 0) goto L54
            android.graphics.Paint r0 = r6.v     // Catch: java.lang.Exception -> Lc0
            r0.reset()     // Catch: java.lang.Exception -> Lc0
            android.graphics.Paint r0 = r6.v     // Catch: java.lang.Exception -> Lc0
            r1 = 1
            r0.setAntiAlias(r1)     // Catch: java.lang.Exception -> Lc0
            android.graphics.Paint r0 = r6.v     // Catch: java.lang.Exception -> Lc0
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.FILL     // Catch: java.lang.Exception -> Lc0
            r0.setStyle(r1)     // Catch: java.lang.Exception -> Lc0
            android.graphics.Paint r0 = r6.v     // Catch: java.lang.Exception -> Lc0
            android.graphics.Xfermode r1 = r6.e     // Catch: java.lang.Exception -> Lc0
            r0.setXfermode(r1)     // Catch: java.lang.Exception -> Lc0
        L54:
            android.graphics.Path r0 = r6.u     // Catch: java.lang.Exception -> Lc0
            if (r0 == 0) goto L68
            android.graphics.Path r0 = r6.u     // Catch: java.lang.Exception -> Lc0
            r0.reset()     // Catch: java.lang.Exception -> Lc0
            android.graphics.Path r0 = r6.u     // Catch: java.lang.Exception -> Lc0
            android.graphics.RectF r1 = r6.q     // Catch: java.lang.Exception -> Lc0
            float[] r3 = r6.p     // Catch: java.lang.Exception -> Lc0
            android.graphics.Path$Direction r4 = android.graphics.Path.Direction.CCW     // Catch: java.lang.Exception -> Lc0
            r0.addRoundRect(r1, r3, r4)     // Catch: java.lang.Exception -> Lc0
        L68:
            android.graphics.Path r0 = r6.u     // Catch: java.lang.Exception -> Lc0
            android.graphics.Paint r1 = r6.v     // Catch: java.lang.Exception -> Lc0
            r7.drawPath(r0, r1)     // Catch: java.lang.Exception -> Lc0
            android.graphics.Paint r0 = r6.v     // Catch: java.lang.Exception -> Lc0
            if (r0 == 0) goto L78
            android.graphics.Paint r0 = r6.v     // Catch: java.lang.Exception -> Lc0
            r0.setXfermode(r2)     // Catch: java.lang.Exception -> Lc0
        L78:
            r7.restore()     // Catch: java.lang.Exception -> Lc0
            boolean r0 = r6.s     // Catch: java.lang.Exception -> Lc0
            if (r0 == 0) goto Lca
            int r0 = r6.m     // Catch: java.lang.Exception -> Lc0
            int r1 = r6.n     // Catch: java.lang.Exception -> Lc0
            android.graphics.RectF r2 = r6.r     // Catch: java.lang.Exception -> Lc0
            float[] r3 = r6.o     // Catch: java.lang.Exception -> Lc0
            android.graphics.Path r4 = r6.u     // Catch: java.lang.Exception -> Lbb
            if (r4 == 0) goto L90
            android.graphics.Path r4 = r6.u     // Catch: java.lang.Exception -> Lbb
            r4.reset()     // Catch: java.lang.Exception -> Lbb
        L90:
            android.graphics.Paint r4 = r6.v     // Catch: java.lang.Exception -> Lbb
            if (r4 == 0) goto La6
            android.graphics.Paint r4 = r6.v     // Catch: java.lang.Exception -> Lbb
            float r0 = (float) r0     // Catch: java.lang.Exception -> Lbb
            r4.setStrokeWidth(r0)     // Catch: java.lang.Exception -> Lbb
            android.graphics.Paint r0 = r6.v     // Catch: java.lang.Exception -> Lbb
            r0.setColor(r1)     // Catch: java.lang.Exception -> Lbb
            android.graphics.Paint r0 = r6.v     // Catch: java.lang.Exception -> Lbb
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.STROKE     // Catch: java.lang.Exception -> Lbb
            r0.setStyle(r1)     // Catch: java.lang.Exception -> Lbb
        La6:
            android.graphics.Path r0 = r6.u     // Catch: java.lang.Exception -> Lbb
            if (r0 == 0) goto Lb1
            android.graphics.Path r0 = r6.u     // Catch: java.lang.Exception -> Lbb
            android.graphics.Path$Direction r1 = android.graphics.Path.Direction.CCW     // Catch: java.lang.Exception -> Lbb
            r0.addRoundRect(r2, r3, r1)     // Catch: java.lang.Exception -> Lbb
        Lb1:
            if (r7 == 0) goto Lca
            android.graphics.Path r0 = r6.u     // Catch: java.lang.Exception -> Lbb
            android.graphics.Paint r1 = r6.v     // Catch: java.lang.Exception -> Lbb
            r7.drawPath(r0, r1)     // Catch: java.lang.Exception -> Lbb
            goto Lca
        Lbb:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Exception -> Lc0
            goto Lca
        Lc0:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            java.lang.String r0 = "MBridgeImageView"
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        Lca:
            return
    }

    @Override
    protected void onSizeChanged(int r4, int r5, int r6, int r7) {
            r3 = this;
            super.onSizeChanged(r4, r5, r6, r7)
            r3.f = r4     // Catch: java.lang.Exception -> Ld9
            r3.g = r5     // Catch: java.lang.Exception -> Ld9
            boolean r4 = r3.t     // Catch: java.lang.Exception -> Ld9
            r5 = 0
            r6 = 1073741824(0x40000000, float:2.0)
            if (r4 == 0) goto L80
            float[] r4 = r3.o     // Catch: java.lang.Exception -> L7b
            if (r4 == 0) goto La7
            float[] r4 = r3.p     // Catch: java.lang.Exception -> L7b
            if (r4 == 0) goto La7
        L16:
            r4 = 2
            if (r5 >= r4) goto L2f
            float[] r4 = r3.o     // Catch: java.lang.Exception -> L7b
            int r7 = r3.i     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            r4[r5] = r7     // Catch: java.lang.Exception -> L7b
            float[] r4 = r3.p     // Catch: java.lang.Exception -> L7b
            int r7 = r3.i     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            int r0 = r3.m     // Catch: java.lang.Exception -> L7b
            float r0 = (float) r0     // Catch: java.lang.Exception -> L7b
            float r0 = r0 / r6
            float r7 = r7 - r0
            r4[r5] = r7     // Catch: java.lang.Exception -> L7b
            int r5 = r5 + 1
            goto L16
        L2f:
            r5 = 4
            if (r4 >= r5) goto L48
            float[] r5 = r3.o     // Catch: java.lang.Exception -> L7b
            int r7 = r3.j     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            r5[r4] = r7     // Catch: java.lang.Exception -> L7b
            float[] r5 = r3.p     // Catch: java.lang.Exception -> L7b
            int r7 = r3.j     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            int r0 = r3.m     // Catch: java.lang.Exception -> L7b
            float r0 = (float) r0     // Catch: java.lang.Exception -> L7b
            float r0 = r0 / r6
            float r7 = r7 - r0
            r5[r4] = r7     // Catch: java.lang.Exception -> L7b
            int r4 = r4 + 1
            goto L2f
        L48:
            r4 = 6
            if (r5 >= r4) goto L61
            float[] r4 = r3.o     // Catch: java.lang.Exception -> L7b
            int r7 = r3.k     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            r4[r5] = r7     // Catch: java.lang.Exception -> L7b
            float[] r4 = r3.p     // Catch: java.lang.Exception -> L7b
            int r7 = r3.k     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            int r0 = r3.m     // Catch: java.lang.Exception -> L7b
            float r0 = (float) r0     // Catch: java.lang.Exception -> L7b
            float r0 = r0 / r6
            float r7 = r7 - r0
            r4[r5] = r7     // Catch: java.lang.Exception -> L7b
            int r5 = r5 + 1
            goto L48
        L61:
            r5 = 8
            if (r4 >= r5) goto La7
            float[] r5 = r3.o     // Catch: java.lang.Exception -> L7b
            int r7 = r3.l     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            r5[r4] = r7     // Catch: java.lang.Exception -> L7b
            float[] r5 = r3.p     // Catch: java.lang.Exception -> L7b
            int r7 = r3.l     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            int r0 = r3.m     // Catch: java.lang.Exception -> L7b
            float r0 = (float) r0     // Catch: java.lang.Exception -> L7b
            float r0 = r0 / r6
            float r7 = r7 - r0
            r5[r4] = r7     // Catch: java.lang.Exception -> L7b
            int r4 = r4 + 1
            goto L61
        L7b:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Exception -> Ld9
            goto La7
        L80:
            float[] r4 = r3.o     // Catch: java.lang.Exception -> Ld9
            if (r4 == 0) goto La7
            float[] r4 = r3.p     // Catch: java.lang.Exception -> Ld9
            if (r4 == 0) goto La7
        L88:
            float[] r4 = r3.o     // Catch: java.lang.Exception -> La3
            int r4 = r4.length     // Catch: java.lang.Exception -> La3
            if (r5 >= r4) goto La7
            float[] r4 = r3.o     // Catch: java.lang.Exception -> La3
            int r7 = r3.h     // Catch: java.lang.Exception -> La3
            float r7 = (float) r7     // Catch: java.lang.Exception -> La3
            r4[r5] = r7     // Catch: java.lang.Exception -> La3
            float[] r4 = r3.p     // Catch: java.lang.Exception -> La3
            int r7 = r3.h     // Catch: java.lang.Exception -> La3
            float r7 = (float) r7     // Catch: java.lang.Exception -> La3
            int r0 = r3.m     // Catch: java.lang.Exception -> La3
            float r0 = (float) r0     // Catch: java.lang.Exception -> La3
            float r0 = r0 / r6
            float r7 = r7 - r0
            r4[r5] = r7     // Catch: java.lang.Exception -> La3
            int r5 = r5 + 1
            goto L88
        La3:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Exception -> Ld9
        La7:
            android.graphics.RectF r4 = r3.r     // Catch: java.lang.Exception -> Ld9
            if (r4 == 0) goto Lc8
            android.graphics.RectF r4 = r3.r     // Catch: java.lang.Exception -> Ld9
            int r5 = r3.m     // Catch: java.lang.Exception -> Ld9
            float r5 = (float) r5     // Catch: java.lang.Exception -> Ld9
            float r5 = r5 / r6
            int r7 = r3.m     // Catch: java.lang.Exception -> Ld9
            float r7 = (float) r7     // Catch: java.lang.Exception -> Ld9
            float r7 = r7 / r6
            int r0 = r3.f     // Catch: java.lang.Exception -> Ld9
            float r0 = (float) r0     // Catch: java.lang.Exception -> Ld9
            int r1 = r3.m     // Catch: java.lang.Exception -> Ld9
            float r1 = (float) r1     // Catch: java.lang.Exception -> Ld9
            float r1 = r1 / r6
            float r0 = r0 - r1
            int r1 = r3.g     // Catch: java.lang.Exception -> Ld9
            float r1 = (float) r1     // Catch: java.lang.Exception -> Ld9
            int r2 = r3.m     // Catch: java.lang.Exception -> Ld9
            float r2 = (float) r2     // Catch: java.lang.Exception -> Ld9
            float r2 = r2 / r6
            float r1 = r1 - r2
            r4.set(r5, r7, r0, r1)     // Catch: java.lang.Exception -> Ld9
        Lc8:
            android.graphics.RectF r4 = r3.q     // Catch: java.lang.Exception -> Ld9
            if (r4 == 0) goto Le3
            android.graphics.RectF r4 = r3.q     // Catch: java.lang.Exception -> Ld9
            int r5 = r3.f     // Catch: java.lang.Exception -> Ld9
            float r5 = (float) r5     // Catch: java.lang.Exception -> Ld9
            int r6 = r3.g     // Catch: java.lang.Exception -> Ld9
            float r6 = (float) r6     // Catch: java.lang.Exception -> Ld9
            r7 = 0
            r4.set(r7, r7, r5, r6)     // Catch: java.lang.Exception -> Ld9
            goto Le3
        Ld9:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r5 = "MBridgeImageView"
            com.mbridge.msdk.foundation.tools.z.d(r5, r4)
        Le3:
            return
    }

    public void setAttributeSet(android.util.AttributeSet r9) {
            r8 = this;
            com.mbridge.msdk.dycreator.a.b r0 = com.mbridge.msdk.dycreator.a.b.a()
            java.util.HashMap r0 = r0.c()
            int r1 = r9.getAttributeCount()
            r2 = 0
            r3 = r2
        Le:
            if (r3 >= r1) goto L1fe
            java.lang.String r4 = r9.getAttributeName(r3)
            java.lang.Object r4 = r0.get(r4)
            com.mbridge.msdk.dycreator.a.c r4 = (com.mbridge.msdk.dycreator.a.c) r4
            if (r4 != 0) goto L1e
            goto L1fa
        L1e:
            int[] r5 = com.mbridge.msdk.dycreator.baseview.cusview.MBCusRoundImageView.1.a
            int r4 = r4.ordinal()
            r4 = r5[r4]
            r5 = 8
            switch(r4) {
                case 1: goto L1e2;
                case 2: goto L1d6;
                case 3: goto L14c;
                case 4: goto L12b;
                case 5: goto L106;
                case 6: goto Le1;
                case 7: goto Laa;
                case 8: goto L91;
                case 9: goto L78;
                case 10: goto L5f;
                case 11: goto L46;
                case 12: goto L2d;
                default: goto L2b;
            }
        L2b:
            goto L1fa
        L2d:
            com.mbridge.msdk.dycreator.a.b r4 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r5 = r9.getAttributeValue(r3)
            int r4 = r4.b(r5)
            r8.c = r4
            int r5 = r8.a
            int r6 = r8.b
            int r7 = r8.d
            r8.setPadding(r5, r6, r4, r7)
            goto L1fa
        L46:
            com.mbridge.msdk.dycreator.a.b r4 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r5 = r9.getAttributeValue(r3)
            int r4 = r4.b(r5)
            r8.a = r4
            int r5 = r8.b
            int r6 = r8.c
            int r7 = r8.d
            r8.setPadding(r4, r5, r6, r7)
            goto L1fa
        L5f:
            com.mbridge.msdk.dycreator.a.b r4 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r5 = r9.getAttributeValue(r3)
            int r4 = r4.b(r5)
            r8.d = r4
            int r5 = r8.a
            int r6 = r8.b
            int r7 = r8.c
            r8.setPadding(r5, r6, r7, r4)
            goto L1fa
        L78:
            com.mbridge.msdk.dycreator.a.b r4 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r5 = r9.getAttributeValue(r3)
            int r4 = r4.b(r5)
            r8.b = r4
            int r5 = r8.a
            int r6 = r8.c
            int r7 = r8.d
            r8.setPadding(r5, r4, r6, r7)
            goto L1fa
        L91:
            com.mbridge.msdk.dycreator.a.b r4 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r5 = r9.getAttributeValue(r3)
            int r4 = r4.b(r5)
            r8.d = r4
            r8.c = r4
            r8.b = r4
            r8.a = r4
            r8.setPadding(r4, r4, r4, r4)
            goto L1fa
        Laa:
            java.lang.String r4 = r9.getAttributeValue(r3)
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L1fa
            java.lang.String r5 = "fitXY"
            boolean r5 = r4.equals(r5)
            if (r5 == 0) goto Lc3
            android.widget.ImageView$ScaleType r4 = android.widget.ImageView.ScaleType.FIT_XY
            r8.setScaleType(r4)
            goto L1fa
        Lc3:
            java.lang.String r5 = "centerInside"
            boolean r5 = r4.equals(r5)
            if (r5 == 0) goto Ld2
            android.widget.ImageView$ScaleType r4 = android.widget.ImageView.ScaleType.CENTER_INSIDE
            r8.setScaleType(r4)
            goto L1fa
        Ld2:
            java.lang.String r5 = "centerCrop"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L1fa
            android.widget.ImageView$ScaleType r4 = android.widget.ImageView.ScaleType.CENTER_CROP
            r8.setScaleType(r4)
            goto L1fa
        Le1:
            java.lang.String r4 = r9.getAttributeValue(r3)
            boolean r6 = android.text.TextUtils.isEmpty(r4)
            if (r6 != 0) goto L1fa
            java.lang.String r6 = "invisible"
            boolean r6 = r4.equals(r6)
            if (r6 == 0) goto Lf9
            r4 = 4
            r8.setVisibility(r4)
            goto L1fa
        Lf9:
            java.lang.String r6 = "gone"
            boolean r4 = r4.equalsIgnoreCase(r6)
            if (r4 == 0) goto L1fa
            r8.setVisibility(r5)
            goto L1fa
        L106:
            java.lang.String r4 = r9.getAttributeValue(r3)
            boolean r6 = android.text.TextUtils.isEmpty(r4)
            if (r6 == 0) goto L112
            goto L1fa
        L112:
            java.util.HashMap<java.lang.String, java.lang.String> r6 = com.mbridge.msdk.dycreator.e.b.a
            java.lang.String r4 = r4.substring(r5)
            java.lang.Object r4 = r6.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 == 0) goto L126
            goto L1fa
        L126:
            r8.setTag(r4)
            goto L1fa
        L12b:
            java.lang.String r4 = r9.getAttributeValue(r3)
            boolean r6 = android.text.TextUtils.isEmpty(r4)
            if (r6 != 0) goto L1fa
            java.util.HashMap<java.lang.String, java.lang.String> r6 = com.mbridge.msdk.dycreator.e.b.a
            java.lang.String r4 = r4.substring(r5)
            java.lang.Object r4 = r6.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto L1fa
            r8.setContentDescription(r4)
            goto L1fa
        L14c:
            java.lang.String r4 = r9.getAttributeValue(r3)
            java.lang.String r5 = "#"
            boolean r5 = r4.startsWith(r5)
            if (r5 == 0) goto L1b2
            java.lang.String r5 = "-"
            java.lang.String[] r4 = r4.split(r5)     // Catch: java.lang.Exception -> L15f
            goto L160
        L15f:
            r4 = 0
        L160:
            r5 = 2
            if (r4 == 0) goto L177
            int r6 = r4.length
            if (r6 > r5) goto L177
            com.mbridge.msdk.dycreator.a.b r4 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r5 = r9.getAttributeValue(r3)
            int r4 = r4.a(r5)
            r8.setBackgroundColor(r4)
            goto L1fa
        L177:
            if (r4 == 0) goto L1a2
            int r6 = r4.length
            r7 = 3
            if (r6 != r7) goto L1a2
            r6 = r4[r5]     // Catch: java.lang.Exception -> L1a2
            android.graphics.drawable.GradientDrawable$Orientation r6 = com.mbridge.msdk.dycreator.baseview.GradientOrientationUtils.getOrientation(r6)     // Catch: java.lang.Exception -> L1a2
            int[] r5 = new int[r5]     // Catch: java.lang.Exception -> L1a2
            r7 = r4[r2]     // Catch: java.lang.Exception -> L1a2
            int r7 = android.graphics.Color.parseColor(r7)     // Catch: java.lang.Exception -> L1a2
            r5[r2] = r7     // Catch: java.lang.Exception -> L1a2
            r7 = 1
            r4 = r4[r7]     // Catch: java.lang.Exception -> L1a2
            int r4 = android.graphics.Color.parseColor(r4)     // Catch: java.lang.Exception -> L1a2
            r5[r7] = r4     // Catch: java.lang.Exception -> L1a2
            android.graphics.drawable.GradientDrawable r4 = new android.graphics.drawable.GradientDrawable     // Catch: java.lang.Exception -> L1a2
            r4.<init>(r6, r5)     // Catch: java.lang.Exception -> L1a2
            r4.setGradientType(r2)     // Catch: java.lang.Exception -> L1a2
            r8.setBackground(r4)     // Catch: java.lang.Exception -> L1a2
            goto L1fa
        L1a2:
            com.mbridge.msdk.dycreator.a.b r4 = com.mbridge.msdk.dycreator.a.b.a()
            java.lang.String r5 = r9.getAttributeValue(r3)
            int r4 = r4.a(r5)
            r8.setBackgroundColor(r4)
            goto L1fa
        L1b2:
            java.lang.String r5 = "@drawable/"
            boolean r5 = r4.startsWith(r5)
            if (r5 == 0) goto L1c0
            r5 = 10
            java.lang.String r4 = r4.substring(r5)
        L1c0:
            android.content.res.Resources r5 = r8.getResources()
            android.content.Context r6 = r8.getContext()
            java.lang.String r6 = r6.getPackageName()
            java.lang.String r7 = "drawable"
            int r4 = r5.getIdentifier(r4, r7, r6)
            r8.setBackgroundResource(r4)
            goto L1fa
        L1d6:
            java.lang.String r4 = r9.getAttributeValue(r3)
            com.mbridge.msdk.dycreator.a.b r5 = com.mbridge.msdk.dycreator.a.b.a()
            r5.a(r4, r8)
            goto L1fa
        L1e2:
            java.lang.String r4 = r9.getAttributeValue(r3)
            java.lang.String r5 = "@+id/"
            boolean r5 = r4.startsWith(r5)
            if (r5 == 0) goto L1fa
            r5 = 5
            java.lang.String r4 = r4.substring(r5)
            int r4 = r4.hashCode()
            r8.setId(r4)
        L1fa:
            int r3 = r3 + 1
            goto Le
        L1fe:
            return
    }

    public void setBorder(int r2, int r3, int r4) {
            r1 = this;
            r0 = 1
            r1.s = r0
            r1.m = r3
            r1.n = r4
            r1.h = r2
            return
    }

    public void setCornerRadius(int r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void setCustomBorder(int r2, int r3, int r4, int r5, int r6, int r7) {
            r1 = this;
            r0 = 1
            r1.s = r0
            r1.t = r0
            r1.m = r6
            r1.n = r7
            r1.i = r2
            r1.k = r4
            r1.j = r3
            r1.l = r5
            return
    }
}
