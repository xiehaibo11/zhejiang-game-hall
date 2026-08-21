package com.sigmob.windad;

/* JADX INFO: loaded from: classes3.dex */
public enum WindAdBiddingLossReason {
    LOSS_REASON_LOW_PRICE(2, "出价过低"),
    LOSS_REASON_RETURN_TIMEOUT(2000, "返回超时"),
    LOSS_REASON_RETURN_ERROR(2001, "广告素材格式错误");


    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f5276a;
    private String message;

    WindAdBiddingLossReason(int i, String str) {
        this.f5276a = i;
        this.message = str;
    }

    public int getCode() {
        return this.f5276a;
    }

    public String getMessage() {
        return this.message;
    }
}
