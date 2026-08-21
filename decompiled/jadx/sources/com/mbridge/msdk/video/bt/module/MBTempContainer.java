package com.mbridge.msdk.video.bt.module;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.net.Uri;
import android.os.Handler;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Base64;
import android.util.Log;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.RelativeLayout;
import com.iab.omid.library.mmadbridge.adsession.AdEvents;
import com.iab.omid.library.mmadbridge.adsession.AdSession;
import com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose;
import com.iab.omid.library.mmadbridge.adsession.media.MediaEvents;
import com.iab.omid.library.mmadbridge.adsession.media.Position;
import com.iab.omid.library.mmadbridge.adsession.media.VastProperties;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.m;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.mraid.d;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.scheme.applet.AppletModelManager;
import com.mbridge.msdk.scheme.applet.AppletSchemeCallBack;
import com.mbridge.msdk.scheme.applet.AppletsModel;
import com.mbridge.msdk.video.bt.module.b.h;
import com.mbridge.msdk.video.js.a.c;
import com.mbridge.msdk.video.js.a.j;
import com.mbridge.msdk.video.js.container.AbstractJSContainer;
import com.mbridge.msdk.video.module.MBridgeContainerView;
import com.mbridge.msdk.video.module.MBridgeVideoView;
import com.mbridge.msdk.video.module.a.a.g;
import com.mbridge.msdk.video.module.a.a.l;
import com.mbridge.msdk.videocommon.a;
import com.tkay.expressad.foundation.d.r;
import java.util.ArrayList;
import java.util.List;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class MBTempContainer extends AbstractJSContainer {
    private static final String y = MBTempContainer.class.getSimpleName();
    private CampaignEx A;
    private com.mbridge.msdk.videocommon.download.a B;
    private h C;
    private com.mbridge.msdk.video.bt.module.a.c D;
    private com.mbridge.msdk.video.dynview.e.a E;
    private int F;
    private String G;
    private com.mbridge.msdk.video.js.factory.b H;
    private int I;
    private int J;
    private com.mbridge.msdk.video.bt.module.a.b K;
    private boolean L;
    private int M;
    private int N;
    private int O;
    private int P;
    private int Q;
    private String R;
    private String S;
    private List<CampaignEx> T;
    private int U;
    private LayoutInflater V;
    private int W;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected boolean f4082a;
    private int aa;
    private int ab;
    private View ac;
    private boolean ad;
    private boolean ae;
    private boolean af;
    private boolean ag;
    private boolean ah;
    private boolean ai;
    private boolean aj;
    private boolean ak;
    private boolean al;
    private boolean am;
    private com.mbridge.msdk.mbjscommon.mraid.d an;
    private AdSession ao;
    private MediaEvents ap;
    private Runnable aq;
    private boolean ar;
    protected boolean b;
    protected a c;
    protected WindVaneWebView d;
    protected MBridgeVideoView e;
    protected MBridgeContainerView f;
    protected Handler g;
    protected Runnable h;
    protected Runnable i;
    private View z;

    public void preload() {
    }

    public void setMediaPlayerUrl(String str) {
    }

    public MBTempContainer(Context context) {
        super(context);
        this.F = 1;
        this.G = "";
        this.I = com.mbridge.msdk.foundation.same.a.A;
        this.L = false;
        this.R = "";
        this.T = new ArrayList();
        this.U = 0;
        this.f4082a = false;
        this.b = false;
        this.c = new a.C0303a();
        this.g = new Handler();
        this.W = 0;
        this.aa = 0;
        this.ab = 0;
        this.h = new Runnable() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.1
            @Override // java.lang.Runnable
            public final void run() {
                if (MBTempContainer.this.getActivityProxy().h() == 0) {
                    Log.d(MBTempContainer.y, "run: WebView load timeout");
                    MBTempContainer.this.defaultLoad(-1, "WebView load timeout");
                } else {
                    MBTempContainer.this.W = -3;
                }
            }
        };
        this.i = new Runnable() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.2
            @Override // java.lang.Runnable
            public final void run() {
                if (MBTempContainer.this.getActivityProxy().h() != 0) {
                    MBTempContainer.this.W = -4;
                } else {
                    MBTempContainer.this.defaultLoad(-3, "JS bridge connect timeout");
                }
            }
        };
        this.ad = false;
        this.ae = false;
        this.af = false;
        this.ah = false;
        this.ai = false;
        this.aj = false;
        this.ak = false;
        this.al = false;
        this.am = false;
        this.ao = null;
        this.ap = null;
        this.aq = new Runnable() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.4
            @Override // java.lang.Runnable
            public final void run() {
                if (MBTempContainer.this.ac != null) {
                    MBTempContainer.this.ac.setVisibility(8);
                }
            }
        };
        this.ar = false;
        init(context);
    }

    public MBTempContainer(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.F = 1;
        this.G = "";
        this.I = com.mbridge.msdk.foundation.same.a.A;
        this.L = false;
        this.R = "";
        this.T = new ArrayList();
        this.U = 0;
        this.f4082a = false;
        this.b = false;
        this.c = new a.C0303a();
        this.g = new Handler();
        this.W = 0;
        this.aa = 0;
        this.ab = 0;
        this.h = new Runnable() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.1
            @Override // java.lang.Runnable
            public final void run() {
                if (MBTempContainer.this.getActivityProxy().h() == 0) {
                    Log.d(MBTempContainer.y, "run: WebView load timeout");
                    MBTempContainer.this.defaultLoad(-1, "WebView load timeout");
                } else {
                    MBTempContainer.this.W = -3;
                }
            }
        };
        this.i = new Runnable() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.2
            @Override // java.lang.Runnable
            public final void run() {
                if (MBTempContainer.this.getActivityProxy().h() != 0) {
                    MBTempContainer.this.W = -4;
                } else {
                    MBTempContainer.this.defaultLoad(-3, "JS bridge connect timeout");
                }
            }
        };
        this.ad = false;
        this.ae = false;
        this.af = false;
        this.ah = false;
        this.ai = false;
        this.aj = false;
        this.ak = false;
        this.al = false;
        this.am = false;
        this.ao = null;
        this.ap = null;
        this.aq = new Runnable() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.4
            @Override // java.lang.Runnable
            public final void run() {
                if (MBTempContainer.this.ac != null) {
                    MBTempContainer.this.ac.setVisibility(8);
                }
            }
        };
        this.ar = false;
        init(context);
    }

    public void init(Context context) {
        this.V = LayoutInflater.from(context);
    }

    public void setMatchParent() {
        ViewGroup.LayoutParams layoutParams = getLayoutParams();
        if (layoutParams == null) {
            setLayoutParams(new ViewGroup.LayoutParams(-1, -1));
        } else {
            layoutParams.height = -1;
            layoutParams.width = -1;
        }
    }

    public void setCampOrderViewData(List<CampaignEx> list, int i) {
        if (list != null) {
            this.T = list;
        }
        this.U = i;
    }

    public void registerErrorListener(a aVar) {
        this.c = aVar;
    }

    public int findID(String str) {
        return s.a(getContext(), str, "id");
    }

    public int findLayout(String str) {
        return s.a(getContext(), str, "layout");
    }

    public interface a {
        void a(String str);

        void a(boolean z);

        /* JADX INFO: renamed from: com.mbridge.msdk.video.bt.module.MBTempContainer$a$a, reason: collision with other inner class name */
        public static class C0303a implements a {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private boolean f4092a = false;

            @Override // com.mbridge.msdk.video.bt.module.MBTempContainer.a
            public void a(String str) {
                z.d("ActivityErrorListener", str);
                this.f4092a = true;
            }

            @Override // com.mbridge.msdk.video.bt.module.MBTempContainer.a
            public final void a(boolean z) {
                this.f4092a = z;
            }
        }
    }

    public boolean isLoadSuccess() {
        return this.b;
    }

    private int c() {
        j jVarB = b(this.A);
        if (jVarB != null) {
            return jVarB.k();
        }
        return 0;
    }

    private boolean d() {
        j jVarB = b(this.A);
        if (jVarB != null) {
            return jVarB.n();
        }
        return false;
    }

    private boolean e() {
        MBridgeVideoView mBridgeVideoView = this.e;
        if (mBridgeVideoView != null) {
            return mBridgeVideoView.isShowingAlertView() || this.e.isInstallDialogShowing() || this.e.isRewardPopViewShowing();
        }
        return false;
    }

    public void superDefaultLoad(int i, String str) {
        z.d(y, "receiveError:" + i + ",descroption:" + str);
        this.g.removeCallbacks(this.h);
        this.g.removeCallbacks(this.i);
        this.c.a(true);
        WindVaneWebView windVaneWebView = this.d;
        if (windVaneWebView != null) {
            windVaneWebView.setVisibility(8);
        }
    }

    @Override // com.mbridge.msdk.video.js.container.AbstractJSContainer, android.view.View
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
    }

    public void onCreate() {
        ViewGroup viewGroup;
        int iH;
        int iG;
        AppletsModel appletsModel;
        z.a(y, "onCreate isBigOffer: " + this.w);
        if (this.m == null) {
            this.m = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.k, this.r);
        }
        try {
            if (this.A != null) {
                try {
                    appletsModel = AppletModelManager.getInstance().get(this.A);
                } catch (Exception e2) {
                    if (MBridgeConstans.DEBUG) {
                        e2.printStackTrace();
                    }
                    appletsModel = null;
                }
                if (appletsModel != null) {
                    try {
                        if (appletsModel.can(0)) {
                            appletsModel.setUserClick(false);
                            appletsModel.requestWxAppletsScheme(0, new b(this.A));
                        }
                    } catch (Exception e3) {
                        if (appletsModel != null) {
                            appletsModel.clearRequestState();
                        }
                        if (MBridgeConstans.DEBUG) {
                            e3.printStackTrace();
                        }
                    }
                }
            }
        } catch (Exception e4) {
            if (MBridgeConstans.DEBUG) {
                e4.printStackTrace();
            }
        }
        this.am = false;
        try {
            if (this.w) {
                if (this.A != null && this.A.isDynamicView()) {
                    this.C = new com.mbridge.msdk.video.bt.module.b.b(getContext(), this.r, this.m, this.A, this.C, b(), this.k);
                } else {
                    this.C = new com.mbridge.msdk.video.bt.module.b.d(this.D, this.G);
                }
            } else {
                this.C = new com.mbridge.msdk.video.bt.module.b.b(getContext(), this.r, this.m, this.A, this.C, b(), this.k);
            }
            if (this.A != null && this.A.isActiveOm()) {
                this.ao = com.mbridge.msdk.a.b.a(getContext(), false, this.A.getOmid(), this.A.getRequestId(), this.A.getId(), this.k, this.B.n(), this.A.getRequestIdNotice());
            }
            registerErrorListener(new com.mbridge.msdk.video.bt.module.b.e(this.C));
            a(this.m, this.A);
            setShowingTransparent();
            int layoutID = getLayoutID();
            if (layoutID <= 0) {
                a("layoutID not found");
                return;
            }
            View viewInflate = this.V.inflate(layoutID, (ViewGroup) null);
            this.z = viewInflate;
            addView(viewInflate, new RelativeLayout.LayoutParams(-1, -1));
            if (this.f4082a) {
                setMatchParent();
            }
            this.d = findWindVaneWebView();
            MBridgeVideoView mBridgeVideoViewFindMBridgeVideoView = findMBridgeVideoView();
            this.e = mBridgeVideoViewFindMBridgeVideoView;
            mBridgeVideoViewFindMBridgeVideoView.setVideoLayout(this.A);
            this.e.setIsIV(this.r);
            this.e.setUnitId(this.k);
            this.e.setCamPlayOrderCallback(this.E, this.T, this.F, this.U);
            if (this.w) {
                this.e.setNotchPadding(this.N, this.O, this.P, this.Q);
            }
            this.f = findMBridgeContainerView();
            if (this.w) {
                this.f.setNotchPadding(this.M, this.N, this.O, this.P, this.Q);
            }
            if (!((this.e == null || this.f == null || !initViews()) ? false : true)) {
                this.c.a(com.tkay.expressad.foundation.e.a.b);
                if (this.j != null) {
                    this.j.finish();
                    return;
                }
                return;
            }
            this.b = true;
            WindVaneWebView windVaneWebView = this.d;
            this.H = new com.mbridge.msdk.video.js.factory.b(this.j, windVaneWebView, this.e, this.f, this.A, new e());
            if (this.A != null && this.A.getDynamicTempCode() == 5 && this.T != null) {
                this.H.a(this.T);
            }
            registerJsFactory(this.H);
            com.mbridge.msdk.foundation.b.b.a().a(this.k + "_1", new com.mbridge.msdk.foundation.b.a() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.6
                @Override // com.mbridge.msdk.foundation.b.a
                public final void a() {
                    String string;
                    MBTempContainer.this.onPause();
                    try {
                        JSONObject jSONObject = new JSONObject();
                        if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                            jSONObject.put("status", 1);
                        }
                        string = jSONObject.toString();
                    } catch (Throwable th) {
                        z.c(MBTempContainer.y, th.getMessage(), th);
                        string = "";
                    }
                    com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBTempContainer.this.d, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                }

                @Override // com.mbridge.msdk.foundation.b.a
                public final void b() {
                    String string;
                    MBTempContainer.this.onResume();
                    try {
                        JSONObject jSONObject = new JSONObject();
                        if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                            jSONObject.put("status", 2);
                        }
                        string = jSONObject.toString();
                    } catch (Throwable th) {
                        z.c(MBTempContainer.y, th.getMessage(), th);
                        string = "";
                    }
                    com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBTempContainer.this.d, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                }

                @Override // com.mbridge.msdk.foundation.b.a
                public final void a(String str) {
                    String string;
                    MBTempContainer.this.onResume();
                    try {
                        JSONObject jSONObject = new JSONObject();
                        if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                            jSONObject.put("status", 2);
                        }
                        string = jSONObject.toString();
                    } catch (Throwable th) {
                        z.c(MBTempContainer.y, th.getMessage(), th);
                        string = "";
                    }
                    com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBTempContainer.this.d, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                }
            });
            if (windVaneWebView != null) {
                ViewGroup viewGroup2 = (ViewGroup) this.z.findViewById(s.a(getContext(), "mbridge_video_templete_webview_parent", "id"));
                windVaneWebView.setApiManagerJSFactory(this.H);
                if (windVaneWebView.getParent() != null) {
                    defaultLoad(0, "preload template webview is null or load error");
                    return;
                }
                if (windVaneWebView.getObject() instanceof j) {
                    this.H.a((j) windVaneWebView.getObject());
                    getJSCommon().a(this.q);
                    getJSCommon().a(this.k);
                    getJSCommon().a(this.m);
                    getJSCommon().a(new e());
                    if (this.A != null && (this.A.isMraid() || this.A.isActiveOm())) {
                        com.mbridge.msdk.mbjscommon.mraid.d dVar = new com.mbridge.msdk.mbjscommon.mraid.d(getContext());
                        this.an = dVar;
                        dVar.c();
                        this.an.a();
                        this.an.a(new d.b() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.7
                            @Override // com.mbridge.msdk.mbjscommon.mraid.d.b
                            public final void a(double d2) {
                                z.d(MBTempContainer.y, "volume is : " + d2);
                                try {
                                    if (!MBTempContainer.this.A.isMraid() || MBTempContainer.this.f == null || MBTempContainer.this.f.getH5EndCardView() == null) {
                                        return;
                                    }
                                    MBTempContainer.this.f.getH5EndCardView().volumeChange(d2);
                                } catch (Exception e5) {
                                    z.d(MBTempContainer.y, e5.getMessage());
                                }
                            }
                        });
                    }
                    getJSContainerModule().readyStatus(((j) windVaneWebView.getObject()).p());
                    try {
                        if (this.d != null) {
                            int i = getResources().getConfiguration().orientation;
                            if (d()) {
                                iH = ae.i(getContext());
                                iG = ae.j(getContext());
                                if (ae.a(getContext())) {
                                    int iK = ae.k(getContext());
                                    if (i == 2) {
                                        iH += iK;
                                    } else {
                                        iG += iK;
                                    }
                                }
                            } else {
                                iH = ae.h(getContext());
                                iG = ae.g(getContext());
                            }
                            int iC = this.A.getRewardTemplateMode().c();
                            if (c(this.A) == 1) {
                                iC = i;
                            }
                            getJSNotifyProxy().a(i, iC, iH, iG);
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put(com.mbridge.msdk.foundation.same.a.s, ae.d(getContext()));
                            try {
                                if (this.o != null) {
                                    JSONObject jSONObject2 = new JSONObject();
                                    jSONObject2.put("name", this.o.a());
                                    jSONObject2.put("amount", this.o.b());
                                    jSONObject2.put("id", this.p);
                                    jSONObject.put("userId", this.n);
                                    jSONObject.put("reward", jSONObject2);
                                    jSONObject.put("playVideoMute", this.q);
                                    jSONObject.put("extra", this.S);
                                }
                            } catch (JSONException e5) {
                                z.a(y, e5.getMessage());
                            } catch (Exception e6) {
                                z.a(y, e6.getMessage());
                            }
                            getJSNotifyProxy().a(jSONObject.toString());
                            com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) this.d, "oncutoutfetched", Base64.encodeToString(this.R.getBytes(), 0));
                            getJSCommon().b(true);
                            if (this.K == null) {
                                this.K = new com.mbridge.msdk.video.bt.module.a.b() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.3
                                    @Override // com.mbridge.msdk.video.bt.module.a.b
                                    public final void a() {
                                        MBTempContainer.this.getJSVideoModule().setInstallDialogState(true);
                                        MBTempContainer.this.getJSVideoModule().setCover(true);
                                        MBTempContainer.this.getJSVideoModule().videoOperate(2);
                                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBTempContainer.this.d, "onInstallAlertShow", "");
                                    }

                                    @Override // com.mbridge.msdk.video.bt.module.a.b
                                    public final void b() {
                                        MBTempContainer.this.getJSVideoModule().setInstallDialogState(false);
                                        MBTempContainer.this.getJSVideoModule().setCover(false);
                                        MBTempContainer.this.getJSVideoModule().videoOperate(1);
                                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBTempContainer.this.d, "onInstallAlertHide", "");
                                    }
                                };
                            }
                            getJSCommon().a(this.K);
                            loadModuleDatas();
                            this.g.postDelayed(this.h, 2000L);
                        }
                    } catch (Exception e7) {
                        if (MBridgeConstans.DEBUG) {
                            e7.printStackTrace();
                        }
                    }
                    ((j) windVaneWebView.getObject()).m.a();
                    if (this.w) {
                        getJSCommon().f(this.aa);
                        getJSCommon().e(this.ab);
                    }
                }
                if (getJSCommon().b() == 1 && (viewGroup = (ViewGroup) this.z.findViewById(s.a(getContext(), "mbridge_video_templete_webview_parent", "id"))) != null) {
                    ((ViewGroup) this.z).removeView(viewGroup);
                    ((ViewGroup) this.z).addView(viewGroup, 1);
                }
                viewGroup2.addView(windVaneWebView, new ViewGroup.LayoutParams(-1, -1));
                g();
                return;
            }
            z.a(y, "template webview is null");
            defaultLoad(0, "preload template webview is null or load error");
        } catch (Throwable th) {
            a("onCreate error" + th);
        }
    }

    @Override // com.mbridge.msdk.video.js.container.AbstractJSContainer
    protected final void a(String str) {
        h hVar = this.C;
        if (hVar != null) {
            hVar.a(str);
        }
        super.a(str);
    }

    @Override // com.mbridge.msdk.video.js.container.AbstractJSContainer
    public void onPause() {
        super.onPause();
        this.af = true;
        try {
            getJSVideoModule().videoOperate(2);
            if (this.f != null) {
                this.f.setOnPause();
            }
            if (this.e != null) {
                this.e.onActivityPause();
            }
        } catch (Throwable th) {
            z.c(y, th.getMessage(), th);
        }
    }

    @Override // com.mbridge.msdk.video.js.container.AbstractJSContainer
    public void onResume() {
        Runnable runnable;
        super.onResume();
        int i = this.W;
        if (i == -3) {
            runnable = this.h;
        } else {
            runnable = i == -4 ? this.i : null;
        }
        if (runnable != null) {
            runnable.run();
            this.W = 0;
        }
        try {
            if (this.e != null && !e() && !this.e.isMiniCardShowing() && !com.mbridge.msdk.foundation.b.b.c) {
                this.e.setCover(false);
            }
            if (this.e != null) {
                this.e.onActivityResume();
            }
            if (this.f != null) {
                this.f.setOnResume();
            }
            if (this.af && !e() && !com.mbridge.msdk.foundation.b.b.c) {
                getJSVideoModule().videoOperate(1);
            }
            if (this.j != null) {
                ae.a(this.j.getWindow().getDecorView());
            }
            if (this.ah && this.ai && this.j != null) {
                this.j.finish();
            }
        } catch (Throwable th) {
            z.c(y, th.getMessage(), th);
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    @Override // com.mbridge.msdk.video.js.container.AbstractJSContainer
    public void onStop() {
        super.onStop();
        MBridgeVideoView mBridgeVideoView = this.e;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.setCover(true);
            this.e.onActivityStop();
        }
    }

    @Override // com.mbridge.msdk.video.js.container.AbstractJSContainer
    public void onDestroy() {
        if (this.L) {
            return;
        }
        boolean z = true;
        this.L = true;
        super.onDestroy();
        try {
            if (this.K != null) {
                this.K = null;
            }
            if (this.e != null) {
                this.e.releasePlayer();
            }
            if (this.d != null) {
                ViewGroup viewGroup = (ViewGroup) this.d.getParent();
                if (viewGroup != null) {
                    viewGroup.removeAllViews();
                }
                this.d.clearWebView();
                this.d.release();
            }
            if (this.D != null) {
                this.D = null;
            }
            this.g.removeCallbacks(this.h);
            this.g.removeCallbacks(this.i);
            getJSCommon().f();
            if (this.r) {
                com.mbridge.msdk.c.b.a().f(this.k);
            }
            if (!this.ad) {
                try {
                    this.ad = true;
                    if (this.A != null && this.A.getPlayable_ads_without_video() == 2) {
                        this.ae = true;
                    }
                    if (this.C != null) {
                        if (this.r && (this.t == com.mbridge.msdk.foundation.same.a.w || this.t == com.mbridge.msdk.foundation.same.a.x)) {
                            h hVar = this.C;
                            if (this.J != 1) {
                                z = false;
                            }
                            hVar.a(z, this.I);
                        }
                        if (!this.ae) {
                            this.o.a(0);
                        }
                        this.C.a(this.ae, this.o);
                    }
                    this.g.removeCallbacks(this.aq);
                    if (((!this.r && !this.w) || (this.A != null && this.A.isDynamicView())) && this.ae && (this.C == null || !this.C.b())) {
                        z.a(y, "sendToServerRewardInfo");
                        com.mbridge.msdk.video.module.b.b.a(this.A, this.o, this.k, this.n, this.S);
                    }
                    if (!this.w) {
                        if (this.r) {
                            com.mbridge.msdk.videocommon.a.b(com.tkay.expressad.foundation.g.a.aU, this.A);
                        } else {
                            com.mbridge.msdk.videocommon.a.b(94, this.A);
                        }
                    }
                    if (this.f != null) {
                        this.f.release();
                    }
                } catch (Throwable th) {
                    z.c(y, th.getMessage(), th);
                }
            }
            if (!this.ag) {
                f();
            }
            if (this.an != null) {
                this.an.d();
            }
            if (this.ao != null) {
                this.ao.removeAllFriendlyObstructions();
                this.ao.finish();
                this.ao = null;
            }
            if (!this.w) {
                if (isLoadSuccess()) {
                    this.g.postDelayed(new Runnable() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.5
                        @Override // java.lang.Runnable
                        public final void run() {
                            if (MBTempContainer.this.j != null) {
                                MBTempContainer.this.j.finish();
                            }
                        }
                    }, 100L);
                } else if (this.j != null) {
                    this.j.finish();
                }
            }
            if (!this.ag) {
                f();
            }
            com.mbridge.msdk.video.bt.a.c.a().g(this.G);
        } catch (Throwable th2) {
            z.a(y, th2.getMessage());
        }
    }

    private void f() {
        com.mbridge.msdk.foundation.same.report.d dVar = new com.mbridge.msdk.foundation.same.report.d(getContext());
        CampaignEx campaignEx = this.A;
        if (campaignEx != null) {
            dVar.a(campaignEx.getRequestId(), this.A.getRequestIdNotice(), this.A.getId(), this.k, com.mbridge.msdk.mbjscommon.mraid.c.a(this.A.getId()), this.A.isBidCampaign());
            com.mbridge.msdk.mbjscommon.mraid.c.b(this.A.getId());
            this.ag = true;
        }
    }

    public void setShowingTransparent() {
        int iA;
        boolean zD = d();
        this.ah = zD;
        if (zD || (iA = s.a(getContext(), "mbridge_reward_theme", "style")) <= 1 || this.j == null) {
            return;
        }
        this.j.setTheme(iA);
    }

    private void g() {
        AdSession adSession = this.ao;
        if (adSession != null) {
            try {
                adSession.addFriendlyObstruction(this.f, FriendlyObstructionPurpose.OTHER, null);
                if (this.ac != null) {
                    this.ao.addFriendlyObstruction(this.ac, FriendlyObstructionPurpose.OTHER, null);
                }
                if (this.d != null) {
                    this.ao.addFriendlyObstruction(this.d, FriendlyObstructionPurpose.OTHER, null);
                }
                AdEvents adEventsCreateAdEvents = AdEvents.createAdEvents(this.ao);
                this.ap = MediaEvents.createMediaEvents(this.ao);
                this.ao.start();
                adEventsCreateAdEvents.loaded(VastProperties.createVastPropertiesForNonSkippableMedia(true, Position.STANDALONE));
                this.e.setVideoEvents(this.ap);
                if (adEventsCreateAdEvents != null) {
                    adEventsCreateAdEvents.impressionOccurred();
                }
            } catch (Exception e2) {
                z.a("omsdk", e2.getMessage());
            }
        }
    }

    public void receiveSuccess() {
        z.a(y, "receiveSuccess ,start hybrid");
        this.g.removeCallbacks(this.i);
        this.g.postDelayed(this.aq, 250L);
    }

    public void defaultLoad(int i, String str) {
        int iG;
        int i2;
        int iP;
        superDefaultLoad(i, str);
        z.a(y, "hybrid load error ,start defaultLoad,desc:" + str);
        if (isLoadSuccess()) {
            if (this.A.getPlayable_ads_without_video() == 2) {
                this.f.setCampaign(this.A);
                this.f.addOrderViewData(this.T);
                this.f.setUnitID(this.k);
                if (this.A.getCbd() > -2) {
                    iP = this.A.getCbd();
                } else {
                    iP = this.m.p();
                }
                this.f.setCloseDelayTime(iP);
                this.f.setPlayCloseBtnTm(this.m.j());
                this.f.setNotifyListener(new g(this.A, this.B, this.o, b(), this.k, new d(), this.m.C(), this.w));
                this.f.preLoadData(this.H);
                this.f.showPlayableView();
            } else {
                a(i, str);
                this.ac.setVisibility(8);
                loadModuleDatas();
                int iH = this.m.h();
                int iC = c();
                int i3 = iC != 0 ? iC : iH;
                CampaignEx campaignEx = this.A;
                if (campaignEx != null && campaignEx.isDynamicView()) {
                    this.e.setContainerViewOnNotifyListener(new c(this.j, this.A));
                }
                CampaignEx campaignEx2 = this.A;
                if (campaignEx2 != null && campaignEx2.getVst() > -2) {
                    iG = this.A.getVst();
                } else {
                    iG = this.m.g();
                }
                if (this.A.getDynamicTempCode() == 5 && (i2 = this.F) > 1) {
                    iG = a(iG, i2);
                    this.A.setVst(iG);
                }
                int i4 = iG;
                this.e.setVideoSkipTime(i4);
                MBridgeVideoView mBridgeVideoView = this.e;
                mBridgeVideoView.setNotifyListener(new l(mBridgeVideoView, this.f, this.A, this.o, this.B, b(), this.k, i3, i4, new f(), this.m.C(), this.w, this.m.I()));
                this.e.defaultShow();
                MBridgeContainerView mBridgeContainerView = this.f;
                mBridgeContainerView.setNotifyListener(new com.mbridge.msdk.video.module.a.a.a(this.e, mBridgeContainerView, this.A, this.o, this.B, b(), this.k, new c(this.j, this.A), this.m.C(), this.w));
                this.f.defaultShow();
            }
            g();
            return;
        }
        a(i, str);
        if (this.j != null) {
            this.j.finish();
        }
    }

    public int getLayoutID() {
        return findLayout(this.ah ? "mbridge_reward_activity_video_templete_transparent" : "mbridge_reward_activity_video_templete");
    }

    public WindVaneWebView findWindVaneWebView() {
        a.C0309a c0309aA;
        try {
            if (this.w) {
                z.a(y, "当前大模板");
                if (this.A == null || this.A.getRewardTemplateMode() == null) {
                    return null;
                }
                z.a(y, "当前大模板，存在播放模板");
                a.C0309a c0309aA2 = com.mbridge.msdk.videocommon.a.a(this.k + "_" + this.A.getId() + "_" + this.A.getRequestId() + "_" + this.A.getRewardTemplateMode().e());
                if (c0309aA2 != null) {
                    return c0309aA2.a();
                }
                return null;
            }
            z.a(y, "当前非大模板");
            if (this.r) {
                c0309aA = com.mbridge.msdk.videocommon.a.a(com.tkay.expressad.foundation.g.a.aU, this.A);
            } else {
                c0309aA = com.mbridge.msdk.videocommon.a.a(94, this.A);
            }
            if (c0309aA == null || !c0309aA.c()) {
                return null;
            }
            if (this.r) {
                com.mbridge.msdk.videocommon.a.b(com.tkay.expressad.foundation.g.a.aU, this.A);
            } else {
                com.mbridge.msdk.videocommon.a.b(94, this.A);
            }
            WindVaneWebView windVaneWebViewA = c0309aA.a();
            if (this.ah) {
                windVaneWebViewA.setWebViewTransparent();
            }
            return windVaneWebViewA;
        } catch (Exception e2) {
            if (!MBridgeConstans.DEBUG) {
                return null;
            }
            e2.printStackTrace();
            return null;
        }
    }

    public MBridgeVideoView findMBridgeVideoView() {
        return (MBridgeVideoView) findViewById(findID("mbridge_video_templete_videoview"));
    }

    public MBridgeContainerView findMBridgeContainerView() {
        return (MBridgeContainerView) findViewById(findID("mbridge_video_templete_container"));
    }

    public boolean initViews() {
        View viewFindViewById = findViewById(findID("mbridge_video_templete_progressbar"));
        this.ac = viewFindViewById;
        return viewFindViewById != null;
    }

    public boolean canBackPress() {
        MBridgeContainerView mBridgeContainerView = this.f;
        return mBridgeContainerView == null || mBridgeContainerView.canBackPress();
    }

    public void onBackPressed() {
        MBridgeContainerView mBridgeContainerView;
        MBridgeContainerView mBridgeContainerView2;
        MBridgeVideoView mBridgeVideoView;
        MBridgeVideoView mBridgeVideoView2;
        if (this.ah && (mBridgeVideoView2 = this.e) != null) {
            mBridgeVideoView2.notifyVideoClose();
            return;
        }
        if (this.aj && (mBridgeVideoView = this.e) != null) {
            if (mBridgeVideoView.isMiniCardShowing()) {
                MBridgeContainerView mBridgeContainerView3 = this.f;
                if (mBridgeContainerView3 != null) {
                    mBridgeContainerView3.onMiniEndcardBackPress();
                    return;
                }
                return;
            }
            this.e.onBackPress();
            return;
        }
        if (this.al && (mBridgeContainerView2 = this.f) != null) {
            mBridgeContainerView2.onPlayableBackPress();
            return;
        }
        if (this.ak && (mBridgeContainerView = this.f) != null) {
            mBridgeContainerView.onEndcardBackPress();
        }
        if (getJSCommon().c()) {
            if (getJSContainerModule() == null || !getJSContainerModule().miniCardShowing()) {
                getActivityProxy().g();
                return;
            }
            return;
        }
        if (canBackPress()) {
            if (this.j == null || this.w || this.am) {
                return;
            }
            this.am = true;
            this.j.onBackPressed();
            return;
        }
        z.a(y, "onBackPressed can't excute");
    }

    private void a(int i, String str) {
        try {
            p pVar = new p();
            pVar.o(r.i);
            pVar.j("code=" + i + ",desc=" + str);
            pVar.i((this.A == null || this.A.getRewardTemplateMode() == null) ? "" : this.A.getRewardTemplateMode().e());
            pVar.m(this.k);
            pVar.n(this.A != null ? this.A.getId() : "");
            if (this.A != null && !TextUtils.isEmpty(this.A.getRequestId())) {
                pVar.k(this.A.getRequestId());
            }
            if (this.A != null && !TextUtils.isEmpty(this.A.getRequestIdNotice())) {
                pVar.l(this.A.getRequestIdNotice());
            }
            int iD = v.D(getContext());
            pVar.c(iD);
            pVar.r(v.a(getContext(), iD));
            com.mbridge.msdk.video.module.b.b.a(p.e(pVar), this.k);
        } catch (Throwable th) {
            z.c(y, th.getMessage(), th);
        }
    }

    private int h() {
        try {
            com.mbridge.msdk.videocommon.d.a aVarB = com.mbridge.msdk.videocommon.d.b.a().b();
            if (aVarB == null) {
                com.mbridge.msdk.videocommon.d.b.a().c();
            }
            iG = aVarB != null ? (int) aVarB.g() : 5;
            z.b(y, "MBridgeBaseView buffetTimeout:" + iG);
        } catch (Throwable th) {
            th.printStackTrace();
        }
        return iG;
    }

    private int a(int i, int i2) {
        List<CampaignEx> list;
        if (i < 0 || (list = this.T) == null || list.size() == 0 || i2 <= 1) {
            return i;
        }
        int videoLength = 0;
        for (int i3 = 0; i3 < i2 - 1; i3++) {
            if (this.T.get(i3) != null) {
                videoLength += this.T.get(i3).getVideoLength();
            }
        }
        if (i > videoLength) {
            return i - videoLength;
        }
        return 0;
    }

    private final class f extends com.mbridge.msdk.video.module.a.a.e {
        private f() {
        }

        @Override // com.mbridge.msdk.video.module.a.a.e, com.mbridge.msdk.video.module.a.a
        public final void a(int i, Object obj) {
            super.a(i, obj);
            if (MBTempContainer.this.r) {
                try {
                    if (obj instanceof String) {
                        String str = (String) obj;
                        if (!TextUtils.isEmpty(str)) {
                            JSONObject jSONObject = new JSONObject(str);
                            MBTempContainer.this.I = jSONObject.getInt("Alert_window_status");
                            MBTempContainer.this.J = jSONObject.getInt("complete_info");
                        }
                    }
                } catch (Exception e) {
                    z.d("NotifyListener", e.getMessage());
                }
            }
            if (i != 2) {
                if (i == 121) {
                    MBTempContainer.this.ae = true;
                    MBTempContainer.this.C.a(MBTempContainer.this.l, MBTempContainer.this.k);
                    MBTempContainer.this.aj = false;
                    return;
                }
                if (i == 16) {
                    MBTempContainer.m(MBTempContainer.this);
                    return;
                }
                if (i != 17) {
                    switch (i) {
                        case 10:
                            MBTempContainer.this.aj = true;
                            if (MBTempContainer.this.A != null) {
                                if (!MBTempContainer.this.A.isDynamicView() || !MBTempContainer.this.w || MBTempContainer.this.A.isCampaignIsFiltered()) {
                                    MBTempContainer.this.C.a();
                                }
                                com.mbridge.msdk.video.bt.module.b.f.a(MBTempContainer.this.getContext(), MBTempContainer.this.A, MBTempContainer.this.k, MBTempContainer.this.F);
                            }
                            break;
                    }
                }
                MBTempContainer.this.ae = true;
                if (MBTempContainer.this.f != null) {
                    MBTempContainer.this.f.setRewardStatus(true);
                    return;
                }
                return;
            }
            if (i == 12) {
                String string = "Play error but has no message.";
                try {
                    if (obj instanceof String) {
                        string = obj.toString();
                    }
                } catch (Throwable th) {
                    z.d("NotifyListener", th.getMessage());
                }
                com.mbridge.msdk.video.bt.module.b.f.a(MBTempContainer.this.getContext(), MBTempContainer.this.A, MBTempContainer.this.k, string, MBTempContainer.this.F);
                if (!MBTempContainer.this.aj) {
                    if (MBTempContainer.this.m.I() == 0) {
                        MBTempContainer.this.C.a("play error");
                        MBTempContainer.this.aj = false;
                        MBTempContainer.m(MBTempContainer.this);
                        return;
                    } else if (MBTempContainer.this.A == null || !MBTempContainer.this.A.isDynamicView() || !MBTempContainer.this.w || MBTempContainer.this.A.isCampaignIsFiltered()) {
                        MBTempContainer.this.C.a();
                    }
                }
            }
            MBTempContainer.this.getJSVideoModule().videoOperate(3);
            MBTempContainer.this.aj = false;
            if (MBTempContainer.this.ap == null || i != 2) {
                return;
            }
            MBTempContainer.this.ap.skipped();
        }
    }

    private final class c extends com.mbridge.msdk.video.module.a.a.e {
        private Activity b;
        private CampaignEx c;

        public c(Activity activity, CampaignEx campaignEx) {
            this.b = activity;
            this.c = campaignEx;
        }

        @Override // com.mbridge.msdk.video.module.a.a.e, com.mbridge.msdk.video.module.a.a
        public final void a(int i, Object obj) {
            Context context = MBTempContainer.this.getContext();
            if (context != null && context != context.getApplicationContext()) {
                MBTempContainer.this.getJSCommon().a(context);
            }
            if (this.b != null) {
                MBTempContainer.this.getJSCommon().a(this.b);
            }
            MBTempContainer.this.ak = true;
            if (i != 108) {
                if (i != 113) {
                    if (i != 117) {
                        if (i == 126 || i == 128) {
                            MBTempContainer.this.C.a(false, MBTempContainer.this.l, MBTempContainer.this.k);
                        } else {
                            switch (i) {
                                case 103:
                                case 104:
                                    MBTempContainer.m(MBTempContainer.this);
                                    break;
                                case 105:
                                    if (MBTempContainer.this.K == null) {
                                        MBTempContainer.this.K = new com.mbridge.msdk.video.bt.module.a.b() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.c.1
                                            @Override // com.mbridge.msdk.video.bt.module.a.b
                                            public final void a() {
                                                MBTempContainer.this.getJSVideoModule().setInstallDialogState(true);
                                                MBTempContainer.this.getJSVideoModule().setCover(true);
                                                MBTempContainer.this.getJSVideoModule().videoOperate(2);
                                            }

                                            @Override // com.mbridge.msdk.video.bt.module.a.b
                                            public final void b() {
                                                MBTempContainer.this.getJSVideoModule().setInstallDialogState(false);
                                                MBTempContainer.this.getJSVideoModule().setCover(false);
                                                MBTempContainer.this.getJSVideoModule().videoOperate(1);
                                            }
                                        };
                                    }
                                    MBTempContainer.this.getJSCommon().a(MBTempContainer.this.K);
                                    MBTempContainer.this.getJSCommon().click(1, obj != null ? obj.toString() : "");
                                    break;
                                case 106:
                                    if (MBTempContainer.this.D != null) {
                                        MBTempContainer.this.D.a(MBTempContainer.this.G, MBTempContainer.this.l, MBTempContainer.this.k);
                                    } else {
                                        MBTempContainer.this.C.a(true, MBTempContainer.this.l, MBTempContainer.this.k);
                                    }
                                    if (this.b != null && this.c != null) {
                                        try {
                                            Intent intent = new Intent();
                                            intent.setAction("android.intent.action.VIEW");
                                            String strA = com.mbridge.msdk.click.c.a(this.c.getClickURL(), "-999", "-999");
                                            if (!TextUtils.isEmpty(strA)) {
                                                intent.setData(Uri.parse(strA));
                                                this.b.startActivity(intent);
                                            }
                                        } catch (Throwable th) {
                                            z.c("NotifyListener", th.getMessage(), th);
                                        }
                                        MBTempContainer.m(MBTempContainer.this);
                                    }
                                    break;
                            }
                        }
                    } else {
                        if (MBTempContainer.this.e != null) {
                            MBTempContainer.this.e.setVisible(4);
                        }
                        MBTempContainer.this.ak = true;
                        MBTempContainer.this.C.b(MBTempContainer.this.l, MBTempContainer.this.k);
                    }
                } else {
                    MBTempContainer.this.C.a(true, MBTempContainer.this.l, MBTempContainer.this.k);
                }
            } else {
                if (MBTempContainer.this.K == null) {
                    MBTempContainer.this.K = new com.mbridge.msdk.video.bt.module.a.b() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.c.2
                        @Override // com.mbridge.msdk.video.bt.module.a.b
                        public final void a() {
                            MBTempContainer.this.getJSVideoModule().setInstallDialogState(true);
                            MBTempContainer.this.getJSVideoModule().setCover(true);
                            MBTempContainer.this.getJSVideoModule().videoOperate(2);
                            com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBTempContainer.this.d, "onInstallAlertShow", "");
                        }

                        @Override // com.mbridge.msdk.video.bt.module.a.b
                        public final void b() {
                            MBTempContainer.this.getJSVideoModule().setInstallDialogState(false);
                            MBTempContainer.this.getJSVideoModule().setCover(false);
                            MBTempContainer.this.getJSVideoModule().videoOperate(1);
                            com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBTempContainer.this.d, "onInstallAlertHide", "");
                        }
                    };
                }
                MBTempContainer.this.getJSCommon().a(MBTempContainer.this.K);
                MBTempContainer.this.getJSCommon().a(new c.b(MBTempContainer.this.getJSCommon(), new e()));
                MBTempContainer.this.getJSCommon().click(1, obj != null ? obj.toString() : "");
            }
            super.a(i, obj);
        }
    }

    private final class d extends com.mbridge.msdk.video.module.a.a.e {
        private d() {
        }

        @Override // com.mbridge.msdk.video.module.a.a.e, com.mbridge.msdk.video.module.a.a
        public final void a(int i, Object obj) {
            String string;
            super.a(i, obj);
            try {
                if (obj instanceof JSONObject) {
                    string = obj.toString();
                } else {
                    string = (String) obj;
                }
                if (MBTempContainer.this.r && !TextUtils.isEmpty(string)) {
                    JSONObject jSONObject = new JSONObject(string);
                    int iOptInt = jSONObject.optInt("type");
                    int iOptInt2 = jSONObject.optInt("complete");
                    if (iOptInt == 2) {
                        MBTempContainer.this.I = com.mbridge.msdk.foundation.same.a.C;
                    } else if (iOptInt != 3) {
                        MBTempContainer.this.I = com.mbridge.msdk.foundation.same.a.A;
                    } else {
                        MBTempContainer.this.I = com.mbridge.msdk.foundation.same.a.B;
                    }
                    MBTempContainer.this.J = iOptInt2;
                }
            } catch (Exception unused) {
                z.d("NotifyListener", "PlayableResultListener ERROR");
            }
            if (i == 120) {
                MBTempContainer.this.C.b(MBTempContainer.this.l, MBTempContainer.this.k);
                return;
            }
            if (i == 126) {
                MBTempContainer.this.C.a(false, MBTempContainer.this.l, MBTempContainer.this.k);
                return;
            }
            if (i != 127) {
                switch (i) {
                    case 100:
                        MBTempContainer.this.al = true;
                        MBTempContainer.this.g.postDelayed(MBTempContainer.this.aq, 250L);
                        MBTempContainer.this.C.a();
                        break;
                    case 101:
                    case 102:
                        MBTempContainer.this.getJSCommon().e();
                        break;
                    case 103:
                        MBTempContainer.this.ae = true;
                        if (MBTempContainer.this.A.isMraid()) {
                            MBTempContainer.m(MBTempContainer.this);
                        } else {
                            MBTempContainer.this.getJSCommon().e();
                        }
                        break;
                    case 104:
                        MBTempContainer.m(MBTempContainer.this);
                        break;
                    case 105:
                        if (MBTempContainer.this.K == null) {
                            MBTempContainer.this.K = new com.mbridge.msdk.video.bt.module.a.b() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.d.1
                                @Override // com.mbridge.msdk.video.bt.module.a.b
                                public final void a() {
                                    MBTempContainer.this.getJSVideoModule().setInstallDialogState(true);
                                    MBTempContainer.this.getJSVideoModule().setCover(true);
                                    MBTempContainer.this.getJSVideoModule().videoOperate(2);
                                }

                                @Override // com.mbridge.msdk.video.bt.module.a.b
                                public final void b() {
                                    MBTempContainer.this.getJSVideoModule().setInstallDialogState(false);
                                    MBTempContainer.this.getJSVideoModule().setCover(false);
                                    MBTempContainer.this.getJSVideoModule().videoOperate(1);
                                }
                            };
                        }
                        MBTempContainer.this.getJSCommon().a(MBTempContainer.this.K);
                        MBTempContainer.this.getJSCommon().click(1, obj != null ? obj.toString() : "");
                        break;
                }
                return;
            }
            MBTempContainer.this.ae = true;
            MBTempContainer.this.C.a();
            MBTempContainer.this.C.b(MBTempContainer.this.l, MBTempContainer.this.k);
            MBTempContainer.this.getJSContainerModule().showEndcard(100);
        }
    }

    private class e extends c.a {
        private e() {
        }

        @Override // com.mbridge.msdk.video.js.a.c.a, com.mbridge.msdk.video.js.c.a
        public final void a() {
            super.a();
            MBTempContainer.this.receiveSuccess();
        }

        @Override // com.mbridge.msdk.video.js.a.c.a, com.mbridge.msdk.out.BaseTrackingListener
        public final void onStartRedirection(Campaign campaign, String str) {
            super.onStartRedirection(campaign, str);
            MBTempContainer.M(MBTempContainer.this);
            if (MBTempContainer.this.ar) {
                MBTempContainer.this.onPause();
            }
        }

        @Override // com.mbridge.msdk.video.js.a.c.a, com.mbridge.msdk.out.BaseTrackingListener
        public final void onFinishRedirection(Campaign campaign, String str) {
            super.onFinishRedirection(campaign, str);
            MBTempContainer.this.ai = true;
            MBTempContainer.O(MBTempContainer.this);
            if (campaign != null && (campaign instanceof CampaignEx)) {
                try {
                    CampaignEx campaignEx = (CampaignEx) campaign;
                    String strOptString = new JSONObject(MBTempContainer.this.getJSVideoModule().getCurrentProgress()).optString(NotificationCompat.CATEGORY_PROGRESS, "");
                    if (campaignEx.getLinkType() == 3 && campaignEx.getEndcard_click_result() == 2 && strOptString.equals("1.0") && MBTempContainer.this.j != null) {
                        if (!MBTempContainer.this.w) {
                            MBTempContainer.this.j.finish();
                        } else {
                            MBTempContainer.m(MBTempContainer.this);
                        }
                    }
                } catch (JSONException e) {
                    e.printStackTrace();
                }
            }
            if (MBTempContainer.this.ar) {
                MBTempContainer.this.onResume();
            }
        }

        @Override // com.mbridge.msdk.video.js.a.c.a, com.mbridge.msdk.out.BaseTrackingListener
        public final void onRedirectionFailed(Campaign campaign, String str) {
            super.onRedirectionFailed(campaign, str);
            MBTempContainer.O(MBTempContainer.this);
            MBTempContainer.this.ai = true;
        }

        @Override // com.mbridge.msdk.video.js.a.c.a, com.mbridge.msdk.video.js.c.a
        public final void a(boolean z) {
            super.a(z);
            MBTempContainer.this.C.a(z, MBTempContainer.this.l, MBTempContainer.this.k);
        }

        @Override // com.mbridge.msdk.video.js.a.c.a, com.mbridge.msdk.video.js.c.a
        public final void a(int i, String str) {
            super.a(i, str);
            MBTempContainer.this.defaultLoad(i, str);
        }

        @Override // com.mbridge.msdk.video.js.a.c.a, com.mbridge.msdk.video.js.c.a
        public final void b() {
            super.b();
            if (MBTempContainer.this.g != null) {
                MBTempContainer.this.g.removeCallbacks(MBTempContainer.this.h);
            }
        }
    }

    public void setCampaign(CampaignEx campaignEx) {
        this.A = campaignEx;
        if (campaignEx != null) {
            if (TextUtils.isEmpty(campaignEx.getCampaignUnitId()) && !TextUtils.isEmpty(this.k)) {
                campaignEx.setCampaignUnitId(this.k);
            }
            AppletsModel appletsModel = AppletModelManager.getInstance().get(campaignEx);
            if (appletsModel != null) {
                this.ar = appletsModel.isSupportWxScheme();
            }
            com.mbridge.msdk.foundation.b.b.a().a(campaignEx.getCampaignUnitId() + "_1", campaignEx);
        }
    }

    public CampaignEx getCampaign() {
        return this.A;
    }

    public void setCampaignExpired(boolean z) {
        try {
            if (this.A != null) {
                if (z) {
                    this.A.setSpareOfferFlag(1);
                    if (this.s) {
                        this.A.setCbt(0);
                    } else if (this.m != null) {
                        if (this.m.C() == 1) {
                            this.A.setCbt(1);
                        } else {
                            this.A.setCbt(0);
                        }
                    }
                } else {
                    this.A.setSpareOfferFlag(0);
                    if (this.A.isBidCampaign()) {
                        this.A.setCbt(0);
                    } else if (this.m != null) {
                        this.A.setCbt(this.m.d());
                    }
                }
            }
        } catch (Exception e2) {
            z.d(y, e2.getMessage());
        }
    }

    public void setCampaignDownLoadTask(com.mbridge.msdk.videocommon.download.a aVar) {
        this.B = aVar;
    }

    public void setShowRewardListener(h hVar) {
        this.C = hVar;
    }

    public void setMBridgeTempCallback(com.mbridge.msdk.video.bt.module.a.c cVar) {
        this.D = cVar;
    }

    public void setCamPlayOrderCallback(com.mbridge.msdk.video.dynview.e.a aVar, int i) {
        this.E = aVar;
        this.F = i;
    }

    public void setJSFactory(com.mbridge.msdk.video.js.factory.b bVar) {
        this.H = bVar;
    }

    public void setInstanceId(String str) {
        this.G = str;
    }

    public String getInstanceId() {
        return this.G;
    }

    public void setH5Cbp(int i) {
        this.ab = i;
    }

    public void setWebViewFront(int i) {
        this.aa = i;
    }

    public void notifyEvent(String str) {
        WindVaneWebView windVaneWebView = this.d;
        if (windVaneWebView != null) {
            com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) windVaneWebView, str, Base64.encodeToString(this.G.getBytes(), 2));
        }
    }

    public void setNotchPadding(int i, int i2, int i3, int i4, int i5) {
        this.M = i;
        this.N = i2;
        this.O = i3;
        this.P = i4;
        this.Q = i5;
        String strA = m.a(i, i2, i3, i4, i5);
        this.R = strA;
        z.d(y, strA);
        if (getJSCommon() != null && !TextUtils.isEmpty(this.R)) {
            getJSCommon().b(this.R);
            if (this.d != null && !TextUtils.isEmpty(this.R)) {
                com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) this.d, "oncutoutfetched", Base64.encodeToString(this.R.getBytes(), 0));
            }
        }
        MBridgeVideoView mBridgeVideoView = this.e;
        if (mBridgeVideoView != null) {
            mBridgeVideoView.setNotchPadding(i2, i3, i4, i5);
        }
        MBridgeContainerView mBridgeContainerView = this.f;
        if (mBridgeContainerView != null) {
            mBridgeContainerView.setNotchPadding(i, i2, i3, i4, i5);
        }
    }

    public void setDeveloperExtraData(String str) {
        this.S = str;
    }

    private static final class b extends AppletSchemeCallBack {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private CampaignEx f4093a;

        public b(CampaignEx campaignEx) {
            this.f4093a = campaignEx;
        }

        @Override // com.mbridge.msdk.scheme.applet.AppletSchemeCallBack
        protected final void onRequestStart() {
            if (MBridgeConstans.DEBUG) {
                z.a(MBTempContainer.y, "start request wx scheme");
            }
        }

        @Override // com.mbridge.msdk.scheme.applet.AppletSchemeCallBack
        protected final void onRequestSuccess(String str) {
            if (MBridgeConstans.DEBUG) {
                z.a(MBTempContainer.y, "request wx scheme success: " + str);
            }
            try {
                if (this.f4093a != null) {
                    this.f4093a.setDeepLinkUrl(str);
                }
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    z.d(MBTempContainer.y, e.getMessage());
                }
            }
        }

        @Override // com.mbridge.msdk.scheme.applet.AppletSchemeCallBack
        protected final void onRequestFailed(int i, String str, String str2) {
            if (MBridgeConstans.DEBUG) {
                z.a(MBTempContainer.y, "request wx scheme failed: errorCode: " + i + " errorMessage: " + str);
            }
            try {
                if (this.f4093a != null) {
                    this.f4093a.setClickURL(str2);
                }
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    z.d(MBTempContainer.y, e.getMessage());
                }
            }
        }
    }

    public void loadModuleDatas() {
        int iG;
        int iP;
        int i;
        j jVarB = b(this.A);
        int iL = jVarB != null ? jVarB.l() : 0;
        if (iL != 0) {
            this.q = iL;
        }
        int iH = this.m.h();
        int iC = c();
        int i2 = iC != 0 ? iC : iH;
        this.e.setSoundState(this.q);
        this.e.setCampaign(this.A);
        this.e.setPlayURL(this.B.n());
        CampaignEx campaignEx = this.A;
        if (campaignEx != null && campaignEx.getVst() > -2) {
            iG = this.A.getVst();
        } else {
            iG = this.m.g();
        }
        if (this.A.getDynamicTempCode() == 5 && (i = this.F) > 1) {
            iG = a(iG, i);
            this.A.setVst(iG);
        }
        this.e.setVideoSkipTime(iG);
        this.e.setCloseAlert(this.m.k());
        this.e.setBufferTimeout(h());
        int i3 = iG;
        this.e.setNotifyListener(new com.mbridge.msdk.video.module.a.a.m(this.H, this.A, this.o, this.B, b(), this.k, i2, iG, new f(), this.m.C(), this.w, this.m.I()));
        this.e.setShowingTransparent(this.ah);
        this.e.setAdSession(this.ao);
        if (this.r && (this.t == com.mbridge.msdk.foundation.same.a.w || this.t == com.mbridge.msdk.foundation.same.a.x)) {
            this.e.setIVRewardEnable(this.t, this.u, this.v);
            this.e.setDialogRole(getJSCommon() != null ? getJSCommon().i() : 1);
        }
        this.f.setCampaign(this.A);
        this.f.addOrderViewData(this.T);
        this.f.setUnitID(this.k);
        if (this.A.getCbd() > -2) {
            iP = this.A.getCbd();
        } else {
            iP = this.m.p();
        }
        this.f.setCloseDelayTime(iP);
        this.f.setPlayCloseBtnTm(this.m.j());
        this.f.setVideoInteractiveType(this.m.i());
        this.f.setEndscreenType(this.m.q());
        this.f.setVideoSkipTime(i3);
        this.f.setShowingTransparent(this.ah);
        this.f.setJSFactory(this.H);
        if (this.A.getPlayable_ads_without_video() == 2) {
            this.f.setNotifyListener(new g(this.A, this.B, this.o, b(), this.k, new d(), this.m.C(), this.w));
            this.f.preLoadData(this.H);
            this.f.showPlayableView();
        } else {
            this.f.setNotifyListener(new com.mbridge.msdk.video.module.a.a.b(this.H, this.A, this.o, this.B, b(), this.k, new c(this.j, this.A), this.m.C(), this.w));
            this.f.preLoadData(this.H);
            this.e.preLoadData(this.H);
        }
        if (this.ah) {
            this.f.setMBridgeClickMiniCardViewTransparent();
        }
    }

    static /* synthetic */ void m(MBTempContainer mBTempContainer) {
        try {
            if (mBTempContainer.D != null) {
                if (mBTempContainer.r && (mBTempContainer.t == com.mbridge.msdk.foundation.same.a.w || mBTempContainer.t == com.mbridge.msdk.foundation.same.a.x)) {
                    com.mbridge.msdk.video.bt.module.a.c cVar = mBTempContainer.D;
                    boolean z = true;
                    if (mBTempContainer.J != 1) {
                        z = false;
                    }
                    cVar.a(z, mBTempContainer.I);
                }
                mBTempContainer.D.a(mBTempContainer.G, mBTempContainer.ae, mBTempContainer.o);
                return;
            }
            if (mBTempContainer.j != null) {
                mBTempContainer.j.finish();
            }
        } catch (Exception unused) {
            if (mBTempContainer.j != null) {
                mBTempContainer.j.finish();
            }
        }
    }

    static /* synthetic */ void M(MBTempContainer mBTempContainer) {
        if (mBTempContainer.isLoadSuccess()) {
            mBTempContainer.j.runOnUiThread(new Runnable() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.8
                @Override // java.lang.Runnable
                public final void run() {
                    MBTempContainer.this.ac.setBackgroundColor(0);
                    MBTempContainer.this.ac.setVisibility(0);
                    MBTempContainer.this.ac.bringToFront();
                }
            });
        }
    }

    static /* synthetic */ void O(MBTempContainer mBTempContainer) {
        if (mBTempContainer.isLoadSuccess()) {
            mBTempContainer.j.runOnUiThread(new Runnable() { // from class: com.mbridge.msdk.video.bt.module.MBTempContainer.9
                @Override // java.lang.Runnable
                public final void run() {
                    MBTempContainer.this.ac.setVisibility(8);
                }
            });
        }
    }
}
