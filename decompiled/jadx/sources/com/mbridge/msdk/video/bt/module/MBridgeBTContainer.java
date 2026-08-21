package com.mbridge.msdk.video.bt.module;

import android.content.Context;
import android.content.res.Configuration;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Base64;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.FrameLayout;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.f;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.m;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.mbridge.msdk.out.Campaign;
import com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode;
import com.mbridge.msdk.video.bt.module.b.h;
import com.mbridge.msdk.video.dynview.e.d;
import com.mbridge.msdk.video.dynview.e.g;
import com.mbridge.msdk.video.js.a.c;
import com.mbridge.msdk.video.js.a.j;
import com.mbridge.msdk.video.js.container.AbstractJSContainer;
import com.mbridge.msdk.videocommon.a;
import com.mbridge.msdk.widget.FeedBackButton;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Random;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class MBridgeBTContainer extends AbstractJSContainer implements com.mbridge.msdk.video.js.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f4101a = MBridgeBTContainer.class.getSimpleName();
    private String A;
    private boolean B;
    private List<CampaignEx> C;
    private List<com.mbridge.msdk.videocommon.download.a> D;
    private com.mbridge.msdk.video.bt.module.a.a E;
    private h F;
    private h G;
    private com.mbridge.msdk.video.bt.module.a.c H;
    private String I;
    private String J;
    private boolean K;
    private int L;
    private boolean M;
    private int N;
    private String O;
    private d P;
    private int b;
    private int c;
    private FrameLayout d;
    private MBridgeBTLayout e;
    private WindVaneWebView f;
    private LayoutInflater g;
    private Context h;
    private TextView i;
    private boolean y;
    private boolean z;

    @Override // com.mbridge.msdk.video.js.d
    public void click(int i, String str) {
    }

    @Override // com.mbridge.msdk.video.js.d
    public void handlerH5Exception(int i, String str) {
    }

    public MBridgeBTContainer(Context context) {
        super(context);
        this.b = 0;
        this.c = 1;
        this.y = false;
        this.z = true;
        this.B = false;
        this.L = 1;
        init(context);
    }

    public MBridgeBTContainer(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.b = 0;
        this.c = 1;
        this.y = false;
        this.z = true;
        this.B = false;
        this.L = 1;
        init(context);
    }

    public void init(Context context) {
        this.h = context;
        this.g = LayoutInflater.from(context);
    }

    /* JADX WARN: Multi-variable type inference failed */
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
    public void onCreate() {
        String cMPTEntryUrl;
        WindVaneWebView windVaneWebViewA;
        CampaignEx campaignEx;
        try {
            int iFindLayout = findLayout("mbridge_bt_container");
            if (iFindLayout < 0) {
                a("mbridge_bt_container layout null");
                return;
            }
            FrameLayout frameLayout = (FrameLayout) this.g.inflate(iFindLayout, this);
            this.d = frameLayout;
            if (frameLayout == null) {
                a("ViewIds null");
                return;
            }
            this.J = "";
            if (this.C == null || this.C.size() <= 0) {
                cMPTEntryUrl = "";
            } else {
                CampaignEx campaignEx2 = this.C.get(0);
                cMPTEntryUrl = campaignEx2.getCMPTEntryUrl();
                this.J = campaignEx2.getRequestId();
            }
            a.C0309a c0309aA = com.mbridge.msdk.videocommon.a.a(this.k + "_" + this.J + "_" + cMPTEntryUrl);
            RelativeLayout.LayoutParams layoutParams = null;
            Object[] objArr = 0;
            if (c0309aA != null) {
                this.A = c0309aA.b();
                z.a(f4101a, "get BT wraper.getTag = " + this.A);
                c0309aA.a("");
                windVaneWebViewA = c0309aA.a();
            } else {
                windVaneWebViewA = null;
            }
            this.f = windVaneWebViewA;
            com.mbridge.msdk.videocommon.a.b(this.k + "_" + this.J + "_" + cMPTEntryUrl);
            if (this.f != null) {
                com.mbridge.msdk.video.js.factory.b bVar = new com.mbridge.msdk.video.js.factory.b(this.j, this, this.f);
                registerJsFactory(bVar);
                this.f.setApiManagerJSFactory(bVar);
                if (this.f.getParent() != null) {
                    a("preload template webview is null or load error");
                    return;
                }
                if (this.f.getObject() instanceof j) {
                    bVar.a((j) this.f.getObject());
                    if (this.f != null) {
                        JSONObject jSONObject = new JSONObject();
                        jSONObject.put(com.mbridge.msdk.foundation.same.a.s, ae.d(getContext()));
                        try {
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put("name", this.o.a());
                            jSONObject2.put("amount", this.o.b());
                            jSONObject2.put("id", this.p);
                            jSONObject.put("userId", this.n);
                            jSONObject.put("reward", jSONObject2);
                            jSONObject.put("playVideoMute", this.q);
                            jSONObject.put("extra", this.O);
                        } catch (JSONException e) {
                            z.a(f4101a, e.getMessage());
                        } catch (Exception e2) {
                            z.a(f4101a, e2.getMessage());
                        }
                        this.G = new com.mbridge.msdk.video.bt.module.b.d(c(), "");
                        getJSNotifyProxy().a(jSONObject.toString());
                        getJSCommon().b(true);
                        getJSCommon().a(new c());
                    }
                    ((com.mbridge.msdk.video.js.a.c) getJSCommon()).m.a();
                }
                this.f.setBackgroundColor(0);
                LinkedHashMap<String, View> linkedHashMapB = com.mbridge.msdk.video.bt.a.c.a().b(this.k, this.J);
                if (linkedHashMapB != null && linkedHashMapB.containsKey(this.A)) {
                    View view = linkedHashMapB.get(this.A);
                    if (view instanceof MBridgeBTLayout) {
                        MBridgeBTLayout mBridgeBTLayout = (MBridgeBTLayout) view;
                        this.e = mBridgeBTLayout;
                        mBridgeBTLayout.addView(this.f, 0, new FrameLayout.LayoutParams(-1, -1));
                        com.mbridge.msdk.foundation.b.b.a().a(this.k + "_1", new com.mbridge.msdk.foundation.b.a() { // from class: com.mbridge.msdk.video.bt.module.MBridgeBTContainer.1
                            @Override // com.mbridge.msdk.foundation.b.a
                            public final void a() {
                                String string;
                                try {
                                    JSONObject jSONObject3 = new JSONObject();
                                    if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                                        jSONObject3.put("status", 1);
                                    }
                                    string = jSONObject3.toString();
                                } catch (Throwable th) {
                                    z.c(MBridgeBTContainer.f4101a, th.getMessage(), th);
                                    string = "";
                                }
                                com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeBTContainer.this.f, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                            }

                            @Override // com.mbridge.msdk.foundation.b.a
                            public final void b() {
                                String string;
                                try {
                                    JSONObject jSONObject3 = new JSONObject();
                                    if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                                        jSONObject3.put("status", 2);
                                    }
                                    string = jSONObject3.toString();
                                } catch (Throwable th) {
                                    z.c(MBridgeBTContainer.f4101a, th.getMessage(), th);
                                    string = "";
                                }
                                com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeBTContainer.this.f, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                            }

                            @Override // com.mbridge.msdk.foundation.b.a
                            public final void a(String str) {
                                String string;
                                try {
                                    JSONObject jSONObject3 = new JSONObject();
                                    if (com.mbridge.msdk.foundation.controller.a.f().j() != null) {
                                        jSONObject3.put("status", 2);
                                    }
                                    string = jSONObject3.toString();
                                } catch (Throwable th) {
                                    z.c(MBridgeBTContainer.f4101a, th.getMessage(), th);
                                    string = "";
                                }
                                com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeBTContainer.this.f, "onFeedbackAlertStatusNotify", Base64.encodeToString(string.getBytes(), 2));
                            }
                        });
                        com.mbridge.msdk.foundation.b.b.a().c(this.k + "_2");
                        FeedBackButton feedBackButtonB = com.mbridge.msdk.foundation.b.b.a().b(this.k + "_1");
                        if (com.mbridge.msdk.foundation.b.b.a().b() && feedBackButtonB != null) {
                            try {
                                layoutParams = (RelativeLayout.LayoutParams) feedBackButtonB.getLayoutParams();
                            } catch (Exception e3) {
                                e3.printStackTrace();
                            }
                            if (layoutParams == null) {
                                layoutParams = new RelativeLayout.LayoutParams(com.mbridge.msdk.foundation.b.b.f3336a, com.mbridge.msdk.foundation.b.b.b);
                            }
                            layoutParams.topMargin = ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 10.0f);
                            layoutParams.leftMargin = ae.b(com.mbridge.msdk.foundation.controller.a.f().j(), 10.0f);
                            feedBackButtonB.setLayoutParams(layoutParams);
                            ViewGroup viewGroup = (ViewGroup) feedBackButtonB.getParent();
                            if (viewGroup != null) {
                                viewGroup.removeView(feedBackButtonB);
                            }
                            this.e.addView(feedBackButtonB);
                        }
                        this.e.setTag(this.A);
                        linkedHashMapB.put(this.A, this.e);
                        Iterator<View> it = linkedHashMapB.values().iterator();
                        while (true) {
                            if (!it.hasNext()) {
                                break;
                            }
                            View next = it.next();
                            if (next instanceof MBridgeBTRootLayout) {
                                MBridgeBTRootLayout mBridgeBTRootLayout = (MBridgeBTRootLayout) next;
                                this.I = mBridgeBTRootLayout.getInstanceId();
                                this.d.addView(mBridgeBTRootLayout, new FrameLayout.LayoutParams(-1, -1));
                                break;
                            }
                        }
                        linkedHashMapB.remove(this.I);
                        linkedHashMapB.put(this.I, this);
                    }
                    com.mbridge.msdk.video.bt.a.c.a().a(this.k, this.q);
                    com.mbridge.msdk.video.bt.a.c.a().a(this.A, this.J);
                    com.mbridge.msdk.video.bt.a.c.a().a(this.I, this.J);
                    com.mbridge.msdk.video.bt.a.c.a().a(this.k + "_" + this.J, this.j);
                    try {
                        com.mbridge.msdk.foundation.same.f.b.a().execute(new a(this.C, getContext().getApplicationContext(), this.k, this.l));
                    } catch (Throwable unused) {
                        z.a(f4101a, "remove campaign failed");
                    }
                    if (this.C == null || this.C.size() <= 0) {
                        return;
                    }
                    a(this.m, this.C.get(0));
                    return;
                }
                a("big template webviewLayout is null");
                return;
            }
            if (this.C != null && this.C.size() > 0 && (campaignEx = this.C.get(0)) != null && campaignEx.isDynamicView()) {
                try {
                    com.mbridge.msdk.foundation.same.f.b.b().execute(new b(this.C, this.k));
                } catch (Exception unused2) {
                }
                Context context = this.h;
                if (this.P == null) {
                    a("ChoiceOneCallback is null");
                    return;
                }
                HashMap map = new HashMap();
                map.put(com.tkay.expressad.video.dynview.a.a.D, this.P);
                com.mbridge.msdk.video.dynview.b.a();
                new com.mbridge.msdk.video.dynview.h.a(context, this.C, new g() { // from class: com.mbridge.msdk.video.bt.module.MBridgeBTContainer.2
                    @Override // com.mbridge.msdk.video.dynview.e.g
                    public final void a(com.mbridge.msdk.video.dynview.a aVar) {
                        CampaignEx campaignEx3;
                        String str;
                        if (aVar != null) {
                            if (MBridgeBTContainer.this.d != null && aVar.a() != null) {
                                MBridgeBTContainer.this.d.removeAllViews();
                                MBridgeBTContainer.this.d.addView(aVar.a());
                                MBridgeBTContainer mBridgeBTContainer = MBridgeBTContainer.this;
                                mBridgeBTContainer.i = (TextView) mBridgeBTContainer.findViewById(mBridgeBTContainer.findID("mbridge_choice_one_countdown_tv"));
                                if (MBridgeBTContainer.this.E != null) {
                                    MBridgeBTContainer.this.E.a();
                                    MBridgeBTContainer.this.E.a(2, MBridgeBTContainer.this.l, MBridgeBTContainer.this.k);
                                }
                                if (MBridgeBTContainer.this.C == null || MBridgeBTContainer.this.C.size() <= 0 || (campaignEx3 = (CampaignEx) MBridgeBTContainer.this.C.get(0)) == null) {
                                    return;
                                }
                                if (campaignEx3.isBidCampaign()) {
                                    MBridgeBTContainer.a(MBridgeBTContainer.this, campaignEx3);
                                }
                                String onlyImpressionURL = campaignEx3.getOnlyImpressionURL();
                                com.mbridge.msdk.videocommon.d.c cVarA = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), MBridgeBTContainer.this.k);
                                int iC = cVarA != null ? cVarA.C() : 1;
                                if (campaignEx3.getSpareOfferFlag() == 1) {
                                    str = onlyImpressionURL + "&to=1&cbt=" + campaignEx3.getCbt() + "&tmorl=" + iC;
                                } else {
                                    str = onlyImpressionURL + "&to=0&cbt=" + campaignEx3.getCbt() + "&tmorl=" + iC;
                                }
                                com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx3, MBridgeBTContainer.this.k, str, false, true, com.mbridge.msdk.click.a.a.h);
                                com.mbridge.msdk.foundation.same.a.d.f3400a.put(campaignEx3.getOnlyImpressionURL(), Long.valueOf(System.currentTimeMillis()));
                                MBridgeBTContainer.this.a(campaignEx3);
                                return;
                            }
                            MBridgeBTContainer.this.a("nativeview is null");
                        }
                    }

                    @Override // com.mbridge.msdk.video.dynview.e.g
                    public final void a(com.mbridge.msdk.video.dynview.c.a aVar) {
                        String str;
                        if (aVar != null) {
                            str = "errorCode:" + aVar.a() + "Msg:" + aVar.b();
                        } else {
                            str = "";
                        }
                        MBridgeBTContainer.this.a("nativeview is null" + str);
                    }
                }, map);
                return;
            }
            a("big template webview is null");
        } catch (Throwable th) {
            a("onCreate exception " + th);
        }
    }

    private static final class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private List<CampaignEx> f4105a;
        private Context b;
        private String c;
        private String d;

        public a(List<CampaignEx> list, Context context, String str, String str2) {
            this.f4105a = list;
            this.b = context;
            this.c = str;
            this.d = str2;
        }

        @Override // java.lang.Runnable
        public final void run() {
            List<CampaignEx> list = this.f4105a;
            if (list == null || list.size() <= 0) {
                return;
            }
            try {
                f.a(i.a(this.b)).a(this.c, this.f4105a);
                com.mbridge.msdk.videocommon.a.a.a().c(this.d, this.f4105a.get(0).getAdType());
            } catch (Exception unused) {
                z.a(MBridgeBTContainer.f4101a, "remove campaign failed");
            }
        }
    }

    @Override // com.mbridge.msdk.video.js.container.AbstractJSContainer
    protected final void a(String str) {
        h hVar = this.F;
        if (hVar != null) {
            hVar.a(str);
        }
        super.a(str);
    }

    protected final void a(CampaignEx campaignEx) {
        if (campaignEx != null) {
            try {
                List<String> pv_urls = campaignEx.getPv_urls();
                if (pv_urls == null || pv_urls.size() <= 0) {
                    return;
                }
                Iterator<String> it = pv_urls.iterator();
                while (it.hasNext()) {
                    com.mbridge.msdk.click.b.a(com.mbridge.msdk.foundation.controller.a.f().j(), campaignEx, this.k, it.next(), false, true);
                }
            } catch (Throwable th) {
                z.d(f4101a, th.getMessage());
            }
        }
    }

    @Override // com.mbridge.msdk.video.js.container.AbstractJSContainer, android.view.View
    public void onConfigurationChanged(Configuration configuration) {
        try {
            LinkedHashMap<String, View> linkedHashMapB = com.mbridge.msdk.video.bt.a.c.a().b(this.k, this.J);
            if (linkedHashMapB == null || linkedHashMapB.size() <= 0) {
                return;
            }
            for (View view : linkedHashMapB.values()) {
                if (view instanceof MBTempContainer) {
                    ((MBTempContainer) view).onConfigurationChanged(configuration);
                } else if (view instanceof MBridgeBTWebView) {
                    ((MBridgeBTWebView) view).onConfigurationChanged(configuration);
                } else if (view instanceof MBridgeBTLayout) {
                    ((MBridgeBTLayout) view).onConfigurationChanged(configuration);
                }
            }
        } catch (Throwable th) {
            z.a(f4101a, th.getMessage());
        }
    }

    private com.mbridge.msdk.video.bt.module.a.c c() {
        if (this.H == null) {
            this.H = new com.mbridge.msdk.video.bt.module.a.c() { // from class: com.mbridge.msdk.video.bt.module.MBridgeBTContainer.3
                @Override // com.mbridge.msdk.video.bt.module.a.c
                public final void a(String str) {
                    if (MBridgeBTContainer.this.f != null) {
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.put("id", str);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put(MBridgeConstans.PLACEMENT_ID, MBridgeBTContainer.this.l);
                            jSONObject2.put("unitId", MBridgeBTContainer.this.k);
                            jSONObject.put("data", jSONObject2);
                            z.a(MBridgeBTContainer.f4101a, " BT Call H5 onAdShow " + jSONObject.toString());
                        } catch (JSONException e) {
                            z.a(MBridgeBTContainer.f4101a, e.getMessage());
                        }
                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeBTContainer.this.f, "onSubPlayTemplateViewPlayStart", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    }
                }

                @Override // com.mbridge.msdk.video.bt.module.a.c
                public final void a(String str, boolean z, com.mbridge.msdk.videocommon.b.d dVar) {
                    if (MBridgeBTContainer.this.f != null) {
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.put("id", str);
                            JSONObject jSONObject2 = new JSONObject();
                            if (dVar != null) {
                                JSONObject jSONObject3 = new JSONObject();
                                jSONObject3.put("name", dVar.a());
                                jSONObject3.put("amount", dVar.b());
                                jSONObject2.put("reward", jSONObject3);
                            }
                            jSONObject2.put("isComplete", z);
                            jSONObject2.put("convert", z ? 1 : 2);
                            jSONObject.put("data", jSONObject2);
                            z.a(MBridgeBTContainer.f4101a, " BT Call H5 onAdClose " + jSONObject.toString());
                        } catch (JSONException e) {
                            z.a(MBridgeBTContainer.f4101a, e.getMessage());
                        }
                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeBTContainer.this.f, "onSubPlayTemplateViewCloseBtnClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeBTContainer.this.f, "onSubPlayTemplateViewDismissed", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    }
                }

                @Override // com.mbridge.msdk.video.bt.module.a.c
                public final void a(boolean z, int i) {
                    MBridgeBTContainer.this.M = z;
                    MBridgeBTContainer.this.N = i;
                }

                @Override // com.mbridge.msdk.video.bt.module.a.c
                public final void a(String str, String str2) {
                    if (MBridgeBTContainer.this.f != null) {
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.put("id", str);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put(MBridgeConstans.PLACEMENT_ID, MBridgeBTContainer.this.l);
                            jSONObject2.put("unitId", MBridgeBTContainer.this.k);
                            jSONObject2.put("error", str2);
                            jSONObject.put("data", jSONObject2);
                            z.a(MBridgeBTContainer.f4101a, " BT Call H5 onShowFail " + jSONObject.toString());
                        } catch (JSONException e) {
                            z.a(MBridgeBTContainer.f4101a, e.getMessage());
                        }
                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeBTContainer.this.f, "onSubPlayTemplateViewPlayFailed", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    }
                }

                @Override // com.mbridge.msdk.video.bt.module.a.c
                public final void a(String str, String str2, String str3) {
                    if (MBridgeBTContainer.this.f != null) {
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.put("id", str);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put(MBridgeConstans.PLACEMENT_ID, str2);
                            jSONObject2.put("unitId", str3);
                            jSONObject.put("data", jSONObject2);
                            z.a(MBridgeBTContainer.f4101a, " BT Call H5 onVideoAdClicked " + jSONObject.toString());
                        } catch (JSONException e) {
                            z.a(MBridgeBTContainer.f4101a, e.getMessage());
                        }
                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeBTContainer.this.f, "onSubPlayTemplateViewClicked", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    }
                }

                @Override // com.mbridge.msdk.video.bt.module.a.c
                public final void b(String str, String str2, String str3) {
                    if (MBridgeBTContainer.this.f != null) {
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.put("id", str);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put("convert", true);
                            jSONObject2.put(MBridgeConstans.PLACEMENT_ID, str2);
                            jSONObject2.put("unitId", str3);
                            jSONObject.put("data", jSONObject2);
                            z.a(MBridgeBTContainer.f4101a, " BT Call H5 onVideoComplete " + jSONObject.toString());
                        } catch (JSONException e) {
                            z.a(MBridgeBTContainer.f4101a, e.getMessage());
                        }
                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeBTContainer.this.f, "onSubPlayTemplateViewPlayCompleted", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    }
                }

                @Override // com.mbridge.msdk.video.bt.module.a.c
                public final void c(String str, String str2, String str3) {
                    if (MBridgeBTContainer.this.f != null) {
                        JSONObject jSONObject = new JSONObject();
                        try {
                            jSONObject.put("id", str);
                            JSONObject jSONObject2 = new JSONObject();
                            jSONObject2.put(MBridgeConstans.PLACEMENT_ID, str2);
                            jSONObject2.put("unitId", str3);
                            jSONObject.put("data", jSONObject2);
                            z.a(MBridgeBTContainer.f4101a, " BT Call H5 onEndcardShow " + jSONObject.toString());
                        } catch (JSONException e) {
                            z.a(MBridgeBTContainer.f4101a, e.getMessage());
                        }
                        com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) MBridgeBTContainer.this.f, "onSubPlayTemplateViewEndcardShowSuccess", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
                    }
                }

                @Override // com.mbridge.msdk.video.bt.module.a.c
                public final void a(String str, int i, String str2, String str3) {
                    if (MBridgeBTContainer.this.F != null) {
                        MBridgeBTContainer.this.F.a(i, str2, str3);
                    }
                }
            };
        }
        return this.H;
    }

    @Override // com.mbridge.msdk.video.js.container.AbstractJSContainer
    public void onResume() {
        CampaignEx campaignEx;
        super.onResume();
        List<CampaignEx> list = this.C;
        if (list != null && list.size() > 0 && (campaignEx = this.C.get(0)) != null && campaignEx.isDynamicView()) {
            com.mbridge.msdk.video.dynview.b.a aVarA = com.mbridge.msdk.video.dynview.b.a.a();
            if (aVarA.f4133a != null) {
                aVarA.f4133a.a();
            }
        }
        if (com.mbridge.msdk.foundation.b.b.c) {
            return;
        }
        try {
            LinkedHashMap<String, View> linkedHashMapB = com.mbridge.msdk.video.bt.a.c.a().b(this.k, this.J);
            if (linkedHashMapB == null || linkedHashMapB.size() <= 0) {
                return;
            }
            for (View view : linkedHashMapB.values()) {
                if (view instanceof MBridgeBTVideoView) {
                    ((MBridgeBTVideoView) view).onResume();
                }
            }
        } catch (Throwable th) {
            z.a(f4101a, th.getMessage());
        }
    }

    @Override // com.mbridge.msdk.video.js.container.AbstractJSContainer
    public void onStop() {
        CampaignEx campaignEx;
        super.onStop();
        List<CampaignEx> list = this.C;
        if (list != null && list.size() > 0 && (campaignEx = this.C.get(0)) != null && campaignEx.isDynamicView()) {
            com.mbridge.msdk.video.dynview.b.a.a().b();
        }
        try {
            LinkedHashMap<String, View> linkedHashMapB = com.mbridge.msdk.video.bt.a.c.a().b(this.k, this.J);
            if (linkedHashMapB == null || linkedHashMapB.size() <= 0) {
                return;
            }
            for (View view : linkedHashMapB.values()) {
                if (view instanceof MBridgeBTVideoView) {
                    ((MBridgeBTVideoView) view).onStop();
                }
            }
        } catch (Throwable th) {
            z.a(f4101a, th.getMessage());
        }
    }

    public void onBackPressed() {
        try {
            LinkedHashMap<String, View> linkedHashMapB = com.mbridge.msdk.video.bt.a.c.a().b(this.k, this.J);
            if (linkedHashMapB == null || linkedHashMapB.size() <= 0) {
                return;
            }
            for (View view : linkedHashMapB.values()) {
                if (view instanceof MBTempContainer) {
                    ((MBTempContainer) view).onBackPressed();
                } else if (view instanceof MBridgeBTWebView) {
                    ((MBridgeBTWebView) view).onBackPressed();
                } else if (view instanceof MBridgeBTLayout) {
                    ((MBridgeBTLayout) view).onBackPressed();
                }
            }
        } catch (Throwable th) {
            z.a(f4101a, th.getMessage());
        }
    }

    @Override // com.mbridge.msdk.video.js.container.AbstractJSContainer
    public void onPause() {
        CampaignEx campaignEx;
        super.onPause();
        List<CampaignEx> list = this.C;
        if (list != null && list.size() > 0 && (campaignEx = this.C.get(0)) != null && campaignEx.isDynamicView()) {
            com.mbridge.msdk.video.dynview.b.a aVarA = com.mbridge.msdk.video.dynview.b.a.a();
            if (aVarA.f4133a != null) {
                aVarA.f4133a.b();
            }
        }
        try {
            LinkedHashMap<String, View> linkedHashMapB = com.mbridge.msdk.video.bt.a.c.a().b(this.k, this.J);
            if (linkedHashMapB == null || linkedHashMapB.size() <= 0) {
                return;
            }
            for (View view : linkedHashMapB.values()) {
                if (view instanceof MBridgeBTVideoView) {
                    ((MBridgeBTVideoView) view).onPause();
                }
            }
        } catch (Throwable th) {
            z.a(f4101a, th.getMessage());
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    public void onAdClose() {
        if (this.j != null) {
            this.j.finish();
        }
    }

    @Override // com.mbridge.msdk.video.js.container.AbstractJSContainer
    public void onDestroy() {
        if (this.B) {
            return;
        }
        this.B = true;
        super.onDestroy();
        com.mbridge.msdk.video.bt.a.c.a().e(this.k + "_" + this.J);
        try {
            if (this.f != null) {
                ViewGroup viewGroup = (ViewGroup) this.f.getParent();
                if (viewGroup != null) {
                    viewGroup.removeAllViews();
                }
                this.f.clearWebView();
                this.f.release();
            }
            if (this.H != null) {
                this.H = null;
            }
            if (this.E != null) {
                this.E = null;
            }
            if (this.h != null) {
                this.h = null;
            }
            if (this.C != null && this.C.size() > 0) {
                for (CampaignEx campaignEx : this.C) {
                    if (campaignEx != null && campaignEx.getRewardTemplateMode() != null) {
                        com.mbridge.msdk.videocommon.a.b(this.k + "_" + campaignEx.getRequestId() + "_" + campaignEx.getRewardTemplateMode().e());
                    }
                }
                com.mbridge.msdk.video.dynview.b.a.a().b();
            }
            com.mbridge.msdk.video.bt.a.c.a().g(this.A);
            com.mbridge.msdk.video.bt.a.c.a().h(this.k);
            com.mbridge.msdk.video.bt.a.c.a().b(this.k, this.J).remove(this.A);
            com.mbridge.msdk.video.bt.a.c.a().b(this.k, this.J).remove(this.I);
            com.mbridge.msdk.video.bt.a.c.a().b(this.k, this.J).clear();
        } catch (Throwable th) {
            z.a(f4101a, th.getMessage());
        }
    }

    @Override // com.mbridge.msdk.video.js.b
    public void reactDeveloper(Object obj, String str) {
        com.mbridge.msdk.videocommon.b.c cVarZ;
        if (this.E != null && !TextUtils.isEmpty(str)) {
            try {
                JSONObject jSONObject = new JSONObject(str);
                int iOptInt = jSONObject.optInt("type");
                int iOptInt2 = jSONObject.optInt("hit");
                String strOptString = jSONObject.optString("unitId", getUnitId());
                String strOptString2 = jSONObject.optString(MBridgeConstans.PLACEMENT_ID, getPlacementId());
                JSONObject jSONObjectOptJSONObject = jSONObject.optJSONObject("data");
                CampaignEx campaignEx = this.C.get(0);
                if (iOptInt == 1) {
                    boolean zOptBoolean = jSONObjectOptJSONObject.optBoolean("expired");
                    if (campaignEx != null) {
                        if (zOptBoolean) {
                            campaignEx.setSpareOfferFlag(1);
                        } else {
                            campaignEx.setSpareOfferFlag(0);
                        }
                    }
                    this.K = isNativeKilledCallback(campaignEx);
                }
                switch (iOptInt) {
                    case 1:
                        if (this.K) {
                            if (!a(1)) {
                                this.E.a();
                            }
                        } else if (iOptInt2 != this.L) {
                            this.E.a();
                        }
                        this.E.a(2, strOptString2, strOptString);
                        break;
                    case 2:
                        JSONObject jSONObjectOptJSONObject2 = jSONObjectOptJSONObject.optJSONObject("error");
                        String strOptString3 = jSONObjectOptJSONObject2 != null ? jSONObjectOptJSONObject2.optString("msg") : "";
                        if (TextUtils.isEmpty(strOptString3)) {
                            strOptString3 = jSONObjectOptJSONObject.optString("error");
                        }
                        if (this.K) {
                            if (!a(1)) {
                                this.E.a(strOptString3);
                            }
                        } else if (iOptInt2 != this.L) {
                            this.E.a(strOptString3);
                        }
                        this.E.a(4, strOptString2, strOptString);
                        break;
                    case 3:
                        if (this.K) {
                            if (!a(2)) {
                                this.E.a(strOptString2, strOptString);
                            }
                        } else if (iOptInt2 != this.L) {
                            this.E.a(strOptString2, strOptString);
                        }
                        this.E.a(5, strOptString2, strOptString);
                        break;
                    case 4:
                        if (this.K) {
                            if (!a(3)) {
                                this.E.b(strOptString2, strOptString);
                            }
                        } else if (iOptInt2 != this.L) {
                            this.E.b(strOptString2, strOptString);
                        }
                        this.E.a(6, strOptString2, strOptString);
                        break;
                    case 5:
                        boolean zOptBoolean2 = jSONObject.optBoolean("isAutoClick");
                        if (this.K) {
                            if (!a(4) && !a(zOptBoolean2)) {
                                this.E.a(zOptBoolean2, strOptString2, strOptString);
                            }
                        } else if (iOptInt2 != this.L) {
                            this.E.a(zOptBoolean2, strOptString2, strOptString);
                        }
                        break;
                    case 6:
                        boolean z = jSONObjectOptJSONObject.optInt("convert") == 1;
                        JSONObject jSONObjectOptJSONObject3 = jSONObjectOptJSONObject.optJSONObject("reward");
                        CampaignEx campaignWithBackData = CampaignEx.parseCampaignWithBackData(jSONObjectOptJSONObject.optJSONObject(MBInterstitialActivity.INTENT_CAMAPIGN));
                        com.mbridge.msdk.videocommon.b.d dVarA = com.mbridge.msdk.videocommon.b.d.a(jSONObjectOptJSONObject3);
                        if (dVarA == null) {
                            dVarA = this.o;
                        }
                        String strOptString4 = jSONObjectOptJSONObject.optString("extra");
                        if (!TextUtils.isEmpty(strOptString4)) {
                            this.O = strOptString4;
                        }
                        this.E.a(7, strOptString2, strOptString);
                        if (this.K) {
                            if (!a(5)) {
                                if (((this.m == null || (cVarZ = this.m.z()) == null) ? 1 : cVarZ.a()) == 0 && a(1)) {
                                    this.E.a("");
                                }
                                if (this.r && (this.t == com.mbridge.msdk.foundation.same.a.w || this.t == com.mbridge.msdk.foundation.same.a.x)) {
                                    this.E.a(this.M, this.N);
                                }
                                if (!z) {
                                    dVarA.a(0);
                                }
                                this.E.a(z, dVarA);
                                z.a(f4101a, "sendToServerRewardInfo");
                                if (!this.r && z) {
                                    if (campaignWithBackData != null) {
                                        com.mbridge.msdk.video.module.b.b.a(campaignWithBackData, dVarA, strOptString, this.n, this.O);
                                    } else {
                                        com.mbridge.msdk.video.module.b.b.a(campaignEx, dVarA, strOptString, this.n, this.O);
                                    }
                                }
                            }
                        } else if (iOptInt2 != this.L) {
                            if (this.r && (this.t == com.mbridge.msdk.foundation.same.a.w || this.t == com.mbridge.msdk.foundation.same.a.x)) {
                                this.E.a(this.M, this.N);
                            }
                            if (!z) {
                                dVarA.a(0);
                            }
                            this.E.a(z, dVarA);
                            z.a(f4101a, "sendToServerRewardInfo");
                            if (!this.r && z) {
                                if (campaignWithBackData != null) {
                                    com.mbridge.msdk.video.module.b.b.a(campaignWithBackData, dVarA, strOptString, this.n, this.O);
                                } else {
                                    com.mbridge.msdk.video.module.b.b.a(campaignEx, dVarA, strOptString, this.n, this.O);
                                }
                            }
                        }
                        break;
                }
                a(obj);
                return;
            } catch (JSONException e) {
                a(obj, e.getMessage());
                z.a(f4101a, e.getMessage());
                return;
            }
        }
        a(obj, "listener is null");
    }

    public void appendSubView(MBridgeBTContainer mBridgeBTContainer, MBTempContainer mBTempContainer, JSONObject jSONObject) {
        try {
            FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-1, -1);
            if (jSONObject != null) {
                Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
                int iOptInt = jSONObject.optInt(TtmlNode.LEFT, com.tkay.expressad.video.bt.a.c.f7167a);
                int iOptInt2 = jSONObject.optInt("top", com.tkay.expressad.video.bt.a.c.f7167a);
                int iOptInt3 = jSONObject.optInt(TtmlNode.RIGHT, com.tkay.expressad.video.bt.a.c.f7167a);
                int iOptInt4 = jSONObject.optInt("bottom", com.tkay.expressad.video.bt.a.c.f7167a);
                if (iOptInt != -999 && contextJ != null) {
                    layoutParams.leftMargin = ae.b(contextJ, iOptInt);
                }
                if (iOptInt2 != -999 && contextJ != null) {
                    layoutParams.topMargin = ae.b(contextJ, iOptInt2);
                }
                if (iOptInt3 != -999 && contextJ != null) {
                    layoutParams.rightMargin = ae.b(contextJ, iOptInt3);
                }
                if (iOptInt4 != -999 && contextJ != null) {
                    layoutParams.bottomMargin = ae.b(contextJ, iOptInt4);
                }
                int iOptInt5 = jSONObject.optInt("width");
                int iOptInt6 = jSONObject.optInt("height");
                if (iOptInt5 > 0) {
                    layoutParams.width = iOptInt5;
                }
                if (iOptInt6 > 0) {
                    layoutParams.height = iOptInt6;
                }
            }
            mBridgeBTContainer.addView(mBTempContainer, layoutParams);
            mBTempContainer.setActivity(this.j);
            mBTempContainer.setMute(this.q);
            mBTempContainer.setBidCampaign(this.y);
            mBTempContainer.setIV(this.r);
            mBTempContainer.setBigOffer(this.z);
            mBTempContainer.setIVRewardEnable(this.t, this.u, this.v);
            mBTempContainer.setShowRewardListener(this.G);
            mBTempContainer.setCampaignDownLoadTask(d(mBTempContainer.getCampaign()));
            mBTempContainer.setMBridgeTempCallback(c());
            mBTempContainer.setH5Cbp(getJSCommon().a());
            mBTempContainer.setWebViewFront(getJSCommon().b());
            mBTempContainer.init(this.h);
            mBTempContainer.onCreate();
        } catch (Throwable th) {
            z.a(f4101a, th.getMessage());
        }
    }

    private com.mbridge.msdk.videocommon.download.a d(CampaignEx campaignEx) {
        List<com.mbridge.msdk.videocommon.download.a> list = this.D;
        if (list == null || campaignEx == null) {
            return null;
        }
        for (com.mbridge.msdk.videocommon.download.a aVar : list) {
            if (aVar.g().getId().equals(campaignEx.getId())) {
                z.a(f4101a, "tempContainer task initSuccess");
                return aVar;
            }
        }
        return null;
    }

    public void broadcast(String str, JSONObject jSONObject) {
        if (this.f != null) {
            try {
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("code", this.b);
                jSONObject2.put("id", this.A);
                jSONObject2.put("eventName", str);
                jSONObject2.put("data", jSONObject);
                com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) this.f, "broadcast", Base64.encodeToString(jSONObject2.toString().getBytes(), 2));
            } catch (Exception unused) {
                com.mbridge.msdk.video.bt.a.c.a().a((WebView) this.f, "broadcast", this.A);
            }
        }
    }

    public int findID(String str) {
        return s.a(getContext(), str, "id");
    }

    public int findLayout(String str) {
        return s.a(getContext(), str, "layout");
    }

    public void setBTContainerCallback(com.mbridge.msdk.video.bt.module.a.a aVar) {
        this.E = aVar;
    }

    public void setCampaigns(List<CampaignEx> list) {
        this.C = list;
    }

    public void setCampaignDownLoadTasks(List<com.mbridge.msdk.videocommon.download.a> list) {
        this.D = list;
    }

    public void setJSFactory(com.mbridge.msdk.video.js.factory.b bVar) {
        this.x = bVar;
    }

    public void setShowRewardVideoListener(h hVar) {
        this.F = hVar;
    }

    public void setChoiceOneCallback(d dVar) {
        this.P = dVar;
    }

    public boolean isNativeKilledCallback(CampaignEx campaignEx) {
        if (getJSCommon().a() == 1 || campaignEx == null) {
            return false;
        }
        if (campaignEx.getSpareOfferFlag() == 1) {
            if (this.m == null) {
                return false;
            }
            if (this.m.C() == 1) {
                campaignEx.setCbt(1);
                return true;
            }
            campaignEx.setCbt(0);
            return false;
        }
        if (campaignEx.isBidCampaign()) {
            campaignEx.setCbt(0);
            return false;
        }
        int iD = this.m.d();
        campaignEx.setCbt(iD);
        return iD == 1;
    }

    private boolean a(int i) {
        com.mbridge.msdk.videocommon.b.c cVarZ;
        if (this.m != null && (cVarZ = this.m.z()) != null) {
            if (cVarZ.a() == 0) {
                return i <= 4;
            }
            List<Integer> listB = cVarZ.b();
            if (listB != null) {
                return listB.contains(Integer.valueOf(i));
            }
        }
        return i <= 4;
    }

    private boolean a(boolean z) {
        try {
        } catch (Throwable th) {
            z.c(f4101a, "", th);
        }
        if (this.m == null) {
            return false;
        }
        int iA = this.m.A();
        if (iA == 1) {
            return z;
        }
        if (iA == 2) {
            return z && d();
        }
        if (iA != 3) {
            return false;
        }
        return d();
    }

    private boolean d() {
        try {
            if (this.m == null) {
                return false;
            }
            double dB = this.m.B();
            if (dB == 1.0d) {
                return false;
            }
            return new Random().nextDouble() > dB;
        } catch (Throwable th) {
            z.c(f4101a, "", th);
            return false;
        }
    }

    public void setNotchPadding(int i, int i2, int i3, int i4, int i5) {
        FrameLayout.LayoutParams layoutParams;
        try {
            String strA = m.a(i, i2, i3, i4, i5);
            z.d(f4101a, strA);
            if (this.f != null && (this.f.getObject() instanceof j) && !TextUtils.isEmpty(strA)) {
                ((j) this.f.getObject()).b(strA);
                com.mbridge.msdk.mbjscommon.windvane.h.a().a((WebView) this.f, "oncutoutfetched", Base64.encodeToString(strA.getBytes(), 0));
            }
            if (this.C != null && this.C.size() > 0) {
                try {
                    if (this.C.get(0).isDynamicView() && this.i != null && (layoutParams = (FrameLayout.LayoutParams) this.i.getLayoutParams()) != null) {
                        if (i2 > 0) {
                            layoutParams.leftMargin = i2;
                        }
                        if (i3 > 0) {
                            layoutParams.rightMargin = i3;
                        }
                        if (i4 > 0) {
                            layoutParams.topMargin = i4;
                        }
                        if (i5 > 0) {
                            layoutParams.bottomMargin = i5;
                        }
                        this.i.setLayoutParams(layoutParams);
                    }
                } catch (Exception e) {
                    z.d(f4101a, e.getMessage());
                }
            }
            com.mbridge.msdk.video.bt.a.c.a().a(i, i2, i3, i4, i5);
            LinkedHashMap<String, View> linkedHashMapB = com.mbridge.msdk.video.bt.a.c.a().b(this.k, this.J);
            if (linkedHashMapB == null || linkedHashMapB.size() <= 0) {
                return;
            }
            for (View view : linkedHashMapB.values()) {
                if (view instanceof MBridgeBTVideoView) {
                    ((MBridgeBTVideoView) view).setNotchPadding(i2, i3, i4, i5);
                }
                if (view instanceof MBTempContainer) {
                    ((MBTempContainer) view).setNotchPadding(i, i2, i3, i4, i5);
                }
                if ((view instanceof WindVaneWebView) && !TextUtils.isEmpty(strA)) {
                    com.mbridge.msdk.mbjscommon.windvane.h.a().a(view, "oncutoutfetched", Base64.encodeToString(strA.getBytes(), 0));
                }
            }
        } catch (Throwable th) {
            z.a(f4101a, th.getMessage());
        }
    }

    public void setDeveloperExtraData(String str) {
        this.O = str;
    }

    private class c extends c.a {
        private c() {
        }

        @Override // com.mbridge.msdk.video.js.a.c.a, com.mbridge.msdk.video.js.c.a
        public final void a() {
            super.a();
        }

        @Override // com.mbridge.msdk.video.js.a.c.a, com.mbridge.msdk.out.BaseTrackingListener
        public final void onStartRedirection(Campaign campaign, String str) {
            super.onStartRedirection(campaign, str);
            ad.a(campaign, MBridgeBTContainer.this.d);
        }

        @Override // com.mbridge.msdk.video.js.a.c.a, com.mbridge.msdk.out.BaseTrackingListener
        public final void onFinishRedirection(Campaign campaign, String str) {
            super.onFinishRedirection(campaign, str);
            MBridgeBTContainer.n(MBridgeBTContainer.this);
            if (campaign == null || !(campaign instanceof CampaignEx)) {
                return;
            }
            try {
                CampaignEx campaignEx = (CampaignEx) campaign;
                String strOptString = new JSONObject(MBridgeBTContainer.this.getJSVideoModule().getCurrentProgress()).optString(NotificationCompat.CATEGORY_PROGRESS, "");
                if (campaignEx.getLinkType() == 3 && campaignEx.getEndcard_click_result() == 2 && strOptString.equals("1.0") && MBridgeBTContainer.this.j != null) {
                    if (!MBridgeBTContainer.this.z) {
                        MBridgeBTContainer.this.j.finish();
                    } else {
                        MBridgeBTContainer.this.onAdClose();
                    }
                }
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }

        @Override // com.mbridge.msdk.video.js.a.c.a, com.mbridge.msdk.out.BaseTrackingListener
        public final void onRedirectionFailed(Campaign campaign, String str) {
            super.onRedirectionFailed(campaign, str);
            MBridgeBTContainer.n(MBridgeBTContainer.this);
        }

        @Override // com.mbridge.msdk.video.js.a.c.a, com.mbridge.msdk.video.js.c.a
        public final void a(boolean z) {
            super.a(z);
            MBridgeBTContainer.this.G.a(z, MBridgeBTContainer.this.l, MBridgeBTContainer.this.k);
        }

        @Override // com.mbridge.msdk.video.js.a.c.a, com.mbridge.msdk.video.js.c.a
        public final void a(int i, String str) {
            super.a(i, str);
        }

        @Override // com.mbridge.msdk.video.js.a.c.a, com.mbridge.msdk.video.js.c.a
        public final void b() {
            super.b();
        }
    }

    private static final class b implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final List<CampaignEx> f4106a;
        private final String b;

        public b(List<CampaignEx> list, String str) {
            this.f4106a = list;
            this.b = str;
        }

        @Override // java.lang.Runnable
        public final void run() throws Throwable {
            String strA;
            int size;
            String str;
            String str2;
            String[] strArr;
            String[] strArr2;
            String requestId;
            String strA2;
            String mof_template_url;
            strA = "";
            List<CampaignEx> list = this.f4106a;
            if (list == null || list.size() <= 0) {
                return;
            }
            try {
                String str3 = this.b;
                List<CampaignEx> list2 = this.f4106a;
                try {
                    size = list2.size();
                } catch (Exception unused) {
                    size = 0;
                }
                if (TextUtils.isEmpty(str3) || list2 == null || size == 0) {
                    return;
                }
                String str4 = null;
                try {
                    try {
                        CampaignEx campaignEx = list2.get(0);
                        requestId = campaignEx.getRequestId();
                        try {
                            String cMPTEntryUrl = campaignEx.getCMPTEntryUrl();
                            try {
                                strA2 = !TextUtils.isEmpty(cMPTEntryUrl) ? ak.a(cMPTEntryUrl, "cltp") : "";
                                try {
                                    mof_template_url = campaignEx.getMof_template_url();
                                } catch (Throwable th) {
                                    th = th;
                                    strArr = null;
                                    str = requestId;
                                    str2 = strA2;
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                str2 = "";
                                strArr = null;
                                str = requestId;
                                strArr2 = strArr;
                                com.mbridge.msdk.video.module.b.a.a(str3, str, str2, str4, strArr, strArr2);
                                throw th;
                            }
                        } catch (Throwable th3) {
                            th = th3;
                            str2 = null;
                            strArr = null;
                        }
                    } catch (Throwable th4) {
                        th = th4;
                        str = null;
                        str2 = null;
                        strArr = null;
                    }
                    try {
                        strA = TextUtils.isEmpty(mof_template_url) ? "" : ak.a(mof_template_url, "xt");
                        strArr = new String[size];
                        try {
                            String[] strArr3 = new String[size];
                            for (int i = 0; i < size; i++) {
                                try {
                                    CampaignEx campaignEx2 = list2.get(i);
                                    strArr[i] = campaignEx2.getId();
                                    strArr3[i] = campaignEx2.getRequestIdNotice();
                                } catch (Throwable th5) {
                                    th = th5;
                                    str4 = strA;
                                    str = requestId;
                                    str2 = strA2;
                                    strArr2 = strArr3;
                                    com.mbridge.msdk.video.module.b.a.a(str3, str, str2, str4, strArr, strArr2);
                                    throw th;
                                }
                            }
                            com.mbridge.msdk.video.module.b.a.a(str3, requestId, strA2, strA, strArr, strArr3);
                        } catch (Throwable th6) {
                            th = th6;
                            str = requestId;
                            str2 = strA2;
                            strArr2 = null;
                            str4 = strA;
                        }
                    } catch (Throwable th7) {
                        th = th7;
                        strArr = null;
                        str = requestId;
                        str2 = strA2;
                        str4 = strA;
                        strArr2 = strArr;
                        com.mbridge.msdk.video.module.b.a.a(str3, str, str2, str4, strArr, strArr2);
                        throw th;
                    }
                } catch (Exception unused2) {
                    com.mbridge.msdk.video.module.b.a.a(str3, "", "", "", null, null);
                }
            } catch (Exception unused3) {
            }
        }
    }

    static /* synthetic */ void a(MBridgeBTContainer mBridgeBTContainer, CampaignEx campaignEx) {
        if (campaignEx != null) {
            try {
                HashMap map = new HashMap();
                List<com.mbridge.msdk.foundation.entity.d> listB = com.mbridge.msdk.foundation.db.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).b(campaignEx.getCampaignUnitId(), campaignEx.getRequestId());
                if (listB == null || listB.size() <= 0 || listB.get(0) == null) {
                    return;
                }
                int iD = listB.get(0).d();
                String strB = listB.get(0).b();
                if (iD == 1) {
                    map.put("encrypt_p=", "encrypt_p=" + strB);
                    map.put("irlfa=", "irlfa=1");
                    for (Map.Entry entry : map.entrySet()) {
                        campaignEx.setOnlyImpressionURL(campaignEx.getOnlyImpressionURL().replaceAll((String) entry.getKey(), (String) entry.getValue()));
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    static /* synthetic */ void n(MBridgeBTContainer mBridgeBTContainer) {
        ad.a(mBridgeBTContainer.d);
    }
}
