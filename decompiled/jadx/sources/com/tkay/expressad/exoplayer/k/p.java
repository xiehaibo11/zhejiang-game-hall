package com.tkay.expressad.exoplayer.k;

import android.util.Log;
import java.nio.ByteBuffer;
import java.util.Arrays;
import kotlin.UByte;

/* JADX INFO: loaded from: classes3.dex */
public final class p {
    public static final int b = 255;
    private static final String d = "NalUnitUtil";
    private static final int e = 6;
    private static final int f = 7;
    private static final int g = 39;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final byte[] f6769a = {0, 0, 0, 1};
    public static final float[] c = {1.0f, 1.0f, 1.0909091f, 0.90909094f, 1.4545455f, 1.2121212f, 2.1818182f, 1.8181819f, 2.909091f, 2.4242425f, 1.6363636f, 1.3636364f, 1.939394f, 1.6161616f, 1.3333334f, 1.5f, 2.0f};
    private static final Object h = new Object();
    private static int[] i = new int[10];

    public static final class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f6771a;
        public final int b;
        public final int c;
        public final float d;
        public final boolean e;
        public final boolean f;
        public final int g;
        public final int h;
        public final int i;
        public final boolean j;

        public b(int i, int i2, int i3, float f, boolean z, boolean z2, int i4, int i5, int i6, boolean z3) {
            this.f6771a = i;
            this.b = i2;
            this.c = i3;
            this.d = f;
            this.e = z;
            this.f = z2;
            this.g = i4;
            this.h = i5;
            this.i = i6;
            this.j = z3;
        }
    }

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final int f6770a;
        public final int b;
        public final boolean c;

        public a(int i, int i2, boolean z) {
            this.f6770a = i;
            this.b = i2;
            this.c = z;
        }
    }

    public static int a(byte[] bArr, int i2) {
        int i3;
        synchronized (h) {
            int i4 = 0;
            int i5 = 0;
            while (i4 < i2) {
                while (true) {
                    if (i4 >= i2 - 2) {
                        i4 = i2;
                        break;
                    }
                    if (bArr[i4] == 0 && bArr[i4 + 1] == 0 && bArr[i4 + 2] == 3) {
                        break;
                    }
                    i4++;
                }
                if (i4 < i2) {
                    if (i.length <= i5) {
                        int[] iArr = i;
                        i = Arrays.copyOf(iArr, iArr.length * 2);
                    }
                    i[i5] = i4;
                    i4 += 3;
                    i5++;
                }
            }
            i3 = i2 - i5;
            int i6 = 0;
            int i7 = 0;
            for (int i8 = 0; i8 < i5; i8++) {
                int i9 = i[i8] - i7;
                System.arraycopy(bArr, i7, bArr, i6, i9);
                int i10 = i6 + i9;
                int i11 = i10 + 1;
                bArr[i10] = 0;
                i6 = i11 + 1;
                bArr[i11] = 0;
                i7 += i9 + 3;
            }
            System.arraycopy(bArr, i7, bArr, i6, i3 - i6);
        }
        return i3;
    }

    public static void a(ByteBuffer byteBuffer) {
        int iPosition = byteBuffer.position();
        int i2 = 0;
        int i3 = 0;
        while (true) {
            int i4 = i2 + 1;
            if (i4 < iPosition) {
                int i5 = byteBuffer.get(i2) & UByte.MAX_VALUE;
                if (i3 == 3) {
                    if (i5 == 1 && (byteBuffer.get(i4) & 31) == 7) {
                        ByteBuffer byteBufferDuplicate = byteBuffer.duplicate();
                        byteBufferDuplicate.position(i2 - 3);
                        byteBufferDuplicate.limit(iPosition);
                        byteBuffer.position(0);
                        byteBuffer.put(byteBufferDuplicate);
                        return;
                    }
                } else if (i5 == 0) {
                    i3++;
                }
                if (i5 != 0) {
                    i3 = 0;
                }
                i2 = i4;
            } else {
                byteBuffer.clear();
                return;
            }
        }
    }

    public static boolean a(String str, byte b2) {
        return ("video/avc".equals(str) && (b2 & 31) == 6) || ("video/hevc".equals(str) && ((b2 & 126) >> 1) == 39);
    }

    private static int b(byte[] bArr, int i2) {
        return bArr[i2 + 3] & 31;
    }

    private static int c(byte[] bArr, int i2) {
        return (bArr[i2 + 3] & 126) >> 1;
    }

    public static b a(byte[] bArr, int i2, int i3) {
        int iC;
        boolean z;
        int i4;
        int iC2;
        boolean z2;
        float f2;
        int i5;
        t tVar = new t(bArr, i2, i3);
        tVar.a(8);
        int iB = tVar.b(8);
        tVar.a(16);
        int iC3 = tVar.c();
        if (iB == 100 || iB == 110 || iB == 122 || iB == 244 || iB == 44 || iB == 83 || iB == 86 || iB == 118 || iB == 128 || iB == 138) {
            iC = tVar.c();
            boolean zB = iC == 3 ? tVar.b() : false;
            tVar.c();
            tVar.c();
            tVar.a();
            if (tVar.b()) {
                int i6 = iC != 3 ? 8 : 12;
                int i7 = 0;
                while (i7 < i6) {
                    if (tVar.b()) {
                        int i8 = i7 < 6 ? 16 : 64;
                        int iD = 8;
                        int i9 = 8;
                        for (int i10 = 0; i10 < i8; i10++) {
                            if (iD != 0) {
                                iD = ((tVar.d() + i9) + 256) % 256;
                            }
                            if (iD != 0) {
                                i9 = iD;
                            }
                        }
                    }
                    i7++;
                }
            }
            z = zB;
        } else {
            z = false;
            iC = 1;
        }
        int iC4 = tVar.c() + 4;
        int iC5 = tVar.c();
        if (iC5 == 0) {
            i4 = iC3;
            z2 = false;
            iC2 = tVar.c() + 4;
        } else if (iC5 == 1) {
            boolean zB2 = tVar.b();
            tVar.d();
            tVar.d();
            long jC = tVar.c();
            i4 = iC3;
            for (int i11 = 0; i11 < jC; i11++) {
                tVar.c();
            }
            iC2 = 0;
            z2 = zB2;
        } else {
            i4 = iC3;
            iC2 = 0;
            z2 = false;
        }
        tVar.c();
        tVar.a();
        int iC6 = tVar.c() + 1;
        int iC7 = tVar.c() + 1;
        boolean zB3 = tVar.b();
        int i12 = (2 - (zB3 ? 1 : 0)) * iC7;
        if (!zB3) {
            tVar.a();
        }
        tVar.a();
        int i13 = iC6 * 16;
        int i14 = i12 * 16;
        if (tVar.b()) {
            int iC8 = tVar.c();
            int iC9 = tVar.c();
            int iC10 = tVar.c();
            int iC11 = tVar.c();
            if (iC == 0) {
                i5 = 2 - (zB3 ? 1 : 0);
            } else {
                int i15 = iC == 3 ? 1 : 2;
                i5 = (2 - (zB3 ? 1 : 0)) * (iC == 1 ? 2 : 1);
                i = i15;
            }
            i13 -= (iC8 + iC9) * i;
            i14 -= (iC10 + iC11) * i5;
        }
        int i16 = i13;
        int i17 = i14;
        float f3 = 1.0f;
        if (tVar.b() && tVar.b()) {
            int iB2 = tVar.b(8);
            if (iB2 == 255) {
                int iB3 = tVar.b(16);
                int iB4 = tVar.b(16);
                if (iB3 != 0 && iB4 != 0) {
                    f3 = iB3 / iB4;
                }
            } else {
                float[] fArr = c;
                if (iB2 < fArr.length) {
                    f2 = fArr[iB2];
                } else {
                    Log.w(d, "Unexpected aspect_ratio_idc value: ".concat(String.valueOf(iB2)));
                }
            }
            f2 = f3;
        } else {
            f2 = f3;
        }
        return new b(i4, i16, i17, f2, z, zB3, iC4, iC5, iC2, z2);
    }

    private static a b(byte[] bArr, int i2, int i3) {
        t tVar = new t(bArr, i2, i3);
        tVar.a(8);
        int iC = tVar.c();
        int iC2 = tVar.c();
        tVar.a();
        return new a(iC, iC2, tVar.b());
    }

    /* JADX WARN: Code restructure failed: missing block: B:68:0x0096, code lost:
    
        r8 = true;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static int a(byte[] r7, int r8, int r9, boolean[] r10) {
        /*
            int r0 = r9 - r8
            r1 = 0
            r2 = 1
            if (r0 < 0) goto L8
            r3 = r2
            goto L9
        L8:
            r3 = r1
        L9:
            com.tkay.expressad.exoplayer.k.a.b(r3)
            if (r0 != 0) goto Lf
            return r9
        Lf:
            r3 = 2
            if (r10 == 0) goto L40
            boolean r4 = r10[r1]
            if (r4 == 0) goto L1c
            a(r10)
            int r8 = r8 + (-3)
            return r8
        L1c:
            if (r0 <= r2) goto L2b
            boolean r4 = r10[r2]
            if (r4 == 0) goto L2b
            r4 = r7[r8]
            if (r4 != r2) goto L2b
            a(r10)
            int r8 = r8 - r3
            return r8
        L2b:
            if (r0 <= r3) goto L40
            boolean r4 = r10[r3]
            if (r4 == 0) goto L40
            r4 = r7[r8]
            if (r4 != 0) goto L40
            int r4 = r8 + 1
            r4 = r7[r4]
            if (r4 != r2) goto L40
            a(r10)
            int r8 = r8 - r2
            return r8
        L40:
            int r4 = r9 + (-1)
            int r8 = r8 + r3
        L43:
            if (r8 >= r4) goto L66
            r5 = r7[r8]
            r5 = r5 & 254(0xfe, float:3.56E-43)
            if (r5 != 0) goto L63
            int r5 = r8 + (-2)
            r6 = r7[r5]
            if (r6 != 0) goto L61
            int r6 = r8 + (-1)
            r6 = r7[r6]
            if (r6 != 0) goto L61
            r6 = r7[r8]
            if (r6 != r2) goto L61
            if (r10 == 0) goto L60
            a(r10)
        L60:
            return r5
        L61:
            int r8 = r8 + (-2)
        L63:
            int r8 = r8 + 3
            goto L43
        L66:
            if (r10 == 0) goto Lba
            if (r0 <= r3) goto L7d
            int r8 = r9 + (-3)
            r8 = r7[r8]
            if (r8 != 0) goto L7b
            int r8 = r9 + (-2)
            r8 = r7[r8]
            if (r8 != 0) goto L7b
            r8 = r7[r4]
            if (r8 != r2) goto L7b
            goto L96
        L7b:
            r8 = r1
            goto L97
        L7d:
            if (r0 != r3) goto L8e
            boolean r8 = r10[r3]
            if (r8 == 0) goto L7b
            int r8 = r9 + (-2)
            r8 = r7[r8]
            if (r8 != 0) goto L7b
            r8 = r7[r4]
            if (r8 != r2) goto L7b
            goto L96
        L8e:
            boolean r8 = r10[r2]
            if (r8 == 0) goto L7b
            r8 = r7[r4]
            if (r8 != r2) goto L7b
        L96:
            r8 = r2
        L97:
            r10[r1] = r8
            if (r0 <= r2) goto La6
            int r8 = r9 + (-2)
            r8 = r7[r8]
            if (r8 != 0) goto Lb0
            r8 = r7[r4]
            if (r8 != 0) goto Lb0
            goto Lae
        La6:
            boolean r8 = r10[r3]
            if (r8 == 0) goto Lb0
            r8 = r7[r4]
            if (r8 != 0) goto Lb0
        Lae:
            r8 = r2
            goto Lb1
        Lb0:
            r8 = r1
        Lb1:
            r10[r2] = r8
            r7 = r7[r4]
            if (r7 != 0) goto Lb8
            r1 = r2
        Lb8:
            r10[r3] = r1
        Lba:
            return r9
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.k.p.a(byte[], int, int, boolean[]):int");
    }

    private static void a(boolean[] zArr) {
        zArr[0] = false;
        zArr[1] = false;
        zArr[2] = false;
    }

    private static int c(byte[] bArr, int i2, int i3) {
        while (i2 < i3 - 2) {
            if (bArr[i2] == 0 && bArr[i2 + 1] == 0 && bArr[i2 + 2] == 3) {
                return i2;
            }
            i2++;
        }
        return i3;
    }

    private static void a(t tVar, int i2) {
        int iD = 8;
        int i3 = 8;
        for (int i4 = 0; i4 < i2; i4++) {
            if (iD != 0) {
                iD = ((tVar.d() + i3) + 256) % 256;
            }
            if (iD != 0) {
                i3 = iD;
            }
        }
    }

    private p() {
    }
}
