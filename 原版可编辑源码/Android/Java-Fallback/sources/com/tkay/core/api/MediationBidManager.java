package com.tkay.core.api;

public abstract class MediationBidManager {
    public static final java.lang.String NO_BID_TOKEN_ERROR = "NO_BID_TOKEN";
    protected java.lang.String mRequestUrl;

    public interface BidListener {
        void onBidFail(java.lang.String r1);

        void onBidStart(com.tkay.core.common.f.aj r1, com.tkay.core.api.TYBaseAdAdapter r2);

        void onBidSuccess(java.util.List<com.tkay.core.common.f.aj> r1);
    }

    public MediationBidManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void notifyWinnerDisplay(java.lang.String r1, com.tkay.core.common.f.aj r2);

    public void setBidRequestUrl(java.lang.String r1) {
            r0 = this;
            r0.mRequestUrl = r1
            return
    }

    public abstract void startBid(com.tkay.core.common.f.ag r1, com.tkay.core.api.MediationBidManager.BidListener r2);
}
