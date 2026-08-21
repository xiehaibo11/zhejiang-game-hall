package com.xiaomi.push;

import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.zip.GZIPInputStream;

/* JADX INFO: loaded from: classes4.dex */
public class fp {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final byte[] f8163a = {80, 85, com.sigmob.sdk.archives.tar.e.Q, 72};

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private byte f403a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private int f404a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private short f405a;
    private byte[] b;

    public class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public static final c f8164a = new c();

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public static final d f406a = new d();

        public static byte[] a(byte[] bArr) {
            return a(bArr, f406a);
        }

        public static byte[] a(byte[] bArr, b bVar) {
            if (!fp.m355a(bArr)) {
                return bArr;
            }
            fp fpVarA = fp.a(bArr);
            return (fpVarA.f403a == 0 || fpVarA.f403a != bVar.a()) ? fpVarA.b : bVar.a(fpVarA.b, fpVarA.f404a);
        }
    }

    public interface b {
        byte a();

        byte[] a(byte[] bArr, int i);
    }

    public final class c {
    }

    public final class d implements b {
        @Override // com.xiaomi.push.fp.b
        public byte a() {
            return (byte) 2;
        }

        @Override // com.xiaomi.push.fp.b
        public byte[] a(byte[] bArr, int i) throws Throwable {
            GZIPInputStream gZIPInputStream = null;
            try {
                GZIPInputStream gZIPInputStream2 = new GZIPInputStream(new ByteArrayInputStream(bArr), i);
                try {
                    byte[] bArr2 = new byte[i];
                    gZIPInputStream2.read(bArr2);
                    try {
                        gZIPInputStream2.close();
                    } catch (IOException unused) {
                    }
                    return bArr2;
                } catch (IOException unused2) {
                    gZIPInputStream = gZIPInputStream2;
                    if (gZIPInputStream != null) {
                        try {
                            gZIPInputStream.close();
                        } catch (IOException unused3) {
                        }
                    }
                    return bArr;
                } catch (Throwable th) {
                    th = th;
                    gZIPInputStream = gZIPInputStream2;
                    if (gZIPInputStream != null) {
                        try {
                            gZIPInputStream.close();
                        } catch (IOException unused4) {
                        }
                    }
                    throw th;
                }
            } catch (IOException unused5) {
            } catch (Throwable th2) {
                th = th2;
            }
        }
    }

    protected fp(byte b2, int i, byte[] bArr) {
        this((short) 1, b2, i, bArr);
    }

    protected fp(short s, byte b2, int i, byte[] bArr) {
        this.f405a = (short) 1;
        this.f405a = s;
        this.f403a = b2;
        this.f404a = i;
        this.b = bArr;
    }

    public static fp a(byte b2, int i, byte[] bArr) {
        return new fp(b2, i, bArr);
    }

    public static fp a(short s, byte b2, int i, byte[] bArr) {
        return new fp(s, b2, i, bArr);
    }

    public static fp a(byte[] bArr) {
        if (!m355a(bArr)) {
            return a((byte) 0, bArr.length, bArr);
        }
        ByteBuffer byteBufferOrder = ByteBuffer.wrap(bArr).order(ByteOrder.BIG_ENDIAN);
        byteBufferOrder.getInt();
        short s = byteBufferOrder.getShort();
        byte b2 = byteBufferOrder.get();
        int i = byteBufferOrder.getInt();
        byte[] bArr2 = new byte[byteBufferOrder.getInt()];
        byteBufferOrder.get(bArr2);
        return a(s, b2, i, bArr2);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m355a(byte[] bArr) {
        byte[] bArr2 = f8163a;
        return a(bArr2, bArr, bArr2.length);
    }

    public static boolean a(byte[] bArr, byte[] bArr2, int i) {
        if (bArr.length < i || bArr2.length < i) {
            return false;
        }
        for (int i2 = 0; i2 < i; i2++) {
            if (bArr[i2] != bArr2[i2]) {
                return false;
            }
        }
        return true;
    }
}
