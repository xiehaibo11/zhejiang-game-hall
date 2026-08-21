package com.tkay.expressad.reward.player;

import android.content.Intent;
import android.content.res.Configuration;
import android.graphics.drawable.ColorDrawable;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.widget.FrameLayout;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.tkay.core.common.a.j;
import com.tkay.core.common.b.m;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.d.p;
import com.tkay.expressad.foundation.h.i;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.reward.a.e;
import com.tkay.expressad.video.bt.module.TYTempContainer;
import com.tkay.expressad.video.bt.module.TkayBTContainer;
import com.tkay.expressad.video.bt.module.b.h;
import com.tkay.expressad.video.dynview.h.b;
import com.tkay.expressad.video.signal.activity.AbstractJSActivity;
import com.tkay.expressad.videocommon.a;
import com.tkay.expressad.videocommon.b.n;
import com.tkay.expressad.videocommon.e.d;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class TYRewardVideoActivity extends AbstractJSActivity {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static String f7079a = "unitId";
    public static String b = "userId";
    public static String c = "reward";
    public static String d = "mute";
    public static String e = "isIV";
    public static String f = "isBid";
    public static String g = "isBigOffer";
    public static String h = "hasRelease";
    public static String i = "ivRewardMode";
    public static String j = "ivRewardValueType";
    public static String k = "ivRewardValue";
    public static String l = "extraData";
    public static String m = "baserequestInfo";
    private static final String p = "TYRewardVideoActivity";
    private h C;
    private d D;
    private com.tkay.expressad.videocommon.b.a G;
    private c H;
    private List<com.tkay.expressad.videocommon.b.a> I;
    private List<c> J;
    private TYTempContainer K;
    private TkayBTContainer L;
    private WindVaneWebView M;
    private com.tkay.expressad.video.bt.module.a.a N;
    private String O;
    private String P;
    private boolean Q;
    private String q;
    private String r;
    private String s;
    private com.tkay.expressad.videocommon.c.c t;
    private int x;
    private int y;
    private int z;
    private int u = 2;
    private boolean v = false;
    private boolean w = false;
    private boolean A = false;
    private boolean B = false;
    private boolean E = false;
    private boolean F = false;
    private int R = 1;
    private int S = 0;
    private int T = 0;
    private int U = 0;
    private int V = 0;
    private int W = 0;
    private int X = 0;
    private com.tkay.expressad.video.dynview.f.a Y = new com.tkay.expressad.video.dynview.f.a() { // from class: com.tkay.expressad.reward.player.TYRewardVideoActivity.1
        @Override // com.tkay.expressad.video.dynview.f.a
        public final void a(Map<String, Object> map) {
            if (map.containsKey("mute")) {
                TYRewardVideoActivity.this.u = ((Integer) map.get("mute")).intValue();
            }
            if (map.containsKey(RequestParameters.POSITION)) {
                int iIntValue = ((Integer) map.get(RequestParameters.POSITION)).intValue();
                if (TYRewardVideoActivity.this.J == null || TYRewardVideoActivity.this.J.size() <= 0 || iIntValue <= 0) {
                    return;
                }
                TYRewardVideoActivity tYRewardVideoActivity = TYRewardVideoActivity.this;
                tYRewardVideoActivity.H = (c) tYRewardVideoActivity.J.get(iIntValue);
                TYRewardVideoActivity.b(TYRewardVideoActivity.this);
                int i2 = iIntValue - 1;
                if (TYRewardVideoActivity.this.J.get(i2) != null) {
                    TYRewardVideoActivity tYRewardVideoActivity2 = TYRewardVideoActivity.this;
                    TYRewardVideoActivity.b(tYRewardVideoActivity2, ((c) tYRewardVideoActivity2.J.get(i2)).bi());
                }
                TYRewardVideoActivity tYRewardVideoActivity3 = TYRewardVideoActivity.this;
                TYRewardVideoActivity.this.H.b(tYRewardVideoActivity3.a(tYRewardVideoActivity3.H.i(), TYRewardVideoActivity.this.R));
                TYRewardVideoActivity tYRewardVideoActivity4 = TYRewardVideoActivity.this;
                tYRewardVideoActivity4.b(tYRewardVideoActivity4.H);
            }
        }
    };
    private com.tkay.expressad.video.dynview.f.d Z = new com.tkay.expressad.video.dynview.f.d() { // from class: com.tkay.expressad.reward.player.TYRewardVideoActivity.2
        @Override // com.tkay.expressad.video.dynview.f.d
        public final void a(c cVar) {
            if (cVar != null) {
                if (TYRewardVideoActivity.this.L != null) {
                    new b().d(TYRewardVideoActivity.this.L);
                }
                TYRewardVideoActivity.this.H = cVar;
                TYRewardVideoActivity tYRewardVideoActivity = TYRewardVideoActivity.this;
                tYRewardVideoActivity.b(tYRewardVideoActivity.H);
                return;
            }
            TYRewardVideoActivity.this.b("campaign is null");
        }

        @Override // com.tkay.expressad.video.dynview.f.d
        public final void a() {
            if (TYRewardVideoActivity.this.L != null) {
                new b().d(TYRewardVideoActivity.this.L);
            }
            TYRewardVideoActivity.f(TYRewardVideoActivity.this);
            TYRewardVideoActivity.this.b();
            if (TYRewardVideoActivity.this.K != null) {
                TYRewardVideoActivity.this.K.setNotchPadding(TYRewardVideoActivity.this.X, TYRewardVideoActivity.this.T, TYRewardVideoActivity.this.V, TYRewardVideoActivity.this.U, TYRewardVideoActivity.this.W);
            }
        }
    };

    static /* synthetic */ int b(TYRewardVideoActivity tYRewardVideoActivity) {
        int i2 = tYRewardVideoActivity.R;
        tYRewardVideoActivity.R = i2 + 1;
        return i2;
    }

    static /* synthetic */ int b(TYRewardVideoActivity tYRewardVideoActivity, int i2) {
        int i3 = tYRewardVideoActivity.S - i2;
        tYRewardVideoActivity.S = i3;
        return i3;
    }

    static /* synthetic */ boolean f(TYRewardVideoActivity tYRewardVideoActivity) {
        tYRewardVideoActivity.A = true;
        return true;
    }

    @Override // com.tkay.expressad.activity.TYBaseActivity, android.app.Activity
    protected void onCreate(Bundle bundle) {
        String strAr = "";
        super.onCreate(bundle);
        com.tkay.expressad.b.x = true;
        com.tkay.expressad.foundation.b.b.b().b(this);
        try {
            Intent intent = getIntent();
            this.q = intent.getStringExtra(f7079a);
            int iA = i.a(getApplicationContext(), "tkay_more_offer_activity", "layout");
            if (iA < 0) {
                b("no tkay_more_offer_activity layout");
                return;
            }
            setContentView(iA);
            if (TextUtils.isEmpty(this.q)) {
                b("data empty error");
                return;
            }
            this.C = com.tkay.expressad.reward.b.a.c.get(this.q);
            this.r = intent.getStringExtra(com.tkay.expressad.b.y);
            this.t = com.tkay.expressad.videocommon.c.c.b(intent.getStringExtra(c));
            this.s = intent.getStringExtra(b);
            this.u = intent.getIntExtra(d, 2);
            this.v = intent.getBooleanExtra(e, false);
            this.w = intent.getBooleanExtra(f, false);
            this.P = intent.getStringExtra(l);
            if (this.v) {
                this.x = intent.getIntExtra(i, 0);
                this.y = intent.getIntExtra(j, 0);
                this.z = intent.getIntExtra(k, 0);
            }
            this.o = new com.tkay.expressad.video.signal.factory.b(this);
            a(this.o);
            if (this.C == null) {
                b("showRewardListener is null");
                return;
            }
            d dVarA = e.a().a(this.r, this.q);
            this.D = dVarA;
            if (dVarA == null) {
                d dVarA2 = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.q);
                this.D = dVarA2;
                if (dVarA2 == null) {
                    this.D = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.q, this.v);
                }
            }
            if (this.D != null) {
                this.t.a(this.D.m());
                this.t.a(this.D.n());
            }
            if (this.t != null && this.t.b() <= 0) {
                this.t.a(1);
            }
            int iA2 = i.a(this, "tkay_reward_activity_open", i.f);
            int iA3 = i.a(this, "tkay_reward_activity_stay", i.f);
            if (iA2 > 1 && iA3 > 1) {
                overridePendingTransition(iA2, iA3);
            }
            if (bundle != null) {
                try {
                    this.F = bundle.getBoolean(h);
                } catch (Exception e2) {
                    e2.printStackTrace();
                }
            }
            this.I = com.tkay.expressad.videocommon.b.c.a().b(this.q);
            boolean booleanExtra = intent.getBooleanExtra(g, false);
            this.A = booleanExtra;
            if (!booleanExtra) {
                if (this.I != null && this.I.size() > 0) {
                    this.G = this.I.get(0);
                }
                if (this.G != null) {
                    this.H = this.G.n();
                    this.G.a(true);
                    this.G.b(false);
                }
                if (this.G == null || this.H == null || this.t == null) {
                    b("data empty error");
                }
                b();
                return;
            }
            List<c> listA = com.tkay.expressad.videocommon.b.c.a().a(this.q);
            this.J = listA;
            this.O = "";
            if (listA != null && listA.size() > 0) {
                c cVar = this.J.get(0);
                strAr = cVar.ar();
                this.O = cVar.Z();
            }
            a.C0482a c0482aA = com.tkay.expressad.videocommon.a.a(this.q + "_" + this.O + "_" + strAr);
            WindVaneWebView windVaneWebViewA = c0482aA != null ? c0482aA.a() : null;
            this.M = windVaneWebViewA;
            if (windVaneWebViewA == null) {
                if (this.G == null && this.I != null && this.I.size() > 0) {
                    this.G = this.I.get(0);
                }
                if (this.G == null) {
                    com.tkay.expressad.videocommon.b.c cVarA = com.tkay.expressad.videocommon.b.c.a();
                    int i2 = this.v ? com.tkay.expressad.foundation.g.a.aU : 94;
                    String str = this.q;
                    boolean z = this.w;
                    n nVarC = cVarA.c(str);
                    this.G = nVarC != null ? nVarC.b(i2, z) : null;
                }
                if (this.G != null) {
                    this.H = this.G.n();
                    this.G.a(true);
                    this.G.b(false);
                }
                if (this.G == null || this.H == null || this.t == null) {
                    b("data empty error");
                }
                this.A = false;
                com.tkay.expressad.videocommon.a.a.a();
                List<c> listA2 = com.tkay.expressad.videocommon.a.a.a(this.J);
                if (listA2 == null) {
                    b("no available campaign");
                    return;
                }
                int size = listA2.size();
                if (size == 0) {
                    b("no available campaign");
                    return;
                }
                if (listA2.get(0) == null || !listA2.get(0).j()) {
                    b();
                    return;
                }
                if (size == 1) {
                    c cVar2 = listA2.get(0);
                    this.H = cVar2;
                    if (cVar2 != null) {
                        cVar2.m();
                    }
                    b(this.H);
                    return;
                }
                a(listA2);
                return;
            }
            c();
        } catch (Throwable th) {
            b("onCreate error".concat(String.valueOf(th)));
        }
    }

    private void a(List<c> list) {
        if (list == null) {
            b("no available campaign");
            return;
        }
        if (list.size() == 0) {
            b("no available campaign");
            return;
        }
        if ((list.get(0) != null ? list.get(0).k() : 0) == 5) {
            for (c cVar : list) {
                if (cVar != null) {
                    this.S += cVar.bi();
                }
            }
            c cVar2 = list.get(0);
            if (cVar2 != null) {
                int iA = a(cVar2.i(), this.R);
                this.H = cVar2;
                cVar2.m();
                this.R = 1;
                this.H.b(iA);
                b(this.H);
                return;
            }
            b("campaign is less");
            return;
        }
        c();
    }

    private void a(c cVar) {
        if (cVar != null) {
            int iA = a(cVar.i(), this.R);
            this.H = cVar;
            cVar.m();
            this.R = 1;
            this.H.b(iA);
            b(this.H);
            return;
        }
        b("campaign is less");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(c cVar) {
        c cVarN;
        try {
            if (this.I != null && this.I.size() > 0) {
                for (com.tkay.expressad.videocommon.b.a aVar : this.I) {
                    if (aVar != null && (cVarN = aVar.n()) != null && TextUtils.equals(cVarN.aZ(), cVar.aZ()) && TextUtils.equals(cVarN.Z(), cVar.Z())) {
                        this.G = aVar;
                    }
                }
            }
            this.A = true;
            b();
            if (this.K != null) {
                this.K.setNotchPadding(this.X, this.T, this.V, this.U, this.W);
            }
        } catch (Exception e2) {
            e2.getMessage();
            b("more offer to one offer exception");
        }
    }

    private static WindVaneWebView a(String str) {
        a.C0482a c0482aA = com.tkay.expressad.videocommon.a.a(str);
        if (c0482aA != null) {
            return c0482aA.a();
        }
        return null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(String str) {
        h hVar = this.C;
        if (hVar != null) {
            hVar.a(str);
        }
        finish();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        List<c> list;
        p pVar;
        List<c> list2;
        int iC = c("tkay_temp_container");
        if (iC < 0) {
            b("no id tkay_bt_container in tkay_more_offer_activity layout");
        }
        TYTempContainer tYTempContainer = (TYTempContainer) findViewById(iC);
        this.K = tYTempContainer;
        if (tYTempContainer == null) {
            b("env error");
        }
        List<c> list3 = this.J;
        if (list3 != null && list3.size() > 0 && this.J.get(0).j()) {
            new b();
            b.e(this.K);
        } else {
            this.K.setVisibility(0);
        }
        a(-1);
        this.K.setVisibility(0);
        this.K.setActivity(this);
        this.K.setBidCampaign(this.w);
        this.K.setBigOffer(this.A);
        this.K.setUnitId(this.q);
        this.K.setCampaign(this.H);
        if (this.H.k() == 5 && (list2 = this.J) != null && list2.size() > 1) {
            View viewFindViewById = findViewById(c("tkay_reward_root_container"));
            if (viewFindViewById != null) {
                viewFindViewById.setBackgroundColor(-16777216);
            }
            this.K.removeAllViews();
            this.K.setCampOrderViewData(this.J, this.S);
            this.K.setCamPlayOrderCallback(this.Y, this.R);
        }
        this.K.setCampaignDownLoadTask(this.G);
        this.K.setIV(this.v);
        c cVar = this.H;
        if (cVar != null && cVar.f() == 2) {
            this.K.setIVRewardEnable(0, 0, 0);
        } else {
            this.K.setIVRewardEnable(this.x, this.y, this.z);
        }
        this.K.setMute(this.u);
        this.K.setDeveloperExtraData(this.P);
        c cVar2 = this.H;
        if (((cVar2 != null && (pVar = cVar2.aH) != null) || ((list = this.J) != null && list.size() > 0 && this.J.get(0) != null && (pVar = this.J.get(0).aH) != null)) && !TextUtils.isEmpty(pVar.b()) && pVar.a() > 0) {
            com.tkay.expressad.videocommon.c.c cVar3 = new com.tkay.expressad.videocommon.c.c(pVar.b(), pVar.a());
            if (cVar3.b() < 0) {
                cVar3.a(1);
            }
            this.t = cVar3;
        }
        this.K.setReward(this.t);
        this.K.setRewardUnitSetting(this.D);
        this.K.setPlacementId(this.r);
        this.K.setUserId(this.s);
        this.K.setShowRewardListener(this.C);
        this.K.init(this);
        this.K.onCreate();
    }

    private void c() {
        p pVar;
        int iC = c("tkay_bt_container");
        if (iC < 0) {
            b("no tkay_webview_framelayout in tkay_more_offer_activity layout");
        }
        TkayBTContainer tkayBTContainer = (TkayBTContainer) findViewById(iC);
        this.L = tkayBTContainer;
        if (tkayBTContainer == null) {
            b("env error");
        }
        this.L.setVisibility(0);
        com.tkay.expressad.video.bt.module.a.a aVarD = d();
        this.N = aVarD;
        this.L.setBTContainerCallback(aVarD);
        this.L.setShowRewardVideoListener(this.C);
        this.L.setChoiceOneCallback(this.Z);
        this.L.setCampaigns(this.J);
        this.L.setCampaignDownLoadTasks(this.I);
        this.L.setRewardUnitSetting(this.D);
        this.L.setUnitId(this.q);
        this.L.setPlacementId(this.r);
        this.L.setUserId(this.s);
        this.L.setActivity(this);
        this.L.setDeveloperExtraData(this.P);
        c cVar = this.H;
        if (((cVar != null && (pVar = cVar.aH) != null) || (this.J.get(0) != null && (pVar = this.J.get(0).aH) != null)) && !TextUtils.isEmpty(pVar.b()) && pVar.a() > 0) {
            com.tkay.expressad.videocommon.c.c cVar2 = new com.tkay.expressad.videocommon.c.c(pVar.b(), pVar.a());
            if (cVar2.b() < 0) {
                cVar2.a(1);
            }
            this.t = cVar2;
        }
        this.L.setReward(this.t);
        this.L.setIVRewardEnable(this.x, this.y, this.z);
        this.L.setIV(this.v);
        this.L.setMute(this.u);
        this.L.setJSFactory((com.tkay.expressad.video.signal.factory.b) this.o);
        this.L.init(this);
        this.L.onCreate();
    }

    private com.tkay.expressad.video.bt.module.a.a d() {
        if (this.N == null) {
            this.N = new com.tkay.expressad.video.bt.module.a.a() { // from class: com.tkay.expressad.reward.player.TYRewardVideoActivity.3
                @Override // com.tkay.expressad.video.bt.module.a.a
                public final void a() {
                    if (TYRewardVideoActivity.this.C != null) {
                        TYRewardVideoActivity.this.C.a();
                    }
                }

                @Override // com.tkay.expressad.video.bt.module.a.a
                public final void a(boolean z, com.tkay.expressad.videocommon.c.c cVar) {
                    if (TYRewardVideoActivity.this.C != null) {
                        TYRewardVideoActivity.this.C.a(z, cVar);
                    }
                }

                @Override // com.tkay.expressad.video.bt.module.a.a
                public final void a(boolean z, int i2) {
                    if (TYRewardVideoActivity.this.C != null) {
                        TYRewardVideoActivity.this.C.a(z, i2);
                    }
                }

                @Override // com.tkay.expressad.video.bt.module.a.a
                public final void a(String str) {
                    if (TYRewardVideoActivity.this.C != null) {
                        TYRewardVideoActivity.this.C.a(str);
                    }
                }

                @Override // com.tkay.expressad.video.bt.module.a.a
                public final void a(c cVar) {
                    if (TYRewardVideoActivity.this.C != null) {
                        TYRewardVideoActivity.this.C.a(cVar);
                    }
                }

                @Override // com.tkay.expressad.video.bt.module.a.a
                public final void b() {
                    if (TYRewardVideoActivity.this.C != null) {
                        TYRewardVideoActivity.this.C.b();
                    }
                }

                @Override // com.tkay.expressad.video.bt.module.a.a
                public final void c() {
                    if (TYRewardVideoActivity.this.C != null) {
                        TYRewardVideoActivity.this.C.c();
                    }
                }
            };
        }
        return this.N;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public int a(int i2, int i3) {
        List<c> list = this.J;
        if (list == null || list.size() == 0) {
            return i2;
        }
        int iBi = 0;
        int i4 = 0;
        for (int i5 = 0; i5 < this.J.size(); i5++) {
            if (this.J.get(0) != null) {
                if (i5 == 0) {
                    i4 = this.J.get(0).i();
                }
                iBi += this.J.get(i5).bi();
            }
        }
        if (i3 == 1) {
            if (i2 == 0) {
                if (iBi >= 45) {
                    return 45;
                }
            } else if (iBi > i2) {
                if (i2 > 45) {
                    return 45;
                }
                return i2;
            }
            return iBi;
        }
        int iBi2 = 0;
        for (int i6 = 0; i6 < i3 - 1; i6++) {
            if (this.J.get(i6) != null) {
                iBi2 += this.J.get(i6).bi();
            }
        }
        if (i4 > iBi2) {
            return i4 - iBi2;
        }
        return 0;
    }

    @Override // com.tkay.expressad.video.signal.activity.AbstractJSActivity, com.tkay.expressad.activity.TYBaseActivity, android.app.Activity
    public void onResume() {
        super.onResume();
        if (com.tkay.expressad.foundation.f.b.c) {
            return;
        }
        com.tkay.expressad.foundation.b.b.b().b(this);
        TYTempContainer tYTempContainer = this.K;
        if (tYTempContainer != null) {
            tYTempContainer.onResume();
        }
        TkayBTContainer tkayBTContainer = this.L;
        if (tkayBTContainer != null) {
            tkayBTContainer.onResume();
        }
    }

    @Override // com.tkay.expressad.video.signal.activity.AbstractJSActivity, android.app.Activity
    public void onPause() {
        super.onPause();
        TYTempContainer tYTempContainer = this.K;
        if (tYTempContainer != null) {
            tYTempContainer.onPause();
        }
        TkayBTContainer tkayBTContainer = this.L;
        if (tkayBTContainer != null) {
            tkayBTContainer.onPause();
        }
    }

    @Override // com.tkay.expressad.video.signal.activity.AbstractJSActivity, android.app.Activity, android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        if (this.K != null) {
            a(configuration.orientation);
            this.K.onConfigurationChanged(configuration);
        }
        TkayBTContainer tkayBTContainer = this.L;
        if (tkayBTContainer != null) {
            tkayBTContainer.onConfigurationChanged(configuration);
        }
    }

    @Override // com.tkay.expressad.video.signal.activity.AbstractJSActivity, android.app.Activity
    public void onBackPressed() {
        super.onBackPressed();
        TYTempContainer tYTempContainer = this.K;
        if (tYTempContainer != null) {
            tYTempContainer.onBackPressed();
        }
        TkayBTContainer tkayBTContainer = this.L;
        if (tkayBTContainer != null) {
            tkayBTContainer.onBackPressed();
        }
    }

    @Override // android.app.Activity
    protected void onStop() {
        com.tkay.expressad.b.x = false;
        try {
            super.onStop();
        } catch (Throwable unused) {
        }
        TYTempContainer tYTempContainer = this.K;
        if (tYTempContainer != null) {
            tYTempContainer.onStop();
        }
        TkayBTContainer tkayBTContainer = this.L;
        if (tkayBTContainer != null) {
            tkayBTContainer.onStop();
        }
    }

    @Override // com.tkay.expressad.video.signal.activity.AbstractJSActivity, com.tkay.expressad.activity.TYBaseActivity, android.app.Activity
    public void onDestroy() {
        try {
            super.onDestroy();
        } catch (Throwable unused) {
        }
        try {
            if (this.J != null && this.J.size() > 0) {
                Iterator<c> it = this.J.iterator();
                while (it.hasNext()) {
                    c(it.next());
                }
            }
            if (this.H != null) {
                c(this.H);
            }
        } catch (Throwable th) {
            th.getMessage();
        }
        com.tkay.expressad.video.module.b.a.a(this.q);
        TYTempContainer tYTempContainer = this.K;
        c cVar = null;
        if (tYTempContainer != null) {
            tYTempContainer.onDestroy();
            this.K = null;
        }
        TkayBTContainer tkayBTContainer = this.L;
        if (tkayBTContainer != null) {
            tkayBTContainer.onDestroy();
            this.L = null;
        }
        this.Y = null;
        this.Z = null;
        com.tkay.expressad.foundation.g.h.a.a().execute(new a(this.I, this.q, this.O));
        List<c> list = this.J;
        if (list != null && list.size() > 0) {
            cVar = this.J.get(0);
        }
        if (cVar == null) {
            cVar = this.H;
        }
        if (cVar == null || TextUtils.isEmpty(cVar.S())) {
            return;
        }
        j.a().b();
    }

    @Override // android.app.Activity
    protected void onRestart() {
        super.onRestart();
        TYTempContainer tYTempContainer = this.K;
        if (tYTempContainer != null) {
            tYTempContainer.onRestart();
        }
        TkayBTContainer tkayBTContainer = this.L;
        if (tkayBTContainer != null) {
            tkayBTContainer.onRestart();
        }
    }

    @Override // android.app.Activity
    protected void onStart() {
        super.onStart();
        new com.tkay.expressad.foundation.f.a() { // from class: com.tkay.expressad.reward.player.TYRewardVideoActivity.4
            @Override // com.tkay.expressad.foundation.f.a
            public final void a() {
                TYRewardVideoActivity.this.onPause();
            }

            @Override // com.tkay.expressad.foundation.f.a
            public final void b() {
                TYRewardVideoActivity.this.onResume();
            }

            @Override // com.tkay.expressad.foundation.f.a
            public final void c() {
                TYRewardVideoActivity.this.onResume();
            }
        };
        if (com.tkay.expressad.foundation.f.b.c) {
            return;
        }
        TYTempContainer tYTempContainer = this.K;
        if (tYTempContainer != null) {
            tYTempContainer.onStart();
            this.H.l(this.q);
            com.tkay.expressad.foundation.f.b.a().a(this.q + "_1", this.H);
        }
        TkayBTContainer tkayBTContainer = this.L;
        if (tkayBTContainer != null) {
            tkayBTContainer.onStart();
            List<c> list = this.J;
            if (list != null && list.size() > 0) {
                c cVar = this.J.get(0);
                cVar.l(this.q);
                com.tkay.expressad.foundation.f.b.a().a(this.q + "_1", cVar);
            }
        }
        if (this.Q) {
            return;
        }
        com.tkay.expressad.foundation.f.b.a().b(this.q + "_1", 1);
        com.tkay.expressad.foundation.f.b.a().c(this.q + "_2");
        this.Q = true;
    }

    private static final class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final List<com.tkay.expressad.videocommon.b.a> f7084a;
        private final String b;
        private final String c;

        public a(List<com.tkay.expressad.videocommon.b.a> list, String str, String str2) {
            this.f7084a = list;
            this.b = str;
            this.c = str2;
        }

        @Override // java.lang.Runnable
        public final void run() {
            try {
                if (this.f7084a == null || this.f7084a.size() <= 0) {
                    return;
                }
                for (com.tkay.expressad.videocommon.b.a aVar : this.f7084a) {
                    if (aVar != null && aVar.n() != null) {
                        c cVarN = aVar.n();
                        String str = cVarN.Z() + cVarN.aZ() + cVarN.S();
                        n nVarC = com.tkay.expressad.videocommon.b.c.a().c(this.b);
                        if (nVarC != null) {
                            try {
                                nVarC.b(str);
                            } catch (Exception unused) {
                            }
                        }
                        if (cVarN != null && cVarN.M() != null) {
                            if (!TextUtils.isEmpty(cVarN.M().e())) {
                                com.tkay.expressad.videocommon.a.b(this.b + "_" + cVarN.aZ() + "_" + this.c + "_" + cVarN.M().e());
                                com.tkay.expressad.videocommon.a.b(cVarN.w(), cVarN);
                            }
                            if (!TextUtils.isEmpty(cVarN.ar())) {
                                com.tkay.expressad.videocommon.a.b(this.b + "_" + this.c + "_" + cVarN.ar());
                            }
                        }
                    }
                }
            } catch (Exception e) {
                e.getMessage();
            }
        }
    }

    @Override // android.app.Activity
    public void finish() {
        super.finish();
        int iA = i.a(this, "tkay_reward_activity_close", i.f);
        int iA2 = i.a(this, "tkay_reward_activity_stay", i.f);
        if (iA > 1 && iA2 > 1) {
            overridePendingTransition(iA2, iA);
        }
        TYTempContainer tYTempContainer = this.K;
        if (tYTempContainer != null) {
            tYTempContainer.onDestroy();
            this.K = null;
        }
        TkayBTContainer tkayBTContainer = this.L;
        if (tkayBTContainer != null) {
            tkayBTContainer.onDestroy();
            this.L = null;
        }
        com.tkay.expressad.foundation.f.b.a().c(this.q + "_1");
        com.tkay.expressad.foundation.f.b.a().c(this.q + "_2");
    }

    @Override // android.app.Activity
    public void onSaveInstanceState(Bundle bundle) {
        bundle.putBoolean(h, this.F);
        super.onSaveInstanceState(bundle);
    }

    @Override // com.tkay.expressad.activity.TYBaseActivity
    public final void a(int i2, int i3, int i4, int i5, int i6) {
        this.T = i3;
        this.V = i4;
        this.U = i5;
        this.W = i6;
        this.X = i2;
        TYTempContainer tYTempContainer = this.K;
        if (tYTempContainer != null) {
            tYTempContainer.setNotchPadding(i2, i3, i4, i5, i6);
        }
        TkayBTContainer tkayBTContainer = this.L;
        if (tkayBTContainer != null) {
            tkayBTContainer.setNotchPadding(i2, i3, i4, i5, i6);
        }
        com.tkay.expressad.video.dynview.a.b.e = i2;
        com.tkay.expressad.video.dynview.a.b.f7215a = i3;
        com.tkay.expressad.video.dynview.a.b.b = i4;
        com.tkay.expressad.video.dynview.a.b.c = i5;
        com.tkay.expressad.video.dynview.a.b.d = i6;
    }

    private int c(String str) {
        return i.a(getApplicationContext(), str, "id");
    }

    private int d(String str) {
        return i.a(getApplicationContext(), str, "layout");
    }

    private void a(int i2) {
        try {
            if (this.H == null || this.H.f() != 2) {
                return;
            }
            getWindow().getDecorView().setBackgroundDrawable(new ColorDrawable(0));
            FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) this.K.getLayoutParams();
            int iB = t.b(this, 58.0f);
            int iB2 = t.b(this, 104.0f);
            if (this.H.M().c() == 0) {
                if (i2 == 2) {
                    layoutParams.setMargins(iB2, iB, iB2, iB);
                } else {
                    layoutParams.setMargins(iB, iB2, iB, iB2);
                }
            } else if (this.H.M().c() == 2) {
                layoutParams.setMargins(iB2, iB, iB2, iB);
            } else {
                layoutParams.setMargins(iB, iB2, iB, iB2);
            }
            this.K.setLayoutParams(layoutParams);
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private void e() {
        try {
            if (this.J != null && this.J.size() > 0) {
                Iterator<c> it = this.J.iterator();
                while (it.hasNext()) {
                    c(it.next());
                }
            }
            if (this.H != null) {
                c(this.H);
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private static void c(c cVar) {
        if (cVar != null) {
            if (!TextUtils.isEmpty(cVar.be())) {
                com.tkay.expressad.foundation.g.d.b.a(m.a().f()).c(cVar.be());
            }
            if (TextUtils.isEmpty(cVar.bd())) {
                return;
            }
            com.tkay.expressad.foundation.g.d.b.a(m.a().f()).c(cVar.bd());
        }
    }

    @Override // android.app.Activity, android.view.ContextThemeWrapper, android.content.ContextWrapper, android.content.Context
    public void setTheme(int i2) {
        super.setTheme(i.a(this, "tkay_transparent_theme", "style"));
    }
}
