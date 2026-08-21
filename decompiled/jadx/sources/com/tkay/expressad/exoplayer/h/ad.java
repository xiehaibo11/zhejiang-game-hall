package com.tkay.expressad.exoplayer.h;

import android.net.Uri;
import android.os.Handler;
import com.tkay.expressad.exoplayer.h.s;
import com.tkay.expressad.exoplayer.h.t;
import com.tkay.expressad.exoplayer.j.h;
import java.io.IOException;

/* JADX INFO: loaded from: classes3.dex */
public final class ad extends com.tkay.expressad.exoplayer.h.c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6629a = 3;
    private final com.tkay.expressad.exoplayer.j.k b;
    private final h.a c;
    private final com.tkay.expressad.exoplayer.m d;
    private final long e;
    private final int f;
    private final boolean g;
    private final com.tkay.expressad.exoplayer.ae h;

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

    /* synthetic */ ad(Uri uri, h.a aVar, com.tkay.expressad.exoplayer.m mVar, long j, int i, boolean z, Object obj, byte b2) {
        this(uri, aVar, mVar, j, i, z, obj);
    }

    public static final class c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final h.a f6631a;
        private int b = 3;
        private boolean c;
        private boolean d;
        private Object e;

        private c(h.a aVar) {
            this.f6631a = (h.a) com.tkay.expressad.exoplayer.k.a.a(aVar);
        }

        private c a(Object obj) {
            com.tkay.expressad.exoplayer.k.a.b(!this.d);
            this.e = obj;
            return this;
        }

        private c a(int i) {
            com.tkay.expressad.exoplayer.k.a.b(!this.d);
            this.b = i;
            return this;
        }

        private c a(boolean z) {
            com.tkay.expressad.exoplayer.k.a.b(!this.d);
            this.c = z;
            return this;
        }

        private ad a(Uri uri, com.tkay.expressad.exoplayer.m mVar, long j) {
            this.d = true;
            return new ad(uri, this.f6631a, mVar, j, this.b, this.c, this.e, (byte) 0);
        }

        @Deprecated
        private ad a(Uri uri, com.tkay.expressad.exoplayer.m mVar, long j, Handler handler, t tVar) {
            this.d = true;
            ad adVar = new ad(uri, this.f6631a, mVar, j, this.b, this.c, this.e, (byte) 0);
            if (handler != null && tVar != null) {
                adVar.a(handler, tVar);
            }
            return adVar;
        }
    }

    @Deprecated
    private ad(Uri uri, h.a aVar, com.tkay.expressad.exoplayer.m mVar, long j) {
        this(uri, aVar, mVar, j, (byte) 0);
    }

    @Deprecated
    private ad(Uri uri, h.a aVar, com.tkay.expressad.exoplayer.m mVar, long j, byte b2) {
        this(uri, aVar, mVar, j, 3, false, null);
    }

    @Deprecated
    private ad(Uri uri, h.a aVar, com.tkay.expressad.exoplayer.m mVar, long j, int i, Handler handler, a aVar2, int i2, boolean z) {
        this(uri, aVar, mVar, j, i, z, null);
        if (handler == null || aVar2 == null) {
            return;
        }
        a(handler, new b(aVar2, i2));
    }

    private ad(Uri uri, h.a aVar, com.tkay.expressad.exoplayer.m mVar, long j, int i, boolean z, Object obj) {
        this.c = aVar;
        this.d = mVar;
        this.e = j;
        this.f = i;
        this.g = z;
        this.b = new com.tkay.expressad.exoplayer.j.k(uri);
        this.h = new ab(j, true, false, obj);
    }

    @Override // com.tkay.expressad.exoplayer.h.c
    public final void a(com.tkay.expressad.exoplayer.h hVar, boolean z) {
        a(this.h, (Object) null);
    }

    @Override // com.tkay.expressad.exoplayer.h.s
    public final r a(s.a aVar, com.tkay.expressad.exoplayer.j.b bVar) {
        com.tkay.expressad.exoplayer.k.a.a(aVar.f6667a == 0);
        return new ac(this.b, this.c, this.d, this.e, this.f, a(aVar), this.g);
    }

    @Override // com.tkay.expressad.exoplayer.h.s
    public final void a(r rVar) {
        ((ac) rVar).f();
    }

    private static final class b extends k {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final a f6630a;
        private final int b;

        @Override // com.tkay.expressad.exoplayer.h.k, com.tkay.expressad.exoplayer.h.t
        public final void a(int i, s.a aVar, t.b bVar, t.c cVar, IOException iOException, boolean z) {
        }

        public b(a aVar, int i) {
            this.f6630a = (a) com.tkay.expressad.exoplayer.k.a.a(aVar);
            this.b = i;
        }
    }
}
