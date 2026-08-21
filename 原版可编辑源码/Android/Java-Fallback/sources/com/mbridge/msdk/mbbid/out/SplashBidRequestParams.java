package com.mbridge.msdk.mbbid.out;

public class SplashBidRequestParams extends com.mbridge.msdk.mbbid.out.BannerBidRequestParams {
    private static int b = 1;
    private static int c;
    private static int d;
    private boolean a;

    static {
            return
    }

    public SplashBidRequestParams(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = ""
            r1.<init>(r2, r3, r0)
            return
    }

    public SplashBidRequestParams(java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            r8 = this;
            int r5 = com.mbridge.msdk.mbbid.out.SplashBidRequestParams.b
            int r6 = com.mbridge.msdk.mbbid.out.SplashBidRequestParams.d
            int r7 = com.mbridge.msdk.mbbid.out.SplashBidRequestParams.c
            r4 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public SplashBidRequestParams(java.lang.String r7, java.lang.String r8, java.lang.String r9, boolean r10, int r11, int r12, int r13) {
            r6 = this;
            r4 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            r7 = 0
            r6.a = r7
            com.mbridge.msdk.mbbid.out.SplashBidRequestParams.b = r11
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r8 = r8.j()
            int r8 = com.mbridge.msdk.foundation.tools.v.x(r8)
            com.mbridge.msdk.foundation.controller.a r9 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r9 = r9.j()
            int r9 = com.mbridge.msdk.foundation.tools.v.y(r9)
            int r11 = com.mbridge.msdk.mbbid.out.SplashBidRequestParams.b
            r0 = 1
            if (r11 != r0) goto L3e
            int r11 = r13 * 4
            if (r9 <= r11) goto L37
            int r9 = r9 - r13
            r6.setHeight(r9)
            r6.setWidth(r8)
            goto L53
        L37:
            r6.setHeight(r7)
            r6.setWidth(r7)
            goto L53
        L3e:
            r13 = 2
            if (r11 != r13) goto L53
            int r11 = r12 * 4
            if (r8 <= r11) goto L4d
            int r8 = r8 - r12
            r6.setWidth(r8)
            r6.setHeight(r9)
            goto L53
        L4d:
            r6.setHeight(r7)
            r6.setWidth(r7)
        L53:
            r6.a = r10
            return
    }

    public SplashBidRequestParams(java.lang.String r9, java.lang.String r10, boolean r11, int r12, int r13, int r14) {
            r8 = this;
            java.lang.String r3 = ""
            r0 = r8
            r1 = r9
            r2 = r10
            r4 = r11
            r5 = r12
            r6 = r14
            r7 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    protected final boolean a() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }

    public int getOrientation() {
            r1 = this;
            int r0 = com.mbridge.msdk.mbbid.out.SplashBidRequestParams.b
            return r0
    }
}
