package com.tkay.core.common.l.a;

import android.view.View;

public interface b {
    int getImpressionMinPercentageViewed();

    int getImpressionMinTimeViewed();

    Integer getImpressionMinVisiblePx();

    boolean isImpressionRecorded();

    void recordImpression(View view);

    void setImpressionRecorded();
}
