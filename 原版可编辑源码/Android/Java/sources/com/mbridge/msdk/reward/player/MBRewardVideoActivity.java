package com.mbridge.msdk.reward.player;

import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.graphics.drawable.ColorDrawable;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.widget.FrameLayout;
import com.alibaba.sdk.android.oss.common.RequestParameters;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.RewardPlus;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ak;
import com.mbridge.msdk.foundation.tools.s;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.confirmation.e;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;
import com.mbridge.msdk.reward.adapter.RewardUnitCacheManager;
import com.mbridge.msdk.scheme.applet.AppletModelManager;
import com.mbridge.msdk.video.bt.module.MBTempContainer;
import com.mbridge.msdk.video.bt.module.MBridgeBTContainer;
import com.mbridge.msdk.video.bt.module.b.h;
import com.mbridge.msdk.video.js.activity.AbstractJSActivity;
import com.mbridge.msdk.videocommon.a;
import com.mbridge.msdk.videocommon.b.d;
import com.tkay.expressad.foundation.h.i;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;

public class MBRewardVideoActivity extends AbstractJSActivity {
    public static String INTENT_EXTRADATA = "extraData";
    public static String INTENT_ISBID = "isBid";
    public static String INTENT_ISBIG_OFFER = "isBigOffer";
    public static String INTENT_ISIV = "isIV";
    public static String INTENT_IVREWARD_MODETYPE = "ivRewardMode";
    public static String INTENT_IVREWARD_VALUE = "ivRewardValue";
    public static String INTENT_IVREWARD_VALUETYPE = "ivRewardValueType";
    public static String INTENT_MUTE = "mute";
    public static String INTENT_REWARD = "reward";
    public static String INTENT_UNITID = "unitId";
    public static String INTENT_USERID = "userId";
    public static String SAVE_STATE_KEY_REPORT = "hasRelease";
    private boolean A;
    private String a;
    private String b;
    private String c;
    private d d;
    private int h;
    private int i;
    private int j;
    private h m;
    private com.mbridge.msdk.videocommon.d.c n;
    private com.mbridge.msdk.videocommon.download.a q;
    private CampaignEx r;
    private List<com.mbridge.msdk.videocommon.download.a> s;
    private List<CampaignEx> t;
    private MBTempContainer u;
    private MBridgeBTContainer v;
    private WindVaneWebView w;
    private com.mbridge.msdk.video.bt.module.a.a x;
    private String y;
    private String z;
    private int e = 2;
    private boolean f = false;
    private boolean g = false;
    private boolean k = false;
    private boolean l = false;
    private boolean o = false;
    private boolean p = false;
    private int B = 1;
    private int C = 0;
    private int D = 0;
    private int E = 0;
    private int F = 0;
    private int G = 0;
    private int H = 0;
    private com.mbridge.msdk.video.dynview.e.a I = new com.mbridge.msdk.video.dynview.e.a() {
        @Override
        public final void a(Map<String, Object> map) {
            if (map == null) {
                return;
            }
            if (map.containsKey("mute")) {
                MBRewardVideoActivity.this.e = ((Integer) map.get("mute")).intValue();
            }
            if (map.containsKey(RequestParameters.POSITION)) {
                int iIntValue = ((Integer) map.get(RequestParameters.POSITION)).intValue();
                if (MBRewardVideoActivity.this.t == null || MBRewardVideoActivity.this.t.size() <= 0 || iIntValue < 1) {
                    return;
                }
                MBRewardVideoActivity mBRewardVideoActivity = MBRewardVideoActivity.this;
                mBRewardVideoActivity.r = (CampaignEx) mBRewardVideoActivity.t.get(iIntValue);
                MBRewardVideoActivity.b(MBRewardVideoActivity.this);
                int i = iIntValue - 1;
                if (MBRewardVideoActivity.this.t.get(i) != null) {
                    MBRewardVideoActivity.this.C -= ((CampaignEx) MBRewardVideoActivity.this.t.get(i)).getVideoLength();
                }
                MBRewardVideoActivity mBRewardVideoActivity2 = MBRewardVideoActivity.this;
                MBRewardVideoActivity.this.r.setVideoCompleteTime(mBRewardVideoActivity2.a(mBRewardVideoActivity2.r.getVideoCompleteTime(), MBRewardVideoActivity.this.B));
                MBRewardVideoActivity mBRewardVideoActivity3 = MBRewardVideoActivity.this;
                mBRewardVideoActivity3.a(mBRewardVideoActivity3.r);
            }
        }
    };
    private com.mbridge.msdk.video.dynview.e.d J = new com.mbridge.msdk.video.dynview.e.d() {
        @Override
        public final void a(CampaignEx campaignEx) {
            if (campaignEx != null) {
                if (MBRewardVideoActivity.this.v != null) {
                    new com.mbridge.msdk.video.dynview.h.b().b(MBRewardVideoActivity.this.v, 500L);
                }
                MBRewardVideoActivity.this.r = campaignEx;
                MBRewardVideoActivity mBRewardVideoActivity = MBRewardVideoActivity.this;
                mBRewardVideoActivity.a(mBRewardVideoActivity.r);
                return;
            }
            MBRewardVideoActivity.this.a("campaign is null");
        }

        @Override
        public final void a() {
            if (MBRewardVideoActivity.this.v != null) {
                new com.mbridge.msdk.video.dynview.h.b().b(MBRewardVideoActivity.this.v, 500L);
            }
            MBRewardVideoActivity.this.k = true;
            MBRewardVideoActivity.this.a();
            if (MBRewardVideoActivity.this.u != null) {
                MBRewardVideoActivity.this.u.setNotchPadding(MBRewardVideoActivity.this.H, MBRewardVideoActivity.this.D, MBRewardVideoActivity.this.F, MBRewardVideoActivity.this.E, MBRewardVideoActivity.this.G);
            }
            try {
                com.mbridge.msdk.foundation.same.f.b.b().execute(new b(MBRewardVideoActivity.this.r, MBRewardVideoActivity.this.a, 1));
            } catch (Exception unused) {
            }
        }
    };

