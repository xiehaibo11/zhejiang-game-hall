package android.support.design.bottomappbar;

public class BottomAppBarTopEdgeTreatment extends android.support.design.shape.EdgeTreatment {
    private static final int ANGLE_LEFT = 180;
    private static final int ANGLE_UP = 270;
    private static final int ARC_HALF = 180;
    private static final int ARC_QUARTER = 90;
    private float cradleVerticalOffset;
    private float fabDiameter;
    private float fabMargin;
    private float horizontalOffset;
    private float roundedCornerRadius;

    public BottomAppBarTopEdgeTreatment(float r1, float r2, float r3) {
            r0 = this;
            r0.<init>()
            r0.fabMargin = r1
            r0.roundedCornerRadius = r2
            r0.cradleVerticalOffset = r3
            r1 = 0
            int r2 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r2 < 0) goto L11
            r0.horizontalOffset = r1
            return
        L11:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "cradleVerticalOffset must be positive."
            r1.<init>(r2)
            throw r1
    }

    float getCradleVerticalOffset() {
            r1 = this;
            float r0 = r1.cradleVerticalOffset
            return r0
    }

    @Override
    public void getEdgePath(float r21, float r22, android.support.design.shape.ShapePath r23) {
            r20 = this;
            r0 = r20
            r1 = r21
            r9 = r23
            float r2 = r0.fabDiameter
            r10 = 0
            int r3 = (r2 > r10 ? 1 : (r2 == r10 ? 0 : -1))
            if (r3 != 0) goto L11
            r9.lineTo(r1, r10)
            return
        L11:
            float r3 = r0.fabMargin
            r11 = 1073741824(0x40000000, float:2.0)
            float r3 = r3 * r11
            float r3 = r3 + r2
            float r12 = r3 / r11
            float r2 = r0.roundedCornerRadius
            float r13 = r22 * r2
            float r2 = r1 / r11
            float r3 = r0.horizontalOffset
            float r14 = r2 + r3
            float r2 = r0.cradleVerticalOffset
            float r2 = r2 * r22
            r3 = 1065353216(0x3f800000, float:1.0)
            float r4 = r3 - r22
            float r4 = r4 * r12
            float r15 = r2 + r4
            float r2 = r15 / r12
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 < 0) goto L38
            r9.lineTo(r1, r10)
            return
        L38:
            float r2 = r12 + r13
            float r2 = r2 * r2
            float r3 = r15 + r13
            float r4 = r3 * r3
            float r2 = r2 - r4
            double r4 = (double) r2
            double r4 = java.lang.Math.sqrt(r4)
            float r2 = (float) r4
            float r4 = r14 - r2
            float r16 = r14 + r2
            float r2 = r2 / r3
            double r2 = (double) r2
            double r2 = java.lang.Math.atan(r2)
            double r2 = java.lang.Math.toDegrees(r2)
            float r8 = (float) r2
            r2 = 1119092736(0x42b40000, float:90.0)
            float r17 = r2 - r8
            float r3 = r4 - r13
            r9.lineTo(r3, r10)
            r5 = 0
            float r6 = r4 + r13
            float r18 = r13 * r11
            r7 = 1132920832(0x43870000, float:270.0)
            r2 = r23
            r4 = r5
            r5 = r6
            r6 = r18
            r19 = r8
            r2.addArc(r3, r4, r5, r6, r7, r8)
            float r3 = r14 - r12
            float r2 = -r12
            float r4 = r2 - r15
            float r5 = r14 + r12
            float r6 = r12 - r15
            r2 = 1127481344(0x43340000, float:180.0)
            float r7 = r2 - r17
            float r17 = r17 * r11
            float r8 = r17 - r2
            r2 = r23
            r2.addArc(r3, r4, r5, r6, r7, r8)
            float r3 = r16 - r13
            r4 = 0
            float r5 = r16 + r13
            r2 = 1132920832(0x43870000, float:270.0)
            float r7 = r2 - r19
            r2 = r23
            r6 = r18
            r8 = r19
            r2.addArc(r3, r4, r5, r6, r7, r8)
            r9.lineTo(r1, r10)
            return
    }

    float getFabCradleMargin() {
            r1 = this;
            float r0 = r1.fabMargin
            return r0
    }

    float getFabCradleRoundedCornerRadius() {
            r1 = this;
            float r0 = r1.roundedCornerRadius
            return r0
    }

    float getFabDiameter() {
            r1 = this;
            float r0 = r1.fabDiameter
            return r0
    }

    float getHorizontalOffset() {
            r1 = this;
            float r0 = r1.horizontalOffset
            return r0
    }

    void setCradleVerticalOffset(float r1) {
            r0 = this;
            r0.cradleVerticalOffset = r1
            return
    }

    void setFabCradleMargin(float r1) {
            r0 = this;
            r0.fabMargin = r1
            return
    }

    void setFabCradleRoundedCornerRadius(float r1) {
            r0 = this;
            r0.roundedCornerRadius = r1
            return
    }

    void setFabDiameter(float r1) {
            r0 = this;
            r0.fabDiameter = r1
            return
    }

    void setHorizontalOffset(float r1) {
            r0 = this;
            r0.horizontalOffset = r1
            return
    }
}
