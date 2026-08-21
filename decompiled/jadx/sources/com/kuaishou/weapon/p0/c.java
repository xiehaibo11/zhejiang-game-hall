package com.kuaishou.weapon.p0;

import java.io.UnsupportedEncodingException;
import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes2.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f2723a = 0;
    public static final int b = 1;
    public static final int c = 2;
    public static final int d = 4;
    public static final int e = 8;
    public static final int f = 16;
    static final /* synthetic */ boolean g = !c.class.desiredAssertionStatus();
    private static final Pattern h = Pattern.compile("^([A-Za-z0-9+/]{4})*([A-Za-z0-9+/]{4}|[A-Za-z0-9+/]{3}=|[A-Za-z0-9+/]{2}==)$");

    static abstract class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public byte[] f2724a;
        public int b;

        a() {
        }

        public abstract int a(int i);

        public abstract boolean a(byte[] bArr, int i, int i2, boolean z);
    }

    static class b extends a {
        private static final int[] c = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, -1, 63, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -2, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, -1, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
        private static final int[] d = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, -1, -1, -1, -2, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, 63, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
        private static final int e = -1;
        private static final int f = -2;
        private int g;
        private int h;
        private final int[] i;

        public b(int i, byte[] bArr) {
            this.f2724a = bArr;
            this.i = (i & 8) == 0 ? c : d;
            this.g = 0;
            this.h = 0;
        }

        @Override // com.kuaishou.weapon.p0.c.a
        public int a(int i) {
            return ((i * 3) / 4) + 10;
        }

        /* JADX WARN: Code restructure failed: missing block: B:69:0x0109, code lost:
        
            if (r5 != 4) goto L73;
         */
        @Override // com.kuaishou.weapon.p0.c.a
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public boolean a(byte[] r18, int r19, int r20, boolean r21) {
            /*
                Method dump skipped, instruction units count: 294
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.kuaishou.weapon.p0.c.b.a(byte[], int, int, boolean):boolean");
        }
    }

    /* JADX INFO: renamed from: com.kuaishou.weapon.p0.c$c, reason: collision with other inner class name */
    static class C0091c extends a {
        public static final int c = 19;
        static final /* synthetic */ boolean h = !c.class.desiredAssertionStatus();
        private static final byte[] i = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, com.sigmob.sdk.archives.tar.e.P, 77, 78, 79, 80, 81, 82, com.sigmob.sdk.archives.tar.e.Q, 84, 85, 86, 87, com.sigmob.sdk.archives.tar.e.S, 89, 90, 97, 98, 99, 100, 101, 102, com.sigmob.sdk.archives.tar.e.T, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, com.sigmob.sdk.archives.tar.e.R, 121, 122, com.sigmob.sdk.archives.tar.e.H, com.sigmob.sdk.archives.tar.e.I, com.sigmob.sdk.archives.tar.e.J, com.sigmob.sdk.archives.tar.e.K, com.sigmob.sdk.archives.tar.e.L, com.sigmob.sdk.archives.tar.e.M, com.sigmob.sdk.archives.tar.e.N, com.sigmob.sdk.archives.tar.e.O, 56, 57, 43, 47};
        private static final byte[] j = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, com.sigmob.sdk.archives.tar.e.P, 77, 78, 79, 80, 81, 82, com.sigmob.sdk.archives.tar.e.Q, 84, 85, 86, 87, com.sigmob.sdk.archives.tar.e.S, 89, 90, 97, 98, 99, 100, 101, 102, com.sigmob.sdk.archives.tar.e.T, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, com.sigmob.sdk.archives.tar.e.R, 121, 122, com.sigmob.sdk.archives.tar.e.H, com.sigmob.sdk.archives.tar.e.I, com.sigmob.sdk.archives.tar.e.J, com.sigmob.sdk.archives.tar.e.K, com.sigmob.sdk.archives.tar.e.L, com.sigmob.sdk.archives.tar.e.M, com.sigmob.sdk.archives.tar.e.N, com.sigmob.sdk.archives.tar.e.O, 56, 57, 45, 95};
        int d;
        public final boolean e;
        public final boolean f;
        public final boolean g;
        private final byte[] k;
        private int l;
        private final byte[] m;

        public C0091c(int i2, byte[] bArr) {
            this.f2724a = bArr;
            this.e = (i2 & 1) == 0;
            this.f = (i2 & 2) == 0;
            this.g = (i2 & 4) != 0;
            this.m = (i2 & 8) == 0 ? i : j;
            this.k = new byte[2];
            this.d = 0;
            this.l = this.f ? 19 : -1;
        }

        @Override // com.kuaishou.weapon.p0.c.a
        public int a(int i2) {
            return ((i2 * 8) / 5) + 10;
        }

        /* JADX WARN: Removed duplicated region for block: B:100:0x00e6 A[SYNTHETIC] */
        /* JADX WARN: Removed duplicated region for block: B:12:0x0050  */
        /* JADX WARN: Removed duplicated region for block: B:27:0x0094  */
        /*  JADX ERROR: JadxOverflowException in pass: RegionMakerVisitor
            jadx.core.utils.exceptions.JadxOverflowException: Regions count limit reached
            	at jadx.core.utils.ErrorsCounter.addError(ErrorsCounter.java:59)
            	at jadx.core.utils.ErrorsCounter.error(ErrorsCounter.java:31)
            	at jadx.core.dex.attributes.nodes.NotificationAttrNode.addError(NotificationAttrNode.java:19)
            */
        @Override // com.kuaishou.weapon.p0.c.a
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public boolean a(byte[] r18, int r19, int r20, boolean r21) {
            /*
                Method dump skipped, instruction units count: 519
                To view this dump add '--comments-level debug' option
            */
            throw new UnsupportedOperationException("Method not decompiled: com.kuaishou.weapon.p0.c.C0091c.a(byte[], int, int, boolean):boolean");
        }
    }

    private c() {
    }

    public static String a(byte[] bArr, String str) {
        try {
            return new String(c(bArr, 0), str);
        } catch (UnsupportedEncodingException e2) {
            throw new AssertionError(e2);
        }
    }

    public static boolean a(String str) {
        if (str != null) {
            try {
                if (!str.equals("")) {
                    return h.matcher(str).matches();
                }
            } catch (Throwable unused) {
            }
        }
        return false;
    }

    public static byte[] a(String str, int i) {
        return a(str.getBytes(), i);
    }

    public static byte[] a(byte[] bArr) {
        return a(bArr, 0, bArr.length, 0);
    }

    public static byte[] a(byte[] bArr, int i) {
        return a(bArr, 0, bArr.length, i);
    }

    public static byte[] a(byte[] bArr, int i, int i2, int i3) {
        b bVar = new b(i3, new byte[(i2 * 3) / 4]);
        if (!bVar.a(bArr, i, i2, true)) {
            throw new IllegalArgumentException("bad base-64");
        }
        if (bVar.b == bVar.f2724a.length) {
            return bVar.f2724a;
        }
        byte[] bArr2 = new byte[bVar.b];
        System.arraycopy(bVar.f2724a, 0, bArr2, 0, bVar.b);
        return bArr2;
    }

    public static String b(String str, int i) {
        try {
            return new String(a(str.getBytes(), i));
        } catch (Throwable unused) {
            return "";
        }
    }

    public static String b(byte[] bArr, int i) {
        try {
            return new String(c(bArr, i), "US-ASCII");
        } catch (UnsupportedEncodingException e2) {
            throw new AssertionError(e2);
        }
    }

    public static String b(byte[] bArr, int i, int i2, int i3) {
        try {
            return new String(c(bArr, i, i2, i3), "US-ASCII");
        } catch (Throwable th) {
            throw new AssertionError(th);
        }
    }

    public static byte[] c(byte[] bArr, int i) {
        try {
            return c(bArr, 0, bArr.length, i);
        } catch (Throwable unused) {
            return null;
        }
    }

    public static byte[] c(byte[] bArr, int i, int i2, int i3) {
        C0091c c0091c = new C0091c(i3, null);
        int i4 = (i2 / 3) * 4;
        if (!c0091c.e) {
            int i5 = i2 % 3;
            if (i5 == 1) {
                i4 += 2;
            } else if (i5 == 2) {
                i4 += 3;
            }
        } else if (i2 % 3 > 0) {
            i4 += 4;
        }
        if (c0091c.f && i2 > 0) {
            i4 += (((i2 - 1) / 57) + 1) * (c0091c.g ? 2 : 1);
        }
        c0091c.f2724a = new byte[i4];
        c0091c.a(bArr, i, i2, true);
        if (g || c0091c.b == i4) {
            return c0091c.f2724a;
        }
        throw new AssertionError();
    }
}
