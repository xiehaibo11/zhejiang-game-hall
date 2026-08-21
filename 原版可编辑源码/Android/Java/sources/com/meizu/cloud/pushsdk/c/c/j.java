package com.meizu.cloud.pushsdk.c.c;

import java.io.File;
import java.nio.charset.Charset;

public abstract class j {
    public static j a(final g gVar, final File file) {
        if (file != null) {
            return new j() {
                @Override
                public g a() {
                    return gVar;
                }

                @Override
                public void a(com.meizu.cloud.pushsdk.c.g.c cVar) {
                    com.meizu.cloud.pushsdk.c.g.m mVarA = null;
                    try {
                        mVarA = com.meizu.cloud.pushsdk.c.g.g.a(file);
                        cVar.a(mVarA);
                    } finally {
                        m.a(mVarA);
                    }
                }

                @Override
                public long b() {
                    return file.length();
                }
            };
        }
        throw new NullPointerException("content == null");
    }

    public static j a(g gVar, String str) {
        Charset charsetB = m.c;
        if (gVar != null && (charsetB = gVar.b()) == null) {
            charsetB = m.c;
            gVar = g.a(gVar + "; charset=utf-8");
        }
        return a(gVar, str.getBytes(charsetB));
    }

    public static j a(g gVar, byte[] bArr) {
        return a(gVar, bArr, 0, bArr.length);
    }

    public static j a(final g gVar, final byte[] bArr, final int i, final int i2) {
        if (bArr == null) {
            throw new NullPointerException("content == null");
        }
        m.a(bArr.length, i, i2);
        return new j() {
            @Override
            public g a() {
                return gVar;
            }

            @Override
            public void a(com.meizu.cloud.pushsdk.c.g.c cVar) {
                cVar.c(bArr, i, i2);
            }

            @Override
            public long b() {
                return i2;
            }
        };
    }

    public abstract g a();

    public abstract void a(com.meizu.cloud.pushsdk.c.g.c cVar);

    public long b() {
        return -1L;
    }
}
