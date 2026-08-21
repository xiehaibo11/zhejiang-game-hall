package com.tkay.expressad.a;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.util.Log;
import android.webkit.URLUtil;
import com.tkay.expressad.a.c;
import com.tkay.expressad.a.f;
import com.tkay.expressad.a.g;
import com.tkay.expressad.foundation.g.g.a;
import com.tkay.expressad.foundation.h.s;
import java.net.URI;
import java.util.concurrent.Semaphore;

public final class h extends d implements a.b {
    public static final int a = 1;
    public static final int i = 2;
    private static final String j = "302";
    private e m;
    private c.b n;
    private boolean p;
    private Context q;
    private com.tkay.expressad.foundation.g.g.c r;
    private f.a s;
    private boolean k = false;
    private long l = 0;
    private boolean o = true;
    private Handler t = new Handler(Looper.getMainLooper());
    private boolean u = true;

    static boolean f(h hVar) {
        hVar.k = true;
        return true;
    }

    private boolean a() {
        return this.o;
    }

    public h(Context context) {
        this.q = context;
        this.r = new com.tkay.expressad.foundation.g.g.c(context, 2);
    }

    public final void a(String str, e eVar, boolean z, String str2, String str3, String str4, com.tkay.expressad.c.b bVar, com.tkay.expressad.foundation.d.c cVar, boolean z2, boolean z3, int i2) {
        this.m = eVar;
        this.p = z;
        this.r.a(new a(this.q, str, str2, str3, str4, bVar, cVar, z2, z3, i2), this);
    }

    @Override
    public final void b() {
        this.o = false;
    }

    private class a extends com.tkay.expressad.foundation.g.g.a {
        private static final int h = 10;
        private final Context f;
        private String g;
        private String i;
        private String j;
        private String k;
        private com.tkay.expressad.c.b l;
        private com.tkay.expressad.foundation.d.c m;
        private boolean n;
        private boolean o;
        private int p;
        private final Semaphore e = new Semaphore(0);
        private g.a q = new g.a() {
            @Override
            public final boolean a(String str) {
                boolean zA = a.this.a(str);
                a.a(a.this, false, true);
                if (zA) {
                    b();
                }
                return zA;
            }

            @Override
            public final boolean b(String str) {
                boolean zA = a.this.a(str);
                a.a(a.this, false, true);
                if (zA) {
                    a.a(a.this, true, true);
                    b();
                }
                return zA;
            }

            @Override
            public final boolean a() {
                a.a(a.this, false, false);
                return false;
            }

            @Override
            public final void a(String str, String str2) {
                a.this.a(str);
                h.this.n.c(str2);
                a.a(a.this, true, false);
                b();
            }

            private void b() {
                synchronized (h.this) {
                    h.this.n.a(true);
                    a.a(a.this);
                }
            }

            @Override
            public final void a(String str, String str2, String str3) {
                if (!TextUtils.isEmpty(str2)) {
                    h.this.n.b(str2);
                }
                if (!TextUtils.isEmpty(str3)) {
                    h.this.n.c(str3);
                }
                a.this.a(str);
                a.a(a.this, true, false);
                b();
            }
        };

        private static boolean a(int i) {
            return i == 200;
        }

        private static boolean b(int i) {
            return i == 301 || i == 302 || i == 307;
        }

        @Override
        public final void b() {
        }

        @Override
        public final void c() {
        }

        private void d() {
            this.e.acquireUninterruptibly();
        }

        private void h() {
            this.e.release();
        }

        public a(Context context, String str, String str2, String str3, String str4, com.tkay.expressad.c.b bVar, com.tkay.expressad.foundation.d.c cVar, boolean z, boolean z2, int i) {
            this.f = context;
            this.g = str;
            this.i = str2;
            this.j = str3;
            this.k = str4;
            this.l = bVar;
            this.m = cVar;
            this.n = z;
            this.o = z2;
            this.p = i;
        }

