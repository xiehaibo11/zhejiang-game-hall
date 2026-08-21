package com.tkay.core.api;

import com.tkay.core.api.TYAdConst;
import com.tkay.core.common.f.k;

public class TYBiddingResult extends k {
    private TYBiddingResult(boolean z, double d, String str, TYBiddingNotice tYBiddingNotice, String str2, TYAdConst.CURRENCY currency) {
        super(z, d, str, tYBiddingNotice, str2, currency);
    }

    public static TYBiddingResult success(double d, String str, TYBiddingNotice tYBiddingNotice) {
        return new TYBiddingResult(true, d, str, tYBiddingNotice, null, TYAdConst.CURRENCY.USD);
    }

    public static TYBiddingResult success(double d, String str, TYBiddingNotice tYBiddingNotice, TYAdConst.CURRENCY currency) {
        return new TYBiddingResult(true, d, str, tYBiddingNotice, null, currency);
    }

    public static TYBiddingResult fail(String str) {
        return new TYBiddingResult(false, 0.0d, null, null, str, TYAdConst.CURRENCY.USD);
    }
}
