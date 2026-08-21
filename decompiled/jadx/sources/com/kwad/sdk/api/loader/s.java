package com.kwad.sdk.api.loader;

import java.io.Closeable;
import java.io.File;
import java.io.FileInputStream;
import java.security.DigestInputStream;
import java.security.MessageDigest;
import kotlin.UByte;

/* JADX INFO: loaded from: classes2.dex */
final class s {
    private static final char[] ajn = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    private static void b(Closeable closeable) {
        if (closeable != null) {
            try {
                closeable.close();
            } catch (Throwable unused) {
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r7v0, types: [java.io.File] */
    /* JADX WARN: Type inference failed for: r7v2 */
    /* JADX WARN: Type inference failed for: r7v5, types: [java.io.Closeable] */
    static String getFileMD5(File file) throws Throwable {
        Throwable th;
        Exception e;
        DigestInputStream digestInputStream;
        try {
            try {
                MessageDigest messageDigest = MessageDigest.getInstance("MD5");
                digestInputStream = new DigestInputStream(new FileInputStream((File) file), messageDigest);
                try {
                    while (digestInputStream.read(new byte[1024]) != -1) {
                    }
                    byte[] bArrDigest = messageDigest.digest();
                    StringBuilder sb = new StringBuilder(bArrDigest.length * 2);
                    for (byte b : bArrDigest) {
                        int i = b & UByte.MAX_VALUE;
                        if (i < 16) {
                            sb.append("0");
                        }
                        sb.append(Integer.toHexString(i));
                    }
                    String string = sb.toString();
                    b(digestInputStream);
                    return string;
                } catch (Exception e2) {
                    e = e2;
                    e.printStackTrace();
                    b(digestInputStream);
                    return "";
                }
            } catch (Throwable th2) {
                th = th2;
                b(file);
                throw th;
            }
        } catch (Exception e3) {
            e = e3;
            digestInputStream = null;
        } catch (Throwable th3) {
            th = th3;
            file = 0;
            b(file);
            throw th;
        }
    }
}
