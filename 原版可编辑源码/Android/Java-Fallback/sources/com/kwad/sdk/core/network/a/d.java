package com.kwad.sdk.core.network.a;

public final class d implements okhttp3.Dns {
    private static final okhttp3.Dns SYSTEM = null;

    static {
            okhttp3.Dns r0 = okhttp3.Dns.SYSTEM
            com.kwad.sdk.core.network.a.d.SYSTEM = r0
            return
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.util.List<java.net.InetAddress> lookup(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = com.kwad.sdk.ip.direct.a.eV(r4)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "IpDirect_OkHttpDns"
            if (r1 != 0) goto L36
            java.net.InetAddress[] r0 = java.net.InetAddress.getAllByName(r0)
            java.util.List r0 = java.util.Arrays.asList(r0)
            if (r0 == 0) goto L2f
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L1d
            goto L2f
        L1d:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r1 = "inetAddresses:"
            r4.<init>(r1)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.kwad.sdk.core.e.c.d(r2, r4)
            return r0
        L2f:
            okhttp3.Dns r0 = com.kwad.sdk.core.network.a.d.SYSTEM
            java.util.List r4 = r0.lookup(r4)
            return r4
        L36:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "Dns.SYSTEM.lookup(hostname):"
            r0.<init>(r1)
            okhttp3.Dns r1 = okhttp3.Dns.SYSTEM
            java.util.List r1 = r1.lookup(r4)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.core.e.c.d(r2, r0)
            goto L2f
    }
}