    static int b(MBRewardVideoActivity mBRewardVideoActivity) {
        int i = mBRewardVideoActivity.B;
        mBRewardVideoActivity.B = i + 1;
        return i;
    }

    @Override
    protected void onCreate(Bundle bundle) {
        String cMPTEntryUrl = "";
        super.onCreate(bundle);
        MBridgeConstans.isRewardActivityShowing = true;
        com.mbridge.msdk.foundation.controller.a.f().a(this);
        try {
            int iFindLayout = findLayout("mbridge_more_offer_activity");
            if (iFindLayout < 0) {
                a("no mbridge_more_offer_activity layout");
                return;
            }
            setContentView(iFindLayout);
            Intent intent = getIntent();
            String stringExtra = intent.getStringExtra(INTENT_UNITID);
            this.a = stringExtra;
            if (TextUtils.isEmpty(stringExtra)) {
                a("data empty error");
                return;
            }
            this.m = com.mbridge.msdk.reward.a.a.b.get(this.a);
            this.b = intent.getStringExtra(MBridgeConstans.PLACEMENT_ID);
            this.d = d.b(intent.getStringExtra(INTENT_REWARD));
            this.c = intent.getStringExtra(INTENT_USERID);
            this.e = intent.getIntExtra(INTENT_MUTE, 2);
            this.f = intent.getBooleanExtra(INTENT_ISIV, false);
            com.mbridge.msdk.foundation.controller.a aVarF = com.mbridge.msdk.foundation.controller.a.f();
            boolean z = this.f;
            int i = com.tkay.expressad.foundation.g.a.aU;
            aVarF.b(z ? 287 : 94);
            this.g = intent.getBooleanExtra(INTENT_ISBID, false);
            this.z = intent.getStringExtra(INTENT_EXTRADATA);
            if (this.f) {
                this.h = intent.getIntExtra(INTENT_IVREWARD_MODETYPE, 0);
                this.i = intent.getIntExtra(INTENT_IVREWARD_VALUETYPE, 0);
                this.j = intent.getIntExtra(INTENT_IVREWARD_VALUE, 0);
            }
            this.jsFactory = new com.mbridge.msdk.video.js.factory.b(this);
            registerJsFactory(this.jsFactory);
            if (this.m == null) {
                a("showRewardListener is null");
                return;
            }
            com.mbridge.msdk.videocommon.d.c cVar = RewardUnitCacheManager.getInstance().get(this.b, this.a);
            this.n = cVar;
            if (cVar == null) {
                com.mbridge.msdk.videocommon.d.c cVarA = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.a);
                this.n = cVarA;
                if (cVarA == null) {
                    this.n = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.a, this.f);
                }
            }
            if (this.n != null) {
                this.d.a(this.n.m());
                this.d.a(this.n.n());
            }
            if (this.d != null && this.d.b() <= 0) {
                this.d.a(1);
            }
            int iA = s.a(this, "mbridge_reward_activity_open", i.f);
            int iA2 = s.a(this, "mbridge_reward_activity_stay", i.f);
            if (iA > 1 && iA2 > 1) {
                overridePendingTransition(iA, iA2);
            }
            if (bundle != null) {
                try {
                    this.p = bundle.getBoolean(SAVE_STATE_KEY_REPORT);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
            this.s = com.mbridge.msdk.videocommon.download.b.getInstance().b(this.a);
            boolean booleanExtra = intent.getBooleanExtra(INTENT_ISBIG_OFFER, false);
            this.k = booleanExtra;
            if (!booleanExtra) {
                if (this.s != null && this.s.size() > 0) {
                    this.q = this.s.get(0);
                }
                if (this.q != null) {
                    this.r = this.q.g();
                    this.q.a(true);
                    this.q.b(false);
                }
                if (this.q == null || this.r == null || this.d == null) {
                    a("data empty error");
                }
                a();
                return;
            }
            CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayListA = com.mbridge.msdk.videocommon.download.b.getInstance().a(this.a);
            this.t = copyOnWriteArrayListA;
            this.y = "";
            if (copyOnWriteArrayListA != null && copyOnWriteArrayListA.size() > 0) {
                CampaignEx campaignEx = this.t.get(0);
                cMPTEntryUrl = campaignEx.getCMPTEntryUrl();
                this.y = campaignEx.getRequestId();
            }
            a.a aVarA = com.mbridge.msdk.videocommon.a.a(this.a + "_" + this.y + "_" + cMPTEntryUrl);
            WindVaneWebView windVaneWebViewA = aVarA != null ? aVarA.a() : null;
            this.w = windVaneWebViewA;
            if (windVaneWebViewA == null) {
                if (this.q == null && this.s != null && this.s.size() > 0) {
                    this.q = this.s.get(0);
                }
                if (this.q == null) {
                    com.mbridge.msdk.videocommon.download.b bVar = com.mbridge.msdk.videocommon.download.b.getInstance();
                    if (!this.f) {
                        i = 94;
                    }
                    String str = this.a;
                    boolean z2 = this.g;
                    com.mbridge.msdk.videocommon.download.d dVarC = bVar.c(str);
                    this.q = dVarC != null ? dVarC.b(i, z2) : null;
                }
                if (this.q != null) {
                    this.r = this.q.g();
                    this.q.a(true);
                    this.q.b(false);
                }
                if (this.q == null || this.r == null || this.d == null) {
                    a("data empty error");
                }
                this.k = false;
                try {
                    com.mbridge.msdk.reward.b.a.a(this.r, com.mbridge.msdk.foundation.controller.a.f().j(), "showMoreOffer showBTOld", this.a, this.g, this.r.getRequestId(), this.r.getRequestIdNotice(), 0L);
                } catch (Exception unused) {
                }
                List<CampaignEx> listA = com.mbridge.msdk.videocommon.a.a.a().a(this.t);
                if (listA == null) {
                    a("no available campaign");
                    return;
                }
                int size = listA.size();
                if (size == 0) {
                    a("no available campaign");
                    return;
                }
                if (listA.get(0) == null || !listA.get(0).isDynamicView()) {
                    a();
                    return;
                }
                if (size == 1) {
                    CampaignEx campaignEx2 = listA.get(0);
                    this.r = campaignEx2;
                    if (campaignEx2 != null) {
                        campaignEx2.setCampaignIsFiltered(true);
                        com.mbridge.msdk.reward.b.a.a(this.r, com.mbridge.msdk.foundation.controller.a.f().j(), "no available campaign but to one offer show", this.a, this.g, this.r.getRequestId(), this.r.getRequestIdNotice(), 0L);
                    }
                    a(this.r);
                    return;
                }
                a(listA);
                return;
            }
            b();
        } catch (Throwable th) {
            a("onCreate error" + th);
        }
    }

