package com.tkay.core.common.l.a;

import android.view.View;

public abstract class a implements b {
    private static final int DEFAULT_IMPRESSION_MIN_PERCENTAGE_VIEWED = 50;
    private static final int DEFAULT_IMPRESSION_MIN_TIME_VIEWED_MS = 500;
    private boolean mImpressionRecorded;
    private int mImpressionMinTimeViewed = 500;
    private int mImpressionMinPercentageViewed = 50;
    private Integer mImpressionMinVisiblePx = null;

    @Override
    public abstract void recordImpression(View view);

    @Override
    public int getImpressionMinPercentageViewed() {
        return this.mImpressionMinPercentageViewed;
    }

    @Override
    public int getImpressionMinTimeViewed() {
        return this.mImpressionMinTimeViewed;
    }

    @Override
    public final Integer getImpressionMinVisiblePx() {
        return this.mImpressionMinVisiblePx;
    }

    @Override
    public final boolean isImpressionRecorded() {
        return this.mImpressionRecorded;
    }

    @Override
    public final void setImpressionRecorded() {
        this.mImpressionRecorded = true;
    }
}
