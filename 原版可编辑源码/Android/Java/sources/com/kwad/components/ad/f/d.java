package com.kwad.components.ad.f;

import android.app.Activity;
import android.content.Context;
import android.content.DialogInterface;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.Build;
import android.os.Vibrator;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.bykv.vk.openvk.TTVfConstant;
import com.kwad.components.ad.f.b;
import com.kwad.components.core.e.d.a;
import com.kwad.components.core.e.d.c;
import com.kwad.components.core.internal.api.KSAdVideoPlayConfigImpl;
import com.kwad.components.core.widget.a;
import com.kwad.components.core.widget.c;
import com.kwad.sdk.KsAdSDKImpl;
import com.kwad.sdk.R;
import com.kwad.sdk.api.KsAdVideoPlayConfig;
import com.kwad.sdk.api.KsAppDownloadListener;
import com.kwad.sdk.api.KsImage;
import com.kwad.sdk.api.KsNativeAd;
import com.kwad.sdk.api.core.AbstractKsNativeAd;
import com.kwad.sdk.api.model.AdExposureFailedReason;
import com.kwad.sdk.core.imageloader.KSImageLoader;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.report.j;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.m.l;
import com.kwad.sdk.utils.ac;
import com.kwad.sdk.utils.bi;
import com.kwad.sdk.utils.bj;
import com.kwai.adclient.kscommerciallogger.model.BusinessType;
import com.sigmob.sdk.base.mta.PointCategory;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.json.JSONObject;

public final class d extends AbstractKsNativeAd implements DialogInterface.OnDismissListener, DialogInterface.OnShowListener, com.kwad.components.core.internal.api.a {
    private Vibrator dP;
    private AdInfo mAdInfo;
    private AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;
    private bi mTimerHelper;
    private b.c mr;
    private boolean mv;
    private KsNativeAd.AdInteractionListener mw;
    private f mx;
    private e my;
    private KsNativeAd.VideoPlayListener mz;
    private boolean mA = false;
    private com.kwad.components.core.internal.api.c bP = new com.kwad.components.core.internal.api.c();
    private int mB = 0;
    private int mC = 0;
    private KsNativeAd.VideoPlayListener mD = new KsNativeAd.VideoPlayListener() {
        @Override
        public final void onVideoPlayComplete() {
            if (d.this.mz != null) {
                d.this.mz.onVideoPlayComplete();
            }
        }

        @Override
        public final void onVideoPlayError(int i, int i2) {
            if (d.this.mz != null) {
                d.this.mz.onVideoPlayError(i, i2);
            }
        }

        @Override
        public final void onVideoPlayPause() {
            if (d.this.mz != null) {
                try {
                    d.this.mz.onVideoPlayPause();
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                }
            }
        }

        @Override
        public final void onVideoPlayReady() {
            if (d.this.mz != null) {
                try {
                    d.this.mz.onVideoPlayReady();
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                }
            }
        }

        @Override
        public final void onVideoPlayResume() {
            if (d.this.mz != null) {
                try {
                    d.this.mz.onVideoPlayResume();
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                }
            }
        }

        @Override
        public final void onVideoPlayStart() {
            if (d.this.mz != null) {
                d.this.mz.onVideoPlayStart();
            }
        }
    };
    private a mE = new a() {
        @Override
        public final void eJ() {
            if (d.this.mw != null) {
                d.this.mw.onAdShow(d.this);
            }
        }

        @Override
        public final boolean handleDownloadDialog(DialogInterface.OnClickListener onClickListener) {
            if (d.this.mw == null) {
                return false;
            }
            try {
                return d.this.mw.handleDownloadDialog(onClickListener);
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                return false;
            }
        }

        @Override
        public final void l(View view) {
            if (d.this.mw != null) {
                d.this.mw.onAdClicked(new FrameLayout(l.dt(view.getContext())), d.this);
            }
        }

        @Override
        public final void onDownloadTipsDialogDismiss() {
            if (d.this.mw != null) {
                try {
                    d.this.mw.onDownloadTipsDialogDismiss();
                } catch (Throwable unused) {
                }
            }
        }

        @Override
        public final void onDownloadTipsDialogShow() {
            if (d.this.mw != null) {
                try {
                    d.this.mw.onDownloadTipsDialogShow();
                } catch (Throwable unused) {
                }
            }
        }
    };

