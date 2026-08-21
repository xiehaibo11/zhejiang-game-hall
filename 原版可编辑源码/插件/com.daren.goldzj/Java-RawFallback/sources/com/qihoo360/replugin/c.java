package com.qihoo360.replugin;

class c {
    static int a(java.lang.String r2, java.lang.String r3) {
            android.content.pm.PackageInfo r0 = com.qihoo360.replugin.RePlugin.fetchPackageInfo(r2)
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            android.content.res.Resources r2 = com.qihoo360.replugin.RePlugin.fetchResources(r2)
            if (r2 != 0) goto Lf
            return r1
        Lf:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = r0.packageName
            r1.append(r0)
            java.lang.String r0 = ":"
            r1.append(r0)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0 = 0
            java.lang.String r1 = "com.daren.goldzj"
            int r2 = r2.getIdentifier(r3, r0, r1)
            return r2
    }

    public static <T extends android.view.View> T a(java.lang.String r3, java.lang.String r4, android.view.ViewGroup r5) {
            android.content.Context r0 = com.qihoo360.replugin.RePlugin.fetchContext(r3)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "layout/"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            int r3 = a(r3, r4)
            if (r3 > 0) goto L1d
            r3 = 0
            return r3
        L1d:
            android.view.LayoutInflater r4 = android.view.LayoutInflater.from(r0)
            android.view.View r3 = r4.inflate(r3, r5)
            return r3
    }
}
