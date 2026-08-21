package com.kwad.components.offline.api.core.utils;

public final class LiveRequestDataUtils {
    public LiveRequestDataUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String appendUrl(java.lang.String r5, java.util.Map<java.lang.String, java.lang.String> r6) {
            if (r6 == 0) goto L76
            int r0 = r6.size()
            if (r0 > 0) goto L9
            goto L76
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Set r1 = r6.keySet()
            java.util.Iterator r1 = r1.iterator()
        L16:
            boolean r2 = r1.hasNext()
            java.lang.String r3 = "&"
            if (r2 == 0) goto L3f
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r4 = r6.get(r2)
            if (r4 == 0) goto L16
            r0.append(r2)
            java.lang.String r4 = "="
            r0.append(r4)
            java.lang.Object r2 = r6.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            r0.append(r3)
            goto L16
        L3f:
            java.lang.String r6 = r0.toString()
            r0 = 0
            int r1 = r6.length()
            int r1 = r1 + (-1)
            java.lang.String r6 = r6.substring(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r1 = "?"
            boolean r5 = r5.contains(r1)
            if (r5 == 0) goto L5f
            goto L60
        L5f:
            r3 = r1
        L60:
            r0.append(r3)
            java.lang.String r5 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            r0.append(r6)
            java.lang.String r5 = r0.toString()
        L76:
            return r5
    }
}
