package com.qihoo360.replugin.utils.basic;

import com.qihoo360.replugin.utils.CloseableUtils;
import com.qihoo360.replugin.utils.FileUtils;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class SecurityUtil {
    public static byte[] MD5(byte[] bArr) {
        MessageDigest messageDigest;
        try {
            messageDigest = MessageDigest.getInstance("MD5");
        } catch (NoSuchAlgorithmException e) {
            e.printStackTrace();
            messageDigest = null;
        }
        if (messageDigest == null) {
            return null;
        }
        messageDigest.update(bArr);
        return messageDigest.digest();
    }

    public static String getMD5(byte[] bArr) {
        return ByteConvertor.bytesToHexString(MD5(bArr));
    }

    public static String getMD5(String str) {
        return str == null ? "" : getMD5(str.getBytes());
    }

    public static String getFileMD5(String str) {
        byte[] bArrMD5 = MD5(str);
        if (bArrMD5 == null) {
            return null;
        }
        return ByteConvertor.bytesToHexString(bArrMD5);
    }

    /* JADX WARN: Removed duplicated region for block: B:39:0x004c A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String getMd5ByFile(java.io.File r8) throws java.lang.Throwable {
        /*
            r0 = 0
            java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L30
            java.nio.channels.FileChannel r2 = r1.getChannel()     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L48
            java.nio.channels.FileChannel$MapMode r3 = java.nio.channels.FileChannel.MapMode.READ_ONLY     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L48
            r4 = 0
            long r6 = r8.length()     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L48
            java.nio.MappedByteBuffer r8 = r2.map(r3, r4, r6)     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L48
            java.lang.String r2 = "MD5"
            java.security.MessageDigest r2 = java.security.MessageDigest.getInstance(r2)     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L48
            r2.update(r8)     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L48
            byte[] r8 = r2.digest()     // Catch: java.lang.Exception -> L2c java.lang.Throwable -> L48
            r1.close()     // Catch: java.io.IOException -> L27
            goto L40
        L27:
            r1 = move-exception
            r1.printStackTrace()
            goto L40
        L2c:
            r8 = move-exception
            goto L32
        L2e:
            r8 = move-exception
            goto L4a
        L30:
            r8 = move-exception
            r1 = r0
        L32:
            r8.printStackTrace()     // Catch: java.lang.Throwable -> L48
            if (r1 == 0) goto L3f
            r1.close()     // Catch: java.io.IOException -> L3b
            goto L3f
        L3b:
            r8 = move-exception
            r8.printStackTrace()
        L3f:
            r8 = r0
        L40:
            if (r8 != 0) goto L43
            return r0
        L43:
            java.lang.String r8 = com.qihoo360.replugin.utils.basic.ByteConvertor.bytesToHexString(r8)
            return r8
        L48:
            r8 = move-exception
            r0 = r1
        L4a:
            if (r0 == 0) goto L54
            r0.close()     // Catch: java.io.IOException -> L50
            goto L54
        L50:
            r0 = move-exception
            r0.printStackTrace()
        L54:
            throw r8
        */
        throw new UnsupportedOperationException("Method not decompiled: com.qihoo360.replugin.utils.basic.SecurityUtil.getMd5ByFile(java.io.File):java.lang.String");
    }

    /* JADX WARN: Can't wrap try/catch for region: R(9:0|2|(5:38|3|4|36|5)|(3:6|(1:8)(1:40)|(1:23)(2:24|25))|9|32|10|(0)(0)|(1:(0))) */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0037 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0038  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static java.lang.String getMD5(java.io.InputStream r5) throws java.lang.Throwable {
        /*
            r0 = 0
            java.lang.String r1 = "MD5"
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2e
            java.io.BufferedInputStream r2 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2e
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L27 java.lang.Exception -> L2e
            r5 = 1024(0x400, float:1.435E-42)
            byte[] r5 = new byte[r5]     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L2f
        L10:
            int r3 = r2.read(r5)     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L2f
            r4 = -1
            if (r3 == r4) goto L1c
            r4 = 0
            r1.update(r5, r4, r3)     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L2f
            goto L10
        L1c:
            byte[] r5 = r1.digest()     // Catch: java.lang.Throwable -> L24 java.lang.Exception -> L2f
            r2.close()     // Catch: java.lang.Exception -> L35
            goto L35
        L24:
            r5 = move-exception
            r0 = r2
            goto L28
        L27:
            r5 = move-exception
        L28:
            if (r0 == 0) goto L2d
            r0.close()     // Catch: java.lang.Exception -> L2d
        L2d:
            throw r5
        L2e:
            r2 = r0
        L2f:
            if (r2 == 0) goto L34
            r2.close()     // Catch: java.lang.Exception -> L34
        L34:
            r5 = r0
        L35:
            if (r5 != 0) goto L38
            return r0
        L38:
            java.lang.String r5 = com.qihoo360.replugin.utils.basic.ByteConvertor.bytesToHexString(r5)
            return r5
        */
        throw new UnsupportedOperationException("Method not decompiled: com.qihoo360.replugin.utils.basic.SecurityUtil.getMD5(java.io.InputStream):java.lang.String");
    }

    public static byte[] MD5(String str) {
        return MD5(new File(str));
    }

    public static byte[] MD5(File file) throws Throwable {
        Throwable th;
        FileInputStream fileInputStreamOpenInputStream;
        try {
            fileInputStreamOpenInputStream = FileUtils.openInputStream(file);
            try {
                byte[] bArrMD5 = MD5(fileInputStreamOpenInputStream);
                CloseableUtils.closeQuietly(fileInputStreamOpenInputStream);
                return bArrMD5;
            } catch (Exception unused) {
                CloseableUtils.closeQuietly(fileInputStreamOpenInputStream);
                return null;
            } catch (Throwable th2) {
                th = th2;
                CloseableUtils.closeQuietly(fileInputStreamOpenInputStream);
                throw th;
            }
        } catch (Exception unused2) {
            fileInputStreamOpenInputStream = null;
        } catch (Throwable th3) {
            th = th3;
            fileInputStreamOpenInputStream = null;
        }
    }

    public static final byte[] MD5(InputStream inputStream) throws NoSuchAlgorithmException, IOException {
        MessageDigest messageDigest = MessageDigest.getInstance("MD5");
        byte[] bArr = new byte[4096];
        while (true) {
            int i = inputStream.read(bArr);
            if (i < 0) {
                return messageDigest.digest();
            }
            if (i > 0) {
                messageDigest.update(bArr, 0, i);
            }
        }
    }
}
