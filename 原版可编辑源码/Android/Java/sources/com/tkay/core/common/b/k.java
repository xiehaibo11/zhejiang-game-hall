package com.tkay.core.common.b;

import android.content.Context;
import android.view.View;
import com.tkay.core.api.TYNetworkConfirmInfo;

public interface k {
    void onAdClicked(View view);

    void onAdDislikeButtonClick();

    void onAdImpressed();

    void onAdVideoEnd();

    void onAdVideoProgress(int i);

    void onAdVideoStart();

    void onDeeplinkCallback(boolean z);

    void onDownloadConfirmCallback(Context context, View view, TYNetworkConfirmInfo tYNetworkConfirmInfo);
}
