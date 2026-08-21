package com.tkay.expressad.exoplayer.h;

import android.net.Uri;
import android.os.Handler;
import com.tkay.expressad.exoplayer.h.a.c;
import com.tkay.expressad.exoplayer.h.n;
import com.tkay.expressad.exoplayer.h.s;
import com.tkay.expressad.exoplayer.h.t;
import com.tkay.expressad.exoplayer.j.h;
import java.io.IOException;

/* JADX INFO: loaded from: classes3.dex */
public final class o extends com.tkay.expressad.exoplayer.h.c implements n.c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6663a = 3;
    public static final int b = 6;
    public static final int c = -1;
    public static final int d = 1048576;
    private final Uri e;
    private final h.a f;
    private final com.tkay.expressad.exoplayer.e.h g;
    private final int h;
    private final String i;
    private final int j;
    private final Object k;
    private long l;
    private boolean m;

    @Deprecated
    public interface a {
        void a();
    }

    @Override // com.tkay.expressad.exoplayer.h.c
    public final void a() {
    }

    @Override // com.tkay.expressad.exoplayer.h.s
    public final void b() {
    }

    /* synthetic */ o(Uri uri, h.a aVar, com.tkay.expressad.exoplayer.e.h hVar, int i, String str, int i2, Object obj, byte b2) {
        this(uri, aVar, hVar, i, str, i2, obj);
    }

    public static final class c implements c.e {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final h.a f6665a;
        private com.tkay.expressad.exoplayer.e.h b;
        private String c;
        private Object d;
        private int e = -1;
        private int f = 1048576;
        private boolean g;

        @Override // com.tkay.expressad.exoplayer.h.a.c.e
        public final int[] a() {
            return new int[]{3};
        }

        public c(h.a aVar) {
            this.f6665a = aVar;
        }

        private c a(com.tkay.expressad.exoplayer.e.h hVar) {
            com.tkay.expressad.exoplayer.k.a.b(!this.g);
            this.b = hVar;
            return this;
        }

        private c a(String str) {
            com.tkay.expressad.exoplayer.k.a.b(!this.g);
            this.c = str;
            return this;
        }

        private c a(Object obj) {
            com.tkay.expressad.exoplayer.k.a.b(!this.g);
            this.d = obj;
            return this;
        }

        private c a(int i) {
            com.tkay.expressad.exoplayer.k.a.b(!this.g);
            this.e = i;
            return this;
        }

        private c b(int i) {
            com.tkay.expressad.exoplayer.k.a.b(!this.g);
            this.f = i;
            return this;
        }

        @Override // com.tkay.expressad.exoplayer.h.a.c.e
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public final o b(Uri uri) {
            this.g = true;
            if (this.b == null) {
                this.b = new com.tkay.expressad.exoplayer.e.c();
            }
            return new o(uri, this.f6665a, this.b, this.e, this.c, this.f, this.d, (byte) 0);
        }

        @Deprecated
        private o a(Uri uri, Handler handler, t tVar) {
            o oVarB = b(uri);
            if (handler != null && tVar != null) {
                oVarB.a(handler, tVar);
            }
            return oVarB;
        }
    }

    @Deprecated
    private o(Uri uri, h.a aVar, com.tkay.expressad.exoplayer.e.h hVar, Handler handler, a aVar2) {
        this(uri, aVar, hVar, handler, aVar2, null);
    }

    @Deprecated
    private o(Uri uri, h.a aVar, com.tkay.expressad.exoplayer.e.h hVar, Handler handler, a aVar2, String str) {
        this(uri, aVar, hVar, handler, aVar2, str, (byte) 0);
    }

    @Deprecated
    private o(Uri uri, h.a aVar, com.tkay.expressad.exoplayer.e.h hVar, Handler handler, a aVar2, String str, byte b2) {
        this(uri, aVar, hVar, -1, str, 1048576, (Object) null);
        if (aVar2 == null || handler == null) {
            return;
        }
        a(handler, new b(aVar2));
    }

    private o(Uri uri, h.a aVar, com.tkay.expressad.exoplayer.e.h hVar, int i, String str, int i2, Object obj) {
        this.e = uri;
        this.f = aVar;
        this.g = hVar;
        this.h = i;
        this.i = str;
        this.j = i2;
        this.l = -9223372036854775807L;
        this.k = obj;
    }

    @Override // com.tkay.expressad.exoplayer.h.c
    public final void a(com.tkay.expressad.exoplayer.h hVar, boolean z) {
        b(this.l, false);
    }

    @Override // com.tkay.expressad.exoplayer.h.s
    public final r a(s.a aVar, com.tkay.expressad.exoplayer.j.b bVar) {
        com.tkay.expressad.exoplayer.k.a.a(aVar.f6667a == 0);
        return new n(this.e, this.f.a(), this.g.a(), this.h, a(aVar), this, bVar, this.i, this.j);
    }

    @Override // com.tkay.expressad.exoplayer.h.s
    public final void a(r rVar) {
        ((n) rVar).f();
    }

    @Override // com.tkay.expressad.exoplayer.h.n.c
    public final void a(long j, boolean z) {
        if (j == -9223372036854775807L) {
            j = this.l;
        }
        if (this.l == j && this.m == z) {
            return;
        }
        b(j, z);
    }

    private void b(long j, boolean z) {
        this.l = j;
        this.m = z;
        a(new ab(this.l, this.m, false, this.k), (Object) null);
    }

    private static final class b extends k {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final a f6664a;

        @Override // com.tkay.expressad.exoplayer.h.k, com.tkay.expressad.exoplayer.h.t
        public final void a(int i, s.a aVar, t.b bVar, t.c cVar, IOException iOException, boolean z) {
        }

        public b(a aVar) {
            this.f6664a = (a) com.tkay.expressad.exoplayer.k.a.a(aVar);
        }
    }
}
