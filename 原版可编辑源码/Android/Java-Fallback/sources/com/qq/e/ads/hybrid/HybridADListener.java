package com.qq.e.ads.hybrid;

public interface HybridADListener {
    void onClose();

    void onError(com.qq.e.comm.util.AdError r1);

    void onLoadFinished();

    void onPageShow();
}
