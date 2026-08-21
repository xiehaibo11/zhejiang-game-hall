package com.kwad.sdk.widget;

public class DownloadProgressBar extends android.view.View {
    private java.lang.Runnable Dm;
    android.graphics.Paint aLG;
    android.graphics.Paint aLH;
    android.graphics.Paint aLI;
    private java.lang.String aLJ;
    private float aLK;
    private android.graphics.Rect aLL;
    private android.graphics.LinearGradient aLM;
    private android.graphics.LinearGradient aLN;
    private android.graphics.LinearGradient aLO;
    private android.graphics.Matrix mMatrix;
    private android.graphics.Path mPath;
    private android.graphics.RectF mRectF;
    private long mStartTime;


    public DownloadProgressBar(android.content.Context r3) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public DownloadProgressBar(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public DownloadProgressBar(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.widget.DownloadProgressBar$1 r2 = new com.kwad.sdk.widget.DownloadProgressBar$1
            r2.<init>(r0)
            r0.Dm = r2
            android.graphics.Paint r2 = new android.graphics.Paint
            r3 = 1
            r2.<init>(r3)
            r0.aLG = r2
            android.graphics.Paint r2 = new android.graphics.Paint
            r2.<init>(r3)
            r0.aLH = r2
            android.graphics.RectF r2 = new android.graphics.RectF
            r2.<init>()
            r0.mRectF = r2
            android.graphics.Paint r2 = new android.graphics.Paint
            r2.<init>(r3)
            r0.aLI = r2
            r3 = 1098907648(0x41800000, float:16.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r3)
            float r1 = (float) r1
            r2.setTextSize(r1)
            android.graphics.Paint r1 = r0.aLI
            r2 = -1
            r1.setColor(r2)
            android.graphics.Paint r1 = r0.aLI
            android.graphics.Paint$Align r2 = android.graphics.Paint.Align.CENTER
            r1.setTextAlign(r2)
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.aLL = r1
            android.graphics.Matrix r1 = new android.graphics.Matrix
            r1.<init>()
            r0.mMatrix = r1
            android.graphics.Path r1 = new android.graphics.Path
            r1.<init>()
            r0.mPath = r1
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            java.lang.Runnable r0 = r1.Dm
            r1.removeCallbacks(r0)
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r15) {
            r14 = this;
            super.onDraw(r15)
            android.graphics.Path r0 = r14.mPath
            r15.clipPath(r0)
            android.graphics.Paint r0 = r14.aLG
            android.graphics.LinearGradient r1 = r14.aLM
            r0.setShader(r1)
            android.graphics.RectF r0 = r14.mRectF
            android.graphics.Paint r1 = r14.aLG
            r15.drawRect(r0, r1)
            android.graphics.Paint r0 = r14.aLG
            android.graphics.LinearGradient r1 = r14.aLN
            r0.setShader(r1)
            int r0 = r14.getWidth()
            float r0 = (float) r0
            float r1 = r14.aLK
            float r0 = r0 * r1
            r1 = 1120403456(0x42c80000, float:100.0)
            float r5 = r0 / r1
            int r0 = r14.getHeight()
            float r6 = (float) r0
            android.graphics.Paint r7 = r14.aLG
            r3 = 0
            r4 = 0
            r2 = r15
            r2.drawRect(r3, r4, r5, r6, r7)
            float r0 = r14.aLK
            r2 = 0
            int r3 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r3 <= 0) goto Lc9
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 >= 0) goto Lc9
            long r3 = android.os.SystemClock.elapsedRealtime()
            long r5 = r14.mStartTime
            long r3 = r3 - r5
            r5 = 2500(0x9c4, double:1.235E-320)
            long r3 = r3 % r5
            r5 = 1500(0x5dc, double:7.41E-321)
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 < 0) goto L53
            r5 = r2
            goto L58
        L53:
            float r5 = (float) r3
            r6 = 1153138688(0x44bb8000, float:1500.0)
            float r5 = r5 / r6
        L58:
            android.graphics.Matrix r6 = r14.mMatrix
            r6.reset()
            android.graphics.Matrix r6 = r14.mMatrix
            r7 = 1065353216(0x3f800000, float:1.0)
            r6.setScale(r7, r5)
            android.graphics.LinearGradient r6 = r14.aLO
            android.graphics.Matrix r8 = r14.mMatrix
            r6.setLocalMatrix(r8)
            android.graphics.Paint r6 = r14.aLH
            android.graphics.LinearGradient r8 = r14.aLO
            r6.setShader(r8)
            int r6 = r14.getWidth()
            float r6 = (float) r6
            float r8 = r14.aLK
            float r6 = r6 * r8
            float r6 = r6 / r1
            float r11 = r6 * r5
            r9 = 0
            r10 = 0
            int r6 = r14.getHeight()
            float r12 = (float) r6
            android.graphics.Paint r13 = r14.aLH
            r8 = r15
            r8.drawRect(r9, r10, r11, r12, r13)
            r8 = 500(0x1f4, double:2.47E-321)
            int r6 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r6 <= 0) goto L99
            if (r0 <= 0) goto L93
            goto L99
        L93:
            long r3 = r3 - r8
            float r0 = (float) r3
            r2 = 1148846080(0x447a0000, float:1000.0)
            float r2 = r0 / r2
        L99:
            int r0 = r14.getWidth()
            float r0 = (float) r0
            float r3 = r14.aLK
            float r0 = r0 * r3
            float r0 = r0 / r1
            float r11 = r0 * r2
            android.graphics.Matrix r0 = r14.mMatrix
            r0.reset()
            android.graphics.Matrix r0 = r14.mMatrix
            r0.setScale(r7, r5)
            android.graphics.LinearGradient r0 = r14.aLO
            android.graphics.Matrix r1 = r14.mMatrix
            r0.setLocalMatrix(r1)
            android.graphics.Paint r0 = r14.aLH
            android.graphics.LinearGradient r1 = r14.aLO
            r0.setShader(r1)
            r9 = 0
            r10 = 0
            int r0 = r14.getHeight()
            float r12 = (float) r0
            android.graphics.Paint r13 = r14.aLH
            r8 = r15
            r8.drawRect(r9, r10, r11, r12, r13)
        Lc9:
            java.lang.String r0 = r14.aLJ
            if (r0 == 0) goto Lfa
            android.graphics.Paint r1 = r14.aLI
            r2 = 0
            int r3 = r0.length()
            android.graphics.Rect r4 = r14.aLL
            r1.getTextBounds(r0, r2, r3, r4)
            android.graphics.Rect r0 = r14.aLL
            int r0 = r0.top
            android.graphics.Rect r1 = r14.aLL
            int r1 = r1.bottom
            int r0 = r0 + r1
            float r0 = (float) r0
            r1 = 1073741824(0x40000000, float:2.0)
            float r0 = r0 / r1
            java.lang.String r2 = r14.aLJ
            int r3 = r14.getWidth()
            float r3 = (float) r3
            float r3 = r3 / r1
            int r4 = r14.getHeight()
            float r4 = (float) r4
            float r4 = r4 / r1
            float r4 = r4 - r0
            android.graphics.Paint r0 = r14.aLI
            r15.drawText(r2, r3, r4, r0)
        Lfa:
            return
    }

    @Override
    protected void onSizeChanged(int r20, int r21, int r22, int r23) {
            r19 = this;
            r0 = r19
            super.onSizeChanged(r20, r21, r22, r23)
            android.graphics.LinearGradient r9 = new android.graphics.LinearGradient
            int r1 = r19.getMeasuredWidth()
            float r4 = (float) r1
            r10 = 2
            int[] r6 = new int[r10]
            r6 = {x008a: FILL_ARRAY_DATA , data: [1291525714, 1291569420} // fill-array
            float[] r7 = new float[r10]
            r7 = {x0092: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.graphics.Shader$TileMode r8 = android.graphics.Shader.TileMode.CLAMP
            r2 = 0
            r3 = 0
            r5 = 0
            r1 = r9
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            r0.aLM = r9
            android.graphics.LinearGradient r1 = new android.graphics.LinearGradient
            int r2 = r19.getMeasuredWidth()
            float r14 = (float) r2
            int[] r2 = new int[r10]
            r2 = {x009a: FILL_ARRAY_DATA , data: [-319918, -276212} // fill-array
            float[] r3 = new float[r10]
            r3 = {x00a2: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.graphics.Shader$TileMode r18 = android.graphics.Shader.TileMode.CLAMP
            r12 = 0
            r13 = 0
            r15 = 0
            r11 = r1
            r16 = r2
            r17 = r3
            r11.<init>(r12, r13, r14, r15, r16, r17, r18)
            r0.aLN = r1
            android.graphics.Paint r1 = r0.aLG
            android.graphics.LinearGradient r2 = r0.aLM
            r1.setShader(r2)
            android.graphics.LinearGradient r1 = new android.graphics.LinearGradient
            int r2 = r19.getMeasuredWidth()
            float r14 = (float) r2
            int[] r2 = new int[r10]
            r2 = {x00aa: FILL_ARRAY_DATA , data: [16501004, -276212} // fill-array
            float[] r3 = new float[r10]
            r3 = {x00b2: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.graphics.Shader$TileMode r18 = android.graphics.Shader.TileMode.CLAMP
            r11 = r1
            r16 = r2
            r17 = r3
            r11.<init>(r12, r13, r14, r15, r16, r17, r18)
            r0.aLO = r1
            android.graphics.Paint r2 = r0.aLH
            r2.setShader(r1)
            android.graphics.RectF r1 = r0.mRectF
            r2 = r20
            float r2 = (float) r2
            r3 = r21
            float r3 = (float) r3
            r4 = 0
            r1.set(r4, r4, r2, r3)
            android.graphics.Path r1 = r0.mPath
            r1.reset()
            android.graphics.Path r1 = r0.mPath
            android.graphics.RectF r3 = r0.mRectF
            r4 = 1073741824(0x40000000, float:2.0)
            float r2 = r2 / r4
            android.graphics.Path$Direction r4 = android.graphics.Path.Direction.CW
            r1.addRoundRect(r3, r2, r2, r4)
            return
    }

    @Override
    protected void onVisibilityChanged(android.view.View r1, int r2) {
            r0 = this;
            super.onVisibilityChanged(r1, r2)
            return
    }

    @Override
    protected void onWindowVisibilityChanged(int r3) {
            r2 = this;
            super.onWindowVisibilityChanged(r3)
            if (r3 != 0) goto L1e
            float r3 = r2.aLK
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto L23
            r0 = 1120403456(0x42c80000, float:100.0)
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 >= 0) goto L23
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2.mStartTime = r0
            java.lang.Runnable r3 = r2.Dm
            r2.post(r3)
            return
        L1e:
            java.lang.Runnable r3 = r2.Dm
            r2.removeCallbacks(r3)
        L23:
            return
    }

    public void setProgress(float r5) {
            r4 = this;
            r4.aLK = r5
            r4.invalidate()
            r0 = 0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 == 0) goto L25
            r0 = 1120403456(0x42c80000, float:100.0)
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r5 != 0) goto L11
            goto L25
        L11:
            int r5 = r4.getWindowVisibility()
            if (r5 != 0) goto L24
            long r0 = r4.mStartTime
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 != 0) goto L24
            java.lang.Runnable r5 = r4.Dm
            r4.post(r5)
        L24:
            return
        L25:
            java.lang.Runnable r5 = r4.Dm
            r4.removeCallbacks(r5)
            return
    }

    public void setText(java.lang.String r1) {
            r0 = this;
            r0.aLJ = r1
            r0.invalidate()
            return
    }
}