        /* JADX WARN: Code restructure failed: missing block: B:63:0x0177, code lost:
        
            r3.b(true);
            r3.e(r7);
         */
        /* JADX WARN: Removed duplicated region for block: B:102:0x021e A[EDGE_INSN: B:102:0x021e->B:92:0x021e BREAK  A[LOOP:0: B:20:0x0055->B:78:0x01ca], SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:22:0x0059  */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        private c.b a(String str, boolean z, boolean z2, com.tkay.expressad.foundation.d.c cVar, int i) {
            String scheme;
            String host;
            String str2;
            int i2;
            String strU;
            String strU2 = str;
            String scheme2 = "";
            if (h.this.p) {
                String strA = com.tkay.expressad.d.a.a(this.f, strU2);
                if (!TextUtils.isEmpty(strA)) {
                    strU2 = strU2 + strA;
                }
            }
            com.tkay.expressad.foundation.d.c cVar2 = this.m;
            if (cVar2 != null) {
                strU2 = cVar2.u(strU2);
            }
            c.b bVar = new c.b();
            f fVar = new f();
            try {
            } catch (Exception unused) {
                scheme = "";
            }
            if (b(strU2)) {
                host = "";
                str2 = strU2;
                i2 = 0;
                while (true) {
                    if (i2 < 10) {
                        break;
                    }
                    if (!h.this.o) {
                        return null;
                    }
                    System.currentTimeMillis();
                    h.this.s = fVar.a(str2, z, z2, cVar);
                    System.currentTimeMillis();
                    if (h.this.s != null) {
                        if (!TextUtils.isEmpty(h.this.s.h)) {
                            bVar.e(str2);
                            bVar.b(h.this.s.h);
                            bVar.b(1);
                            bVar.a(h.this.s.a());
                            bVar.a(false);
                            if (i2 == 0) {
                                com.tkay.expressad.a.a.a.a().a(str2, h.this.s.h, cVar, this.k, z, z2, i);
                            }
                            if (this.l != null) {
                                int i3 = com.tkay.expressad.c.a.a;
                                f.a unused2 = h.this.s;
                                f.a unused3 = h.this.s;
                                f.a unused4 = h.this.s;
                            }
                        } else {
                            bVar.a(true);
                            if (this.l != null) {
                                int i4 = com.tkay.expressad.c.a.a;
                                f.a unused5 = h.this.s;
                                f.a unused6 = h.this.s;
                                f.a unused7 = h.this.s;
                            }
                            int i5 = h.this.s.f;
                            if (!(i5 == 301 || i5 == 302 || i5 == 307)) {
                                if (h.this.s.f == 200) {
                                    bVar.b(true);
                                    bVar.e(str2);
                                    bVar.c(h.this.s.g != null ? h.this.s.g : null);
                                } else {
                                    bVar.b(false);
                                    bVar.e(str2);
                                    if (i2 == 0) {
                                        com.tkay.expressad.a.a.a.a().a(str2, h.this.s.h, cVar, this.k, z, z2, i);
                                    }
                                }
                            } else {
                                bVar.b();
                                if (!TextUtils.isEmpty(h.this.s.a)) {
                                    strU = h.this.s.a;
                                    if (!b(strU)) {
                                        if (!b(strU)) {
                                            try {
                                                URI uriCreate = URI.create(strU);
                                                scheme2 = uriCreate.getScheme();
                                                host = uriCreate.getHost();
                                            } catch (Exception unused8) {
                                            }
                                        }
                                    } else {
                                        if (!strU.startsWith("/") || TextUtils.isEmpty(scheme2) || TextUtils.isEmpty(host)) {
                                            break;
                                        }
                                        strU = scheme2 + "://" + host + strU;
                                        scheme2 = null;
                                        host = null;
                                    }
                                    if (!s.a.a(strU)) {
                                        if (h.this.p) {
                                            String strA2 = com.tkay.expressad.d.a.a(this.f, strU);
                                            if (!TextUtils.isEmpty(strA2)) {
                                                strU = strU + strA2;
                                            }
                                        }
                                        com.tkay.expressad.foundation.d.c cVar3 = this.m;
                                        if (cVar3 != null) {
                                            strU = cVar3.u(strU);
                                        }
                                        str2 = strU;
                                        i2++;
                                    } else {
                                        bVar.b(true);
                                        bVar.e(strU);
                                        break;
                                    }
                                } else {
                                    bVar.b(true);
                                    bVar.e(str2);
                                    break;
                                }
                            }
                        }
                    } else {
                        bVar.e(str2);
                        bVar.a(false);
                        if (this.l != null) {
                            int i6 = com.tkay.expressad.c.a.a;
                        }
                    }
                }
                return bVar;
            }
            URI uriCreate2 = URI.create(strU2);
            scheme = uriCreate2.getScheme();
            try {
                scheme2 = uriCreate2.getHost();
            } catch (Exception unused9) {
            }
            host = scheme2;
            scheme2 = scheme;
            str2 = strU2;
            i2 = 0;
            while (true) {
                if (i2 < 10) {
                }
                str2 = strU;
                i2++;
            }
            return bVar;
        }

