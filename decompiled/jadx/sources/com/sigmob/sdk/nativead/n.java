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

/* JADX INFO: loaded from: classes3.dex */
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

    /* JADX INFO: renamed from: com.sigmob.sdk.nativead.n$1, reason: invalid class name */
    static /* synthetic */ class AnonymousClass1 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static final /* synthetic */ int[] f5114a;

        static {
            int[] iArr = new int[f.values().length];
            f5114a = iArr;
            try {
                iArr[f.PREVIEW.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                f5114a[f.DETAIL_PAGE.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                f5114a[f.DETAIL_PAGE_END.ordinal()] = 3;
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

    @Override // com.sigmob.sdk.nativead.h
    public void a() {
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().a();
        }
    }

    @Override // com.sigmob.sdk.nativead.h
    public void a(long j, long j2) {
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().a(j, j2);
        }
        if (j > 0) {
            this.n = j2;
        }
    }

    @Override // com.sigmob.sdk.nativead.o
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
            setUIStyle(f.PREVIEW);
            if (TextUtils.isEmpty(adUnit.getVideoThumbUrl())) {
                getVideoAdView().b(true);
            } else {
                ImageManager.with(getContext()).load(adUnit.getVideoThumbUrl()).into(getVideoAdView().getThumbView());
            }
            getAppView().a(adUnit.getIconUrl(), adUnit.getTitle(), adUnit.getCTAText());
            getVideoAdView().setSoundChange(getAdConfig().n());
        }
    }

    @Override // com.sigmob.sdk.nativead.i
    public boolean a(MotionEvent motionEvent) {
        k kVar = this.i;
        if (kVar == null || kVar.getParent() == null || this.i.getVisibility() != 0) {
            return false;
        }
        return ViewUtil.isPointInView(this.i.getCtaView(), motionEvent);
    }

    @Override // com.sigmob.sdk.nativead.i, com.sigmob.sdk.videoplayer.c
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

    @Override // com.sigmob.sdk.nativead.o, com.sigmob.sdk.nativead.i
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

    @Override // com.sigmob.sdk.nativead.i
    public void d() {
        super.d();
        if (getVideoAdView() != null) {
            getVideoAdView().E();
        }
    }

    @Override // com.sigmob.sdk.nativead.o
    public void e() {
        super.e();
        if (getVideoAdView() != null) {
            getVideoAdView().C();
        }
    }

    @Override // com.sigmob.sdk.videoplayer.c
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

    @Override // com.sigmob.sdk.videoplayer.c
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

    @Override // com.sigmob.sdk.nativead.i
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

    @Override // com.sigmob.sdk.nativead.o
    public double getVideoDuration() {
        return getVideoAdView() != null ? getVideoAdView().getDuration() / 1000.0f : super.getVideoDuration();
    }

    @Override // com.sigmob.sdk.nativead.o
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

    @Override // com.sigmob.sdk.nativead.o
    public void i() {
        super.i();
    }

    @Override // com.sigmob.sdk.nativead.o
    public void j() {
        super.j();
        if (getVideoAdView() != null) {
            getVideoAdView().D();
        }
    }

    @Override // com.sigmob.windad.natives.WindNativeAdData.NativeADMediaListener
    public void onVideoCompleted() {
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().onVideoCompleted();
        }
        m();
        if (this.d != f.PREVIEW) {
            if (this.d == f.DETAIL_PAGE) {
                setUIStyle(f.DETAIL_PAGE_END);
            }
        } else {
            if (getAppView().getParent() == null) {
                l();
            }
            getAppView().setVisibility(0);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.RETRY, true);
        }
    }

    @Override // com.sigmob.windad.natives.WindNativeAdData.NativeADMediaListener
    public void onVideoError(WindAdError windAdError) {
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().onVideoError(windAdError);
        }
    }

    @Override // com.sigmob.windad.natives.WindNativeAdData.NativeADMediaListener
    public void onVideoLoad() {
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().onVideoLoad();
        }
    }

    @Override // com.sigmob.windad.natives.WindNativeAdData.NativeADMediaListener
    public void onVideoPause() {
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().onVideoPause();
        }
    }

    @Override // com.sigmob.windad.natives.WindNativeAdData.NativeADMediaListener
    public void onVideoResume() {
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().onVideoResume();
        }
    }

    @Override // com.sigmob.windad.natives.WindNativeAdData.NativeADMediaListener
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
        setUIStyle(this.d == f.DETAIL_PAGE_END ? f.DETAIL_PAGE : this.d);
        if (getSigAdVideoStatusListener() != null) {
            getSigAdVideoStatusListener().onVideoStart();
        }
    }

    public void setBackClickListener(View.OnClickListener onClickListener) {
        if (getVideoAdView() != null) {
            getVideoAdView().setBackClickListener(onClickListener);
        }
    }

    @Override // com.sigmob.sdk.nativead.o
    public void setUIStyle(f fVar) {
        if (getAdUnit() == null) {
            return;
        }
        super.setUIStyle(fVar);
        int i = AnonymousClass1.f5114a[fVar.ordinal()];
        if (i == 1) {
            this.m.removeAllViews();
            ViewUtil.removeFromParent(this.m);
            ViewUtil.removeFromParent(getVideoAdView());
            addView(getVideoAdView(), new RelativeLayout.LayoutParams(-1, -1));
            if (getVideoAdView().w == 0) {
                getVideoAdView().a(com.sigmob.sdk.videoplayer.f.START, true);
            } else {
                getVideoAdView().a(com.sigmob.sdk.videoplayer.f.START, false);
            }
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.FULLSCREEN, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.VOLUME, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.BIGRETRY, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.RETRY, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.BACK, false);
            getVideoAdView().setSoundChange(getAdConfig().n());
            if (this.i != null && (getVideoAdView().w == 6 || getVideoAdView().w == 7)) {
                if (this.i.getParent() == null) {
                    l();
                }
                this.i.setVisibility(0);
                getVideoAdView().a(com.sigmob.sdk.videoplayer.f.RETRY, true);
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
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.START, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.FULLSCREEN, true);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.VOLUME, true);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.BIGRETRY, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.RETRY, false);
        } else {
            if (i != 3) {
                return;
            }
            if (this.i.getParent() != null) {
                this.i.setVisibility(4);
            }
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.START, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.FULLSCREEN, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.VOLUME, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.RETRY, false);
            getVideoAdView().a(com.sigmob.sdk.videoplayer.f.BIGRETRY, true);
        }
        getVideoAdView().a(com.sigmob.sdk.videoplayer.f.BACK, true);
    }
}
