package com.tkay.core.common.l.a;

public abstract class a implements com.tkay.core.common.l.a.b {
    private static final int DEFAULT_IMPRESSION_MIN_PERCENTAGE_VIEWED = 50;
    private static final int DEFAULT_IMPRESSION_MIN_TIME_VIEWED_MS = 500;
    private int mImpressionMinPercentageViewed;
    private int mImpressionMinTimeViewed;
    private java.lang.Integer mImpressionMinVisiblePx;
    private boolean mImpressionRecorded;

    public a() {
            r1 = this;
            r1.<init>()
            r0 = 500(0x1f4, float:7.0E-43)
            r1.mImpressionMinTimeViewed = r0
            r0 = 50
            r1.mImpressionMinPercentageViewed = r0
            r0 = 0
            r1.mImpressionMinVisiblePx = r0
            return
    }

    @Override
    public int getImpressionMinPercentageViewed() {
            r1 = this;
            int r0 = r1.mImpressionMinPercentageViewed
            return r0
    }

    @Override
    public int getImpressionMinTimeViewed() {
            r1 = this;
            int r0 = r1.mImpressionMinTimeViewed
            return r0
    }

    @Override
    public final java.lang.Integer getImpressionMinVisiblePx() {
            r1 = this;
            java.lang.Integer r0 = r1.mImpressionMinVisiblePx
            return r0
    }

    @Override
    public final boolean isImpressionRecorded() {
            r1 = this;
            boolean r0 = r1.mImpressionRecorded
            return r0
    }

    @Override
    public abstract void recordImpression(android.view.View r1);

    @Override
    public final void setImpressionRecorded() {
            r1 = this;
            r0 = 1
            r1.mImpressionRecorded = r0
            return
    }
}
