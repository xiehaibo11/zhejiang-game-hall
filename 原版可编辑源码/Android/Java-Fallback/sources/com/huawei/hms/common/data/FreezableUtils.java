package com.huawei.hms.common.data;

public final class FreezableUtils {
    public FreezableUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T, E extends com.huawei.hms.common.data.Freezable<T>> java.util.ArrayList<T> freeze(java.util.ArrayList<E> r0) {
            java.util.ArrayList r0 = freezeIterable(r0)
            return r0
    }

    public static <T, E extends com.huawei.hms.common.data.Freezable<T>> java.util.ArrayList<T> freeze(E[] r0) {
            java.util.List r0 = java.util.Arrays.asList(r0)
            java.util.ArrayList r0 = freezeIterable(r0)
            return r0
    }

    public static <T, E extends com.huawei.hms.common.data.Freezable<T>> java.util.ArrayList<T> freezeIterable(java.lang.Iterable<E> r2) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r2 = r2.iterator()
        L9:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r2.next()
            com.huawei.hms.common.data.Freezable r1 = (com.huawei.hms.common.data.Freezable) r1
            java.lang.Object r1 = r1.freeze()
            r0.add(r1)
            goto L9
        L1d:
            return r0
    }
}
