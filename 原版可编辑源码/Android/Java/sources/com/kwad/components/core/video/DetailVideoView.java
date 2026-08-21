package com.kwad.components.core.video;

import android.animation.ValueAnimator;
import android.content.Context;
import android.graphics.Matrix;
import android.graphics.RectF;
import android.graphics.SurfaceTexture;
import android.os.Build;
import android.support.v4.view.animation.PathInterpolatorCompat;
import android.util.AttributeSet;
import android.view.Surface;
import android.view.TextureView;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.Interpolator;
import android.widget.FrameLayout;
import com.kwad.components.core.video.VideoAdapters;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.response.model.PhotoInfo;
import com.kwad.sdk.widget.KSFrameLayout;

public class DetailVideoView extends KSFrameLayout implements View.OnClickListener {
    private final d SA;
    public com.kwad.components.core.page.widget.b Sr;
    private b Ss;
    private SurfaceTexture St;
    public Surface Su;
    private a Sv;
    private PhotoInfo.VideoInfo Sw;
    private final RectF Sx;
    private int Sy;
    private int Sz;
    private Matrix mMatrix;

    public interface a {
        void onClickRootView();

        void onClickVideoView();
    }

    public DetailVideoView(Context context) {
        super(context);
        this.Sx = new RectF();
        this.Sy = 0;
        this.Sz = 0;
        this.SA = new d();
        D(context);
    }

