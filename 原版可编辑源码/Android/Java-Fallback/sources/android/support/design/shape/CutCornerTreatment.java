package android.support.design.shape;

public class CutCornerTreatment extends android.support.design.shape.CornerTreatment {
    private final float size;

    public CutCornerTreatment(float r1) {
            r0 = this;
            r0.<init>()
            r0.size = r1
            return
    }

    @Override
    public void getCornerPath(float r7, float r8, android.support.design.shape.ShapePath r9) {
            r6 = this;
            float r0 = r6.size
            float r0 = r0 * r8
            r1 = 0
            r9.reset(r1, r0)
            double r0 = (double) r7
            double r2 = java.lang.Math.sin(r0)
            float r7 = r6.size
            double r4 = (double) r7
            double r2 = r2 * r4
            double r7 = (double) r8
            double r2 = r2 * r7
            float r2 = (float) r2
            double r0 = java.lang.Math.cos(r0)
            float r3 = r6.size
            double r3 = (double) r3
            double r0 = r0 * r3
            double r0 = r0 * r7
            float r7 = (float) r0
            r9.lineTo(r2, r7)
            return
    }
}
