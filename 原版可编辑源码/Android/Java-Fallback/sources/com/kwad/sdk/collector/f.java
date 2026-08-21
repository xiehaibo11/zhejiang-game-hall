package com.kwad.sdk.collector;

public final class f {
    private static com.kwad.sdk.collector.g aI(android.content.Context r2) {
            boolean r2 = com.kwad.sdk.utils.al.cq(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "queryAccessibilityServicePermission result: "
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "InfoCollector"
            com.kwad.sdk.core.e.c.d(r1, r0)
            if (r2 == 0) goto L1c
            int r2 = com.kwad.sdk.collector.g.PERMISSION_GRANTED
            goto L1e
        L1c:
            int r2 = com.kwad.sdk.collector.g.PERMISSION_DENIED
        L1e:
            com.kwad.sdk.collector.g r0 = new com.kwad.sdk.collector.g
            java.lang.String r1 = "android.permission.BIND_ACCESSIBILITY_SERVICE"
            r0.<init>(r1, r2)
            return r0
    }

    private static java.util.List<com.kwad.sdk.collector.g> aJ(android.content.Context r7) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            if (r7 != 0) goto L8
            return r0
        L8:
            java.lang.String[] r1 = com.kwad.sdk.utils.aj.cp(r7)
            if (r1 == 0) goto L30
            int r2 = r1.length
            r3 = 0
        L10:
            if (r3 >= r2) goto L30
            r4 = r1[r3]
            int r5 = com.kwad.sdk.utils.al.ao(r7, r4)
            if (r5 != 0) goto L1d
            int r5 = com.kwad.sdk.collector.g.PERMISSION_GRANTED
            goto L25
        L1d:
            r6 = -1
            if (r5 != r6) goto L23
            int r5 = com.kwad.sdk.collector.g.PERMISSION_DENIED
            goto L25
        L23:
            int r5 = com.kwad.sdk.collector.g.ajL
        L25:
            com.kwad.sdk.collector.g r6 = new com.kwad.sdk.collector.g
            r6.<init>(r4, r5)
            r0.add(r6)
            int r3 = r3 + 1
            goto L10
        L30:
            return r0
    }

    public static org.json.JSONArray yH() {
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.getContext()
            java.util.List r1 = aJ(r0)
            com.kwad.sdk.collector.g r0 = aI(r0)
            r1.add(r0)
            org.json.JSONArray r0 = com.kwad.sdk.collector.g.p(r1)
            return r0
    }
}
