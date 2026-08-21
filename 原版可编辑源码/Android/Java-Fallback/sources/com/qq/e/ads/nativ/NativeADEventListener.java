package com.qq.e.ads.nativ;

public interface NativeADEventListener {
    void onADClicked();

    void onADError(com.qq.e.comm.util.AdError r1);

    void onADExposed();

    void onADStatusChanged();
}
