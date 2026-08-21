package com.tkay.expressad.exoplayer.g;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import com.tkay.expressad.exoplayer.m;
import com.tkay.expressad.exoplayer.n;
import java.util.Arrays;

/* JADX INFO: loaded from: classes3.dex */
public final class g extends com.tkay.expressad.exoplayer.a implements Handler.Callback {
    private static final int n = 0;
    private static final int o = 5;
    private final d p;
    private final f q;
    private final Handler r;
    private final n s;
    private final e t;
    private final com.tkay.expressad.exoplayer.g.a[] u;
    private final long[] v;
    private int w;
    private int x;
    private b y;
    private boolean z;

    @Deprecated
    public interface a extends f {
    }

    @Override // com.tkay.expressad.exoplayer.y
    public final boolean u() {
        return true;
    }

    public g(f fVar, Looper looper) {
        this(fVar, looper, d.f6608a);
    }

    private g(f fVar, Looper looper, d dVar) {
        super(4);
        this.q = (f) com.tkay.expressad.exoplayer.k.a.a(fVar);
        this.r = looper == null ? null : new Handler(looper, this);
        this.p = (d) com.tkay.expressad.exoplayer.k.a.a(dVar);
        this.s = new n();
        this.t = new e();
        this.u = new com.tkay.expressad.exoplayer.g.a[5];
        this.v = new long[5];
    }

    @Override // com.tkay.expressad.exoplayer.z
    public final int a(m mVar) {
        if (this.p.a(mVar)) {
            return a((com.tkay.expressad.exoplayer.d.g<?>) null, mVar.k) ? 4 : 2;
        }
        return 0;
    }

    @Override // com.tkay.expressad.exoplayer.a
    protected final void a(m[] mVarArr, long j) {
        this.y = this.p.b(mVarArr[0]);
    }

    @Override // com.tkay.expressad.exoplayer.a
    protected final void a(long j, boolean z) {
        w();
        this.z = false;
    }

    @Override // com.tkay.expressad.exoplayer.y
    public final void a(long j, long j2) throws com.tkay.expressad.exoplayer.g {
        if (!this.z && this.x < 5) {
            this.t.a();
            if (a(this.s, (com.tkay.expressad.exoplayer.c.e) this.t, false) == -4) {
                if (this.t.c()) {
                    this.z = true;
                } else if (!this.t.b()) {
                    this.t.g = this.s.f6802a.l;
                    this.t.h();
                    try {
                        int i = (this.w + this.x) % 5;
                        this.u[i] = this.y.a(this.t);
                        this.v[i] = this.t.f;
                        this.x++;
                    } catch (c e) {
                        throw com.tkay.expressad.exoplayer.g.a(e, s());
                    }
                }
            }
        }
        if (this.x > 0) {
            long[] jArr = this.v;
            int i2 = this.w;
            if (jArr[i2] <= j) {
                com.tkay.expressad.exoplayer.g.a aVar = this.u[i2];
                Handler handler = this.r;
                if (handler != null) {
                    handler.obtainMessage(0, aVar).sendToTarget();
                } else {
                    b(aVar);
                }
                com.tkay.expressad.exoplayer.g.a[] aVarArr = this.u;
                int i3 = this.w;
                aVarArr[i3] = null;
                this.w = (i3 + 1) % 5;
                this.x--;
            }
        }
    }

    @Override // com.tkay.expressad.exoplayer.a
    protected final void p() {
        w();
        this.y = null;
    }

    @Override // com.tkay.expressad.exoplayer.y
    public final boolean v() {
        return this.z;
    }

    private void a(com.tkay.expressad.exoplayer.g.a aVar) {
        Handler handler = this.r;
        if (handler != null) {
            handler.obtainMessage(0, aVar).sendToTarget();
        } else {
            b(aVar);
        }
    }

    private void w() {
        Arrays.fill(this.u, (Object) null);
        this.w = 0;
        this.x = 0;
    }

    @Override // android.os.Handler.Callback
    public final boolean handleMessage(Message message) {
        if (message.what == 0) {
            b((com.tkay.expressad.exoplayer.g.a) message.obj);
            return true;
        }
        throw new IllegalStateException();
    }

    private void b(com.tkay.expressad.exoplayer.g.a aVar) {
        this.q.a(aVar);
    }
}
