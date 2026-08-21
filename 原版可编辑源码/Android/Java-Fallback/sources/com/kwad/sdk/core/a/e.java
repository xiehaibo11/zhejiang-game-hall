package com.kwad.sdk.core.a;

public final class e {
    private static java.lang.String H(java.lang.String r2, java.lang.String r3) {
            android.net.Uri r2 = android.net.Uri.parse(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getPath()
            r0.append(r1)
            java.lang.String r1 = "&"
            r0.append(r1)
            java.lang.String r2 = r2.getQuery()
            java.lang.String r2 = cU(r2)
            r0.append(r2)
            r0.append(r1)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static void a(java.lang.String r0, java.util.Map<java.lang.String, java.lang.String> r1, java.lang.String r2) {
            java.lang.String r0 = H(r0, r2)
            java.lang.String r0 = cV(r0)
            java.lang.String r2 = "Ks-Sig1"
            r1.put(r2, r0)
            return
    }

    private static java.lang.String cU(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Lb
            java.lang.String r1 = emptyIfNull(r1)
            return r1
        Lb:
            java.lang.String r0 = "&"
            java.lang.String[] r1 = r1.split(r0)
            java.util.Arrays.sort(r1)
            java.lang.String r1 = android.text.TextUtils.join(r0, r1)
            return r1
    }

    private static java.lang.String cV(java.lang.String r2) {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            java.lang.String r1 = ""
            if (r0 != 0) goto L11
            return r1
        L11:
            java.lang.String r2 = com.yxcorp.kuaishou.addfp.KWEGIDDFP.doSign(r0, r2)
            if (r2 != 0) goto L18
            return r1
        L18:
            return r2
    }

    private static java.lang.String emptyIfNull(java.lang.String r0) {
            if (r0 != 0) goto L4
            java.lang.String r0 = ""
        L4:
            return r0
    }
}