    private void a(List<CampaignEx> list) {
        if (list == null) {
            a("no available campaign");
            return;
        }
        if (list.size() == 0) {
            a("no available campaign");
            return;
        }
        if ((list.get(0) != null ? list.get(0).getDynamicTempCode() : 0) == 5) {
            for (CampaignEx campaignEx : list) {
                if (campaignEx != null) {
                    this.C += campaignEx.getVideoLength();
                }
            }
            CampaignEx campaignEx2 = list.get(0);
            if (campaignEx2 != null) {
                int iA = a(campaignEx2.getVideoCompleteTime(), this.B);
                this.r = campaignEx2;
                campaignEx2.setCampaignIsFiltered(true);
                this.B = 1;
                this.r.setVideoCompleteTime(iA);
                a(this.r);
                return;
            }
            a("campaign is less");
            return;
        }
        b();
    }

    private void a(CampaignEx campaignEx) {
        CampaignEx campaignExG;
        try {
            if (this.s != null && this.s.size() > 0) {
                for (com.mbridge.msdk.videocommon.download.a aVar : this.s) {
                    if (aVar != null && (campaignExG = aVar.g()) != null && TextUtils.equals(campaignExG.getId(), campaignEx.getId()) && TextUtils.equals(campaignExG.getRequestId(), campaignEx.getRequestId())) {
                        this.q = aVar;
                    }
                }
            }
            this.k = true;
            a();
            if (this.u != null) {
                this.u.setNotchPadding(this.H, this.D, this.F, this.E, this.G);
            }
        } catch (Exception e) {
            z.d("MBRewardVideoActivity", e.getMessage());
            a("more offer to one offer exception");
        }
    }

