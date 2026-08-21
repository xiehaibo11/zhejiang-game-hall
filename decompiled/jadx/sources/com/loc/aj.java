package com.loc;

import java.io.IOException;
import java.io.UnsupportedEncodingException;
import kotlin.UByte;
import okio.Utf8;
import org.bouncycastle.math.ec.Tnaf;

/* JADX INFO: compiled from: Base64Util.java */
/* JADX INFO: loaded from: classes2.dex */
public class aj {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final /* synthetic */ boolean f2838a = !aj.class.desiredAssertionStatus();
    private static final byte[] b = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, com.sigmob.sdk.archives.tar.e.P, 77, 78, 79, 80, 81, 82, com.sigmob.sdk.archives.tar.e.Q, 84, 85, 86, 87, com.sigmob.sdk.archives.tar.e.S, 89, 90, 97, 98, 99, 100, 101, 102, com.sigmob.sdk.archives.tar.e.T, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, com.sigmob.sdk.archives.tar.e.R, 121, 122, com.sigmob.sdk.archives.tar.e.H, com.sigmob.sdk.archives.tar.e.I, com.sigmob.sdk.archives.tar.e.J, com.sigmob.sdk.archives.tar.e.K, com.sigmob.sdk.archives.tar.e.L, com.sigmob.sdk.archives.tar.e.M, com.sigmob.sdk.archives.tar.e.N, com.sigmob.sdk.archives.tar.e.O, 56, 57, 43, 47};
    private static final byte[] c = {-9, -9, -9, -9, -9, -9, -9, -9, -9, -5, -5, -9, -9, -5, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -5, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, 62, -9, -9, -9, Utf8.REPLACEMENT_BYTE, com.sigmob.sdk.archives.tar.e.L, com.sigmob.sdk.archives.tar.e.M, com.sigmob.sdk.archives.tar.e.N, com.sigmob.sdk.archives.tar.e.O, 56, 57, 58, 59, 60, 61, -9, -9, -9, -1, -9, -9, -9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, Tnaf.POW_2_WIDTH, 17, 18, 19, 20, 21, 22, 23, 24, 25, -9, -9, -9, -9, -9, -9, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, com.sigmob.sdk.archives.tar.e.H, com.sigmob.sdk.archives.tar.e.I, com.sigmob.sdk.archives.tar.e.J, com.sigmob.sdk.archives.tar.e.K, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9};
    private static final byte[] d = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, com.sigmob.sdk.archives.tar.e.P, 77, 78, 79, 80, 81, 82, com.sigmob.sdk.archives.tar.e.Q, 84, 85, 86, 87, com.sigmob.sdk.archives.tar.e.S, 89, 90, 97, 98, 99, 100, 101, 102, com.sigmob.sdk.archives.tar.e.T, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, com.sigmob.sdk.archives.tar.e.R, 121, 122, com.sigmob.sdk.archives.tar.e.H, com.sigmob.sdk.archives.tar.e.I, com.sigmob.sdk.archives.tar.e.J, com.sigmob.sdk.archives.tar.e.K, com.sigmob.sdk.archives.tar.e.L, com.sigmob.sdk.archives.tar.e.M, com.sigmob.sdk.archives.tar.e.N, com.sigmob.sdk.archives.tar.e.O, 56, 57, 45, 95};
    private static final byte[] e = {-9, -9, -9, -9, -9, -9, -9, -9, -9, -5, -5, -9, -9, -5, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -5, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, 62, -9, -9, com.sigmob.sdk.archives.tar.e.L, com.sigmob.sdk.archives.tar.e.M, com.sigmob.sdk.archives.tar.e.N, com.sigmob.sdk.archives.tar.e.O, 56, 57, 58, 59, 60, 61, -9, -9, -9, -1, -9, -9, -9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, Tnaf.POW_2_WIDTH, 17, 18, 19, 20, 21, 22, 23, 24, 25, -9, -9, -9, -9, Utf8.REPLACEMENT_BYTE, -9, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, com.sigmob.sdk.archives.tar.e.H, com.sigmob.sdk.archives.tar.e.I, com.sigmob.sdk.archives.tar.e.J, com.sigmob.sdk.archives.tar.e.K, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9};
    private static final byte[] f = {45, com.sigmob.sdk.archives.tar.e.H, com.sigmob.sdk.archives.tar.e.I, com.sigmob.sdk.archives.tar.e.J, com.sigmob.sdk.archives.tar.e.K, com.sigmob.sdk.archives.tar.e.L, com.sigmob.sdk.archives.tar.e.M, com.sigmob.sdk.archives.tar.e.N, com.sigmob.sdk.archives.tar.e.O, 56, 57, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, com.sigmob.sdk.archives.tar.e.P, 77, 78, 79, 80, 81, 82, com.sigmob.sdk.archives.tar.e.Q, 84, 85, 86, 87, com.sigmob.sdk.archives.tar.e.S, 89, 90, 95, 97, 98, 99, 100, 101, 102, com.sigmob.sdk.archives.tar.e.T, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, com.sigmob.sdk.archives.tar.e.R, 121, 122};
    private static final byte[] g = {-9, -9, -9, -9, -9, -9, -9, -9, -9, -5, -5, -9, -9, -5, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -5, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, 0, -9, -9, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -9, -9, -9, -1, -9, -9, -9, 11, 12, 13, 14, 15, Tnaf.POW_2_WIDTH, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, -9, -9, -9, -9, 37, -9, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, com.sigmob.sdk.archives.tar.e.H, com.sigmob.sdk.archives.tar.e.I, com.sigmob.sdk.archives.tar.e.J, com.sigmob.sdk.archives.tar.e.K, com.sigmob.sdk.archives.tar.e.L, com.sigmob.sdk.archives.tar.e.M, com.sigmob.sdk.archives.tar.e.N, com.sigmob.sdk.archives.tar.e.O, 56, 57, 58, 59, 60, 61, 62, Utf8.REPLACEMENT_BYTE, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9, -9};

    private aj() {
    }

    public static String a(byte[] bArr) {
        String strA;
        try {
            strA = a(bArr, bArr.length);
        } catch (IOException e2) {
            if (!f2838a) {
                throw new AssertionError(e2.getMessage());
            }
            strA = null;
        }
        if (f2838a || strA != null) {
            return strA;
        }
        throw new AssertionError();
    }

    private static String a(byte[] bArr, int i) throws IOException {
        if (bArr == null) {
            throw new NullPointerException("Cannot serialize a null array.");
        }
        if (i < 0) {
            throw new IllegalArgumentException("Cannot have length offset: ".concat(String.valueOf(i)));
        }
        if (i + 0 > bArr.length) {
            throw new IllegalArgumentException(String.format("Cannot have offset of %d and length of %d with array of length %d", 0, Integer.valueOf(i), Integer.valueOf(bArr.length)));
        }
        int i2 = ((i / 3) * 4) + (i % 3 <= 0 ? 0 : 4);
        byte[] bArr2 = new byte[i2];
        int i3 = i - 2;
        int i4 = 0;
        int i5 = 0;
        while (i4 < i3) {
            a(bArr, i4 + 0, 3, bArr2, i5);
            i4 += 3;
            i5 += 4;
        }
        if (i4 < i) {
            a(bArr, i4 + 0, i - i4, bArr2, i5);
            i5 += 4;
        }
        if (i5 <= i2 - 1) {
            byte[] bArr3 = new byte[i5];
            System.arraycopy(bArr2, 0, bArr3, 0, i5);
            bArr2 = bArr3;
        }
        try {
            return new String(bArr2, "US-ASCII");
        } catch (UnsupportedEncodingException unused) {
            return new String(bArr2);
        }
    }

    public static byte[] a(String str) throws IOException {
        return b(str);
    }

    private static byte[] a(byte[] bArr, int i, int i2, byte[] bArr2, int i3) {
        byte[] bArr3 = b;
        int i4 = (i2 > 0 ? (bArr[i] << 24) >>> 8 : 0) | (i2 > 1 ? (bArr[i + 1] << 24) >>> 16 : 0) | (i2 > 2 ? (bArr[i + 2] << 24) >>> 24 : 0);
        if (i2 == 1) {
            bArr2[i3] = bArr3[i4 >>> 18];
            bArr2[i3 + 1] = bArr3[(i4 >>> 12) & 63];
            bArr2[i3 + 2] = 61;
            bArr2[i3 + 3] = 61;
            return bArr2;
        }
        if (i2 == 2) {
            bArr2[i3] = bArr3[i4 >>> 18];
            bArr2[i3 + 1] = bArr3[(i4 >>> 12) & 63];
            bArr2[i3 + 2] = bArr3[(i4 >>> 6) & 63];
            bArr2[i3 + 3] = 61;
            return bArr2;
        }
        if (i2 != 3) {
            return bArr2;
        }
        bArr2[i3] = bArr3[i4 >>> 18];
        bArr2[i3 + 1] = bArr3[(i4 >>> 12) & 63];
        bArr2[i3 + 2] = bArr3[(i4 >>> 6) & 63];
        bArr2[i3 + 3] = bArr3[i4 & 63];
        return bArr2;
    }

    /* JADX WARN: Can't wrap try/catch for region: R(8:10|(5:58|11|74|12|(2:79|13))|(3:(8:76|14|(1:16)(1:81)|57|62|19|70|20)|70|20)|17|18|57|62|19) */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static byte[] b(java.lang.String r6) throws java.lang.Throwable {
        /*
            if (r6 == 0) goto L84
            java.lang.String r0 = "US-ASCII"
            byte[] r6 = r6.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L9
            goto Ld
        L9:
            byte[] r6 = r6.getBytes()
        Ld:
            int r0 = r6.length
            byte[] r6 = b(r6, r0)
            int r0 = r6.length
            r1 = 4
            if (r0 < r1) goto L83
            r0 = 0
            r1 = r6[r0]
            r1 = r1 & 255(0xff, float:3.57E-43)
            r2 = 1
            r2 = r6[r2]
            int r2 = r2 << 8
            r3 = 65280(0xff00, float:9.1477E-41)
            r2 = r2 & r3
            r1 = r1 | r2
            r2 = 35615(0x8b1f, float:4.9907E-41)
            if (r2 != r1) goto L83
            r1 = 2048(0x800, float:2.87E-42)
            byte[] r1 = new byte[r1]
            r2 = 0
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6e
            r3.<init>()     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6e
            java.io.ByteArrayInputStream r4 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L60 java.io.IOException -> L65
            r4.<init>(r6)     // Catch: java.lang.Throwable -> L60 java.io.IOException -> L65
            java.util.zip.GZIPInputStream r5 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L5d
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L5a java.io.IOException -> L5d
        L3e:
            int r2 = r5.read(r1)     // Catch: java.lang.Throwable -> L56 java.io.IOException -> L58
            if (r2 < 0) goto L48
            r3.write(r1, r0, r2)     // Catch: java.lang.Throwable -> L56 java.io.IOException -> L58
            goto L3e
        L48:
            byte[] r6 = r3.toByteArray()     // Catch: java.lang.Throwable -> L56 java.io.IOException -> L58
            r3.close()     // Catch: java.lang.Exception -> L4f
        L4f:
            r5.close()     // Catch: java.lang.Exception -> L52
        L52:
            r4.close()     // Catch: java.lang.Exception -> L83
            goto L83
        L56:
            r6 = move-exception
            goto L63
        L58:
            r0 = move-exception
            goto L68
        L5a:
            r6 = move-exception
            r5 = r2
            goto L63
        L5d:
            r0 = move-exception
            r5 = r2
            goto L68
        L60:
            r6 = move-exception
            r4 = r2
            r5 = r4
        L63:
            r2 = r3
            goto L79
        L65:
            r0 = move-exception
            r4 = r2
            r5 = r4
        L68:
            r2 = r3
            goto L71
        L6a:
            r6 = move-exception
            r4 = r2
            r5 = r4
            goto L79
        L6e:
            r0 = move-exception
            r4 = r2
            r5 = r4
        L71:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L78
            r2.close()     // Catch: java.lang.Exception -> L4f
            goto L4f
        L78:
            r6 = move-exception
        L79:
            r2.close()     // Catch: java.lang.Exception -> L7c
        L7c:
            r5.close()     // Catch: java.lang.Exception -> L7f
        L7f:
            r4.close()     // Catch: java.lang.Exception -> L82
        L82:
            throw r6
        L83:
            return r6
        L84:
            java.lang.NullPointerException r6 = new java.lang.NullPointerException
            java.lang.String r0 = "Input string was null."
            r6.<init>(r0)
            throw r6
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.aj.b(java.lang.String):byte[]");
    }

    private static byte[] b(byte[] bArr, int i) throws IOException {
        int i2;
        if (bArr == null) {
            throw new NullPointerException("Cannot decode null source array.");
        }
        int i3 = i + 0;
        int i4 = 1;
        if (i3 > bArr.length) {
            throw new IllegalArgumentException(String.format("Source array with length %d cannot have offset of %d and process %d bytes.", Integer.valueOf(bArr.length), 0, Integer.valueOf(i)));
        }
        if (i == 0) {
            return new byte[0];
        }
        if (i < 4) {
            throw new IllegalArgumentException("Base64Util-encoded string must have at least four characters, but length specified was ".concat(String.valueOf(i)));
        }
        byte[] bArr2 = c;
        int i5 = (i * 3) / 4;
        byte[] bArr3 = new byte[i5];
        byte[] bArr4 = new byte[4];
        int i6 = 0;
        int i7 = 0;
        int i8 = 0;
        while (i6 < i3) {
            byte b2 = bArr2[bArr[i6] & UByte.MAX_VALUE];
            if (b2 < -5) {
                throw new IOException(String.format("Bad Base64Util input character decimal %d in array position %d", Integer.valueOf(bArr[i6] & UByte.MAX_VALUE), Integer.valueOf(i6)));
            }
            if (b2 >= -1) {
                int i9 = i7 + 1;
                bArr4[i7] = bArr[i6];
                if (i9 <= 3) {
                    i7 = i9;
                } else {
                    if (i8 < 0 || (i2 = i8 + 2) >= i5) {
                        throw new IllegalArgumentException(String.format("Destination array with length %d cannot have offset of %d and still store three bytes.", Integer.valueOf(i5), Integer.valueOf(i8)));
                    }
                    byte[] bArr5 = c;
                    if (bArr4[2] == 61) {
                        bArr3[i8] = (byte) ((((bArr5[bArr4[0]] & UByte.MAX_VALUE) << 18) | ((bArr5[bArr4[i4]] & UByte.MAX_VALUE) << 12)) >>> 16);
                    } else if (bArr4[3] == 61) {
                        int i10 = ((bArr5[bArr4[0]] & UByte.MAX_VALUE) << 18) | ((bArr5[bArr4[i4]] & UByte.MAX_VALUE) << 12) | ((bArr5[bArr4[2]] & UByte.MAX_VALUE) << 6);
                        bArr3[i8] = (byte) (i10 >>> 16);
                        bArr3[i8 + 1] = (byte) (i10 >>> 8);
                        i4 = 2;
                    } else {
                        int i11 = ((bArr5[bArr4[i4]] & UByte.MAX_VALUE) << 12) | ((bArr5[bArr4[0]] & UByte.MAX_VALUE) << 18) | ((bArr5[bArr4[2]] & UByte.MAX_VALUE) << 6) | (bArr5[bArr4[3]] & UByte.MAX_VALUE);
                        bArr3[i8] = (byte) (i11 >> 16);
                        bArr3[i8 + 1] = (byte) (i11 >> 8);
                        bArr3[i2] = (byte) i11;
                        i4 = 3;
                    }
                    i8 += i4;
                    if (bArr[i6] == 61) {
                        break;
                    }
                    i7 = 0;
                }
            }
            i6++;
            i4 = 1;
        }
        byte[] bArr6 = new byte[i8];
        System.arraycopy(bArr3, 0, bArr6, 0, i8);
        return bArr6;
    }
}
