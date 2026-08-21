package com.mbridge.msdk.out;

public interface AdapterListener {
    void onAdClicked(com.mbridge.msdk.out.Campaign r1);

    void onAdLoaded(java.util.List<com.mbridge.msdk.out.Campaign> r1);

    void onError(java.lang.String r1);

    void onFrameAdLoaded(java.util.List<com.mbridge.msdk.out.Frame> r1);
}
