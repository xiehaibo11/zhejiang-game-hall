package com.sigmob.windad.natives;

public interface NativeADEventListener {
    void onAdClicked();

    void onAdDetailDismiss();

    void onAdDetailShow();

    void onAdError(com.sigmob.windad.WindAdError r1);

    void onAdExposed();
}
