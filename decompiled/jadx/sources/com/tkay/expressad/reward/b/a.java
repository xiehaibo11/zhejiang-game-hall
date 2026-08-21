package com.tkay.expressad.reward.b;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import com.tkay.core.common.a.g;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.i;
import com.tkay.expressad.foundation.h.v;
import com.tkay.expressad.foundation.h.w;
import com.tkay.expressad.video.bt.module.b.h;
import com.tkay.expressad.videocommon.b.k;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicInteger;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class a implements g {
    private static final int A = 9;
    private static final int E = 16;
    private static final int F = 18;
    private static final int G = 17;
    private static final int H = 1001001;
    private static final int I = 1001002;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f7073a = 1;
    public static String b = null;
    private static final String i = "RewardVideoController";
    private static final int j = 8;
    private static final int z = 8;
    private int B;
    private int C;
    private int D;
    private boolean N;
    private Queue<Integer> V;
    private String W;
    private List<com.tkay.expressad.foundation.d.c> af;
    private List<com.tkay.expressad.foundation.d.c> ag;
    private Context k;
    private int l;
    private com.tkay.expressad.reward.a.d m;
    private com.tkay.expressad.videocommon.e.d n;
    private com.tkay.expressad.videocommon.e.a o;
    private volatile com.tkay.expressad.videocommon.d.a p;
    private volatile c q;
    private String r;
    private String s;
    private volatile String t;
    private String u;
    private String v;
    private static Map<String, Integer> T = new HashMap();
    public static Map<String, d> c = new HashMap();
    private static ConcurrentHashMap<String, String> U = new ConcurrentHashMap<>();
    private int w = 0;
    private int y = 2;
    private boolean J = false;
    private boolean K = false;
    private boolean L = false;
    private boolean M = false;
    private boolean O = false;
    private ArrayList<Integer> P = new ArrayList<>(7);
    private boolean Q = false;
    private volatile boolean R = false;
    private final Object S = new Object();
    private com.tkay.expressad.foundation.c.c X = null;
    private volatile boolean Y = true;
    private volatile boolean Z = false;
    private volatile boolean aa = false;
    private volatile boolean ab = false;
    private volatile boolean ac = false;
    private volatile boolean ad = false;
    private volatile boolean ae = false;
    volatile boolean d = false;
    volatile boolean e = false;
    volatile boolean f = false;
    volatile boolean g = false;
    volatile boolean h = false;
    private Handler x = new Handler(Looper.getMainLooper()) { // from class: com.tkay.expressad.reward.b.a.1
        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            int i2 = message.what;
            if (i2 == 8) {
                if (a.this.af == null || a.this.af.size() <= 0) {
                    return;
                }
                boolean z2 = (a.this.ag == null || a.this.ag.size() <= 0) ? false : !TextUtils.isEmpty(((com.tkay.expressad.foundation.d.c) a.this.ag.get(0)).ar());
                int iAp = ((com.tkay.expressad.foundation.d.c) a.this.af.get(0)).ap();
                if (a.this.m == null || !a.this.m.a(a.this.af, z2, iAp)) {
                    if (a.this.q == null || !a.this.N) {
                        return;
                    }
                    com.tkay.expressad.videocommon.a.c(a.this.s);
                    com.tkay.expressad.videocommon.a.b();
                    c.a(a.this.q, "load timeout");
                    return;
                }
                if (a.this.q == null || !a.this.N) {
                    return;
                }
                c.a(a.this.q, a.this.t, a.this.s);
                return;
            }
            if (i2 == 9) {
                if (a.this.p == null || !a.this.N) {
                    return;
                }
                Object obj = message.obj;
                Bundle data = message.getData();
                if (data != null && data.containsKey(com.tkay.expressad.b.y)) {
                    TextUtils.isEmpty(data.getString(com.tkay.expressad.b.y));
                }
                try {
                    if (a.this.K) {
                        a.b();
                    }
                    a.this.p.b();
                    return;
                } catch (Exception e) {
                    if (com.tkay.expressad.b.f6449a) {
                        e.printStackTrace();
                        return;
                    }
                    return;
                }
            }
            if (i2 != 1001002) {
                switch (i2) {
                    case 16:
                    case 18:
                        if (a.this.p != null && a.this.N) {
                            Object obj2 = message.obj;
                            String string = obj2 instanceof String ? obj2.toString() : "";
                            com.tkay.expressad.videocommon.a.c(a.this.s);
                            com.tkay.expressad.videocommon.a.b();
                            try {
                                if (a.this.K) {
                                    a.b();
                                }
                                a.this.p.a(string);
                            } catch (Exception e2) {
                                if (com.tkay.expressad.b.f6449a) {
                                    e2.printStackTrace();
                                    return;
                                }
                                return;
                            }
                            break;
                        }
                        break;
                    case 17:
                        if (a.this.p != null && a.this.N) {
                            Object obj3 = message.obj;
                            Bundle data2 = message.getData();
                            if (data2 != null && data2.containsKey(com.tkay.expressad.b.y)) {
                                TextUtils.isEmpty(data2.getString(com.tkay.expressad.b.y));
                            }
                            try {
                                if (a.this.K) {
                                    a.b();
                                }
                                com.tkay.expressad.videocommon.d.a unused = a.this.p;
                            } catch (Exception e3) {
                                if (com.tkay.expressad.b.f6449a) {
                                    e3.printStackTrace();
                                    return;
                                }
                                return;
                            }
                            break;
                        }
                        break;
                }
                return;
            }
            int iS = a.this.n != null ? a.this.n.S() : 0;
            if (a.this.m != null) {
                if (a.this.m.c()) {
                    if (a.this.q != null) {
                        try {
                            CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayListF = a.this.m.f();
                            if (copyOnWriteArrayListF != null) {
                                copyOnWriteArrayListF.size();
                            }
                        } catch (Throwable th) {
                            th.getMessage();
                        }
                        c.b(a.this.q, a.this.t, a.this.s);
                        return;
                    }
                    return;
                }
                if (a.this.m.f(false)) {
                    if (a.this.m.c()) {
                        if (a.this.q != null) {
                            a.this.m.d(false);
                            try {
                                CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayListF2 = a.this.m.f();
                                if (copyOnWriteArrayListF2 != null) {
                                    copyOnWriteArrayListF2.size();
                                }
                            } catch (Throwable th2) {
                                th2.getMessage();
                            }
                            c.b(a.this.q, a.this.t, a.this.s);
                            return;
                        }
                        return;
                    }
                    a.this.m.e(false);
                    if (a.this.m.f(true)) {
                        if (a.this.m.c()) {
                            if (a.this.q != null) {
                                a.this.m.d(true);
                                try {
                                    CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayListF3 = a.this.m.f();
                                    if (copyOnWriteArrayListF3 != null) {
                                        copyOnWriteArrayListF3.size();
                                    }
                                } catch (Throwable th3) {
                                    th3.getMessage();
                                }
                                c.b(a.this.q, a.this.t, a.this.s);
                                return;
                            }
                            return;
                        }
                        if (a.this.q != null) {
                            StringBuilder sb = new StringBuilder("load timeout task called for onVideoLoadFail after ");
                            sb.append(iS);
                            sb.append("s exception");
                        }
                        a.this.m.e(true);
                        return;
                    }
                    if (a.this.q != null) {
                        StringBuilder sb2 = new StringBuilder("load timeout task called for onVideoLoadFail after ");
                        sb2.append(iS);
                        sb2.append("s exception");
                        return;
                    }
                    return;
                }
                if (a.this.m.f(true)) {
                    if (a.this.m.c()) {
                        if (a.this.q != null) {
                            a.this.m.d(true);
                            try {
                                CopyOnWriteArrayList<com.tkay.expressad.foundation.d.c> copyOnWriteArrayListF4 = a.this.m.f();
                                if (copyOnWriteArrayListF4 != null) {
                                    copyOnWriteArrayListF4.size();
                                }
                            } catch (Throwable th4) {
                                th4.getMessage();
                            }
                            c.b(a.this.q, a.this.t, a.this.s);
                            return;
                        }
                        return;
                    }
                    if (a.this.q != null) {
                        StringBuilder sb3 = new StringBuilder("load timeout task called for onVideoLoadFail after ");
                        sb3.append(iS);
                        sb3.append(" s");
                    }
                    a.this.m.e(true);
                    return;
                }
                if (a.this.q != null) {
                    StringBuilder sb4 = new StringBuilder("load timeout task called for onVideoLoadFail after ");
                    sb4.append(iS);
                    sb4.append(" s");
                    return;
                }
                return;
            }
            c unused2 = a.this.q;
        }
    };

    static /* synthetic */ void b() {
    }

    private static void c() {
    }

    static /* synthetic */ boolean l(a aVar) {
        aVar.R = false;
        return false;
    }

    static /* synthetic */ boolean o(a aVar) {
        aVar.aa = true;
        return true;
    }

    static /* synthetic */ boolean q(a aVar) {
        aVar.ab = true;
        return true;
    }

    static /* synthetic */ boolean s(a aVar) {
        aVar.ac = true;
        return true;
    }

    static /* synthetic */ boolean u(a aVar) {
        aVar.ad = true;
        return true;
    }

    public final void a(boolean z2) {
        this.J = z2;
    }

    private void b(boolean z2) {
        this.K = z2;
    }

    public final void a(int i2) {
        this.y = i2;
    }

    private void a(String str, String str2, String str3, String str4) {
        if (!TextUtils.isEmpty(str)) {
            v.a(this.k, "Tkay_ConfirmTitle" + this.s, str.trim());
        }
        if (!TextUtils.isEmpty(str2)) {
            v.a(this.k, "Tkay_ConfirmContent" + this.s, str2.trim());
        }
        if (!TextUtils.isEmpty(str4)) {
            v.a(this.k, "Tkay_CancelText" + this.s, str4.trim());
        }
        if (TextUtils.isEmpty(str3)) {
            return;
        }
        v.a(this.k, "Tkay_ConfirmText" + this.s, str3.trim());
    }

    private void c(boolean z2) {
        this.O = z2;
    }

    private void a(int i2, int i3, int i4) {
        this.B = i2;
        this.C = i3;
        if (i3 == com.tkay.expressad.foundation.g.a.cu) {
            this.D = i4 < 0 ? 5 : i4;
        }
        if (this.C == com.tkay.expressad.foundation.g.a.ct) {
            this.D = i4 < 0 ? 80 : i4;
        }
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("ivRewardEnable", 1);
            jSONObject.put("ivRewardMode", i2 == com.tkay.expressad.foundation.g.a.cr ? 0 : 1);
            jSONObject.put("ivRewardPlayValueMode", i3 == com.tkay.expressad.foundation.g.a.ct ? 0 : 1);
            jSONObject.put("ivRewardPlayValue", i4);
            com.tkay.expressad.d.b.a();
            com.tkay.expressad.d.b.e(this.s, jSONObject.toString());
        } catch (Exception unused) {
        }
    }

    public static void a(String str, int i2) {
        try {
            if (T == null || !w.b(str)) {
                return;
            }
            T.put(str, Integer.valueOf(i2));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static int a(String str) {
        Integer num;
        try {
            if (!w.b(str) || T == null || !T.containsKey(str) || (num = T.get(str)) == null) {
                return 0;
            }
            return num.intValue();
        } catch (Exception e) {
            e.printStackTrace();
            return 0;
        }
    }

    private static void b(String str, String str2) {
        ConcurrentHashMap<String, String> concurrentHashMap;
        if (TextUtils.isEmpty(str) || TextUtils.isEmpty(str2) || (concurrentHashMap = U) == null || concurrentHashMap.containsKey(str)) {
            return;
        }
        U.put(str, str2);
    }

    public final void a() {
        ConcurrentHashMap<String, String> concurrentHashMap;
        if (!this.Q || (concurrentHashMap = U) == null || concurrentHashMap.containsKey(d())) {
            return;
        }
        U.remove(d());
    }

    private String d() {
        com.tkay.expressad.reward.a.d dVar = this.m;
        return dVar != null ? dVar.c(this.Q) : "";
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final class d implements h {
        private a b;
        private int c;
        private Handler d;
        private int e;

        /* synthetic */ d(a aVar, a aVar2, Handler handler) {
            this(aVar2, handler, (byte) 0);
        }

        private d(a aVar, Handler handler, byte b) {
            this.e = 0;
            this.b = aVar;
            this.c = 1;
            this.d = handler;
        }

        private void d() {
            a.this.P.clear();
            this.b = null;
        }

        @Override // com.tkay.expressad.video.bt.module.b.h
        public final void a() {
            a.l(a.this);
            try {
                if (this.b != null) {
                    this.b.Q = true;
                    if (this.b.m != null) {
                        this.b.m.n = "";
                    }
                    if (this.b.p != null) {
                        if (a.this.K) {
                            a.b();
                        }
                        this.b.p.c();
                        this.e = 2;
                    }
                }
            } catch (Throwable th) {
                if (com.tkay.expressad.b.f6449a) {
                    th.printStackTrace();
                }
            }
        }

        @Override // com.tkay.expressad.video.bt.module.b.h
        public final void a(boolean z, com.tkay.expressad.videocommon.c.c cVar) {
            try {
                if (this.b == null || this.b.p == null) {
                    return;
                }
                if (cVar == null) {
                    cVar = com.tkay.expressad.videocommon.c.c.b(this.b.v);
                }
                if (a.this.K) {
                    a.b();
                    a.this.a();
                }
                this.b.p.a(z, cVar.a(), cVar.b());
                this.e = 7;
                this.b.Q = false;
                a.this.P.clear();
                this.b = null;
            } catch (Exception e) {
                if (com.tkay.expressad.b.f6449a) {
                    e.printStackTrace();
                }
            }
        }

        @Override // com.tkay.expressad.video.bt.module.b.h
        public final void a(String str) {
            a.l(a.this);
            try {
                if (this.b != null) {
                    if (a.this.K) {
                        a.b();
                    }
                    this.b.Q = false;
                    if (this.b.p != null) {
                        try {
                            if (a.this.af != null) {
                                a.this.af.size();
                            }
                        } catch (Exception unused) {
                        }
                        try {
                            this.b.p.b(str);
                        } catch (Exception e) {
                            if (com.tkay.expressad.b.f6449a) {
                                e.printStackTrace();
                            }
                        }
                        this.e = 4;
                    }
                }
            } catch (Exception e2) {
                this.e = 0;
                if (com.tkay.expressad.b.f6449a) {
                    e2.printStackTrace();
                }
            }
        }

        @Override // com.tkay.expressad.video.bt.module.b.h
        public final void a(com.tkay.expressad.foundation.d.c cVar) {
            try {
                if (this.b == null || this.b.p == null) {
                    return;
                }
                try {
                    if (a.this.K) {
                        a.b();
                    }
                    this.b.p.a(cVar);
                } catch (Exception e) {
                    if (com.tkay.expressad.b.f6449a) {
                        e.printStackTrace();
                    }
                }
            } catch (Exception e2) {
                if (com.tkay.expressad.b.f6449a) {
                    e2.printStackTrace();
                }
            }
        }

        @Override // com.tkay.expressad.video.bt.module.b.h
        public final void b() {
            try {
                if (this.b == null || this.b.p == null) {
                    return;
                }
                try {
                    this.b.p.d();
                } catch (Exception e) {
                    if (com.tkay.expressad.b.f6449a) {
                        e.printStackTrace();
                    }
                }
                this.e = 5;
            } catch (Exception e2) {
                if (com.tkay.expressad.b.f6449a) {
                    e2.printStackTrace();
                }
            }
        }

        @Override // com.tkay.expressad.video.bt.module.b.h
        public final void a(boolean z, int i) {
            try {
                if (this.b == null || this.b.p == null) {
                    return;
                }
                this.b.Q = false;
                try {
                    com.tkay.expressad.videocommon.d.a unused = this.b.p;
                } catch (Exception e) {
                    if (com.tkay.expressad.b.f6449a) {
                        e.printStackTrace();
                    }
                }
            } catch (Exception e2) {
                if (com.tkay.expressad.b.f6449a) {
                    e2.printStackTrace();
                }
            }
        }

        @Override // com.tkay.expressad.video.bt.module.b.h
        public final void c() {
            try {
                if (this.b == null || this.b.p == null) {
                    return;
                }
                try {
                    com.tkay.expressad.videocommon.d.a unused = this.b.p;
                    com.tkay.expressad.foundation.f.b.a().b("_2", 2);
                } catch (Exception e) {
                    if (com.tkay.expressad.b.f6449a) {
                        e.printStackTrace();
                    }
                }
                this.e = 6;
            } catch (Exception e2) {
                if (com.tkay.expressad.b.f6449a) {
                    e2.printStackTrace();
                }
            }
        }
    }

    public final void a(com.tkay.expressad.videocommon.d.a aVar) {
        this.p = aVar;
        this.q = new c(this, aVar, this.x, this.s, (byte) 0);
    }

    public final void a(String str, String str2) {
        try {
            this.k = m.a().f();
            this.s = str2;
            this.t = str;
            this.o = com.tkay.expressad.videocommon.e.c.a().b();
            com.tkay.expressad.foundation.h.m.b();
            k.a().b();
            com.tkay.expressad.videocommon.b.h.a().b();
            com.tkay.expressad.videocommon.e.c.a().a(this.s, this.J);
            if (this.X == null) {
                this.X = com.tkay.expressad.foundation.c.c.a(m.a().f());
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    private static void e() {
        com.tkay.expressad.foundation.h.m.a();
    }

    public final void a(com.tkay.expressad.foundation.d.d dVar) {
        if (dVar == null) {
            c.b(this.q, com.tkay.expressad.foundation.g.b.b.f);
            return;
        }
        if (this.q != null && c.a(this.q) == 3) {
            this.Y = false;
        } else {
            this.Y = true;
            c.b(this.q);
        }
        this.N = true;
        this.x.removeMessages(1001001);
        this.ab = false;
        this.aa = false;
        this.ac = false;
        this.ad = false;
        com.tkay.expressad.reward.a.c.a();
        try {
            this.n = com.tkay.expressad.videocommon.e.c.a().a(com.tkay.expressad.foundation.b.b.b().e(), this.s, this.J);
            if (!TextUtils.isEmpty(this.t)) {
                this.n.b(this.t);
            }
            int iS = this.n.S() * 1000;
            if (this.x != null) {
                StringBuilder sb = new StringBuilder("start load timeout for ");
                sb.append(iS);
                sb.append(" ms");
                this.x.sendEmptyMessageDelayed(1001002, iS);
            }
            this.V = this.n.Q();
            try {
                if (g()) {
                    f();
                }
            } catch (Exception e) {
                if (com.tkay.expressad.b.f6449a) {
                    e.printStackTrace();
                }
            }
            try {
                c(dVar);
            } catch (Exception e2) {
                try {
                    b("load mv api error:" + e2.getMessage());
                } catch (Exception e3) {
                    b(com.tkay.expressad.foundation.g.b.b.b);
                    if (com.tkay.expressad.b.f6449a) {
                        e3.printStackTrace();
                    }
                }
            }
        } catch (Exception e4) {
            if (this.q != null) {
                c.a(this.q, "load exception");
            }
            if (com.tkay.expressad.b.f6449a) {
                e4.printStackTrace();
            }
        }
    }

    private static List<com.tkay.expressad.foundation.d.c> a(String str, List<com.tkay.expressad.foundation.d.c> list) {
        ArrayList arrayList = new ArrayList();
        if (list != null && list.size() > 0 && !TextUtils.isEmpty(str)) {
            for (com.tkay.expressad.foundation.d.c cVar : list) {
                if (cVar != null && str.equals(cVar.B())) {
                    arrayList.add(cVar);
                }
            }
        }
        return arrayList;
    }

    private final class c {
        private static final String b = "RewardVideoController_Listener";
        private static final int d = 0;
        private static final int e = 1;
        private static final int f = 2;
        private static final int g = 3;
        private WeakReference<com.tkay.expressad.videocommon.d.a> c;
        private volatile AtomicInteger h;
        private Handler i;
        private String j;
        private List<com.tkay.expressad.foundation.d.c> k;
        private boolean l;

        /* synthetic */ c(a aVar, com.tkay.expressad.videocommon.d.a aVar2, Handler handler, String str, byte b2) {
            this(aVar2, handler, str);
        }

        private c(com.tkay.expressad.videocommon.d.a aVar, Handler handler, String str) {
            this.c = new WeakReference<>(aVar);
            this.h = new AtomicInteger(0);
            this.i = handler;
            this.j = str;
        }

        private int a() {
            return this.h.get();
        }

        private void a(int i) {
            this.h.set(i);
        }

        private void a(String str, String str2) {
            StringBuilder sb = new StringBuilder("receive onCampaignLoadSuccess,cur state: ");
            sb.append(this.h.get());
            sb.append(" hasCalledCampaignLoadSuccess: ");
            sb.append(a.this.aa);
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = this.c;
            if (weakReference == null || weakReference.get() == null) {
                return;
            }
            if ((this.h.get() == 1 || this.h.get() == 3) && this.i != null) {
                if (!a.this.aa) {
                    StringBuilder sb2 = new StringBuilder("receive onCampaignLoadSuccess,cur state: ");
                    sb2.append(this.h.get());
                    sb2.append(" hasCalledCampaignLoadSuccess: ");
                    sb2.append(a.this.aa);
                    sb2.append(" response");
                    a.o(a.this);
                    Message messageObtain = Message.obtain();
                    Bundle bundle = new Bundle();
                    bundle.putString(com.tkay.expressad.b.y, str);
                    bundle.putString("unit_id", str2);
                    messageObtain.setData(bundle);
                    messageObtain.obj = str2;
                    messageObtain.what = 17;
                    this.i.sendMessage(messageObtain);
                    return;
                }
                StringBuilder sb3 = new StringBuilder("receive onCampaignLoadSuccess,cur state: ");
                sb3.append(this.h.get());
                sb3.append(" hasCalledCampaignLoadSuccess: ");
                sb3.append(a.this.aa);
                sb3.append(" 无需响应");
            }
        }

        private void b(String str, String str2) {
            StringBuilder sb = new StringBuilder("receive onCampaignLoadSuccessForCache,cur state: ");
            sb.append(this.h.get());
            sb.append(" hasCalledCampaignLoadSuccess: ");
            sb.append(a.this.aa);
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = this.c;
            if (weakReference == null || weakReference.get() == null || this.i == null) {
                return;
            }
            if (!a.this.aa) {
                StringBuilder sb2 = new StringBuilder("receive onCampaignLoadSuccessForCache,curstate: ");
                sb2.append(this.h.get());
                sb2.append(" hasCalledCampaignLoadSuccess: ");
                sb2.append(a.this.aa);
                sb2.append(" response");
                a.o(a.this);
                Message messageObtain = Message.obtain();
                Bundle bundle = new Bundle();
                bundle.putString(com.tkay.expressad.b.y, str);
                bundle.putString("unit_id", str2);
                messageObtain.setData(bundle);
                messageObtain.obj = str2;
                messageObtain.what = 17;
                this.i.sendMessage(messageObtain);
                return;
            }
            StringBuilder sb3 = new StringBuilder("receive onCampaignLoadSuccessForCache,cur state: ");
            sb3.append(this.h.get());
            sb3.append(" hasCalledCampaignLoadSuccess: ");
            sb3.append(a.this.aa);
            sb3.append(" 无需响应");
        }

        private void c(String str, String str2) {
            Handler handler = this.i;
            if (handler != null) {
                handler.removeMessages(1001002);
            }
            StringBuilder sb = new StringBuilder("receive onVideoLoadSuccess,cur state: ");
            sb.append(this.h.get());
            sb.append(" hasCalledVideoLoadSuccess: ");
            sb.append(a.this.ab);
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = this.c;
            if (weakReference == null || weakReference.get() == null) {
                return;
            }
            if ((this.h.get() == 1 || this.h.get() == 3) && this.i != null) {
                this.h.set(2);
                if (!a.this.ab) {
                    StringBuilder sb2 = new StringBuilder("receive onVideoLoadSuccess,cur state: ");
                    sb2.append(this.h.get());
                    sb2.append(" hasCalledVideoLoadSuccess: ");
                    sb2.append(a.this.ab);
                    sb2.append(" 响应");
                    a.q(a.this);
                    Message messageObtain = Message.obtain();
                    Bundle bundle = new Bundle();
                    bundle.putString(com.tkay.expressad.b.y, str);
                    bundle.putString("unit_id", str2);
                    messageObtain.setData(bundle);
                    messageObtain.obj = str2;
                    messageObtain.what = 9;
                    this.i.sendMessage(messageObtain);
                    return;
                }
                StringBuilder sb3 = new StringBuilder("receive onVideoLoadSuccess,cur state: ");
                sb3.append(this.h.get());
                sb3.append(" hasCalledVideoLoadSuccess: ");
                sb3.append(a.this.ab);
                sb3.append(" 无需响应");
            }
        }

        private void d(String str, String str2) {
            Handler handler = this.i;
            if (handler != null) {
                handler.removeMessages(1001002);
            }
            StringBuilder sb = new StringBuilder("receive onVideoLoadSuccessForCache,cur state: ");
            sb.append(this.h.get());
            sb.append(" hasCalledVideoLoadSuccess: ");
            sb.append(a.this.ab);
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = this.c;
            if (weakReference == null || weakReference.get() == null) {
                return;
            }
            if ((this.h.get() == 1 || this.h.get() == 3) && this.i != null) {
                if (this.h.get() == 1) {
                    this.h.set(3);
                }
                if (!a.this.ab) {
                    StringBuilder sb2 = new StringBuilder("receive onVideoLoadSuccessForCache,cur state: ");
                    sb2.append(this.h.get());
                    sb2.append(" hasCalledVideoLoadSuccess: ");
                    sb2.append(a.this.ab);
                    sb2.append(" 响应");
                    a.q(a.this);
                    Message messageObtain = Message.obtain();
                    Bundle bundle = new Bundle();
                    bundle.putString(com.tkay.expressad.b.y, str);
                    bundle.putString("unit_id", str2);
                    messageObtain.setData(bundle);
                    messageObtain.obj = str2;
                    messageObtain.what = 9;
                    this.i.sendMessage(messageObtain);
                    if (a.this.ac) {
                        this.h.set(2);
                        return;
                    }
                    return;
                }
                StringBuilder sb3 = new StringBuilder("receive onVideoLoadSuccessForCache,cur state: ");
                sb3.append(this.h.get());
                sb3.append(" hasCalledVideoLoadSuccess: ");
                sb3.append(a.this.ab);
                sb3.append(" 无需响应");
            }
        }

        private void a(String str) {
            Handler handler = this.i;
            if (handler != null) {
                handler.removeMessages(1001002);
            }
            StringBuilder sb = new StringBuilder("receive onVideoLoadFail,cur state: ");
            sb.append(this.h.get());
            sb.append(" hasCalledVideoLoadFail: ");
            sb.append(a.this.ac);
            sb.append(" ");
            sb.append(str);
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = this.c;
            if (weakReference == null || weakReference.get() == null) {
                return;
            }
            if ((this.h.get() == 1 || this.h.get() == 3) && this.i != null) {
                a.s(a.this);
                if (!a.this.ae || str.contains("resource load timeout")) {
                    a.u(a.this);
                }
                if (a.this.ab) {
                    this.h.set(2);
                }
                if (a.this.ac && a.this.ad && !a.this.ab) {
                    this.h.set(2);
                    StringBuilder sb2 = new StringBuilder("receive onVideoLoadFail,cur state: ");
                    sb2.append(this.h.get());
                    sb2.append(" hasCalledVideoLoadFail: ");
                    sb2.append(a.this.ac);
                    sb2.append(" ");
                    sb2.append(str);
                    sb2.append(" 响应");
                    Message messageObtain = Message.obtain();
                    messageObtain.obj = str;
                    messageObtain.what = 16;
                    this.i.sendMessage(messageObtain);
                    return;
                }
                StringBuilder sb3 = new StringBuilder("receive onVideoLoadFail,cur state: ");
                sb3.append(this.h.get());
                sb3.append(" hasCalledVideoLoadFail: ");
                sb3.append(a.this.ac);
                sb3.append(" ");
                sb3.append(str);
                sb3.append(" 无需响应");
            }
        }

        private void b(String str) {
            this.h.set(2);
            if (this.i != null) {
                Message messageObtain = Message.obtain();
                messageObtain.obj = str;
                messageObtain.what = 18;
                this.i.sendMessage(messageObtain);
            }
        }

        private void c(String str) {
            if (this.i != null) {
                Message messageObtain = Message.obtain();
                messageObtain.obj = str;
                messageObtain.what = 18;
                this.i.sendMessage(messageObtain);
            }
        }

        private void d(String str) {
            StringBuilder sb = new StringBuilder("receive onVideoLoadFailForCache,cur state: ");
            sb.append(this.h.get());
            sb.append(" hasCalledVideoLoadFailedForCache: ");
            sb.append(a.this.ad);
            sb.append(" ");
            sb.append(str);
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = this.c;
            if (weakReference == null || weakReference.get() == null) {
                return;
            }
            if ((this.h.get() == 1 || this.h.get() == 3) && this.i != null) {
                a.u(a.this);
                if (str.contains("resource load timeout")) {
                    a.s(a.this);
                }
                if (a.this.ad && a.this.ac && !a.this.ab) {
                    this.h.set(2);
                    StringBuilder sb2 = new StringBuilder("receive hasCalledVideoLoadFailedForCache,cur state: ");
                    sb2.append(this.h.get());
                    sb2.append(" hasCalledVideoLoadFailedForCache: ");
                    sb2.append(a.this.ad);
                    sb2.append(" ");
                    sb2.append(str);
                    sb2.append(" 响应");
                    Message messageObtain = Message.obtain();
                    messageObtain.obj = str;
                    messageObtain.what = 16;
                    this.i.sendMessage(messageObtain);
                    return;
                }
                StringBuilder sb3 = new StringBuilder("receive onVideoLoadFailForCache,cur state: ");
                sb3.append(this.h.get());
                sb3.append(" hasCalledVideoLoadFailedForCache: ");
                sb3.append(a.this.ad);
                sb3.append(" ");
                sb3.append(str);
                sb3.append(" 无需响应");
            }
        }

        private void b() {
            com.tkay.expressad.videocommon.d.a aVar;
            a.l(a.this);
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = this.c;
            if (weakReference == null || (aVar = weakReference.get()) == null) {
                return;
            }
            aVar.c();
        }

        private void a(boolean z, String str, float f2) {
            com.tkay.expressad.videocommon.d.a aVar;
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = this.c;
            if (weakReference == null || (aVar = weakReference.get()) == null) {
                return;
            }
            if (a.this.K) {
                a.b();
                a.this.a();
            }
            aVar.a(z, str, f2);
        }

        private void e(String str) {
            com.tkay.expressad.videocommon.d.a aVar;
            a.l(a.this);
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = this.c;
            if (weakReference == null || (aVar = weakReference.get()) == null) {
                return;
            }
            aVar.b(str);
        }

        private void a(com.tkay.expressad.foundation.d.c cVar) {
            com.tkay.expressad.videocommon.d.a aVar;
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = this.c;
            if (weakReference == null || (aVar = weakReference.get()) == null) {
                return;
            }
            aVar.a(cVar);
        }

        private void c() {
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = this.c;
            if (weakReference != null) {
                weakReference.get();
            }
        }

        private void d() {
            com.tkay.expressad.videocommon.d.a aVar;
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = this.c;
            if (weakReference == null || (aVar = weakReference.get()) == null) {
                return;
            }
            aVar.d();
        }

        private void a(List<com.tkay.expressad.foundation.d.c> list) {
            this.k = list;
        }

        private void a(boolean z) {
            this.l = z;
        }

        static /* synthetic */ void a(c cVar, String str, String str2) {
            Handler handler = cVar.i;
            if (handler != null) {
                handler.removeMessages(1001002);
            }
            StringBuilder sb = new StringBuilder("receive onVideoLoadSuccess,cur state: ");
            sb.append(cVar.h.get());
            sb.append(" hasCalledVideoLoadSuccess: ");
            sb.append(a.this.ab);
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = cVar.c;
            if (weakReference == null || weakReference.get() == null) {
                return;
            }
            if ((cVar.h.get() == 1 || cVar.h.get() == 3) && cVar.i != null) {
                cVar.h.set(2);
                if (!a.this.ab) {
                    StringBuilder sb2 = new StringBuilder("receive onVideoLoadSuccess,cur state: ");
                    sb2.append(cVar.h.get());
                    sb2.append(" hasCalledVideoLoadSuccess: ");
                    sb2.append(a.this.ab);
                    sb2.append(" 响应");
                    a.q(a.this);
                    Message messageObtain = Message.obtain();
                    Bundle bundle = new Bundle();
                    bundle.putString(com.tkay.expressad.b.y, str);
                    bundle.putString("unit_id", str2);
                    messageObtain.setData(bundle);
                    messageObtain.obj = str2;
                    messageObtain.what = 9;
                    cVar.i.sendMessage(messageObtain);
                    return;
                }
                StringBuilder sb3 = new StringBuilder("receive onVideoLoadSuccess,cur state: ");
                sb3.append(cVar.h.get());
                sb3.append(" hasCalledVideoLoadSuccess: ");
                sb3.append(a.this.ab);
                sb3.append(" 无需响应");
            }
        }

        static /* synthetic */ void a(c cVar, String str) {
            Handler handler = cVar.i;
            if (handler != null) {
                handler.removeMessages(1001002);
            }
            StringBuilder sb = new StringBuilder("receive onVideoLoadFail,cur state: ");
            sb.append(cVar.h.get());
            sb.append(" hasCalledVideoLoadFail: ");
            sb.append(a.this.ac);
            sb.append(" ");
            sb.append(str);
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = cVar.c;
            if (weakReference == null || weakReference.get() == null) {
                return;
            }
            if ((cVar.h.get() == 1 || cVar.h.get() == 3) && cVar.i != null) {
                a.s(a.this);
                if (!a.this.ae || str.contains("resource load timeout")) {
                    a.u(a.this);
                }
                if (a.this.ab) {
                    cVar.h.set(2);
                }
                if (a.this.ac && a.this.ad && !a.this.ab) {
                    cVar.h.set(2);
                    StringBuilder sb2 = new StringBuilder("receive onVideoLoadFail,cur state: ");
                    sb2.append(cVar.h.get());
                    sb2.append(" hasCalledVideoLoadFail: ");
                    sb2.append(a.this.ac);
                    sb2.append(" ");
                    sb2.append(str);
                    sb2.append(" 响应");
                    Message messageObtain = Message.obtain();
                    messageObtain.obj = str;
                    messageObtain.what = 16;
                    cVar.i.sendMessage(messageObtain);
                    return;
                }
                StringBuilder sb3 = new StringBuilder("receive onVideoLoadFail,cur state: ");
                sb3.append(cVar.h.get());
                sb3.append(" hasCalledVideoLoadFail: ");
                sb3.append(a.this.ac);
                sb3.append(" ");
                sb3.append(str);
                sb3.append(" 无需响应");
            }
        }

        static /* synthetic */ void b(c cVar, String str, String str2) {
            Handler handler = cVar.i;
            if (handler != null) {
                handler.removeMessages(1001002);
            }
            StringBuilder sb = new StringBuilder("receive onVideoLoadSuccessForCache,cur state: ");
            sb.append(cVar.h.get());
            sb.append(" hasCalledVideoLoadSuccess: ");
            sb.append(a.this.ab);
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = cVar.c;
            if (weakReference == null || weakReference.get() == null) {
                return;
            }
            if ((cVar.h.get() == 1 || cVar.h.get() == 3) && cVar.i != null) {
                if (cVar.h.get() == 1) {
                    cVar.h.set(3);
                }
                if (!a.this.ab) {
                    StringBuilder sb2 = new StringBuilder("receive onVideoLoadSuccessForCache,cur state: ");
                    sb2.append(cVar.h.get());
                    sb2.append(" hasCalledVideoLoadSuccess: ");
                    sb2.append(a.this.ab);
                    sb2.append(" 响应");
                    a.q(a.this);
                    Message messageObtain = Message.obtain();
                    Bundle bundle = new Bundle();
                    bundle.putString(com.tkay.expressad.b.y, str);
                    bundle.putString("unit_id", str2);
                    messageObtain.setData(bundle);
                    messageObtain.obj = str2;
                    messageObtain.what = 9;
                    cVar.i.sendMessage(messageObtain);
                    if (a.this.ac) {
                        cVar.h.set(2);
                        return;
                    }
                    return;
                }
                StringBuilder sb3 = new StringBuilder("receive onVideoLoadSuccessForCache,cur state: ");
                sb3.append(cVar.h.get());
                sb3.append(" hasCalledVideoLoadSuccess: ");
                sb3.append(a.this.ab);
                sb3.append(" 无需响应");
            }
        }

        static /* synthetic */ void b(c cVar, String str) {
            cVar.h.set(2);
            if (cVar.i != null) {
                Message messageObtain = Message.obtain();
                messageObtain.obj = str;
                messageObtain.what = 18;
                cVar.i.sendMessage(messageObtain);
            }
        }

        static /* synthetic */ int a(c cVar) {
            return cVar.h.get();
        }

        static /* synthetic */ void b(c cVar) {
            cVar.h.set(1);
        }

        static /* synthetic */ void c(c cVar, String str, String str2) {
            StringBuilder sb = new StringBuilder("receive onCampaignLoadSuccess,cur state: ");
            sb.append(cVar.h.get());
            sb.append(" hasCalledCampaignLoadSuccess: ");
            sb.append(a.this.aa);
            WeakReference<com.tkay.expressad.videocommon.d.a> weakReference = cVar.c;
            if (weakReference == null || weakReference.get() == null) {
                return;
            }
            if ((cVar.h.get() == 1 || cVar.h.get() == 3) && cVar.i != null) {
                if (!a.this.aa) {
                    StringBuilder sb2 = new StringBuilder("receive onCampaignLoadSuccess,cur state: ");
                    sb2.append(cVar.h.get());
                    sb2.append(" hasCalledCampaignLoadSuccess: ");
                    sb2.append(a.this.aa);
                    sb2.append(" response");
                    a.o(a.this);
                    Message messageObtain = Message.obtain();
                    Bundle bundle = new Bundle();
                    bundle.putString(com.tkay.expressad.b.y, str);
                    bundle.putString("unit_id", str2);
                    messageObtain.setData(bundle);
                    messageObtain.obj = str2;
                    messageObtain.what = 17;
                    cVar.i.sendMessage(messageObtain);
                    return;
                }
                StringBuilder sb3 = new StringBuilder("receive onCampaignLoadSuccess,cur state: ");
                sb3.append(cVar.h.get());
                sb3.append(" hasCalledCampaignLoadSuccess: ");
                sb3.append(a.this.aa);
                sb3.append(" 无需响应");
            }
        }
    }

    private void f() {
        try {
            List<com.tkay.expressad.videocommon.c.b> listI = this.n.I();
            if (listI == null || listI.size() <= 0) {
                return;
            }
            for (int i2 = 0; i2 < listI.size(); i2++) {
                com.tkay.expressad.videocommon.c.b bVar = listI.get(i2);
                v.a(this.k, this.t + "_" + bVar.a(), 0);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private boolean g() {
        int iIntValue;
        try {
            List<com.tkay.expressad.videocommon.c.b> listI = this.n.I();
            if (this.o == null) {
                this.o = com.tkay.expressad.videocommon.e.c.a().b();
            }
            Map<String, Integer> mapI = this.o.i();
            if (listI == null || listI.size() <= 0) {
                return true;
            }
            for (int i2 = 0; i2 < listI.size(); i2++) {
                com.tkay.expressad.videocommon.c.b bVar = listI.get(i2);
                StringBuilder sb = new StringBuilder();
                sb.append(bVar.a());
                if (mapI.containsKey(sb.toString())) {
                    StringBuilder sb2 = new StringBuilder();
                    sb2.append(bVar.a());
                    iIntValue = mapI.get(sb2.toString()).intValue();
                } else {
                    iIntValue = 0;
                }
                Object objB = v.b(this.k, this.t + "_" + bVar.a(), 0);
                if ((objB != null ? ((Integer) objB).intValue() : 0) < iIntValue) {
                    return false;
                }
            }
            return true;
        } catch (Exception e) {
            e.printStackTrace();
            e.getMessage();
            return true;
        }
    }

    private void b(com.tkay.expressad.foundation.d.d dVar) {
        try {
            c(dVar);
        } catch (Exception e) {
            try {
                b("load mv api error:" + e.getMessage());
            } catch (Exception e2) {
                b(com.tkay.expressad.foundation.g.b.b.b);
                if (com.tkay.expressad.b.f6449a) {
                    e2.printStackTrace();
                }
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(String str) {
        if (this.q != null) {
            this.ad = true;
            c.a(this.q, str);
        }
    }

    private void c(com.tkay.expressad.foundation.d.d dVar) {
        try {
            if (this.m == null || !this.s.equals(this.m.e())) {
                com.tkay.expressad.reward.a.d dVar2 = new com.tkay.expressad.reward.a.d(this.k, this.t, this.s);
                this.m = dVar2;
                dVar2.a(this.J);
                this.m.b(this.K);
            }
            if (this.J) {
                this.m.a(this.B, this.C, this.D);
            }
            this.m.a(this.y);
            this.m.a(this.n);
            RunnableC0473a runnableC0473a = new RunnableC0473a(this.m);
            b bVar = new b(this.m);
            bVar.a(runnableC0473a);
            this.m.a(bVar);
            this.m.a(dVar);
        } catch (Exception e) {
            b(e.getMessage());
        }
    }

    private com.tkay.expressad.videocommon.c.b b(int i2) {
        com.tkay.expressad.videocommon.e.d dVar = this.n;
        com.tkay.expressad.videocommon.c.b bVar = null;
        if (dVar != null) {
            int size = dVar.I().size();
            for (int i3 = 0; i3 < size; i3++) {
                if (this.n.I().get(i3).a() == i2) {
                    bVar = this.n.I().get(i3);
                }
            }
        }
        return bVar;
    }

    private void a(Activity activity, String str, i iVar) {
        Map<String, Integer> mapI;
        try {
            int iIntValue = (this.o == null || (mapI = this.o.i()) == null || !mapI.containsKey("1")) ? 0 : mapI.get("1").intValue();
            if (v.b(this.k, this.t + "_1", 0) != null) {
                this.l = ((Integer) v.b(this.k, this.t + "_1", 0)).intValue();
            }
            if (this.m == null) {
                i();
            }
            if (this.m != null && this.m.c()) {
                if (this.l >= iIntValue && iIntValue > 0) {
                    this.R = false;
                    return;
                }
                d dVar = new d(this, this, this.x);
                c.put(this.s, dVar);
                this.m.a(activity, dVar, str, this.r, this.y, this.u, iVar);
                return;
            }
            this.R = false;
            if (this.p != null) {
                try {
                    this.p.b("can't show because load is failed");
                } catch (Exception e) {
                    if (com.tkay.expressad.b.f6449a) {
                        e.printStackTrace();
                    }
                }
            }
        } catch (Exception e2) {
            if (com.tkay.expressad.b.f6449a) {
                e2.getLocalizedMessage();
            }
            if (this.p != null) {
                try {
                    this.p.b("show exception");
                } catch (Exception unused) {
                    if (com.tkay.expressad.b.f6449a) {
                        e2.printStackTrace();
                    }
                }
            }
            this.R = false;
        }
    }

    @Override // com.tkay.core.common.a.g
    public boolean isReady() {
        try {
            j();
            if (this.K) {
                return false;
            }
            if (this.m == null) {
                i();
            }
            if (this.m != null) {
                return this.m.c();
            }
            return false;
        } catch (Throwable th) {
            if (!com.tkay.expressad.b.f6449a) {
                return false;
            }
            th.printStackTrace();
            return false;
        }
    }

    private boolean h() {
        if (this.m == null) {
            i();
        }
        com.tkay.expressad.reward.a.d dVar = this.m;
        if (dVar != null) {
            return dVar.c();
        }
        return false;
    }

    private void i() {
        com.tkay.expressad.reward.a.d dVar = new com.tkay.expressad.reward.a.d(this.k, this.t, this.s);
        this.m = dVar;
        dVar.a(this.J);
        this.m.b(this.K);
        if (this.J) {
            this.m.a(this.B, this.C, this.D);
        }
        this.m.a(this.n);
    }

    /* JADX WARN: Removed duplicated region for block: B:120:0x01bd  */
    /* JADX WARN: Removed duplicated region for block: B:135:0x01c4 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final void a(android.app.Activity r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, com.tkay.core.common.f.i r14) {
        /*
            Method dump skipped, instruction units count: 470
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.reward.b.a.a(android.app.Activity, java.lang.String, java.lang.String, java.lang.String, com.tkay.core.common.f.i):void");
    }

    private boolean j() {
        try {
            if (this.X != null) {
                return false;
            }
            this.X = com.tkay.expressad.foundation.c.c.a(m.a().f());
            return false;
        } catch (Throwable unused) {
            return false;
        }
    }

    private static void a(boolean z2, boolean z3) {
        try {
            if (c != null) {
                c.clear();
            }
            if (z2) {
                if (z3) {
                    com.tkay.expressad.videocommon.a.a(com.tkay.expressad.foundation.g.a.aU);
                } else {
                    com.tkay.expressad.videocommon.a.b(com.tkay.expressad.foundation.g.a.aU);
                }
            } else if (z3) {
                com.tkay.expressad.videocommon.a.a(94);
            } else {
                com.tkay.expressad.videocommon.a.b(94);
            }
            com.tkay.expressad.videocommon.a.a();
            com.tkay.expressad.videocommon.a.b();
        } catch (Throwable unused) {
        }
    }

    private static void a(boolean z2, boolean z3, String str) {
        try {
            if (c != null) {
                c.clear();
            }
            if (z2) {
                if (z3) {
                    com.tkay.expressad.videocommon.a.a(com.tkay.expressad.foundation.g.a.aU);
                } else {
                    com.tkay.expressad.videocommon.a.b(com.tkay.expressad.foundation.g.a.aU);
                }
            } else if (z3) {
                com.tkay.expressad.videocommon.a.a(94);
            } else {
                com.tkay.expressad.videocommon.a.b(94);
            }
            com.tkay.expressad.videocommon.a.c(str);
            com.tkay.expressad.videocommon.a.b();
        } catch (Throwable unused) {
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.reward.b.a$a, reason: collision with other inner class name */
    public class RunnableC0473a implements Runnable {
        private com.tkay.expressad.reward.a.a b;
        private int c = 1;
        private boolean d = true;

        public RunnableC0473a(com.tkay.expressad.reward.a.a aVar) {
            this.b = aVar;
        }

        @Override // java.lang.Runnable
        public final void run() {
            StringBuilder sb = new StringBuilder("adSource=");
            sb.append(this.c);
            sb.append(" CommonCancelTimeTask mIsDevCall:");
            sb.append(this.d);
            a.this.b("v3 is timeout");
        }
    }

    public class b implements com.tkay.expressad.reward.a.b {
        private com.tkay.expressad.reward.a.a b;
        private boolean c = true;
        private Runnable d;

        public b(com.tkay.expressad.reward.a.a aVar) {
            this.b = aVar;
        }

        private Runnable c() {
            return this.d;
        }

        public final void a(Runnable runnable) {
            this.d = runnable;
        }

        @Override // com.tkay.expressad.reward.a.b
        public final void b() {
            if (this.d != null) {
                a.this.x.removeCallbacks(this.d);
            }
            if (a.this.q != null) {
                c.c(a.this.q, a.this.t, a.this.s);
            }
        }

        @Override // com.tkay.expressad.reward.a.b
        public final void a() {
            if (this.d != null) {
                a.this.x.removeCallbacks(this.d);
            }
            if (a.this.q != null) {
                c.a(a.this.q, a.this.t, a.this.s);
            }
        }

        @Override // com.tkay.expressad.reward.a.b
        public final void a(String str) {
            if (this.d != null) {
                a.this.x.removeCallbacks(this.d);
            }
            com.tkay.expressad.reward.a.a aVar = this.b;
            if (aVar != null) {
                aVar.a(null);
                this.b = null;
            }
            if (a.this.q != null) {
                c.a(a.this.q, str);
            }
        }
    }
}
