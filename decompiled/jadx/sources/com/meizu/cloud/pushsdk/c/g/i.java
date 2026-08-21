package com.meizu.cloud.pushsdk.c.g;

import com.tencent.mm.opensdk.constants.ConstantsAPI;
import java.io.IOException;
import java.io.InputStream;
import kotlin.UByte;

/* JADX INFO: loaded from: classes3.dex */
final class i implements d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final b f4558a;
    private final m b;
    private boolean c;

    public i(m mVar) {
        this(mVar, new b());
    }

    public i(m mVar, b bVar) {
        if (mVar == null) {
            throw new IllegalArgumentException("source == null");
        }
        this.f4558a = bVar;
        this.b = mVar;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.m
    public long b(b bVar, long j) {
        if (bVar == null) {
            throw new IllegalArgumentException("sink == null");
        }
        if (j < 0) {
            throw new IllegalArgumentException("byteCount < 0: " + j);
        }
        if (this.c) {
            throw new IllegalStateException("closed");
        }
        if (this.f4558a.b == 0 && this.b.b(this.f4558a, ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX) == -1) {
            return -1L;
        }
        return this.f4558a.b(bVar, Math.min(j, this.f4558a.b));
    }

    @Override // com.meizu.cloud.pushsdk.c.g.m, java.lang.AutoCloseable
    public void close() {
        if (this.c) {
            return;
        }
        this.c = true;
        this.b.close();
        this.f4558a.j();
    }

    @Override // com.meizu.cloud.pushsdk.c.g.d
    public InputStream d() {
        return new InputStream() { // from class: com.meizu.cloud.pushsdk.c.g.i.1
            @Override // java.io.InputStream
            public int available() throws IOException {
                if (i.this.c) {
                    throw new IOException("closed");
                }
                return (int) Math.min(i.this.f4558a.b, 2147483647L);
            }

            @Override // java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
            public void close() {
                i.this.close();
            }

            @Override // java.io.InputStream
            public int read() throws IOException {
                if (i.this.c) {
                    throw new IOException("closed");
                }
                if (i.this.f4558a.b == 0 && i.this.b.b(i.this.f4558a, ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX) == -1) {
                    return -1;
                }
                return i.this.f4558a.f() & UByte.MAX_VALUE;
            }

            @Override // java.io.InputStream
            public int read(byte[] bArr, int i, int i2) throws IOException {
                if (i.this.c) {
                    throw new IOException("closed");
                }
                o.a(bArr.length, i, i2);
                if (i.this.f4558a.b == 0 && i.this.b.b(i.this.f4558a, ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX) == -1) {
                    return -1;
                }
                return i.this.f4558a.a(bArr, i, i2);
            }

            public String toString() {
                return i.this + ".inputStream()";
            }
        };
    }

    @Override // com.meizu.cloud.pushsdk.c.g.d
    public String h() {
        this.f4558a.a(this.b);
        return this.f4558a.h();
    }

    @Override // com.meizu.cloud.pushsdk.c.g.d
    public byte[] i() {
        this.f4558a.a(this.b);
        return this.f4558a.i();
    }

    public String toString() {
        return "buffer(" + this.b + ")";
    }
}
