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
import java.util.concurrent.Semaphore;

/* JADX INFO: loaded from: classes3.dex */
public final class h extends d implements a.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6348a = 1;
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

    static /* synthetic */ boolean f(h hVar) {
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

    @Override // com.tkay.expressad.a.d
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
        private g.a q = new g.a() { // from class: com.tkay.expressad.a.h.a.1
            @Override // com.tkay.expressad.a.g.a
            public final boolean a(String str) {
                boolean zA = a.this.a(str);
                a.a(a.this, false, true);
                if (zA) {
                    b();
                }
                return zA;
            }

            @Override // com.tkay.expressad.a.g.a
            public final boolean b(String str) {
                boolean zA = a.this.a(str);
                a.a(a.this, false, true);
                if (zA) {
                    a.a(a.this, true, true);
                    b();
                }
                return zA;
            }

            @Override // com.tkay.expressad.a.g.a
            public final boolean a() {
                a.a(a.this, false, false);
                return false;
            }

            @Override // com.tkay.expressad.a.g.a
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

            @Override // com.tkay.expressad.a.g.a
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

        @Override // com.tkay.expressad.foundation.g.g.a
        public final void b() {
        }

        @Override // com.tkay.expressad.foundation.g.g.a
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
            To view partially-correct add '--show-bad-code' argument
        */
        private com.tkay.expressad.a.c.b a(java.lang.String r16, boolean r17, boolean r18, com.tkay.expressad.foundation.d.c r19, int r20) {
            /*
                Method dump skipped, instruction units count: 543
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.a.h.a.a(java.lang.String, boolean, boolean, com.tkay.expressad.foundation.d.c, int):com.tkay.expressad.a.c$b");
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

        /* JADX INFO: Access modifiers changed from: private */
        public boolean a(String str) {
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

        @Override // com.tkay.expressad.foundation.g.g.a
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
                    int i = com.tkay.expressad.c.a.f6453a;
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

        static /* synthetic */ void a(a aVar, boolean z, boolean z2) {
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

        static /* synthetic */ void a(a aVar) {
            aVar.e.release();
        }
    }

    @Override // com.tkay.expressad.foundation.g.g.a.b
    public final void a(a.EnumC0465a enumC0465a) {
        if (enumC0465a == a.EnumC0465a.FINISH && this.o) {
            this.t.post(new Runnable() { // from class: com.tkay.expressad.a.h.1
                @Override // java.lang.Runnable
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