    private void a(String str) {
        z.d("MBRewardVideoActivity", str);
        h hVar = this.m;
        if (hVar != null) {
            hVar.a(str);
        }
        finish();
    }

    private void b(CampaignEx campaignEx) {
        if (this.n == null || TextUtils.isEmpty(com.mbridge.msdk.videocommon.d.c.a)) {
            return;
        }
        e.a().a(com.mbridge.msdk.videocommon.d.c.a, campaignEx, (Context) this, this.a, (com.mbridge.msdk.mbjscommon.confirmation.c) null);
    }

    private void a() {
        List<CampaignEx> list;
        RewardPlus rewardPlus;
        List<CampaignEx> list2;
        int iFindID = findID("mbridge_temp_container");
        if (iFindID < 0) {
            a("no id mbridge_bt_container in mbridge_more_offer_activity layout");
        }
        MBTempContainer mBTempContainer = (MBTempContainer) findViewById(iFindID);
        this.u = mBTempContainer;
        if (mBTempContainer == null) {
            a("env error");
        }
        List<CampaignEx> list3 = this.t;
        if (list3 != null && list3.size() > 0 && this.t.get(0).isDynamicView()) {
            new com.mbridge.msdk.video.dynview.h.b().c(this.u, 500L);
        } else {
            this.u.setVisibility(0);
        }
        changeHalfScreenPadding(-1);
        this.u.setActivity(this);
        this.u.setBidCampaign(this.g);
        this.u.setBigOffer(this.k);
        this.u.setUnitId(this.a);
        this.u.setCampaign(this.r);
        if (this.r.getDynamicTempCode() == 5 && (list2 = this.t) != null && list2.size() > 1) {
            View viewFindViewById = findViewById(findID("mbridge_reward_root_container"));
            if (viewFindViewById != null) {
                viewFindViewById.setBackgroundColor(-16777216);
            }
            this.u.removeAllViews();
            this.u.setCampOrderViewData(this.t, this.C);
            this.u.setCamPlayOrderCallback(this.I, this.B);
        }
        this.u.setCampaignDownLoadTask(this.q);
        this.u.setIV(this.f);
        CampaignEx campaignEx = this.r;
        if (campaignEx != null && campaignEx.getAdSpaceT() == 2) {
            this.u.setIVRewardEnable(0, 0, 0);
        } else {
            this.u.setIVRewardEnable(this.h, this.i, this.j);
        }
        this.u.setMute(this.e);
        this.u.setDeveloperExtraData(this.z);
        CampaignEx campaignEx2 = this.r;
        if (((campaignEx2 != null && (rewardPlus = campaignEx2.getRewardPlus()) != null) || ((list = this.t) != null && list.size() > 0 && this.t.get(0) != null && (rewardPlus = this.t.get(0).getRewardPlus()) != null)) && !TextUtils.isEmpty(rewardPlus.getName()) && rewardPlus.getAmount() > 0) {
            d dVar = new d(rewardPlus.getName(), rewardPlus.getAmount());
            if (dVar.b() < 0) {
                dVar.a(1);
            }
            this.d = dVar;
        }
        this.u.setReward(this.d);
        this.u.setRewardUnitSetting(this.n);
        this.u.setPlacementId(this.b);
        this.u.setUserId(this.c);
        this.u.setShowRewardListener(this.m);
        this.u.init(this);
        this.u.onCreate();
        try {
            com.mbridge.msdk.reward.b.a.a(this.r, com.mbridge.msdk.foundation.controller.a.f().j(), "showBTOld", this.a, this.g, "", "", 0L);
        } catch (Exception unused) {
        }
        b(this.r);
    }

