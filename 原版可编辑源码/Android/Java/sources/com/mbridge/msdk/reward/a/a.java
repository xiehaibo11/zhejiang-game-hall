package com.mbridge.msdk.reward.a;

import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.db.f;
import com.mbridge.msdk.foundation.db.i;
import com.mbridge.msdk.foundation.db.j;
import com.mbridge.msdk.foundation.db.k;
import com.mbridge.msdk.foundation.download.download.H5DownLoadManager;
import com.mbridge.msdk.foundation.download.download.HTMLResourceManager;
import com.mbridge.msdk.foundation.download.download.ResourceManager;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.entity.g;
import com.mbridge.msdk.foundation.tools.ab;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.ag;
import com.mbridge.msdk.foundation.tools.ai;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.x;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.out.MBridgeIds;
import com.mbridge.msdk.out.RewardInfo;
import com.mbridge.msdk.reward.adapter.c;
import com.mbridge.msdk.video.bt.module.b.h;
import com.mbridge.msdk.videocommon.a;
import com.mbridge.msdk.videocommon.listener.InterVideoOutListener;
import java.lang.ref.WeakReference;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Date;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicInteger;
import org.json.JSONObject;

public class a {
    public static String a;
    private boolean E;
    private Queue<Integer> M;
    private String N;
    private CopyOnWriteArrayList<CampaignEx> W;
    private List<CampaignEx> X;
    private Context h;
    private int i;
    private com.mbridge.msdk.reward.adapter.d j;
    private com.mbridge.msdk.videocommon.d.c k;
    private com.mbridge.msdk.videocommon.d.a l;
    private volatile InterVideoOutListener m;
    private volatile c n;
    private String o;
    private String p;
    private MBridgeIds q;
    private String r;
    private volatile String s;
    private String t;
    private int x;
    private int y;
    private int z;
    private static ConcurrentHashMap<String, Integer> K = new ConcurrentHashMap<>();
    private static ConcurrentHashMap<String, String> L = new ConcurrentHashMap<>();
    public static ConcurrentHashMap<String, d> b = new ConcurrentHashMap<>();
    private int u = 0;
    private int w = 2;
    private boolean A = false;
    private boolean B = false;
    private boolean C = false;
    private boolean D = false;
    private boolean F = false;
    private ArrayList<Integer> G = new ArrayList<>(7);
    private boolean H = false;
    private final Object I = new Object();
    private boolean J = false;
    private i O = null;
    private volatile boolean P = true;
    private volatile boolean Q = false;
    private volatile boolean R = false;
    private volatile boolean S = false;
    private volatile boolean T = false;
    private volatile boolean U = false;
    private volatile boolean V = false;
    volatile boolean c = false;
    volatile boolean d = false;
    volatile boolean e = false;
    volatile boolean f = false;
    volatile boolean g = false;
    private Handler v = new Handler(Looper.getMainLooper()) {
        @Override
        public final void handleMessage(Message message) {
            switch (message.what) {
                case 8:
                    if (a.this.W != null && a.this.W.size() > 0) {
                        boolean z = (a.this.X == null || a.this.X.size() <= 0) ? false : !TextUtils.isEmpty(((CampaignEx) a.this.X.get(0)).getCMPTEntryUrl());
                        int nscpt = ((CampaignEx) a.this.W.get(0)).getNscpt();
                        if (a.this.j == null || !a.this.j.a(a.this.W, z, nscpt)) {
                            if (a.this.n != null && a.this.E) {
                                com.mbridge.msdk.videocommon.a.c(a.this.p);
                                com.mbridge.msdk.videocommon.a.a();
                                c.a(a.this.n, "load timeout");
                                break;
                            }
                        } else if (a.this.n != null && a.this.E) {
                            c.a(a.this.n, a.this.s, a.this.p);
                            break;
                        }
                    }
                    break;
                case 9:
                    if (a.this.m != null && a.this.E) {
                        Object obj = message.obj;
                        if (obj instanceof String) {
                            obj.toString();
                        }
                        Bundle data = message.getData();
                        if (data != null && data.containsKey(MBridgeConstans.PLACEMENT_ID)) {
                            TextUtils.isEmpty(data.getString(MBridgeConstans.PLACEMENT_ID));
                        }
                        try {
                            if (a.this.B) {
                                a.j(a.this);
                            }
                            a.this.m.onVideoLoadSuccess(a.this.q);
                        } catch (Exception e) {
                            if (MBridgeConstans.DEBUG) {
                                e.printStackTrace();
                                return;
                            }
                            return;
                        }
                        break;
                    }
                    break;
                case 16:
                case 18:
                    if (a.this.m != null && a.this.E) {
                        Object obj2 = message.obj;
                        String string = obj2 instanceof String ? obj2.toString() : "";
                        com.mbridge.msdk.videocommon.a.c(a.this.p);
                        com.mbridge.msdk.videocommon.a.a();
                        try {
                            if (a.this.B) {
                                a.j(a.this);
                            }
                            a.this.m.onVideoLoadFail(a.this.q, string);
                        } catch (Exception e2) {
                            if (MBridgeConstans.DEBUG) {
                                e2.printStackTrace();
                                return;
                            }
                            return;
                        }
                        break;
                    }
                    break;
                case 17:
                    if (a.this.m != null && a.this.E) {
                        Object obj3 = message.obj;
                        if (obj3 instanceof String) {
                            obj3.toString();
                        }
                        Bundle data2 = message.getData();
                        if (data2 != null && data2.containsKey(MBridgeConstans.PLACEMENT_ID)) {
                            TextUtils.isEmpty(data2.getString(MBridgeConstans.PLACEMENT_ID));
                        }
                        try {
                            if (a.this.B) {
                                a.j(a.this);
                            }
                            a.this.m.onLoadSuccess(a.this.q);
                        } catch (Exception e3) {
                            if (MBridgeConstans.DEBUG) {
                                e3.printStackTrace();
                                return;
                            }
                            return;
                        }
                        break;
                    }
                    break;
                case YmnBaseInterface.CODE_YMN_GET_DEVICEID:
                    a.this.d(false);
                    break;
                case YmnBaseInterface.CODE_DATAFUN_GET_DEVICEID:
                    int iH = a.this.k != null ? a.this.k.H() : 0;
                    if (a.this.j != null) {
                        if (a.this.j.b()) {
                            if (a.this.n != null) {
                                z.a("RewardVideoController", "load timeout task called for onVideoLoadSuccess by isReady exception");
                                try {
                                    CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayListD = a.this.j.d();
                                    if (copyOnWriteArrayListD != null && copyOnWriteArrayListD.size() > 0) {
                                        com.mbridge.msdk.reward.b.a.a(copyOnWriteArrayListD.get(0), com.mbridge.msdk.foundation.controller.a.f().j(), "load timeout task called onVideoLoadSuccess after " + iH + "s exception", a.this.p, a.this.B, "", "", iH);
                                        com.mbridge.msdk.reward.b.a.a(a.this.h, copyOnWriteArrayListD, a.this.p, 0L);
                                    }
                                } catch (Throwable th) {
                                    z.d("RewardVideoController", th.getMessage());
                                }
                                c.b(a.this.n, a.this.s, a.this.p);
                            }
                        } else if (a.this.j.g(false)) {
                            if (a.this.j.b()) {
                                if (a.this.n != null) {
                                    z.a("RewardVideoController", "load timeout task called for onVideoLoadSuccess by isReady but updateCampaignsLoadTimeoutState exception");
                                    a.this.j.e(false);
                                    try {
                                        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayListD2 = a.this.j.d();
                                        if (copyOnWriteArrayListD2 != null && copyOnWriteArrayListD2.size() > 0) {
                                            com.mbridge.msdk.reward.b.a.a(copyOnWriteArrayListD2.get(0), com.mbridge.msdk.foundation.controller.a.f().j(), "load timeout task called onVideoLoadSuccess after " + iH + "s exception", a.this.p, a.this.B, "", "", iH);
                                            com.mbridge.msdk.reward.b.a.a(a.this.h, copyOnWriteArrayListD2, a.this.p, 0L);
                                        }
                                    } catch (Throwable th2) {
                                        z.d("RewardVideoController", th2.getMessage());
                                    }
                                    c.b(a.this.n, a.this.s, a.this.p);
                                }
                            } else {
                                a.this.j.f(false);
                                if (a.this.j.g(true)) {
                                    if (a.this.j.b()) {
                                        if (a.this.n != null) {
                                            z.a("RewardVideoController", "load timeout task called for onVideoLoadSuccess by isReady but updateCampaignsLoadTimeoutState exception");
                                            a.this.j.e(true);
                                            try {
                                                CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayListD3 = a.this.j.d();
                                                if (copyOnWriteArrayListD3 != null && copyOnWriteArrayListD3.size() > 0) {
                                                    com.mbridge.msdk.reward.b.a.a(copyOnWriteArrayListD3.get(0), com.mbridge.msdk.foundation.controller.a.f().j(), "load timeout task called onVideoLoadSuccess after " + iH + "s exception", a.this.p, a.this.B, "", "", iH);
                                                    com.mbridge.msdk.reward.b.a.a(a.this.h, copyOnWriteArrayListD3, a.this.p, 0L);
                                                }
                                            } catch (Throwable th3) {
                                                z.d("RewardVideoController", th3.getMessage());
                                            }
                                            c.b(a.this.n, a.this.s, a.this.p);
                                        }
                                    } else {
                                        if (a.this.n != null) {
                                            z.a("RewardVideoController", "load timeout task called for onVideoLoadFail after " + iH + "s exception");
                                        }
                                        a.this.j.f(true);
                                    }
                                } else if (a.this.n != null) {
                                    z.a("RewardVideoController", "load timeout task called for onVideoLoadFail after " + iH + "s exception");
                                }
                            }
                            break;
                        } else if (a.this.j.g(true)) {
                            if (a.this.j.b()) {
                                if (a.this.n != null) {
                                    z.a("RewardVideoController", "load timeout task called for onVideoLoadSuccess by isReady but updateCampaignsLoadTimeoutState");
                                    a.this.j.e(true);
                                    try {
                                        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayListD4 = a.this.j.d();
                                        if (copyOnWriteArrayListD4 != null && copyOnWriteArrayListD4.size() > 0) {
                                            com.mbridge.msdk.reward.b.a.a(copyOnWriteArrayListD4.get(0), com.mbridge.msdk.foundation.controller.a.f().j(), "load timeout task called onVideoLoadSuccess after " + iH + "s exception", a.this.p, a.this.B, "", "", iH);
                                            com.mbridge.msdk.reward.b.a.a(a.this.h, copyOnWriteArrayListD4, a.this.p, 0L);
                                        }
                                    } catch (Throwable th4) {
                                        z.d("RewardVideoController", th4.getMessage());
                                    }
                                    c.b(a.this.n, a.this.s, a.this.p);
                                }
                            } else {
                                if (a.this.n != null) {
                                    z.a("RewardVideoController", "load timeout task called for onVideoLoadFail after " + iH + " s");
                                }
                                a.this.j.f(true);
                            }
                        } else if (a.this.n != null) {
                            z.a("RewardVideoController", "load timeout task called for onVideoLoadFail after " + iH + " s");
                        }
                    } else if (a.this.n != null) {
                        z.a("RewardVideoController", "load timeout task called for onVideoLoadFail by mRewardMvVideoAdapter is null exception");
                    }
                    break;
            }
        }
    };

