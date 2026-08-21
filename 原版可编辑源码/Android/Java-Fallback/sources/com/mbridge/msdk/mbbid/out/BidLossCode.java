package com.mbridge.msdk.mbbid.out;

public class BidLossCode {
    private static int a;

    static {
            return
    }

    private BidLossCode(int r1) {
            r0 = this;
            r0.<init>()
            com.mbridge.msdk.mbbid.out.BidLossCode.a = r1
            return
    }

    public static com.mbridge.msdk.mbbid.out.BidLossCode bidPriceNotHighest() {
            com.mbridge.msdk.mbbid.out.BidLossCode r0 = new com.mbridge.msdk.mbbid.out.BidLossCode
            r1 = 102(0x66, float:1.43E-43)
            r0.<init>(r1)
            return r0
    }

    public static com.mbridge.msdk.mbbid.out.BidLossCode bidTimeOut() {
            com.mbridge.msdk.mbbid.out.BidLossCode r0 = new com.mbridge.msdk.mbbid.out.BidLossCode
            r1 = 2
            r0.<init>(r1)
            return r0
    }

    public static com.mbridge.msdk.mbbid.out.BidLossCode bidWinButNotShow() {
            com.mbridge.msdk.mbbid.out.BidLossCode r0 = new com.mbridge.msdk.mbbid.out.BidLossCode
            r1 = 3001(0xbb9, float:4.205E-42)
            r0.<init>(r1)
            return r0
    }

    public int getCurrentCode() {
            r1 = this;
            int r0 = com.mbridge.msdk.mbbid.out.BidLossCode.a
            return r0
    }
}
