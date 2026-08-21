package com.ss.android.socialbase.appdownloader.df;

public class rg {
    public static final java.lang.String rg = null;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            r2 = 1
            r1 = r1 ^ r2
            java.lang.String r3 = android.os.Build.ID
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            r3 = r3 ^ r2
            java.lang.String r4 = android.os.Build.VERSION.CODENAME
            java.lang.String r5 = "REL"
            boolean r4 = r5.equals(r4)
            if (r4 == 0) goto L27
            java.lang.String r4 = android.os.Build.MODEL
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L27
            goto L28
        L27:
            r2 = 0
        L28:
            java.lang.String r4 = "AppDownloader"
            r0.append(r4)
            if (r1 == 0) goto L39
            java.lang.String r4 = "/"
            r0.append(r4)
            java.lang.String r4 = android.os.Build.VERSION.RELEASE
            r0.append(r4)
        L39:
            java.lang.String r4 = " (Linux; U; Android"
            r0.append(r4)
            java.lang.String r4 = " "
            if (r1 == 0) goto L4a
            r0.append(r4)
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            r0.append(r1)
        L4a:
            if (r2 != 0) goto L4e
            if (r3 == 0) goto L69
        L4e:
            java.lang.String r1 = ";"
            r0.append(r1)
            if (r2 == 0) goto L5d
            r0.append(r4)
            java.lang.String r1 = android.os.Build.MODEL
            r0.append(r1)
        L5d:
            if (r3 == 0) goto L69
            java.lang.String r1 = " Build/"
            r0.append(r1)
            java.lang.String r1 = android.os.Build.ID
            r0.append(r1)
        L69:
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.ss.android.socialbase.appdownloader.df.rg.rg = r0
            return
    }
}