    public DetailVideoView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.Sx = new RectF();
        this.Sy = 0;
        this.Sz = 0;
        this.SA = new d();
        D(context);
    }

    private void D(Context context) {
        this.mMatrix = new Matrix();
        this.Sr = new com.kwad.components.core.page.widget.b(context);
        addView(this.Sr, 0, new FrameLayout.LayoutParams(-1, -1, 17));
        qJ();
    }

    private void a(View view, long j, long j2) {
        View view2;
        if (view == null || j == 0 || j2 == 0 || (view2 = (View) view.getParent()) == null) {
            return;
        }
        int width = view2.getWidth();
        int height = view2.getHeight();
        if (width == 0 || height == 0) {
            return;
        }
        view.getLayoutParams();
        float f = j / j2;
        float f2 = height * f;
        float f3 = width;
        if (f2 > f3) {
            height = (int) (f3 / f);
        } else {
            width = (int) f2;
        }
        if (width == 0 || height == 0) {
            height = -1;
            width = -1;
        }
        ViewGroup.LayoutParams layoutParams = view.getLayoutParams();
        layoutParams.width = width;
        layoutParams.height = height;
        this.Sr.setLayoutParams(layoutParams);
    }

    private void qJ() {
        this.Sr.setSurfaceTextureListener(new TextureView.SurfaceTextureListener() {
            @Override
            public final void onSurfaceTextureAvailable(SurfaceTexture surfaceTexture, int i, int i2) {
                if (DetailVideoView.this.St == surfaceTexture) {
                    return;
                }
                DetailVideoView.this.St = surfaceTexture;
                DetailVideoView.this.qK();
                DetailVideoView.this.Su = new Surface(surfaceTexture);
                if (DetailVideoView.this.Ss != null) {
                    DetailVideoView.this.Ss.setSurface(DetailVideoView.this.Su);
                }
            }

            @Override
            public final boolean onSurfaceTextureDestroyed(SurfaceTexture surfaceTexture) {
                return false;
            }

            @Override
            public final void onSurfaceTextureSizeChanged(SurfaceTexture surfaceTexture, int i, int i2) {
            }

            @Override
            public final void onSurfaceTextureUpdated(SurfaceTexture surfaceTexture) {
            }
        });
    }

    private void qK() {
        Surface surface = this.Su;
        if (surface != null) {
            try {
                surface.release();
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTrace(th);
            }
            this.Su = null;
        }
    }

    public final ValueAnimator a(AdTemplate adTemplate, int i, final ValueAnimator.AnimatorUpdateListener animatorUpdateListener) {
        float height = getHeight();
        final float width = height / getWidth();
        final boolean zO = com.kwad.sdk.core.response.b.a.O(com.kwad.sdk.core.response.b.d.cg(adTemplate));
        final ViewGroup.LayoutParams layoutParams = getLayoutParams();
        ValueAnimator valueAnimatorOfInt = ValueAnimator.ofInt((int) height, i);
        valueAnimatorOfInt.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
            @Override
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                int iIntValue = ((Integer) valueAnimator.getAnimatedValue()).intValue();
                if (zO) {
                    int i2 = (int) (iIntValue / width);
                    ViewGroup.LayoutParams layoutParams2 = layoutParams;
                    if (layoutParams2 != null) {
                        layoutParams2.height = iIntValue;
                        layoutParams.width = i2;
                        DetailVideoView.this.setLayoutParams(layoutParams);
                    }
                    DetailVideoView.this.adaptVideoSize(i2, iIntValue);
                } else {
                    ViewGroup.LayoutParams layoutParams3 = layoutParams;
                    if (layoutParams3 != null) {
                        layoutParams3.height = iIntValue;
                        layoutParams.width = -1;
                        DetailVideoView.this.setLayoutParams(layoutParams);
                    }
                }
                ValueAnimator.AnimatorUpdateListener animatorUpdateListener2 = animatorUpdateListener;
                if (animatorUpdateListener2 != null) {
                    animatorUpdateListener2.onAnimationUpdate(valueAnimator);
                }
            }
        });
        Interpolator interpolatorCreate = PathInterpolatorCompat.create(0.0f, 0.0f, 0.58f, 1.0f);
        valueAnimatorOfInt.setDuration(500L);
        valueAnimatorOfInt.setInterpolator(interpolatorCreate);
        return valueAnimatorOfInt;
    }

    public final void adaptVideoSize(int i, int i2) {
        if (this.Sr == null) {
            com.kwad.sdk.core.e.c.w("DetailVideoView", "adaptVideoSize mTextureView is null");
            return;
        }
        this.Sz = i2;
        this.Sy = i;
        if (this.SA.qL()) {
            int iQM = this.SA.qM();
            VideoAdapters.a cVar = null;
            if (iQM == 1) {
                cVar = new VideoAdapters.c();
            } else if (iQM == 2) {
                cVar = new VideoAdapters.b();
            }
            if (cVar != null) {
                com.kwad.components.core.page.widget.b bVar = this.Sr;
                cVar.a(bVar, (View) bVar.getParent(), i, i2);
                return;
            }
            return;
        }
        if (this.SA.qR()) {
            com.kwad.sdk.d.a.a.C(this.Sr);
            return;
        }
        if (this.SA.qN()) {
            com.kwad.sdk.d.a.a.e(this.Sr, i, i2);
            return;
        }
        if (this.SA.qP()) {
            com.kwad.sdk.d.a.a.f(this.Sr, i, i2);
            return;
        }
        if (this.SA.qO()) {
            com.kwad.sdk.d.a.a.d(this.Sr, i, i2);
            return;
        }
        if (this.SA.qQ()) {
            a(this.Sr, i, i2);
            return;
        }
        View view = (View) this.Sr.getParent();
        if (view == null) {
            return;
        }
        int width = view.getWidth();
        int height = view.getHeight();
        if (width == 0 || height == 0) {
            return;
        }
        PhotoInfo.VideoInfo videoInfo = this.Sw;
        if (videoInfo == null || !com.kwad.sdk.core.response.b.f.a(this.mMatrix, width, height, videoInfo)) {
            ViewGroup.LayoutParams layoutParams = this.Sr.getLayoutParams();
            layoutParams.width = width;
            layoutParams.height = (int) ((i2 / (i * 1.0f)) * width);
            this.mMatrix.reset();
            this.Sr.setTransform(this.mMatrix);
            this.Sr.setLayoutParams(layoutParams);
        } else {
            ViewGroup.LayoutParams layoutParams2 = this.Sr.getLayoutParams();
            layoutParams2.width = -1;
            layoutParams2.height = -1;
            this.Sr.setTransform(this.mMatrix);
            this.Sr.setLayoutParams(layoutParams2);
        }
        this.Sx.set(this.Sr.getLeft(), this.Sr.getTop(), this.Sr.getRight(), this.Sr.getBottom());
    }

    public final void f(boolean z, int i) {
        this.SA.setAd(true);
        this.SA.aL(i);
    }

    @Deprecated
    public final void fixWidth(boolean z) {
        this.SA.aL(z);
    }

    public int getTextureViewGravity() {
        com.kwad.components.core.page.widget.b bVar = this.Sr;
        if (bVar == null) {
            return 17;
        }
        ViewGroup.LayoutParams layoutParams = bVar.getLayoutParams();
        if (layoutParams instanceof FrameLayout.LayoutParams) {
            return ((FrameLayout.LayoutParams) layoutParams).gravity;
        }
        return 17;
    }

    @Override
    public void onClick(View view) {
        if (view == this.Sr) {
            a aVar = this.Sv;
            if (aVar != null) {
                aVar.onClickVideoView();
                return;
            }
            return;
        }
        a aVar2 = this.Sv;
        if (aVar2 != null) {
            aVar2.onClickRootView();
        }
    }

    @Override
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        qK();
        SurfaceTexture surfaceTexture = this.St;
        if (surfaceTexture != null) {
            surfaceTexture.release();
            this.St = null;
        }
    }

    @Override
    public void onSizeChanged(int i, int i2, int i3, int i4) {
        int i5;
        super.onSizeChanged(i, i2, i3, i4);
        int i6 = this.Sy;
        if (i6 <= 0 || (i5 = this.Sz) <= 0) {
            return;
        }
        adaptVideoSize(i6, i5);
    }

    @Deprecated
    public void setAd(boolean z) {
        this.SA.setAd(z);
    }

    public void setClickListener(a aVar) {
        this.Sv = aVar;
        setOnClickListener(this);
    }

    @Deprecated
    public void setFillXY(boolean z) {
        this.SA.setFillXY(z);
    }

    @Deprecated
    public void setForce(boolean z) {
        this.SA.setForce(z);
    }

    public void setHorizontalVideo(boolean z) {
        this.SA.setHorizontalVideo(z);
    }

    public void setMediaPlayer(b bVar) {
        this.Ss = bVar;
        Surface surface = this.Su;
        if (surface == null || bVar == null) {
            return;
        }
        bVar.setSurface(surface);
    }

    @Override
    public void setRadius(float f) {
        if (Build.VERSION.SDK_INT >= 21) {
            com.kwad.components.core.widget.h.b(this, f);
        }
    }

    public void setVideoInfo(PhotoInfo.VideoInfo videoInfo) {
        this.Sw = videoInfo;
    }

    public final void updateTextureViewGravity(int i) {
        com.kwad.components.core.page.widget.b bVar = this.Sr;
        if (bVar == null) {
            return;
        }
        ViewGroup.LayoutParams layoutParams = bVar.getLayoutParams();
        if (layoutParams instanceof FrameLayout.LayoutParams) {
            ((FrameLayout.LayoutParams) layoutParams).gravity = i;
            this.Sr.requestLayout();
        }
    }
}