    public interface a {
        void eJ();

        boolean handleDownloadDialog(DialogInterface.OnClickListener onClickListener);

        void l(View view);

        void onDownloadTipsDialogDismiss();

        void onDownloadTipsDialogShow();
    }

    public d(AdTemplate adTemplate) {
        this.mAdTemplate = adTemplate;
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(adTemplate);
        this.mAdInfo = adInfoCg;
        if (com.kwad.sdk.core.response.b.a.ax(adInfoCg)) {
            com.kwad.components.core.e.d.c cVar = new com.kwad.components.core.e.d.c(this.mAdTemplate);
            this.mApkDownloadHelper = cVar;
            cVar.setOnShowListener(this);
            this.mApkDownloadHelper.setOnDismissListener(this);
            this.mApkDownloadHelper.a(new c.a() {
                @Override
                public final boolean handleDownloadDialog(DialogInterface.OnClickListener onClickListener) {
                    return d.this.mE.handleDownloadDialog(onClickListener);
                }
            });
        }
        KSImageLoader.preloadImage(com.kwad.sdk.core.response.b.a.I(this.mAdInfo), this.mAdTemplate);
    }

    private Vibrator F(Context context) {
        if (this.dP == null) {
            this.dP = (Vibrator) context.getSystemService("vibrator");
        }
        return this.dP;
    }

    private View a(Context context, KSAdVideoPlayConfigImpl kSAdVideoPlayConfigImpl) {
        com.kwad.components.core.offline.api.a.a aVar = (com.kwad.components.core.offline.api.a.a) com.kwad.sdk.components.c.f(com.kwad.components.core.offline.api.a.a.class);
        if (aVar == null || !aVar.hasLiveCompoReady()) {
            return null;
        }
        if (this.my == null) {
            e eVar = new e(context);
            this.my = eVar;
            eVar.setInnerAdInteractionListener(this.mE);
            this.my.setVideoPlayListener(this.mD);
            this.my.a(context, this.mAdTemplate, this.mApkDownloadHelper, kSAdVideoPlayConfigImpl);
        }
        return this.my;
    }

    private void a(Activity activity, final View view, final ac.a aVar, int i, boolean z, final int i2) {
        Context context = activity;
        if (activity == null) {
            context = view.getContext();
        }
        a.a aVarAm = new a.a(l.wrapContextIfNeed(context)).P(this.mAdTemplate).b(this.mApkDownloadHelper).ap(i).am(true);
        e eVar = this.my;
        com.kwad.components.core.e.d.a.a(aVarAm.s((eVar == null || eVar.eF == null) ? 0L : this.my.eF.getPlayDuration()).at(z).a(new a.b() {
            @Override
            public final void onAdClicked() {
                com.kwad.sdk.core.report.a.a(d.this.mAdTemplate, new j().c(aVar).cg(i2), (JSONObject) null);
                d.this.mE.l(view);
            }
        }));
    }

