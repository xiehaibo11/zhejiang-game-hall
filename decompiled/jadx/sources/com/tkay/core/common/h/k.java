package com.tkay.core.common.h;

import com.tkay.core.api.AdError;

/* JADX INFO: loaded from: classes3.dex */
public interface k {
    void onLoadCanceled(int i);

    void onLoadError(int i, String str, AdError adError);

    void onLoadFinish(int i, Object obj);

    void onLoadStart(int i);
}
