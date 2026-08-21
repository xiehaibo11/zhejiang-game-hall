package com.kwad.sdk.core.a;

import android.text.TextUtils;
import java.nio.charset.Charset;
import java.util.Arrays;
import kotlin.UByte;

/* JADX INFO: loaded from: classes2.dex */
public final class c {
    private static final Charset ISO_8859_1 = Charset.forName("ISO-8859-1");

    public static class a {
        private static final int[] aoi;
        private final boolean aok;
        private final boolean aol = false;
        static final a aog = new a(false, false);
        static final a aoh = new a(true, false);
        private static final int[] aoj = new int[256];

        static {
            int[] iArr = new int[256];
            aoi = iArr;
            Arrays.fill(iArr, -1);
            for (int i = 0; i < b.aoo.length; i++) {
                aoi[b.aoo[i]] = i;
            }
            aoi[61] = -2;
            Arrays.fill(aoj, -1);
            for (int i2 = 0; i2 < b.aop.length; i2++) {
                aoj[b.aop[i2]] = i2;
            }
            aoj[61] = -2;
        }

        private a(boolean z, boolean z2) {
            this.aok = z;
        }

        private int a(byte[] bArr, int i, int i2) {
            int i3;
            int[] iArr = this.aok ? aoj : aoi;
            int i4 = i2 + 0;
            int i5 = 0;
            if (i4 == 0) {
                return 0;
            }
            if (i4 < 2) {
                if (this.aol && iArr[0] == -1) {
                    return 0;
                }
                throw new IllegalArgumentException("Input byte[] should at least have 2 bytes for base64 bytes");
            }
            if (this.aol) {
                int i6 = 0;
                while (true) {
                    if (i >= i2) {
                        break;
                    }
                    int i7 = i + 1;
                    int i8 = bArr[i] & UByte.MAX_VALUE;
                    if (i8 == 61) {
                        i4 -= (i2 - i7) + 1;
                        break;
                    }
                    if (iArr[i8] == -1) {
                        i6++;
                    }
                    i = i7;
                }
                i4 -= i6;
            } else if (bArr[i2 - 1] == 61) {
                i5 = bArr[i2 - 2] == 61 ? 2 : 1;
            }
            if (i5 == 0 && (i3 = i4 & 3) != 0) {
                i5 = 4 - i3;
            }
            return (((i4 + 3) / 4) * 3) - i5;
        }

