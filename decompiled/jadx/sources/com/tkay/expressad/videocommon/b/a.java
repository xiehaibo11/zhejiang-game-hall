package com.tkay.expressad.videocommon.b;

import android.content.Context;
import android.net.ConnectivityManager;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import com.tkay.core.common.res.a.a;
import com.tkay.expressad.foundation.g.f.d.b;
import java.io.File;
import java.io.Serializable;
import java.math.BigDecimal;
import java.net.URLEncoder;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.ExecutorService;

/* JADX INFO: loaded from: classes3.dex */
public class a implements Serializable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f7453a = "2000077";
    protected static final String b = "CampaignDownLoadTask";
    private static final long d = -510642107992871538L;
    private static final int e = 1;
    private static final int f = 2000;
    private static final int h = 1;
    private static final int i = 2;
    private static final int j = 3;
    private static final int k = 4;
    private static final int l = 5;
    private static final String m = "errorMsg";
    private static final int p = 10010;
    private Object A;
    private Class B;
    private Object C;
    private com.tkay.expressad.foundation.d.c D;
    private String E;
    private Context G;
    private long H;
    private String I;
    private String L;
    private long O;
    private com.tkay.expressad.videocommon.d.b P;
    private com.tkay.expressad.videocommon.d.b Q;
    private String U;
    private b.a V;
    private int Z;
    m c;
    private boolean o;
    private int q;
    private String r;
    private String s;
    private Runnable t;
    private d w;
    private ExecutorService x;
    private o y;
    private Class z;
    private boolean g = false;
    private int n = 1;
    private volatile int u = 0;
    private CopyOnWriteArrayList<d> v = new CopyOnWriteArrayList<>();
    private boolean F = false;
    private long J = 0;
    private int K = 0;
    private boolean M = false;
    private boolean N = false;
    private int R = 100;
    private boolean S = false;
    private boolean T = false;
    private int W = 1;
    private d X = new d() { // from class: com.tkay.expressad.videocommon.b.a.1
        @Override // com.tkay.expressad.videocommon.b.d
        public final void a(long j2, int i2) {
            if (a.this.F) {
                return;
            }
            a.a(a.this, j2, i2);
        }
    };
    private Handler Y = new Handler(Looper.getMainLooper()) { // from class: com.tkay.expressad.videocommon.b.a.2
        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            int i2 = message.what;
            if (i2 == 1) {
                a aVar = a.this;
                a.a(aVar, aVar.J, a.this.u);
                return;
            }
            if (i2 == 2) {
                if (a.this.u != 2) {
                    a.this.u = 2;
                    a aVar2 = a.this;
                    a.a(aVar2, aVar2.J, a.this.u);
                    return;
                }
                return;
            }
            if (i2 == 3) {
                if (a.this.u == 4 || a.this.u == 2 || a.this.u == 5) {
                    return;
                }
                a.this.u = 4;
                a aVar3 = a.this;
                a.a(aVar3, aVar3.J, a.this.u);
                return;
            }
            if (i2 == 4) {
                a.this.u = 5;
                a.d(a.this);
                a aVar4 = a.this;
                a.a(aVar4, aVar4.J, a.this.u);
                return;
            }
            if (i2 == 5) {
                a.this.h();
            } else if (i2 == 10010 && message.obj != null) {
                a.s();
            }
        }
    };

    private static void B() {
    }

    private static void z() {
    }

    static /* synthetic */ boolean d(a aVar) {
        aVar.g = false;
        return false;
    }

    public final void a(int i2) {
        this.n = i2;
    }

    public final void b(int i2) {
        this.q = i2;
    }

    public final void c(int i2) {
        this.W = i2;
        new StringBuilder("mVideoCtnType:").append(this.W);
    }

    public final String a() {
        return this.I;
    }

    public a(Context context, com.tkay.expressad.foundation.d.c cVar, ExecutorService executorService, String str) {
        this.o = false;
        if (context == null && cVar == null) {
            return;
        }
        this.O = System.currentTimeMillis();
        this.G = com.tkay.expressad.foundation.b.b.b().d();
        this.D = cVar;
        this.E = str;
        this.x = executorService;
        if (cVar != null) {
            this.I = cVar.S();
        }
        this.U = com.tkay.expressad.foundation.h.m.d(this.I);
        l.a();
        this.L = l.a(this.I);
        this.o = false;
        try {
            if (!TextUtils.isEmpty(this.I) && this.n != 3) {
                x();
            }
        } catch (Exception e2) {
            e2.getMessage();
        }
    }

    public final boolean b() {
        return this.T;
    }

    public final void a(boolean z) {
        if (!z) {
            this.o = false;
        }
        this.T = z;
    }

    public final long c() {
        return this.O;
    }

    public final void b(boolean z) {
        this.N = z;
    }

    public final boolean d() {
        return this.N;
    }

    public final String e() {
        return this.L;
    }

    public final long f() {
        return this.H;
    }

    private void t() {
        try {
            if (!TextUtils.isEmpty(this.I) && this.n != 3) {
                x();
            }
        } catch (Exception e2) {
            e2.getMessage();
        }
    }

    private void u() {
        if (this.c == null) {
            m mVar = new m(this.I, this.R, this.W);
            this.c = mVar;
            mVar.a(new a.AbstractC0425a() { // from class: com.tkay.expressad.videocommon.b.a.3
                @Override // com.tkay.core.common.res.a.a.AbstractC0425a
                public final boolean a(int i2, long j2, long j3) {
                    if (a.this.H != j3) {
                        a.this.H = j3;
                    }
                    a aVar = a.this;
                    a.a(aVar, j2, aVar.u);
                    if (i2 < a.this.R) {
                        if (a.this.u != 2 && a.this.u != 4) {
                            return false;
                        }
                        int i3 = a.this.u == 4 ? 3 : 2;
                        Message messageObtain = Message.obtain();
                        messageObtain.what = i3;
                        a.this.Y.sendMessage(messageObtain);
                        return true;
                    }
                    a.this.g();
                    a.this.q();
                    return true;
                }

                @Override // com.tkay.core.common.res.a.a.AbstractC0425a
                public final void a(String str, String str2) {
                    a.a(a.this, "errorCode:" + str + ",errorMsg:" + str2);
                }
            });
        }
    }

    private void v() {
        if (this.S) {
            return;
        }
        this.S = true;
        com.tkay.expressad.videocommon.d.b bVar = this.P;
        if (bVar != null) {
            bVar.a(this.I);
        }
        com.tkay.expressad.videocommon.d.b bVar2 = this.Q;
        if (bVar2 != null) {
            bVar2.a(this.I);
        }
    }

    private static double a(double d2, double d3, int i2) throws IllegalAccessException {
        if (i2 < 0) {
            throw new IllegalAccessException("Accuracy cannot be less than 0");
        }
        return new BigDecimal(Double.toString(d2)).divide(new BigDecimal(Double.toString(d3)), i2, 4).doubleValue();
    }

    public final void g() {
        Message messageObtain = Message.obtain();
        this.u = 5;
        messageObtain.what = 4;
        this.Y.sendMessage(messageObtain);
    }

    private void b(String str) {
        com.tkay.expressad.videocommon.d.b bVar = this.P;
        if (bVar != null) {
            bVar.a(str, this.I);
        }
        com.tkay.expressad.videocommon.d.b bVar2 = this.Q;
        if (bVar2 != null) {
            bVar2.a(str, this.I);
        }
        this.u = 4;
        Message messageObtain = Message.obtain();
        messageObtain.what = 3;
        this.Y.sendMessage(messageObtain);
    }

    public final void h() {
        if (TextUtils.isEmpty(this.I)) {
            return;
        }
        if (this.u == 5) {
            v();
            return;
        }
        if (this.n == 3) {
            g();
            return;
        }
        if (this.R == 0) {
            g();
            return;
        }
        x();
        u();
        if (this.c != null) {
            this.u = 1;
            this.F = true;
            this.c.a();
        }
    }

    public final void i() {
        x();
        u();
        if (this.c != null) {
            this.u = 1;
            this.F = true;
            this.c.b();
        }
    }

    private boolean w() {
        return this.F;
    }

    public final void j() {
        A();
        this.u = 4;
    }

    public final int k() {
        return this.u;
    }

    public final void l() {
        this.u = 0;
    }

    public final String m() {
        if (this.n == 3) {
            return "";
        }
        File file = new File(this.L);
        try {
            return file.length() > 0 ? file.canRead() ? file.length() > 0 ? "" : "file length is 0 " : "file can not read " : "file is not exist ";
        } catch (Throwable th) {
            String message = th.getMessage();
            if (!com.tkay.expressad.b.f6449a) {
                return message;
            }
            th.printStackTrace();
            return message;
        }
    }

    public final com.tkay.expressad.foundation.d.c n() {
        return this.D;
    }

    public final void a(com.tkay.expressad.foundation.d.c cVar) {
        this.D = cVar;
    }

    private void x() {
        com.tkay.core.common.a.i iVarA;
        l.a();
        this.L = l.a(this.I);
        File file = new File(this.L);
        if (file.length() > 0) {
            this.J = file.length();
        } else {
            this.J = 0L;
        }
        if (this.H != 0 || (iVarA = com.tkay.core.common.a.j.a().a(this.I)) == null) {
            return;
        }
        this.H = iVarA.d();
    }

    public final void a(com.tkay.expressad.videocommon.d.b bVar) {
        this.P = bVar;
    }

    private void b(com.tkay.expressad.videocommon.d.b bVar) {
        this.Q = bVar;
    }

    public final void d(int i2) {
        this.R = i2;
        new StringBuilder("mReadyRate:").append(this.R);
    }

    private void b(d dVar) {
        CopyOnWriteArrayList<d> copyOnWriteArrayList = this.v;
        if (copyOnWriteArrayList != null) {
            copyOnWriteArrayList.add(dVar);
        }
    }

    public final void a(d dVar) {
        this.w = dVar;
    }

    private void a(long j2, int i2) {
        this.J = j2;
        int i3 = this.R;
        if (100 * j2 >= ((long) i3) * this.H && !this.S && i2 != 4) {
            if (i3 == 100 && i2 != 5) {
                this.u = 5;
                return;
            }
            v();
        }
        if (this.F) {
            CopyOnWriteArrayList<d> copyOnWriteArrayList = this.v;
            if (copyOnWriteArrayList != null) {
                for (d dVar : copyOnWriteArrayList) {
                    if (dVar != null) {
                        dVar.a(j2, i2);
                    }
                }
            }
            if (this.w != null) {
                if (this.u == 5 || this.u == 4 || this.u == 2 || this.u == 6) {
                    this.w.a(j2, i2);
                    this.w = null;
                }
            }
        }
    }

    public final void o() {
        if (this.v != null) {
            this.v = null;
        }
    }

    public final long p() {
        return this.J;
    }

    private d y() {
        return this.X;
    }

    private void c(String str) {
        this.K++;
        try {
            if (this.G != null) {
                Object systemService = this.G.getSystemService("connectivity");
                ConnectivityManager connectivityManager = systemService instanceof ConnectivityManager ? (ConnectivityManager) systemService : null;
                if (connectivityManager != null && connectivityManager.getActiveNetworkInfo() != null) {
                    if (!connectivityManager.getActiveNetworkInfo().isAvailable()) {
                        return;
                    }
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        if (this.K <= 1) {
            this.Y.sendEmptyMessageDelayed(5, 2000L);
            return;
        }
        A();
        com.tkay.expressad.videocommon.d.b bVar = this.P;
        if (bVar != null) {
            bVar.a(str, this.I);
        }
        com.tkay.expressad.videocommon.d.b bVar2 = this.Q;
        if (bVar2 != null) {
            bVar2.a(str, this.I);
        }
        this.u = 4;
        Message messageObtain = Message.obtain();
        messageObtain.what = 3;
        this.Y.sendMessage(messageObtain);
    }

    private void A() {
        try {
            if (this.z == null || this.A == null) {
                Class<?> cls = Class.forName("com.tkay.expressad.reward.b.a");
                this.z = cls;
                this.A = cls.newInstance();
                this.z.getMethod("insertExcludeId", String.class, com.tkay.expressad.foundation.d.c.class).invoke(this.A, this.E, this.D);
            }
            if (this.B == null || this.C == null) {
                Class<?> cls2 = Class.forName("com.tkay.expressad.atnative.controller.NativeController");
                this.B = cls2;
                this.C = cls2.newInstance();
                this.B.getMethod("insertExcludeId", String.class, com.tkay.expressad.foundation.d.c.class).invoke(this.C, this.E, this.D);
            }
        } catch (Exception e2) {
            e2.getMessage();
        }
    }

    public final void e(int i2) {
        this.Z = i2;
    }

    private void C() {
        String str;
        Message messageObtain = Message.obtain();
        messageObtain.what = 10010;
        if (this.D == null || TextUtils.isEmpty(this.E) || TextUtils.isEmpty(this.D.Z()) || TextUtils.isEmpty(this.D.S())) {
            str = "";
        } else {
            str = "key=2000077&unit_id=" + this.E + "&request_id=" + this.D.Z() + "&request_id_notice=" + this.D.aa() + "&package_name=" + com.tkay.expressad.foundation.b.b.b().a() + "&app_id=" + com.tkay.expressad.foundation.b.b.b().e() + "&video_url=" + URLEncoder.encode(this.D.S()) + "&process_size=" + this.J + "&file_size=" + this.H + "&ready_rate=" + this.R + "&cd_rate=" + this.q + "&cid=" + this.D.aZ() + "&type=" + this.u;
        }
        messageObtain.obj = str;
        this.Y.sendMessage(messageObtain);
    }

    public final void a(String str) {
        this.r = str;
    }

    public final String r() {
        return this.r;
    }

    private static void D() {
        com.tkay.expressad.foundation.b.b.b().d();
    }

    private String E() {
        if (this.D == null || TextUtils.isEmpty(this.E) || TextUtils.isEmpty(this.D.Z()) || TextUtils.isEmpty(this.D.S())) {
            return "";
        }
        return "key=2000077&unit_id=" + this.E + "&request_id=" + this.D.Z() + "&request_id_notice=" + this.D.aa() + "&package_name=" + com.tkay.expressad.foundation.b.b.b().a() + "&app_id=" + com.tkay.expressad.foundation.b.b.b().e() + "&video_url=" + URLEncoder.encode(this.D.S()) + "&process_size=" + this.J + "&file_size=" + this.H + "&ready_rate=" + this.R + "&cd_rate=" + this.q + "&cid=" + this.D.aZ() + "&type=" + this.u;
    }

    public final void q() {
        String str;
        Message messageObtain = Message.obtain();
        messageObtain.what = 10010;
        if (this.D == null || TextUtils.isEmpty(this.E) || TextUtils.isEmpty(this.D.Z()) || TextUtils.isEmpty(this.D.S())) {
            str = "";
        } else {
            str = "key=2000077&unit_id=" + this.E + "&request_id=" + this.D.Z() + "&request_id_notice=" + this.D.aa() + "&package_name=" + com.tkay.expressad.foundation.b.b.b().a() + "&app_id=" + com.tkay.expressad.foundation.b.b.b().e() + "&video_url=" + URLEncoder.encode(this.D.S()) + "&process_size=" + this.J + "&file_size=" + this.H + "&ready_rate=" + this.R + "&cd_rate=" + this.q + "&cid=" + this.D.aZ() + "&type=" + this.u;
        }
        messageObtain.obj = str;
        this.Y.sendMessage(messageObtain);
    }

    static /* synthetic */ void a(a aVar, long j2, int i2) {
        aVar.J = j2;
        int i3 = aVar.R;
        if (100 * j2 >= ((long) i3) * aVar.H && !aVar.S && i2 != 4) {
            if (i3 == 100 && i2 != 5) {
                aVar.u = 5;
                return;
            }
            aVar.v();
        }
        if (aVar.F) {
            CopyOnWriteArrayList<d> copyOnWriteArrayList = aVar.v;
            if (copyOnWriteArrayList != null) {
                for (d dVar : copyOnWriteArrayList) {
                    if (dVar != null) {
                        dVar.a(j2, i2);
                    }
                }
            }
            if (aVar.w != null) {
                if (aVar.u == 5 || aVar.u == 4 || aVar.u == 2 || aVar.u == 6) {
                    aVar.w.a(j2, i2);
                    aVar.w = null;
                }
            }
        }
    }

    static /* synthetic */ void s() {
        com.tkay.expressad.foundation.b.b.b().d();
    }

    static /* synthetic */ void a(a aVar, String str) {
        aVar.K++;
        try {
            if (aVar.G != null) {
                Object systemService = aVar.G.getSystemService("connectivity");
                ConnectivityManager connectivityManager = systemService instanceof ConnectivityManager ? (ConnectivityManager) systemService : null;
                if (connectivityManager != null && connectivityManager.getActiveNetworkInfo() != null) {
                    if (!connectivityManager.getActiveNetworkInfo().isAvailable()) {
                        return;
                    }
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
        if (aVar.K <= 1) {
            aVar.Y.sendEmptyMessageDelayed(5, 2000L);
            return;
        }
        aVar.A();
        com.tkay.expressad.videocommon.d.b bVar = aVar.P;
        if (bVar != null) {
            bVar.a(str, aVar.I);
        }
        com.tkay.expressad.videocommon.d.b bVar2 = aVar.Q;
        if (bVar2 != null) {
            bVar2.a(str, aVar.I);
        }
        aVar.u = 4;
        Message messageObtain = Message.obtain();
        messageObtain.what = 3;
        aVar.Y.sendMessage(messageObtain);
    }
}
