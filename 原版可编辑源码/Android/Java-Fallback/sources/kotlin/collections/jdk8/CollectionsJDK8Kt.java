package kotlin.collections.jdk8;

@kotlin.Metadata(d1 = {"\u0000\u001c\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010$\n\u0002\b\u0004\n\u0002\u0010\u000b\n\u0002\u0010%\n\u0002\b\u0003\u001aA\u0010\u0000\u001a\u0002H\u0001\"\t\b\u0000\u0010\u0002¢\u0006\u0002\b\u0003\"\u0004\b\u0001\u0010\u0001*\u0010\u0012\u0006\b\u0001\u0012\u0002H\u0002\u0012\u0004\u0012\u0002H\u00010\u00042\u0006\u0010\u0005\u001a\u0002H\u00022\u0006\u0010\u0006\u001a\u0002H\u0001H\u0087\b¢\u0006\u0002\u0010\u0007\u001aH\u0010\b\u001a\u00020\t\"\t\b\u0000\u0010\u0002¢\u0006\u0002\b\u0003\"\t\b\u0001\u0010\u0001¢\u0006\u0002\b\u0003*\u0012\u0012\u0006\b\u0001\u0012\u0002H\u0002\u0012\u0006\b\u0001\u0012\u0002H\u00010\n2\u0006\u0010\u0005\u001a\u0002H\u00022\u0006\u0010\u000b\u001a\u0002H\u0001H\u0087\b¢\u0006\u0002\u0010\f¨\u0006\r"}, d2 = {"getOrDefault", "V", "K", "Lkotlin/internal/OnlyInputTypes;", "", "key", "defaultValue", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", "remove", "", "", "value", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;)Z", "kotlin-stdlib-jdk8"}, k = 2, mv = {1, 5, 1}, pn = "kotlin.collections")
public final class CollectionsJDK8Kt {
    private static final <K, V> V getOrDefault(java.util.Map<? extends K, ? extends V> r0, K r1, V r2) {
            if (r0 == 0) goto L7
            java.lang.Object r0 = r0.getOrDefault(r1, r2)
            return r0
        L7:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = "null cannot be cast to non-null type kotlin.collections.Map<K, V>"
            r0.<init>(r1)
            throw r0
    }

    private static final <K, V> boolean remove(java.util.Map<? extends K, ? extends V> r0, K r1, V r2) {
            if (r0 == 0) goto Lb
            java.util.Map r0 = kotlin.jvm.internal.TypeIntrinsics.asMutableMap(r0)
            boolean r0 = r0.remove(r1, r2)
            return r0
        Lb:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = "null cannot be cast to non-null type kotlin.collections.MutableMap<K, V>"
            r0.<init>(r1)
            throw r0
    }
}
