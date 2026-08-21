package com.huawei.hms.common.data;

public final class DataBufferUtils {
    public static final int ARGS_BUNDLE = 4;
    public static final int ARGS_COLUMN = 1;
    public static final int ARGS_CURSOR = 2;
    public static final int ARGS_STATUS = 3;
    public static final int ARGS_VERSION = 1000;
    public static final java.lang.String NEXT_PAGE = "next_page";
    public static final java.lang.String PREV_PAGE = "prev_page";

    private DataBufferUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean containKey(android.os.Bundle r1, java.lang.String r2) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = r1.getString(r2)
            if (r1 == 0) goto Lb
            r0 = 1
        Lb:
            return r0
    }

    public static <T, E extends com.huawei.hms.common.data.Freezable<T>> java.util.ArrayList<T> freezeAndClose(com.huawei.hms.common.data.DataBuffer<E> r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r3.getCount()
            r0.<init>(r1)
            java.util.Iterator r1 = r3.iterator()
        Ld:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L21
            java.lang.Object r2 = r1.next()
            com.huawei.hms.common.data.Freezable r2 = (com.huawei.hms.common.data.Freezable) r2
            java.lang.Object r2 = r2.freeze()
            r0.add(r2)
            goto Ld
        L21:
            r3.release()
            return r0
    }

    public static boolean hasData(com.huawei.hms.common.data.DataBuffer<?> r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            int r1 = r1.getCount()
            if (r1 <= 0) goto Lb
            r0 = 1
        Lb:
            return r0
    }

    public static boolean hasNextPage(com.huawei.hms.common.data.DataBuffer<?> r1) {
            android.os.Bundle r1 = r1.getMetadata()
            java.lang.String r0 = "next_page"
            boolean r1 = containKey(r1, r0)
            return r1
    }

    public static boolean hasPrevPage(com.huawei.hms.common.data.DataBuffer<?> r1) {
            android.os.Bundle r1 = r1.getMetadata()
            java.lang.String r0 = "prev_page"
            boolean r1 = containKey(r1, r0)
            return r1
    }
}
