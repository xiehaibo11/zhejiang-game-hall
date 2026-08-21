package com.mbridge.msdk.mbbanner.common.c;

import android.content.Context;
import android.graphics.Bitmap;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.util.Base64;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.iab.omid.library.mmadbridge.ScriptInjector;
import com.iab.omid.library.mmadbridge.adsession.AdEvents;
import com.iab.omid.library.mmadbridge.adsession.AdSession;
import com.iab.omid.library.mmadbridge.adsession.FriendlyObstructionPurpose;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.download.download.HTMLResourceManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.same.report.d;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.am;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;
import com.mbridge.msdk.mbbanner.common.b.e;
import com.mbridge.msdk.mbbanner.common.util.BannerUtils;
import com.mbridge.msdk.mbbanner.view.MBBannerWebView;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.MBBannerView;
import com.mbridge.msdk.out.NativeListener;
import com.mbridge.msdk.widget.FeedBackButton;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.foundation.g.a.f;
import java.io.File;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: compiled from: BannerShowManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class c {
    private static String b = "BannerShowManager";
    private float A;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    com.mbridge.msdk.click.b f3625a;
    private com.mbridge.msdk.mbbanner.common.b.c c;
    private boolean d;
    private CampaignEx e;
    private MBBannerView f;
    private ImageView g;
    private MBBannerWebView h;
    private ImageView i;
    private boolean j;
    private boolean k;
    private boolean l;
    private boolean m;
    private boolean n;
    private boolean o;
    private boolean p;
    private String q;
    private String r;
    private List<CampaignEx> s;
    private int t;
    private com.mbridge.msdk.mbbanner.common.bridge.a v;
    private AdSession w;
    private float z;
    private long u = MBInterstitialActivity.WEB_LOAD_TIME;
    private Handler x = new Handler(Looper.getMainLooper()) { // from class: com.mbridge.msdk.mbbanner.common.c.c.1
        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            super.handleMessage(message);
            if (message.what != 1) {
                return;
            }
            try {
                if (c.this.w != null) {
                    AdEvents.createAdEvents(c.this.w).impressionOccurred();
                    c.this.w.finish();
                    c.this.w = null;
                }
            } catch (Throwable th) {
                z.a(c.b, th.getMessage());
            }
        }
    };
    private com.mbridge.msdk.foundation.same.e.a y = new com.mbridge.msdk.foundation.same.e.a() { // from class: com.mbridge.msdk.mbbanner.common.c.c.6
        @Override // com.mbridge.msdk.foundation.same.e.a
        public final void cancelTask() {
        }

        @Override // com.mbridge.msdk.foundation.same.e.a
        public final void pauseTask(boolean z) {
        }

        @Override // com.mbridge.msdk.foundation.same.e.a
        public final void runTask() {
            c.this.a(com.tkay.expressad.mbbanner.a.a.n);
        }
    };
    private View.OnClickListener B = new View.OnClickListener() { // from class: com.mbridge.msdk.mbbanner.common.c.c.7
        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            if (c.this.p) {
                c.c(c.this);
            }
        }
    };
    private com.mbridge.msdk.mbbanner.common.b.a C = new com.mbridge.msdk.mbbanner.common.b.a() { // from class: com.mbridge.msdk.mbbanner.common.c.c.8
        @Override // com.mbridge.msdk.mbbanner.common.b.a
        public final void a(int i) {
            if (i != 2) {
                c.this.g();
            } else {
                c.d(c.this);
            }
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.a
        public final void a(String str) {
            c.c(c.this);
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.a
        public final void a() {
            c.c(c.this);
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.a
        public final void b(int i) {
            if (i == 1) {
                c.this.e();
                c.this.a("", 1);
            } else {
                c.this.d();
            }
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.a
        public final void a(CampaignEx campaignEx) {
            c.this.a(campaignEx, false, "");
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.a
        public final void a(boolean z) {
            if (c.this.c != null) {
                c.this.o = z;
                if (z) {
                    c.this.c.c();
                } else {
                    c.this.c.d();
                }
            }
        }

        @Override // com.mbridge.msdk.mbbanner.common.b.a
        public final void a(boolean z, String str) {
            try {
                if (c.this.c != null) {
                    if (TextUtils.isEmpty(str)) {
                        c.this.c.a();
                        c.this.c.b();
                    } else {
                        CampaignEx campaignWithBackData = CampaignEx.parseCampaignWithBackData(CampaignEx.campaignToJsonObject(c.this.e));
                        campaignWithBackData.setClickURL(str);
                        c.this.a(campaignWithBackData, z, str);
                    }
                }
            } catch (Exception e) {
                z.d(c.b, e.getMessage());
            }
        }
    };
    private com.mbridge.msdk.mbjscommon.c.b D = new com.mbridge.msdk.mbjscommon.c.b() { // from class: com.mbridge.msdk.mbbanner.common.c.c.4
        @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
        public final void a(WebView webView, String str) {
            c.this.l = true;
            z.d("WindVaneWebView", "BANNER onPageFinished");
            z.d("BannerCallJS", "fireOnJSBridgeConnected");
            h.a().a(webView);
            c.this.n = true;
            try {
                if (c.this.e != null && c.this.e.isActiveOm()) {
                    c.this.w = com.mbridge.msdk.a.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), webView, webView.getUrl(), c.this.e);
                    if (c.this.w != null) {
                        try {
                            c.this.w.registerAdView(webView);
                            if (c.this.i != null) {
                                try {
                                    c.this.w.addFriendlyObstruction(c.this.i, FriendlyObstructionPurpose.OTHER, null);
                                } catch (RuntimeException unused) {
                                }
                            }
                            if (c.this.g != null) {
                                try {
                                    c.this.w.addFriendlyObstruction(c.this.g, FriendlyObstructionPurpose.OTHER, null);
                                } catch (RuntimeException unused2) {
                                }
                            }
                            c.this.w.start();
                        } catch (Exception e) {
                            z.a("OMSDK", e.getMessage());
                        }
                        z.a("OMSDK", "adSession.start()");
                    } else if (c.this.e != null) {
                        new d(com.mbridge.msdk.foundation.controller.a.f().j()).a(c.this.e.getRequestId(), c.this.e.getRequestIdNotice(), c.this.e.getId(), c.this.q, "fetch OM failed, context null");
                    }
                }
            } catch (Exception e2) {
                z.a("OMSDK", e2.getMessage());
                if (c.this.e != null) {
                    new d(com.mbridge.msdk.foundation.controller.a.f().j()).a(c.this.e.getRequestId(), c.this.e.getRequestIdNotice(), c.this.e.getId(), c.this.q, "fetch OM failed, context null");
                }
            }
            if (c.this.e == null || c.this.e.isHasMBTplMark()) {
                return;
            }
            c.this.e();
            c.this.a("", 1);
        }

        @Override // com.mbridge.msdk.mbjscommon.c.b, com.mbridge.msdk.mbjscommon.windvane.d
        public final void a(WebView webView, int i, String str, String str2) {
            c.this.a(str);
            c.this.a(str, 2);
        }
    };

    public c(MBBannerView mBBannerView, com.mbridge.msdk.mbbanner.common.b.c cVar, String str, String str2, boolean z, com.mbridge.msdk.c.d dVar) {
        this.d = z;
        this.f = mBBannerView;
        this.q = str2;
        this.r = str;
        this.c = new e(cVar, dVar);
    }

    public final void a(boolean z, int i) {
        this.t = i;
        if (i == 0) {
            com.mbridge.msdk.c.d dVarE = com.mbridge.msdk.c.b.a().e(com.mbridge.msdk.foundation.controller.a.f().k(), this.q);
            if (dVarE == null) {
                return;
            } else {
                z = dVarE.c() == 1;
            }
        }
        this.d = z;
    }

    public final void a(boolean z) {
        this.d = z;
    }

    private boolean c() {
        String strA = a(this.e);
        if (TextUtils.isEmpty(strA)) {
            return false;
        }
        if (this.f != null) {
            if (this.h == null) {
                try {
                    MBBannerWebView mBBannerWebView = new MBBannerWebView(com.mbridge.msdk.foundation.controller.a.f().j());
                    this.h = mBBannerWebView;
                    mBBannerWebView.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
                    this.h.setWebViewClient(new com.mbridge.msdk.mbbanner.view.a(this.q, this.s, this.C));
                } catch (Throwable unused) {
                    a("banner show failed because WebView is not available and try to show default", 1);
                    return false;
                }
            }
            ImageView imageView = this.g;
            if (imageView != null) {
                imageView.setVisibility(8);
            }
            if (this.h.getVisibility() != 0) {
                this.h.setVisibility(0);
            }
            if (this.h.getParent() == null) {
                this.f.addView(this.h);
                d(this.e.isMraid());
            }
            g();
            com.mbridge.msdk.mbbanner.common.bridge.a aVar = new com.mbridge.msdk.mbbanner.common.bridge.a(this.f.getContext(), this.r, this.q);
            this.v = aVar;
            aVar.a(this.s);
            this.v.a(this.C);
            this.v.a(this.t);
            this.h.setWebViewListener(this.D);
            this.h.setObject(this.v);
            if (!strA.startsWith(com.sigmob.sdk.base.h.x)) {
                if (this.e.isActiveOm()) {
                    strA = com.mbridge.msdk.a.b.a(strA);
                }
                this.h.loadDataWithBaseURL(this.e.getBannerUrl(), strA, "text/html", "utf-8", null);
            } else {
                this.h.loadUrl(strA);
            }
        } else {
            a(com.tkay.expressad.mbbanner.a.a.l, 2);
            a(com.tkay.expressad.mbbanner.a.a.i);
        }
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void d() {
        if (this.f != null) {
            MBBannerWebView mBBannerWebView = this.h;
            if (mBBannerWebView != null && mBBannerWebView.getParent() != null) {
                this.f.removeView(this.h);
            }
            if (this.g == null) {
                ImageView imageView = new ImageView(com.mbridge.msdk.foundation.controller.a.f().j());
                this.g = imageView;
                imageView.setOnTouchListener(new View.OnTouchListener() { // from class: com.mbridge.msdk.mbbanner.common.c.c.9
                    @Override // android.view.View.OnTouchListener
                    public final boolean onTouch(View view, MotionEvent motionEvent) {
                        c.this.z = motionEvent.getRawX();
                        c.this.A = motionEvent.getRawY();
                        z.d(c.b, c.this.z + "  " + c.this.A);
                        return false;
                    }
                });
                this.g.setOnClickListener(new View.OnClickListener() { // from class: com.mbridge.msdk.mbbanner.common.c.c.10
                    @Override // android.view.View.OnClickListener
                    public final void onClick(View view) {
                        c.this.a(BannerUtils.managerCampaignEX(com.mbridge.msdk.mbjscommon.bridge.b.a(c.this.z, c.this.A), c.this.e), false, "");
                    }
                });
            }
            String imageUrl = this.e.getImageUrl();
            if (!TextUtils.isEmpty(imageUrl)) {
                com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(imageUrl, new com.mbridge.msdk.foundation.same.c.c() { // from class: com.mbridge.msdk.mbbanner.common.c.c.11
                    @Override // com.mbridge.msdk.foundation.same.c.c
                    public final void onSuccessLoad(Bitmap bitmap, String str) {
                        if (c.this.g != null) {
                            c.this.g.setImageBitmap(bitmap);
                        }
                        c.this.l = true;
                        c.m(c.this);
                        c.this.g();
                        c.this.e();
                    }

                    @Override // com.mbridge.msdk.foundation.same.c.c
                    public final void onFailedLoad(String str, String str2) {
                        c.this.a(com.tkay.expressad.mbbanner.a.a.j);
                    }
                });
                return;
            } else {
                a(com.tkay.expressad.mbbanner.a.a.h);
                return;
            }
        }
        a(com.tkay.expressad.mbbanner.a.a.i);
    }

    private String a(CampaignEx campaignEx) {
        String strInjectScriptContentIntoHtml;
        if (campaignEx == null) {
            return "";
        }
        String htmlContentFromUrl = HTMLResourceManager.getInstance().getHtmlContentFromUrl(campaignEx.getBannerUrl());
        if (TextUtils.isEmpty(htmlContentFromUrl)) {
            String bannerHtml = campaignEx.getBannerHtml();
            if (campaignEx.isActiveOm()) {
                try {
                    File file = new File(bannerHtml);
                    strInjectScriptContentIntoHtml = ScriptInjector.injectScriptContentIntoHtml(MBridgeConstans.OMID_JS_SERVICE_CONTENT, file.exists() ? x.a(file) : "");
                } catch (Exception unused) {
                    File file2 = new File(bannerHtml);
                    if (file2.exists() && file2.isFile() && file2.canRead()) {
                        strInjectScriptContentIntoHtml = "file:////" + bannerHtml;
                    }
                    return bannerHtml;
                }
                return strInjectScriptContentIntoHtml;
            }
            File file3 = new File(bannerHtml);
            if (file3.exists() && file3.isFile() && file3.canRead()) {
                strInjectScriptContentIntoHtml = "file:////" + bannerHtml;
                return strInjectScriptContentIntoHtml;
            }
            return bannerHtml;
        }
        return ScriptInjector.injectScriptContentIntoHtml(MBridgeConstans.OMID_JS_SERVICE_CONTENT, htmlContentFromUrl);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str) {
        if (this.e == null || f()) {
            return;
        }
        this.x.removeCallbacks(this.y);
        com.mbridge.msdk.mbbanner.common.b.c cVar = this.c;
        if (cVar != null) {
            cVar.a(str);
        }
        com.mbridge.msdk.foundation.same.report.e.b(com.mbridge.msdk.foundation.controller.a.f().j(), this.e, this.q, str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void e() {
        boolean z;
        MBBannerView mBBannerView;
        c cVar = this;
        if (cVar.l && !cVar.m && cVar.c != null) {
            cVar.m = true;
            cVar.x.removeCallbacks(cVar.y);
            CampaignEx campaignEx = cVar.e;
            if (campaignEx != null && !campaignEx.isCallbacked()) {
                cVar.e.setCallbacked(true);
                cVar.c.a(cVar.s);
            }
        }
        if (cVar.l && cVar.j && cVar.k && cVar.m && cVar.e != null && !f()) {
            MBBannerView mBBannerView2 = cVar.f;
            boolean z2 = (mBBannerView2 == null || am.a(mBBannerView2) || cVar.o) ? false : true;
            if (!z2 && (mBBannerView = cVar.f) != null) {
                mBBannerView.postDelayed(new Runnable() { // from class: com.mbridge.msdk.mbbanner.common.c.c.12
                    @Override // java.lang.Runnable
                    public final void run() {
                        c.this.e();
                    }
                }, 1000L);
            }
            if (cVar.n && z2) {
                z.d(b, "onBannerWebViewShow && transInfoToMraid");
                int[] iArr = new int[2];
                cVar.f.getLocationInWindow(iArr);
                MBBannerWebView mBBannerWebView = cVar.h;
                float f = iArr[0];
                float f2 = iArr[1];
                z.d("BannerCallJS", "fireOnBannerWebViewShow");
                try {
                    JSONObject jSONObject = new JSONObject();
                    jSONObject.put("startX", f);
                    jSONObject.put("startY", f2);
                    jSONObject.put("scale", ae.d(com.mbridge.msdk.foundation.controller.a.f().j()));
                    h.a().a((WebView) mBBannerWebView, "webviewshow", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                } catch (Throwable th) {
                    z.c("BannerCallJS", "fireOnBannerWebViewShow", th);
                }
                MBBannerWebView mBBannerWebView2 = cVar.h;
                int i = iArr[0];
                int i2 = iArr[1];
                int width = cVar.f.getWidth();
                int height = cVar.f.getHeight();
                z.d("BannerCallJS", "transInfoForMraid");
                try {
                    int i3 = com.mbridge.msdk.foundation.controller.a.f().j().getResources().getConfiguration().orientation;
                    JSONObject jSONObject2 = new JSONObject();
                    jSONObject2.put("orientation", i3 == 2 ? "landscape" : i3 == 1 ? "portrait" : "undefined");
                    jSONObject2.put("locked", "true");
                    float fX = v.x(com.mbridge.msdk.foundation.controller.a.f().j());
                    float fY = v.y(com.mbridge.msdk.foundation.controller.a.f().j());
                    HashMap mapZ = v.z(com.mbridge.msdk.foundation.controller.a.f().j());
                    int iIntValue = ((Integer) mapZ.get("width")).intValue();
                    int iIntValue2 = ((Integer) mapZ.get("height")).intValue();
                    HashMap map = new HashMap();
                    z = z2;
                    try {
                        map.put(CallMraidJS.f6428a, CallMraidJS.k);
                        map.put(CallMraidJS.b, "default");
                        map.put(CallMraidJS.c, "true");
                        map.put(CallMraidJS.d, jSONObject2);
                        float f3 = i;
                        float f4 = i2;
                        float f5 = width;
                        float f6 = height;
                        com.mbridge.msdk.mbjscommon.mraid.a.a().a(mBBannerWebView2, f3, f4, f5, f6);
                        com.mbridge.msdk.mbjscommon.mraid.a.a().b(mBBannerWebView2, f3, f4, f5, f6);
                        com.mbridge.msdk.mbjscommon.mraid.a.a().b(mBBannerWebView2, fX, fY);
                        com.mbridge.msdk.mbjscommon.mraid.a.a().c(mBBannerWebView2, iIntValue, iIntValue2);
                        com.mbridge.msdk.mbjscommon.mraid.a.a().a(mBBannerWebView2, map);
                        com.mbridge.msdk.mbjscommon.mraid.a.a().a(mBBannerWebView2);
                    } catch (Throwable th2) {
                        th = th2;
                        z.c("BannerCallJS", "transInfoForMraid", th);
                    }
                } catch (Throwable th3) {
                    th = th3;
                    z = z2;
                }
                cVar = this;
                cVar.n = false;
                if (!TextUtils.isEmpty(cVar.e.getImageUrl())) {
                    com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).c(cVar.e.getImageUrl());
                }
            } else {
                z = z2;
            }
            z.d(b, "showSuccessed:" + cVar.e.getId());
            if (z) {
                ImageView imageView = cVar.g;
                if (imageView != null && imageView.getVisibility() == 0) {
                    CampaignEx campaignEx2 = cVar.e;
                    if (campaignEx2 != null) {
                        if (campaignEx2 != null) {
                            cVar.c(campaignEx2, com.mbridge.msdk.foundation.controller.a.f().j(), cVar.q);
                            cVar.b(campaignEx2, com.mbridge.msdk.foundation.controller.a.f().j(), cVar.q);
                            cVar.a(campaignEx2, com.mbridge.msdk.foundation.controller.a.f().j(), cVar.q);
                        }
                        cVar.e.setReport(true);
                        com.mbridge.msdk.foundation.same.a.d.a(cVar.q, cVar.e, f.e);
                    }
                } else {
                    List<CampaignEx> list = cVar.s;
                    if (list != null && list.size() > 0) {
                        boolean z3 = false;
                        int i4 = 0;
                        for (int i5 = 0; i5 < cVar.s.size(); i5++) {
                            if (!cVar.s.get(i5).isHasMBTplMark() && (i5 == 0 || !cVar.s.get(i5).isReport())) {
                                cVar.c(cVar.s.get(i5), com.mbridge.msdk.foundation.controller.a.f().j(), cVar.q);
                                cVar.s.get(i5).setReport(true);
                                com.mbridge.msdk.foundation.same.a.d.a(cVar.q, cVar.s.get(i5), f.e);
                                i4 = i5;
                                z3 = true;
                            }
                        }
                        if (z3) {
                            cVar.b(cVar.s.get(i4), com.mbridge.msdk.foundation.controller.a.f().j(), cVar.q);
                            cVar.a(cVar.s.get(i4), com.mbridge.msdk.foundation.controller.a.f().j(), cVar.q);
                        }
                    }
                }
                cVar.p = true;
                com.mbridge.msdk.mbbanner.common.b.c cVar2 = cVar.c;
                if (cVar2 != null) {
                    cVar2.a(cVar.e, false);
                }
                cVar.x.sendEmptyMessageDelayed(1, 1000L);
                com.mbridge.msdk.foundation.same.report.e.a(com.mbridge.msdk.foundation.controller.a.f().j(), cVar.e, cVar.q, "");
                return;
            }
            cVar.e.setReport(false);
        }
    }

    private synchronized boolean f() {
        boolean zIsReport;
        zIsReport = this.e.isReport();
        if (!zIsReport) {
            this.e.setReport(true);
        }
        return zIsReport;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void g() {
        ImageView imageView;
        if (!this.d || (imageView = this.i) == null) {
            return;
        }
        if (imageView.getVisibility() != 0) {
            this.i.setVisibility(0);
            this.i.setOnClickListener(this.B);
        }
        if (this.i.getParent() != null || this.f == null) {
            return;
        }
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 12.0f), ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 12.0f));
        layoutParams.addRule(11);
        layoutParams.addRule(10);
        this.f.addView(this.i, layoutParams);
    }

    public final void a() {
        AdSession adSession = this.w;
        if (adSession != null) {
            adSession.finish();
            this.w = null;
            z.a("omsdk", " adSession.finish() ");
        }
        if (this.c != null) {
            this.c = null;
        }
        MBBannerWebView mBBannerWebView = this.h;
        if (mBBannerWebView != null) {
            mBBannerWebView.setWebViewListener(null);
        }
        if (this.D != null) {
            this.D = null;
        }
        ImageView imageView = this.i;
        if (imageView != null) {
            imageView.setOnClickListener(null);
        }
        ImageView imageView2 = this.g;
        if (imageView2 != null) {
            imageView2.setOnClickListener(null);
        }
        MBBannerView mBBannerView = this.f;
        if (mBBannerView != null) {
            mBBannerView.removeAllViews();
        }
        MBBannerWebView mBBannerWebView2 = this.h;
        if (mBBannerWebView2 != null) {
            mBBannerWebView2.release();
        }
        com.mbridge.msdk.mbbanner.common.bridge.a aVar = this.v;
        if (aVar != null) {
            aVar.a();
        }
        if (this.C != null) {
            this.C = null;
        }
        com.mbridge.msdk.foundation.b.b.a().c(this.q);
    }

    public final void b(boolean z) {
        this.j = z;
        e();
        if (z) {
            return;
        }
        CampaignEx campaignEx = this.e;
        String str = this.q;
        if (campaignEx != null) {
            String strA = com.mbridge.msdk.mbjscommon.mraid.c.a(campaignEx.getId());
            if (TextUtils.isEmpty(strA)) {
                return;
            }
            new d(com.mbridge.msdk.foundation.controller.a.f().j()).a(campaignEx.getRequestId(), campaignEx.getRequestIdNotice(), campaignEx.getId(), str, strA, campaignEx.isBidCampaign());
            com.mbridge.msdk.mbjscommon.mraid.c.b(campaignEx.getId());
        }
    }

    public final void c(boolean z) {
        this.k = z;
        e();
    }

    private void a(CampaignEx campaignEx, Context context, String str) {
        if (campaignEx != null) {
            try {
                List<String> pv_urls = campaignEx.getPv_urls();
                if (pv_urls == null || pv_urls.size() <= 0) {
                    return;
                }
                Iterator<String> it = pv_urls.iterator();
                while (it.hasNext()) {
                    com.mbridge.msdk.click.b.a(context, campaignEx, str, it.next(), false, true);
                }
            } catch (Throwable th) {
                z.d(b, th.getMessage());
            }
        }
    }

    private void b(CampaignEx campaignEx, Context context, String str) {
        if (campaignEx != null) {
            try {
                if (TextUtils.isEmpty(campaignEx.getOnlyImpressionURL())) {
                    return;
                }
                com.mbridge.msdk.click.b.a(context, campaignEx, str, campaignEx.getOnlyImpressionURL(), false, true, com.mbridge.msdk.click.a.a.h);
            } catch (Throwable th) {
                z.d(b, th.getMessage());
            }
        }
    }

    private void c(final CampaignEx campaignEx, final Context context, String str) {
        if (!TextUtils.isEmpty(campaignEx.getImpressionURL())) {
            new Thread(new Runnable() { // from class: com.mbridge.msdk.mbbanner.common.c.c.13
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        l.a(i.a(context)).b(campaignEx.getId());
                    } catch (Exception unused) {
                        z.d(c.b, "campain can't insert db");
                    }
                }
            }).start();
            com.mbridge.msdk.click.b.a(context, campaignEx, str, campaignEx.getImpressionURL(), false, true, com.mbridge.msdk.click.a.a.g);
        }
        if (TextUtils.isEmpty(str) || campaignEx.getNativeVideoTracking() == null || campaignEx.getNativeVideoTracking().l() == null) {
            return;
        }
        com.mbridge.msdk.click.b.a(context, campaignEx, str, campaignEx.getNativeVideoTracking().l(), false, false);
    }

    public final void a(final CampaignEx campaignEx, final boolean z, final String str) {
        if (this.p) {
            if (this.f3625a == null) {
                this.f3625a = new com.mbridge.msdk.click.b(com.mbridge.msdk.foundation.controller.a.f().j(), this.q);
            }
            this.f3625a.a(new NativeListener.TrackingExListener() { // from class: com.mbridge.msdk.mbbanner.common.c.c.2
                @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
                public final void onDismissLoading(Campaign campaign) {
                }

                @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
                public final void onDownloadFinish(Campaign campaign) {
                }

                @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
                public final void onDownloadProgress(int i) {
                }

                @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
                public final void onDownloadStart(Campaign campaign) {
                }

                @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
                public final boolean onInterceptDefaultLoadingDialog() {
                    return false;
                }

                @Override // com.mbridge.msdk.out.NativeListener.NativeTrackingListener
                public final void onShowLoading(Campaign campaign) {
                }

                @Override // com.mbridge.msdk.out.BaseTrackingListener
                public final void onStartRedirection(Campaign campaign, String str2) {
                    ad.a(campaign, c.this.f);
                }

                @Override // com.mbridge.msdk.out.BaseTrackingListener
                public final void onFinishRedirection(Campaign campaign, String str2) {
                    if (campaign == null) {
                        return;
                    }
                    CampaignEx campaignEx2 = (CampaignEx) campaign;
                    if (campaignEx2.getLinkType() == 8 && campaignEx2.getAabEntity().getHlp() == 1) {
                        ad.a(c.this.f);
                    }
                }

                @Override // com.mbridge.msdk.out.BaseTrackingListener
                public final void onRedirectionFailed(Campaign campaign, String str2) {
                    if (campaign == null) {
                        return;
                    }
                    CampaignEx campaignEx2 = (CampaignEx) campaign;
                    if (campaignEx2.getLinkType() == 8 && campaignEx2.getAabEntity().getHlp() == 1) {
                        ad.a(c.this.f);
                    }
                }

                @Override // com.mbridge.msdk.out.NativeListener.TrackingExListener
                public final void onLeaveApp() {
                    if (c.this.c != null) {
                        c.this.c.b();
                    }
                }
            });
            if (campaignEx != null) {
                try {
                    if (campaignEx.needShowIDialog()) {
                        campaignEx.setCampaignUnitId(this.q);
                        com.mbridge.msdk.widget.dialog.a aVar = new com.mbridge.msdk.widget.dialog.a() { // from class: com.mbridge.msdk.mbbanner.common.c.c.3
                            @Override // com.mbridge.msdk.widget.dialog.a
                            public final void a() {
                                c.this.f3625a.c(campaignEx);
                                if (!c.this.e.isReportClick()) {
                                    c.this.e.setReportClick(true);
                                    com.mbridge.msdk.mbbanner.common.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx);
                                }
                                if (c.this.c != null) {
                                    c.this.c.a();
                                }
                                if (!z || TextUtils.isEmpty(str)) {
                                    return;
                                }
                                com.mbridge.msdk.mbbanner.common.d.a.a(campaignEx, c.this.q, str);
                            }

                            @Override // com.mbridge.msdk.widget.dialog.a
                            public final void b() {
                                if (c.this.c != null) {
                                    c.this.c.a(false);
                                }
                            }

                            @Override // com.mbridge.msdk.widget.dialog.a
                            public final void c() {
                                a();
                            }
                        };
                        if (com.mbridge.msdk.click.c.a(campaignEx) && campaignEx.needShowIDialog()) {
                            if (!this.f3625a.b(campaignEx)) {
                                com.mbridge.msdk.mbjscommon.confirmation.e.a().a("", campaignEx, this.f.getContext(), this.q, aVar);
                                if (this.c != null) {
                                    this.c.a(true);
                                    return;
                                }
                                return;
                            }
                            com.mbridge.msdk.mbbanner.common.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx);
                            if (this.c != null) {
                                this.c.a();
                                return;
                            }
                            return;
                        }
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
            this.f3625a.c(campaignEx);
            if (!this.e.isReportClick()) {
                this.e.setReportClick(true);
                com.mbridge.msdk.mbbanner.common.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx);
            }
            com.mbridge.msdk.mbbanner.common.b.c cVar = this.c;
            if (cVar != null) {
                cVar.a();
            }
            if (!z || TextUtils.isEmpty(str)) {
                return;
            }
            com.mbridge.msdk.mbbanner.common.d.a.a(campaignEx, this.q, str);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, int i) {
        if (this.e != null) {
            com.mbridge.msdk.mbbanner.common.d.a.a(com.mbridge.msdk.mbbanner.common.a.a.a().c(this.e.getId()).b(this.q).d(this.e.getRequestId()).e(this.e.getRequestIdNotice()).g(str).a(i).a(this.e.isBidCampaign()), this.q);
        }
    }

    public final void a(int i, int i2, int i3, int i4) {
        if (i == i3 && i2 == i4) {
            return;
        }
        MBBannerWebView mBBannerWebView = this.h;
        z.d("BannerCallJS", "fireOnBannerViewSizeChange");
        try {
            com.mbridge.msdk.mbjscommon.mraid.a.a().a(mBBannerWebView, i, i2);
        } catch (Throwable th) {
            z.c("BannerCallJS", "fireOnBannerViewSizeChange", th);
        }
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    private void d(boolean z) {
        if (this.f != null) {
            FeedBackButton feedBackButtonB = com.mbridge.msdk.foundation.b.b.a().b(this.q);
            if (com.mbridge.msdk.foundation.b.b.a().b() && z && feedBackButtonB != null) {
                ViewGroup viewGroup = (ViewGroup) feedBackButtonB.getParent();
                if (viewGroup != null) {
                    viewGroup.removeView(feedBackButtonB);
                }
                feedBackButtonB.setVisibility(0);
                RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) feedBackButtonB.getLayoutParams();
                if (layoutParams == null) {
                    layoutParams = new RelativeLayout.LayoutParams(com.mbridge.msdk.foundation.b.b.f3336a, com.mbridge.msdk.foundation.b.b.b);
                }
                layoutParams.addRule(12);
                feedBackButtonB.setLayoutParams(layoutParams);
                this.f.addView(feedBackButtonB);
            }
            com.mbridge.msdk.foundation.b.b.a().a(this.q, new com.mbridge.msdk.foundation.b.a() { // from class: com.mbridge.msdk.mbbanner.common.c.c.5
                @Override // com.mbridge.msdk.foundation.b.a
                public final void a() {
                    String string;
                    c.this.f.onPause();
                    try {
                        JSONObject jSONObject = new JSONObject();
                        if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                            jSONObject.put("status", 1);
                        }
                        string = jSONObject.toString();
                    } catch (Throwable th) {
                        z.c(c.b, th.getMessage(), th);
                        string = "";
                    }
                    h.a().a((WebView) c.this.h, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                }

                @Override // com.mbridge.msdk.foundation.b.a
                public final void b() {
                    String string;
                    c.this.f.onResume();
                    try {
                        JSONObject jSONObject = new JSONObject();
                        if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                            jSONObject.put("status", 2);
                        }
                        string = jSONObject.toString();
                    } catch (Throwable th) {
                        z.c(c.b, th.getMessage(), th);
                        string = "";
                    }
                    h.a().a((WebView) c.this.h, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                }

                @Override // com.mbridge.msdk.foundation.b.a
                public final void a(String str) {
                    String string;
                    c.this.f.onResume();
                    try {
                        JSONObject jSONObject = new JSONObject();
                        if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                            jSONObject.put("status", 2);
                        }
                        string = jSONObject.toString();
                    } catch (Throwable th) {
                        z.c(c.b, th.getMessage(), th);
                        string = "";
                    }
                    h.a().a((WebView) c.this.h, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                }
            });
            this.e.setCampaignUnitId(this.q);
            com.mbridge.msdk.foundation.b.b.a().a(this.q, this.e);
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:9:0x001a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(com.mbridge.msdk.foundation.entity.CampaignUnit r5) {
        /*
            Method dump skipped, instruction units count: 275
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.mbbanner.common.c.c.a(com.mbridge.msdk.foundation.entity.CampaignUnit):void");
    }

    static /* synthetic */ void c(c cVar) {
        MBBannerWebView mBBannerWebView = cVar.h;
        if (mBBannerWebView != null && mBBannerWebView.getParent() != null) {
            cVar.f.removeView(cVar.h);
        }
        ImageView imageView = cVar.g;
        if (imageView != null && imageView.getParent() != null) {
            cVar.g.setVisibility(8);
            cVar.f.removeView(cVar.g);
        }
        ImageView imageView2 = cVar.i;
        if (imageView2 != null && imageView2.getParent() != null) {
            cVar.f.removeView(cVar.i);
            cVar.i.setVisibility(8);
        }
        com.mbridge.msdk.foundation.b.b.a().c(cVar.q);
        com.mbridge.msdk.mbbanner.common.a.a aVarA = com.mbridge.msdk.mbbanner.common.a.a.a().b(cVar.q).d(cVar.e.getRequestId()).e(cVar.e.getRequestIdNotice()).c(cVar.e.getId()).f(cVar.e.getCreativeId() + "").a(cVar.e.isBidCampaign());
        String str = cVar.q;
        if (aVarA != null) {
            aVarA.a(com.tkay.expressad.mbbanner.a.b.c.c);
            if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                com.mbridge.msdk.foundation.same.report.b.a().a(aVarA.b());
            } else {
                com.mbridge.msdk.foundation.same.report.c.a(aVarA.b(), com.mbridge.msdk.foundation.controller.a.f().j(), str);
            }
        }
        BannerUtils.inserCloseId(cVar.q, cVar.s);
        com.mbridge.msdk.mbbanner.common.b.c cVar2 = cVar.c;
        if (cVar2 != null) {
            cVar2.e();
        }
    }

    static /* synthetic */ void d(c cVar) {
        ImageView imageView;
        if (cVar.d && (imageView = cVar.i) != null && imageView.getVisibility() == 0) {
            cVar.i.setVisibility(8);
            cVar.i.setOnClickListener(null);
            if (cVar.f == null || cVar.i.getParent() == null) {
                return;
            }
            cVar.f.removeView(cVar.i);
        }
    }

    static /* synthetic */ void m(c cVar) {
        if (cVar.g != null) {
            MBBannerWebView mBBannerWebView = cVar.h;
            if (mBBannerWebView != null) {
                mBBannerWebView.setVisibility(8);
            }
            if (cVar.g.getVisibility() != 0) {
                cVar.g.setVisibility(0);
            }
            if (cVar.f != null) {
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
                layoutParams.addRule(10);
                cVar.g.setScaleType(ImageView.ScaleType.FIT_XY);
                if (cVar.g.getParent() == null) {
                    cVar.f.addView(cVar.g, layoutParams);
                }
                cVar.d(true);
            }
        }
    }
}
