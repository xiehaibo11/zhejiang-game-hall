package com.mbridge.msdk.mbbid.out;

public class BannerBidRequestParams extends com.mbridge.msdk.mbbid.out.CommonBidRequestParams {
    private int a;
    private int b;

    public BannerBidRequestParams(java.lang.String r1, java.lang.String r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r4
            r0.b = r3
            return
    }

    public BannerBidRequestParams(java.lang.String r1, java.lang.String r2, java.lang.String r3, int r4, int r5) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.a = r5
            r0.b = r4
            return
    }

    public int getHeight() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public int getWidth() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public void setHeight(int r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setWidth(int r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
