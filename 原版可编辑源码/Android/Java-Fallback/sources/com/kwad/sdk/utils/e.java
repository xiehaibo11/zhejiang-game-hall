package com.kwad.sdk.utils;

public final class e {
    private static java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.String>> aHJ;
    private static java.lang.String aHK;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.sdk.utils.e.aHJ = r0
            return
    }

    private static java.util.ArrayList<java.lang.String> H(android.content.Context r9, java.lang.String r10) {
            java.lang.String r0 = "SHA256"
            java.lang.String r1 = "SHA1"
            java.lang.String r2 = "MD5"
            r3 = 0
            if (r9 != 0) goto La
            return r3
        La:
            java.lang.String r4 = r9.getPackageName()
            if (r4 != 0) goto L11
            return r3
        L11:
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.String>> r3 = com.kwad.sdk.utils.e.aHJ
            java.lang.Object r3 = r3.get(r10)
            if (r3 == 0) goto L22
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.String>> r9 = com.kwad.sdk.utils.e.aHJ
            java.lang.Object r9 = r9.get(r10)
            java.util.ArrayList r9 = (java.util.ArrayList) r9
            return r9
        L22:
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            android.content.pm.Signature[] r9 = I(r9, r4)     // Catch: java.lang.Exception -> L59
            int r4 = r9.length     // Catch: java.lang.Exception -> L59
            r5 = 0
        L2d:
            if (r5 >= r4) goto L71
            r6 = r9[r5]     // Catch: java.lang.Exception -> L59
            java.lang.String r7 = "error!"
            boolean r8 = r2.equals(r10)     // Catch: java.lang.Exception -> L59
            if (r8 == 0) goto L3e
            java.lang.String r7 = a(r6, r2)     // Catch: java.lang.Exception -> L59
            goto L53
        L3e:
            boolean r8 = r1.equals(r10)     // Catch: java.lang.Exception -> L59
            if (r8 == 0) goto L49
            java.lang.String r7 = a(r6, r1)     // Catch: java.lang.Exception -> L59
            goto L53
        L49:
            boolean r8 = r0.equals(r10)     // Catch: java.lang.Exception -> L59
            if (r8 == 0) goto L53
            java.lang.String r7 = a(r6, r0)     // Catch: java.lang.Exception -> L59
        L53:
            r3.add(r7)     // Catch: java.lang.Exception -> L59
            int r5 = r5 + 1
            goto L2d
        L59:
            r9 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "签名信息列表获取失败 "
            r0.<init>(r1)
            java.lang.String r9 = r9.getMessage()
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            java.lang.String r0 = "AppSigningUtil"
            com.kwad.sdk.core.e.c.e(r0, r9)
        L71:
            java.util.HashMap<java.lang.String, java.util.ArrayList<java.lang.String>> r9 = com.kwad.sdk.utils.e.aHJ
            r9.put(r10, r3)
            return r3
    }

    private static android.content.pm.Signature[] I(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Exception -> L11
            r1 = 64
            android.content.pm.PackageInfo r2 = r2.getPackageInfo(r3, r1)     // Catch: java.lang.Exception -> L11
            if (r2 != 0) goto Le
            return r0
        Le:
            android.content.pm.Signature[] r2 = r2.signatures     // Catch: java.lang.Exception -> L11
            return r2
        L11:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "AppSigningUtil"
            com.kwad.sdk.core.e.c.e(r3, r2)
            return r0
    }

    private static java.lang.String a(android.content.pm.Signature r7, java.lang.String r8) {
            byte[] r7 = r7.toByteArray()
            java.lang.String r0 = "error!"
            java.security.MessageDigest r8 = java.security.MessageDigest.getInstance(r8)     // Catch: java.lang.Exception -> L43
            if (r8 == 0) goto L4d
            byte[] r7 = r8.digest(r7)     // Catch: java.lang.Exception -> L43
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L43
            r8.<init>()     // Catch: java.lang.Exception -> L43
            int r1 = r7.length     // Catch: java.lang.Exception -> L43
            r2 = 0
            r3 = r2
        L18:
            r4 = 1
            if (r3 >= r1) goto L39
            r5 = r7[r3]     // Catch: java.lang.Exception -> L43
            r5 = r5 & 255(0xff, float:3.57E-43)
            r5 = r5 | 256(0x100, float:3.59E-43)
            java.lang.String r5 = java.lang.Integer.toHexString(r5)     // Catch: java.lang.Exception -> L43
            r6 = 3
            java.lang.String r4 = r5.substring(r4, r6)     // Catch: java.lang.Exception -> L43
            java.lang.String r4 = r4.toUpperCase()     // Catch: java.lang.Exception -> L43
            r8.append(r4)     // Catch: java.lang.Exception -> L43
            java.lang.String r4 = ":"
            r8.append(r4)     // Catch: java.lang.Exception -> L43
            int r3 = r3 + 1
            goto L18
        L39:
            int r7 = r8.length()     // Catch: java.lang.Exception -> L43
            int r7 = r7 - r4
            java.lang.String r0 = r8.substring(r2, r7)     // Catch: java.lang.Exception -> L43
            goto L4d
        L43:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            java.lang.String r8 = "AppSigningUtil"
            com.kwad.sdk.core.e.c.e(r8, r7)
        L4d:
            return r0
    }

    public static java.lang.String bG(android.content.Context r1) {
            java.lang.String r0 = com.kwad.sdk.utils.e.aHK
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r1 = com.kwad.sdk.utils.e.aHK
            return r1
        Lb:
            java.lang.String r0 = "SHA1"
            java.util.ArrayList r1 = H(r1, r0)
            if (r1 == 0) goto L22
            int r0 = r1.size()
            if (r0 == 0) goto L22
            r0 = 0
            java.lang.Object r1 = r1.get(r0)
            java.lang.String r1 = (java.lang.String) r1
            com.kwad.sdk.utils.e.aHK = r1
        L22:
            java.lang.String r1 = com.kwad.sdk.utils.e.aHK
            return r1
    }
}
