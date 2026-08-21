package com.mbridge.msdk.out;

public class BannerSize {
    public static final int DEV_SET_TYPE = 5;
    public static final int LARGE_TYPE = 1;
    public static final int MEDIUM_TYPE = 2;
    public static final int SMART_TYPE = 3;
    public static final int STANDARD_TYPE = 4;
    private int height;
    private int width;

    public BannerSize(int r3, int r4, int r5) {
            r2 = this;
            r2.<init>()
            r0 = 1
            r1 = 320(0x140, float:4.48E-43)
            if (r3 == r0) goto L2e
            r0 = 2
            if (r3 == r0) goto L25
            r0 = 3
            if (r3 == r0) goto L21
            r0 = 4
            if (r3 == r0) goto L1a
            r0 = 5
            if (r3 == r0) goto L15
            goto L34
        L15:
            r2.height = r5
            r2.width = r4
            goto L34
        L1a:
            r3 = 50
            r2.height = r3
            r2.width = r1
            goto L34
        L21:
            r2.setSmartMode()
            goto L34
        L25:
            r3 = 250(0xfa, float:3.5E-43)
            r2.height = r3
            r3 = 300(0x12c, float:4.2E-43)
            r2.width = r3
            goto L34
        L2e:
            r3 = 90
            r2.height = r3
            r2.width = r1
        L34:
            return
    }

    private void setSmartMode() {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            int r0 = com.mbridge.msdk.foundation.tools.v.y(r0)
            r1 = 720(0x2d0, float:1.009E-42)
            if (r0 >= r1) goto L19
            r0 = 50
            r2.height = r0
            r0 = 320(0x140, float:4.48E-43)
            r2.width = r0
            goto L21
        L19:
            r0 = 90
            r2.height = r0
            r0 = 728(0x2d8, float:1.02E-42)
            r2.width = r0
        L21:
            return
    }

    public int getHeight() {
            r1 = this;
            int r0 = r1.height
            return r0
    }

    public int getWidth() {
            r1 = this;
            int r0 = r1.width
            return r0
    }
}
