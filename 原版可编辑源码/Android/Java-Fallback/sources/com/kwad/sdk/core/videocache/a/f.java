package com.kwad.sdk.core.videocache.a;

public final class f implements com.kwad.sdk.core.videocache.a.c {
    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String dV(java.lang.String r6) {
            android.net.Uri r0 = android.net.Uri.parse(r6)
            java.lang.String r1 = r0.getHost()
            if (r1 == 0) goto L74
            java.lang.String r1 = r0.getHost()
            java.lang.String r2 = "yximgs.com"
            boolean r1 = r1.contains(r2)
            if (r1 == 0) goto L74
            android.net.Uri$Builder r6 = r0.buildUpon()
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            boolean r2 = r0.isHierarchical()
            if (r2 == 0) goto L70
            java.util.Set r2 = r0.getQueryParameterNames()
            java.util.Iterator r3 = r2.iterator()
        L2d:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L41
            java.lang.Object r4 = r3.next()
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r5 = r0.getQueryParameter(r4)
            r1.put(r4, r5)
            goto L2d
        L41:
            r6.clearQuery()
            java.util.Iterator r0 = r2.iterator()
        L48:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L70
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r3 = "tag"
            boolean r3 = r3.equals(r2)
            if (r3 != 0) goto L48
            java.lang.String r3 = "di"
            boolean r3 = r3.equals(r2)
            if (r3 != 0) goto L48
            if (r2 == 0) goto L48
            java.lang.Object r3 = r1.get(r2)
            java.lang.String r3 = (java.lang.String) r3
            r6.appendQueryParameter(r2, r3)
            goto L48
        L70:
            java.lang.String r6 = r6.toString()
        L74:
            return r6
    }

    private static java.lang.String getExtension(java.lang.String r3) {
            r0 = 46
            int r0 = r3.lastIndexOf(r0)
            r1 = 47
            int r1 = r3.lastIndexOf(r1)
            r2 = -1
            if (r0 == r2) goto L26
            if (r0 <= r1) goto L26
            int r1 = r0 + 2
            int r1 = r1 + 4
            int r2 = r3.length()
            if (r1 <= r2) goto L26
            int r0 = r0 + 1
            int r1 = r3.length()
            java.lang.String r3 = r3.substring(r0, r1)
            return r3
        L26:
            java.lang.String r3 = ""
            return r3
    }

    @Override
    public final java.lang.String generate(java.lang.String r3) {
            r2 = this;
            java.lang.String r3 = dV(r3)
            java.lang.String r0 = getExtension(r3)
            java.lang.String r3 = com.kwad.sdk.utils.ad.bp(r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L13
            return r3
        L13:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            r1.append(r0)
            java.lang.String r3 = r1.toString()
            return r3
    }
}
