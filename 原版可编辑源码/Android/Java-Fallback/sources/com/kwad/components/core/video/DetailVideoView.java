package com.kwad.components.core.video;

public class DetailVideoView extends com.kwad.sdk.widget.KSFrameLayout implements android.view.View.OnClickListener {
    private final com.kwad.components.core.video.d SA;
    public com.kwad.components.core.page.widget.b Sr;
    private com.kwad.components.core.video.b Ss;
    private android.graphics.SurfaceTexture St;
    public android.view.Surface Su;
    private com.kwad.components.core.video.DetailVideoView.a Sv;
    private com.kwad.sdk.core.response.model.PhotoInfo.VideoInfo Sw;
    private final android.graphics.RectF Sx;
    private int Sy;
    private int Sz;
    private android.graphics.Matrix mMatrix;



    public interface a {
        void onClickRootView();

        void onClickVideoView();
    }

    public DetailVideoView(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.Sx = r0
            r0 = 0
            r1.Sy = r0
            r1.Sz = r0
            com.kwad.components.core.video.d r0 = new com.kwad.components.core.video.d
            r0.<init>()
            r1.SA = r0
            r1.D(r2)
            return
    }

    public DetailVideoView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            android.graphics.RectF r2 = new android.graphics.RectF
            r2.<init>()
            r0.Sx = r2
            r2 = 0
            r0.Sy = r2
            r0.Sz = r2
            com.kwad.components.core.video.d r2 = new com.kwad.components.core.video.d
            r2.<init>()
            r0.SA = r2
            r0.D(r1)
            return
    }

    private void D(android.content.Context r3) {
            r2 = this;
            android.graphics.Matrix r0 = new android.graphics.Matrix
            r0.<init>()
            r2.mMatrix = r0
            com.kwad.components.core.page.widget.b r0 = new com.kwad.components.core.page.widget.b
            r0.<init>(r3)
            r2.Sr = r0
            android.widget.FrameLayout$LayoutParams r3 = new android.widget.FrameLayout$LayoutParams
            r0 = -1
            r1 = 17
            r3.<init>(r0, r0, r1)
            com.kwad.components.core.page.widget.b r0 = r2.Sr
            r1 = 0
            r2.addView(r0, r1, r3)
            r2.qJ()
            return
    }

    static android.graphics.SurfaceTexture a(com.kwad.components.core.video.DetailVideoView r0, android.graphics.SurfaceTexture r1) {
            r0.St = r1
            return r1
    }

    private void a(android.view.View r4, long r5, long r7) {
            r3 = this;
            if (r4 == 0) goto L48
            r0 = 0
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 == 0) goto L48
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 != 0) goto Ld
            goto L48
        Ld:
            android.view.ViewParent r0 = r4.getParent()
            android.view.View r0 = (android.view.View) r0
            if (r0 != 0) goto L16
            return
        L16:
            int r1 = r0.getWidth()
            int r0 = r0.getHeight()
            if (r1 == 0) goto L48
            if (r0 != 0) goto L23
            goto L48
        L23:
            r4.getLayoutParams()
            float r5 = (float) r5
            float r6 = (float) r7
            float r5 = r5 / r6
            float r6 = (float) r0
            float r6 = r6 * r5
            float r7 = (float) r1
            int r8 = (r6 > r7 ? 1 : (r6 == r7 ? 0 : -1))
            if (r8 <= 0) goto L33
            float r7 = r7 / r5
            int r0 = (int) r7
            goto L34
        L33:
            int r1 = (int) r6
        L34:
            r5 = -1
            if (r1 == 0) goto L39
            if (r0 != 0) goto L3b
        L39:
            r0 = r5
            r1 = r0
        L3b:
            android.view.ViewGroup$LayoutParams r4 = r4.getLayoutParams()
            r4.width = r1
            r4.height = r0
            com.kwad.components.core.page.widget.b r5 = r3.Sr
            r5.setLayoutParams(r4)
        L48:
            return
    }

    static android.graphics.SurfaceTexture b(com.kwad.components.core.video.DetailVideoView r0) {
            android.graphics.SurfaceTexture r0 = r0.St
            return r0
    }

    static void c(com.kwad.components.core.video.DetailVideoView r0) {
            r0.qK()
            return
    }

    static com.kwad.components.core.video.b d(com.kwad.components.core.video.DetailVideoView r0) {
            com.kwad.components.core.video.b r0 = r0.Ss
            return r0
    }

    private void qJ() {
            r2 = this;
            com.kwad.components.core.page.widget.b r0 = r2.Sr
            com.kwad.components.core.video.DetailVideoView$1 r1 = new com.kwad.components.core.video.DetailVideoView$1
            r1.<init>(r2)
            r0.setSurfaceTextureListener(r1)
            return
    }

    private void qK() {
            r1 = this;
            android.view.Surface r0 = r1.Su
            if (r0 == 0) goto Lf
            r0.release()     // Catch: java.lang.Throwable -> L8
            goto Lc
        L8:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r0)
        Lc:
            r0 = 0
            r1.Su = r0
        Lf:
            return
    }

    public final android.animation.ValueAnimator a(com.kwad.sdk.core.response.model.AdTemplate r9, int r10, android.animation.ValueAnimator.AnimatorUpdateListener r11) {
            r8 = this;
            int r0 = r8.getHeight()
            float r0 = (float) r0
            int r1 = r8.getWidth()
            float r1 = (float) r1
            float r5 = r0 / r1
            com.kwad.sdk.core.response.model.AdInfo r9 = com.kwad.sdk.core.response.b.d.cg(r9)
            boolean r4 = com.kwad.sdk.core.response.b.a.O(r9)
            android.view.ViewGroup$LayoutParams r6 = r8.getLayoutParams()
            r9 = 2
            int[] r9 = new int[r9]
            int r0 = (int) r0
            r1 = 0
            r9[r1] = r0
            r0 = 1
            r9[r0] = r10
            android.animation.ValueAnimator r9 = android.animation.ValueAnimator.ofInt(r9)
            com.kwad.components.core.video.DetailVideoView$2 r10 = new com.kwad.components.core.video.DetailVideoView$2
            r2 = r10
            r3 = r8
            r7 = r11
            r2.<init>(r3, r4, r5, r6, r7)
            r9.addUpdateListener(r10)
            r10 = 0
            r11 = 1058306785(0x3f147ae1, float:0.58)
            r0 = 1065353216(0x3f800000, float:1.0)
            android.view.animation.Interpolator r10 = android.support.v4.view.animation.PathInterpolatorCompat.create(r10, r10, r11, r0)
            r0 = 500(0x1f4, double:2.47E-321)
            r9.setDuration(r0)
            r9.setInterpolator(r10)
            return r9
    }

    public final void adaptVideoSize(int r8, int r9) {
            r7 = this;
            com.kwad.components.core.page.widget.b r0 = r7.Sr
            if (r0 != 0) goto Lc
            java.lang.String r8 = "DetailVideoView"
            java.lang.String r9 = "adaptVideoSize mTextureView is null"
            com.kwad.sdk.core.e.c.w(r8, r9)
            return
        Lc:
            r7.Sz = r9
            r7.Sy = r8
            com.kwad.components.core.video.d r0 = r7.SA
            boolean r0 = r0.qL()
            if (r0 == 0) goto L3f
            com.kwad.components.core.video.d r0 = r7.SA
            int r0 = r0.qM()
            r1 = 0
            r2 = 1
            if (r0 == r2) goto L2c
            r2 = 2
            if (r0 == r2) goto L26
            goto L31
        L26:
            com.kwad.components.core.video.VideoAdapters$b r1 = new com.kwad.components.core.video.VideoAdapters$b
            r1.<init>()
            goto L31
        L2c:
            com.kwad.components.core.video.VideoAdapters$c r1 = new com.kwad.components.core.video.VideoAdapters$c
            r1.<init>()
        L31:
            if (r1 == 0) goto L3e
            com.kwad.components.core.page.widget.b r0 = r7.Sr
            android.view.ViewParent r2 = r0.getParent()
            android.view.View r2 = (android.view.View) r2
            r1.a(r0, r2, r8, r9)
        L3e:
            return
        L3f:
            com.kwad.components.core.video.d r0 = r7.SA
            boolean r0 = r0.qR()
            if (r0 == 0) goto L4d
            com.kwad.components.core.page.widget.b r8 = r7.Sr
            com.kwad.sdk.d.a.a.C(r8)
            return
        L4d:
            com.kwad.components.core.video.d r0 = r7.SA
            boolean r0 = r0.qN()
            if (r0 == 0) goto L5b
            com.kwad.components.core.page.widget.b r0 = r7.Sr
            com.kwad.sdk.d.a.a.e(r0, r8, r9)
            return
        L5b:
            com.kwad.components.core.video.d r0 = r7.SA
            boolean r0 = r0.qP()
            if (r0 == 0) goto L69
            com.kwad.components.core.page.widget.b r0 = r7.Sr
            com.kwad.sdk.d.a.a.f(r0, r8, r9)
            return
        L69:
            com.kwad.components.core.video.d r0 = r7.SA
            boolean r0 = r0.qO()
            if (r0 == 0) goto L77
            com.kwad.components.core.page.widget.b r0 = r7.Sr
            com.kwad.sdk.d.a.a.d(r0, r8, r9)
            return
        L77:
            com.kwad.components.core.video.d r0 = r7.SA
            boolean r0 = r0.qQ()
            if (r0 == 0) goto L88
            com.kwad.components.core.page.widget.b r2 = r7.Sr
            long r3 = (long) r8
            long r5 = (long) r9
            r1 = r7
            r1.a(r2, r3, r5)
            return
        L88:
            com.kwad.components.core.page.widget.b r0 = r7.Sr
            android.view.ViewParent r0 = r0.getParent()
            android.view.View r0 = (android.view.View) r0
            if (r0 != 0) goto L93
            return
        L93:
            int r1 = r0.getWidth()
            int r0 = r0.getHeight()
            if (r1 == 0) goto L109
            if (r0 != 0) goto La0
            goto L109
        La0:
            com.kwad.sdk.core.response.model.PhotoInfo$VideoInfo r2 = r7.Sw
            if (r2 == 0) goto Lc4
            android.graphics.Matrix r3 = r7.mMatrix
            boolean r0 = com.kwad.sdk.core.response.b.f.a(r3, r1, r0, r2)
            if (r0 == 0) goto Lc4
            com.kwad.components.core.page.widget.b r8 = r7.Sr
            android.view.ViewGroup$LayoutParams r8 = r8.getLayoutParams()
            r9 = -1
            r8.width = r9
            r8.height = r9
            com.kwad.components.core.page.widget.b r9 = r7.Sr
            android.graphics.Matrix r0 = r7.mMatrix
            r9.setTransform(r0)
            com.kwad.components.core.page.widget.b r9 = r7.Sr
            r9.setLayoutParams(r8)
            goto Le8
        Lc4:
            com.kwad.components.core.page.widget.b r0 = r7.Sr
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            r0.width = r1
            float r9 = (float) r9
            float r8 = (float) r8
            r2 = 1065353216(0x3f800000, float:1.0)
            float r8 = r8 * r2
            float r9 = r9 / r8
            float r8 = (float) r1
            float r9 = r9 * r8
            int r8 = (int) r9
            r0.height = r8
            android.graphics.Matrix r8 = r7.mMatrix
            r8.reset()
            com.kwad.components.core.page.widget.b r8 = r7.Sr
            android.graphics.Matrix r9 = r7.mMatrix
            r8.setTransform(r9)
            com.kwad.components.core.page.widget.b r8 = r7.Sr
            r8.setLayoutParams(r0)
        Le8:
            android.graphics.RectF r8 = r7.Sx
            com.kwad.components.core.page.widget.b r9 = r7.Sr
            int r9 = r9.getLeft()
            float r9 = (float) r9
            com.kwad.components.core.page.widget.b r0 = r7.Sr
            int r0 = r0.getTop()
            float r0 = (float) r0
            com.kwad.components.core.page.widget.b r1 = r7.Sr
            int r1 = r1.getRight()
            float r1 = (float) r1
            com.kwad.components.core.page.widget.b r2 = r7.Sr
            int r2 = r2.getBottom()
            float r2 = (float) r2
            r8.set(r9, r0, r1, r2)
        L109:
            return
    }

    public final void f(boolean r2, int r3) {
            r1 = this;
            com.kwad.components.core.video.d r2 = r1.SA
            r0 = 1
            r2.setAd(r0)
            com.kwad.components.core.video.d r2 = r1.SA
            r2.aL(r3)
            return
    }

    @java.lang.Deprecated
    public final void fixWidth(boolean r2) {
            r1 = this;
            com.kwad.components.core.video.d r0 = r1.SA
            r0.aL(r2)
            return
    }

    public int getTextureViewGravity() {
            r3 = this;
            com.kwad.components.core.page.widget.b r0 = r3.Sr
            r1 = 17
            if (r0 != 0) goto L7
            return r1
        L7:
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            boolean r2 = r0 instanceof android.widget.FrameLayout.LayoutParams
            if (r2 == 0) goto L14
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            int r0 = r0.gravity
            return r0
        L14:
            return r1
    }

    @Override
    public void onClick(android.view.View r2) {
            r1 = this;
            com.kwad.components.core.page.widget.b r0 = r1.Sr
            if (r2 != r0) goto Lc
            com.kwad.components.core.video.DetailVideoView$a r2 = r1.Sv
            if (r2 == 0) goto L13
            r2.onClickVideoView()
            return
        Lc:
            com.kwad.components.core.video.DetailVideoView$a r2 = r1.Sv
            if (r2 == 0) goto L13
            r2.onClickRootView()
        L13:
            return
    }

    @Override
    public void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            r1.qK()
            android.graphics.SurfaceTexture r0 = r1.St
            if (r0 == 0) goto L10
            r0.release()
            r0 = 0
            r1.St = r0
        L10:
            return
    }

    @Override
    public void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onSizeChanged(r1, r2, r3, r4)
            int r1 = r0.Sy
            if (r1 <= 0) goto Le
            int r2 = r0.Sz
            if (r2 <= 0) goto Le
            r0.adaptVideoSize(r1, r2)
        Le:
            return
    }

    @java.lang.Deprecated
    public void setAd(boolean r2) {
            r1 = this;
            com.kwad.components.core.video.d r0 = r1.SA
            r0.setAd(r2)
            return
    }

    public void setClickListener(com.kwad.components.core.video.DetailVideoView.a r1) {
            r0 = this;
            r0.Sv = r1
            r0.setOnClickListener(r0)
            return
    }

    @java.lang.Deprecated
    public void setFillXY(boolean r2) {
            r1 = this;
            com.kwad.components.core.video.d r0 = r1.SA
            r0.setFillXY(r2)
            return
    }

    @java.lang.Deprecated
    public void setForce(boolean r2) {
            r1 = this;
            com.kwad.components.core.video.d r0 = r1.SA
            r0.setForce(r2)
            return
    }

    public void setHorizontalVideo(boolean r2) {
            r1 = this;
            com.kwad.components.core.video.d r0 = r1.SA
            r0.setHorizontalVideo(r2)
            return
    }

    public void setMediaPlayer(com.kwad.components.core.video.b r2) {
            r1 = this;
            r1.Ss = r2
            android.view.Surface r0 = r1.Su
            if (r0 == 0) goto Lb
            if (r2 == 0) goto Lb
            r2.setSurface(r0)
        Lb:
            return
    }

    @Override
    public void setRadius(float r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L9
            com.kwad.components.core.widget.h.b(r2, r3)
        L9:
            return
    }

    public void setVideoInfo(com.kwad.sdk.core.response.model.PhotoInfo.VideoInfo r1) {
            r0 = this;
            r0.Sw = r1
            return
    }

    public final void updateTextureViewGravity(int r3) {
            r2 = this;
            com.kwad.components.core.page.widget.b r0 = r2.Sr
            if (r0 != 0) goto L5
            return
        L5:
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            boolean r1 = r0 instanceof android.widget.FrameLayout.LayoutParams
            if (r1 == 0) goto L16
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            r0.gravity = r3
            com.kwad.components.core.page.widget.b r3 = r2.Sr
            r3.requestLayout()
        L16:
            return
    }
}
