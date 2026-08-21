package com.ss.android.socialbase.downloader.network;

class ExponentialGeometricAverage {
    private int mCount;
    private final int mCutover;
    private final double mDecayConstant;
    private double mValue;

    public ExponentialGeometricAverage(double r3) {
            r2 = this;
            r2.<init>()
            r0 = -4616189618054758400(0xbff0000000000000, double:-1.0)
            r2.mValue = r0
            r2.mDecayConstant = r3
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 != 0) goto L13
            r3 = 2147483647(0x7fffffff, float:NaN)
            goto L1b
        L13:
            r0 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r0 = r0 / r3
            double r3 = java.lang.Math.ceil(r0)
            int r3 = (int) r3
        L1b:
            r2.mCutover = r3
            return
    }

    public void addMeasurement(double r8) {
            r7 = this;
            double r0 = r7.mDecayConstant
            r2 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r0 = r2 - r0
            int r4 = r7.mCount
            int r5 = r7.mCutover
            if (r4 <= r5) goto L22
            double r2 = r7.mValue
            double r2 = java.lang.Math.log(r2)
            double r0 = r0 * r2
            double r2 = r7.mDecayConstant
            double r8 = java.lang.Math.log(r8)
            double r2 = r2 * r8
            double r0 = r0 + r2
            double r8 = java.lang.Math.exp(r0)
            r7.mValue = r8
            goto L40
        L22:
            if (r4 <= 0) goto L3e
            double r5 = (double) r4
            double r0 = r0 * r5
            double r4 = (double) r4
            double r4 = r4 + r2
            double r0 = r0 / r4
            double r2 = r2 - r0
            double r4 = r7.mValue
            double r4 = java.lang.Math.log(r4)
            double r0 = r0 * r4
            double r8 = java.lang.Math.log(r8)
            double r2 = r2 * r8
            double r0 = r0 + r2
            double r8 = java.lang.Math.exp(r0)
            r7.mValue = r8
            goto L40
        L3e:
            r7.mValue = r8
        L40:
            int r8 = r7.mCount
            int r8 = r8 + 1
            r7.mCount = r8
            return
    }

    public double getAverage() {
            r2 = this;
            double r0 = r2.mValue
            return r0
    }

    public void reset() {
            r2 = this;
            r0 = -4616189618054758400(0xbff0000000000000, double:-1.0)
            r2.mValue = r0
            r0 = 0
            r2.mCount = r0
            return
    }
}
