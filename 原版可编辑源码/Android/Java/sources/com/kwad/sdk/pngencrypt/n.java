package com.kwad.sdk.pngencrypt;

import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.Charset;
import kotlin.UByte;

public final class n {
    public static Charset aEV = Charset.forName("ISO-8859-1");
    public static Charset aEW = Charset.forName("UTF-8");
    private static ThreadLocal<Boolean> aEX = new ThreadLocal<Boolean>() {
        private static Boolean GR() {
            return Boolean.FALSE;
        }

        @Override
        protected final Boolean initialValue() {
            return GR();
        }
    };

    public static byte[] GQ() {
        return new byte[]{-119, 80, 78, 71, 13, 10, 26, 10};
    }

    static final int b(int i, int i2, int i3) {
        int i4 = (i + i2) - i3;
        int i5 = i4 >= i ? i4 - i : i - i4;
        int i6 = i4 >= i2 ? i4 - i2 : i2 - i4;
        int i7 = i4 >= i3 ? i4 - i3 : i3 - i4;
        return (i5 > i6 || i5 > i7) ? i6 <= i7 ? i2 : i3 : i;
    }

    public static int e(InputStream inputStream) {
        try {
            return inputStream.read();
        } catch (IOException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            return -1;
        }
    }

    public static int e(byte[] bArr, int i) {
        return bArr[i] & UByte.MAX_VALUE;
    }

    public static int f(InputStream inputStream) {
        try {
            int i = inputStream.read();
            int i2 = inputStream.read();
            int i3 = inputStream.read();
            int i4 = inputStream.read();
            if (i == -1 || i2 == -1 || i3 == -1 || i4 == -1) {
                return -1;
            }
            return (i << 24) | (i2 << 16) | ((i3 << 8) + i4);
        } catch (IOException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            return -1;
        }
    }

    public static int f(byte[] bArr, int i) {
        return (bArr[i + 1] & UByte.MAX_VALUE) | ((bArr[i] & UByte.MAX_VALUE) << 8);
    }

    public static final int g(byte[] bArr, int i) {
        return (bArr[i + 3] & UByte.MAX_VALUE) | ((bArr[i] & UByte.MAX_VALUE) << 24) | ((bArr[i + 1] & UByte.MAX_VALUE) << 16) | ((bArr[i + 2] & UByte.MAX_VALUE) << 8);
    }
}
