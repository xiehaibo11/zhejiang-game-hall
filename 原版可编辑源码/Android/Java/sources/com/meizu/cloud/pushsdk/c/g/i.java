package com.meizu.cloud.pushsdk.c.g;

import com.tencent.mm.opensdk.constants.ConstantsAPI;
import java.io.IOException;
import java.io.InputStream;
import kotlin.UByte;

final class i implements d {
    private final b a;
    private final m b;
    private boolean c;

    public i(m mVar) {
        this(mVar, new b());
    }

    public i(m mVar, b bVar) {
        if (mVar == null) {
            throw new IllegalArgumentException("source == null");
        }
        this.a = bVar;
        this.b = mVar;
    }

    @Override
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
        if (this.a.b == 0 && this.b.b(this.a, ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX) == -1) {
            return -1L;
        }
        return this.a.b(bVar, Math.min(j, this.a.b));
    }

    @Override
    public void close() {
        if (this.c) {
            return;
        }
        this.c = true;
        this.b.close();
        this.a.j();
    }

    @Override
    public InputStream d() {
        return new InputStream() {
            @Override
            public int available() throws IOException {
                if (i.this.c) {
                    throw new IOException("closed");
                }
                return (int) Math.min(i.this.a.b, 2147483647L);
            }

            @Override
            public void close() {
                i.this.close();
            }

            @Override
            public int read() throws IOException {
                if (i.this.c) {
                    throw new IOException("closed");
                }
                if (i.this.a.b == 0 && i.this.b.b(i.this.a, ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX) == -1) {
                    return -1;
                }
                return i.this.a.f() & UByte.MAX_VALUE;
            }

            @Override
            public int read(byte[] bArr, int i, int i2) throws IOException {
                if (i.this.c) {
                    throw new IOException("closed");
                }
                o.a(bArr.length, i, i2);
                if (i.this.a.b == 0 && i.this.b.b(i.this.a, ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX) == -1) {
                    return -1;
                }
                return i.this.a.a(bArr, i, i2);
            }

            public String toString() {
                return i.this + ".inputStream()";
            }
        };
    }

    @Override
    public String h() {
        this.a.a(this.b);
        return this.a.h();
    }

    @Override
    public byte[] i() {
        this.a.a(this.b);
        return this.a.i();
    }

    public String toString() {
        return "buffer(" + this.b + ")";
    }
}
