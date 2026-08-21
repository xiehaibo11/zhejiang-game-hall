package com.meizu.cloud.pushsdk.c.g;

import com.tencent.mm.opensdk.constants.ConstantsAPI;

/* JADX INFO: loaded from: classes3.dex */
final class h implements c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final b f4557a;
    private final l b;
    private boolean c;

    public h(l lVar) {
        this(lVar, new b());
    }

    public h(l lVar, b bVar) {
        if (lVar == null) {
            throw new IllegalArgumentException("sink == null");
        }
        this.f4557a = bVar;
        this.b = lVar;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.c
    public long a(m mVar) {
        if (mVar == null) {
            throw new IllegalArgumentException("source == null");
        }
        long j = 0;
        while (true) {
            long jB = mVar.b(this.f4557a, ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX);
            if (jB == -1) {
                return j;
            }
            j += jB;
            a();
        }
    }

    public c a() {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        long jE = this.f4557a.e();
        if (jE > 0) {
            this.b.a(this.f4557a, jE);
        }
        return this;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.l
    public void a(b bVar, long j) {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        this.f4557a.a(bVar, j);
        a();
    }

    @Override // com.meizu.cloud.pushsdk.c.g.c
    public b b() {
        return this.f4557a;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.c
    public c b(e eVar) {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        this.f4557a.b(eVar);
        return a();
    }

    @Override // com.meizu.cloud.pushsdk.c.g.c
    public c b(String str) {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        this.f4557a.b(str);
        return a();
    }

    @Override // com.meizu.cloud.pushsdk.c.g.c
    public c c(byte[] bArr) {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        this.f4557a.c(bArr);
        return a();
    }

    @Override // com.meizu.cloud.pushsdk.c.g.c
    public c c(byte[] bArr, int i, int i2) {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        this.f4557a.c(bArr, i, i2);
        return a();
    }

    @Override // com.meizu.cloud.pushsdk.c.g.l, java.io.Closeable, java.lang.AutoCloseable, com.meizu.cloud.pushsdk.c.g.m
    public void close() throws Throwable {
        if (this.c) {
            return;
        }
        Throwable th = null;
        try {
            if (this.f4557a.b > 0) {
                this.b.a(this.f4557a, this.f4557a.b);
            }
        } catch (Throwable th2) {
            th = th2;
        }
        try {
            this.b.close();
        } catch (Throwable th3) {
            if (th == null) {
                th = th3;
            }
        }
        this.c = true;
        if (th != null) {
            o.a(th);
        }
    }

    @Override // com.meizu.cloud.pushsdk.c.g.c
    public c e(long j) {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        this.f4557a.e(j);
        return a();
    }

    @Override // com.meizu.cloud.pushsdk.c.g.l, java.io.Flushable
    public void flush() {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        if (this.f4557a.b > 0) {
            l lVar = this.b;
            b bVar = this.f4557a;
            lVar.a(bVar, bVar.b);
        }
        this.b.flush();
    }

    public String toString() {
        return "buffer(" + this.b + ")";
    }
}
