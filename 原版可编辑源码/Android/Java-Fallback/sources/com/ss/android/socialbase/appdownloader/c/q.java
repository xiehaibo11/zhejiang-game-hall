package com.ss.android.socialbase.appdownloader.c;

public class q {
    public static java.lang.String rg(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.lang.String r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.hexToString(r1)
            r0 = 0
            byte[] r1 = android.util.Base64.decode(r1, r0)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1)
            return r0
    }

    public static java.lang.String rg(java.lang.String r7, java.lang.String r8) {
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto L3b
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 == 0) goto Ld
            goto L3b
        Ld:
            java.lang.String r7 = com.ss.android.socialbase.downloader.utils.DownloadUtils.hexToString(r7)
            r0 = 0
            byte[] r7 = android.util.Base64.decode(r7, r0)
            int r1 = r8.length()
            int r2 = r7.length
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r4 = r0
        L21:
            if (r0 >= r2) goto L36
            if (r4 < r1) goto L26
            int r4 = r4 % r1
        L26:
            r5 = r7[r0]
            char r6 = r8.charAt(r4)
            r5 = r5 ^ r6
            char r5 = (char) r5
            r3.append(r5)
            int r4 = r4 + 1
            int r0 = r0 + 1
            goto L21
        L36:
            java.lang.String r7 = r3.toString()
            return r7
        L3b:
            r7 = 0
            return r7
    }
}
