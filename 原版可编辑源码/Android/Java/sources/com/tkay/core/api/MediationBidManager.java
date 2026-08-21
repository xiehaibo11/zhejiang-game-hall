package com.tkay.core.api;

import com.tkay.core.common.f.ag;
import com.tkay.core.common.f.aj;
import java.util.List;

public abstract class MediationBidManager {
    public static final String NO_BID_TOKEN_ERROR = "NO_BID_TOKEN";
    protected String mRequestUrl;

    public interface BidListener {
        void onBidFail(String str);

        void onBidStart(aj ajVar, TYBaseAdAdapter tYBaseAdAdapter);

        void onBidSuccess(List<aj> list);
    }

    public abstract void notifyWinnerDisplay(String str, aj ajVar);

    public abstract void startBid(ag agVar, BidListener bidListener);

    public void setBidRequestUrl(String str) {
        this.mRequestUrl = str;
    }
}
