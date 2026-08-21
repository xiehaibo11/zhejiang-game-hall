package com.huawei.hms.common.internal;

public final class Objects {

    public static final class ToStringHelper {
        public final java.util.List<java.lang.String> a;
        public final java.lang.Object b;

        public ToStringHelper(java.lang.Object r1) {
                r0 = this;
                r0.<init>()
                java.lang.Object r1 = com.huawei.hms.common.internal.Preconditions.checkNotNull(r1)
                r0.b = r1
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.a = r1
                return
        }

        public ToStringHelper(java.lang.Object r1, com.huawei.hms.common.internal.Objects.a r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public final com.huawei.hms.common.internal.Objects.ToStringHelper add(java.lang.String r4, java.lang.Object r5) {
                r3 = this;
                java.lang.Object r4 = com.huawei.hms.common.internal.Preconditions.checkNotNull(r4)
                java.lang.String r4 = (java.lang.String) r4
                java.lang.String r5 = java.lang.String.valueOf(r5)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                int r1 = r4.length()
                int r2 = r5.length()
                int r1 = r1 + r2
                int r1 = r1 + 1
                r0.<init>(r1)
                r0.append(r4)
                java.lang.String r4 = "="
                r0.append(r4)
                r0.append(r5)
                java.lang.String r4 = r0.toString()
                java.util.List<java.lang.String> r5 = r3.a
                r5.add(r4)
                return r3
        }

        public final java.lang.String toString() {
                r4 = this;
                java.lang.Object r0 = r4.b
                java.lang.Class r0 = r0.getClass()
                java.lang.String r0 = r0.getSimpleName()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r2 = 100
                r1.<init>(r2)
                r1.append(r0)
                r0 = 123(0x7b, float:1.72E-43)
                r1.append(r0)
                java.util.List<java.lang.String> r0 = r4.a
                int r0 = r0.size()
                r2 = 0
            L20:
                if (r2 >= r0) goto L39
                java.util.List<java.lang.String> r3 = r4.a
                java.lang.Object r3 = r3.get(r2)
                java.lang.String r3 = (java.lang.String) r3
                r1.append(r3)
                int r3 = r0 + (-1)
                if (r2 >= r3) goto L36
                java.lang.String r3 = ", "
                r1.append(r3)
            L36:
                int r2 = r2 + 1
                goto L20
            L39:
                r0 = 125(0x7d, float:1.75E-43)
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                return r0
        }
    }

    public static class a {
    }

    public Objects() {
            r2 = this;
            r2.<init>()
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.String r1 = "Uninstantiable"
            r0.<init>(r1)
            throw r0
    }

    public static boolean equal(java.lang.Object r1, java.lang.Object r2) {
            r0 = 1
            if (r1 != r2) goto L4
            return r0
        L4:
            if (r1 == 0) goto Ld
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto Ld
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    public static int hashCode(java.lang.Object... r0) {
            int r0 = java.util.Arrays.hashCode(r0)
            return r0
    }

    public static com.huawei.hms.common.internal.Objects.ToStringHelper toStringHelper(java.lang.Object r2) {
            com.huawei.hms.common.internal.Objects$ToStringHelper r0 = new com.huawei.hms.common.internal.Objects$ToStringHelper
            r1 = 0
            r0.<init>(r2, r1)
            return r0
    }
}
