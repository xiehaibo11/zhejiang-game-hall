package com.loc;

public abstract class r extends com.loc.bt {
    public r() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.lang.String c() {
            r4 = this;
            java.lang.String r0 = r4.b()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lf
            java.lang.String r0 = r4.b()
            return r0
        Lf:
            java.lang.String r0 = r4.b()
            android.net.Uri r1 = android.net.Uri.parse(r0)
            java.lang.String r2 = r1.getAuthority()
            java.lang.String r3 = "dualstack-"
            boolean r2 = r2.startsWith(r3)
            if (r2 == 0) goto L24
            return r0
        L24:
            java.lang.String r0 = r1.getAuthority()
            java.lang.String r2 = "restsdk.amap.com"
            boolean r0 = r0.startsWith(r2)
            if (r0 == 0) goto L43
            android.net.Uri$Builder r0 = r1.buildUpon()
            java.lang.String r1 = "dualstack-arestapi.amap.com"
        L36:
            android.net.Uri$Builder r0 = r0.authority(r1)
            android.net.Uri r0 = r0.build()
            java.lang.String r0 = r0.toString()
            return r0
        L43:
            android.net.Uri$Builder r0 = r1.buildUpon()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>(r3)
            java.lang.String r1 = r1.getAuthority()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            goto L36
    }
}
