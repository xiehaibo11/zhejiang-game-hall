package com.tkay.core.api;

public class TYBiddingResult extends com.tkay.core.common.f.k {
    private TYBiddingResult(boolean r1, double r2, java.lang.String r4, com.tkay.core.api.TYBiddingNotice r5, java.lang.String r6, com.tkay.core.api.TYAdConst.CURRENCY r7) {
            r0 = this;
            r0.<init>(r1, r2, r4, r5, r6, r7)
            return
    }

    public static com.tkay.core.api.TYBiddingResult fail(java.lang.String r9) {
            com.tkay.core.api.TYBiddingResult r8 = new com.tkay.core.api.TYBiddingResult
            com.tkay.core.api.TYAdConst$CURRENCY r7 = com.tkay.core.api.TYAdConst.CURRENCY.USD
            r1 = 0
            r2 = 0
            r4 = 0
            r5 = 0
            r0 = r8
            r6 = r9
            r0.<init>(r1, r2, r4, r5, r6, r7)
            return r8
    }

    public static com.tkay.core.api.TYBiddingResult success(double r9, java.lang.String r11, com.tkay.core.api.TYBiddingNotice r12) {
            com.tkay.core.api.TYBiddingResult r8 = new com.tkay.core.api.TYBiddingResult
            com.tkay.core.api.TYAdConst$CURRENCY r7 = com.tkay.core.api.TYAdConst.CURRENCY.USD
            r1 = 1
            r6 = 0
            r0 = r8
            r2 = r9
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r4, r5, r6, r7)
            return r8
    }

    public static com.tkay.core.api.TYBiddingResult success(double r9, java.lang.String r11, com.tkay.core.api.TYBiddingNotice r12, com.tkay.core.api.TYAdConst.CURRENCY r13) {
            com.tkay.core.api.TYBiddingResult r8 = new com.tkay.core.api.TYBiddingResult
            r1 = 1
            r6 = 0
            r0 = r8
            r2 = r9
            r4 = r11
            r5 = r12
            r7 = r13
            r0.<init>(r1, r2, r4, r5, r6, r7)
            return r8
    }
}
