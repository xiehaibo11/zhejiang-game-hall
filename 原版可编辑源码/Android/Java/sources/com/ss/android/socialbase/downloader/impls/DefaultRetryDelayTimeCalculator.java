package com.ss.android.socialbase.downloader.impls;

import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;
import com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator;

public class DefaultRetryDelayTimeCalculator implements IRetryDelayTimeCalculator {
    @Override
    public long calculateRetryDelayTime(int i, int i2) {
        if (i == 1) {
            return 3000L;
        }
        if (i == 2) {
            return MBInterstitialActivity.WEB_LOAD_TIME;
        }
        if (i == 3) {
            return 30000L;
        }
        return i > 3 ? 300000L : 0L;
    }
}
