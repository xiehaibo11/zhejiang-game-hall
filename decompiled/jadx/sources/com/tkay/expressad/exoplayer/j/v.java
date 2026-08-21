package com.tkay.expressad.exoplayer.j;

import android.net.Uri;
import com.tkay.expressad.exoplayer.j.t;
import com.tkay.expressad.exoplayer.k.af;
import java.io.Closeable;

/* JADX INFO: loaded from: classes3.dex */
public final class v<T> implements t.c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final k f6740a;
    public final int b;
    private final h c;
    private final a<? extends T> d;
    private volatile T e;
    private volatile long f;

    public interface a<T> {
        T a();
    }

    @Override // com.tkay.expressad.exoplayer.j.t.c
    public final void a() {
    }

    private static <T> T a(h hVar, a<? extends T> aVar, Uri uri) {
        v vVar = new v(hVar, uri, aVar);
        vVar.b();
        return vVar.e;
    }

    private v(h hVar, Uri uri, a<? extends T> aVar) {
        this(hVar, new k(uri, 3), aVar);
    }

    private v(h hVar, k kVar, a<? extends T> aVar) {
        this.c = hVar;
        this.f6740a = kVar;
        this.b = 0;
        this.d = aVar;
    }

    private T c() {
        return this.e;
    }

    private long d() {
        return this.f;
    }

    @Override // com.tkay.expressad.exoplayer.j.t.c
    public final void b() {
        j jVar = new j(this.c, this.f6740a);
        try {
            jVar.b();
            a<? extends T> aVar = this.d;
            this.c.a();
            this.e = aVar.a();
        } finally {
            this.f = jVar.a();
            af.a((Closeable) jVar);
        }
    }
}
