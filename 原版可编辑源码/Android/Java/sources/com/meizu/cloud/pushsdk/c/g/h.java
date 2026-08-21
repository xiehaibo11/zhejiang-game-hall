package com.meizu.cloud.pushsdk.c.g;

import com.tencent.mm.opensdk.constants.ConstantsAPI;

final class h implements c {
    private final b a;
    private final l b;
    private boolean c;

    public h(l lVar) {
        this(lVar, new b());
    }

    public h(l lVar, b bVar) {
        if (lVar == null) {
            throw new IllegalArgumentException("sink == null");
        }
        this.a = bVar;
        this.b = lVar;
    }

    @Override
    public long a(m mVar) {
        if (mVar == null) {
            throw new IllegalArgumentException("source == null");
        }
        long j = 0;
        while (true) {
            long jB = mVar.b(this.a, ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX);
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
        long jE = this.a.e();
        if (jE > 0) {
            this.b.a(this.a, jE);
        }
        return this;
    }

    @Override
    public void a(b bVar, long j) {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        this.a.a(bVar, j);
        a();
    }

    @Override
    public b b() {
        return this.a;
    }

    @Override
    public c b(e eVar) {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        this.a.b(eVar);
        return a();
    }

    @Override
    public c b(String str) {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        this.a.b(str);
        return a();
    }

    @Override
    public c c(byte[] bArr) {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        this.a.c(bArr);
        return a();
    }

    @Override
    public c c(byte[] bArr, int i, int i2) {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        this.a.c(bArr, i, i2);
        return a();
    }

    @Override
    public void close() throws Throwable {
        if (this.c) {
            return;
        }
        Throwable th = null;
        try {
            if (this.a.b > 0) {
                this.b.a(this.a, this.a.b);
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

    @Override
    public c e(long j) {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        this.a.e(j);
        return a();
    }

    @Override
    public void flush() {
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        if (this.a.b > 0) {
            l lVar = this.b;
            b bVar = this.a;
            lVar.a(bVar, bVar.b);
        }
        this.b.flush();
    }

    public String toString() {
        return "buffer(" + this.b + ")";
    }
}