    private void a(final Activity activity, final ViewGroup viewGroup, final int i, final View view, final boolean z) {
        final ac.a aVar = new ac.a();
        if (view == null) {
            return;
        }
        view.setOnTouchListener(new View.OnTouchListener() {
            private int[] mG = new int[2];

            @Override
            public final boolean onTouch(View view2, MotionEvent motionEvent) {
                int action = motionEvent.getAction();
                if (action == 0) {
                    aVar.x(viewGroup.getWidth(), viewGroup.getHeight());
                    viewGroup.getLocationOnScreen(this.mG);
                    aVar.f(Math.abs(motionEvent.getRawX() - this.mG[0]), Math.abs(motionEvent.getRawY() - this.mG[1]));
                } else if (action == 1) {
                    aVar.g(Math.abs(motionEvent.getRawX() - this.mG[0]), Math.abs(motionEvent.getRawY() - this.mG[1]));
                    if (d.this.b(aVar)) {
                        view.setPressed(false);
                        d.this.a(activity, view2, aVar, i, z, 153);
                    }
                }
                return false;
            }
        });
        view.setOnClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view2) {
                d.this.a(activity, view2, aVar, i, z, 0);
            }
        });
    }

    private void a(Activity activity, ViewGroup viewGroup, List<View> list) {
        Iterator<View> it = list.iterator();
        while (it.hasNext()) {
            a(activity, viewGroup, 0, it.next(), false);
        }
    }

    private void a(Activity activity, ViewGroup viewGroup, Map<View, Integer> map) {
        for (View view : map.keySet()) {
            if (map.get(view) != null) {
                a(activity, viewGroup, map.get(view).intValue(), view, true);
            }
        }
    }

    private void a(final ViewGroup viewGroup) {
        if (!this.mv) {
            this.mv = true;
            KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_NATIVE, "callShow").report();
        }
        if (!com.kwad.sdk.core.config.d.zJ() && com.kwad.sdk.core.config.d.zI() >= 0.0f) {
            c(viewGroup);
            com.kwad.components.core.widget.a aVar = new com.kwad.components.core.widget.a(viewGroup.getContext(), viewGroup);
            viewGroup.addView(aVar);
            aVar.setViewCallback(new a.a() {
                @Override
                public final void aa() {
                    com.kwad.components.ad.h.b.fa().a(d.this);
                }

                @Override
                public final void ab() {
                    if (d.this.mAdTemplate.mPvReported && d.this.mA) {
                        com.kwad.sdk.core.report.a.a(d.this.mAdTemplate, d.this.getTimerHelper().Kd(), (JSONObject) null);
                        d.this.mA = false;
                    }
                    d.this.getTimerHelper().Kd();
                    d.this.bP.i(d.this);
                    b.eD().a(d.this.mr);
                    com.kwad.components.ad.h.b.fa().b(d.this);
                }

                @Override
                public final void eH() {
                    if (d.this.mAdTemplate.mPvReported && d.this.mA) {
                        com.kwad.sdk.core.report.a.a(d.this.mAdTemplate, d.this.getTimerHelper().Kd(), (JSONObject) null);
                        d.this.mA = false;
                        b.eD().a(d.this.mr);
                    }
                }

                @Override
                public final void k(View view) {
                    if (!d.this.mAdTemplate.mPvReported) {
                        d.this.mE.eJ();
                        d.this.eG();
                        j jVar = new j();
                        jVar.t(viewGroup.getHeight(), viewGroup.getWidth());
                        if (com.kwad.sdk.core.response.b.a.cw(d.this.mAdInfo)) {
                            z.a aVar2 = new z.a();
                            aVar2.showLiveStyle = d.this.mC;
                            aVar2.showLiveStatus = d.this.mB;
                            jVar.a(aVar2);
                        }
                        com.kwad.components.core.t.b.qj().a(d.this.mAdTemplate, null, jVar);
                    }
                    if (!d.this.mA) {
                        d.this.j(view);
                        d.this.getTimerHelper().startTiming();
                        d.this.bP.h(d.this);
                    }
                    d.this.mA = true;
                }
            });
            aVar.sl();
            return;
        }
        com.kwad.components.core.widget.c cVarB = b(viewGroup);
        if (cVarB == null) {
            cVarB = new com.kwad.components.core.widget.c(viewGroup.getContext(), viewGroup);
            viewGroup.addView(cVarB);
        }
        cVarB.setViewCallback(new c.a() {
            @Override
            public final void eI() {
                if (!d.this.mAdTemplate.mPvReported) {
                    d.this.mE.eJ();
                }
                d.this.eG();
                j jVar = new j();
                jVar.t(viewGroup.getHeight(), viewGroup.getWidth());
                if (com.kwad.sdk.core.response.b.a.cw(d.this.mAdInfo)) {
                    z.a aVar2 = new z.a();
                    aVar2.showLiveStyle = d.this.mC;
                    aVar2.showLiveStatus = d.this.mB;
                    jVar.a(aVar2);
                }
                com.kwad.components.core.t.b.qj().a(d.this.mAdTemplate, null, jVar);
                KSLoggerReporter.ReportClient.CORE_CONVERT.buildMethodCheck(BusinessType.AD_NATIVE, "adShowSuccess").report();
            }
        });
        cVarB.setNeedCheckingShow(true);
    }

    private View b(Context context, KSAdVideoPlayConfigImpl kSAdVideoPlayConfigImpl) {
        if (TextUtils.isEmpty(getVideoUrl())) {
            com.kwad.sdk.core.e.c.w("KsNativeAdControl", "videoUrl is empty");
            return null;
        }
        if (this.mx == null) {
            f fVar = new f(context);
            this.mx = fVar;
            fVar.setInnerAdInteractionListener(this.mE);
            this.mx.setVideoPlayListener(this.mD);
            this.mx.a(this.mAdTemplate, this.mApkDownloadHelper, kSAdVideoPlayConfigImpl);
        }
        return this.mx;
    }

    private static com.kwad.components.core.widget.c b(ViewGroup viewGroup) {
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            View childAt = viewGroup.getChildAt(i);
            if (childAt instanceof com.kwad.components.core.widget.c) {
                return (com.kwad.components.core.widget.c) childAt;
            }
        }
        return null;
    }

    private boolean b(ac.a aVar) {
        return ((Math.abs(aVar.IJ() - aVar.IL()) > 20) || (Math.abs(aVar.IK() - aVar.IM()) > 20)) && com.kwad.sdk.core.response.b.c.bV(this.mAdTemplate);
    }

    private static void c(ViewGroup viewGroup) {
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            View childAt = viewGroup.getChildAt(i);
            if (childAt instanceof com.kwad.components.core.widget.a) {
                viewGroup.removeView(childAt);
            }
        }
    }

    @Override
    private com.kwad.components.core.internal.api.d getVideoCoverImage() {
        AdInfo.AdMaterialInfo.MaterialFeature materialFeatureAN = com.kwad.sdk.core.response.b.a.aN(this.mAdInfo);
        if (TextUtils.isEmpty(materialFeatureAN.coverUrl)) {
            return null;
        }
        return new com.kwad.components.core.internal.api.d(materialFeatureAN.width, materialFeatureAN.height, materialFeatureAN.coverUrl);
    }

    private void eG() {
        try {
            this.mB = this.mAdTemplate.mAdScene.nativeAdExtraData.showLiveStatus;
            this.mC = this.mAdTemplate.mAdScene.nativeAdExtraData.showLiveStyle;
        } catch (Throwable unused) {
        }
    }

    private void j(final View view) {
        if (com.kwad.sdk.core.response.b.a.aa(this.mAdInfo)) {
            float fAb = com.kwad.sdk.core.response.b.a.ab(this.mAdInfo);
            this.mr = new b.c() {
                @Override
                public final void f(final double d) {
                    if (d.this.mAdInfo.status == 3 || d.this.mAdInfo.status == 2) {
                        return;
                    }
                    com.kwad.components.core.e.d.a.a(new a.a(l.wrapContextIfNeed(view.getContext())).P(d.this.mAdTemplate).b(d.this.mApkDownloadHelper).at(false).a(new a.b() {
                        @Override
                        public final void onAdClicked() {
                            com.kwad.sdk.core.report.a.a(d.this.mAdTemplate, new j().cg(157).i(d), (JSONObject) null);
                            d.this.mE.l(view);
                        }
                    }));
                    bj.a(view.getContext(), d.this.F(view.getContext()));
                }
            };
            b.eD().a(fAb, view, this.mr);
        }
    }

    @Override
    public final void a(com.kwad.components.core.internal.api.b bVar) {
        this.bP.a(bVar);
    }

    @Override
    public final boolean ae() {
        return true;
    }

    @Override
    public final void b(com.kwad.components.core.internal.api.b bVar) {
        this.bP.b(bVar);
    }

    @Override
    public final String getActionDescription() {
        return com.kwad.sdk.core.response.b.a.aw(this.mAdInfo);
    }

    @Override
    public final String getAdDescription() {
        return com.kwad.sdk.core.response.b.a.an(this.mAdInfo);
    }

    @Override
    public final String getAdSource() {
        return com.kwad.sdk.core.response.b.a.av(this.mAdInfo);
    }

    @Override
    public final String getAdSourceLogoUrl(int i) {
        AdInfo adInfo = this.mAdInfo;
        if (adInfo == null) {
            return null;
        }
        return i != 1 ? adInfo.adBaseInfo.adMarkIcon : adInfo.adBaseInfo.adGrayMarkIcon;
    }

    @Override
    public final AdTemplate getAdTemplate() {
        return this.mAdTemplate;
    }

    @Override
    public final String getAppDownloadCountDes() {
        return com.kwad.sdk.core.response.b.a.ar(this.mAdInfo);
    }

    @Override
    public final String getAppIconUrl() {
        return com.kwad.sdk.core.response.b.a.bQ(this.mAdInfo);
    }

    @Override
    public final String getAppName() {
        return com.kwad.sdk.core.response.b.a.ao(this.mAdInfo);
    }

    @Override
    public final String getAppPackageName() {
        return com.kwad.sdk.core.response.b.a.aq(this.mAdInfo);
    }

    @Override
    public final long getAppPackageSize() {
        return com.kwad.sdk.core.response.b.a.bu(this.mAdInfo);
    }

    @Override
    public final String getAppPrivacyUrl() {
        return com.kwad.sdk.core.response.b.a.bs(this.mAdInfo);
    }

    @Override
    public final float getAppScore() {
        return com.kwad.sdk.core.response.b.a.as(this.mAdInfo);
    }

    @Override
    public final String getAppVersion() {
        return com.kwad.sdk.core.response.b.a.bt(this.mAdInfo);
    }

    @Override
    public final String getCorporationName() {
        return com.kwad.sdk.core.response.b.a.bp(this.mAdInfo);
    }

    @Override
    public final int getECPM() {
        return com.kwad.sdk.core.response.b.a.aJ(this.mAdInfo);
    }

    @Override
    public final List<KsImage> getImageList() {
        ArrayList arrayList = new ArrayList();
        AdInfo adInfoCg = com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate);
        int iAW = com.kwad.sdk.core.response.b.a.aW(this.mAdInfo);
        if (iAW == 2 || iAW == 3) {
            for (AdInfo.AdMaterialInfo.MaterialFeature materialFeature : adInfoCg.adMaterialInfo.materialFeatureList) {
                if (materialFeature.featureType == 2 && !TextUtils.isEmpty(materialFeature.materialUrl)) {
                    arrayList.add(new com.kwad.components.core.internal.api.d(materialFeature.width, materialFeature.height, materialFeature.materialUrl));
                }
            }
        }
        return arrayList;
    }

    @Override
    public final int getInteractionType() {
        return com.kwad.sdk.core.response.b.a.aI(this.mAdInfo);
    }

    @Override
    public final int getMaterialType() {
        return com.kwad.sdk.core.response.b.a.aW(this.mAdInfo);
    }

    @Override
    public final Map<String, Object> getMediaExtraInfo() {
        HashMap map = new HashMap();
        if (com.kwad.sdk.core.config.d.zt()) {
            map.put("llsid", Long.valueOf(this.mAdTemplate.llsid));
        }
        return map;
    }

    @Override
    public final String getPermissionInfo() {
        return com.kwad.sdk.core.response.b.a.bq(this.mAdInfo);
    }

    @Override
    public final String getPermissionInfoUrl() {
        return com.kwad.sdk.core.response.b.a.br(this.mAdInfo);
    }

    @Override
    public final String getProductName() {
        return com.kwad.sdk.core.response.b.a.ap(this.mAdInfo);
    }

    @Override
    public final Bitmap getSdkLogo() {
        Context context = KsAdSDKImpl.get().getContext();
        if (context == null) {
            return null;
        }
        return BitmapFactory.decodeResource(context.getResources(), R.drawable.ksad_sdk_logo);
    }

    public final bi getTimerHelper() {
        if (this.mTimerHelper == null) {
            this.mTimerHelper = new bi();
        }
        return this.mTimerHelper;
    }

    @Override
    public final int getVideoDuration() {
        return com.kwad.sdk.core.response.b.a.G(this.mAdInfo);
    }

    @Override
    public final int getVideoHeight() {
        return com.kwad.sdk.core.response.b.a.cw(this.mAdInfo) ? TTVfConstant.EXT_PLUGIN_UNINSTALL : com.kwad.sdk.core.response.b.a.aN(this.mAdInfo).videoHeight;
    }

    @Override
    public final String getVideoUrl() {
        return com.kwad.sdk.core.response.b.a.F(this.mAdInfo);
    }

    @Override
    public final View getVideoView2(Context context, KsAdVideoPlayConfig ksAdVideoPlayConfig) {
        View viewA = null;
        if (context == null || !KsAdSDKImpl.get().hasInitFinish()) {
            return null;
        }
        try {
            context = l.wrapContextIfNeed(context);
            com.kwad.sdk.i.a.ah(com.tkay.expressad.foundation.g.a.f.a, PointCategory.SHOW);
            KSAdVideoPlayConfigImpl kSAdVideoPlayConfigImpl = ksAdVideoPlayConfig instanceof KSAdVideoPlayConfigImpl ? (KSAdVideoPlayConfigImpl) ksAdVideoPlayConfig : new KSAdVideoPlayConfigImpl();
            viewA = com.kwad.sdk.core.response.b.a.cw(this.mAdInfo) ? a(context, kSAdVideoPlayConfigImpl) : b(context, kSAdVideoPlayConfigImpl);
            com.kwad.sdk.i.a.ai(com.tkay.expressad.foundation.g.a.f.a, PointCategory.SHOW);
            return viewA;
        } catch (Throwable th) {
            RuntimeException runtimeException = new RuntimeException("getVideoView fail--context:" + context.getClass().getName() + "--classloader:" + context.getClassLoader().getClass().getName());
            if (!KsAdSDKImpl.get().getIsExternal()) {
                throw th;
            }
            if (Build.VERSION.SDK_INT >= 19) {
                runtimeException.addSuppressed(th);
            }
            com.kwad.components.core.d.a.b(runtimeException);
            return viewA;
        }
    }

    @Override
    public final View getVideoView2(Context context, boolean z) {
        if (context == null || !KsAdSDKImpl.get().hasInitFinish()) {
            return null;
        }
        return getVideoView2(context, new KsAdVideoPlayConfig.Builder().videoSoundEnable(z).build());
    }

    @Override
    public final int getVideoWidth() {
        if (com.kwad.sdk.core.response.b.a.cw(this.mAdInfo)) {
            return 720;
        }
        return com.kwad.sdk.core.response.b.a.aN(this.mAdInfo).videoWidth;
    }

    @Override
    public final void onDismiss(DialogInterface dialogInterface) {
        this.mE.onDownloadTipsDialogDismiss();
    }

    @Override
    public final void onShow(DialogInterface dialogInterface) {
        a aVar = this.mE;
        if (aVar != null) {
            aVar.onDownloadTipsDialogShow();
        }
    }

    @Override
    public final void registerViewForInteraction(Activity activity, ViewGroup viewGroup, List<View> list, KsNativeAd.AdInteractionListener adInteractionListener) {
        this.mw = adInteractionListener;
        a(viewGroup);
        a(activity, viewGroup, list);
    }

    @Override
    public final void registerViewForInteraction(Activity activity, ViewGroup viewGroup, Map<View, Integer> map, KsNativeAd.AdInteractionListener adInteractionListener) {
        this.mw = adInteractionListener;
        a(viewGroup);
        a(activity, viewGroup, map);
    }

    @Override
    public final void registerViewForInteraction(ViewGroup viewGroup, List<View> list, KsNativeAd.AdInteractionListener adInteractionListener) {
        registerViewForInteraction((Activity) null, viewGroup, list, adInteractionListener);
    }

    @Override
    public final void reportAdExposureFailed(int i, AdExposureFailedReason adExposureFailedReason) {
        com.kwad.sdk.core.report.a.a(this.mAdTemplate, i, adExposureFailedReason);
    }

    @Override
    public final void reportAdVideoPlayEnd() {
        com.kwad.sdk.core.report.a.aA(getAdTemplate());
    }

    @Override
    public final void reportAdVideoPlayStart() {
        com.kwad.sdk.core.report.a.j(getAdTemplate());
    }

    @Override
    public final void setBidEcpm(int i) {
        setBidEcpm(i, -1L);
    }

    @Override
    public final void setBidEcpm(long j, long j2) {
        this.mAdTemplate.mBidEcpm = j;
        com.kwad.sdk.core.report.a.i(this.mAdTemplate, j2);
    }

    @Override
    public final void setDownloadListener(KsAppDownloadListener ksAppDownloadListener) {
        com.kwad.components.core.e.d.c cVar = this.mApkDownloadHelper;
        if (cVar == null || ksAppDownloadListener == null) {
            return;
        }
        cVar.b(ksAppDownloadListener);
    }

    @Override
    public final void setVideoPlayListener(KsNativeAd.VideoPlayListener videoPlayListener) {
        this.mz = videoPlayListener;
    }
}
