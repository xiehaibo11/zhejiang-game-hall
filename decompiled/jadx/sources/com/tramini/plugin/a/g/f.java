package com.tramini.plugin.a.g;

import java.security.MessageDigest;

/* JADX INFO: loaded from: classes4.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static char[] f7869a = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    public static String a(String str) {
        try {
            MessageDigest messageDigest = MessageDigest.getInstance("MD5");
            messageDigest.update(str.getBytes());
            byte[] bArrDigest = messageDigest.digest();
            StringBuilder sb = new StringBuilder(bArrDigest.length * 2);
            for (int i = 0; i < bArrDigest.length; i++) {
                sb.append(f7869a[(bArrDigest[i] & 240) >>> 4]);
                sb.append(f7869a[bArrDigest[i] & 15]);
            }
            return sb.toString().toLowerCase();
        } catch (Exception unused) {
            return "";
        }
    }

    private static String a(byte[] bArr) {
        StringBuilder sb = new StringBuilder(bArr.length * 2);
        for (int i = 0; i < bArr.length; i++) {
            sb.append(f7869a[(bArr[i] & 240) >>> 4]);
            sb.append(f7869a[bArr[i] & 15]);
        }
        return sb.toString();
    }
}
