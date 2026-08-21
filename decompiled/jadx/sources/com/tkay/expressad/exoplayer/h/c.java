package com.tkay.expressad.exoplayer.h;

import android.os.Handler;
import com.tkay.expressad.exoplayer.h.s;
import com.tkay.expressad.exoplayer.h.t;
import java.util.ArrayList;
import java.util.Iterator;

/* JADX INFO: loaded from: classes3.dex */
public abstract class c implements s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ArrayList<s.b> f6642a = new ArrayList<>(1);
    private final t.a b = new t.a();
    private com.tkay.expressad.exoplayer.h c;
    private com.tkay.expressad.exoplayer.ae d;
    private Object e;

    protected abstract void a();

    protected abstract void a(com.tkay.expressad.exoplayer.h hVar, boolean z);

    protected final void a(com.tkay.expressad.exoplayer.ae aeVar, Object obj) {
        this.d = aeVar;
        this.e = obj;
        Iterator<s.b> it = this.f6642a.iterator();
        while (it.hasNext()) {
            it.next().a(this, aeVar, obj);
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    public final t.a a(s.a aVar) {
        return this.b.a(0, aVar, 0L);
    }

    private t.a a(s.a aVar, long j) {
        com.tkay.expressad.exoplayer.k.a.a(aVar != null);
        return this.b.a(0, aVar, j);
    }

    protected final t.a a(int i, s.a aVar) {
        return this.b.a(i, aVar, 0L);
    }

    @Override // com.tkay.expressad.exoplayer.h.s
    public final void a(Handler handler, t tVar) {
        this.b.a(handler, tVar);
    }

    @Override // com.tkay.expressad.exoplayer.h.s
    public final void a(t tVar) {
        this.b.a(tVar);
    }

    @Override // com.tkay.expressad.exoplayer.h.s
    public final void a(com.tkay.expressad.exoplayer.h hVar, boolean z, s.b bVar) {
        com.tkay.expressad.exoplayer.h hVar2 = this.c;
        com.tkay.expressad.exoplayer.k.a.a(hVar2 == null || hVar2 == hVar);
        this.f6642a.add(bVar);
        if (this.c == null) {
            this.c = hVar;
            a(hVar, z);
        } else {
            com.tkay.expressad.exoplayer.ae aeVar = this.d;
            if (aeVar != null) {
                bVar.a(this, aeVar, this.e);
            }
        }
    }

    @Override // com.tkay.expressad.exoplayer.h.s
    public final void a(s.b bVar) {
        this.f6642a.remove(bVar);
        if (this.f6642a.isEmpty()) {
            this.c = null;
            this.d = null;
            this.e = null;
            a();
        }
    }
}
