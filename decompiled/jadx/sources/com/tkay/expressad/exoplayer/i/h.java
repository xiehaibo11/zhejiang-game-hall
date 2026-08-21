package com.tkay.expressad.exoplayer.i;

import com.tkay.expressad.exoplayer.h.af;
import com.tkay.expressad.exoplayer.z;

/* JADX INFO: loaded from: classes3.dex */
public abstract class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private a f6702a;

    public interface a {
        void c();
    }

    public abstract i a(z[] zVarArr, af afVar);

    public abstract void a(Object obj);

    public final void a(a aVar) {
        this.f6702a = aVar;
    }

    protected final void b() {
        a aVar = this.f6702a;
        if (aVar != null) {
            aVar.c();
        }
    }
}
