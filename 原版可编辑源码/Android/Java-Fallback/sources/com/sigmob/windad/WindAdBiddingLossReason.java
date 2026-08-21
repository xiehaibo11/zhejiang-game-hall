package com.sigmob.windad;

public enum WindAdBiddingLossReason extends java.lang.Enum<com.sigmob.windad.WindAdBiddingLossReason> {
    public static final com.sigmob.windad.WindAdBiddingLossReason LOSS_REASON_LOW_PRICE = null;
    public static final com.sigmob.windad.WindAdBiddingLossReason LOSS_REASON_RETURN_ERROR = null;
    public static final com.sigmob.windad.WindAdBiddingLossReason LOSS_REASON_RETURN_TIMEOUT = null;
    private static final com.sigmob.windad.WindAdBiddingLossReason[] b = null;
    private int a;
    private java.lang.String message;

    static {
            com.sigmob.windad.WindAdBiddingLossReason r0 = new com.sigmob.windad.WindAdBiddingLossReason
            r1 = 0
            r2 = 2
            java.lang.String r3 = "LOSS_REASON_LOW_PRICE"
            java.lang.String r4 = "出价过低"
            r0.<init>(r3, r1, r2, r4)
            com.sigmob.windad.WindAdBiddingLossReason.LOSS_REASON_LOW_PRICE = r0
            com.sigmob.windad.WindAdBiddingLossReason r0 = new com.sigmob.windad.WindAdBiddingLossReason
            r3 = 1
            java.lang.String r4 = "LOSS_REASON_RETURN_TIMEOUT"
            r5 = 2000(0x7d0, float:2.803E-42)
            java.lang.String r6 = "返回超时"
            r0.<init>(r4, r3, r5, r6)
            com.sigmob.windad.WindAdBiddingLossReason.LOSS_REASON_RETURN_TIMEOUT = r0
            com.sigmob.windad.WindAdBiddingLossReason r0 = new com.sigmob.windad.WindAdBiddingLossReason
            java.lang.String r4 = "LOSS_REASON_RETURN_ERROR"
            r5 = 2001(0x7d1, float:2.804E-42)
            java.lang.String r6 = "广告素材格式错误"
            r0.<init>(r4, r2, r5, r6)
            com.sigmob.windad.WindAdBiddingLossReason.LOSS_REASON_RETURN_ERROR = r0
            r4 = 3
            com.sigmob.windad.WindAdBiddingLossReason[] r4 = new com.sigmob.windad.WindAdBiddingLossReason[r4]
            com.sigmob.windad.WindAdBiddingLossReason r5 = com.sigmob.windad.WindAdBiddingLossReason.LOSS_REASON_LOW_PRICE
            r4[r1] = r5
            com.sigmob.windad.WindAdBiddingLossReason r1 = com.sigmob.windad.WindAdBiddingLossReason.LOSS_REASON_RETURN_TIMEOUT
            r4[r3] = r1
            r4[r2] = r0
            com.sigmob.windad.WindAdBiddingLossReason.b = r4
            return
    }

    WindAdBiddingLossReason(java.lang.String r1, int r2, int r3, java.lang.String r4) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r3
            r0.message = r4
            return
    }

    public static com.sigmob.windad.WindAdBiddingLossReason valueOf(java.lang.String r1) {
            java.lang.Class<com.sigmob.windad.WindAdBiddingLossReason> r0 = com.sigmob.windad.WindAdBiddingLossReason.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.sigmob.windad.WindAdBiddingLossReason r1 = (com.sigmob.windad.WindAdBiddingLossReason) r1
            return r1
    }

    public static com.sigmob.windad.WindAdBiddingLossReason[] values() {
            com.sigmob.windad.WindAdBiddingLossReason[] r0 = com.sigmob.windad.WindAdBiddingLossReason.b
            java.lang.Object r0 = r0.clone()
            com.sigmob.windad.WindAdBiddingLossReason[] r0 = (com.sigmob.windad.WindAdBiddingLossReason[]) r0
            return r0
    }

    public int getCode() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public java.lang.String getMessage() {
            r1 = this;
            java.lang.String r0 = r1.message
            return r0
    }
}
