package kotlin.jvm.internal;

@kotlin.Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0013\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0006\n\u0002\b\u0003\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\r\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0002\u0010\u0005J\u000e\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nJ\u0006\u0010\u000b\u001a\u00020\u0002J\f\u0010\f\u001a\u00020\u0004*\u00020\u0002H\u0014R\u000e\u0010\u0006\u001a\u00020\u0002X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lkotlin/jvm/internal/DoubleSpreadBuilder;", "Lkotlin/jvm/internal/PrimitiveSpreadBuilder;", "", "size", "", "(I)V", "values", "add", "", "value", "", "toArray", "getSize", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class DoubleSpreadBuilder extends kotlin.jvm.internal.PrimitiveSpreadBuilder<double[]> {
    private final double[] values;

    public DoubleSpreadBuilder(int r1) {
            r0 = this;
            r0.<init>(r1)
            double[] r1 = new double[r1]
            r0.values = r1
            return
    }

    public final void add(double r4) {
            r3 = this;
            double[] r0 = r3.values
            int r1 = r3.getPosition()
            int r2 = r1 + 1
            r3.setPosition(r2)
            r0[r1] = r4
            return
    }

    @Override
    public int getSize(double[] r1) {
            r0 = this;
            double[] r1 = (double[]) r1
            int r1 = r0.getSize(r1)
            return r1
    }

    protected int getSize(double[] r2) {
            r1 = this;
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r2 = r2.length
            return r2
    }

    public final double[] toArray() {
            r2 = this;
            double[] r0 = r2.values
            int r1 = r2.size()
            double[] r1 = new double[r1]
            java.lang.Object r0 = r2.toArray(r0, r1)
            double[] r0 = (double[]) r0
            return r0
    }
}
