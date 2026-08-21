package com.mbridge.msdk.advanced.b;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.util.Base64;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.iab.omid.library.mmadbridge.adsession.AdEvents;
import com.iab.omid.library.mmadbridge.adsession.AdSession;
import com.mbridge.msdk.advanced.c.d;
import com.mbridge.msdk.advanced.view.MBNativeAdvancedView;
import com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview;
import com.mbridge.msdk.foundation.db.l;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.p;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.am;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.confirmation.e;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.out.NativeListener;
import com.mbridge.msdk.widget.FeedBackButton;
import com.tkay.expressad.advanced.js.NativeAdvancedJsUtils;
import com.tkay.expressad.foundation.d.r;
import com.tkay.expressad.foundation.g.a.f;
import com.tkay.expressad.foundation.h.i;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.json.JSONObject;

/* JADX INFO: compiled from: NativeAdvancedShowManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {
    private CampaignEx c;
    private MBNativeAdvancedView d;
    private d e;
    private com.mbridge.msdk.click.b f;
    private com.mbridge.msdk.advanced.c.c g;
    private boolean h;
    private ImageView j;
    private String k;
    private String l;
    private MBridgeIds m;
    private boolean n;
    private String b = "NativeAdvancedShowManager";
    private int i = -1;
    private View.OnClickListener o = new View.OnClickListener() { // from class: com.mbridge.msdk.advanced.b.b.1
        @Override // android.view.View.OnClickListener
        public final void onClick(View view) {
            if (b.this.h) {
                b.a(b.this, 1);
            }
        }
    };

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public Handler f3071a = new Handler(Looper.getMainLooper()) { // from class: com.mbridge.msdk.advanced.b.b.2
        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            MBNativeAdvancedWebview advancedNativeWebview;
            super.handleMessage(message);
            if (message.what != 2 || b.this.c == null || !b.this.c.isActiveOm() || b.this.d == null || (advancedNativeWebview = b.this.d.getAdvancedNativeWebview()) == null) {
                return;
            }
            try {
                AdSession adSession = advancedNativeWebview.getAdSession();
                if (adSession != null) {
                    AdEvents.createAdEvents(adSession).impressionOccurred();
                    z.a("OMSDK", "adSession.impressionOccurred()");
                }
            } catch (Throwable th) {
                z.a("OMSDK", th.getMessage());
                if (b.this.c != null) {
                    String requestId = b.this.c.getRequestId();
                    String requestIdNotice = b.this.c.getRequestIdNotice();
                    String id = b.this.c.getId();
                    new com.mbridge.msdk.foundation.same.report.d(advancedNativeWebview.getContext()).a(requestId, requestIdNotice, id, b.this.k, "fetch OM failed, exception" + th.getMessage());
                }
            }
        }
    };
    private com.mbridge.msdk.advanced.c.a p = new com.mbridge.msdk.advanced.c.a() { // from class: com.mbridge.msdk.advanced.b.b.3
        @Override // com.mbridge.msdk.advanced.c.a
        public final void a(int i) {
            b.this.i = i;
            if (b.this.d != null) {
                b.this.d.changeCloseBtnState(i);
            }
        }

        @Override // com.mbridge.msdk.advanced.c.a
        public final void a(Object obj, String str) {
            if (b.this.d != null) {
                b.this.d.setVisibility(8);
            }
            b.a(b.this, 1);
        }

        @Override // com.mbridge.msdk.advanced.c.a
        public final void a(CampaignEx campaignEx) {
            b.this.a(campaignEx, false, "");
        }

        @Override // com.mbridge.msdk.advanced.c.a
        public final void b(int i) {
            z.d(b.this.b, "resetCountdown" + i);
        }

        @Override // com.mbridge.msdk.advanced.c.a
        public final void a() {
            b.a(b.this, 1);
        }

        @Override // com.mbridge.msdk.advanced.c.a
        public final void a(boolean z) {
            if (b.this.e != null) {
                b.this.n = z;
                if (z) {
                    b.this.e.e(b.this.m);
                } else {
                    b.this.e.f(b.this.m);
                }
            }
        }

        @Override // com.mbridge.msdk.advanced.c.a
        public final void a(boolean z, String str) {
            try {
                if (b.this.e != null) {
                    if (TextUtils.isEmpty(str)) {
                        b.this.e.b(b.this.m);
                        b.this.e.d(b.this.m);
                    } else {
                        CampaignEx campaignWithBackData = CampaignEx.parseCampaignWithBackData(CampaignEx.campaignToJsonObject(b.this.c));
                        campaignWithBackData.setClickURL(str);
                        b.this.a(campaignWithBackData, z, str);
                    }
                }
            } catch (Exception e) {
                z.d(b.this.b, e.getMessage());
            }
        }
    };

    public b(Context context, String str, String str2) {
        this.k = str2;
        this.l = str;
        this.m = new MBridgeIds(str, str2);
        if (this.j == null) {
            ImageView imageView = new ImageView(context);
            this.j = imageView;
            imageView.setPadding(ae.b(context, 2.0f), ae.b(context, 2.0f), ae.b(context, 2.0f), ae.b(context, 2.0f));
            Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
            this.j.setScaleType(ImageView.ScaleType.FIT_XY);
            RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.j.getLayoutParams();
            this.j.setLayoutParams(layoutParams == null ? new RelativeLayout.LayoutParams(ae.b(contextJ, 29.0f), ae.b(contextJ, 16.0f)) : layoutParams);
            this.j.setImageResource(contextJ.getResources().getIdentifier("mbridge_native_advanced_close_icon", i.c, com.mbridge.msdk.foundation.controller.a.f().d()));
        }
    }

    public final void a(com.mbridge.msdk.advanced.c.c cVar) {
        this.g = cVar;
    }

    public final void a(d dVar) {
        this.e = dVar;
    }

    public final String a() {
        CampaignEx campaignEx = this.c;
        return (campaignEx == null || campaignEx.getRequestId() == null) ? "" : this.c.getRequestId();
    }

    public final com.mbridge.msdk.advanced.c.a b() {
        return this.p;
    }

    public final void a(final CampaignEx campaignEx, final MBNativeAdvancedView mBNativeAdvancedView, boolean z) {
        MBNativeAdvancedWebview advancedNativeWebview;
        FeedBackButton feedBackButtonB;
        if (mBNativeAdvancedView == null) {
            return;
        }
        com.mbridge.msdk.foundation.b.b.a().a(this.k, new com.mbridge.msdk.foundation.b.a() { // from class: com.mbridge.msdk.advanced.b.b.4
            @Override // com.mbridge.msdk.foundation.b.a
            public final void a() {
                String string;
                b.this.e();
                try {
                    JSONObject jSONObject = new JSONObject();
                    if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                        jSONObject.put("status", 1);
                    }
                    string = jSONObject.toString();
                } catch (Throwable th) {
                    z.c(b.this.b, th.getMessage(), th);
                    string = "";
                }
                h.a().a((WebView) mBNativeAdvancedView.getAdvancedNativeWebview(), "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
            }

            @Override // com.mbridge.msdk.foundation.b.a
            public final void b() {
                String string;
                b.this.d();
                try {
                    JSONObject jSONObject = new JSONObject();
                    if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                        jSONObject.put("status", 2);
                    }
                    string = jSONObject.toString();
                } catch (Throwable th) {
                    z.c(b.this.b, th.getMessage(), th);
                    string = "";
                }
                h.a().a((WebView) mBNativeAdvancedView.getAdvancedNativeWebview(), "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
            }

            @Override // com.mbridge.msdk.foundation.b.a
            public final void a(String str) {
                String string;
                b.this.d();
                try {
                    JSONObject jSONObject = new JSONObject();
                    if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                        jSONObject.put("status", 2);
                    }
                    string = jSONObject.toString();
                } catch (Throwable th) {
                    z.c(b.this.b, th.getMessage(), th);
                    string = "";
                }
                h.a().a((WebView) mBNativeAdvancedView.getAdvancedNativeWebview(), "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
            }
        });
        if (campaignEx.isMraid() && com.mbridge.msdk.foundation.b.b.a().b() && (feedBackButtonB = com.mbridge.msdk.foundation.b.b.a().b(this.k)) != null) {
            RelativeLayout.LayoutParams layoutParams = null;
            try {
                layoutParams = (RelativeLayout.LayoutParams) feedBackButtonB.getLayoutParams();
            } catch (Exception e) {
                e.printStackTrace();
            }
            if (layoutParams == null) {
                layoutParams = new RelativeLayout.LayoutParams(com.mbridge.msdk.foundation.b.b.f3336a, com.mbridge.msdk.foundation.b.b.b);
            }
            layoutParams.addRule(12);
            ViewGroup viewGroup = (ViewGroup) feedBackButtonB.getParent();
            if (viewGroup != null) {
                viewGroup.removeView(feedBackButtonB);
            }
            mBNativeAdvancedView.addView(feedBackButtonB, layoutParams);
        }
        this.h = this.h;
        this.c = campaignEx;
        this.d = mBNativeAdvancedView;
        com.mbridge.msdk.advanced.js.a advancedNativeJSBridgeImpl = mBNativeAdvancedView.getAdvancedNativeJSBridgeImpl();
        if (advancedNativeJSBridgeImpl == null) {
            advancedNativeJSBridgeImpl = new com.mbridge.msdk.advanced.js.a(mBNativeAdvancedView.getContext(), this.l, this.k);
            List<CampaignEx> arrayList = new ArrayList<>();
            arrayList.add(campaignEx);
            advancedNativeJSBridgeImpl.a(arrayList);
        }
        advancedNativeJSBridgeImpl.a(this.h ? 1 : 0);
        advancedNativeJSBridgeImpl.a(this.p);
        mBNativeAdvancedView.setAdvancedNativeJSBridgeImpl(advancedNativeJSBridgeImpl);
        if (campaignEx.isHasMBTplMark() || !this.h) {
            this.j.setVisibility(8);
        }
        ImageView imageView = this.j;
        if (imageView != null) {
            imageView.setOnClickListener(this.o);
        }
        mBNativeAdvancedView.setCloseView(this.j);
        boolean z2 = false;
        if (mBNativeAdvancedView.getVisibility() != 0) {
            mBNativeAdvancedView.setVisibility(0);
        }
        boolean zA = am.a(mBNativeAdvancedView.getAdvancedNativeWebview());
        com.mbridge.msdk.advanced.c.c cVar = this.g;
        if (cVar == null || zA || cVar.b() == null || this.g.b().getAlpha() < 0.5f || this.g.b().getVisibility() != 0 || this.n) {
            if (z) {
                mBNativeAdvancedView.postDelayed(new Runnable() { // from class: com.mbridge.msdk.advanced.b.b.5
                    @Override // java.lang.Runnable
                    public final void run() {
                        b.this.a(campaignEx, mBNativeAdvancedView, false);
                    }
                }, 200L);
                return;
            }
            return;
        }
        mBNativeAdvancedView.show();
        com.mbridge.msdk.foundation.controller.a.f().a(mBNativeAdvancedView.getContext());
        campaignEx.setCampaignUnitId(this.k);
        com.mbridge.msdk.foundation.b.b.a().a(this.k, campaignEx);
        CampaignEx campaignEx2 = this.c;
        if (campaignEx2 != null && campaignEx2.isActiveOm() && mBNativeAdvancedView != null && (advancedNativeWebview = mBNativeAdvancedView.getAdvancedNativeWebview()) != null) {
            try {
                AdSession adSessionA = com.mbridge.msdk.a.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), advancedNativeWebview, advancedNativeWebview.getUrl(), this.c);
                if (adSessionA != null) {
                    advancedNativeWebview.setAdSession(adSessionA);
                    adSessionA.registerAdView(advancedNativeWebview);
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
                    new com.mbridge.msdk.foundation.same.report.d(com.mbridge.msdk.foundation.controller.a.f().j()).a(requestId, requestIdNotice, id, this.k, "fetch OM failed, exception" + th.getMessage());
                }
            }
        }
        if (!this.c.isReport()) {
            final CampaignEx campaignEx4 = this.c;
            if (!campaignEx4.isHasMBTplMark()) {
                final Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                String str = this.k;
                com.mbridge.msdk.foundation.controller.a.f().a(contextJ);
                if (!TextUtils.isEmpty(campaignEx4.getImpressionURL())) {
                    new Thread(new Runnable() { // from class: com.mbridge.msdk.advanced.b.b.8
                        @Override // java.lang.Runnable
                        public final void run() {
                            try {
                                l.a(com.mbridge.msdk.foundation.db.i.a(contextJ)).b(campaignEx4.getId());
                            } catch (Exception unused) {
                                z.d(b.this.b, "campain can't insert db");
                            }
                        }
                    }).start();
                    com.mbridge.msdk.click.b.a(contextJ, campaignEx4, str, campaignEx4.getImpressionURL(), false, true, com.mbridge.msdk.click.a.a.g);
                }
                if (!TextUtils.isEmpty(str) && campaignEx4.getNativeVideoTracking() != null && campaignEx4.getNativeVideoTracking().l() != null) {
                    com.mbridge.msdk.click.b.a(contextJ, campaignEx4, str, campaignEx4.getNativeVideoTracking().l(), false, false);
                }
                campaignEx4.setReport(true);
                com.mbridge.msdk.foundation.same.a.d.a(this.k, campaignEx4, f.g);
                z2 = true;
            }
            if (z2) {
                Context contextJ2 = com.mbridge.msdk.foundation.controller.a.f().j();
                String str2 = this.k;
                if (campaignEx4 != null) {
                    try {
                        if (!TextUtils.isEmpty(campaignEx4.getOnlyImpressionURL())) {
                            com.mbridge.msdk.click.b.a(contextJ2, campaignEx4, str2, campaignEx4.getOnlyImpressionURL(), false, true, com.mbridge.msdk.click.a.a.h);
                        }
                    } catch (Throwable th2) {
                        z.d(this.b, th2.getMessage());
                    }
                }
                a(campaignEx4, com.mbridge.msdk.foundation.controller.a.f().j(), this.k);
            }
            Context contextJ3 = com.mbridge.msdk.foundation.controller.a.f().j();
            CampaignEx campaignEx5 = this.c;
            String str3 = this.k;
            if (campaignEx5 != null) {
                try {
                    if (campaignEx5.isMraid()) {
                        p pVar = new p();
                        pVar.k(campaignEx5.getRequestId());
                        pVar.l(campaignEx5.getRequestIdNotice());
                        pVar.n(campaignEx5.getId());
                        pVar.a(campaignEx5.isMraid() ? p.f3396a : p.b);
                        com.mbridge.msdk.foundation.same.report.c.a(pVar, contextJ3.getApplicationContext(), str3);
                    }
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
            d dVar = this.e;
            if (dVar != null) {
                dVar.a(this.m);
            }
        }
        int i = this.i;
        if (i != -1) {
            mBNativeAdvancedView.changeCloseBtnState(i);
        }
        c.a(this.k);
        com.mbridge.msdk.advanced.common.b.b(this.l + this.k + campaignEx.getRequestId());
        this.f3071a.sendEmptyMessageDelayed(2, 1000L);
    }

    public final void a(boolean z) {
        this.h = z;
    }

    public final void a(final CampaignEx campaignEx, final boolean z, final String str) {
        if (this.f == null) {
            this.f = new com.mbridge.msdk.click.b(com.mbridge.msdk.foundation.controller.a.f().j(), this.k);
        }
        this.f.a(new NativeListener.TrackingExListener() { // from class: com.mbridge.msdk.advanced.b.b.6
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

            @Override // com.mbridge.msdk.out.NativeListener.TrackingExListener
            public final void onLeaveApp() {
                if (b.this.e != null) {
                    b.this.e.d(b.this.m);
                }
            }

            @Override // com.mbridge.msdk.out.BaseTrackingListener
            public final void onStartRedirection(Campaign campaign, String str2) {
                ad.a(campaign, b.this.d);
            }

            @Override // com.mbridge.msdk.out.BaseTrackingListener
            public final void onFinishRedirection(Campaign campaign, String str2) {
                if (campaign == null) {
                    return;
                }
                CampaignEx campaignEx2 = (CampaignEx) campaign;
                if (campaignEx2.getLinkType() == 8 && campaignEx2.getAabEntity().getHlp() == 1) {
                    ad.a(b.this.d);
                }
            }

            @Override // com.mbridge.msdk.out.BaseTrackingListener
            public final void onRedirectionFailed(Campaign campaign, String str2) {
                if (campaign == null) {
                    return;
                }
                CampaignEx campaignEx2 = (CampaignEx) campaign;
                if (campaignEx2.getLinkType() == 8 && campaignEx2.getAabEntity().getHlp() == 1) {
                    ad.a(b.this.d);
                }
            }
        });
        if (campaignEx != null) {
            try {
                if (campaignEx.needShowIDialog()) {
                    com.mbridge.msdk.widget.dialog.a aVar = new com.mbridge.msdk.widget.dialog.a() { // from class: com.mbridge.msdk.advanced.b.b.7
                        @Override // com.mbridge.msdk.widget.dialog.a
                        public final void b() {
                        }

                        @Override // com.mbridge.msdk.widget.dialog.a
                        public final void a() {
                            if (z && !TextUtils.isEmpty(str)) {
                                com.mbridge.msdk.advanced.d.a.a(campaignEx, b.this.k, str);
                            }
                            campaignEx.setCampaignUnitId(b.this.k);
                            b.this.f.c(campaignEx);
                            if (!b.this.c.isReportClick()) {
                                b.this.c.setReportClick(true);
                                com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx);
                            }
                            if (b.this.e != null) {
                                b.this.e.b(b.this.m);
                            }
                        }

                        @Override // com.mbridge.msdk.widget.dialog.a
                        public final void c() {
                            a();
                        }
                    };
                    if (com.mbridge.msdk.click.c.a(campaignEx) && campaignEx.needShowIDialog()) {
                        if (!this.f.b(campaignEx)) {
                            e.a().a("", campaignEx, this.d.getContext(), this.k, aVar);
                            return;
                        }
                        com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx);
                        if (this.e != null) {
                            this.e.b(this.m);
                            return;
                        }
                        return;
                    }
                }
            } catch (Throwable unused) {
            }
        }
        if (z && !TextUtils.isEmpty(str)) {
            com.mbridge.msdk.advanced.d.a.a(campaignEx, this.k, str);
        }
        campaignEx.setCampaignUnitId(this.k);
        this.f.c(campaignEx);
        if (!this.c.isReportClick()) {
            this.c.setReportClick(true);
            com.mbridge.msdk.advanced.d.a.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx);
        }
        d dVar = this.e;
        if (dVar != null) {
            dVar.b(this.m);
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

    public final void c() {
        if (this.e != null) {
            this.e = null;
        }
        if (this.p != null) {
            this.p = null;
        }
        if (this.o != null) {
            this.o = null;
        }
        MBNativeAdvancedView mBNativeAdvancedView = this.d;
        if (mBNativeAdvancedView != null) {
            mBNativeAdvancedView.destroy();
        }
        if (this.g != null) {
            this.g = null;
        }
        com.mbridge.msdk.foundation.b.b.a().c(this.k);
    }

    public final void d() {
        MBNativeAdvancedWebview advancedNativeWebview;
        if (this.d == null || com.mbridge.msdk.foundation.b.b.c || (advancedNativeWebview = this.d.getAdvancedNativeWebview()) == null || advancedNativeWebview.isDestoryed()) {
            return;
        }
        com.mbridge.msdk.advanced.js.b.a(advancedNativeWebview, NativeAdvancedJsUtils.b, "");
    }

    public final void e() {
        MBNativeAdvancedWebview advancedNativeWebview;
        MBNativeAdvancedView mBNativeAdvancedView = this.d;
        if (mBNativeAdvancedView == null || (advancedNativeWebview = mBNativeAdvancedView.getAdvancedNativeWebview()) == null || advancedNativeWebview.isDestoryed()) {
            return;
        }
        h.a().a((WebView) advancedNativeWebview, NativeAdvancedJsUtils.f6397a, "");
    }

    static /* synthetic */ void a(b bVar, int i) {
        com.mbridge.msdk.advanced.common.c cVarA;
        d dVar = bVar.e;
        if (dVar != null) {
            dVar.c(bVar.m);
            bVar.e = null;
            String str = bVar.k;
            CampaignEx campaignEx = bVar.c;
            if (campaignEx != null && campaignEx.isMraid()) {
                p pVar = new p(r.q, campaignEx.getId(), campaignEx.getRequestId(), campaignEx.getRequestIdNotice(), str, v.D(com.mbridge.msdk.foundation.controller.a.f().j()));
                pVar.a(p.f3396a);
                com.mbridge.msdk.foundation.same.report.c.b(pVar, com.mbridge.msdk.foundation.controller.a.f().j(), str);
            }
        }
        if (bVar.c != null) {
            cVarA = com.mbridge.msdk.advanced.common.c.a().b(bVar.k).d(bVar.c.getRequestId()).g(bVar.c.getRequestIdNotice()).c(bVar.c.getId()).e(bVar.c.getCreativeId() + "").a(bVar.c.isBidCampaign());
        } else {
            cVarA = null;
        }
        String str2 = bVar.k;
        if (cVarA != null) {
            cVarA.a(com.tkay.expressad.mbbanner.a.b.c.c);
            cVarA.a(i);
            if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                com.mbridge.msdk.foundation.same.report.b.a().a(cVarA.b());
            } else {
                com.mbridge.msdk.foundation.same.report.c.a(cVarA.b(), com.mbridge.msdk.foundation.controller.a.f().j(), str2);
            }
        }
        MBNativeAdvancedView mBNativeAdvancedView = bVar.d;
        if (mBNativeAdvancedView != null) {
            mBNativeAdvancedView.setVisibility(8);
            bVar.e();
            MBNativeAdvancedWebview advancedNativeWebview = bVar.d.getAdvancedNativeWebview();
            if (advancedNativeWebview != null) {
                advancedNativeWebview.finishAdSession();
            }
        }
        Handler handler = bVar.f3071a;
        if (handler != null) {
            handler.removeCallbacksAndMessages(null);
        }
    }
}
