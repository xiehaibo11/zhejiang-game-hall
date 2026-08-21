package com.tkay.core.common.l.a;

import android.view.View;

/* JADX INFO: loaded from: classes3.dex */
public interface b {
    int getImpressionMinPercentageViewed();

    int getImpressionMinTimeViewed();

    Integer getImpressionMinVisiblePx();

    boolean isImpressionRecorded();

    void recordImpression(View view);

    void setImpressionRecorded();
}
