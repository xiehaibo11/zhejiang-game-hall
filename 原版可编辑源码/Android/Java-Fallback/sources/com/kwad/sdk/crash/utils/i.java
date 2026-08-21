package com.kwad.sdk.crash.utils;

public final class i {
    private static java.text.SimpleDateFormat aBW;

    static {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd HH:mm:ss"
            r0.<init>(r1)
            com.kwad.sdk.crash.utils.i.aBW = r0
            return
    }

    public static java.lang.String al(long r2) {
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 > 0) goto L9
            java.lang.String r2 = "unknown"
            return r2
        L9:
            java.text.SimpleDateFormat r0 = com.kwad.sdk.crash.utils.i.aBW
            java.util.Date r1 = new java.util.Date
            r1.<init>(r2)
            java.lang.String r2 = r0.format(r1)
            return r2
    }
}
