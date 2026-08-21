package com.mbridge.msdk.out;

public interface BaseTrackingListener {
    void onFinishRedirection(com.mbridge.msdk.out.Campaign r1, java.lang.String r2);

    void onRedirectionFailed(com.mbridge.msdk.out.Campaign r1, java.lang.String r2);

    void onStartRedirection(com.mbridge.msdk.out.Campaign r1, java.lang.String r2);
}
