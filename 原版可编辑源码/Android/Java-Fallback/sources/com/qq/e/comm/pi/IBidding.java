package com.qq.e.comm.pi;

public interface IBidding {
    public static final java.lang.String ADN_ID = "adnId";
    public static final java.lang.String EXPECT_COST_PRICE = "expectCostPrice";
    public static final java.lang.String HIGHEST_LOSS_PRICE = "highestLossPrice";
    public static final java.lang.String LOSS_REASON = "lossReason";
    public static final java.lang.String WIN_PRICE = "winPrice";

    @java.lang.Deprecated
    void sendLossNotification(int r1, int r2, java.lang.String r3);

    void sendLossNotification(java.util.Map<java.lang.String, java.lang.Object> r1);

    @java.lang.Deprecated
    void sendWinNotification(int r1);

    void sendWinNotification(java.util.Map<java.lang.String, java.lang.Object> r1);

    void setBidECPM(int r1);
}
