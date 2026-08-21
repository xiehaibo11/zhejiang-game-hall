package com.tkay.core.common.l;

import android.text.TextUtils;
import com.huawei.hms.framework.common.ContainerUtils;
import com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.PsExtractor;
import java.util.HashMap;
import kotlin.UByte;
import okio.Utf8;
import org.bouncycastle.math.ec.Tnaf;

/* JADX INFO: loaded from: classes3.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static HashMap<Character, Character> f6236a = null;
    private static final String e = "ZE1XbmhiZXlLcjBKSXZMTk94M0JGa0V1bWw5Mlk1ZmpTcUdUN1I4cFpWY2lQSEFzdEM0VVhhNlFEdzFnb3orLw==";
    private static final String b = c.class.getSimpleName();
    private static final char[] c = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '+', '/'};
    private static final byte[] d = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, -1, Utf8.REPLACEMENT_BYTE, com.sigmob.sdk.archives.tar.e.L, com.sigmob.sdk.archives.tar.e.M, com.sigmob.sdk.archives.tar.e.N, com.sigmob.sdk.archives.tar.e.O, 56, 57, 58, 59, 60, 61, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, Tnaf.POW_2_WIDTH, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, -1, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, com.sigmob.sdk.archives.tar.e.H, com.sigmob.sdk.archives.tar.e.I, com.sigmob.sdk.archives.tar.e.J, com.sigmob.sdk.archives.tar.e.K, -1, -1, -1, -1, -1};
    private static String f = "";

    private c() {
    }

    public static String a(String str) {
        return TextUtils.isEmpty(str) ? "" : a(str.getBytes());
    }

    public static String b(String str) {
        return TextUtils.isEmpty(str) ? "" : new String(d(str));
    }

    public static String a(byte[] bArr) {
        StringBuffer stringBuffer = new StringBuffer();
        int length = bArr.length;
        int i = 0;
        while (true) {
            if (i >= length) {
                break;
            }
            int i2 = i + 1;
            int i3 = bArr[i] & UByte.MAX_VALUE;
            if (i2 == length) {
                stringBuffer.append(c[i3 >>> 2]);
                stringBuffer.append(c[(i3 & 3) << 4]);
                stringBuffer.append("==");
                break;
            }
            int i4 = i2 + 1;
            int i5 = bArr[i2] & UByte.MAX_VALUE;
            if (i4 == length) {
                stringBuffer.append(c[i3 >>> 2]);
                stringBuffer.append(c[((i3 & 3) << 4) | ((i5 & PsExtractor.VIDEO_STREAM_MASK) >>> 4)]);
                stringBuffer.append(c[(i5 & 15) << 2]);
                stringBuffer.append(ContainerUtils.KEY_VALUE_DELIMITER);
                break;
            }
            int i6 = i4 + 1;
            int i7 = bArr[i4] & UByte.MAX_VALUE;
            stringBuffer.append(c[i3 >>> 2]);
            stringBuffer.append(c[((i3 & 3) << 4) | ((i5 & PsExtractor.VIDEO_STREAM_MASK) >>> 4)]);
            stringBuffer.append(c[((i5 & 15) << 2) | ((i7 & PsExtractor.AUDIO_STREAM) >>> 6)]);
            stringBuffer.append(c[i7 & 63]);
            i = i6;
        }
        return stringBuffer.toString();
    }

    /* JADX WARN: Code restructure failed: missing block: B:37:0x0076, code lost:
    
        if (r2 == (-1)) goto L47;
     */
    /* JADX WARN: Code restructure failed: missing block: B:38:0x0078, code lost:
    
        r1.write(r2 | ((r5 & 3) << 6));
        r2 = r4;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static byte[] d(java.lang.String r8) {
        /*
            byte[] r8 = r8.getBytes()
            int r0 = r8.length
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>(r0)
            r2 = 0
        Lb:
            if (r2 >= r0) goto L82
        Ld:
            byte[] r3 = com.tkay.core.common.l.c.d
            int r4 = r2 + 1
            r2 = r8[r2]
            r2 = r3[r2]
            r3 = -1
            if (r4 >= r0) goto L1d
            if (r2 == r3) goto L1b
            goto L1d
        L1b:
            r2 = r4
            goto Ld
        L1d:
            if (r2 == r3) goto L82
        L1f:
            byte[] r5 = com.tkay.core.common.l.c.d
            int r6 = r4 + 1
            r4 = r8[r4]
            r4 = r5[r4]
            if (r6 >= r0) goto L2e
            if (r4 == r3) goto L2c
            goto L2e
        L2c:
            r4 = r6
            goto L1f
        L2e:
            if (r4 == r3) goto L82
            int r2 = r2 << 2
            r5 = r4 & 48
            int r5 = r5 >>> 4
            r2 = r2 | r5
            r1.write(r2)
        L3a:
            int r2 = r6 + 1
            r5 = r8[r6]
            r6 = 61
            if (r5 != r6) goto L47
            byte[] r8 = r1.toByteArray()
            return r8
        L47:
            byte[] r7 = com.tkay.core.common.l.c.d
            r5 = r7[r5]
            if (r2 >= r0) goto L52
            if (r5 == r3) goto L50
            goto L52
        L50:
            r6 = r2
            goto L3a
        L52:
            if (r5 == r3) goto L82
            r4 = r4 & 15
            int r4 = r4 << 4
            r7 = r5 & 60
            int r7 = r7 >>> 2
            r4 = r4 | r7
            r1.write(r4)
        L60:
            int r4 = r2 + 1
            r2 = r8[r2]
            if (r2 != r6) goto L6b
            byte[] r8 = r1.toByteArray()
            return r8
        L6b:
            byte[] r7 = com.tkay.core.common.l.c.d
            r2 = r7[r2]
            if (r4 >= r0) goto L76
            if (r2 == r3) goto L74
            goto L76
        L74:
            r2 = r4
            goto L60
        L76:
            if (r2 == r3) goto L82
            r3 = r5 & 3
            int r3 = r3 << 6
            r2 = r2 | r3
            r1.write(r2)
            r2 = r4
            goto Lb
        L82:
            byte[] r8 = r1.toByteArray()
            return r8
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.core.common.l.c.d(java.lang.String):byte[]");
    }

    private static synchronized Character a(char c2) {
        if (TextUtils.isEmpty(f)) {
            f = b(e);
        }
        if (f6236a == null) {
            f6236a = new HashMap<>();
            for (int i = 0; i < c.length; i++) {
                f6236a.put(Character.valueOf(f.charAt(i)), Character.valueOf(c[i]));
            }
        }
        if (f6236a.containsKey(Character.valueOf(c2))) {
            return f6236a.get(Character.valueOf(c2));
        }
        return Character.valueOf(c2);
    }

    public static String c(String str) {
        String str2 = "";
        try {
            if (TextUtils.isEmpty(str)) {
                return "";
            }
            char[] charArray = str.toCharArray();
            if (charArray != null && charArray.length > 0) {
                char[] cArr = new char[charArray.length];
                for (int i = 0; i < charArray.length; i++) {
                    cArr[i] = a(charArray[i]).charValue();
                }
                str2 = new String(cArr);
            }
            return new String(d(str2));
        } catch (Exception e2) {
            e2.printStackTrace();
            return str2;
        }
    }
}
