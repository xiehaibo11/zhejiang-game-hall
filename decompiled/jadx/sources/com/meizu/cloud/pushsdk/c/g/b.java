package com.meizu.cloud.pushsdk.c.g;

import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import com.tencent.mm.opensdk.constants.ConstantsAPI;
import java.io.EOFException;
import java.io.InputStream;
import java.nio.charset.Charset;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import kotlin.UByte;
import okhttp3.internal.connection.RealConnection;

/* JADX INFO: loaded from: classes3.dex */
public final class b implements c, d, Cloneable {
    private static final byte[] c = {com.sigmob.sdk.archives.tar.e.H, com.sigmob.sdk.archives.tar.e.I, com.sigmob.sdk.archives.tar.e.J, com.sigmob.sdk.archives.tar.e.K, com.sigmob.sdk.archives.tar.e.L, com.sigmob.sdk.archives.tar.e.M, com.sigmob.sdk.archives.tar.e.N, com.sigmob.sdk.archives.tar.e.O, 56, 57, 97, 98, 99, 100, 101, 102};

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    j f4550a;
    long b;

    public int a(byte[] bArr, int i, int i2) {
        o.a(bArr.length, i, i2);
        j jVar = this.f4550a;
        if (jVar == null) {
            return -1;
        }
        int iMin = Math.min(i2, jVar.c - jVar.b);
        System.arraycopy(jVar.f4560a, jVar.b, bArr, i, iMin);
        jVar.b += iMin;
        this.b -= (long) iMin;
        if (jVar.b == jVar.c) {
            this.f4550a = jVar.a();
            k.a(jVar);
        }
        return iMin;
    }

