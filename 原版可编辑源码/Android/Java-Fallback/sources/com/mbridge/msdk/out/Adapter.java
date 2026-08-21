package com.mbridge.msdk.out;

public interface Adapter {
    boolean init(java.lang.Object... r1);

    boolean loadAd(com.mbridge.msdk.out.AdapterListener r1);

    void registerView(com.mbridge.msdk.out.Campaign r1, android.view.View r2);

    void registerView(com.mbridge.msdk.out.Campaign r1, android.view.View r2, java.util.List<android.view.View> r3);

    void unregisterView(com.mbridge.msdk.out.Campaign r1, android.view.View r2);

    void unregisterView(com.mbridge.msdk.out.Campaign r1, android.view.View r2, java.util.List<android.view.View> r3);
}
