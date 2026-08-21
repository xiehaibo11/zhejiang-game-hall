package com.kwad.sdk.utils;

import java.io.File;
import java.io.FileInputStream;
import java.security.MessageDigest;
import kotlin.UByte;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

/* JADX INFO: loaded from: classes2.dex */
public final class ad {
    static final char[] ajn = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    public static String ab(File file) throws Throwable {
        FileInputStream fileInputStream;
        MessageDigest messageDigest;
        byte[] bArr;
        FileInputStream fileInputStream2 = null;
        if (file == null) {
            return null;
        }
        try {
            messageDigest = MessageDigest.getInstance("MD5");
            fileInputStream = new FileInputStream(file);
            try {
                try {
                    bArr = new byte[4096];
                } catch (Exception e) {
                    e = e;
                    com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                    com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStream);
                    return null;
                }
            } catch (Throwable th) {
                th = th;
                fileInputStream2 = fileInputStream;
            }
        } catch (Exception e2) {
            e = e2;
            fileInputStream = null;
        } catch (Throwable th2) {
            th = th2;
        }
        while (true) {
            int i = fileInputStream.read(bArr);
            if (i == -1) {
                String strM = m(messageDigest.digest());
                com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStream);
                return strM;
            }
            messageDigest.update(bArr, 0, i);
            th = th;
            fileInputStream2 = fileInputStream;
            com.kwad.sdk.crash.utils.b.closeQuietly(fileInputStream2);
            throw th;
        }
    }

    public static String bp(String str) {
        return l(str.getBytes());
    }

    public static String fx(String str) {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance(MessageDigestAlgorithms.SHA_1);
            messageDigest.update(str.getBytes());
            byte[] bArrDigest = messageDigest.digest();
            return toHexString(bArrDigest, 0, bArrDigest.length);
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            return "";
        }
    }

    public static String l(byte[] bArr) {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("MD5");
            messageDigest.update(bArr);
            byte[] bArrDigest = messageDigest.digest();
            StringBuilder sb = new StringBuilder();
            int length = bArrDigest.length;
            for (int i = 0; i < length; i++) {
                int i2 = bArrDigest[i];
                if (i2 < 0) {
                    i2 += 256;
                }
                if (i2 < 16) {
                    sb.append("0");
                }
                sb.append(Integer.toHexString(i2));
            }
            return sb.toString();
        } catch (Exception unused) {
            return "";
        }
    }

    private static String m(byte[] bArr) {
        StringBuffer stringBuffer = new StringBuffer();
        for (byte b : bArr) {
            stringBuffer.append(String.format("%02x", Byte.valueOf(b)));
        }
        return stringBuffer.toString();
    }

    public static String toHexString(byte[] bArr, int i, int i2) {
        ao.checkNotNull(bArr);
        if (i2 + 0 > bArr.length) {
            throw new IndexOutOfBoundsException();
        }
        int i3 = i2 * 2;
        char[] cArr = new char[i3];
        int i4 = 0;
        for (int i5 = 0; i5 < i2; i5++) {
            int i6 = bArr[i5 + 0] & UByte.MAX_VALUE;
            int i7 = i4 + 1;
            char[] cArr2 = ajn;
            cArr[i4] = cArr2[i6 >> 4];
            i4 = i7 + 1;
            cArr[i7] = cArr2[i6 & 15];
        }
        return new String(cArr, 0, i3);
    }
}
