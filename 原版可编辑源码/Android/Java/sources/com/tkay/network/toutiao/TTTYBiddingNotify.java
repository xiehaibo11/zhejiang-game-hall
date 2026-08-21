package com.tkay.network.toutiao;

import android.util.Log;
import com.bykv.vk.openvk.TTClientBidding;
import com.tkay.core.api.TYAdConst;
import com.tkay.core.api.TYBiddingNotice;
import com.tkay.core.api.TYSDK;
import java.util.Map;

public class TTTYBiddingNotify implements TYBiddingNotice {
    TTClientBidding a;

    protected TTTYBiddingNotify(TTClientBidding tTClientBidding) {
        this.a = tTClientBidding;
    }

    @Override
    public void notifyBidWin(double d) {
        if (TYSDK.isNetworkLogDebug()) {
            Log.i("TTTYBiddingNotify", "notifyBidWin : second price:".concat(String.valueOf(d)));
        }
        try {
            this.a.win(Double.valueOf(d));
        } catch (Throwable unused) {
        }
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    @Override
    public void notifyBidLoss(String str, double d, Map<String, Object> map) {
        if (TYSDK.isNetworkLogDebug()) {
            Log.i("TTATBiddingNotify", "notifyBidLoss :  price:" + d + ",lossCode:" + str);
        }
        byte b = -1;
        int iHashCode = str.hashCode();
        String str2 = "102";
        if (iHashCode != 50) {
            if (iHashCode != 53) {
                switch (iHashCode) {
                    case 48627:
                        if (str.equals("102")) {
                            b = 1;
                        }
                        break;
                    case 48628:
                        if (str.equals(TYAdConst.BIDDING_TYPE.BIDDING_LOSS_WITH_LOW_PRICE_IN_NORMAL)) {
                            b = 2;
                        }
                        break;
                }
            } else if (str.equals("5")) {
                b = 3;
            }
        } else if (str.equals("2")) {
            b = 0;
        }
        if (b == 0) {
            str2 = "2";
        } else if (b != 1 && b != 2) {
            str2 = "201";
        }
        try {
            this.a.loss(Double.valueOf(d), str2, null);
        } catch (Throwable unused) {
        }
        this.a = null;
    }

    @Override
    public void notifyBidDisplay(boolean z, double d) {
        if (TYSDK.isNetworkLogDebug()) {
            Log.i("TTTYBiddingNotify", "notifyBidDisplay :  price:" + d + ",isWinner:" + z);
        }
        try {
            this.a.setPrice(Double.valueOf(d));
        } catch (Throwable unused) {
        }
        this.a = null;
    }

    @Override
    public TYAdConst.CURRENCY getNoticePriceCurrency() {
        return TYAdConst.CURRENCY.RMB_CENT;
    }
}
