package com.tkay.expressad.exoplayer.h.a;

import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.view.ViewGroup;
import com.tkay.expressad.exoplayer.ae;
import com.tkay.expressad.exoplayer.h.a.b;
import com.tkay.expressad.exoplayer.h.f;
import com.tkay.expressad.exoplayer.h.l;
import com.tkay.expressad.exoplayer.h.o;
import com.tkay.expressad.exoplayer.h.r;
import com.tkay.expressad.exoplayer.h.s;
import com.tkay.expressad.exoplayer.j.h;
import com.tkay.expressad.exoplayer.j.k;
import java.io.IOException;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public final class c extends f<s.a> {
    private static final String a = "AdsMediaSource";
    private final s b;
    private final e c;
    private final com.tkay.expressad.exoplayer.h.a.b d;
    private final ViewGroup e;
    private final Handler f;
    private final d g;
    private final Handler h;
    private final Map<s, List<l>> i;
    private final ae.a j;
    private c k;
    private ae l;
    private Object m;
    private com.tkay.expressad.exoplayer.h.a.a n;
    private s[][] o;
    private long[][] p;

    @Deprecated
    public interface d {
        void a();

        void b();

        void c();

        void d();
    }

    public interface e {
        int[] a();

        s b(Uri uri);
    }

    @Override
    protected final s.a a(s.a aVar, s.a aVar2) {
        s.a aVar3 = aVar;
        return aVar3.a() ? aVar3 : aVar2;
    }

    @Override
    protected final void a(s.a aVar, s sVar, ae aeVar, Object obj) {
        s.a aVar2 = aVar;
        if (aVar2.a()) {
            int i = aVar2.b;
            int i2 = aVar2.c;
            com.tkay.expressad.exoplayer.k.a.a(aeVar.c() == 1);
            this.p[i][i2] = aeVar.a(0, this.j, false).d;
            if (this.i.containsKey(sVar)) {
                List<l> list = this.i.get(sVar);
                for (int i3 = 0; i3 < list.size(); i3++) {
                    list.get(i3).f();
                }
                this.i.remove(sVar);
            }
            c();
            return;
        }
        this.l = aeVar;
        this.m = obj;
        c();
    }

    public static final class a extends IOException {
        public static final int a = 0;
        public static final int b = 1;
        public static final int c = 2;
        public static final int d = 3;
        public final int e;

        @Retention(RetentionPolicy.SOURCE)
        public @interface a {
        }

        public static a a(Exception exc) {
            return new a(0, exc);
        }

        private static a a(Exception exc, int i) {
            return new a(1, new IOException("Failed to load ad group ".concat(String.valueOf(i)), exc));
        }

        private static a b(Exception exc) {
            return new a(2, exc);
        }

        private static a a(RuntimeException runtimeException) {
            return new a(3, runtimeException);
        }

        private a(int i, Exception exc) {
            super(exc);
            this.e = i;
        }

        private RuntimeException a() {
            com.tkay.expressad.exoplayer.k.a.b(this.e == 3);
            return (RuntimeException) getCause();
        }
    }

    private c(s sVar, h.a aVar, com.tkay.expressad.exoplayer.h.a.b bVar, ViewGroup viewGroup) {
        this(sVar, new o.c(aVar), bVar, viewGroup, (Handler) null, (d) null);
    }

    private c(s sVar, e eVar, com.tkay.expressad.exoplayer.h.a.b bVar, ViewGroup viewGroup) {
        this(sVar, eVar, bVar, viewGroup, (Handler) null, (d) null);
    }

    @Deprecated
    private c(s sVar, h.a aVar, com.tkay.expressad.exoplayer.h.a.b bVar, ViewGroup viewGroup, Handler handler, d dVar) {
        this(sVar, new o.c(aVar), bVar, viewGroup, handler, dVar);
    }

    @Deprecated
    private c(s sVar, e eVar, com.tkay.expressad.exoplayer.h.a.b bVar, ViewGroup viewGroup, Handler handler, d dVar) {
        this.b = sVar;
        this.c = eVar;
        this.d = bVar;
        this.e = viewGroup;
        this.f = handler;
        this.g = dVar;
        this.h = new Handler(Looper.getMainLooper());
        this.i = new HashMap();
        this.j = new ae.a();
        this.o = new s[0][];
        this.p = new long[0][];
    }

    @Override
    public final void a(final com.tkay.expressad.exoplayer.h hVar, boolean z) {
        super.a(hVar, z);
        com.tkay.expressad.exoplayer.k.a.a(z);
        final c cVar = new c();
        this.k = cVar;
        a(new s.a(0), this.b);
        this.h.post(new Runnable() {
            @Override
            public final void run() {
                com.tkay.expressad.exoplayer.h.a.b unused = c.this.d;
                ViewGroup unused2 = c.this.e;
            }
        });
    }

    @Override
    public final r a(s.a aVar, com.tkay.expressad.exoplayer.j.b bVar) {
        if (this.n.g > 0 && aVar.a()) {
            int i = aVar.b;
            int i2 = aVar.c;
            Uri uri = this.n.i[i].b[i2];
            if (this.o[i].length <= i2) {
                s sVarB = this.c.b(uri);
                s[][] sVarArr = this.o;
                int length = sVarArr[i].length;
                if (i2 >= length) {
                    int i3 = i2 + 1;
                    sVarArr[i] = (s[]) Arrays.copyOf(sVarArr[i], i3);
                    long[][] jArr = this.p;
                    jArr[i] = Arrays.copyOf(jArr[i], i3);
                    Arrays.fill(this.p[i], length, i3, -9223372036854775807L);
                }
                this.o[i][i2] = sVarB;
                this.i.put(sVarB, new ArrayList());
                a(aVar, sVarB);
            }
            s sVar = this.o[i][i2];
            l lVar = new l(sVar, new s.a(0, aVar.d), bVar);
            lVar.a(new b(uri, i, i2));
            List<l> list = this.i.get(sVar);
            if (list == null) {
                lVar.f();
            } else {
                list.add(lVar);
            }
            return lVar;
        }
        l lVar2 = new l(this.b, aVar, bVar);
        lVar2.f();
        return lVar2;
    }

    @Override
    public final void a(r rVar) {
        l lVar = (l) rVar;
        List<l> list = this.i.get(lVar.a);
        if (list != null) {
            list.remove(lVar);
        }
        lVar.g();
    }

    @Override
    public final void a() {
        super.a();
        this.k.c();
        this.k = null;
        this.i.clear();
        this.l = null;
        this.m = null;
        this.n = null;
        this.o = new s[0][];
        this.p = new long[0][];
        this.h.post(new Runnable() {
            @Override
            public final void run() {
                com.tkay.expressad.exoplayer.h.a.b unused = c.this.d;
            }
        });
    }

    private void a(s.a aVar, s sVar, ae aeVar, Object obj) {
        if (aVar.a()) {
            int i = aVar.b;
            int i2 = aVar.c;
            com.tkay.expressad.exoplayer.k.a.a(aeVar.c() == 1);
            this.p[i][i2] = aeVar.a(0, this.j, false).d;
            if (this.i.containsKey(sVar)) {
                List<l> list = this.i.get(sVar);
                for (int i3 = 0; i3 < list.size(); i3++) {
                    list.get(i3).f();
                }
                this.i.remove(sVar);
            }
            c();
            return;
        }
        this.l = aeVar;
        this.m = obj;
        c();
    }

    private static s.a a(s.a aVar, s.a aVar2) {
        return aVar.a() ? aVar : aVar2;
    }

    private void a(com.tkay.expressad.exoplayer.h.a.a aVar) {
        if (this.n == null) {
            s[][] sVarArr = new s[aVar.g][];
            this.o = sVarArr;
            Arrays.fill(sVarArr, new s[0]);
            long[][] jArr = new long[aVar.g][];
            this.p = jArr;
            Arrays.fill(jArr, new long[0]);
        }
        this.n = aVar;
        c();
    }

    private void b(ae aeVar, Object obj) {
        this.l = aeVar;
        this.m = obj;
        c();
    }

    private void a(s sVar, int i, int i2, ae aeVar) {
        com.tkay.expressad.exoplayer.k.a.a(aeVar.c() == 1);
        this.p[i][i2] = aeVar.a(0, this.j, false).d;
        if (this.i.containsKey(sVar)) {
            List<l> list = this.i.get(sVar);
            for (int i3 = 0; i3 < list.size(); i3++) {
                list.get(i3).f();
            }
            this.i.remove(sVar);
        }
        c();
    }

    private void c() {
        ae dVar;
        com.tkay.expressad.exoplayer.h.a.a aVar = this.n;
        if (aVar == null || this.l == null) {
            return;
        }
        com.tkay.expressad.exoplayer.h.a.a aVarA = aVar.a(this.p);
        this.n = aVarA;
        if (aVarA.g == 0) {
            dVar = this.l;
        } else {
            dVar = new com.tkay.expressad.exoplayer.h.a.d(this.l, this.n);
        }
        a(dVar, this.m);
    }

    private final class c implements b.a {
        private final Handler b = new Handler();
        private volatile boolean c;

        public c() {
        }

        public final void c() {
            this.c = true;
            this.b.removeCallbacksAndMessages(null);
        }

        @Override
        public final void a(final com.tkay.expressad.exoplayer.h.a.a aVar) {
            if (this.c) {
                return;
            }
            this.b.post(new Runnable() {
                @Override
                public final void run() {
                    if (c.this.c) {
                        return;
                    }
                    c.a(c.this, aVar);
                }
            });
        }

        @Override
        public final void a() {
            if (this.c || c.this.f == null || c.this.g == null) {
                return;
            }
            c.this.f.post(new Runnable() {
                @Override
                public final void run() {
                    if (c.this.c) {
                        return;
                    }
                    d unused = c.this.g;
                }
            });
        }

        @Override
        public final void b() {
            if (this.c || c.this.f == null || c.this.g == null) {
                return;
            }
            c.this.f.post(new Runnable() {
                @Override
                public final void run() {
                    if (c.this.c) {
                        return;
                    }
                    d unused = c.this.g;
                }
            });
        }

        @Override
        public final void a(final a aVar, k kVar) {
            if (this.c) {
                return;
            }
            c.this.a((s.a) null).a(kVar, aVar);
            if (c.this.f == null || c.this.g == null) {
                return;
            }
            c.this.f.post(new Runnable() {
                @Override
                public final void run() {
                    if (c.this.c) {
                        return;
                    }
                    if (aVar.e == 3) {
                        d unused = c.this.g;
                        a aVar2 = aVar;
                        com.tkay.expressad.exoplayer.k.a.b(aVar2.e == 3);
                        aVar2.getCause();
                        return;
                    }
                    d unused2 = c.this.g;
                }
            });
        }
    }

    private final class b implements l.a {
        private final Uri b;
        private final int c;
        private final int d;

        public b(Uri uri, int i, int i2) {
            this.b = uri;
            this.c = i;
            this.d = i2;
        }

        @Override
        public final void a(s.a aVar, final IOException iOException) {
            c.this.a(aVar).a(new k(this.b), a.a(iOException));
            c.this.h.post(new Runnable() {
                @Override
                public final void run() {
                    com.tkay.expressad.exoplayer.h.a.b unused = c.this.d;
                    int unused2 = b.this.c;
                    int unused3 = b.this.d;
                }
            });
        }
    }

    static void a(c cVar, com.tkay.expressad.exoplayer.h.a.a aVar) {
        if (cVar.n == null) {
            s[][] sVarArr = new s[aVar.g][];
            cVar.o = sVarArr;
            Arrays.fill(sVarArr, new s[0]);
            long[][] jArr = new long[aVar.g][];
            cVar.p = jArr;
            Arrays.fill(jArr, new long[0]);
        }
        cVar.n = aVar;
        cVar.c();
    }
}
