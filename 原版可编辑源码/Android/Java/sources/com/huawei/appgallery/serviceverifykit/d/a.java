package com.huawei.appgallery.serviceverifykit.d;

import com.sigmob.sdk.archives.tar.e;
import okio.Utf8;
import org.bouncycastle.math.ec.Tnaf;

public class a {
    private static byte[] a = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 62, -1, -1, -1, Utf8.REPLACEMENT_BYTE, e.L, e.M, e.N, e.O, 56, 57, 58, 59, 60, 61, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, Tnaf.POW_2_WIDTH, 17, 18, 19, 20, 21, 22, 23, 24, 25, -1, -1, -1, -1, -1, -1, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, e.H, e.I, e.J, e.K, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

    public static byte[] a(String str) {
        int iB = b(str);
        int i = (iB / 4) * 3;
        int i2 = iB % 4;
        if (i2 == 3) {
            i += 2;
        }
        if (i2 == 2) {
            i++;
        }
        byte[] bArr = new byte[i];
        int i3 = 0;
        int i4 = 0;
        int i5 = 0;
        for (int i6 = 0; i6 < str.length(); i6++) {
            char cCharAt = str.charAt(i6);
            byte b = cCharAt > 255 ? (byte) -1 : a[cCharAt];
            if (b >= 0) {
                i5 += 6;
                i4 = (i4 << 6) | b;
                if (i5 >= 8) {
                    i5 -= 8;
                    bArr[i3] = (byte) (255 & (i4 >> i5));
                    i3++;
                }
            }
        }
        return i3 != i ? new byte[0] : bArr;
    }

    private static int b(String str) {
        int length = str.length();
        for (int i = 0; i < str.length(); i++) {
            char cCharAt = str.charAt(i);
            if (cCharAt > 255 || a[cCharAt] < 0) {
                length--;
            }
        }
        return length;
    }
}
