package com.tkay.core.common.f;

public class k {
    public static final int EXPIRE_LOSS = 1;
    public static final int LOW_PRICE_LOSS = 2;
    public static final int NO_LOSS_NOTICE = 3;
    public com.tkay.core.api.TYBiddingNotice biddingNotice;
    public com.tkay.core.api.TYAdConst.CURRENCY currency;
    public java.lang.String displayNoticeUrl;
    public java.lang.String errorMsg;
    protected boolean isSuccess;
    public java.lang.String loseNoticeUrl;
    public double originPrice;
    protected double price;
    protected double sortPrice;
    public java.lang.String token;
    public int useType;
    public java.lang.String winNoticeUrl;

    public k(boolean r2, double r3, java.lang.String r5, com.tkay.core.api.TYBiddingNotice r6, java.lang.String r7, com.tkay.core.api.TYAdConst.CURRENCY r8) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.useType = r0
            r1.isSuccess = r2
            r1.originPrice = r3
            r1.price = r3
            r1.sortPrice = r3
            r1.token = r5
            r1.biddingNotice = r6
            r1.errorMsg = r7
            r1.currency = r8
            return
    }

    public k(boolean r2, double r3, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, com.tkay.core.api.TYAdConst.CURRENCY r10) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.useType = r0
            r1.isSuccess = r2
            r1.originPrice = r3
            r1.price = r3
            r1.sortPrice = r3
            r1.token = r5
            r1.winNoticeUrl = r6
            r1.loseNoticeUrl = r7
            r1.displayNoticeUrl = r8
            r1.errorMsg = r9
            r1.currency = r10
            return
    }

    public double getPrice() {
            r2 = this;
            double r0 = r2.price
            return r0
    }

    public double getSortPrice() {
            r2 = this;
            double r0 = r2.sortPrice
            return r0
    }

    public boolean isSuccessWithUseType() {
            r2 = this;
            boolean r0 = r2.isSuccess
            if (r0 == 0) goto La
            int r0 = r2.useType
            r1 = 1
            if (r0 != r1) goto La
            return r1
        La:
            r0 = 0
            return r0
    }

    public void setBiddingNotice(com.tkay.core.api.TYBiddingNotice r1) {
            r0 = this;
            r0.biddingNotice = r1
            return
    }

    public void setPrice(double r1) {
            r0 = this;
            r0.price = r1
            return
    }

    public void setSortPrice(double r1) {
            r0 = this;
            r0.sortPrice = r1
            return
    }
}