    public long a() {
        return this.b;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.c
    public long a(m mVar) {
        if (mVar == null) {
            throw new IllegalArgumentException("source == null");
        }
        long j = 0;
        while (true) {
            long jB = mVar.b(this, ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX);
            if (jB == -1) {
                return j;
            }
            j += jB;
        }
    }

    public b a(int i) {
        int i2;
        int i3;
        if (i >= 128) {
            if (i < 2048) {
                i3 = (i >> 6) | PsExtractor.AUDIO_STREAM;
            } else {
                if (i < 65536) {
                    if (i >= 55296 && i <= 57343) {
                        throw new IllegalArgumentException("Unexpected code point: " + Integer.toHexString(i));
                    }
                    i2 = (i >> 12) | 224;
                } else {
                    if (i > 1114111) {
                        throw new IllegalArgumentException("Unexpected code point: " + Integer.toHexString(i));
                    }
                    b((i >> 18) | PsExtractor.VIDEO_STREAM_MASK);
                    i2 = ((i >> 12) & 63) | 128;
                }
                b(i2);
                i3 = ((i >> 6) & 63) | 128;
            }
            b(i3);
            i = (i & 63) | 128;
        }
        b(i);
        return this;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.c
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public b b(e eVar) {
        if (eVar == null) {
            throw new IllegalArgumentException("byteString == null");
        }
        eVar.a(this);
        return this;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.c
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public b b(String str) {
        return a(str, 0, str.length());
    }

    public b a(String str, int i, int i2) {
        int i3;
        if (str == null) {
            throw new IllegalArgumentException("string == null");
        }
        if (i < 0) {
            throw new IllegalAccessError("beginIndex < 0: " + i);
        }
        if (i2 < i) {
            throw new IllegalArgumentException("endIndex < beginIndex: " + i2 + " < " + i);
        }
        if (i2 > str.length()) {
            throw new IllegalArgumentException("endIndex > string.length: " + i2 + " > " + str.length());
        }
        while (i < i2) {
            char cCharAt = str.charAt(i);
            if (cCharAt < 128) {
                j jVarC = c(1);
                byte[] bArr = jVarC.f4560a;
                int i4 = jVarC.c - i;
                int iMin = Math.min(i2, 2048 - i4);
                int i5 = i + 1;
                bArr[i + i4] = (byte) cCharAt;
                while (i5 < iMin) {
                    char cCharAt2 = str.charAt(i5);
                    if (cCharAt2 >= 128) {
                        break;
                    }
                    bArr[i5 + i4] = (byte) cCharAt2;
                    i5++;
                }
                int i6 = (i4 + i5) - jVarC.c;
                jVarC.c += i6;
                this.b += (long) i6;
                i = i5;
            } else {
                if (cCharAt < 2048) {
                    i3 = (cCharAt >> 6) | PsExtractor.AUDIO_STREAM;
                } else if (cCharAt < 55296 || cCharAt > 57343) {
                    b((cCharAt >> '\f') | 224);
                    i3 = ((cCharAt >> 6) & 63) | 128;
                } else {
                    int i7 = i + 1;
                    char cCharAt3 = i7 < i2 ? str.charAt(i7) : (char) 0;
                    if (cCharAt > 56319 || cCharAt3 < 56320 || cCharAt3 > 57343) {
                        b(63);
                        i = i7;
                    } else {
                        int i8 = (((cCharAt & 10239) << 10) | (9215 & cCharAt3)) + 65536;
                        b((i8 >> 18) | PsExtractor.VIDEO_STREAM_MASK);
                        b(((i8 >> 12) & 63) | 128);
                        b(((i8 >> 6) & 63) | 128);
                        b((i8 & 63) | 128);
                        i += 2;
                    }
                }
                b(i3);
                b((cCharAt & '?') | 128);
                i++;
            }
        }
        return this;
    }

    public String a(long j, Charset charset) {
        o.a(this.b, 0L, j);
        if (charset == null) {
            throw new IllegalArgumentException("charset == null");
        }
        if (j > 2147483647L) {
            throw new IllegalArgumentException("byteCount > Integer.MAX_VALUE: " + j);
        }
        if (j == 0) {
            return "";
        }
        j jVar = this.f4550a;
        if (((long) jVar.b) + j > jVar.c) {
            return new String(a(j), charset);
        }
        String str = new String(jVar.f4560a, jVar.b, (int) j, charset);
        jVar.b = (int) (((long) jVar.b) + j);
        this.b -= j;
        if (jVar.b == jVar.c) {
            this.f4550a = jVar.a();
            k.a(jVar);
        }
        return str;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.l
    public void a(b bVar, long j) {
        if (bVar == null) {
            throw new IllegalArgumentException("source == null");
        }
        if (bVar == this) {
            throw new IllegalArgumentException("source == this");
        }
        o.a(bVar.b, 0L, j);
        while (j > 0) {
            if (j < bVar.f4550a.c - bVar.f4550a.b) {
                j jVar = this.f4550a;
                j jVar2 = jVar != null ? jVar.g : null;
                if (jVar2 != null && jVar2.e) {
                    if ((((long) jVar2.c) + j) - ((long) (jVar2.d ? 0 : jVar2.b)) <= ConstantsAPI.AppSupportContentFlag.MMAPP_SUPPORT_XLSX) {
                        bVar.f4550a.a(jVar2, (int) j);
                        bVar.b -= j;
                        this.b += j;
                        return;
                    }
                }
                bVar.f4550a = bVar.f4550a.a((int) j);
            }
            j jVar3 = bVar.f4550a;
            long j2 = jVar3.c - jVar3.b;
            bVar.f4550a = jVar3.a();
            j jVar4 = this.f4550a;
            if (jVar4 == null) {
                this.f4550a = jVar3;
                jVar3.g = jVar3;
                jVar3.f = jVar3;
            } else {
                jVar4.g.a(jVar3).b();
            }
            bVar.b -= j2;
            this.b += j2;
            j -= j2;
        }
    }

    public void a(byte[] bArr) throws EOFException {
        int i = 0;
        while (i < bArr.length) {
            int iA = a(bArr, i, bArr.length - i);
            if (iA == -1) {
                throw new EOFException();
            }
            i += iA;
        }
    }

    public byte[] a(long j) throws EOFException {
        o.a(this.b, 0L, j);
        if (j <= 2147483647L) {
            byte[] bArr = new byte[(int) j];
            a(bArr);
            return bArr;
        }
        throw new IllegalArgumentException("byteCount > Integer.MAX_VALUE: " + j);
    }

    @Override // com.meizu.cloud.pushsdk.c.g.m
    public long b(b bVar, long j) {
        if (bVar == null) {
            throw new IllegalArgumentException("sink == null");
        }
        if (j < 0) {
            throw new IllegalArgumentException("byteCount < 0: " + j);
        }
        long j2 = this.b;
        if (j2 == 0) {
            return -1L;
        }
        if (j > j2) {
            j = j2;
        }
        bVar.a(this, j);
        return j;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.c
    public b b() {
        return this;
    }

    public b b(int i) {
        j jVarC = c(1);
        byte[] bArr = jVarC.f4560a;
        int i2 = jVarC.c;
        jVarC.c = i2 + 1;
        bArr[i2] = (byte) i;
        this.b++;
        return this;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.c
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public b c(byte[] bArr) {
        if (bArr != null) {
            return c(bArr, 0, bArr.length);
        }
        throw new IllegalArgumentException("source == null");
    }

    @Override // com.meizu.cloud.pushsdk.c.g.c
    /* JADX INFO: renamed from: b, reason: merged with bridge method [inline-methods] */
    public b c(byte[] bArr, int i, int i2) {
        if (bArr == null) {
            throw new IllegalArgumentException("source == null");
        }
        long j = i2;
        o.a(bArr.length, i, j);
        int i3 = i2 + i;
        while (i < i3) {
            j jVarC = c(1);
            int iMin = Math.min(i3 - i, 2048 - jVarC.c);
            System.arraycopy(bArr, i, jVarC.f4560a, jVarC.c, iMin);
            i += iMin;
            jVarC.c += iMin;
        }
        this.b += j;
        return this;
    }

    public void b(long j) throws EOFException {
        while (j > 0) {
            if (this.f4550a == null) {
                throw new EOFException();
            }
            int iMin = (int) Math.min(j, r0.c - this.f4550a.b);
            long j2 = iMin;
            this.b -= j2;
            j -= j2;
            this.f4550a.b += iMin;
            if (this.f4550a.b == this.f4550a.c) {
                j jVar = this.f4550a;
                this.f4550a = jVar.a();
                k.a(jVar);
            }
        }
    }

    @Override // com.meizu.cloud.pushsdk.c.g.c
    /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
    public b e(long j) {
        if (j == 0) {
            return b(48);
        }
        boolean z = false;
        int i = 1;
        if (j < 0) {
            j = -j;
            if (j < 0) {
                return b("-9223372036854775808");
            }
            z = true;
        }
        if (j >= 100000000) {
            i = j < 1000000000000L ? j < RealConnection.IDLE_CONNECTION_HEALTHY_NS ? j < 1000000000 ? 9 : 10 : j < 100000000000L ? 11 : 12 : j < 1000000000000000L ? j < 10000000000000L ? 13 : j < 100000000000000L ? 14 : 15 : j < 100000000000000000L ? j < 10000000000000000L ? 16 : 17 : j < 1000000000000000000L ? 18 : 19;
        } else if (j >= com.heytap.mcssdk.constant.a.q) {
            i = j < 1000000 ? j < 100000 ? 5 : 6 : j < 10000000 ? 7 : 8;
        } else if (j >= 100) {
            i = j < 1000 ? 3 : 4;
        } else if (j >= 10) {
            i = 2;
        }
        if (z) {
            i++;
        }
        j jVarC = c(i);
        byte[] bArr = jVarC.f4560a;
        int i2 = jVarC.c + i;
        while (j != 0) {
            i2--;
            bArr[i2] = c[(int) (j % 10)];
            j /= 10;
        }
        if (z) {
            bArr[i2 - 1] = 45;
        }
        jVarC.c += i;
        this.b += (long) i;
        return this;
    }

    j c(int i) {
        if (i < 1 || i > 2048) {
            throw new IllegalArgumentException();
        }
        j jVar = this.f4550a;
        if (jVar != null) {
            j jVar2 = jVar.g;
            return (jVar2.c + i > 2048 || !jVar2.e) ? jVar2.a(k.a()) : jVar2;
        }
        j jVarA = k.a();
        this.f4550a = jVarA;
        jVarA.g = jVarA;
        jVarA.f = jVarA;
        return jVarA;
    }

    public boolean c() {
        return this.b == 0;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.l, java.io.Closeable, java.lang.AutoCloseable, com.meizu.cloud.pushsdk.c.g.m
    public void close() {
    }

    public b d(long j) {
        if (j == 0) {
            return b(48);
        }
        int iNumberOfTrailingZeros = (Long.numberOfTrailingZeros(Long.highestOneBit(j)) / 4) + 1;
        j jVarC = c(iNumberOfTrailingZeros);
        byte[] bArr = jVarC.f4560a;
        int i = jVarC.c;
        for (int i2 = (jVarC.c + iNumberOfTrailingZeros) - 1; i2 >= i; i2--) {
            bArr[i2] = c[(int) (15 & j)];
            j >>>= 4;
        }
        jVarC.c += iNumberOfTrailingZeros;
        this.b += (long) iNumberOfTrailingZeros;
        return this;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.d
    public InputStream d() {
        return new InputStream() { // from class: com.meizu.cloud.pushsdk.c.g.b.1
            @Override // java.io.InputStream
            public int available() {
                return (int) Math.min(b.this.b, 2147483647L);
            }

            @Override // java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
            public void close() {
            }

            @Override // java.io.InputStream
            public int read() {
                if (b.this.b > 0) {
                    return b.this.f() & UByte.MAX_VALUE;
                }
                return -1;
            }

            @Override // java.io.InputStream
            public int read(byte[] bArr, int i, int i2) {
                return b.this.a(bArr, i, i2);
            }

            public String toString() {
                return b.this + ".inputStream()";
            }
        };
    }

    public long e() {
        long j = this.b;
        if (j == 0) {
            return 0L;
        }
        j jVar = this.f4550a.g;
        return (jVar.c >= 2048 || !jVar.e) ? j : j - ((long) (jVar.c - jVar.b));
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        long j = this.b;
        if (j != bVar.b) {
            return false;
        }
        long j2 = 0;
        if (j == 0) {
            return true;
        }
        j jVar = this.f4550a;
        j jVar2 = bVar.f4550a;
        int i = jVar.b;
        int i2 = jVar2.b;
        while (j2 < this.b) {
            long jMin = Math.min(jVar.c - i, jVar2.c - i2);
            int i3 = 0;
            while (i3 < jMin) {
                int i4 = i + 1;
                int i5 = i2 + 1;
                if (jVar.f4560a[i] != jVar2.f4560a[i2]) {
                    return false;
                }
                i3++;
                i = i4;
                i2 = i5;
            }
            if (i == jVar.c) {
                jVar = jVar.f;
                i = jVar.b;
            }
            if (i2 == jVar2.c) {
                jVar2 = jVar2.f;
                i2 = jVar2.b;
            }
            j2 += jMin;
        }
        return true;
    }

    public byte f() {
        if (this.b == 0) {
            throw new IllegalStateException("size == 0");
        }
        j jVar = this.f4550a;
        int i = jVar.b;
        int i2 = jVar.c;
        int i3 = i + 1;
        byte b = jVar.f4560a[i];
        this.b--;
        if (i3 == i2) {
            this.f4550a = jVar.a();
            k.a(jVar);
        } else {
            jVar.b = i3;
        }
        return b;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.l, java.io.Flushable
    public void flush() {
    }

    public e g() {
        return new e(i());
    }

    @Override // com.meizu.cloud.pushsdk.c.g.d
    public String h() {
        try {
            return a(this.b, o.f4563a);
        } catch (EOFException e) {
            throw new AssertionError(e);
        }
    }

    public int hashCode() {
        j jVar = this.f4550a;
        if (jVar == null) {
            return 0;
        }
        int i = 1;
        do {
            int i2 = jVar.c;
            for (int i3 = jVar.b; i3 < i2; i3++) {
                i = (i * 31) + jVar.f4560a[i3];
            }
            jVar = jVar.f;
        } while (jVar != this.f4550a);
        return i;
    }

    @Override // com.meizu.cloud.pushsdk.c.g.d
    public byte[] i() {
        try {
            return a(this.b);
        } catch (EOFException e) {
            throw new AssertionError(e);
        }
    }

    public void j() {
        try {
            b(this.b);
        } catch (EOFException e) {
            throw new AssertionError(e);
        }
    }

    /* JADX INFO: renamed from: k, reason: merged with bridge method [inline-methods] */
    public b clone() {
        b bVar = new b();
        if (this.b == 0) {
            return bVar;
        }
        j jVar = new j(this.f4550a);
        bVar.f4550a = jVar;
        jVar.g = jVar;
        jVar.f = jVar;
        j jVar2 = this.f4550a;
        while (true) {
            jVar2 = jVar2.f;
            if (jVar2 == this.f4550a) {
                bVar.b = this.b;
                return bVar;
            }
            bVar.f4550a.g.a(new j(jVar2));
        }
    }

    public String toString() {
        long j = this.b;
        if (j == 0) {
            return "Buffer[size=0]";
        }
        if (j <= 16) {
            return String.format("Buffer[size=%s data=%s]", Long.valueOf(this.b), clone().g().c());
        }
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("MD5");
            messageDigest.update(this.f4550a.f4560a, this.f4550a.b, this.f4550a.c - this.f4550a.b);
            j jVar = this.f4550a;
            while (true) {
                jVar = jVar.f;
                if (jVar == this.f4550a) {
                    return String.format("Buffer[size=%s md5=%s]", Long.valueOf(this.b), e.a(messageDigest.digest()).c());
                }
                messageDigest.update(jVar.f4560a, jVar.b, jVar.c - jVar.b);
            }
        } catch (NoSuchAlgorithmException unused) {
            throw new AssertionError();
        }
    }
}