        private void a(boolean z, boolean z2) {
            if (h.this.l == 0) {
                h.this.l = System.currentTimeMillis();
            } else {
                h.this.l = System.currentTimeMillis();
            }
            if (!z) {
                if (this.l != null) {
                    int i = com.tkay.expressad.c.a.b;
                }
            } else {
                if (z2) {
                    if (this.l == null || h.this.k) {
                        return;
                    }
                    h.f(h.this);
                    int i2 = com.tkay.expressad.c.a.b;
                    return;
                }
                if (this.l == null || h.this.k) {
                    return;
                }
                h.f(h.this);
                int i3 = com.tkay.expressad.c.a.b;
            }
        }

        private boolean a(String str) {
            com.tkay.expressad.foundation.d.c cVar = this.m;
            if (cVar != null) {
                cVar.Q();
            }
            if (s.a.a(str)) {
                h.this.n.c(1);
                h.this.n.e(str);
                h.this.n.b(true);
                return true;
            }
            if (e(str)) {
                h.this.n.c(3);
                h.this.n.e(str);
                h.this.n.b(true);
                return true;
            }
            h.this.n.c(2);
            h.this.n.e(str);
            return false;
        }

        private static boolean b(String str) {
            return !URLUtil.isNetworkUrl(str);
        }

        private static boolean c(String str) {
            return str.startsWith("/");
        }

        private static boolean d(String str) {
            return s.a.a(str);
        }

        private static boolean e(String str) {
            return !TextUtils.isEmpty(str) && str.toLowerCase().contains("apk");
        }

        @Override
        public final void a() {
            if (h.this.m != null) {
                e unused = h.this.m;
            }
            h.this.n = new c.b();
            h.this.n.e(this.g);
            h.this.n = a(this.g, this.n, this.o, this.m, this.p);
            if (!TextUtils.isEmpty(h.this.n.e())) {
                h.this.n.a(true);
            }
            if (h.this.o && h.this.n.g()) {
                if (h.this.s != null) {
                    h.this.n.a(h.this.s.f);
                }
                if (!e(h.this.n.j()) && !s.a.a(h.this.n.j()) && 200 == h.this.s.f && !TextUtils.isEmpty(h.this.n.f()) && !h.this.n.f().contains(com.tkay.expressad.foundation.g.a.bU)) {
                    h.this.n.b(2);
                    if (TextUtils.isEmpty(h.this.n.f())) {
                        try {
                            new g(h.this.u).a(this.i, this.j, this.k, this.f, h.this.n.j(), this.q);
                        } catch (Exception unused2) {
                        }
                    } else {
                        Log.e(h.j, "startWebViewHtmlParser");
                        new g(h.this.u).a(this.i, this.j, this.k, this.f, h.this.n.j(), h.this.n.f(), this.q);
                    }
                    this.e.acquireUninterruptibly();
                    return;
                }
                if (this.l != null) {
                    h.this.n.j();
                    int i = com.tkay.expressad.c.a.a;
                }
                if (h.this.s != null) {
                    h.this.n.b(1);
                    h.this.n.b(h.this.s.h);
                    h.this.n.a(h.this.s.f);
                    h.this.n.a(h.this.s.a());
                    h.this.n.c(h.this.s.g);
                }
                a(h.this.n.j());
            }
        }

        static void a(a aVar, boolean z, boolean z2) {
            if (h.this.l == 0) {
                h.this.l = System.currentTimeMillis();
            } else {
                h.this.l = System.currentTimeMillis();
            }
            if (!z) {
                if (aVar.l != null) {
                    int i = com.tkay.expressad.c.a.b;
                }
            } else {
                if (z2) {
                    if (aVar.l == null || h.this.k) {
                        return;
                    }
                    h.f(h.this);
                    int i2 = com.tkay.expressad.c.a.b;
                    return;
                }
                if (aVar.l == null || h.this.k) {
                    return;
                }
                h.f(h.this);
                int i3 = com.tkay.expressad.c.a.b;
            }
        }

        static void a(a aVar) {
            aVar.e.release();
        }
    }

    @Override
    public final void a(a.a aVar) {
        if (aVar == a.a.e && this.o) {
            this.t.post(new Runnable() {
                @Override
                public final void run() {
                    if (h.this.m != null) {
                        if (h.this.n.g()) {
                            e unused = h.this.m;
                            c.b unused2 = h.this.n;
                        } else {
                            e unused3 = h.this.m;
                            c.b unused4 = h.this.n;
                            h.this.n.h();
                        }
                    }
                }
            });
        }
    }
}
