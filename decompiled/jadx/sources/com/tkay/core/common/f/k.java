package com.tkay.core.common.f;

import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBiddingNotice;

/* JADX INFO: loaded from: classes3.dex */
public class k {
    public static final int EXPIRE_LOSS = 1;
    public static final int LOW_PRICE_LOSS = 2;
    public static final int NO_LOSS_NOTICE = 3;
    public TYBiddingNotice biddingNotice;
    public TYAdConst.CURRENCY currency;
    public String displayNoticeUrl;
    public String errorMsg;
    protected boolean isSuccess;
    public String loseNoticeUrl;
    public double originPrice;
    protected double price;
    protected double sortPrice;
    public String token;
    public int useType = 1;
    public String winNoticeUrl;

    public k(boolean z, double d, String str, String str2, String str3, String str4, String str5, TYAdConst.CURRENCY currency) {
        this.isSuccess = z;
        this.originPrice = d;
        this.price = d;
        this.sortPrice = d;
        this.token = str;
        this.winNoticeUrl = str2;
        this.loseNoticeUrl = str3;
        this.displayNoticeUrl = str4;
        this.errorMsg = str5;
        this.currency = currency;
    }

    public k(boolean z, double d, String str, TYBiddingNotice tYBiddingNotice, String str2, TYAdConst.CURRENCY currency) {
        this.isSuccess = z;
        this.originPrice = d;
        this.price = d;
        this.sortPrice = d;
        this.token = str;
        this.biddingNotice = tYBiddingNotice;
        this.errorMsg = str2;
        this.currency = currency;
    }

    public void setBiddingNotice(TYBiddingNotice tYBiddingNotice) {
        this.biddingNotice = tYBiddingNotice;
    }

    public boolean isSuccessWithUseType() {
        return this.isSuccess && this.useType == 1;
    }

    public void setPrice(double d) {
        this.price = d;
    }

    public double getPrice() {
        return this.price;
    }

    public void setSortPrice(double d) {
        this.sortPrice = d;
    }

    public double getSortPrice() {
        return this.sortPrice;
    }
}
