package kotlin.internal.jdk7;

@kotlin.Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u0003\n\u0002\b\u0002\n\u0002\u0010 \n\u0000\b\u0010\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u0018\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\u0006H\u0016J\u0016\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00060\t2\u0006\u0010\u0007\u001a\u00020\u0006H\u0016¨\u0006\n"}, d2 = {"Lkotlin/internal/jdk7/JDK7PlatformImplementations;", "Lkotlin/internal/PlatformImplementations;", "()V", "addSuppressed", "", "cause", "", "exception", "getSuppressed", "", "kotlin-stdlib-jdk7"}, k = 1, mv = {1, 5, 1})
public class JDK7PlatformImplementations extends kotlin.internal.PlatformImplementations {
    public JDK7PlatformImplementations() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void addSuppressed(java.lang.Throwable r2, java.lang.Throwable r3) {
            r1 = this;
            java.lang.String r0 = "cause"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "exception"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r2.addSuppressed(r3)
            return
    }

    @Override
    public java.util.List<java.lang.Throwable> getSuppressed(java.lang.Throwable r2) {
            r1 = this;
            java.lang.String r0 = "exception"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.Throwable[] r2 = r2.getSuppressed()
            java.lang.String r0 = "exception.suppressed"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r0)
            java.util.List r2 = kotlin.collections.ArraysKt.asList(r2)
            return r2
    }
}
