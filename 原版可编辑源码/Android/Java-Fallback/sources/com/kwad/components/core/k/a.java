package com.kwad.components.core.k;

public class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
    private static java.text.SimpleDateFormat Ld;
    public int Le;
    public long Lf;

    static {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd"
            r0.<init>(r1)
            com.kwad.components.core.k.a.Ld = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public final boolean h(int r13, int r14) {
            r12 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "checkAndAddCount forceActiveIntervalHour: "
            r0.<init>(r1)
            r0.append(r13)
            java.lang.String r1 = ", forceActiveThreshold: "
            r0.append(r1)
            r0.append(r14)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AdForceActiveInfo"
            com.kwad.sdk.core.e.c.d(r1, r0)
            long r2 = r12.Lf
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r2 = 1
            if (r0 <= 0) goto L99
            long r3 = java.lang.System.currentTimeMillis()
            java.text.SimpleDateFormat r0 = com.kwad.components.core.k.a.Ld
            java.util.Date r5 = new java.util.Date
            long r6 = r12.Lf
            r5.<init>(r6)
            java.lang.String r0 = r0.format(r5)
            java.text.SimpleDateFormat r5 = com.kwad.components.core.k.a.Ld
            java.util.Date r6 = new java.util.Date
            r6.<init>(r3)
            java.lang.String r5 = r5.format(r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r7 = "checkAndAddCount lastDate: "
            r6.<init>(r7)
            r6.append(r0)
            java.lang.String r7 = ", currentDate: "
            r6.append(r7)
            r6.append(r5)
            java.lang.String r6 = r6.toString()
            com.kwad.sdk.core.e.c.d(r1, r6)
            boolean r0 = r0.equals(r5)
            r5 = 0
            if (r0 != 0) goto L66
            r12.Le = r5
            r12.oc()
            return r2
        L66:
            long r6 = r12.Lf
            long r8 = (long) r13
            r10 = 60
            long r8 = r8 * r10
            long r8 = r8 * r10
            r10 = 1000(0x3e8, double:4.94E-321)
            long r8 = r8 * r10
            long r6 = r6 + r8
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            java.lang.String r0 = "checkAndAddCount minTimestamp: "
            r13.<init>(r0)
            r13.append(r6)
            java.lang.String r0 = ", currentActiveCount: "
            r13.append(r0)
            int r0 = r12.Le
            r13.append(r0)
            java.lang.String r13 = r13.toString()
            com.kwad.sdk.core.e.c.d(r1, r13)
            int r13 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r13 >= 0) goto L98
            int r13 = r12.Le
            if (r13 > r14) goto L98
            r12.oc()
            return r2
        L98:
            return r5
        L99:
            r12.oc()
            return r2
    }

    public final void oc() {
            r3 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r3.Lf = r0
            int r0 = r3.Le
            int r0 = r0 + 1
            r3.Le = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "doAddCount, lastForceActiveTimestamp: "
            r0.<init>(r1)
            long r1 = r3.Lf
            r0.append(r1)
            java.lang.String r1 = ", currentActiveCount "
            r0.append(r1)
            int r1 = r3.Le
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AdForceActiveInfo"
            com.kwad.sdk.core.e.c.d(r1, r0)
            return
    }
}
