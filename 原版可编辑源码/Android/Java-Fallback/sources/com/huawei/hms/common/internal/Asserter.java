package com.huawei.hms.common.internal;

public final class Asserter {
    private Asserter() {
            r2 = this;
            r2.<init>()
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.String r1 = "Cannot use constructor to make a new instance"
            r0.<init>(r1)
            throw r0
    }

    public static void checkNotNull(java.lang.Object r1) {
            if (r1 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "checked object is null"
            r1.<init>(r0)
            throw r1
    }

    public static void checkNotNull(java.lang.Object r0, java.lang.Object r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    public static void checkNull(java.lang.Object r2) {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r2.toString()
            r1.append(r2)
            java.lang.String r2 = " is not null"
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            r0.<init>(r2)
            throw r0
    }

    public static void checkState(boolean r0) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>()
            throw r0
    }

    public static void checkState(boolean r0, java.lang.Object r1) {
            if (r0 == 0) goto L3
            return
        L3:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }
}
