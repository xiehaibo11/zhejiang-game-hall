package com.mbridge.msdk.mbbid.out;

public class BidLossCode {
    private static int a;

    private BidLossCode(int i) {
        a = i;
    }

    public static BidLossCode bidTimeOut() {
        return new BidLossCode(2);
    }

    public static BidLossCode bidPriceNotHighest() {
        return new BidLossCode(102);
    }

    public static BidLossCode bidWinButNotShow() {
        return new BidLossCode(3001);
    }

    public int getCurrentCode() {
        return a;
    }
}
