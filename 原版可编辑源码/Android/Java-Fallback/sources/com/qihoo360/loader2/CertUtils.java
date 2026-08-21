package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class CertUtils {
    public static final java.util.ArrayList<java.lang.String> SIGNATURES = null;

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.qihoo360.loader2.CertUtils.SIGNATURES = r0
            return
    }

    public CertUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final boolean isPluginSignatures(android.content.pm.PackageInfo r10) {
            java.lang.String r0 = "ws001"
            r1 = 0
            if (r10 != 0) goto Lf
            boolean r10 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r10 == 0) goto Le
            java.lang.String r10 = "info is null"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r10)
        Le:
            return r1
        Lf:
            android.content.pm.Signature[] r2 = r10.signatures
            if (r2 != 0) goto L1d
            boolean r10 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r10 == 0) goto L1c
            java.lang.String r10 = "signatures is null"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r10)
        L1c:
            return r1
        L1d:
            android.content.pm.Signature[] r2 = r10.signatures
            int r3 = r2.length
            r4 = r1
        L21:
            r5 = 1
            if (r4 >= r3) goto La9
            r6 = r2[r4]
            byte[] r6 = r6.toByteArray()
            byte[] r6 = md5NonE(r6)
            java.lang.String r6 = com.qihoo360.loader.utils.StringUtils.toHexString(r6)
            java.util.ArrayList<java.lang.String> r7 = com.qihoo360.loader2.CertUtils.SIGNATURES
            java.util.Iterator r7 = r7.iterator()
        L38:
            boolean r8 = r7.hasNext()
            java.lang.String r9 = " package="
            if (r8 == 0) goto L6d
            java.lang.Object r8 = r7.next()
            java.lang.String r8 = (java.lang.String) r8
            boolean r8 = android.text.TextUtils.equals(r6, r8)
            if (r8 == 0) goto L38
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto L6e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "isPluginSignatures: match. "
            r7.append(r8)
            r7.append(r6)
            r7.append(r9)
            java.lang.String r8 = r10.packageName
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.qihoo360.replugin.helper.LogDebug.i(r0, r7)
            goto L6e
        L6d:
            r5 = r1
        L6e:
            if (r5 != 0) goto La5
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L90
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "isPluginSignatures: unknown signature: "
            r2.append(r3)
            r2.append(r6)
            r2.append(r9)
            java.lang.String r10 = r10.packageName
            r2.append(r10)
            java.lang.String r10 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.e(r0, r10)
        L90:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r2 = "ibs: us "
            r10.append(r2)
            r10.append(r6)
            java.lang.String r10 = r10.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r0, r10)
            return r1
        La5:
            int r4 = r4 + 1
            goto L21
        La9:
            return r5
    }

    public static final byte[] md5(byte[] r3) throws java.security.NoSuchAlgorithmException {
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)
            int r1 = r3.length
            r2 = 0
            r0.update(r3, r2, r1)
            byte[] r3 = r0.digest()
            return r3
    }

    public static final byte[] md5NonE(byte[] r2) {
            byte[] r2 = md5(r2)     // Catch: java.security.NoSuchAlgorithmException -> L5
            return r2
        L5:
            r2 = move-exception
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L13
            java.lang.String r0 = r2.getMessage()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0, r2)
        L13:
            r2 = 0
            byte[] r2 = new byte[r2]
            return r2
    }
}
