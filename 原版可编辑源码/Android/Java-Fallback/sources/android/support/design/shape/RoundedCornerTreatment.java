package android.support.design.shape;

public class RoundedCornerTreatment extends android.support.design.shape.CornerTreatment {
    private final float radius;

    public RoundedCornerTreatment(float r1) {
            r0 = this;
            r0.<init>()
            r0.radius = r1
            return
    }

    @Override
    public void getCornerPath(float r11, float r12, android.support.design.shape.ShapePath r13) {
            r10 = this;
            float r0 = r10.radius
            float r0 = r0 * r12
            r1 = 0
            r13.reset(r1, r0)
            float r0 = r10.radius
            r1 = 1073741824(0x40000000, float:2.0)
            float r2 = r0 * r1
            float r6 = r2 * r12
            float r0 = r0 * r1
            float r7 = r0 * r12
            r12 = 1127481344(0x43340000, float:180.0)
            float r8 = r11 + r12
            r4 = 0
            r5 = 0
            r9 = 1119092736(0x42b40000, float:90.0)
            r3 = r13
            r3.addArc(r4, r5, r6, r7, r8, r9)
            return
    }
}