    private void b() {
        RewardPlus rewardPlus;
        int iFindID = findID("mbridge_bt_container");
        if (iFindID < 0) {
            a("no mbridge_webview_framelayout in mbridge_more_offer_activity layout");
        }
        MBridgeBTContainer mBridgeBTContainer = (MBridgeBTContainer) findViewById(iFindID);
        this.v = mBridgeBTContainer;
        if (mBridgeBTContainer == null) {
            a("env error");
        }
        this.v.setVisibility(0);
        com.mbridge.msdk.video.bt.module.a.a aVarC = c();
        this.x = aVarC;
        this.v.setBTContainerCallback(aVarC);
        this.v.setShowRewardVideoListener(this.m);
        this.v.setChoiceOneCallback(this.J);
        this.v.setCampaigns(this.t);
        this.v.setCampaignDownLoadTasks(this.s);
        this.v.setRewardUnitSetting(this.n);
        this.v.setUnitId(this.a);
        this.v.setPlacementId(this.b);
        this.v.setUserId(this.c);
        this.v.setActivity(this);
        this.v.setDeveloperExtraData(this.z);
        CampaignEx campaignEx = this.r;
        if (((campaignEx != null && (rewardPlus = campaignEx.getRewardPlus()) != null) || (this.t.get(0) != null && (rewardPlus = this.t.get(0).getRewardPlus()) != null)) && !TextUtils.isEmpty(rewardPlus.getName()) && rewardPlus.getAmount() > 0) {
            d dVar = new d(rewardPlus.getName(), rewardPlus.getAmount());
            if (dVar.b() < 0) {
                dVar.a(1);
            }
            this.d = dVar;
        }
        this.v.setReward(this.d);
        this.v.setIVRewardEnable(this.h, this.i, this.j);
        this.v.setIV(this.f);
        this.v.setMute(this.e);
        this.v.setJSFactory((com.mbridge.msdk.video.js.factory.b) this.jsFactory);
        this.v.init(this);
        this.v.onCreate();
        try {
            if (this.s != null && this.s.size() > 0) {
                com.mbridge.msdk.reward.b.a.a(this.s.get(0).g(), com.mbridge.msdk.foundation.controller.a.f().j(), "showMoreOffer", this.a, this.g, "", "", 0L);
            }
        } catch (Exception unused) {
        }
        List<CampaignEx> list = this.t;
        if (list == null || list.size() <= 0 || this.t.get(0) == null) {
            return;
        }
        b(this.t.get(0));
    }

    private com.mbridge.msdk.video.bt.module.a.a c() {
        if (this.x == null) {
            this.x = new com.mbridge.msdk.video.bt.module.a.a() {
                @Override
                public final void a() {
                    if (MBRewardVideoActivity.this.m != null) {
                        MBRewardVideoActivity.this.m.a();
                    }
                }

                @Override
                public final void a(boolean z, d dVar) {
                    if (MBRewardVideoActivity.this.m != null) {
                        MBRewardVideoActivity.this.m.a(z, dVar);
                    }
                }

                @Override
                public final void a(boolean z, int i) {
                    if (MBRewardVideoActivity.this.m != null) {
                        MBRewardVideoActivity.this.m.a(z, i);
                    }
                }

                @Override
                public final void a(String str) {
                    if (MBRewardVideoActivity.this.m != null) {
                        MBRewardVideoActivity.this.m.a(str);
                    }
                }

                @Override
                public final void a(boolean z, String str, String str2) {
                    if (MBRewardVideoActivity.this.m != null) {
                        MBRewardVideoActivity.this.m.a(z, str, str2);
                    }
                }

                @Override
                public final void a(String str, String str2) {
                    if (MBRewardVideoActivity.this.m != null) {
                        MBRewardVideoActivity.this.m.a(str, str2);
                    }
                }

                @Override
                public final void b(String str, String str2) {
                    if (MBRewardVideoActivity.this.m != null) {
                        MBRewardVideoActivity.this.m.b(str, str2);
                    }
                }

                @Override
                public final void a(int i, String str, String str2) {
                    if (MBRewardVideoActivity.this.m != null) {
                        MBRewardVideoActivity.this.m.a(i, str, str2);
                    }
                }
            };
        }
        return this.x;
    }

