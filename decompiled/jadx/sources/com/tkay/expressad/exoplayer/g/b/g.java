package com.tkay.expressad.exoplayer.g.b;

import android.util.Log;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.k.s;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Locale;
import kotlin.UByte;

/* JADX INFO: loaded from: classes3.dex */
public final class g implements com.tkay.expressad.exoplayer.g.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final a f6594a = new a() { // from class: com.tkay.expressad.exoplayer.g.b.g.1
        @Override // com.tkay.expressad.exoplayer.g.b.g.a
        public final boolean a(int i2, int i3, int i4, int i5, int i6) {
            return false;
        }
    };
    public static final int b = af.f("ID3");
    public static final int c = 10;
    private static final String d = "Id3Decoder";
    private static final int e = 128;
    private static final int f = 64;
    private static final int g = 32;
    private static final int h = 8;
    private static final int i = 4;
    private static final int j = 64;
    private static final int k = 2;
    private static final int l = 1;
    private static final int m = 0;
    private static final int n = 1;
    private static final int o = 2;
    private static final int p = 3;
    private final a q;

    public interface a {
        boolean a(int i, int i2, int i3, int i4, int i5);
    }

    private static String a(int i2) {
        return i2 != 1 ? i2 != 2 ? i2 != 3 ? "ISO-8859-1" : "UTF-8" : "UTF-16BE" : "UTF-16";
    }

    private static int b(int i2) {
        return (i2 == 0 || i2 == 3) ? 1 : 2;
    }

    public g() {
        this(null);
    }

    private g(a aVar) {
        this.q = aVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:42:0x009f  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00b7 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:47:0x00b8  */
    @Override // com.tkay.expressad.exoplayer.g.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final com.tkay.expressad.exoplayer.g.a a(com.tkay.expressad.exoplayer.g.e r14) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 291
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.g.b.g.a(com.tkay.expressad.exoplayer.g.e):com.tkay.expressad.exoplayer.g.a");
    }

    /* JADX WARN: Removed duplicated region for block: B:42:0x0095  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x00ad A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:47:0x00ae  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private com.tkay.expressad.exoplayer.g.a a(byte[] r13, int r14) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 281
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.g.b.g.a(byte[], int):com.tkay.expressad.exoplayer.g.a");
    }

    private static b a(s sVar) {
        if (sVar.a() < 10) {
            Log.w(d, "Data too short to be an ID3 tag");
            return null;
        }
        int iG = sVar.g();
        if (iG != b) {
            Log.w(d, "Unexpected first three bytes of ID3 tag header: ".concat(String.valueOf(iG)));
            return null;
        }
        int iD = sVar.d();
        sVar.d(1);
        int iD2 = sVar.d();
        int iL = sVar.l();
        if (iD == 2) {
            if ((iD2 & 64) != 0) {
                Log.w(d, "Skipped ID3 tag with majorVersion=2 and undefined compression scheme");
                return null;
            }
        } else if (iD == 3) {
            if ((iD2 & 64) != 0) {
                int i2 = sVar.i();
                sVar.d(i2);
                iL -= i2 + 4;
            }
        } else {
            if (iD != 4) {
                Log.w(d, "Skipped ID3 tag with unsupported majorVersion=".concat(String.valueOf(iD)));
                return null;
            }
            if ((iD2 & 64) != 0) {
                int iL2 = sVar.l();
                sVar.d(iL2 - 4);
                iL -= iL2;
            }
            if ((iD2 & 16) != 0) {
                iL -= 10;
            }
        }
        return new b(iD, iD < 4 && (iD2 & 128) != 0, iL);
    }

    /* JADX WARN: Removed duplicated region for block: B:32:0x0078 A[PHI: r3
      0x0078: PHI (r3v15 boolean) = (r3v5 boolean), (r3v18 boolean) binds: [B:40:0x0087, B:31:0x0076] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:33:0x007a A[PHI: r3
      0x007a: PHI (r3v7 boolean) = (r3v5 boolean), (r3v18 boolean) binds: [B:40:0x0087, B:31:0x0076] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static boolean a(com.tkay.expressad.exoplayer.k.s r18, int r19, int r20, boolean r21) {
        /*
            r1 = r18
            r0 = r19
            int r2 = r18.c()
        L8:
            int r3 = r18.a()     // Catch: java.lang.Throwable -> Lb4
            r4 = 1
            r5 = r20
            if (r3 < r5) goto Lb0
            r3 = 3
            r6 = 0
            if (r0 < r3) goto L22
            int r7 = r18.i()     // Catch: java.lang.Throwable -> Lb4
            long r8 = r18.h()     // Catch: java.lang.Throwable -> Lb4
            int r10 = r18.e()     // Catch: java.lang.Throwable -> Lb4
            goto L2c
        L22:
            int r7 = r18.g()     // Catch: java.lang.Throwable -> Lb4
            int r8 = r18.g()     // Catch: java.lang.Throwable -> Lb4
            long r8 = (long) r8
            r10 = r6
        L2c:
            r11 = 0
            if (r7 != 0) goto L3a
            int r7 = (r8 > r11 ? 1 : (r8 == r11 ? 0 : -1))
            if (r7 != 0) goto L3a
            if (r10 != 0) goto L3a
            r1.c(r2)
            return r4
        L3a:
            r7 = 4
            if (r0 != r7) goto L6b
            if (r21 != 0) goto L6b
            r13 = 8421504(0x808080, double:4.160776E-317)
            long r13 = r13 & r8
            int r11 = (r13 > r11 ? 1 : (r13 == r11 ? 0 : -1))
            if (r11 == 0) goto L4b
            r1.c(r2)
            return r6
        L4b:
            r11 = 255(0xff, double:1.26E-321)
            long r13 = r8 & r11
            r15 = 8
            long r15 = r8 >> r15
            long r15 = r15 & r11
            r17 = 7
            long r15 = r15 << r17
            long r13 = r13 | r15
            r15 = 16
            long r15 = r8 >> r15
            long r15 = r15 & r11
            r17 = 14
            long r15 = r15 << r17
            long r13 = r13 | r15
            r15 = 24
            long r8 = r8 >> r15
            long r8 = r8 & r11
            r11 = 21
            long r8 = r8 << r11
            long r8 = r8 | r13
        L6b:
            if (r0 != r7) goto L7c
            r3 = r10 & 64
            if (r3 == 0) goto L73
            r3 = r4
            goto L74
        L73:
            r3 = r6
        L74:
            r7 = r10 & 1
            if (r7 == 0) goto L7a
        L78:
            r7 = r4
            goto L8c
        L7a:
            r7 = r6
            goto L8c
        L7c:
            if (r0 != r3) goto L8a
            r3 = r10 & 32
            if (r3 == 0) goto L84
            r3 = r4
            goto L85
        L84:
            r3 = r6
        L85:
            r7 = r10 & 128(0x80, float:1.8E-43)
            if (r7 == 0) goto L7a
            goto L78
        L8a:
            r3 = r6
            r7 = r3
        L8c:
            if (r3 == 0) goto L8f
            goto L90
        L8f:
            r4 = r6
        L90:
            if (r7 == 0) goto L94
            int r4 = r4 + 4
        L94:
            long r3 = (long) r4
            int r3 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r3 >= 0) goto L9d
            r1.c(r2)
            return r6
        L9d:
            int r3 = r18.a()     // Catch: java.lang.Throwable -> Lb4
            long r3 = (long) r3
            int r3 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r3 >= 0) goto Laa
            r1.c(r2)
            return r6
        Laa:
            int r3 = (int) r8
            r1.d(r3)     // Catch: java.lang.Throwable -> Lb4
            goto L8
        Lb0:
            r1.c(r2)
            return r4
        Lb4:
            r0 = move-exception
            r1.c(r2)
            throw r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.g.b.g.a(com.tkay.expressad.exoplayer.k.s, int, int, boolean):boolean");
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:193:0x0391 A[Catch: all -> 0x03b1, UnsupportedEncodingException -> 0x03b5, TRY_LEAVE, TryCatch #1 {all -> 0x03b1, blocks: (B:193:0x0391, B:195:0x03ad, B:147:0x0288, B:155:0x02bb, B:174:0x0315, B:184:0x0356, B:190:0x0370, B:191:0x0380), top: B:214:0x010e }] */
    /* JADX WARN: Removed duplicated region for block: B:91:0x011a  */
    /* JADX WARN: Type inference failed for: r0v1, types: [com.tkay.expressad.exoplayer.g.b.h] */
    /* JADX WARN: Type inference failed for: r5v15 */
    /* JADX WARN: Type inference failed for: r5v16 */
    /* JADX WARN: Type inference failed for: r5v28, types: [com.tkay.expressad.exoplayer.g.b.h] */
    /* JADX WARN: Type inference failed for: r5v39 */
    /* JADX WARN: Type inference failed for: r5v40 */
    /* JADX WARN: Type inference failed for: r5v41 */
    /* JADX WARN: Type inference failed for: r5v42 */
    /* JADX WARN: Type inference failed for: r5v43 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static com.tkay.expressad.exoplayer.g.b.h a(int r19, com.tkay.expressad.exoplayer.k.s r20, boolean r21, int r22, com.tkay.expressad.exoplayer.g.b.g.a r23) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 988
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.g.b.g.a(int, com.tkay.expressad.exoplayer.k.s, boolean, int, com.tkay.expressad.exoplayer.g.b.g$a):com.tkay.expressad.exoplayer.g.b.h");
    }

    private static k a(s sVar, int i2) {
        if (i2 <= 0) {
            return null;
        }
        int iD = sVar.d();
        String strA = a(iD);
        int i3 = i2 - 1;
        byte[] bArr = new byte[i3];
        sVar.a(bArr, 0, i3);
        int iA = a(bArr, 0, iD);
        String str = new String(bArr, 0, iA, strA);
        int iB = iA + b(iD);
        return new k("TXXX", str, a(bArr, iB, a(bArr, iB, iD), strA));
    }

    private static k a(s sVar, int i2, String str) {
        if (i2 <= 0) {
            return null;
        }
        int iD = sVar.d();
        String strA = a(iD);
        int i3 = i2 - 1;
        byte[] bArr = new byte[i3];
        sVar.a(bArr, 0, i3);
        return new k(str, null, new String(bArr, 0, a(bArr, 0, iD), strA));
    }

    private static l b(s sVar, int i2) {
        if (i2 <= 0) {
            return null;
        }
        int iD = sVar.d();
        String strA = a(iD);
        int i3 = i2 - 1;
        byte[] bArr = new byte[i3];
        sVar.a(bArr, 0, i3);
        int iA = a(bArr, 0, iD);
        String str = new String(bArr, 0, iA, strA);
        int iB = iA + b(iD);
        return new l("WXXX", str, a(bArr, iB, b(bArr, iB), "ISO-8859-1"));
    }

    private static l b(s sVar, int i2, String str) {
        byte[] bArr = new byte[i2];
        sVar.a(bArr, 0, i2);
        return new l(str, null, new String(bArr, 0, b(bArr, 0), "ISO-8859-1"));
    }

    private static j c(s sVar, int i2) {
        byte[] bArr = new byte[i2];
        sVar.a(bArr, 0, i2);
        int iB = b(bArr, 0);
        return new j(new String(bArr, 0, iB, "ISO-8859-1"), b(bArr, iB + 1, i2));
    }

    private static f d(s sVar, int i2) {
        int iD = sVar.d();
        String strA = a(iD);
        int i3 = i2 - 1;
        byte[] bArr = new byte[i3];
        sVar.a(bArr, 0, i3);
        int iB = b(bArr, 0);
        String str = new String(bArr, 0, iB, "ISO-8859-1");
        int i4 = iB + 1;
        int iA = a(bArr, i4, iD);
        String strA2 = a(bArr, i4, iA, strA);
        int iB2 = iA + b(iD);
        int iA2 = a(bArr, iB2, iD);
        return new f(str, strA2, a(bArr, iB2, iA2, strA), b(bArr, iA2 + b(iD), i3));
    }

    private static com.tkay.expressad.exoplayer.g.b.a a(s sVar, int i2, int i3) {
        int iB;
        String strConcat;
        int iD = sVar.d();
        String strA = a(iD);
        int i4 = i2 - 1;
        byte[] bArr = new byte[i4];
        sVar.a(bArr, 0, i4);
        if (i3 == 2) {
            strConcat = "image/" + af.d(new String(bArr, 0, 3, "ISO-8859-1"));
            if ("image/jpg".equals(strConcat)) {
                strConcat = "image/jpeg";
            }
            iB = 2;
        } else {
            iB = b(bArr, 0);
            String strD = af.d(new String(bArr, 0, iB, "ISO-8859-1"));
            strConcat = strD.indexOf(47) == -1 ? "image/".concat(String.valueOf(strD)) : strD;
        }
        int i5 = bArr[iB + 1] & UByte.MAX_VALUE;
        int i6 = iB + 2;
        int iA = a(bArr, i6, iD);
        return new com.tkay.expressad.exoplayer.g.b.a(strConcat, new String(bArr, i6, iA - i6, strA), i5, b(bArr, iA + b(iD), i4));
    }

    private static e e(s sVar, int i2) {
        if (i2 < 4) {
            return null;
        }
        int iD = sVar.d();
        String strA = a(iD);
        byte[] bArr = new byte[3];
        sVar.a(bArr, 0, 3);
        String str = new String(bArr, 0, 3);
        int i3 = i2 - 4;
        byte[] bArr2 = new byte[i3];
        sVar.a(bArr2, 0, i3);
        int iA = a(bArr2, 0, iD);
        String str2 = new String(bArr2, 0, iA, strA);
        int iB = iA + b(iD);
        return new e(str, str2, a(bArr2, iB, a(bArr2, iB, iD), strA));
    }

    private static c a(s sVar, int i2, int i3, boolean z, int i4, a aVar) throws Throwable {
        int iC = sVar.c();
        int iB = b(sVar.f6774a, iC);
        String str = new String(sVar.f6774a, iC, iB - iC, "ISO-8859-1");
        sVar.c(iB + 1);
        int i5 = sVar.i();
        int i6 = sVar.i();
        long jH = sVar.h();
        long j2 = jH == 4294967295L ? -1L : jH;
        long jH2 = sVar.h();
        long j3 = jH2 == 4294967295L ? -1L : jH2;
        ArrayList arrayList = new ArrayList();
        int i7 = iC + i2;
        while (sVar.c() < i7) {
            h hVarA = a(i3, sVar, z, i4, aVar);
            if (hVarA != null) {
                arrayList.add(hVarA);
            }
        }
        h[] hVarArr = new h[arrayList.size()];
        arrayList.toArray(hVarArr);
        return new c(str, i5, i6, j2, j3, hVarArr);
    }

    private static d b(s sVar, int i2, int i3, boolean z, int i4, a aVar) throws Throwable {
        int iC = sVar.c();
        int iB = b(sVar.f6774a, iC);
        String str = new String(sVar.f6774a, iC, iB - iC, "ISO-8859-1");
        sVar.c(iB + 1);
        int iD = sVar.d();
        boolean z2 = (iD & 2) != 0;
        boolean z3 = (iD & 1) != 0;
        int iD2 = sVar.d();
        String[] strArr = new String[iD2];
        for (int i5 = 0; i5 < iD2; i5++) {
            int iC2 = sVar.c();
            int iB2 = b(sVar.f6774a, iC2);
            strArr[i5] = new String(sVar.f6774a, iC2, iB2 - iC2, "ISO-8859-1");
            sVar.c(iB2 + 1);
        }
        ArrayList arrayList = new ArrayList();
        int i6 = iC + i2;
        while (sVar.c() < i6) {
            h hVarA = a(i3, sVar, z, i4, aVar);
            if (hVarA != null) {
                arrayList.add(hVarA);
            }
        }
        h[] hVarArr = new h[arrayList.size()];
        arrayList.toArray(hVarArr);
        return new d(str, z2, z3, strArr, hVarArr);
    }

    private static com.tkay.expressad.exoplayer.g.b.b c(s sVar, int i2, String str) {
        byte[] bArr = new byte[i2];
        sVar.a(bArr, 0, i2);
        return new com.tkay.expressad.exoplayer.g.b.b(str, bArr);
    }

    private static int f(s sVar, int i2) {
        byte[] bArr = sVar.f6774a;
        int iC = sVar.c();
        while (true) {
            int i3 = iC + 1;
            if (i3 >= i2) {
                return i2;
            }
            if ((bArr[iC] & UByte.MAX_VALUE) == 255 && bArr[i3] == 0) {
                System.arraycopy(bArr, iC + 2, bArr, i3, (i2 - iC) - 2);
                i2--;
            }
            iC = i3;
        }
    }

    private static String a(int i2, int i3, int i4, int i5, int i6) {
        return i2 == 2 ? String.format(Locale.US, "%c%c%c", Integer.valueOf(i3), Integer.valueOf(i4), Integer.valueOf(i5)) : String.format(Locale.US, "%c%c%c%c", Integer.valueOf(i3), Integer.valueOf(i4), Integer.valueOf(i5), Integer.valueOf(i6));
    }

    private static int a(byte[] bArr, int i2, int i3) {
        int iB = b(bArr, i2);
        if (i3 == 0 || i3 == 3) {
            return iB;
        }
        while (iB < bArr.length - 1) {
            if (iB % 2 == 0 && bArr[iB + 1] == 0) {
                return iB;
            }
            iB = b(bArr, iB + 1);
        }
        return bArr.length;
    }

    private static int b(byte[] bArr, int i2) {
        while (i2 < bArr.length) {
            if (bArr[i2] == 0) {
                return i2;
            }
            i2++;
        }
        return bArr.length;
    }

    private static byte[] b(byte[] bArr, int i2, int i3) {
        return i3 <= i2 ? new byte[0] : Arrays.copyOfRange(bArr, i2, i3);
    }

    private static String a(byte[] bArr, int i2, int i3, String str) {
        return (i3 <= i2 || i3 > bArr.length) ? "" : new String(bArr, i2, i3 - i2, str);
    }

    private static final class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final int f6595a;
        private final boolean b;
        private final int c;

        public b(int i, boolean z, int i2) {
            this.f6595a = i;
            this.b = z;
            this.c = i2;
        }
    }
}