        /* JADX WARN: Code restructure failed: missing block: B:19:0x002f, code lost:
        
            if (r4 != 18) goto L33;
         */
        /* JADX WARN: Code restructure failed: missing block: B:33:0x007a, code lost:
        
            if (r4 != 6) goto L35;
         */
        /* JADX WARN: Code restructure failed: missing block: B:34:0x007c, code lost:
        
            r14[r5] = (byte) (r3 >> 16);
            r5 = r5 + 1;
         */
        /* JADX WARN: Code restructure failed: missing block: B:35:0x0085, code lost:
        
            if (r4 != 0) goto L37;
         */
        /* JADX WARN: Code restructure failed: missing block: B:36:0x0087, code lost:
        
            r1 = r5 + 1;
            r14[r5] = (byte) (r3 >> 16);
            r5 = r1 + 1;
            r14[r1] = (byte) (r3 >> 8);
         */
        /* JADX WARN: Code restructure failed: missing block: B:38:0x0098, code lost:
        
            if (r4 == 12) goto L49;
         */
        /* JADX WARN: Code restructure failed: missing block: B:39:0x009a, code lost:
        
            if (r12 >= r13) goto L57;
         */
        /* JADX WARN: Code restructure failed: missing block: B:41:0x009e, code lost:
        
            if (r10.aol == false) goto L58;
         */
        /* JADX WARN: Code restructure failed: missing block: B:42:0x00a0, code lost:
        
            r14 = r12 + 1;
         */
        /* JADX WARN: Code restructure failed: missing block: B:43:0x00a6, code lost:
        
            if (r0[r11[r12]] >= 0) goto L59;
         */
        /* JADX WARN: Code restructure failed: missing block: B:44:0x00a8, code lost:
        
            r12 = r14;
         */
        /* JADX WARN: Code restructure failed: missing block: B:45:0x00aa, code lost:
        
            r12 = r14;
         */
        /* JADX WARN: Code restructure failed: missing block: B:47:0x00be, code lost:
        
            throw new java.lang.IllegalArgumentException("Input byte array has incorrect ending byte at " + r12);
         */
        /* JADX WARN: Code restructure failed: missing block: B:48:0x00bf, code lost:
        
            return r5;
         */
        /* JADX WARN: Code restructure failed: missing block: B:50:0x00c7, code lost:
        
            throw new java.lang.IllegalArgumentException("Last unit does not have enough valid bits");
         */
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        private int a(byte[] r11, int r12, int r13, byte[] r14) {
            /*
                r10 = this;
                boolean r0 = r10.aok
                if (r0 == 0) goto L7
                int[] r0 = com.kwad.sdk.core.a.c.a.aoj
                goto L9
            L7:
                int[] r0 = com.kwad.sdk.core.a.c.a.aoi
            L9:
                r1 = 18
                r2 = 0
                r4 = r1
                r3 = r2
                r5 = r3
            Lf:
                r6 = 6
                r7 = 16
                if (r12 >= r13) goto L7a
                int r8 = r12 + 1
                r12 = r11[r12]
                r12 = r12 & 255(0xff, float:3.57E-43)
                r12 = r0[r12]
                if (r12 >= 0) goto L5b
                r9 = -2
                if (r12 != r9) goto L3a
                if (r4 != r6) goto L2e
                if (r8 == r13) goto L32
                int r12 = r8 + 1
                r2 = r11[r8]
                r8 = 61
                if (r2 != r8) goto L32
                goto L2f
            L2e:
                r12 = r8
            L2f:
                if (r4 == r1) goto L32
                goto L7a
            L32:
                java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
                java.lang.String r12 = "Input byte array has wrong 4-byte ending unit"
                r11.<init>(r12)
                throw r11
            L3a:
                boolean r12 = r10.aol
                if (r12 == 0) goto L3f
                goto L78
            L3f:
                java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r13 = new java.lang.StringBuilder
                java.lang.String r14 = "Illegal base64 character "
                r13.<init>(r14)
                int r8 = r8 + (-1)
                r11 = r11[r8]
                java.lang.String r11 = java.lang.Integer.toString(r11, r7)
                r13.append(r11)
                java.lang.String r11 = r13.toString()
                r12.<init>(r11)
                throw r12
            L5b:
                int r12 = r12 << r4
                r12 = r12 | r3
                int r4 = r4 + (-6)
                if (r4 >= 0) goto L77
                int r3 = r5 + 1
                int r4 = r12 >> 16
                byte r4 = (byte) r4
                r14[r5] = r4
                int r4 = r3 + 1
                int r5 = r12 >> 8
                byte r5 = (byte) r5
                r14[r3] = r5
                int r5 = r4 + 1
                byte r12 = (byte) r12
                r14[r4] = r12
                r4 = r1
                r3 = r2
                goto L78
            L77:
                r3 = r12
            L78:
                r12 = r8
                goto Lf
            L7a:
                if (r4 != r6) goto L85
                int r1 = r5 + 1
                int r2 = r3 >> 16
                byte r2 = (byte) r2
                r14[r5] = r2
                r5 = r1
                goto L9a
            L85:
                if (r4 != 0) goto L96
                int r1 = r5 + 1
                int r2 = r3 >> 16
                byte r2 = (byte) r2
                r14[r5] = r2
                int r5 = r1 + 1
                int r2 = r3 >> 8
                byte r2 = (byte) r2
                r14[r1] = r2
                goto L9a
            L96:
                r14 = 12
                if (r4 == r14) goto Lc0
            L9a:
                if (r12 >= r13) goto Lbf
                boolean r14 = r10.aol
                if (r14 == 0) goto Lab
                int r14 = r12 + 1
                r12 = r11[r12]
                r12 = r0[r12]
                if (r12 >= 0) goto Laa
                r12 = r14
                goto L9a
            Laa:
                r12 = r14
            Lab:
                java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r13 = new java.lang.StringBuilder
                java.lang.String r14 = "Input byte array has incorrect ending byte at "
                r13.<init>(r14)
                r13.append(r12)
                java.lang.String r12 = r13.toString()
                r11.<init>(r12)
                throw r11
            Lbf:
                return r5
            Lc0:
                java.lang.IllegalArgumentException r11 = new java.lang.IllegalArgumentException
                java.lang.String r12 = "Last unit does not have enough valid bits"
                r11.<init>(r12)
                throw r11
            */
            throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.core.a.c.a.a(byte[], int, int, byte[]):int");
        }

        public final byte[] decode(String str) {
            return decode(str.getBytes(c.ISO_8859_1));
        }

        public final byte[] decode(byte[] bArr) {
            int iA = a(bArr, 0, bArr.length);
            byte[] bArr2 = new byte[iA];
            int iA2 = a(bArr, 0, bArr.length, bArr2);
            return iA2 != iA ? Arrays.copyOf(bArr2, iA2) : bArr2;
        }
    }

    public static class b {
        static final b aom = new b(false, null, -1, true);
        static final b aon = new b(true, null, -1, false);
        private static final char[] aoo = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/'};
        private static final char[] aop = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '-', '_'};
        private final boolean aok;
        private final byte[] aoq = null;
        private final int aor = -1;
        private final boolean aos;

