package com.sigmob.sdk.base.models;

public class ExposureChange {
    float exposedPercentage;
    java.util.List occlusionRectangles;
    android.graphics.Rect visibleRectangle;

    public ExposureChange(float r1, android.graphics.Rect r2, java.util.List r3) {
            r0 = this;
            r0.<init>()
            r0.exposedPercentage = r1
            r0.visibleRectangle = r2
            r0.occlusionRectangles = r3
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "\"exposureChange\"={\"exposedPercentage\"="
            r0.append(r1)
            float r1 = r2.exposedPercentage
            r0.append(r1)
            java.lang.String r1 = ", \"visibleRectangle\"={\"x\"="
            r0.append(r1)
            android.graphics.Rect r1 = r2.visibleRectangle
            int r1 = r1.left
            r0.append(r1)
            java.lang.String r1 = ",\"y\"="
            r0.append(r1)
            android.graphics.Rect r1 = r2.visibleRectangle
            int r1 = r1.top
            r0.append(r1)
            java.lang.String r1 = ",\"width\"="
            r0.append(r1)
            android.graphics.Rect r1 = r2.visibleRectangle
            int r1 = r1.width()
            r0.append(r1)
            java.lang.String r1 = ",\"height\"="
            r0.append(r1)
            android.graphics.Rect r1 = r2.visibleRectangle
            int r1 = r1.height()
            r0.append(r1)
            java.lang.String r1 = "}, \"occlusionRectangles\"=[]"
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
