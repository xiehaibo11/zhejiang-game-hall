package kotlin.reflect;

@kotlin.Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0003\u0018\u00002\u00020\u00012\u00020\u0002B\r\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0002\u0010\u0005J\u0013\u0010\u0006\u001a\u00020\u00072\b\u0010\b\u001a\u0004\u0018\u00010\tH\u0096\u0002J\b\u0010\n\u001a\u00020\u0004H\u0016J\b\u0010\u000b\u001a\u00020\fH\u0016J\b\u0010\r\u001a\u00020\u000eH\u0016J\b\u0010\u000f\u001a\u00020\fH\u0016R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0010"}, d2 = {"Lkotlin/reflect/GenericArrayTypeImpl;", "Ljava/lang/reflect/GenericArrayType;", "Lkotlin/reflect/TypeImpl;", "elementType", "Ljava/lang/reflect/Type;", "(Ljava/lang/reflect/Type;)V", "equals", "", "other", "", "getGenericComponentType", "getTypeName", "", "hashCode", "", "toString", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
final class GenericArrayTypeImpl implements java.lang.reflect.GenericArrayType, kotlin.reflect.TypeImpl {
    private final java.lang.reflect.Type elementType;

    public GenericArrayTypeImpl(java.lang.reflect.Type r2) {
            r1 = this;
            java.lang.String r0 = "elementType"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.elementType = r2
            return
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof java.lang.reflect.GenericArrayType
            if (r0 == 0) goto L16
            java.lang.reflect.Type r0 = r1.getGenericComponentType()
            java.lang.reflect.GenericArrayType r2 = (java.lang.reflect.GenericArrayType) r2
            java.lang.reflect.Type r2 = r2.getGenericComponentType()
            boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
            if (r2 == 0) goto L16
            r2 = 1
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    @Override
    public java.lang.reflect.Type getGenericComponentType() {
            r1 = this;
            java.lang.reflect.Type r0 = r1.elementType
            return r0
    }

    @Override
    public java.lang.String getTypeName() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.reflect.Type r1 = r2.elementType
            java.lang.String r1 = kotlin.reflect.TypesJVMKt.access$typeToString(r1)
            r0.append(r1)
            java.lang.String r1 = "[]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public int hashCode() {
            r1 = this;
            java.lang.reflect.Type r0 = r1.getGenericComponentType()
            int r0 = r0.hashCode()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.getTypeName()
            return r0
    }
}
