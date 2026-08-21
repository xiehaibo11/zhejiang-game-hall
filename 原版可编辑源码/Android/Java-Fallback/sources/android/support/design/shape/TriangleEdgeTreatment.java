package android.support.design.shape;

public class TriangleEdgeTreatment extends android.support.design.shape.EdgeTreatment {
    private final boolean inside;
    private final float size;

    public TriangleEdgeTreatment(float r1, boolean r2) {
            r0 = this;
            r0.<init>()
            r0.size = r1
            r0.inside = r2
            return
    }

    @Override
    public void getEdgePath(float r4, float r5, android.support.design.shape.ShapePath r6) {
            r3 = this;
            r0 = 1073741824(0x40000000, float:2.0)
            float r0 = r4 / r0
            float r1 = r3.size
            float r1 = r1 * r5
            float r1 = r0 - r1
            r2 = 0
            r6.lineTo(r1, r2)
            boolean r1 = r3.inside
            if (r1 == 0) goto L14
            float r1 = r3.size
            goto L17
        L14:
            float r1 = r3.size
            float r1 = -r1
        L17:
            float r1 = r1 * r5
            r6.lineTo(r0, r1)
            float r1 = r3.size
            float r1 = r1 * r5
            float r0 = r0 + r1
            r6.lineTo(r0, r2)
            r6.lineTo(r4, r2)
            return
    }
}