        private b(boolean z, byte[] bArr, int i, boolean z2) {
            this.aok = z;
            this.aos = z2;
        }

        private int b(byte[] bArr, int i, int i2, byte[] bArr2) {
            char[] cArr = this.aok ? aop : aoo;
            int i3 = ((i2 + 0) / 3) * 3;
            int i4 = i3 + 0;
            int i5 = this.aor;
            if (i5 > 0 && i3 > (i5 / 4) * 3) {
                i3 = (i5 / 4) * 3;
            }
            int i6 = 0;
            int i7 = 0;
            while (i6 < i4) {
                int iMin = Math.min(i6 + i3, i4);
                int i8 = i6;
                int i9 = i7;
                while (i8 < iMin) {
                    int i10 = i8 + 1;
                    int i11 = i10 + 1;
                    int i12 = ((bArr[i8] & UByte.MAX_VALUE) << 16) | ((bArr[i10] & UByte.MAX_VALUE) << 8);
                    int i13 = i11 + 1;
                    int i14 = i12 | (bArr[i11] & UByte.MAX_VALUE);
                    int i15 = i9 + 1;
                    bArr2[i9] = (byte) cArr[(i14 >>> 18) & 63];
                    int i16 = i15 + 1;
                    bArr2[i15] = (byte) cArr[(i14 >>> 12) & 63];
                    int i17 = i16 + 1;
                    bArr2[i16] = (byte) cArr[(i14 >>> 6) & 63];
                    i9 = i17 + 1;
                    bArr2[i17] = (byte) cArr[i14 & 63];
                    i8 = i13;
                }
                int i18 = ((iMin - i6) / 3) * 4;
                i7 += i18;
                if (i18 == this.aor && iMin < i2) {
                    byte[] bArr3 = this.aoq;
                    int length = bArr3.length;
                    int i19 = 0;
                    while (i19 < length) {
                        bArr2[i7] = bArr3[i19];
                        i19++;
                        i7++;
                    }
                }
                i6 = iMin;
            }
            if (i6 >= i2) {
                return i7;
            }
            int i20 = i6 + 1;
            int i21 = bArr[i6] & UByte.MAX_VALUE;
            int i22 = i7 + 1;
            bArr2[i7] = (byte) cArr[i21 >> 2];
            if (i20 == i2) {
                int i23 = i22 + 1;
                bArr2[i22] = (byte) cArr[(i21 << 4) & 63];
                if (!this.aos) {
                    return i23;
                }
                int i24 = i23 + 1;
                bArr2[i23] = 61;
                int i25 = i24 + 1;
                bArr2[i24] = 61;
                return i25;
            }
            int i26 = bArr[i20] & UByte.MAX_VALUE;
            int i27 = i22 + 1;
            bArr2[i22] = (byte) cArr[((i21 << 4) & 63) | (i26 >> 4)];
            int i28 = i27 + 1;
            bArr2[i27] = (byte) cArr[(i26 << 2) & 63];
            if (!this.aos) {
                return i28;
            }
            int i29 = i28 + 1;
            bArr2[i28] = 61;
            return i29;
        }

        private final int bX(int i) {
            int i2;
            if (this.aos) {
                i2 = ((i + 2) / 3) * 4;
            } else {
                int i3 = i % 3;
                i2 = ((i / 3) * 4) + (i3 == 0 ? 0 : i3 + 1);
            }
            int i4 = this.aor;
            return i4 > 0 ? i2 + (((i2 - 1) / i4) * this.aoq.length) : i2;
        }

        public final byte[] encode(byte[] bArr) {
            int iBX = bX(bArr.length);
            byte[] bArr2 = new byte[iBX];
            int iB = b(bArr, 0, bArr.length, bArr2);
            return iB != iBX ? Arrays.copyOf(bArr2, iB) : bArr2;
        }

        public final String encodeToString(byte[] bArr) {
            byte[] bArrEncode = encode(bArr);
            return new String(bArrEncode, 0, 0, bArrEncode.length);
        }
    }

    public static b AJ() {
        return b.aom;
    }

    public static b AK() {
        return b.aon;
    }

    public static a AL() {
        return a.aog;
    }

    public static a AM() {
        return a.aoh;
    }

    public static String cR(String str) {
        if (TextUtils.isEmpty(str)) {
            return "";
        }
        return "sDAkk/dS" + new String(AJ().encode(str.getBytes()), com.kwad.sdk.crash.utils.a.UTF_8);
    }

    public static String cS(String str) {
        return TextUtils.isEmpty(str) ? "" : str.startsWith("sDAkk/dS") ? new String(AL().decode(str.substring(8)), com.kwad.sdk.crash.utils.a.UTF_8) : str;
    }

    public static boolean cT(String str) {
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        return str.startsWith("sDAkk/dS");
    }
}
