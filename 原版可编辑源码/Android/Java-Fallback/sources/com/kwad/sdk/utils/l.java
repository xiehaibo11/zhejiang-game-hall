package com.kwad.sdk.utils;

public final class l {
    public static long aIf = -1;

    static {
            return
    }

    public static void cA(com.kwad.sdk.core.response.model.AdTemplate r2) {
            if (r2 == 0) goto L8
            long r0 = java.lang.System.currentTimeMillis()
            r2.mOutClickTimeParam = r0
        L8:
            return
    }

    public static void cB(com.kwad.sdk.core.response.model.AdTemplate r2) {
            if (r2 == 0) goto L8
            long r0 = java.lang.System.currentTimeMillis()
            r2.mVisibleTimeParam = r0
        L8:
            return
    }

    public static long cC(com.kwad.sdk.core.response.model.AdTemplate r4) {
            if (r4 != 0) goto L7
            long r0 = java.lang.System.currentTimeMillis()
            return r0
        L7:
            long r0 = r4.mOutClickTimeParam
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L12
            long r0 = r4.mOutClickTimeParam
            return r0
        L12:
            long r0 = r4.mVisibleTimeParam
            return r0
    }

    public static void cz(com.kwad.sdk.core.response.model.AdTemplate r2) {
            if (r2 == 0) goto La
            long r0 = com.kwad.sdk.utils.l.aIf
            r2.mVisibleTimeParam = r0
            long r0 = com.kwad.sdk.utils.l.aIf
            r2.mOutClickTimeParam = r0
        La:
            return
    }
}
