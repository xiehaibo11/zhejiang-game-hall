package kotlin.jvm.internal;

@kotlin.Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0006\n\u0002\u0010\u0011\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\t\b&\u0018\u0000*\b\b\u0000\u0010\u0001*\u00020\u00022\u00020\u0002B\r\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0002\u0010\u0005J\u0013\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00028\u0000¢\u0006\u0002\u0010\u0012J\b\u0010\u0003\u001a\u00020\u0004H\u0004J\u001d\u0010\u0013\u001a\u00028\u00002\u0006\u0010\u0014\u001a\u00028\u00002\u0006\u0010\u0015\u001a\u00028\u0000H\u0004¢\u0006\u0002\u0010\u0016J\u0011\u0010\u0017\u001a\u00020\u0004*\u00028\u0000H$¢\u0006\u0002\u0010\u0018R\u001a\u0010\u0006\u001a\u00020\u0004X\u0084\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0007\u0010\b\"\u0004\b\t\u0010\u0005R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R\u001e\u0010\n\u001a\n\u0012\u0006\u0012\u0004\u0018\u00018\u00000\u000bX\u0082\u0004¢\u0006\n\n\u0002\u0010\u000e\u0012\u0004\b\f\u0010\r¨\u0006\u0019"}, d2 = {"Lkotlin/jvm/internal/PrimitiveSpreadBuilder;", "T", "", "size", "", "(I)V", "position", "getPosition", "()I", "setPosition", "spreads", "", "getSpreads$annotations", "()V", "[Ljava/lang/Object;", "addSpread", "", "spreadArgument", "(Ljava/lang/Object;)V", "toArray", "values", "result", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "getSize", "(Ljava/lang/Object;)I", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public abstract class PrimitiveSpreadBuilder<T> {
    private int position;
    private final int size;
    private final T[] spreads;

    public PrimitiveSpreadBuilder(int r1) {
            r0 = this;
            r0.<init>()
            r0.size = r1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r0.spreads = r1
            return
    }

    private static void getSpreads$annotations() {
            return
    }

    public final void addSpread(T r4) {
            r3 = this;
            java.lang.String r0 = "spreadArgument"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            T[] r0 = r3.spreads
            int r1 = r3.position
            int r2 = r1 + 1
            r3.position = r2
            r0[r1] = r4
            return
    }

    protected final int getPosition() {
            r1 = this;
            int r0 = r1.position
            return r0
    }

    protected abstract int getSize(T r1);

    protected final void setPosition(int r1) {
            r0 = this;
            r0.position = r1
            return
    }

    protected final int size() {
            r5 = this;
            int r0 = r5.size
            r1 = 1
            int r0 = r0 - r1
            r2 = 0
            if (r0 < 0) goto L1a
            r3 = r2
        L8:
            T[] r4 = r5.spreads
            r4 = r4[r3]
            if (r4 == 0) goto L13
            int r4 = r5.getSize(r4)
            goto L14
        L13:
            r4 = r1
        L14:
            int r2 = r2 + r4
            if (r3 == r0) goto L1a
            int r3 = r3 + 1
            goto L8
        L1a:
            return r2
    }

    protected final T toArray(T r8, T r9) {
            r7 = this;
            java.lang.String r0 = "values"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "result"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            int r0 = r7.size
            int r0 = r0 + (-1)
            r1 = 0
            if (r0 < 0) goto L33
            r2 = r1
            r3 = r2
            r4 = r3
        L14:
            T[] r5 = r7.spreads
            r5 = r5[r2]
            if (r5 == 0) goto L2c
            if (r3 >= r2) goto L22
            int r6 = r2 - r3
            java.lang.System.arraycopy(r8, r3, r9, r4, r6)
            int r4 = r4 + r6
        L22:
            int r3 = r7.getSize(r5)
            java.lang.System.arraycopy(r5, r1, r9, r4, r3)
            int r4 = r4 + r3
            int r3 = r2 + 1
        L2c:
            if (r2 == r0) goto L31
            int r2 = r2 + 1
            goto L14
        L31:
            r1 = r3
            goto L34
        L33:
            r4 = r1
        L34:
            int r0 = r7.size
            if (r1 >= r0) goto L3c
            int r0 = r0 - r1
            java.lang.System.arraycopy(r8, r1, r9, r4, r0)
        L3c:
            return r9
    }
}
