package com.sigmob.sdk.base.views;

public class r extends android.widget.ImageView {
    private static final int a = 1000;
    private int b;
    private android.graphics.Movie c;
    private long d;
    private int e;
    private float f;
    private float g;
    private float h;
    private float i;
    private int j;
    private int k;
    private boolean l;
    private volatile boolean m;

    public r(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public r(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public r(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.e = r1
            r2 = 1
            r0.l = r2
            r0.m = r1
            int r1 = android.os.Build.VERSION.SDK_INT
            r3 = 11
            if (r1 < r3) goto L15
            r1 = 0
            r0.setLayerType(r2, r1)
        L15:
            return
    }

    private void a(android.graphics.Canvas r5) {
            r4 = this;
            android.graphics.Movie r0 = r4.c
            int r1 = r4.e
            r0.setTime(r1)
            r5.save()
            float r0 = r4.h
            float r1 = r4.i
            r5.scale(r0, r1)
            android.graphics.Movie r0 = r4.c
            float r1 = r4.f
            float r2 = r4.h
            float r1 = r1 / r2
            float r2 = r4.g
            float r3 = r4.i
            float r2 = r2 / r3
            r0.draw(r5, r1, r2)
            r5.restore()
            return
    }

    private void b() {
            r2 = this;
            boolean r0 = r2.l
            if (r0 == 0) goto L11
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto Le
            r2.postInvalidateOnAnimation()
            goto L11
        Le:
            r2.invalidate()
        L11:
            return
    }

    private void c() {
            r6 = this;
            long r0 = android.os.SystemClock.uptimeMillis()
            long r2 = r6.d
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto Le
            r6.d = r0
        Le:
            android.graphics.Movie r2 = r6.c
            int r2 = r2.duration()
            if (r2 != 0) goto L18
            r2 = 1000(0x3e8, float:1.401E-42)
        L18:
            long r3 = r6.d
            long r0 = r0 - r3
            long r2 = (long) r2
            long r0 = r0 % r2
            int r0 = (int) r0
            r6.e = r0
            return
    }

    private byte[] getGiftBytes() {
            r7 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            android.content.res.Resources r1 = r7.getResources()
            int r2 = r7.b
            java.io.InputStream r1 = r1.openRawResource(r2)
            r2 = 1024(0x400, float:1.435E-42)
            byte[] r3 = new byte[r2]
        L13:
            r4 = 0
            int r5 = r1.read(r3, r4, r2)     // Catch: java.lang.Throwable -> L31
            r6 = -1
            if (r5 == r6) goto L1f
            r0.write(r3, r4, r5)     // Catch: java.lang.Throwable -> L31
            goto L13
        L1f:
            r0.flush()     // Catch: java.lang.Throwable -> L31
            if (r1 == 0) goto L3e
            r1.close()     // Catch: java.lang.Throwable -> L28
            goto L3e
        L28:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
            goto L3e
        L31:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L43
            com.czhj.sdk.logger.SigmobLog.e(r2)     // Catch: java.lang.Throwable -> L43
            if (r1 == 0) goto L3e
            r1.close()     // Catch: java.lang.Throwable -> L28
        L3e:
            byte[] r0 = r0.toByteArray()
            return r0
        L43:
            r0 = move-exception
            if (r1 == 0) goto L52
            r1.close()     // Catch: java.lang.Throwable -> L4a
            goto L52
        L4a:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r1)
        L52:
            throw r0
    }

    public boolean a() {
            r1 = this;
            boolean r0 = r1.m
            return r0
    }

    public android.graphics.Movie getMovie() {
            r1 = this;
            android.graphics.Movie r0 = r1.c
            return r0
    }

    @Override
    protected void onDraw(android.graphics.Canvas r2) {
            r1 = this;
            android.graphics.Movie r0 = r1.c
            if (r0 == 0) goto Le
            r1.c()
            r1.a(r2)
            r1.b()
            goto L11
        Le:
            super.onDraw(r2)
        L11:
            return
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            int r1 = r0.getWidth()
            int r2 = r0.j
            int r1 = r1 - r2
            float r1 = (float) r1
            r2 = 1073741824(0x40000000, float:2.0)
            float r1 = r1 / r2
            r0.f = r1
            int r1 = r0.getHeight()
            int r3 = r0.k
            int r1 = r1 - r3
            float r1 = (float) r1
            float r1 = r1 / r2
            r0.g = r1
            return
    }

    @Override
    protected void onMeasure(int r5, int r6) {
            r4 = this;
            android.graphics.Movie r0 = r4.c
            if (r0 == 0) goto L33
            int r0 = r0.width()
            android.graphics.Movie r1 = r4.c
            int r1 = r1.height()
            int r5 = android.view.View.MeasureSpec.getSize(r5)
            int r2 = android.view.View.MeasureSpec.getSize(r6)
            float r0 = (float) r0
            float r3 = (float) r5
            float r0 = r0 / r3
            float r1 = (float) r1
            float r2 = (float) r2
            float r1 = r1 / r2
            r2 = 1065353216(0x3f800000, float:1.0)
            float r0 = r2 / r0
            r4.h = r0
            float r2 = r2 / r1
            r4.i = r2
            r4.j = r5
            int r5 = android.view.View.MeasureSpec.getSize(r6)
            r4.k = r5
            int r6 = r4.j
            r4.setMeasuredDimension(r6, r5)
            goto L36
        L33:
            super.onMeasure(r5, r6)
        L36:
            return
    }

    @Override
    public void onScreenStateChanged(int r2) {
            r1 = this;
            super.onScreenStateChanged(r2)
            r0 = 1
            if (r2 != r0) goto L7
            goto L8
        L7:
            r0 = 0
        L8:
            r1.l = r0
            r1.b()
            return
    }

    @Override
    protected void onVisibilityChanged(android.view.View r1, int r2) {
            r0 = this;
            super.onVisibilityChanged(r1, r2)
            if (r2 != 0) goto L7
            r1 = 1
            goto L8
        L7:
            r1 = 0
        L8:
            r0.l = r1
            r0.b()
            return
    }

    @Override
    protected void onWindowVisibilityChanged(int r1) {
            r0 = this;
            super.onWindowVisibilityChanged(r1)
            if (r1 != 0) goto L7
            r1 = 1
            goto L8
        L7:
            r1 = 0
        L8:
            r0.l = r1
            r0.b()
            return
    }

    public void setMovie(android.graphics.Movie r1) {
            r0 = this;
            r0.c = r1
            r0.requestLayout()
            return
    }

    public void setMovieResource(int r3) {
            r2 = this;
            r2.b = r3
            byte[] r3 = r2.getGiftBytes()
            int r0 = r3.length
            r1 = 0
            android.graphics.Movie r3 = android.graphics.Movie.decodeByteArray(r3, r1, r0)
            r2.c = r3
            r2.requestLayout()
            return
    }

    public void setMovieTime(int r1) {
            r0 = this;
            r0.e = r1
            r0.invalidate()
            return
    }

    public void setPaused(boolean r5) {
            r4 = this;
            r4.m = r5
            if (r5 != 0) goto Le
            long r0 = android.os.SystemClock.uptimeMillis()
            int r5 = r4.e
            long r2 = (long) r5
            long r0 = r0 - r2
            r4.d = r0
        Le:
            r4.invalidate()
            return
    }
}
