package com.mbridge.msdk.dycreator.baseview.cusview;

public class MBridgeImageView extends android.widget.ImageView {
    private android.graphics.Xfermode a;
    private int b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;
    private int i;
    private int j;
    private float[] k;
    private float[] l;
    private android.graphics.RectF m;
    private android.graphics.RectF n;
    private boolean o;
    private boolean p;
    private android.graphics.Path q;
    private android.graphics.Paint r;

    public MBridgeImageView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public MBridgeImageView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public MBridgeImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            android.graphics.Path r1 = new android.graphics.Path
            r1.<init>()
            r0.q = r1
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>()
            r0.r = r1
            r1 = 8
            float[] r2 = new float[r1]
            r0.k = r2
            float[] r1 = new float[r1]
            r0.l = r1
            android.graphics.RectF r1 = new android.graphics.RectF
            r1.<init>()
            r0.n = r1
            android.graphics.RectF r1 = new android.graphics.RectF
            r1.<init>()
            r0.m = r1
            android.graphics.PorterDuffXfermode r1 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r2 = android.graphics.PorterDuff.Mode.DST_IN
            r1.<init>(r2)
            r0.a = r1
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r7) {
            r6 = this;
            if (r7 != 0) goto L3
            return
        L3:
            android.graphics.RectF r0 = r6.m     // Catch: java.lang.Exception -> Lc0
            r1 = 31
            r2 = 0
            r7.saveLayer(r0, r2, r1)     // Catch: java.lang.Exception -> Lc0
            int r0 = r6.b     // Catch: java.lang.Exception -> Lc0
            int r1 = r6.i     // Catch: java.lang.Exception -> Lc0
            int r1 = r1 * 2
            int r0 = r0 - r1
            float r0 = (float) r0     // Catch: java.lang.Exception -> Lc0
            r1 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 * r1
            int r3 = r6.b     // Catch: java.lang.Exception -> Lc0
            float r3 = (float) r3     // Catch: java.lang.Exception -> Lc0
            float r0 = r0 / r3
            int r3 = r6.c     // Catch: java.lang.Exception -> Lc0
            int r4 = r6.i     // Catch: java.lang.Exception -> Lc0
            int r4 = r4 * 2
            int r3 = r3 - r4
            float r3 = (float) r3     // Catch: java.lang.Exception -> Lc0
            float r3 = r3 * r1
            int r1 = r6.c     // Catch: java.lang.Exception -> Lc0
            float r1 = (float) r1     // Catch: java.lang.Exception -> Lc0
            float r3 = r3 / r1
            int r1 = r6.b     // Catch: java.lang.Exception -> Lc0
            float r1 = (float) r1     // Catch: java.lang.Exception -> Lc0
            r4 = 1073741824(0x40000000, float:2.0)
            float r1 = r1 / r4
            int r5 = r6.c     // Catch: java.lang.Exception -> Lc0
            float r5 = (float) r5     // Catch: java.lang.Exception -> Lc0
            float r5 = r5 / r4
            r7.scale(r0, r3, r1, r5)     // Catch: java.lang.Exception -> Lc0
            super.onDraw(r7)     // Catch: java.lang.Exception -> Lc0
            android.graphics.Paint r0 = r6.r     // Catch: java.lang.Exception -> Lc0
            if (r0 == 0) goto L54
            android.graphics.Paint r0 = r6.r     // Catch: java.lang.Exception -> Lc0
            r0.reset()     // Catch: java.lang.Exception -> Lc0
            android.graphics.Paint r0 = r6.r     // Catch: java.lang.Exception -> Lc0
            r1 = 1
            r0.setAntiAlias(r1)     // Catch: java.lang.Exception -> Lc0
            android.graphics.Paint r0 = r6.r     // Catch: java.lang.Exception -> Lc0
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.FILL     // Catch: java.lang.Exception -> Lc0
            r0.setStyle(r1)     // Catch: java.lang.Exception -> Lc0
            android.graphics.Paint r0 = r6.r     // Catch: java.lang.Exception -> Lc0
            android.graphics.Xfermode r1 = r6.a     // Catch: java.lang.Exception -> Lc0
            r0.setXfermode(r1)     // Catch: java.lang.Exception -> Lc0
        L54:
            android.graphics.Path r0 = r6.q     // Catch: java.lang.Exception -> Lc0
            if (r0 == 0) goto L68
            android.graphics.Path r0 = r6.q     // Catch: java.lang.Exception -> Lc0
            r0.reset()     // Catch: java.lang.Exception -> Lc0
            android.graphics.Path r0 = r6.q     // Catch: java.lang.Exception -> Lc0
            android.graphics.RectF r1 = r6.m     // Catch: java.lang.Exception -> Lc0
            float[] r3 = r6.l     // Catch: java.lang.Exception -> Lc0
            android.graphics.Path$Direction r4 = android.graphics.Path.Direction.CCW     // Catch: java.lang.Exception -> Lc0
            r0.addRoundRect(r1, r3, r4)     // Catch: java.lang.Exception -> Lc0
        L68:
            android.graphics.Path r0 = r6.q     // Catch: java.lang.Exception -> Lc0
            android.graphics.Paint r1 = r6.r     // Catch: java.lang.Exception -> Lc0
            r7.drawPath(r0, r1)     // Catch: java.lang.Exception -> Lc0
            android.graphics.Paint r0 = r6.r     // Catch: java.lang.Exception -> Lc0
            if (r0 == 0) goto L78
            android.graphics.Paint r0 = r6.r     // Catch: java.lang.Exception -> Lc0
            r0.setXfermode(r2)     // Catch: java.lang.Exception -> Lc0
        L78:
            r7.restore()     // Catch: java.lang.Exception -> Lc0
            boolean r0 = r6.o     // Catch: java.lang.Exception -> Lc0
            if (r0 == 0) goto Lca
            int r0 = r6.i     // Catch: java.lang.Exception -> Lc0
            int r1 = r6.j     // Catch: java.lang.Exception -> Lc0
            android.graphics.RectF r2 = r6.n     // Catch: java.lang.Exception -> Lc0
            float[] r3 = r6.k     // Catch: java.lang.Exception -> Lc0
            android.graphics.Path r4 = r6.q     // Catch: java.lang.Exception -> Lbb
            if (r4 == 0) goto L90
            android.graphics.Path r4 = r6.q     // Catch: java.lang.Exception -> Lbb
            r4.reset()     // Catch: java.lang.Exception -> Lbb
        L90:
            android.graphics.Paint r4 = r6.r     // Catch: java.lang.Exception -> Lbb
            if (r4 == 0) goto La6
            android.graphics.Paint r4 = r6.r     // Catch: java.lang.Exception -> Lbb
            float r0 = (float) r0     // Catch: java.lang.Exception -> Lbb
            r4.setStrokeWidth(r0)     // Catch: java.lang.Exception -> Lbb
            android.graphics.Paint r0 = r6.r     // Catch: java.lang.Exception -> Lbb
            r0.setColor(r1)     // Catch: java.lang.Exception -> Lbb
            android.graphics.Paint r0 = r6.r     // Catch: java.lang.Exception -> Lbb
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.STROKE     // Catch: java.lang.Exception -> Lbb
            r0.setStyle(r1)     // Catch: java.lang.Exception -> Lbb
        La6:
            android.graphics.Path r0 = r6.q     // Catch: java.lang.Exception -> Lbb
            if (r0 == 0) goto Lb1
            android.graphics.Path r0 = r6.q     // Catch: java.lang.Exception -> Lbb
            android.graphics.Path$Direction r1 = android.graphics.Path.Direction.CCW     // Catch: java.lang.Exception -> Lbb
            r0.addRoundRect(r2, r3, r1)     // Catch: java.lang.Exception -> Lbb
        Lb1:
            if (r7 == 0) goto Lca
            android.graphics.Path r0 = r6.q     // Catch: java.lang.Exception -> Lbb
            android.graphics.Paint r1 = r6.r     // Catch: java.lang.Exception -> Lbb
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
            r3.b = r4
            r3.c = r5
            boolean r4 = r3.p
            r5 = 0
            r6 = 1073741824(0x40000000, float:2.0)
            if (r4 == 0) goto L80
            float[] r4 = r3.k     // Catch: java.lang.Exception -> L7b
            if (r4 == 0) goto La7
            float[] r4 = r3.l     // Catch: java.lang.Exception -> L7b
            if (r4 == 0) goto La7
        L16:
            r4 = 2
            if (r5 >= r4) goto L2f
            float[] r4 = r3.k     // Catch: java.lang.Exception -> L7b
            int r7 = r3.e     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            r4[r5] = r7     // Catch: java.lang.Exception -> L7b
            float[] r4 = r3.l     // Catch: java.lang.Exception -> L7b
            int r7 = r3.e     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            int r0 = r3.i     // Catch: java.lang.Exception -> L7b
            float r0 = (float) r0     // Catch: java.lang.Exception -> L7b
            float r0 = r0 / r6
            float r7 = r7 - r0
            r4[r5] = r7     // Catch: java.lang.Exception -> L7b
            int r5 = r5 + 1
            goto L16
        L2f:
            r5 = 4
            if (r4 >= r5) goto L48
            float[] r5 = r3.k     // Catch: java.lang.Exception -> L7b
            int r7 = r3.f     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            r5[r4] = r7     // Catch: java.lang.Exception -> L7b
            float[] r5 = r3.l     // Catch: java.lang.Exception -> L7b
            int r7 = r3.f     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            int r0 = r3.i     // Catch: java.lang.Exception -> L7b
            float r0 = (float) r0     // Catch: java.lang.Exception -> L7b
            float r0 = r0 / r6
            float r7 = r7 - r0
            r5[r4] = r7     // Catch: java.lang.Exception -> L7b
            int r4 = r4 + 1
            goto L2f
        L48:
            r4 = 6
            if (r5 >= r4) goto L61
            float[] r4 = r3.k     // Catch: java.lang.Exception -> L7b
            int r7 = r3.g     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            r4[r5] = r7     // Catch: java.lang.Exception -> L7b
            float[] r4 = r3.l     // Catch: java.lang.Exception -> L7b
            int r7 = r3.g     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            int r0 = r3.i     // Catch: java.lang.Exception -> L7b
            float r0 = (float) r0     // Catch: java.lang.Exception -> L7b
            float r0 = r0 / r6
            float r7 = r7 - r0
            r4[r5] = r7     // Catch: java.lang.Exception -> L7b
            int r5 = r5 + 1
            goto L48
        L61:
            r5 = 8
            if (r4 >= r5) goto La7
            float[] r5 = r3.k     // Catch: java.lang.Exception -> L7b
            int r7 = r3.h     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            r5[r4] = r7     // Catch: java.lang.Exception -> L7b
            float[] r5 = r3.l     // Catch: java.lang.Exception -> L7b
            int r7 = r3.h     // Catch: java.lang.Exception -> L7b
            float r7 = (float) r7     // Catch: java.lang.Exception -> L7b
            int r0 = r3.i     // Catch: java.lang.Exception -> L7b
            float r0 = (float) r0     // Catch: java.lang.Exception -> L7b
            float r0 = r0 / r6
            float r7 = r7 - r0
            r5[r4] = r7     // Catch: java.lang.Exception -> L7b
            int r4 = r4 + 1
            goto L61
        L7b:
            r4 = move-exception
            r4.printStackTrace()
            goto La7
        L80:
            float[] r4 = r3.k
            if (r4 == 0) goto La7
            float[] r4 = r3.l
            if (r4 == 0) goto La7
        L88:
            float[] r4 = r3.k     // Catch: java.lang.Exception -> La3
            int r4 = r4.length     // Catch: java.lang.Exception -> La3
            if (r5 >= r4) goto La7
            float[] r4 = r3.k     // Catch: java.lang.Exception -> La3
            int r7 = r3.d     // Catch: java.lang.Exception -> La3
            float r7 = (float) r7     // Catch: java.lang.Exception -> La3
            r4[r5] = r7     // Catch: java.lang.Exception -> La3
            float[] r4 = r3.l     // Catch: java.lang.Exception -> La3
            int r7 = r3.d     // Catch: java.lang.Exception -> La3
            float r7 = (float) r7     // Catch: java.lang.Exception -> La3
            int r0 = r3.i     // Catch: java.lang.Exception -> La3
            float r0 = (float) r0     // Catch: java.lang.Exception -> La3
            float r0 = r0 / r6
            float r7 = r7 - r0
            r4[r5] = r7     // Catch: java.lang.Exception -> La3
            int r5 = r5 + 1
            goto L88
        La3:
            r4 = move-exception
            r4.printStackTrace()
        La7:
            android.graphics.RectF r4 = r3.n
            if (r4 == 0) goto Lc0
            int r5 = r3.i
            float r7 = (float) r5
            float r7 = r7 / r6
            float r0 = (float) r5
            float r0 = r0 / r6
            int r1 = r3.b
            float r1 = (float) r1
            float r2 = (float) r5
            float r2 = r2 / r6
            float r1 = r1 - r2
            int r2 = r3.c
            float r2 = (float) r2
            float r5 = (float) r5
            float r5 = r5 / r6
            float r2 = r2 - r5
            r4.set(r7, r0, r1, r2)
        Lc0:
            android.graphics.RectF r4 = r3.m
            if (r4 == 0) goto Lce
            int r5 = r3.b
            float r5 = (float) r5
            int r6 = r3.c
            float r6 = (float) r6
            r7 = 0
            r4.set(r7, r7, r5, r6)
        Lce:
            return
    }

    public void setBorder(int r2, int r3, int r4) {
            r1 = this;
            r0 = 1
            r1.o = r0
            r1.i = r3
            r1.j = r4
            r1.d = r2
            return
    }

    public void setCornerRadius(int r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setCustomBorder(int r2, int r3, int r4, int r5, int r6, int r7) {
            r1 = this;
            r0 = 1
            r1.o = r0
            r1.p = r0
            r1.i = r6
            r1.j = r7
            r1.e = r2
            r1.g = r4
            r1.f = r3
            r1.h = r5
            return
    }
}