    public final void a(boolean z) {
        this.A = z;
    }

    public final void b(boolean z) {
        this.B = z;
    }

    public final void a(int i) {
        this.w = i;
    }

    public final void a(String str, String str2, String str3, String str4) {
        if (!TextUtils.isEmpty(str)) {
            ag.a(this.h, "MBridge_ConfirmTitle" + this.p, str.trim());
        }
        if (!TextUtils.isEmpty(str2)) {
            ag.a(this.h, "MBridge_ConfirmContent" + this.p, str2.trim());
        }
        if (!TextUtils.isEmpty(str4)) {
            ag.a(this.h, "MBridge_CancelText" + this.p, str4.trim());
        }
        if (TextUtils.isEmpty(str3)) {
            return;
        }
        ag.a(this.h, "MBridge_ConfirmText" + this.p, str3.trim());
    }

    public final void c(boolean z) {
        this.F = z;
    }

    public final void a(int i, int i2, int i3) {
        this.x = i;
        this.y = i2;
        if (i2 == com.mbridge.msdk.foundation.same.a.z) {
            this.z = i3 < 0 ? 5 : i3;
        }
        if (this.y == com.mbridge.msdk.foundation.same.a.y) {
            this.z = i3 < 0 ? 80 : i3;
        }
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("ivRewardEnable", 1);
            jSONObject.put("ivRewardMode", i == com.mbridge.msdk.foundation.same.a.w ? 0 : 1);
            jSONObject.put("ivRewardPlayValueMode", i2 == com.mbridge.msdk.foundation.same.a.y ? 0 : 1);
            jSONObject.put("ivRewardPlayValue", i3);
            com.mbridge.msdk.c.b.a();
            String str = this.p;
            String string = jSONObject.toString();
            com.mbridge.msdk.foundation.a.a.a.a().a("ivreward_" + str, string);
        } catch (Exception unused) {
            z.d("RewardVideoController", "setIVRewardEnable to SP was ERROR");
        }
    }

    public static void a(String str, int i) {
        try {
            if (K == null || !ai.b(str)) {
                return;
            }
            K.put(str, Integer.valueOf(i));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static int a(String str) {
        Integer num;
        try {
            if (!ai.b(str) || K == null || !K.containsKey(str) || (num = K.get(str)) == null) {
                return 0;
            }
            return num.intValue();
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    public static void a(String str, String str2) {
        ConcurrentHashMap<String, String> concurrentHashMap;
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || (concurrentHashMap = L) == null || concurrentHashMap.containsKey(str)) {
            return;
        }
        L.put(str, str2);
    }

    public final void a() {
        ConcurrentHashMap<String, String> concurrentHashMap;
        if (!this.H || (concurrentHashMap = L) == null || concurrentHashMap.containsKey(b())) {
            return;
        }
        L.remove(b());
    }

    public static void insertExcludeId(String str, CampaignEx campaignEx) {
        if (TextUtils.isEmpty(str) || campaignEx == null || com.mbridge.msdk.foundation.controller.a.f().j() == null) {
            return;
        }
        k kVarA = k.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j()));
        g gVar = new g();
        gVar.a(System.currentTimeMillis());
        gVar.b(str);
        gVar.a(campaignEx.getId());
        kVarA.a(gVar);
    }

    public final String b() {
        com.mbridge.msdk.reward.adapter.d dVar = this.j;
        return dVar != null ? dVar.c(this.H) : "";
    }

    private final class d implements h {
        private a b;
        private int c;
        private Handler d;
        private int e;

        @Override
        public final boolean b() {
            return false;
        }

        private d(a aVar, int i, Handler handler) {
            this.e = 0;
            this.b = aVar;
            this.c = i;
            this.d = handler;
        }

        @Override
        public final void a() {
            a.this.J = false;
            z.a("RewardVideoController", "=====================onAdShow=====================");
            try {
                if (this.b != null) {
                    this.b.H = true;
                    if (this.b.j != null) {
                        this.b.j.c = "";
                    }
                    final a aVar = this.b;
                    final int i = this.c;
                    com.mbridge.msdk.foundation.same.f.b.a().execute(new Runnable() {
                        @Override
                        public final void run() {
                            try {
                                if (a.this.O == null) {
                                    a.this.O = i.a(com.mbridge.msdk.foundation.controller.a.f().j());
                                }
                                j jVarA = j.a(a.this.O);
                                if (jVarA != null) {
                                    jVarA.a(a.this.p);
                                }
                            } catch (Throwable unused) {
                                z.d("RewardVideoController", "can't find DailyPlayCapDao");
                            }
                            if (i != 1) {
                                return;
                            }
                            ag.a(a.this.h, a.this.s + "_" + i, Integer.valueOf(a.this.i + 1));
                        }
                    });
                    if (this.b.m != null) {
                        if (a.this.B) {
                            a.j(a.this);
                        }
                        this.b.m.onAdShow(a.this.q);
                        this.e = 2;
                    }
                }
            } catch (Throwable th) {
                if (MBridgeConstans.DEBUG) {
                    th.printStackTrace();
                }
            }
        }

        @Override
        public final void a(boolean z, com.mbridge.msdk.videocommon.b.d dVar) {
            z.a("RewardVideoController", "=====================onAdClose=====================");
            try {
                if (this.b == null || this.b.m == null) {
                    return;
                }
                if (dVar == null) {
                    dVar = com.mbridge.msdk.videocommon.b.d.b(this.b.t);
                }
                if (a.this.B) {
                    a.j(a.this);
                    a.this.a();
                    com.mbridge.msdk.foundation.same.a.d.c(a.this.p, a.this.b());
                }
                this.b.m.onAdClose(a.this.q, new RewardInfo(z, dVar.a(), String.valueOf(dVar.b())));
                this.e = 7;
                z.a("RewardVideoController", "onAdClose start release");
                this.b.H = false;
                a.this.G.clear();
                this.b = null;
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    e.printStackTrace();
                }
            }
        }

        @Override
        public final void a(String str) {
            a.this.J = false;
            z.a("RewardVideoController", "=====================onShowFail=====================");
            try {
                if (this.b != null) {
                    if (a.this.B) {
                        a.j(a.this);
                    }
                    this.b.H = false;
                    if (this.b.m != null) {
                        try {
                            if (a.this.W != null && a.this.W.size() > 0) {
                                com.mbridge.msdk.reward.b.a.a((CampaignEx) a.this.W.get(0), com.mbridge.msdk.foundation.controller.a.f().j(), "show failed: " + str, a.this.p, a.this.B, "", "", 0L);
                            }
                        } catch (Exception unused) {
                        }
                        try {
                            this.b.m.onShowFail(a.this.q, str);
                        } catch (Exception e) {
                            if (MBridgeConstans.DEBUG) {
                                e.printStackTrace();
                            }
                        }
                        this.e = 4;
                    }
                }
            } catch (Exception e2) {
                this.e = 0;
                if (MBridgeConstans.DEBUG) {
                    e2.printStackTrace();
                }
            }
        }

        @Override
        public final void a(boolean z, String str, String str2) {
            z.a("RewardVideoController", "=====================onVideoAdClicked=====================");
            try {
                if (this.b == null || this.b.m == null) {
                    return;
                }
                try {
                    if (a.this.B) {
                        a.j(a.this);
                    }
                    this.b.m.onVideoAdClicked(z, a.this.q);
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        e.printStackTrace();
                    }
                }
            } catch (Exception e2) {
                if (MBridgeConstans.DEBUG) {
                    e2.printStackTrace();
                }
            }
        }

        @Override
        public final void a(String str, String str2) {
            z.a("RewardVideoController", "=====================onVideoComplete=====================");
            z.a("RewardVideoController", "onVideoComplete start");
            try {
                if (this.b == null || this.b.m == null) {
                    return;
                }
                try {
                    this.b.m.onVideoComplete(a.this.q);
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        e.printStackTrace();
                    }
                }
                this.e = 5;
                z.a("RewardVideoController", "onEndcardShow callback");
            } catch (Exception e2) {
                if (MBridgeConstans.DEBUG) {
                    e2.printStackTrace();
                }
            }
        }

        @Override
        public final void a(boolean z, int i) {
            z.a("RewardVideoController", "=====================onAdCloseWithIVReward=====================");
            z.a("RewardVideoController", "onAdCloseWithIVReward start");
            try {
                if (this.b == null || this.b.m == null) {
                    return;
                }
                this.b.H = false;
                try {
                    this.b.m.onAdCloseWithIVReward(a.this.q, new RewardInfo(z, i));
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        e.printStackTrace();
                    }
                }
                z.a("RewardVideoController", "onAdCloseWithIVReward callback");
            } catch (Exception e2) {
                if (MBridgeConstans.DEBUG) {
                    e2.printStackTrace();
                }
            }
        }

        @Override
        public final void b(String str, String str2) {
            z.a("RewardVideoController", "=====================onEndcardShow=====================");
            z.a("RewardVideoController", "onEndcardShow start");
            try {
                if (this.b == null || this.b.m == null) {
                    return;
                }
                try {
                    this.b.m.onEndcardShow(a.this.q);
                    com.mbridge.msdk.foundation.b.b.a().c(str2 + "_2", 2);
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        e.printStackTrace();
                    }
                }
                this.e = 6;
                z.a("RewardVideoController", "onEndcardShow callback");
            } catch (Exception e2) {
                if (MBridgeConstans.DEBUG) {
                    e2.printStackTrace();
                }
            }
        }

        @Override
        public final void a(int i, String str, String str2) {
            this.e = i;
            z.a("RewardVideoController", "===================== onAutoLoad =====================");
            a aVar = this.b;
            if (aVar == null || aVar.B || this.b.A || this.b.k == null || !this.b.k.v(this.e) || this.b.n == null || c.a(this.b.n) == 1 || c.a(this.b.n) == 3 || a.this.G.contains(Integer.valueOf(this.e))) {
                return;
            }
            a.this.G.add(Integer.valueOf(this.e));
            z.a("RewardVideoController", "===================== onAutoLoad 进来了=====================");
            int iE = this.b.k.E() * 1000;
            if (this.e == 4) {
                iE = 3000;
            }
            Handler handler = this.d;
            if (handler != null) {
                handler.removeMessages(YmnBaseInterface.CODE_YMN_GET_DEVICEID);
                this.d.sendEmptyMessageDelayed(YmnBaseInterface.CODE_YMN_GET_DEVICEID, iE);
            } else {
                new Handler(Looper.getMainLooper()).postDelayed(new Runnable() {
                    @Override
                    public final void run() {
                        if (d.this.b != null) {
                            d.this.b.d(false);
                        }
                    }
                }, iE);
            }
        }
    }

    public final void a(InterVideoOutListener interVideoOutListener) {
        this.m = interVideoOutListener;
        this.n = new c(interVideoOutListener, this.v, this.p);
    }

    public final void b(String str, String str2) {
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayListA;
        try {
            this.h = com.mbridge.msdk.foundation.controller.a.f().j();
            this.p = str2;
            this.s = str;
            this.q = new MBridgeIds(this.s, this.p);
            this.l = com.mbridge.msdk.videocommon.d.b.a().b();
            com.mbridge.msdk.foundation.same.f.b.b().execute(new Runnable() {
                @Override
                public final void run() {
                    if (a.this.h == null || TextUtils.isEmpty(a.this.p)) {
                        return;
                    }
                    try {
                        com.mbridge.msdk.reward.b.a.a(a.this.h, a.this.p);
                    } catch (Exception unused) {
                    }
                }
            });
            x.b();
            ResourceManager.getinstance().cleanZipRes();
            HTMLResourceManager.getInstance().cleanHtmlRes();
            com.mbridge.msdk.videocommon.d.b.a().b(this.p);
            if (!ab.a().a("c_d_v_w_i", false) && !TextUtils.isEmpty(this.p) && (copyOnWriteArrayListA = com.mbridge.msdk.videocommon.a.a.a().a(this.p, 1)) != null && copyOnWriteArrayListA.size() > 0) {
                com.mbridge.msdk.videocommon.download.b.getInstance().createUnitCache(this.h, this.p, copyOnWriteArrayListA, 94, (com.mbridge.msdk.videocommon.listener.a) null);
            }
            if (this.O == null) {
                this.O = i.a(com.mbridge.msdk.foundation.controller.a.f().j());
            }
        } catch (Throwable th) {
            z.c("RewardVideoController", th.getMessage(), th);
        }
    }

    public final void d(boolean z) {
        a(z, "");
    }

    private void c() {
        f.a(i.a(this.h)).a(this.p);
    }

    private void d() {
        try {
            List<CampaignEx> listB = f.a(i.a(this.h)).b(this.p);
            if (listB == null || listB.size() <= 0) {
                return;
            }
            for (CampaignEx campaignEx : listB) {
                if (!TextUtils.isEmpty(campaignEx.getCMPTEntryUrl())) {
                    com.mbridge.msdk.videocommon.a.b(this.p + "_" + campaignEx.getRequestId() + "_" + campaignEx.getCMPTEntryUrl());
                    if (campaignEx.getRewardTemplateMode() != null && !TextUtils.isEmpty(campaignEx.getRewardTemplateMode().e())) {
                        com.mbridge.msdk.videocommon.a.b(this.p + "_" + campaignEx.getId() + "_" + campaignEx.getRequestId() + "_" + campaignEx.getRewardTemplateMode().e());
                    }
                } else {
                    com.mbridge.msdk.videocommon.a.b(campaignEx.getAdType(), campaignEx);
                }
            }
        } catch (Exception unused) {
        }
    }

    public final void a(boolean z, String str) {
        z.a("RewardVideoController", "发起一次 load： isDevCall " + z + " " + str);
        if (this.n != null && c.a(this.n) == 1) {
            if (!this.E) {
                if (z) {
                    z.a("RewardVideoController", "本地存在由自动 load 发起的load，此次 load 是开发者发起的，将回调转移给开发者");
                    this.E = z;
                    return;
                } else {
                    z.a("RewardVideoController", "本地存在由自动 load 发起的load，此次 load 是自动 load 发起的，不做任何处理");
                    return;
                }
            }
            if (z) {
                z.a("RewardVideoController", "本地存在由开发者发起的load，此次 load 也是开发者发起的，回调 CURRENT_UNIT_IS_LOADING");
                com.mbridge.msdk.reward.b.a.b(this.h, null, "current unit is loading", this.p, this.B, "", "");
                this.n.a("errorCode: 3501 errorMessage: current unit is loading");
                return;
            }
            z.a("RewardVideoController", "本地存在由开发者发起的load，此次 load 是自动 load，不做任何处理");
            return;
        }
        if (this.n != null && c.a(this.n) == 3) {
            this.P = false;
        } else {
            this.P = true;
            c.a(this.n, 1);
        }
        this.E = z;
        this.v.removeMessages(YmnBaseInterface.CODE_YMN_GET_DEVICEID);
        this.S = false;
        this.R = false;
        this.T = false;
        this.U = false;
        d();
        c();
        com.mbridge.msdk.reward.adapter.c.a().b();
        try {
            if (TextUtils.isEmpty(str)) {
                if (this.A) {
                    com.mbridge.msdk.e.b.getInstance().addInterstitialList(this.s, this.p);
                } else {
                    com.mbridge.msdk.e.b.getInstance().addRewardList(this.s, this.p);
                }
            }
            if (this.B && TextUtils.isEmpty(str)) {
                if (this.n != null) {
                    if (this.W != null && this.W.size() > 0) {
                        com.mbridge.msdk.reward.b.a.b(this.h, this.W.get(0), "bidToken is empty", this.p, this.B, "", "");
                    }
                    c.c(this.n, "bidToken is empty");
                    return;
                }
                return;
            }
            if (com.mbridge.msdk.system.a.a == null) {
                if (this.n != null) {
                    if (this.W != null && this.W.size() > 0) {
                        com.mbridge.msdk.reward.b.a.b(this.h, this.W.get(0), "init error", this.p, this.B, "", "");
                    }
                    c.c(this.n, "init error");
                    z.a("RewardVideoController", "SDK 初始化错误");
                    return;
                }
                return;
            }
            com.mbridge.msdk.videocommon.d.c cVarA = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.p);
            this.k = cVarA;
            if (cVarA == null) {
                z.a("RewardVideoController", "当前 RewardUnitSetting 为空，请求新的配置信息");
                this.N = com.mbridge.msdk.foundation.controller.a.f().k();
                com.mbridge.msdk.videocommon.d.b.a().a(this.N, com.mbridge.msdk.foundation.controller.a.f().l(), this.p, new com.mbridge.msdk.videocommon.c.c() {
                    @Override
                    public final void a(String str2) {
                        z.a("RewardVideoController", "RewardUnitSetting 请求成功： " + str2);
                    }

                    @Override
                    public final void b(String str2) {
                        z.a("RewardVideoController", "RewardUnitSetting 请求失败： " + str2);
                    }
                });
                this.k = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.p, this.A);
            }
            if (!TextUtils.isEmpty(this.s)) {
                this.k.b(this.s);
            }
            int iH = this.k.H() * 1000;
            if (this.v != null) {
                z.a("RewardVideoController", "start load timeout for " + iH + " ms");
                this.v.sendEmptyMessageDelayed(YmnBaseInterface.CODE_DATAFUN_GET_DEVICEID, (long) iH);
            }
            this.M = this.k.F();
            try {
                if (f()) {
                    z.a("RewardVideoController", "当前 cap 全满，清除所有的 cap");
                    e();
                }
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    e.printStackTrace();
                }
            }
            try {
                b(z, str);
            } catch (Exception e2) {
                try {
                    if (this.W != null && this.W.size() > 0) {
                        com.mbridge.msdk.reward.b.a.a(this.W.get(0), this.h, "load exception: " + e2.getMessage(), this.p, this.B, "", "", 0L);
                    }
                } catch (Exception unused) {
                }
                if (this.n != null) {
                    c.a(this.n, "load exception");
                }
            }
        } catch (Exception e3) {
            if (this.n != null) {
                c.a(this.n, "load exception");
                CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = this.W;
                if (copyOnWriteArrayList != null && copyOnWriteArrayList.size() > 0) {
                    com.mbridge.msdk.reward.b.a.b(this.h, this.W.get(0), "load exception " + e3.getMessage(), this.p, this.B, "", "");
                }
            }
            if (MBridgeConstans.DEBUG) {
                e3.printStackTrace();
            }
        }
    }

    private void b(boolean z, String str) {
        if (this.n != null) {
            if (!this.B) {
                this.V = b(this.p);
                if (this.V) {
                    z.a("RewardVideoController", "本地存在可用的缓存: " + this.W.size() + " 条");
                    z.a("RewardVideoController", "本地存在可用的缓存，非 BID Campaign");
                    if (!j()) {
                        z.a("RewardVideoController", "本地存在可用的缓存，没有超过上限，并预加载各种资源");
                        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = this.W;
                        if (copyOnWriteArrayList == null || copyOnWriteArrayList.size() <= 0) {
                            return;
                        }
                        c.c(this.n, this.s, this.p);
                        z.a("RewardVideoController", "非BID，本地存在可用的缓存，没有超过上限，回调 onCampaignLoadSuccess，开始预加载资源");
                        CampaignEx campaignEx = copyOnWriteArrayList.get(0);
                        this.n.a(this.B);
                        com.mbridge.msdk.reward.adapter.d dVar = this.j;
                        if (dVar != null && dVar.a(copyOnWriteArrayList, true ^ TextUtils.isEmpty(campaignEx.getCMPTEntryUrl()), campaignEx.getNscpt())) {
                            com.mbridge.msdk.reward.b.a.a(this.h, this.W, this.p, 0L);
                            c.b(this.n, this.s, this.p);
                        } else {
                            a(copyOnWriteArrayList, this.j);
                        }
                        if (this.P) {
                            com.mbridge.msdk.reward.adapter.d dVar2 = this.j;
                            if (dVar2 != null) {
                                dVar2.a(this.W);
                            }
                            a(this.M, z, str);
                            return;
                        }
                        return;
                    }
                    z.a("RewardVideoController", "非BID，本地存在可用的缓存，超过上限");
                    CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList2 = this.W;
                    if (copyOnWriteArrayList2 != null && copyOnWriteArrayList2.size() > 0) {
                        Iterator<CampaignEx> it = this.W.iterator();
                        while (it.hasNext()) {
                            com.mbridge.msdk.videocommon.a.a.a().a(it.next(), this.p);
                        }
                    }
                    if (z) {
                        if (this.n != null) {
                            c.c(this.n, "checkOverCap failed");
                            return;
                        }
                        return;
                    } else {
                        this.V = false;
                        this.n.a(this.B);
                        a(this.M, z, str);
                        return;
                    }
                }
                z.a("RewardVideoController", "非BID，不存在可用的缓存");
                if (!j()) {
                    this.V = false;
                    com.mbridge.msdk.reward.adapter.d dVar3 = this.j;
                    if (dVar3 != null) {
                        dVar3.a(this.W);
                    }
                    this.n.a(this.B);
                    a(this.M, z, str);
                    return;
                }
                if (z) {
                    if (this.n != null) {
                        c.c(this.n, "checkOverCap failed");
                        return;
                    }
                    return;
                } else {
                    this.V = false;
                    com.mbridge.msdk.reward.adapter.d dVar4 = this.j;
                    if (dVar4 != null) {
                        dVar4.a(this.W);
                    }
                    this.n.a(this.B);
                    a(this.M, z, str);
                    return;
                }
            }
            CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayListA = com.mbridge.msdk.videocommon.a.a.a().a(this.p, 1, this.B, "");
            if (copyOnWriteArrayListA != null && copyOnWriteArrayListA.size() > 0) {
                z.d("HBOPTIMIZE", "执行存在缓存逻辑");
                z.a("RewardVideoController", "BID，本地存在可用的缓存");
                if (!j()) {
                    CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayListB = b(str, copyOnWriteArrayListA);
                    if (copyOnWriteArrayListB != null && copyOnWriteArrayListB.size() > 0) {
                        z.d("HBOPTIMIZE", "执行 BidToken 存在逻辑");
                        a(copyOnWriteArrayListB, str);
                        return;
                    }
                    CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayListA2 = a(str, copyOnWriteArrayListA);
                    if (copyOnWriteArrayListA2 != null && copyOnWriteArrayListA2.size() > 0) {
                        z.d("HBOPTIMIZE", "需要被替换Offer的 bidToken " + str);
                        a(copyOnWriteArrayListA2, str);
                        com.mbridge.msdk.foundation.db.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(str, copyOnWriteArrayListA2);
                        com.mbridge.msdk.reward.adapter.d dVar5 = this.j;
                        if (dVar5 != null) {
                            dVar5.a(copyOnWriteArrayListA2);
                        }
                    }
                    this.V = false;
                    this.n.a(this.B);
                    z.d("HBOPTIMIZE", "执行tokenRule 为 1 继续请求逻辑");
                    a(this.M, z, str);
                    return;
                }
                z.a("RewardVideoController", "BID，本地存在可用的缓存，超过上限");
                com.mbridge.msdk.videocommon.a.a.a().a(this.p, str);
                if (!z || this.n == null) {
                    return;
                }
                c.c(this.n, "checkOverCap failed");
                return;
            }
            z.a("RewardVideoController", "BID，不存在可用的缓存");
            z.d("HBOPTIMIZE", "执行 无可用缓存逻辑");
            if (!j()) {
                this.V = false;
                this.n.a(this.B);
                a(this.M, z, str);
            } else {
                com.mbridge.msdk.videocommon.a.a.a().a(this.p, str);
                if (!z || this.n == null) {
                    return;
                }
                c.c(this.n, "checkOverCap failed");
            }
        }
    }

    private void a(CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList, String str) {
        if (copyOnWriteArrayList == null || copyOnWriteArrayList.size() <= 0) {
            return;
        }
        this.V = true;
        this.n.a(this.B);
        c.c(this.n, this.s, this.p);
        CampaignEx campaignEx = copyOnWriteArrayList.get(0);
        a(campaignEx.getRequestId(), str);
        com.mbridge.msdk.reward.adapter.d dVar = this.j;
        if (dVar != null && dVar.a(copyOnWriteArrayList, true ^ TextUtils.isEmpty(campaignEx.getCMPTEntryUrl()), campaignEx.getNscpt())) {
            com.mbridge.msdk.reward.b.a.a(this.h, this.W, this.p, 0L);
            c.b(this.n, this.s, this.p);
        } else {
            a(copyOnWriteArrayList, this.j);
        }
    }

    private CopyOnWriteArrayList<CampaignEx> a(String str, List<CampaignEx> list) {
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        LinkedHashMap linkedHashMap2 = new LinkedHashMap();
        if (list != null) {
            try {
                if (list.size() > 0) {
                    int vcn = 1;
                    for (CampaignEx campaignEx : list) {
                        if (campaignEx != null) {
                            if (campaignEx.getVcn() > vcn) {
                                vcn = campaignEx.getVcn();
                            }
                            if (campaignEx.getTokenRule() == 1) {
                                String requestId = campaignEx.getRequestId();
                                if (!TextUtils.isEmpty(requestId)) {
                                    if (linkedHashMap.containsKey(requestId)) {
                                        ((List) linkedHashMap.get(requestId)).add(campaignEx);
                                    } else {
                                        ArrayList arrayList = new ArrayList();
                                        arrayList.add(campaignEx);
                                        linkedHashMap.put(requestId, arrayList);
                                    }
                                }
                            } else {
                                String requestId2 = campaignEx.getRequestId();
                                if (!TextUtils.isEmpty(requestId2)) {
                                    if (linkedHashMap2.containsKey(requestId2)) {
                                        ((List) linkedHashMap2.get(requestId2)).add(campaignEx);
                                    } else {
                                        ArrayList arrayList2 = new ArrayList();
                                        arrayList2.add(campaignEx);
                                        linkedHashMap2.put(requestId2, arrayList2);
                                    }
                                }
                            }
                        }
                    }
                    if (linkedHashMap2.size() + linkedHashMap.size() >= vcn && linkedHashMap.size() > 0 && linkedHashMap.entrySet() != null && linkedHashMap.entrySet().iterator() != null && linkedHashMap.entrySet().iterator().next() != null && ((Map.Entry) linkedHashMap.entrySet().iterator().next()).getValue() != null) {
                        copyOnWriteArrayList.addAll((Collection) ((Map.Entry) linkedHashMap.entrySet().iterator().next()).getValue());
                        com.mbridge.msdk.foundation.same.a.d.a(this.p, str, vcn);
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return copyOnWriteArrayList;
    }

    private CopyOnWriteArrayList<CampaignEx> b(String str, List<CampaignEx> list) {
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = new CopyOnWriteArrayList<>();
        if (list != null && list.size() > 0 && !TextUtils.isEmpty(str)) {
            for (CampaignEx campaignEx : list) {
                if (campaignEx != null && str.equals(campaignEx.getBidToken())) {
                    copyOnWriteArrayList.add(campaignEx);
                }
            }
        }
        return copyOnWriteArrayList;
    }

    private void a(CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList, com.mbridge.msdk.reward.adapter.d dVar) {
        final CampaignEx campaignEx = copyOnWriteArrayList.get(0);
        final boolean z = !TextUtils.isEmpty(campaignEx.getCMPTEntryUrl());
        final int nscpt = campaignEx.getNscpt();
        this.c = false;
        this.d = false;
        this.e = false;
        this.f = false;
        this.g = false;
        com.mbridge.msdk.reward.adapter.c.a().a(this.h, z, nscpt, this.B, this.A ? com.tkay.expressad.foundation.g.a.aU : 94, this.s, this.p, campaignEx.getRequestId(), copyOnWriteArrayList, new 4(z, campaignEx, dVar, nscpt), new c.i() {
            @Override
            public final void a(String str, String str2, String str3, String str4) {
                z.a("RewardVideoController", "Cache template 下载成功： ");
            }

            @Override
            public final void a(String str, String str2, String str3, String str4, String str5) {
                z.a("RewardVideoController", "Cache template 下载失败： ");
                a aVar = a.this;
                a.a(aVar, str2, aVar.X);
                if (!z && a.this.n != null) {
                    if (a.this.f) {
                        return;
                    }
                    a.this.f = true;
                    if (a.this.W != null && a.this.W.size() > 0) {
                        com.mbridge.msdk.reward.b.a.a(a.this.h, (CampaignEx) a.this.W.get(0), "" + str5, a.this.p, a.this.B, str3, campaignEx.getRequestIdNotice());
                    }
                    c.d(a.this.n, "errorCode: 3202 errorMessage: temp resource download failed");
                    return;
                }
                if (nscpt == 1) {
                    z.a("RewardVideoController", "播放模板下载失败，大模板，nscpt 1");
                    if (a.this.f || a.this.n == null) {
                        return;
                    }
                    a.this.f = true;
                    if (a.this.W != null && a.this.W.size() > 0) {
                        com.mbridge.msdk.reward.b.a.a(a.this.h, (CampaignEx) a.this.W.get(0), "temp resource download failed", a.this.p, a.this.B, str3, campaignEx.getRequestIdNotice());
                    }
                    c.d(a.this.n, "errorCode: 3202 errorMessage: temp resource download failed");
                }
            }
        });
        if (z) {
            com.mbridge.msdk.reward.adapter.c.a().a(this.h, campaignEx, this.s, this.p, campaignEx.getRequestId(), new 6(campaignEx, copyOnWriteArrayList, dVar, z, nscpt));
        }
    }

    final class 4 implements c.c {
        final boolean a;
        final CampaignEx b;
        final com.mbridge.msdk.reward.adapter.d c;
        final int d;

        4(boolean z, CampaignEx campaignEx, com.mbridge.msdk.reward.adapter.d dVar, int i) {
            this.a = z;
            this.b = campaignEx;
            this.c = dVar;
            this.d = i;
        }

        @Override
        public final void a(final String str, final String str2, final String str3, final CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList) {
            z.a("RewardVideoController", "Campaign Cache 下载成功： " + copyOnWriteArrayList.size());
            a.this.c = true;
            if (!this.a) {
                z.a("RewardVideoController", "Campaign Cache 下载成功： 非大模板");
                for (final CampaignEx campaignEx : copyOnWriteArrayList) {
                    if (campaignEx != null && campaignEx.getRewardTemplateMode() != null && !TextUtils.isEmpty(campaignEx.getRewardTemplateMode().e()) && !campaignEx.getRewardTemplateMode().e().contains("cmpt=1") && a.this.v != null) {
                        a.this.v.post(new Runnable() {
                            @Override
                            public final void run() {
                                com.mbridge.msdk.reward.adapter.c.a().a(a.this.F, a.this.v, a.this.A, a.this.B, null, campaignEx.getRewardTemplateMode().e(), a.this.w, 4.this.b, copyOnWriteArrayList, H5DownLoadManager.getInstance().getH5ResAddress(campaignEx.getRewardTemplateMode().e()), str, str2, str3, campaignEx.getRequestIdNotice(), a.this.k, new c.j() {
                                    @Override
                                    public final void a(String str4, String str5, String str6, String str7, String str8, a.a aVar) {
                                        z.a("RewardVideoController", "Campaign Cache 下载成功： 非大模板，播放模板预加载");
                                        if (4.this.c == null || !4.this.c.a(copyOnWriteArrayList, 4.this.a, 4.this.d)) {
                                            a.a(a.this, str6, a.this.X);
                                            if (a.this.n == null || a.this.f) {
                                                return;
                                            }
                                            a.this.f = true;
                                            z.a("RewardVideoController", "Cache onVideoLoadFailForCache");
                                            com.mbridge.msdk.reward.b.a.a(a.this.h, campaignEx, "temp preload success but isReady false", a.this.p, a.this.B, str7, campaignEx.getRequestIdNotice());
                                            c.d(a.this.n, "errorCode: 3502 errorMessage: temp preload success but isReady false");
                                            return;
                                        }
                                        if (a.this.n == null || a.this.g) {
                                            return;
                                        }
                                        a.this.g = true;
                                        z.a("RewardVideoController", "Cache onVideoLoadSuccessForCache");
                                        com.mbridge.msdk.reward.b.a.a(a.this.h, copyOnWriteArrayList, a.this.p, 0L);
                                        c.b(a.this.n, str5, str6);
                                    }

                                    @Override
                                    public final void a(String str4, String str5, String str6, String str7, String str8, a.a aVar, String str9) {
                                        z.a("RewardVideoController", "Campaign Cache 下载成功： 非大模板，播放模板预加载失败");
                                        a.a(a.this, str6, a.this.X);
                                        if (a.this.n == null || a.this.f) {
                                            return;
                                        }
                                        a.this.f = true;
                                        com.mbridge.msdk.reward.b.a.a(a.this.h, campaignEx, "temp preload failed: " + str9, a.this.p, a.this.B, str7, campaignEx.getRequestIdNotice());
                                        c.d(a.this.n, "errorCode: 3301 errorMessage: temp preload failed: " + str9);
                                    }
                                });
                            }
                        });
                    } else {
                        z.a("RewardVideoController", "Campaign Cache 下载成功： 非大模板，不存在播放模板");
                        com.mbridge.msdk.reward.adapter.d dVar = this.c;
                        if (dVar != null && dVar.a(copyOnWriteArrayList, this.a, this.d)) {
                            if (a.this.n != null && !a.this.g) {
                                a.this.g = true;
                                z.a("RewardVideoController", "Cache onVideoLoadSuccessForCache");
                                com.mbridge.msdk.reward.b.a.a(a.this.h, copyOnWriteArrayList, a.this.p, 0L);
                                c.b(a.this.n, str, str2);
                            }
                        } else {
                            a aVar = a.this;
                            a.a(aVar, str2, aVar.X);
                            if (a.this.n != null && !a.this.f) {
                                a.this.f = true;
                                z.a("RewardVideoController", "Cache onVideoLoadFailForCache");
                                String requestIdNotice = "";
                                if (campaignEx != null && !TextUtils.isEmpty(campaignEx.getRequestIdNotice())) {
                                    requestIdNotice = campaignEx.getRequestIdNotice();
                                }
                                com.mbridge.msdk.reward.b.a.a(a.this.h, campaignEx, "have no temp but isReady false", a.this.p, a.this.B, str3, requestIdNotice);
                                c.d(a.this.n, "errorCode: 3503 errorMessage: have no temp but isReady false");
                            }
                        }
                    }
                }
                return;
            }
            z.a("RewardVideoController", "Campaign Cache 下载成功： 大模板");
            if (!a.this.d || a.this.e || a.this.v == null) {
                return;
            }
            z.a("RewardVideoController", "Campaign Cache 下载成功： 大模板，campaign 下载成功，开始预加载大模板");
            a.this.e = true;
            a.this.v.post(new Runnable() {
                @Override
                public final void run() {
                    com.mbridge.msdk.reward.adapter.c.a().a(a.this.F, a.this.v, a.this.A, a.this.B, str3, 4.this.b.getRequestIdNotice(), str, str2, 4.this.b.getCMPTEntryUrl(), a.this.w, 4.this.b, copyOnWriteArrayList, H5DownLoadManager.getInstance().getH5ResAddress(4.this.b.getCMPTEntryUrl()), str2, a.this.k, new c.j() {
                        @Override
                        public final void a(String str4, String str5, String str6, String str7, String str8, a.a aVar2) {
                            z.a("RewardVideoController", "Campaign Cache 下载成功： 大模板预加载成功");
                            if (4.this.c == null || !4.this.c.a(copyOnWriteArrayList, 4.this.a, 4.this.d)) {
                                a.a(a.this, str6, a.this.X);
                                if (a.this.n == null || a.this.f) {
                                    return;
                                }
                                a.this.f = true;
                                com.mbridge.msdk.reward.b.a.a(a.this.h, 4.this.b, "tpl temp preload success but isReady false", a.this.p, a.this.B, str7, 4.this.b.getRequestIdNotice());
                                c.d(a.this.n, "errorCode: 3504 errorMessage: tpl temp preload success but isReady false");
                                return;
                            }
                            if (a.this.n == null || a.this.g) {
                                return;
                            }
                            a.this.g = true;
                            z.a("RewardVideoController", "Cache onVideoLoadSuccessForCache");
                            com.mbridge.msdk.reward.b.a.a(a.this.h, copyOnWriteArrayList, a.this.p, 0L);
                            c.b(a.this.n, str5, str6);
                        }

                        @Override
                        public final void a(String str4, String str5, String str6, String str7, String str8, a.a aVar2, String str9) {
                            z.a("RewardVideoController", "Campaign Cache 下载成功： 大模板预加载失败");
                            a.a(a.this, str6, a.this.X);
                            if (a.this.n == null || a.this.f) {
                                return;
                            }
                            a.this.f = true;
                            if (a.this.W != null && a.this.W.size() > 0) {
                                com.mbridge.msdk.reward.b.a.a(a.this.h, (CampaignEx) a.this.W.get(0), "tpl temp preload failed: " + str9, a.this.p, a.this.B, str7, 4.this.b.getRequestIdNotice());
                            }
                            c.d(a.this.n, "errorCode: 3302 errorMessage: tpl temp preload failed: " + str9);
                        }
                    }, true);
                }
            });
        }

        @Override
        public final void a(String str, String str2, String str3, CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList, String str4) {
            z.a("RewardVideoController", "Campaign Cache 下载失败： " + copyOnWriteArrayList.size());
            a.this.c = false;
            a aVar = a.this;
            a.a(aVar, str2, aVar.X);
            if (a.this.n == null || a.this.f) {
                return;
            }
            a.this.f = true;
            if (a.this.W != null && a.this.W.size() > 0) {
                com.mbridge.msdk.reward.b.a.a(a.this.h, (CampaignEx) a.this.W.get(0), "" + str4, a.this.p, a.this.B, str3, this.b.getRequestIdNotice());
            }
            c.d(a.this.n, "errorCode: 3201 errorMessage: campaign resource download failed");
        }
    }

    final class 6 implements c.i {
        final CampaignEx a;
        final CopyOnWriteArrayList b;
        final com.mbridge.msdk.reward.adapter.d c;
        final boolean d;
        final int e;

        6(CampaignEx campaignEx, CopyOnWriteArrayList copyOnWriteArrayList, com.mbridge.msdk.reward.adapter.d dVar, boolean z, int i) {
            this.a = campaignEx;
            this.b = copyOnWriteArrayList;
            this.c = dVar;
            this.d = z;
            this.e = i;
        }

        @Override
        public final void a(final String str, final String str2, final String str3, String str4) {
            a.this.d = true;
            if (!a.this.c || a.this.e || a.this.v == null) {
                return;
            }
            a.this.e = true;
            a.this.v.post(new Runnable() {
                @Override
                public final void run() {
                    com.mbridge.msdk.reward.adapter.c.a().a(a.this.F, a.this.v, a.this.A, a.this.B, str3, 6.this.a.getRequestIdNotice(), str, str2, 6.this.a.getCMPTEntryUrl(), a.this.w, 6.this.a, 6.this.b, H5DownLoadManager.getInstance().getH5ResAddress(6.this.a.getCMPTEntryUrl()), str2, a.this.k, new c.j() {
                        @Override
                        public final void a(String str5, String str6, String str7, String str8, String str9, a.a aVar) {
                            if (6.this.c == null || !6.this.c.a(6.this.b, 6.this.d, 6.this.e)) {
                                a.a(a.this, str7, a.this.X);
                                if (a.this.n == null || a.this.f) {
                                    return;
                                }
                                a.this.f = true;
                                if (a.this.W != null && a.this.W.size() > 0) {
                                    com.mbridge.msdk.reward.b.a.a(a.this.h, (CampaignEx) a.this.W.get(0), "tpl temp preload success but isReady false", a.this.p, a.this.B, str8, 6.this.a.getRequestIdNotice());
                                }
                                c.d(a.this.n, "errorCode: 3505 errorMessage: tpl temp preload success but isReady false");
                                return;
                            }
                            if (a.this.n == null || a.this.g) {
                                return;
                            }
                            a.this.g = true;
                            z.a("RewardVideoController", "Cache onVideoLoadSuccess");
                            com.mbridge.msdk.reward.b.a.a(a.this.h, 6.this.b, a.this.p, 0L);
                            c.b(a.this.n, str6, str7);
                        }

                        @Override
                        public final void a(String str5, String str6, String str7, String str8, String str9, a.a aVar, String str10) {
                            a.a(a.this, str7, a.this.X);
                            if (a.this.n == null || a.this.f) {
                                return;
                            }
                            a.this.f = true;
                            if (a.this.W != null && a.this.W.size() > 0) {
                                com.mbridge.msdk.reward.b.a.a(a.this.h, (CampaignEx) a.this.W.get(0), "tpl temp preload failed: " + str10, a.this.p, a.this.B, str8, 6.this.a.getRequestIdNotice());
                            }
                            c.d(a.this.n, "errorCode: 3303 errorMessage: tpl temp preload failed: " + str10);
                        }
                    }, true);
                }
            });
        }

        @Override
        public final void a(String str, String str2, String str3, String str4, String str5) {
            a aVar = a.this;
            a.a(aVar, str2, aVar.X);
            a.this.d = false;
            if (a.this.n == null || a.this.f) {
                return;
            }
            a.this.f = true;
            if (a.this.W != null && a.this.W.size() > 0) {
                com.mbridge.msdk.reward.b.a.a(a.this.h, (CampaignEx) a.this.W.get(0), "" + str5, a.this.p, a.this.B, str3, this.a.getRequestIdNotice());
            }
            c.d(a.this.n, "errorCode: 3203 errorMessage: tpl temp resource download failed");
        }
    }

    private boolean b(String str) {
        try {
            if (this.j == null || !str.equals(this.j.a())) {
                com.mbridge.msdk.reward.adapter.d dVar = new com.mbridge.msdk.reward.adapter.d(this.h, this.s, str);
                this.j = dVar;
                dVar.a(this.A);
                this.j.b(this.B);
            }
            this.j.a(this.w);
            this.j.a(this.k);
        } catch (Exception unused) {
        }
        List<CampaignEx> listA = com.mbridge.msdk.videocommon.a.a.a().a(str, 1, this.B);
        StringBuilder sb = new StringBuilder();
        sb.append("当前可用的缓存数据： ");
        sb.append(listA == null ? 0 : listA.size());
        z.a("RewardVideoController", sb.toString());
        this.X = com.mbridge.msdk.videocommon.a.a.a().b(str, 1, this.B);
        StringBuilder sb2 = new StringBuilder();
        sb2.append("当前全部的缓存数据： ");
        List<CampaignEx> list = this.X;
        sb2.append(list == null ? 0 : list.size());
        z.a("RewardVideoController", sb2.toString());
        if (listA != null && listA.size() > 0) {
            CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = this.W;
            if (copyOnWriteArrayList == null) {
                this.W = new CopyOnWriteArrayList<>();
            } else {
                copyOnWriteArrayList.clear();
            }
            this.W.addAll(listA);
            return true;
        }
        CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList2 = this.W;
        if (copyOnWriteArrayList2 != null) {
            copyOnWriteArrayList2.clear();
        }
        return false;
    }

    private final class c {
        private WeakReference<InterVideoOutListener> b;
        private volatile AtomicInteger c;
        private Handler d;
        private String e;
        private boolean f;

        private c(InterVideoOutListener interVideoOutListener, Handler handler, String str) {
            this.b = new WeakReference<>(interVideoOutListener);
            this.c = new AtomicInteger(0);
            this.d = handler;
            this.e = str;
        }

        private void a(String str) {
            if (this.d != null) {
                Message messageObtain = Message.obtain();
                messageObtain.obj = str;
                messageObtain.what = 18;
                this.d.sendMessage(messageObtain);
            }
        }

        public final void a(boolean z) {
            this.f = z;
        }

        static void a(c cVar, String str, String str2) {
            Handler handler = cVar.d;
            if (handler != null) {
                handler.removeMessages(YmnBaseInterface.CODE_DATAFUN_GET_DEVICEID);
            }
            z.a("RewardVideoController_Listener", "收到 onVideoLoadSuccess，当前状态： " + cVar.c.get() + " hasCalledVideoLoadSuccess: " + a.this.S);
            WeakReference<InterVideoOutListener> weakReference = cVar.b;
            if (weakReference == null || weakReference.get() == null) {
                return;
            }
            if ((cVar.c.get() == 1 || cVar.c.get() == 3) && cVar.d != null) {
                cVar.c.set(2);
                if (!a.this.S) {
                    z.d("RewardVideoController_Listener", "收到 onVideoLoadSuccess，当前状态： " + cVar.c.get() + " hasCalledVideoLoadSuccess: " + a.this.S + " 响应");
                    a.this.S = true;
                    Message messageObtain = Message.obtain();
                    Bundle bundle = new Bundle();
                    bundle.putString(MBridgeConstans.PLACEMENT_ID, str);
                    bundle.putString("unit_id", str2);
                    messageObtain.setData(bundle);
                    messageObtain.obj = str2;
                    messageObtain.what = 9;
                    cVar.d.sendMessage(messageObtain);
                    return;
                }
                z.a("RewardVideoController_Listener", "收到 onVideoLoadSuccess，当前状态： " + cVar.c.get() + " hasCalledVideoLoadSuccess: " + a.this.S + " 无需响应");
            }
        }

        static void a(c cVar, String str) {
            Handler handler = cVar.d;
            if (handler != null) {
                handler.removeMessages(YmnBaseInterface.CODE_DATAFUN_GET_DEVICEID);
            }
            z.a("RewardVideoController_Listener", "收到 onVideoLoadFail，当前状态： " + cVar.c.get() + " hasCalledVideoLoadFail: " + a.this.T + " " + str);
            WeakReference<InterVideoOutListener> weakReference = cVar.b;
            if (weakReference == null || weakReference.get() == null) {
                return;
            }
            if ((cVar.c.get() == 1 || cVar.c.get() == 3) && cVar.d != null) {
                a.this.T = true;
                if (!a.this.V || str.contains("resource load timeout")) {
                    a.this.U = true;
                }
                if (a.this.S) {
                    cVar.c.set(2);
                }
                if (a.this.T && a.this.U && !a.this.S) {
                    cVar.c.set(2);
                    z.d("RewardVideoController_Listener", "收到 onVideoLoadFail，当前状态： " + cVar.c.get() + " hasCalledVideoLoadFail: " + a.this.T + " " + str + " 响应");
                    Message messageObtain = Message.obtain();
                    messageObtain.obj = str;
                    messageObtain.what = 16;
                    cVar.d.sendMessage(messageObtain);
                    return;
                }
                z.a("RewardVideoController_Listener", "收到 onVideoLoadFail，当前状态： " + cVar.c.get() + " hasCalledVideoLoadFail: " + a.this.T + " " + str + " 无需响应");
            }
        }

        static void b(c cVar, String str, String str2) {
            Handler handler = cVar.d;
            if (handler != null) {
                handler.removeMessages(YmnBaseInterface.CODE_DATAFUN_GET_DEVICEID);
            }
            z.a("RewardVideoController_Listener", "收到 onVideoLoadSuccessForCache，当前状态： " + cVar.c.get() + " hasCalledVideoLoadSuccess: " + a.this.S);
            WeakReference<InterVideoOutListener> weakReference = cVar.b;
            if (weakReference == null || weakReference.get() == null) {
                return;
            }
            if ((cVar.c.get() == 1 || cVar.c.get() == 3) && cVar.d != null) {
                if (cVar.c.get() == 1) {
                    cVar.c.set(3);
                }
                if (!a.this.S) {
                    z.d("RewardVideoController_Listener", "收到 onVideoLoadSuccessForCache，当前状态： " + cVar.c.get() + " hasCalledVideoLoadSuccess: " + a.this.S + " 响应");
                    a.this.S = true;
                    Message messageObtain = Message.obtain();
                    Bundle bundle = new Bundle();
                    bundle.putString(MBridgeConstans.PLACEMENT_ID, str);
                    bundle.putString("unit_id", str2);
                    messageObtain.setData(bundle);
                    messageObtain.obj = str2;
                    messageObtain.what = 9;
                    cVar.d.sendMessage(messageObtain);
                    if (a.this.T) {
                        cVar.c.set(2);
                        return;
                    }
                    return;
                }
                z.a("RewardVideoController_Listener", "收到 onVideoLoadSuccessForCache，当前状态： " + cVar.c.get() + " hasCalledVideoLoadSuccess: " + a.this.S + " 无需响应");
            }
        }

        static int a(c cVar) {
            return cVar.c.get();
        }

        static void a(c cVar, int i) {
            cVar.c.set(i);
        }

        static void c(c cVar, String str) {
            cVar.c.set(2);
            cVar.a(str);
        }

        static void c(c cVar, String str, String str2) {
            z.a("RewardVideoController_Listener", "收到 onCampaignLoadSuccessForCache，当前状态： " + cVar.c.get() + " hasCalledCampaignLoadSuccess: " + a.this.R);
            WeakReference<InterVideoOutListener> weakReference = cVar.b;
            if (weakReference == null || weakReference.get() == null || cVar.d == null) {
                return;
            }
            if (!a.this.R) {
                z.d("RewardVideoController_Listener", "收到 onCampaignLoadSuccessForCache，当前状态： " + cVar.c.get() + " hasCalledCampaignLoadSuccess: " + a.this.R + " 响应");
                a.this.R = true;
                Message messageObtain = Message.obtain();
                Bundle bundle = new Bundle();
                bundle.putString(MBridgeConstans.PLACEMENT_ID, str);
                bundle.putString("unit_id", str2);
                messageObtain.setData(bundle);
                messageObtain.obj = str2;
                messageObtain.what = 17;
                cVar.d.sendMessage(messageObtain);
                return;
            }
            z.a("RewardVideoController_Listener", "收到 onCampaignLoadSuccessForCache，当前状态： " + cVar.c.get() + " hasCalledCampaignLoadSuccess: " + a.this.R + " 无需响应");
        }

        static void d(c cVar, String str) {
            z.a("RewardVideoController_Listener", "收到 onVideoLoadFailForCache，当前状态： " + cVar.c.get() + " hasCalledVideoLoadFailedForCache: " + a.this.U + " " + str);
            WeakReference<InterVideoOutListener> weakReference = cVar.b;
            if (weakReference == null || weakReference.get() == null) {
                return;
            }
            if ((cVar.c.get() == 1 || cVar.c.get() == 3) && cVar.d != null) {
                a.this.U = true;
                if (str.contains("resource load timeout")) {
                    a.this.T = true;
                }
                if (a.this.U && a.this.T && !a.this.S) {
                    cVar.c.set(2);
                    z.d("RewardVideoController_Listener", "收到 hasCalledVideoLoadFailedForCache，当前状态： " + cVar.c.get() + " hasCalledVideoLoadFailedForCache: " + a.this.U + " " + str + " 响应");
                    Message messageObtain = Message.obtain();
                    messageObtain.obj = str;
                    messageObtain.what = 16;
                    cVar.d.sendMessage(messageObtain);
                    return;
                }
                z.a("RewardVideoController_Listener", "收到 onVideoLoadFailForCache，当前状态： " + cVar.c.get() + " hasCalledVideoLoadFailedForCache: " + a.this.U + " " + str + " 无需响应");
            }
        }

        static void d(c cVar, String str, String str2) {
            z.a("RewardVideoController_Listener", "收到 onCampaignLoadSuccess，当前状态： " + cVar.c.get() + " hasCalledCampaignLoadSuccess: " + a.this.R);
            WeakReference<InterVideoOutListener> weakReference = cVar.b;
            if (weakReference == null || weakReference.get() == null) {
                return;
            }
            if ((cVar.c.get() == 1 || cVar.c.get() == 3) && cVar.d != null) {
                if (!a.this.R) {
                    z.d("RewardVideoController_Listener", "收到 onCampaignLoadSuccess，当前状态： " + cVar.c.get() + " hasCalledCampaignLoadSuccess: " + a.this.R + " 响应");
                    a.this.R = true;
                    Message messageObtain = Message.obtain();
                    Bundle bundle = new Bundle();
                    bundle.putString(MBridgeConstans.PLACEMENT_ID, str);
                    bundle.putString("unit_id", str2);
                    messageObtain.setData(bundle);
                    messageObtain.obj = str2;
                    messageObtain.what = 17;
                    cVar.d.sendMessage(messageObtain);
                    return;
                }
                z.a("RewardVideoController_Listener", "收到 onCampaignLoadSuccess，当前状态： " + cVar.c.get() + " hasCalledCampaignLoadSuccess: " + a.this.R + " 无需响应");
            }
        }
    }

    private void e() {
        try {
            List<com.mbridge.msdk.videocommon.b.b> listY = this.k.y();
            if (listY == null || listY.size() <= 0) {
                return;
            }
            for (int i = 0; i < listY.size(); i++) {
                com.mbridge.msdk.videocommon.b.b bVar = listY.get(i);
                ag.a(this.h, this.s + "_" + bVar.a(), 0);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private boolean f() {
        try {
            List<com.mbridge.msdk.videocommon.b.b> listY = this.k.y();
            if (this.l == null) {
                this.l = com.mbridge.msdk.videocommon.d.b.a().b();
            }
            Map<String, Integer> mapI = this.l.i();
            if (listY == null || listY.size() <= 0) {
                return true;
            }
            for (int i = 0; i < listY.size(); i++) {
                com.mbridge.msdk.videocommon.b.b bVar = listY.get(i);
                int iIntValue = mapI.containsKey(bVar.a() + "") ? mapI.get(bVar.a() + "").intValue() : 0;
                Object objB = ag.b(this.h, this.s + "_" + bVar.a(), 0);
                if ((objB != null ? ((Integer) objB).intValue() : 0) < iIntValue) {
                    return false;
                }
            }
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            z.d("RewardVideoController", e.getMessage());
            return true;
        }
    }

    private void a(Queue<Integer> queue, boolean z, String str) {
        int iIntValue = 8;
        if (queue != null) {
            try {
                if (queue.size() > 0) {
                    iIntValue = queue.poll().intValue();
                }
            } catch (Exception e) {
                CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = this.W;
                if (copyOnWriteArrayList != null && copyOnWriteArrayList.size() > 0) {
                    com.mbridge.msdk.reward.b.a.b(this.h, this.W.get(0), com.tkay.expressad.foundation.g.b.b.b, this.p, this.B, "", "");
                }
                c(com.tkay.expressad.foundation.g.b.b.b);
                if (MBridgeConstans.DEBUG) {
                    e.printStackTrace();
                    return;
                }
                return;
            }
        }
        try {
            a(1, iIntValue, z, str);
        } catch (Exception e2) {
            if (this.W != null && this.W.size() > 0) {
                com.mbridge.msdk.reward.b.a.b(this.h, this.W.get(0), "load mv api error:" + e2.getMessage(), this.p, this.B, "", "");
            }
            c("load mv api error:" + e2.getMessage());
        }
    }

    private void c(String str) {
        if (this.n != null) {
            this.U = true;
            c.a(this.n, str);
        }
    }

    private void a(int i, int i2, boolean z, String str) {
        try {
            z.a("RewardVideoController", "开始从 SOURCE_MBAPI 请求新的 offer: " + i2);
            if (this.j == null || !this.p.equals(this.j.a())) {
                com.mbridge.msdk.reward.adapter.d dVar = new com.mbridge.msdk.reward.adapter.d(this.h, this.s, this.p);
                this.j = dVar;
                dVar.a(this.A);
                this.j.b(this.B);
            }
            if (this.A) {
                this.j.a(this.x, this.y, this.z);
            }
            this.j.a(this.w);
            this.j.a(this.k);
            a aVar = new a(this.j, i, z);
            b bVar = new b(this.j, z);
            bVar.a(aVar);
            this.j.a(bVar);
            this.v.postDelayed(aVar, i2 * 1000);
            this.j.a(i, i2, z, str, this.F);
        } catch (Exception e) {
            CopyOnWriteArrayList<CampaignEx> copyOnWriteArrayList = this.W;
            if (copyOnWriteArrayList != null && copyOnWriteArrayList.size() > 0) {
                com.mbridge.msdk.reward.b.a.b(this.h, this.W.get(0), e.getMessage(), this.p, this.B, "", "");
            }
            c(e.getMessage());
        }
    }

    private void d(String str) {
        com.mbridge.msdk.videocommon.d.c cVar;
        boolean zB;
        boolean zC;
        Map<String, Integer> mapI;
        try {
            int iIntValue = (this.l == null || (mapI = this.l.i()) == null || !mapI.containsKey("1")) ? 0 : mapI.get("1").intValue();
            if (ag.b(this.h, this.s + "_1", 0) != null) {
                this.i = ((Integer) ag.b(this.h, this.s + "_1", 0)).intValue();
            }
            if (this.j == null) {
                i();
            }
            if (this.j != null) {
                z.d("RewardVideoController", "controller 819");
                if (this.B) {
                    zB = g();
                } else {
                    zB = this.j.b();
                }
                if (zB) {
                    if (this.i >= iIntValue && iIntValue > 0) {
                        this.J = false;
                        return;
                    }
                    z.b("RewardVideoController", "invoke adapter show isReady");
                    d dVar = new d(this, 1, this.v);
                    b.put(this.p, dVar);
                    this.j.a(dVar, str, this.o, this.w, this.r);
                    return;
                }
                if (this.B) {
                    zC = h();
                } else {
                    zC = this.j.c();
                }
                if (zC) {
                    z.b("RewardVideoController", "invoke adapter show isSpareOfferReady");
                    d dVar2 = new d(this, 1, this.v);
                    b.put(this.p, dVar2);
                    this.j.a(dVar2, str, this.o, this.w, this.r);
                    return;
                }
            }
            if (this.i != 0) {
                ag.a(this.h, this.s + "_1", 0);
                d(str);
                return;
            }
            this.J = false;
            if (this.m != null) {
                try {
                    this.m.onShowFail(this.q, "can't show because load is failed");
                } catch (Exception e) {
                    if (MBridgeConstans.DEBUG) {
                        e.printStackTrace();
                    }
                }
            }
            if (this.A || this.B || this.k == null || !this.k.v(4) || this.n == null || c.a(this.n) == 1 || c.a(this.n) == 3) {
                return;
            }
            a(false, "");
        } catch (Exception e2) {
            if (MBridgeConstans.DEBUG) {
                z.d("RewardVideoController", e2.getLocalizedMessage());
            }
            if (this.m != null) {
                try {
                    this.m.onShowFail(this.q, "show exception");
                } catch (Exception unused) {
                    if (MBridgeConstans.DEBUG) {
                        e2.printStackTrace();
                    }
                }
            }
            if (!this.A && !this.B && (cVar = this.k) != null && cVar.v(4) && this.n != null && c.a(this.n) != 1 && c.a(this.n) != 3) {
                a(false, "");
            }
            this.J = false;
        }
    }

    public final boolean e(boolean z) {
        try {
            if (j()) {
                return false;
            }
            if (this.B) {
                try {
                    return g();
                } catch (Exception unused) {
                    return false;
                }
            }
            if (this.j == null) {
                i();
            }
            if (this.j != null) {
                return this.j.b();
            }
            return false;
        } catch (Throwable th) {
            if (!MBridgeConstans.DEBUG) {
                return false;
            }
            th.printStackTrace();
            return false;
        }
    }

    private boolean g() {
        if (this.j == null) {
            i();
        }
        List<com.mbridge.msdk.foundation.entity.c> listA = com.mbridge.msdk.videocommon.a.a.a().a(this.p);
        if (listA == null || listA.size() <= 0) {
            return false;
        }
        String strB = com.mbridge.msdk.foundation.same.a.d.b(this.p);
        boolean zA = TextUtils.isEmpty(strB) ? false : a(listA, strB);
        if (zA) {
            return zA;
        }
        for (com.mbridge.msdk.foundation.entity.c cVar : listA) {
            if (cVar != null) {
                this.j.a(cVar.a());
                if (this.j.b()) {
                    return true;
                }
            }
        }
        return zA;
    }

    private boolean a(List<com.mbridge.msdk.foundation.entity.c> list, String str) {
        if (list == null) {
            return false;
        }
        for (com.mbridge.msdk.foundation.entity.c cVar : list) {
            if (cVar != null && str.equals(cVar.b())) {
                this.j.a(cVar.a());
                if (this.j.b()) {
                    return true;
                }
            }
        }
        return false;
    }

    private boolean h() {
        if (this.j == null) {
            i();
        }
        List<com.mbridge.msdk.foundation.entity.c> listA = com.mbridge.msdk.videocommon.a.a.a().a(this.p);
        if (listA == null || listA.size() <= 0) {
            return false;
        }
        for (com.mbridge.msdk.foundation.entity.c cVar : listA) {
            if (cVar != null) {
                this.j.a(cVar.a());
                if (this.j.c()) {
                    return true;
                }
                com.mbridge.msdk.videocommon.a.a.a().b(this.p, cVar.a());
            }
        }
        return false;
    }

    private void i() {
        com.mbridge.msdk.reward.adapter.d dVar = new com.mbridge.msdk.reward.adapter.d(this.h, this.s, this.p);
        this.j = dVar;
        dVar.a(this.A);
        this.j.b(this.B);
        if (this.A) {
            this.j.a(this.x, this.y, this.z);
        }
        this.j.a(this.k);
    }

    /* JADX WARN: Removed duplicated region for block: B:149:0x01df  */
    /* JADX WARN: Removed duplicated region for block: B:183:0x01ec A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void a(String str, String str2, String str3) {
        com.mbridge.msdk.videocommon.d.c cVar;
        try {
            this.t = str;
            this.o = str2;
            this.r = str3;
        } catch (Exception e) {
            if (MBridgeConstans.DEBUG) {
            }
            if (this.m != null) {
            }
            if (!this.A) {
                a(false, "");
            }
            this.J = false;
        }
        synchronized (this.I) {
            if (this.J) {
                if (this.m != null) {
                    try {
                        this.m.onShowFail(this.q, "campaing is show progressing ");
                    } catch (Exception e2) {
                        if (MBridgeConstans.DEBUG) {
                            e2.printStackTrace();
                        }
                    }
                }
                return;
            }
            this.J = true;
            if (this.n != null && this.n.c.get() == 1) {
                if (this.m != null) {
                    try {
                        this.m.onShowFail(this.q, com.tkay.expressad.foundation.g.b.b.c);
                    } catch (Exception e3) {
                        if (MBridgeConstans.DEBUG) {
                            e3.printStackTrace();
                        }
                    }
                }
                if (!this.A && !this.B && this.k != null && this.k.v(4) && this.n != null && c.a(this.n) != 1 && c.a(this.n) != 3) {
                    a(false, "");
                }
                this.J = false;
                return;
            }
            if (this.h == null) {
                if (this.m != null) {
                    try {
                        this.m.onShowFail(this.q, com.tkay.expressad.foundation.g.b.b.a);
                    } catch (Exception e4) {
                        if (MBridgeConstans.DEBUG) {
                            e4.printStackTrace();
                        }
                    }
                }
                if (!this.A && !this.B && this.k != null && this.k.v(4) && this.n != null && c.a(this.n) != 1 && c.a(this.n) != 3) {
                    a(false, "");
                }
                this.J = false;
                return;
            }
            if (this.A && !ae.c(this.h)) {
                if (this.m != null) {
                    try {
                        this.m.onShowFail(this.q, com.tkay.expressad.foundation.g.b.b.d);
                    } catch (Exception e5) {
                        if (MBridgeConstans.DEBUG) {
                            e5.printStackTrace();
                        }
                    }
                }
                if (!this.A && !this.B && this.k != null && this.k.v(4) && this.n != null && c.a(this.n) != 1 && c.a(this.n) != 3) {
                    a(false, "");
                }
                this.J = false;
                return;
            }
            if (j()) {
                z.a("RewardVideoController", " check over cap true");
                if (this.m != null) {
                    try {
                        this.m.onShowFail(this.q, com.tkay.expressad.foundation.g.b.b.e);
                    } catch (Exception e6) {
                        if (MBridgeConstans.DEBUG) {
                            e6.printStackTrace();
                        }
                    }
                }
                if (!this.A && !this.B && this.k != null && this.k.v(4) && this.n != null && c.a(this.n) != 1 && c.a(this.n) != 3) {
                    a(false, "");
                }
                this.J = false;
                return;
            }
            if (TextUtils.isEmpty(this.o)) {
                this.o = v.E();
            }
            try {
                String str4 = new SimpleDateFormat("dd").format(new Date());
                String str5 = (String) ag.b(this.h, com.tkay.expressad.foundation.g.a.bK, "0");
                if (!TextUtils.isEmpty(str5) && !TextUtils.isEmpty(str4) && !str5.equals(str4)) {
                    ag.a(this.h, com.tkay.expressad.foundation.g.a.bK, str4);
                    ag.a(this.h, this.s + "_1", 0);
                }
            } catch (Exception unused) {
            }
            d(str);
            return;
            if (MBridgeConstans.DEBUG) {
                z.d("RewardVideoController", e.getLocalizedMessage());
            }
            if (this.m != null) {
                try {
                    this.m.onShowFail(this.q, "show exception");
                } catch (Exception unused2) {
                    if (MBridgeConstans.DEBUG) {
                        e.printStackTrace();
                    }
                }
            }
            if (!this.A && !this.B && (cVar = this.k) != null && cVar.v(4) && this.n != null && c.a(this.n) != 1 && c.a(this.n) != 3) {
                a(false, "");
            }
            this.J = false;
        }
    }

    private boolean j() {
        try {
            if (this.O == null) {
                this.O = i.a(com.mbridge.msdk.foundation.controller.a.f().j());
            }
            j jVarA = j.a(this.O);
            if (this.k == null) {
                this.k = com.mbridge.msdk.videocommon.d.b.a().a(com.mbridge.msdk.foundation.controller.a.f().k(), this.p, this.A);
            }
            int iF = this.k.f();
            if (jVarA != null) {
                return jVarA.a(this.p, iF);
            }
            return false;
        } catch (Throwable unused) {
            z.d("RewardVideoController", "cap check error");
            return false;
        }
    }

    public class a implements Runnable {
        private final com.mbridge.msdk.reward.adapter.d b;
        private final int c;
        private final boolean d;

        public a(com.mbridge.msdk.reward.adapter.d dVar, int i, boolean z) {
            this.b = dVar;
            this.c = i;
            this.d = z;
        }

        @Override
        public final void run() {
            com.mbridge.msdk.reward.adapter.d dVar = this.b;
            if (dVar != null) {
                dVar.d(true);
            }
            z.d("RewardVideoController", "adSource=" + this.c + " CommonCancelTimeTask mIsDevCall：" + this.d);
            com.mbridge.msdk.reward.b.a.b(a.this.h, null, "v3 is timeout", a.this.p, a.this.B, "", "");
            a.this.c("v3 is timeout");
        }
    }

    public class b implements com.mbridge.msdk.reward.adapter.b {
        private com.mbridge.msdk.reward.adapter.a b;
        private boolean c;
        private Runnable d;

        public b(com.mbridge.msdk.reward.adapter.a aVar, boolean z) {
            this.b = aVar;
            this.c = z;
        }

        public final void a(Runnable runnable) {
            this.d = runnable;
        }

        @Override
        public final void b(String str) {
            if (this.d != null) {
                a.this.v.removeCallbacks(this.d);
            }
            if (a.this.n != null) {
                c.d(a.this.n, a.this.s, a.this.p);
            }
        }

        @Override
        public final void a() {
            if (this.d != null) {
                a.this.v.removeCallbacks(this.d);
            }
            if (a.this.n != null) {
                c.a(a.this.n, a.this.s, a.this.p);
            }
        }

        @Override
        public final void a(String str) {
            if (this.d != null) {
                a.this.v.removeCallbacks(this.d);
            }
            com.mbridge.msdk.reward.adapter.a aVar = this.b;
            if (aVar != null) {
                aVar.a(null);
                this.b = null;
            }
            if (a.this.n != null) {
                c.a(a.this.n, str);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:16:0x0034  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    static void j(a aVar) {
        String str;
        if (aVar.q != null) {
            if (aVar.H) {
                String strB = aVar.b();
                if (TextUtils.isEmpty(strB)) {
                    return;
                }
                ConcurrentHashMap<String, String> concurrentHashMap = L;
                if (concurrentHashMap != null && concurrentHashMap.containsKey(strB) && !TextUtils.isEmpty(L.get(strB))) {
                    str = L.get(strB);
                }
            } else {
                str = "";
            }
            aVar.q.setBidToken(str);
        }
    }

    static void a(a aVar, String str, List list) {
        if (list != null) {
            try {
                if (list.size() <= 0 || aVar.S) {
                    return;
                }
                z.a("RewardVideoController", "标记缓存数据 ： " + list.size());
                f.a(i.a(com.mbridge.msdk.foundation.controller.a.f().j())).a((List<CampaignEx>) list, str);
            } catch (Throwable th) {
                z.d("RewardVideoController", th.getMessage());
            }
        }
    }
}
