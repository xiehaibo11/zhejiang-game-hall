package com.sigmob.windad.natives;

import com.sigmob.windad.WindAdError;

public interface NativeADEventListener {
    void onAdClicked();

    void onAdDetailDismiss();

    void onAdDetailShow();

    void onAdError(WindAdError windAdError);

    void onAdExposed();
}
