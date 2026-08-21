package com.sigmob.sdk.nativead;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.graphics.Bitmap;
import android.os.Build;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.common.utils.ImageManager;
import com.czhj.sdk.common.utils.ImageUtils;
import com.czhj.sdk.common.utils.ViewUtil;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.windad.WindAdError;
import java.io.File;
import java.util.LinkedList;

public class n extends o implements h, com.sigmob.sdk.videoplayer.c {
    public static LinkedList<ViewGroup> e = new LinkedList<>();
    public static long f = 0;
    private com.sigmob.sdk.videoplayer.g h;
    private k i;
    private p j;
    private Bitmap k;
    private Bitmap l;
    private ViewGroup m;
    private long n;

    static class 1 {
        static final int[] a;

        static {
            int[] iArr = new int[f.values().length];
            a = iArr;
            try {
                iArr[f.a.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                a[f.b.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                a[f.c.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
        }
    }

    public n(Context context) {
        super(context);
        this.k = null;
        this.l = null;
        this.m = null;
        getVideoAdView().setVideoAdViewListener(this);
        this.m = new RelativeLayout(getContext());
        getVideoAdView().setVideoAdStatusListener(this);
        com.sigmob.sdk.base.blurkit.a.a(getContext());
    }

    private void a(Activity activity) {
        activity.getWindow().getDecorView().setSystemUiVisibility(Build.VERSION.SDK_INT >= 21 ? 5894 : 4);
    }

    private void a(ViewGroup viewGroup) {
        j jVar = null;
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            View childAt = viewGroup.getChildAt(i);
            if (childAt instanceof j) {
                jVar = (j) childAt;
            }
        }
        if (jVar != null) {
            ViewUtil.removeFromParent(jVar);
        }
    }

    private void b(Activity activity) {
        int iAsIntPixels = Dips.asIntPixels(10.0f, getContext());
        int iAsIntPixels2 = Dips.asIntPixels(15.0f, getContext());
        int iA = com.sigmob.sdk.videoplayer.d.a(activity);
        if (getVideoAdView().getVideoHeight() < getVideoAdView().getVideoWidth()) {
            activity.setRequestedOrientation(0);
            iAsIntPixels += iA;
        } else {
            iAsIntPixels2 += iA;
        }
        RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) getVideoAdView().getBottomLayoutView().getLayoutParams();
        if (layoutParams != null) {
            layoutParams.setMargins(Dips.asIntPixels(10.0f, getContext()), 0, iAsIntPixels, iAsIntPixels2);
            getVideoAdView().getBottomLayoutView().setLayoutParams(layoutParams);
        }
        RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) getVideoAdView().getTopLayoutView().getLayoutParams();
        if (layoutParams2 != null) {
            layoutParams2.setMargins(Dips.asIntPixels(10.0f, getContext()), Dips.asIntPixels(35.0f, getContext()), iAsIntPixels, 0);
            getVideoAdView().getTopLayoutView().setLayoutParams(layoutParams2);
        }
    }

