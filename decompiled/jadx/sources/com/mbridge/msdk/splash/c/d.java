package com.mbridge.msdk.splash.c;

import android.app.Activity;
import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.util.Base64;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.iab.omid.library.mmadbridge.adsession.AdEvents;
import com.iab.omid.library.mmadbridge.adsession.AdSession;
import com.mbridge.msdk.click.h;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.splash.view.MBSplashView;
import com.mbridge.msdk.splash.view.MBSplashWebview;
import com.mbridge.msdk.widget.FeedBackButton;
import com.tkay.expressad.foundation.g.a.f;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.splash.js.SplashJsUtils;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: compiled from: SplashShowManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class d {
    private CampaignEx c;
    private MBSplashView d;
    private com.mbridge.msdk.splash.d.d e;
    private com.mbridge.msdk.click.b f;
    private boolean g;
    private TextView h;
    private View i;
    private String j;
    private String k;
    private MBridgeIds l;
    private String n;
    private String o;
    private String p;
    private String q;
    private boolean r;
    private boolean s;
    private Context t;
    private String b = "SplashShowManager";
    private int m = 5;
    private View.OnClickListener u = new View.OnClickListener() { // from class: com.mbridge.msdk.splash.c.d.1
        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            if (d.this.g) {
                d.this.b(1);
                d.b(d.this, -1);
            }
        }
    };

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Handler f3993a = new Handler(Looper.getMainLooper()) { // from class: com.mbridge.msdk.splash.c.d.2
        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            MBSplashWebview splashWebview;
            super.handleMessage(message);
            int i = message.what;
            if (i != 1) {
                if (i != 2 || d.this.c == null || !d.this.c.isActiveOm() || d.this.d == null || (splashWebview = d.this.d.getSplashWebview()) == null) {
                    return;
                }
                try {
                    AdSession adSession = splashWebview.getAdSession();
                    if (adSession != null) {
                        AdEvents.createAdEvents(adSession).impressionOccurred();
                    }
                    z.a("OMSDK", "adSession.impressionOccurred()");
                    return;
                } catch (Throwable th) {
                    z.a("OMSDK", th.getMessage());
                    if (d.this.c != null) {
                        String requestId = d.this.c.getRequestId();
                        String requestIdNotice = d.this.c.getRequestIdNotice();
                        String id = d.this.c.getId();
                        new com.mbridge.msdk.foundation.same.report.d(splashWebview.getContext()).a(requestId, requestIdNotice, id, d.this.j, "fetch OM failed, exception" + th.getMessage());
                        return;
                    }
                    return;
                }
            }
            if (!d.this.s) {
                d.this.g();
            }
            if (d.this.m <= 0) {
                d.this.b(2);
                return;
            }
            d.e(d.this);
            d dVar = d.this;
            d.b(dVar, dVar.m);
            d.this.f3993a.removeMessages(1);
            sendEmptyMessageDelayed(1, 1000L);
        }
    };
    private com.mbridge.msdk.splash.d.a v = new com.mbridge.msdk.splash.d.a() { // from class: com.mbridge.msdk.splash.c.d.3
        @Override // com.mbridge.msdk.splash.d.a
        public final void a(int i) {
            if (d.this.d != null) {
                d.this.d.changeCloseBtnState(i);
            }
        }

        @Override // com.mbridge.msdk.splash.d.a
        public final void a(Object obj, String str) {
            d.this.b(1);
        }

        @Override // com.mbridge.msdk.splash.d.a
        public final void a(CampaignEx campaignEx) {
            d.this.a(campaignEx, false, "");
        }

        @Override // com.mbridge.msdk.splash.d.a
        public final void b(int i) {
            z.d(d.this.b, "resetCountdown" + i);
            d.this.m = i;
            d.this.f3993a.removeMessages(1);
            d.this.f3993a.sendEmptyMessageDelayed(1, 1000L);
        }

        @Override // com.mbridge.msdk.splash.d.a
        public final void a(int i, int i2) {
            if (i == 1) {
                d.this.f3993a.removeMessages(1);
            }
            if (i == 2) {
                d.this.m = i2;
                d.this.f3993a.removeMessages(1);
                d.this.f3993a.sendEmptyMessageDelayed(1, 1000L);
            }
        }

        @Override // com.mbridge.msdk.splash.d.a
        public final void a() {
            d.this.b(1);
        }

        @Override // com.mbridge.msdk.splash.d.a
        public final void a(boolean z) {
            if (z) {
                d.this.f3993a.removeMessages(1);
            }
        }

        @Override // com.mbridge.msdk.splash.d.a
        public final void a(boolean z, String str) {
            try {
                if (d.this.e != null) {
                    if (TextUtils.isEmpty(str)) {
                        d.this.e.b(d.this.l);
                    } else {
                        CampaignEx campaignWithBackData = CampaignEx.parseCampaignWithBackData(CampaignEx.campaignToJsonObject(d.this.c));
                        campaignWithBackData.setClickURL(str);
                        d.this.a(campaignWithBackData, true, str);
                    }
                }
            } catch (Exception e) {
                z.d(d.this.b, e.getMessage());
            }
        }
    };
    private h w = new h() { // from class: com.mbridge.msdk.splash.c.d.5
        @Override // com.mbridge.msdk.out.BaseTrackingListener
        public final void onStartRedirection(Campaign campaign, String str) {
            ad.a(campaign, d.this.d);
        }

        @Override // com.mbridge.msdk.out.BaseTrackingListener
        public final void onFinishRedirection(Campaign campaign, String str) {
            if (campaign == null) {
                return;
            }
            CampaignEx campaignEx = (CampaignEx) campaign;
            if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity().getHlp() == 1) {
                ad.a(d.this.d);
            }
        }

        @Override // com.mbridge.msdk.out.BaseTrackingListener
        public final void onRedirectionFailed(Campaign campaign, String str) {
            if (campaign == null) {
                return;
            }
            CampaignEx campaignEx = (CampaignEx) campaign;
            if (campaignEx.getLinkType() == 8 && campaignEx.getAabEntity().getHlp() == 1) {
                ad.a(d.this.d);
            }
        }
    };

    static /* synthetic */ int e(d dVar) {
        int i = dVar.m;
        dVar.m = i - 1;
        return i;
    }

    public d(Context context, String str, String str2) {
        this.n = "点击跳过|";
        this.o = "点击跳过|";
        this.p = "秒";
        this.q = "秒后自动关闭";
        this.j = str2;
        this.k = str;
        this.l = new MBridgeIds(this.k, str2);
        this.t = context;
        if (this.h == null) {
            TextView textView = new TextView(context);
            this.h = textView;
            textView.setGravity(1);
            this.h.setTextIsSelectable(false);
            this.h.setPadding(ae.b(context, 5.0f), ae.b(context, 5.0f), ae.b(context, 5.0f), ae.b(context, 5.0f));
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.h.getLayoutParams();
            this.h.setLayoutParams(layoutParams == null ? new RelativeLayout.LayoutParams(ae.b(context, 100.0f), ae.b(context, 50.0f)) : layoutParams);
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            if (contextJ != null) {
                String strD = com.mbridge.msdk.foundation.controller.a.f().d();
                int identifier = contextJ.getResources().getIdentifier("mbridge_splash_count_time_can_skip", i.g, strD);
                int identifier2 = contextJ.getResources().getIdentifier("mbridge_splash_count_time_can_skip_not", i.g, strD);
                int identifier3 = contextJ.getResources().getIdentifier("mbridge_splash_count_time_can_skip_s", i.g, strD);
                this.o = contextJ.getResources().getString(identifier);
                String string = contextJ.getResources().getString(identifier2);
                this.q = string;
                this.n = string;
                this.p = contextJ.getResources().getString(identifier3);
                this.h.setBackgroundResource(contextJ.getResources().getIdentifier("mbridge_splash_close_bg", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
                this.h.setTextColor(contextJ.getResources().getColor(contextJ.getResources().getIdentifier("mbridge_splash_count_time_skip_text_color", "color", strD)));
            }
        }
    }

    public final void a(com.mbridge.msdk.splash.d.d dVar) {
        this.e = dVar;
    }

    public final void a(int i) {
        this.m = i;
    }

    public final void a(ViewGroup viewGroup) {
        if (viewGroup != null) {
            viewGroup.setOnClickListener(this.u);
        }
        this.i = viewGroup;
    }

    public final com.mbridge.msdk.splash.d.a a() {
        return this.v;
    }

    public final void a(CampaignEx campaignEx, MBSplashView mBSplashView) {
        MBSplashWebview splashWebview;
        a(this.g);
        this.c = campaignEx;
        this.d = mBSplashView;
        com.mbridge.msdk.splash.js.b splashJSBridgeImpl = mBSplashView.getSplashJSBridgeImpl();
        if (splashJSBridgeImpl == null) {
            splashJSBridgeImpl = new com.mbridge.msdk.splash.js.b(mBSplashView.getContext(), this.k, this.j);
            ArrayList arrayList = new ArrayList();
            arrayList.add(campaignEx);
            splashJSBridgeImpl.a(arrayList);
        }
        splashJSBridgeImpl.b(this.m);
        splashJSBridgeImpl.a(this.g ? 1 : 0);
        splashJSBridgeImpl.a(this.v);
        mBSplashView.setSplashJSBridgeImpl(splashJSBridgeImpl);
        boolean zIsHasMBTplMark = campaignEx.isHasMBTplMark();
        View view = this.i;
        if (view == null) {
            if (zIsHasMBTplMark) {
                this.h.setVisibility(8);
            }
            h();
            a(this.h);
            mBSplashView.setCloseView(this.h);
        } else {
            if (zIsHasMBTplMark) {
                view.setVisibility(8);
            }
            a(this.i);
            mBSplashView.setCloseView(this.i);
        }
        mBSplashView.show();
        CampaignEx campaignEx2 = this.c;
        if (campaignEx2 != null && campaignEx2.isActiveOm() && mBSplashView != null && (splashWebview = mBSplashView.getSplashWebview()) != null) {
            try {
                AdSession adSessionA = com.mbridge.msdk.a.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), splashWebview, splashWebview.getUrl(), this.c);
                if (adSessionA != null) {
                    splashWebview.setAdSession(adSessionA);
                    adSessionA.registerAdView(splashWebview);
                    adSessionA.start();
                    z.a("OMSDK", "adSession.start()");
                }
            } catch (Throwable th) {
                z.a("OMSDK", th.getMessage());
                CampaignEx campaignEx3 = this.c;
                if (campaignEx3 != null) {
                    String requestId = campaignEx3.getRequestId();
                    String requestIdNotice = this.c.getRequestIdNotice();
                    String id = this.c.getId();
                    new com.mbridge.msdk.foundation.same.report.d(splashWebview.getContext()).a(requestId, requestIdNotice, id, this.j, "fetch OM failed, exception" + th.getMessage());
                }
            }
        }
        b.a(this.j);
        b.b(this.c.getImageUrl());
        this.f3993a.removeMessages(1);
        this.f3993a.sendEmptyMessageDelayed(1, 1000L);
        this.f3993a.sendEmptyMessageDelayed(2, 1000L);
        if (com.mbridge.msdk.foundation.b.b.a().b() && !this.d.isDynamicView()) {
            com.mbridge.msdk.foundation.b.b.a().a(this.j, new com.mbridge.msdk.foundation.b.a() { // from class: com.mbridge.msdk.splash.c.d.4
                @Override // com.mbridge.msdk.foundation.b.a
                public final void a() {
                    String string;
                    d.this.e();
                    try {
                        JSONObject jSONObject = new JSONObject();
                        if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                            jSONObject.put("status", 1);
                        }
                        string = jSONObject.toString();
                    } catch (Throwable th2) {
                        z.c(d.this.b, th2.getMessage(), th2);
                        string = "";
                    }
                    com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) d.this.d.getSplashWebview(), "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                }

                @Override // com.mbridge.msdk.foundation.b.a
                public final void b() {
                    String string;
                    d.this.d();
                    try {
                        JSONObject jSONObject = new JSONObject();
                        if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                            jSONObject.put("status", 2);
                        }
                        string = jSONObject.toString();
                    } catch (Throwable th2) {
                        z.c(d.this.b, th2.getMessage(), th2);
                        string = "";
                    }
                    com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) d.this.d.getSplashWebview(), "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                }

                @Override // com.mbridge.msdk.foundation.b.a
                public final void a(String str) {
                    String string;
                    d.this.d();
                    try {
                        JSONObject jSONObject = new JSONObject();
                        if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                            jSONObject.put("status", 2);
                        }
                        string = jSONObject.toString();
                    } catch (Throwable th2) {
                        z.c(d.this.b, th2.getMessage(), th2);
                        string = "";
                    }
                    com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) d.this.d.getSplashWebview(), "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                }
            });
            FeedBackButton feedBackButtonB = com.mbridge.msdk.foundation.b.b.a().b(this.j);
            if (feedBackButtonB != null) {
                RelativeLayout.LayoutParams layoutParams = null;
                try {
                    layoutParams = (RelativeLayout.LayoutParams) feedBackButtonB.getLayoutParams();
                } catch (Exception e) {
                    e.printStackTrace();
                }
                if (layoutParams == null) {
                    layoutParams = new RelativeLayout.LayoutParams(com.mbridge.msdk.foundation.b.b.f3336a, com.mbridge.msdk.foundation.b.b.b);
                }
                layoutParams.topMargin = ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 10.0f);
                layoutParams.leftMargin = ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 10.0f);
                ViewGroup viewGroup = (ViewGroup) feedBackButtonB.getParent();
                if (viewGroup != null) {
                    viewGroup.removeView(feedBackButtonB);
                }
                this.d.addView(feedBackButtonB, layoutParams);
            }
            this.c.setCampaignUnitId(this.j);
            com.mbridge.msdk.foundation.b.b.a().a(this.j, this.c);
        }
    }

    public final String b() {
        CampaignEx campaignEx = this.c;
        return (campaignEx == null || campaignEx.getRequestId() == null) ? "" : this.c.getRequestId();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void g() {
        if (this.c == null) {
            return;
        }
        boolean z = true;
        this.s = true;
        if (this.e != null && this.d != null) {
            if (this.t != null && (this.t instanceof Activity) && ((Activity) this.t).isFinishing()) {
                this.e.a(this.l, "Activity is finishing");
                return;
            } else if (this.d.isShown()) {
                this.e.a(this.l);
            } else {
                this.e.a(this.l, "SplashView or container is not visibility");
            }
        }
        if (!this.c.isReport()) {
            if (!this.d.isDynamicView()) {
                CampaignEx campaignEx = this.c;
                if (campaignEx.isHasMBTplMark()) {
                    z = false;
                } else {
                    c(campaignEx, com.mbridge.msdk.foundation.controller.a.f().j(), this.j);
                    campaignEx.setReport(true);
                    com.mbridge.msdk.foundation.same.a.d.a(this.j, campaignEx, f.f);
                }
                if (z) {
                    b(campaignEx, com.mbridge.msdk.foundation.controller.a.f().j(), this.j);
                    a(campaignEx, com.mbridge.msdk.foundation.controller.a.f().j(), this.j);
                }
            } else {
                CampaignEx campaignEx2 = this.c;
                b(campaignEx2, com.mbridge.msdk.foundation.controller.a.f().j(), this.j);
                c(campaignEx2, com.mbridge.msdk.foundation.controller.a.f().j(), this.j);
                a(campaignEx2, com.mbridge.msdk.foundation.controller.a.f().j(), this.j);
                campaignEx2.setReport(true);
                com.mbridge.msdk.foundation.same.a.d.a(this.j, campaignEx2, f.f);
            }
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            CampaignEx campaignEx3 = this.c;
            String str = this.j;
            if (campaignEx3 != null) {
                try {
                    if (campaignEx3.isMraid()) {
                        p pVar = new p();
                        pVar.k(campaignEx3.getRequestId());
                        pVar.l(campaignEx3.getRequestIdNotice());
                        pVar.n(campaignEx3.getId());
                        pVar.a(campaignEx3.isMraid() ? p.f3396a : p.b);
                        com.mbridge.msdk.foundation.same.report.c.a(pVar, contextJ.getApplicationContext(), str);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        }
    }

    public final void a(boolean z) {
        this.g = z;
        if (z) {
            this.n = this.o;
        } else {
            this.n = this.q;
        }
    }

    public final void a(final CampaignEx campaignEx, final boolean z, final String str) {
        MBSplashWebview splashWebview;
        if (campaignEx != null) {
            try {
                if (campaignEx.needShowIDialog()) {
                    final com.mbridge.msdk.widget.dialog.a aVar = new com.mbridge.msdk.widget.dialog.a() { // from class: com.mbridge.msdk.splash.c.d.6
                        @Override // com.mbridge.msdk.widget.dialog.a
                        public final void a() {
                            d.this.b(campaignEx, z, str);
                        }

                        @Override // com.mbridge.msdk.widget.dialog.a
                        public final void b() {
                            d.this.f();
                        }

                        @Override // com.mbridge.msdk.widget.dialog.a
                        public final void c() {
                            a();
                        }
                    };
                    if (this.d != null && com.mbridge.msdk.click.c.a(campaignEx) && campaignEx.needShowIDialog() && !this.r) {
                        if (this.f == null) {
                            com.mbridge.msdk.click.b bVar = new com.mbridge.msdk.click.b(com.mbridge.msdk.foundation.controller.a.f().j(), this.j);
                            this.f = bVar;
                            bVar.a(this.w);
                        }
                        final Context context = this.d.getContext();
                        this.d.post(new Runnable() { // from class: com.mbridge.msdk.splash.c.d.7
                            @Override // java.lang.Runnable
                            public final void run() {
                                if (!d.this.f.b(campaignEx)) {
                                    Context context2 = context;
                                    if (context2 != context2.getApplicationContext()) {
                                        com.mbridge.msdk.mbjscommon.confirmation.e.a().a("", campaignEx, context, d.this.j, aVar);
                                        return;
                                    } else {
                                        com.mbridge.msdk.mbjscommon.confirmation.e.a().a("", campaignEx, d.this.t, d.this.j, aVar);
                                        return;
                                    }
                                }
                                com.mbridge.msdk.splash.e.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx);
                                if (d.this.e != null) {
                                    d.this.e.b(d.this.l);
                                    d.this.b(3);
                                }
                            }
                        });
                        this.r = true;
                        if (this.m > 0 && this.f3993a != null) {
                            this.f3993a.removeMessages(1);
                        }
                        if (this.d == null || (splashWebview = this.d.getSplashWebview()) == null || splashWebview.isDestoryed()) {
                            return;
                        }
                        com.mbridge.msdk.splash.js.c.a(splashWebview, "onInstallAlertShow", "");
                        return;
                    }
                }
            } catch (Throwable th) {
                z.a(this.b, th.getMessage());
            }
        }
        if (campaignEx != null) {
            b(campaignEx, z, str);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(CampaignEx campaignEx, boolean z, String str) {
        if (this.f == null) {
            com.mbridge.msdk.click.b bVar = new com.mbridge.msdk.click.b(com.mbridge.msdk.foundation.controller.a.f().j(), this.j);
            this.f = bVar;
            bVar.a(this.w);
        }
        campaignEx.setCampaignUnitId(this.j);
        this.f.c(campaignEx);
        if (!this.c.isReportClick()) {
            this.c.setReportClick(true);
            com.mbridge.msdk.splash.e.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx);
        }
        com.mbridge.msdk.splash.d.d dVar = this.e;
        if (dVar != null) {
            dVar.b(this.l);
            b(3);
        }
        if (!z || TextUtils.isEmpty(str)) {
            return;
        }
        com.mbridge.msdk.splash.e.a.a(campaignEx, this.j, str);
    }

    private void h() {
        String str;
        if (this.g) {
            str = this.o + this.m + this.p;
        } else {
            str = this.m + this.q;
        }
        this.h.setText(str);
    }

    private void a(View view) {
        if (view != null) {
            view.setOnClickListener(this.u);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(int i) {
        com.mbridge.msdk.splash.a.b bVarA;
        MBSplashWebview splashWebview;
        com.mbridge.msdk.splash.d.d dVar = this.e;
        if (dVar != null) {
            dVar.a(this.l, i);
            this.e = null;
            com.mbridge.msdk.splash.e.a.a(this.j, this.c);
        }
        this.s = false;
        if (this.c != null) {
            bVarA = com.mbridge.msdk.splash.a.b.a().b(this.j).d(this.c.getRequestId()).g(this.c.getRequestIdNotice()).c(this.c.getId()).e(this.c.getCreativeId() + "").a(this.c.isBidCampaign());
        } else {
            bVarA = null;
        }
        com.mbridge.msdk.splash.e.a.a(bVarA, this.j, i);
        MBSplashView mBSplashView = this.d;
        if (mBSplashView != null && (splashWebview = mBSplashView.getSplashWebview()) != null) {
            splashWebview.finishAdSession();
        }
        Handler handler = this.f3993a;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
        }
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
                z.d(this.b, th.getMessage());
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
                z.d(this.b, th.getMessage());
            }
        }
    }

    private void c(final CampaignEx campaignEx, final Context context, String str) {
        com.mbridge.msdk.foundation.controller.a.f().a(context);
        if (!TextUtils.isEmpty(campaignEx.getImpressionURL())) {
            new Thread(new Runnable() { // from class: com.mbridge.msdk.splash.c.d.8
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        l.a(com.mbridge.msdk.foundation.db.i.a(context)).b(campaignEx.getId());
                    } catch (Exception unused) {
                        z.d(d.this.b, "campain can't insert db");
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

    public final void c() {
        if (this.e != null) {
            this.e = null;
        }
        if (this.v != null) {
            this.v = null;
        }
        if (this.u != null) {
            this.u = null;
        }
        MBSplashView mBSplashView = this.d;
        if (mBSplashView != null) {
            mBSplashView.destroy();
        }
        com.mbridge.msdk.foundation.b.b.a().c(this.j);
    }

    public final void d() {
        Handler handler;
        if (this.r || com.mbridge.msdk.foundation.b.b.c) {
            return;
        }
        if (this.m > 0 && (handler = this.f3993a) != null) {
            handler.removeMessages(1);
            this.f3993a.sendEmptyMessageDelayed(1, 1000L);
        }
        MBSplashView mBSplashView = this.d;
        if (mBSplashView != null) {
            mBSplashView.onResume();
            MBSplashWebview splashWebview = this.d.getSplashWebview();
            if (splashWebview == null || splashWebview.isDestoryed()) {
                return;
            }
            com.mbridge.msdk.splash.js.c.a(splashWebview, SplashJsUtils.b, "");
        }
    }

    public final void e() {
        Handler handler;
        if (this.m > 0 && (handler = this.f3993a) != null) {
            handler.removeMessages(1);
        }
        MBSplashView mBSplashView = this.d;
        if (mBSplashView != null) {
            mBSplashView.onPause();
            MBSplashWebview splashWebview = this.d.getSplashWebview();
            if (splashWebview == null || splashWebview.isDestoryed()) {
                return;
            }
            com.mbridge.msdk.splash.js.c.a(splashWebview, SplashJsUtils.f7131a, "");
        }
    }

    public final void f() {
        MBSplashWebview splashWebview;
        Handler handler;
        this.r = false;
        if (this.m > 0 && (handler = this.f3993a) != null) {
            handler.removeMessages(1);
            this.f3993a.sendEmptyMessageDelayed(1, 1000L);
        }
        MBSplashView mBSplashView = this.d;
        if (mBSplashView == null || (splashWebview = mBSplashView.getSplashWebview()) == null || splashWebview.isDestoryed()) {
            return;
        }
        com.mbridge.msdk.splash.js.c.a(splashWebview, "onInstallAlertHide", "");
    }

    static /* synthetic */ void b(d dVar, int i) {
        MBSplashView mBSplashView = dVar.d;
        if (mBSplashView != null) {
            mBSplashView.updateCountdown(i);
            if (dVar.d.getSplashJSBridgeImpl() != null) {
                dVar.d.getSplashJSBridgeImpl().c(i);
            }
        }
        if (i < 0) {
            dVar.m = i;
            return;
        }
        com.mbridge.msdk.splash.d.d dVar2 = dVar.e;
        if (dVar2 != null) {
            dVar2.a(dVar.l, i * 1000);
        }
        if (dVar.i == null) {
            dVar.h();
        }
    }
}
