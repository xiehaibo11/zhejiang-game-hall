package com.loc;

import android.support.v4.view.MotionEventCompat;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.util.zip.GZIPInputStream;
import kotlin.UByte;
import okio.Utf8;
import org.bouncycastle.math.ec.Tnaf;

public class aj {
    static final boolean a = !aj.class.desiredAssertionStatus();
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
            if (!a) {
                throw new AssertionError(e2.getMessage());
            }
            strA = null;
        }
        if (a || strA != null) {
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
    */
    private static byte[] b(String str) throws Throwable {
        byte[] bytes;
        ByteArrayInputStream byteArrayInputStream;
        GZIPInputStream gZIPInputStream;
        ByteArrayOutputStream byteArrayOutputStream;
        if (str == null) {
            throw new NullPointerException("Input string was null.");
        }
        try {
            bytes = str.getBytes("US-ASCII");
        } catch (UnsupportedEncodingException unused) {
            bytes = str.getBytes();
        }
        byte[] bArrB = b(bytes, bytes.length);
        if (bArrB.length >= 4 && 35615 == ((bArrB[0] & UByte.MAX_VALUE) | ((bArrB[1] << 8) & MotionEventCompat.ACTION_POINTER_INDEX_MASK))) {
            byte[] bArr = new byte[2048];
            ByteArrayOutputStream byteArrayOutputStream2 = null;
            try {
                try {
                    byteArrayOutputStream = new ByteArrayOutputStream();
                    try {
                        byteArrayInputStream = new ByteArrayInputStream(bArrB);
                        try {
                            gZIPInputStream = new GZIPInputStream(byteArrayInputStream);
                        } catch (IOException e2) {
                            e = e2;
                            gZIPInputStream = null;
                        } catch (Throwable th) {
                            th = th;
                            gZIPInputStream = null;
                        }
                    } catch (IOException e3) {
                        e = e3;
                        byteArrayInputStream = null;
                        gZIPInputStream = null;
                    } catch (Throwable th2) {
                        th = th2;
                        byteArrayInputStream = null;
                        gZIPInputStream = null;
                    }
                } catch (Exception unused2) {
                }
            } catch (IOException e4) {
                e = e4;
                byteArrayInputStream = null;
                gZIPInputStream = null;
            } catch (Throwable th3) {
                th = th3;
                byteArrayInputStream = null;
                gZIPInputStream = null;
            }
            try {
                while (true) {
                    try {
                        int i = gZIPInputStream.read(bArr);
                        if (i < 0) {
                            break;
                        }
                        byteArrayOutputStream.write(bArr, 0, i);
                    } catch (IOException e5) {
                        e = e5;
                        byteArrayOutputStream2 = byteArrayOutputStream;
                        try {
                            e.printStackTrace();
                            byteArrayOutputStream2.close();
                        } catch (Throwable th4) {
                            th = th4;
                            try {
                                byteArrayOutputStream2.close();
                            } catch (Exception unused3) {
                            }
                            try {
                                gZIPInputStream.close();
                            } catch (Exception unused4) {
                            }
                            try {
                                byteArrayInputStream.close();
                                throw th;
                            } catch (Exception unused5) {
                                throw th;
                            }
                        }
                    } catch (Throwable th5) {
                        th = th5;
                        byteArrayOutputStream2 = byteArrayOutputStream;
                        byteArrayOutputStream2.close();
                        gZIPInputStream.close();
                        byteArrayInputStream.close();
                        throw th;
                    }
                    gZIPInputStream.close();
                    byteArrayInputStream.close();
                }
                byteArrayInputStream.close();
            } catch (Exception unused6) {
            }
            bArrB = byteArrayOutputStream.toByteArray();
            byteArrayOutputStream.close();
            gZIPInputStream.close();
        }
        return bArrB;
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