    private int a(int i, int i2) {
        List<CampaignEx> list = this.t;
        if (list == null || list.size() == 0) {
            return i;
        }
        int videoLength = 0;
        int videoCompleteTime = 0;
        for (int i3 = 0; i3 < this.t.size(); i3++) {
            if (this.t.get(0) != null) {
                if (i3 == 0) {
                    videoCompleteTime = this.t.get(0).getVideoCompleteTime();
                }
                videoLength += this.t.get(i3).getVideoLength();
            }
        }
        if (i2 == 1) {
            if (i == 0) {
                if (videoLength >= 45) {
                    return 45;
                }
            } else if (videoLength > i) {
                if (i > 45) {
                    return 45;
                }
                return i;
            }
            return videoLength;
        }
        int videoLength2 = 0;
        for (int i4 = 0; i4 < i2 - 1; i4++) {
            if (this.t.get(i4) != null) {
                videoLength2 += this.t.get(i4).getVideoLength();
            }
        }
        if (videoCompleteTime > videoLength2) {
            return videoCompleteTime - videoLength2;
        }
        return 0;
    }

    @Override
    public void onResume() {
        super.onResume();
        if (com.mbridge.msdk.foundation.b.b.c) {
            return;
        }
        com.mbridge.msdk.foundation.controller.a.f().a(this);
        try {
            com.mbridge.msdk.foundation.same.f.b.a().execute(new c(this.a, this.s));
        } catch (Throwable th) {
            z.d("MBRewardVideoActivity", th.getMessage());
        }
        MBTempContainer mBTempContainer = this.u;
        if (mBTempContainer != null) {
            mBTempContainer.onResume();
        }
        MBridgeBTContainer mBridgeBTContainer = this.v;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.onResume();
        }
    }

    @Override
    public void onPause() {
        super.onPause();
        MBTempContainer mBTempContainer = this.u;
        if (mBTempContainer != null) {
            mBTempContainer.onPause();
        }
        MBridgeBTContainer mBridgeBTContainer = this.v;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.onPause();
        }
    }

    @Override
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        if (this.u != null) {
            changeHalfScreenPadding(configuration.orientation);
            this.u.onConfigurationChanged(configuration);
        }
        MBridgeBTContainer mBridgeBTContainer = this.v;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.onConfigurationChanged(configuration);
        }
    }

    @Override
    public void onBackPressed() {
        super.onBackPressed();
        MBTempContainer mBTempContainer = this.u;
        if (mBTempContainer != null) {
            mBTempContainer.onBackPressed();
        }
        MBridgeBTContainer mBridgeBTContainer = this.v;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.onBackPressed();
        }
    }

    @Override
    protected void onStop() {
        MBridgeConstans.isRewardActivityShowing = false;
        super.onStop();
        MBTempContainer mBTempContainer = this.u;
        if (mBTempContainer != null) {
            mBTempContainer.onStop();
        }
        MBridgeBTContainer mBridgeBTContainer = this.v;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.onStop();
        }
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        try {
            if (this.t != null && this.t.size() > 0) {
                Iterator<CampaignEx> it = this.t.iterator();
                while (it.hasNext()) {
                    c(it.next());
                }
            }
            if (this.r != null) {
                c(this.r);
            }
        } catch (Throwable th) {
            z.d("MBRewardVideoActivity", th.getMessage());
        }
        com.mbridge.msdk.video.module.b.b.a(this.a);
        MBTempContainer mBTempContainer = this.u;
        if (mBTempContainer != null) {
            mBTempContainer.onDestroy();
            this.u = null;
        }
        MBridgeBTContainer mBridgeBTContainer = this.v;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.onDestroy();
            this.v = null;
        }
        this.I = null;
        this.J = null;
        com.mbridge.msdk.foundation.same.f.b.a().execute(new a(this.s, this.a, this.y));
    }

    @Override
    protected void onRestart() {
        super.onRestart();
        MBTempContainer mBTempContainer = this.u;
        if (mBTempContainer != null) {
            mBTempContainer.onRestart();
        }
        MBridgeBTContainer mBridgeBTContainer = this.v;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.onRestart();
        }
    }

    @Override
    protected void onStart() {
        super.onStart();
        new com.mbridge.msdk.foundation.b.a() {
            @Override
            public final void a() {
                MBRewardVideoActivity.this.onPause();
            }

            @Override
            public final void b() {
                MBRewardVideoActivity.this.onResume();
            }

            @Override
            public final void a(String str) {
                MBRewardVideoActivity.this.onResume();
            }
        };
        if (com.mbridge.msdk.foundation.b.b.c) {
            return;
        }
        MBTempContainer mBTempContainer = this.u;
        if (mBTempContainer != null) {
            mBTempContainer.onStart();
            this.r.setCampaignUnitId(this.a);
            com.mbridge.msdk.foundation.b.b.a().a(this.a + "_1", this.r);
        }
        MBridgeBTContainer mBridgeBTContainer = this.v;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.onStart();
            List<CampaignEx> list = this.t;
            if (list != null && list.size() > 0) {
                CampaignEx campaignEx = this.t.get(0);
                campaignEx.setCampaignUnitId(this.a);
                com.mbridge.msdk.foundation.b.b.a().a(this.a + "_1", campaignEx);
            }
        }
        if (this.A) {
            return;
        }
        com.mbridge.msdk.foundation.b.b.a().c(this.a + "_1", 1);
        com.mbridge.msdk.foundation.b.b.a().c(this.a + "_2");
        this.A = true;
    }

    private static final class a implements Runnable {
        private final List<com.mbridge.msdk.videocommon.download.a> a;
        private final String b;
        private final String c;

        public a(List<com.mbridge.msdk.videocommon.download.a> list, String str, String str2) {
            this.a = list;
            this.b = str;
            this.c = str2;
        }

        @Override
        public final void run() {
            try {
                if (this.a == null || this.a.size() <= 0) {
                    return;
                }
                for (com.mbridge.msdk.videocommon.download.a aVar : this.a) {
                    if (aVar != null && aVar.g() != null) {
                        CampaignEx campaignExG = aVar.g();
                        try {
                            AppletModelManager.getInstance().remove(campaignExG);
                        } catch (Exception e) {
                            if (MBridgeConstans.DEBUG) {
                                z.c("MBRewardVideoActivity", "AppletModelManager remove error", e);
                            }
                        }
                        String str = campaignExG.getRequestId() + campaignExG.getId() + campaignExG.getVideoUrlEncode();
                        com.mbridge.msdk.videocommon.download.d dVarC = com.mbridge.msdk.videocommon.download.b.getInstance().c(this.b);
                        if (dVarC != null) {
                            try {
                                dVarC.b(str);
                            } catch (Exception unused) {
                            }
                        }
                        if (campaignExG != null && campaignExG.getRewardTemplateMode() != null) {
                            if (!TextUtils.isEmpty(campaignExG.getRewardTemplateMode().e())) {
                                com.mbridge.msdk.videocommon.a.b(this.b + "_" + campaignExG.getId() + "_" + this.c + "_" + campaignExG.getRewardTemplateMode().e());
                                com.mbridge.msdk.videocommon.a.b(campaignExG.getAdType(), campaignExG);
                            }
                            if (!TextUtils.isEmpty(campaignExG.getCMPTEntryUrl())) {
                                com.mbridge.msdk.videocommon.a.b(this.b + "_" + this.c + "_" + campaignExG.getCMPTEntryUrl());
                            }
                            com.mbridge.msdk.videocommon.a.a.a().a(campaignExG);
                        }
                    }
                }
            } catch (Exception e2) {
                z.a("MBRewardVideoActivity", e2.getMessage());
            }
        }
    }

    @Override
    public void finish() {
        super.finish();
        com.mbridge.msdk.foundation.controller.a.f().b(0);
        MBTempContainer mBTempContainer = this.u;
        if (mBTempContainer != null) {
            mBTempContainer.onDestroy();
            this.u = null;
        }
        MBridgeBTContainer mBridgeBTContainer = this.v;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.onDestroy();
            this.v = null;
        }
        com.mbridge.msdk.foundation.b.b.a().c(this.a + "_1");
        com.mbridge.msdk.foundation.b.b.a().c(this.a + "_2");
    }

    @Override
    public void onSaveInstanceState(Bundle bundle) {
        bundle.putBoolean(SAVE_STATE_KEY_REPORT, this.p);
        super.onSaveInstanceState(bundle);
    }

    @Override
    public void setTopControllerPadding(int i, int i2, int i3, int i4, int i5) {
        this.D = i2;
        this.F = i3;
        this.E = i4;
        this.G = i5;
        this.H = i;
        MBTempContainer mBTempContainer = this.u;
        if (mBTempContainer != null) {
            mBTempContainer.setNotchPadding(i, i2, i3, i4, i5);
        }
        MBridgeBTContainer mBridgeBTContainer = this.v;
        if (mBridgeBTContainer != null) {
            mBridgeBTContainer.setNotchPadding(i, i2, i3, i4, i5);
        }
        com.mbridge.msdk.video.dynview.a.a.e = i;
        com.mbridge.msdk.video.dynview.a.a.a = i2;
        com.mbridge.msdk.video.dynview.a.a.b = i3;
        com.mbridge.msdk.video.dynview.a.a.c = i4;
        com.mbridge.msdk.video.dynview.a.a.d = i5;
    }

    public int findID(String str) {
        return s.a(getApplicationContext(), str, "id");
    }

    public int findLayout(String str) {
        return s.a(getApplicationContext(), str, "layout");
    }

    public void changeHalfScreenPadding(int i) {
        try {
            if (this.r == null || this.r.getAdSpaceT() != 2) {
                return;
            }
            getWindow().getDecorView().setBackground(new ColorDrawable(0));
            FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) this.u.getLayoutParams();
            int iB = ae.b(this, 58.0f);
            int iB2 = ae.b(this, 104.0f);
            if (this.r.getRewardTemplateMode().c() == 0) {
                if (i == 2) {
                    layoutParams.setMargins(iB2, iB, iB2, iB);
                } else {
                    layoutParams.setMargins(iB, iB2, iB, iB2);
                }
            } else if (this.r.getRewardTemplateMode().c() == 2) {
                layoutParams.setMargins(iB2, iB, iB2, iB);
            } else {
                layoutParams.setMargins(iB, iB2, iB, iB2);
            }
            this.u.setLayoutParams(layoutParams);
        } catch (Throwable th) {
            z.d("MBRewardVideoActivity", th.getMessage());
        }
    }

    private void c(CampaignEx campaignEx) {
        if (campaignEx != null) {
            if (!TextUtils.isEmpty(campaignEx.getImageUrl())) {
                com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).c(campaignEx.getImageUrl());
            }
            if (TextUtils.isEmpty(campaignEx.getIconUrl())) {
                return;
            }
            com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).c(campaignEx.getIconUrl());
        }
    }

    @Override
    public void setTheme(int i) {
        super.setTheme(s.a(this, "mbridge_transparent_theme", "style"));
    }

    private static final class b implements Runnable {
        private final CampaignEx a;
        private final String b;
        private final int c;

        public b(CampaignEx campaignEx, String str, int i) {
            this.a = campaignEx;
            this.b = str;
            this.c = i;
        }

        @Override
        public final void run() {
            if (this.a == null || TextUtils.isEmpty(this.b)) {
                return;
            }
            try {
                String mof_template_url = this.a.getMof_template_url();
                com.mbridge.msdk.video.module.b.a.a(this.b, this.a, this.c, TextUtils.isEmpty(mof_template_url) ? "" : ak.a(mof_template_url, "cltp"));
            } catch (Exception unused) {
            }
        }
    }

    private static final class c implements Runnable {
        private final List<com.mbridge.msdk.videocommon.download.a> a;
        private final String b;

        public c(String str, List<com.mbridge.msdk.videocommon.download.a> list) {
            this.a = list;
            this.b = str;
        }

        @Override
        public final void run() {
            try {
                if (this.a == null || this.a.size() <= 0) {
                    return;
                }
                for (com.mbridge.msdk.videocommon.download.a aVar : this.a) {
                    if (aVar != null && aVar.g() != null) {
                        com.mbridge.msdk.videocommon.a.a.a().a(aVar.g(), this.b);
                    }
                }
            } catch (Throwable th) {
                z.d("MBRewardVideoActivity", th.getMessage());
            }
        }
    }
}
