package kotlin.reflect;

@kotlin.Metadata(k = 3, mv = {1, 6, 0}, xi = 48)
class TypesJVMKt$typeToString$unwrap$1 extends kotlin.jvm.internal.FunctionReferenceImpl implements kotlin.jvm.functions.Function1<java.lang.Class<?>, java.lang.Class<?>> {
    public static final kotlin.reflect.TypesJVMKt$typeToString$unwrap$1 INSTANCE = null;

    static {
            kotlin.reflect.TypesJVMKt$typeToString$unwrap$1 r0 = new kotlin.reflect.TypesJVMKt$typeToString$unwrap$1
            r0.<init>()
            kotlin.reflect.TypesJVMKt$typeToString$unwrap$1.INSTANCE = r0
            return
    }

    TypesJVMKt$typeToString$unwrap$1() {
            r6 = this;
            java.lang.Class<java.lang.Class> r2 = java.lang.Class.class
            r1 = 1
            java.lang.String r3 = "getComponentType"
            java.lang.String r4 = "getComponentType()Ljava/lang/Class;"
            r5 = 0
            r0 = r6
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public final java.lang.Class<?> invoke(java.lang.Class<?> r2) {
            r1 = this;
            java.lang.String r0 = "p0"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.Class r2 = r2.getComponentType()
            return r2
    }

    @Override
    public java.lang.Class<?> invoke(java.lang.Class<?> r1) {
            r0 = this;
            java.lang.Class r1 = (java.lang.Class) r1
            java.lang.Class r1 = r0.invoke(r1)
            return r1
    }
}
