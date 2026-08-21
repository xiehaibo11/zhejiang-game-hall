package com.kwad.sdk.core.videocache;

final class d {
    private static final java.util.regex.Pattern awm = null;
    private static final java.util.regex.Pattern awn = null;
    public final long awo;
    public final boolean awp;
    public final java.lang.String uri;

    static {
            java.lang.String r0 = "[R,r]ange:[ ]?bytes=(\\d*)-"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.kwad.sdk.core.videocache.d.awm = r0
            java.lang.String r0 = "GET /(.*) HTTP"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.kwad.sdk.core.videocache.d.awn = r0
            return
    }

    private d(java.lang.String r7) {
            r6 = this;
            r6.<init>()
            com.kwad.sdk.utils.ao.fE(r7)
            long r0 = dL(r7)
            r2 = 0
            long r4 = java.lang.Math.max(r2, r0)
            r6.awo = r4
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L18
            r0 = 1
            goto L19
        L18:
            r0 = 0
        L19:
            r6.awp = r0
            java.lang.String r7 = dM(r7)
            r6.uri = r7
            return
    }

    public static com.kwad.sdk.core.videocache.d b(java.io.InputStream r3) {
            java.io.BufferedReader r0 = new java.io.BufferedReader
            java.io.InputStreamReader r1 = new java.io.InputStreamReader
            java.lang.String r2 = "UTF-8"
            r1.<init>(r3, r2)
            r0.<init>(r1)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
        L11:
            java.lang.String r1 = r0.readLine()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L24
            r3.append(r1)
            r1 = 10
            r3.append(r1)
            goto L11
        L24:
            com.kwad.sdk.core.videocache.d r0 = new com.kwad.sdk.core.videocache.d
            java.lang.String r3 = r3.toString()
            r0.<init>(r3)
            return r0
    }

    private static long dL(java.lang.String r2) {
            java.util.regex.Pattern r0 = com.kwad.sdk.core.videocache.d.awm
            java.util.regex.Matcher r2 = r0.matcher(r2)
            boolean r0 = r2.find()
            if (r0 == 0) goto L16
            r0 = 1
            java.lang.String r2 = r2.group(r0)
            long r0 = java.lang.Long.parseLong(r2)
            return r0
        L16:
            r0 = -1
            return r0
    }

    private static java.lang.String dM(java.lang.String r3) {
            java.util.regex.Pattern r0 = com.kwad.sdk.core.videocache.d.awn
            java.util.regex.Matcher r0 = r0.matcher(r3)
            boolean r1 = r0.find()
            if (r1 == 0) goto L12
            r3 = 1
            java.lang.String r3 = r0.group(r3)
            return r3
        L12:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Invalid request `"
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = "`: url not found!"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "GetRequest{rangeOffset="
            r0.<init>(r1)
            long r1 = r3.awo
            r0.append(r1)
            java.lang.String r1 = ", partial="
            r0.append(r1)
            boolean r1 = r3.awp
            r0.append(r1)
            java.lang.String r1 = ", uri='"
            r0.append(r1)
            java.lang.String r1 = r3.uri
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
