package kotlin.properties;

@kotlin.Metadata(d1 = {"\u0000\"\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\b\u0002\u0018\u0000*\b\b\u0000\u0010\u0001*\u00020\u00022\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u0002\u0012\u0004\u0012\u0002H\u00010\u0003B\u0005¢\u0006\u0002\u0010\u0004J$\u0010\u0007\u001a\u00028\u00002\b\u0010\b\u001a\u0004\u0018\u00010\u00022\n\u0010\t\u001a\u0006\u0012\u0002\b\u00030\nH\u0096\u0002¢\u0006\u0002\u0010\u000bJ,\u0010\f\u001a\u00020\r2\b\u0010\b\u001a\u0004\u0018\u00010\u00022\n\u0010\t\u001a\u0006\u0012\u0002\b\u00030\n2\u0006\u0010\u0005\u001a\u00028\u0000H\u0096\u0002¢\u0006\u0002\u0010\u000eR\u0012\u0010\u0005\u001a\u0004\u0018\u00018\u0000X\u0082\u000e¢\u0006\u0004\n\u0002\u0010\u0006¨\u0006\u000f"}, d2 = {"Lkotlin/properties/NotNullVar;", "T", "", "Lkotlin/properties/ReadWriteProperty;", "()V", "value", "Ljava/lang/Object;", "getValue", "thisRef", "property", "Lkotlin/reflect/KProperty;", "(Ljava/lang/Object;Lkotlin/reflect/KProperty;)Ljava/lang/Object;", "setValue", "", "(Ljava/lang/Object;Lkotlin/reflect/KProperty;Ljava/lang/Object;)V", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
final class NotNullVar<T> implements kotlin.properties.ReadWriteProperty<java.lang.Object, T> {
    private T value;

    public NotNullVar() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public T getValue(java.lang.Object r3, kotlin.reflect.KProperty<?> r4) {
            r2 = this;
            java.lang.String r3 = "property"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r3)
            T r3 = r2.value
            if (r3 == 0) goto La
            return r3
        La:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Property "
            r0.append(r1)
            java.lang.String r4 = r4.getName()
            r0.append(r4)
            java.lang.String r4 = " should be initialized before get."
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void setValue(java.lang.Object r1, kotlin.reflect.KProperty<?> r2, T r3) {
            r0 = this;
            java.lang.String r1 = "property"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
            java.lang.String r1 = "value"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r1)
            r0.value = r3
            return
    }
}
