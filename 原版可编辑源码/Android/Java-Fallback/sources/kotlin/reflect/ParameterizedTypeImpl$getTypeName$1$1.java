package kotlin.reflect;

@kotlin.Metadata(k = 3, mv = {1, 6, 0}, xi = 48)
class ParameterizedTypeImpl$getTypeName$1$1 extends kotlin.jvm.internal.FunctionReferenceImpl implements kotlin.jvm.functions.Function1<java.lang.reflect.Type, java.lang.String> {
    public static final kotlin.reflect.ParameterizedTypeImpl$getTypeName$1$1 INSTANCE = null;

    static {
            kotlin.reflect.ParameterizedTypeImpl$getTypeName$1$1 r0 = new kotlin.reflect.ParameterizedTypeImpl$getTypeName$1$1
            r0.<init>()
            kotlin.reflect.ParameterizedTypeImpl$getTypeName$1$1.INSTANCE = r0
            return
    }

    ParameterizedTypeImpl$getTypeName$1$1() {
            r6 = this;
            java.lang.Class<kotlin.reflect.TypesJVMKt> r2 = kotlin.reflect.TypesJVMKt.class
            r1 = 1
            java.lang.String r3 = "typeToString"
            java.lang.String r4 = "typeToString(Ljava/lang/reflect/Type;)Ljava/lang/String;"
            r5 = 1
            r0 = r6
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public java.lang.String invoke(java.lang.reflect.Type r1) {
            r0 = this;
            java.lang.reflect.Type r1 = (java.lang.reflect.Type) r1
            java.lang.String r1 = r0.invoke(r1)
            return r1
    }

    public final java.lang.String invoke(java.lang.reflect.Type r2) {
            r1 = this;
            java.lang.String r0 = "p0"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = kotlin.reflect.TypesJVMKt.access$typeToString(r2)
            return r2
    }
}