    private void k() {
        RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) getVideoAdView().getBottomLayoutView().getLayoutParams();
        if (layoutParams != null) {
            layoutParams.setMargins(Dips.asIntPixels(10.0f, getContext()), Dips.asIntPixels(0.0f, getContext()), Dips.asIntPixels(10.0f, getContext()), Dips.asIntPixels(15.0f, getContext()));
            getVideoAdView().getBottomLayoutView().setLayoutParams(layoutParams);
        }
        RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) getVideoAdView().getTopLayoutView().getLayoutParams();
        if (layoutParams2 != null) {
            layoutParams2.setMargins(Dips.asIntPixels(10.0f, getContext()), Dips.asIntPixels(15.0f, getContext()), Dips.asIntPixels(10.0f, getContext()), 0);
            getVideoAdView().getTopLayoutView().setLayoutParams(layoutParams2);
        }
    }

    private void l() {
        if (this.i != null) {
            ViewGroup appContainer = getVideoAdView().getAppContainer();
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
            layoutParams.addRule(13);
            appContainer.addView(this.i, layoutParams);
        }
    }

    private void m() {
        Bitmap textureBitmap;
        if (getVideoAdView() == null || (textureBitmap = getVideoAdView().getTextureBitmap()) == null) {
            return;
        }
        Bitmap bitmapA = com.sigmob.sdk.base.blurkit.a.a().a(textureBitmap, 25);
        getVideoAdView().getBlurImageView().setImageBitmap(bitmapA);
        getVideoAdView().getAppContainer().setVisibility(0);
        this.k = textureBitmap;
        this.l = bitmapA;
    }

    private void n() {
        j appInfoView = getAppInfoView();
        if (appInfoView != null) {
            ViewUtil.removeFromParent(appInfoView);
            RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -2);
            layoutParams.setMargins(0, 0, 0, Dips.asIntPixels(5.0f, getContext()));
            layoutParams.addRule(12);
            addView(appInfoView, layoutParams);
        }
    }

    public int a(int i) {
        double adPercent = getVideoAdView().getVideoWidth() == 0 ? getAdUnit().getAdPercent() : (getVideoAdView().getVideoWidth() * 1.0f) / getVideoAdView().getVideoHeight();
        int i2 = ClientMetadata.getInstance().getDisplayMetrics().heightPixels / 2;
        int i3 = (int) (((double) i) / adPercent);
        return i3 > i2 ? i2 : i3;
    }

    @Override
    public void a() {
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().a();
        }
    }

    @Override
    public void a(long j, long j2) {
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().a(j, j2);
        }
        if (j > 0) {
            this.n = j2;
        }
    }

    @Override
    public void a(x xVar) {
        super.a(xVar);
        BaseAdUnit adUnit = getAdUnit();
        if (adUnit != null) {
            a(this);
            File videoProxyFile = adUnit.getVideoProxyFile();
            if (videoProxyFile == null || !videoProxyFile.exists()) {
                getVideoAdView().setUp(adUnit.getProxyVideoUrl());
            } else {
                getVideoAdView().setUp(videoProxyFile.getAbsolutePath());
            }
            setUIStyle(f.a);
            if (TextUtils.isEmpty(adUnit.getVideoThumbUrl())) {
                getVideoAdView().b(true);
            } else {
                ImageManager.with(getContext()).load(adUnit.getVideoThumbUrl()).into(getVideoAdView().getThumbView());
            }
            getAppView().a(adUnit.getIconUrl(), adUnit.getTitle(), adUnit.getCTAText());
            getVideoAdView().setSoundChange(getAdConfig().n());
        }
    }

    @Override
    public boolean a(MotionEvent motionEvent) {
        k kVar = this.i;
        if (kVar == null || kVar.getParent() == null || this.i.getVisibility() != 0) {
            return false;
        }
        return ViewUtil.isPointInView(this.i.getCtaView(), motionEvent);
    }

    @Override
    public boolean b() {
        if (e.size() != 0 && getVideoAdView() != null) {
            getVideoAdView().u();
            return true;
        }
        if (e.size() != 0 || getVideoAdView() == null || getVideoAdView().x == 0) {
            return false;
        }
        getVideoAdView().m();
        return true;
    }

    @Override
    public void c() {
        super.c();
        ImageUtils.recycleBitmap(this.k);
        ImageUtils.recycleBitmap(this.l);
        p sigVideoAdController = getSigVideoAdController();
        if (sigVideoAdController != null) {
            sigVideoAdController.i();
        }
        com.sigmob.sdk.videoplayer.g gVar = this.h;
        if (gVar != null) {
            gVar.setVideoAdViewListener(null);
            this.h.setVideoAdStatusListener(null);
            this.h.setBackClickListener(null);
            this.h.a();
            this.h = null;
        }
    }

    @Override
    public void d() {
        super.d();
        if (getVideoAdView() != null) {
            getVideoAdView().E();
        }
    }

    @Override
    public void e() {
        super.e();
        if (getVideoAdView() != null) {
            getVideoAdView().C();
        }
    }

    @Override
    public void f() {
        ViewGroup viewGroup = (ViewGroup) this.m.getParent();
        if (viewGroup != null) {
            viewGroup.removeView(this.m);
        }
        Activity activityB = com.sigmob.sdk.videoplayer.d.b(e.getLast().getContext());
        if (activityB != null) {
            activityB.getWindow().getDecorView().setSystemUiVisibility(0);
        }
        if (getVideoAdView().getVideoHeight() < getVideoAdView().getVideoWidth() && activityB != null) {
            activityB.setRequestedOrientation(1);
        }
        e.getLast().removeAllViews();
        e.getLast().addView(this.m, new FrameLayout.LayoutParams(-1, -1));
        e.pop();
    }

    @Override
    public void g() {
        ViewGroup viewGroup = (ViewGroup) this.m.getParent();
        viewGroup.removeView(this.m);
        e.add(viewGroup);
        Activity activityB = com.sigmob.sdk.videoplayer.d.b(viewGroup.getContext());
        if (activityB != null) {
            ((ViewGroup) activityB.findViewById(R.id.content)).addView(this.m, new FrameLayout.LayoutParams(-1, -1));
            if (getVideoAdView().getVideoHeight() < getVideoAdView().getVideoWidth()) {
                activityB.setRequestedOrientation(6);
            }
        }
    }

    public k getAppView() {
        if (this.i == null) {
            this.i = new k(getContext());
        }
        return this.i;
    }

    public h getSigAdVideoStatusListener() {
        p pVar = this.j;
        if (pVar != null) {
            return pVar.g();
        }
        return null;
    }

    @Override
    public p getSigVideoAdController() {
        if (this.j == null) {
            this.j = new q(getVideoAdView());
        }
        return this.j;
    }

    public com.sigmob.sdk.videoplayer.g getVideoAdView() {
        if (this.h == null) {
            this.h = new com.sigmob.sdk.videoplayer.g(getContext());
        }
        return this.h;
    }

    public ViewGroup getVideoContainer() {
        return this.m;
    }

    @Override
    public double getVideoDuration() {
        return getVideoAdView() != null ? getVideoAdView().getDuration() / 1000.0f : super.getVideoDuration();
    }

    @Override
    public double getVideoProgress() {
        return getVideoAdView() != null ? ((getVideoAdView().getCurrentPositionWhenPlaying() * 1.0f) / getVideoAdView().getDuration()) / 100.0f : super.getVideoProgress();
    }

    public int getVideoSurferViewHeight() {
        if (getVideoAdView() != null) {
            return getVideoAdView().getVideoSurferViewHeight();
        }
        return 0;
    }

    public void h() {
        if (System.currentTimeMillis() - f > 2000 && getVideoAdView().w == 4 && getVideoAdView().x == 1) {
            f = System.currentTimeMillis();
            b();
        }
    }

    @Override
    public void i() {
        super.i();
    }

    @Override
    public void j() {
        super.j();
        if (getVideoAdView() != null) {
            getVideoAdView().D();
        }
    }

    @Override
    public void onVideoCompleted() {
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().onVideoCompleted();
        }
        m();
        if (this.d != f.a) {
            if (this.d == f.b) {
                setUIStyle(f.c);
            }
        } else {
            if (getAppView().getParent() == null) {
                l();
            }
            getAppView().setVisibility(0);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.b, true);
        }
    }

    @Override
    public void onVideoError(WindAdError windAdError) {
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().onVideoError(windAdError);
        }
    }

    @Override
    public void onVideoLoad() {
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().onVideoLoad();
        }
    }

    @Override
    public void onVideoPause() {
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().onVideoPause();
        }
    }

    @Override
    public void onVideoResume() {
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().onVideoResume();
        }
    }

    @Override
    public void onVideoStart() {
        if (getAdUnit() == null) {
            return;
        }
        k kVar = this.i;
        if (kVar != null) {
            ViewUtil.removeFromParent(kVar);
            getVideoAdView().getAppContainer().setVisibility(4);
        }
        ImageUtils.recycleBitmap(this.k);
        ImageUtils.recycleBitmap(this.l);
        BaseAdUnit adUnit = getAdUnit();
        if (adUnit != null) {
            adUnit.updateRealAdPercent((getVideoAdView().getVideoWidth() * 1.0f) / getVideoAdView().getVideoHeight());
        }
        setUIStyle(this.d == f.c ? f.b : this.d);
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().onVideoStart();
        }
    }

    public void setBackClickListener(View.OnClickListener onClickListener) {
        if (getVideoAdView() != null) {
            getVideoAdView().setBackClickListener(onClickListener);
        }
    }

    @Override
    public void setUIStyle(f fVar) {
        if (getAdUnit() == null) {
            return;
        }
        super.setUIStyle(fVar);
        int i = 1.a[fVar.ordinal()];
        if (i == 1) {
            this.m.removeAllViews();
            ViewUtil.removeFromParent(this.m);
            ViewUtil.removeFromParent(getVideoAdView());
            addView(getVideoAdView(), new RelativeLayout.LayoutParams(-1, -1));
            if (getVideoAdView().w == 0) {
                getVideoAdView().a(com.sigmob.sdk.videoplayer.f.a, true);
            } else {
                getVideoAdView().a(com.sigmob.sdk.videoplayer.f.a, false);
            }
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.c, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.d, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.e, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.b, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.f, false);
            getVideoAdView().setSoundChange(getAdConfig().n());
            if (this.i != null && (getVideoAdView().w == 6 || getVideoAdView().w == 7)) {
                if (this.i.getParent() == null) {
                    l();
                }
                this.i.setVisibility(0);
                getVideoAdView().a(com.sigmob.sdk.videoplayer.f.b, true);
            }
            n();
            return;
        }
        if (i == 2) {
            if (this.i.getParent() != null) {
                this.i.setVisibility(4);
            }
            if (this.m.getChildCount() > 0) {
                this.m.removeAllViews();
            }
            removeView(getVideoAdView());
            this.m.addView(getVideoAdView(), new RelativeLayout.LayoutParams(-1, -1));
            getVideoAdView().setSoundChange(getAdConfig().o() || com.sigmob.sdk.b.c());
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.a, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.c, true);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.d, true);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.e, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.b, false);
        } else {
            if (i != 3) {
                return;
            }
            if (this.i.getParent() != null) {
                this.i.setVisibility(4);
            }
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.a, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.c, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.d, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.b, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.e, true);
        }
        getVideoAdView().a(com.sigmob.sdk.videoplayer.f.f, true);
    }
}
