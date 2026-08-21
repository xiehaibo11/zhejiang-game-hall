package com.huawei.hms.framework.common;

public class ContainerUtils {
    public static final java.lang.String FIELD_DELIMITER = "&";
    public static final java.lang.String KEY_VALUE_DELIMITER = "=";

    public ContainerUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <K, V> boolean equals(java.util.Map<K, V> r4, java.util.Map<K, V> r5) {
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r4 == 0) goto L39
            if (r5 == 0) goto L39
            int r2 = r4.size()
            int r3 = r5.size()
            if (r2 != r3) goto L39
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L1b:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L36
            java.lang.Object r2 = r4.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.Object r3 = r5.get(r3)
            java.lang.Object r2 = r2.getValue()
            if (r3 == r2) goto L1b
            r1 = r0
        L36:
            r4 = r1 ^ 1
            return r4
        L39:
            return r1
    }

    public static <K, V> int hashCode(java.util.Map<K, V> r0) {
            java.lang.String r0 = toString(r0)
            int r0 = r0.hashCode()
            return r0
    }

    public static <K> java.lang.String toString(java.util.List<K> r4) {
            if (r4 != 0) goto L5
            java.lang.String r4 = ""
            return r4
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            java.util.Iterator r4 = r4.iterator()
        Lf:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L2b
            java.lang.Object r2 = r4.next()
            int r3 = r1 + 1
            if (r1 <= 0) goto L22
            java.lang.String r1 = "&"
            r0.append(r1)
        L22:
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            r1 = r3
            goto Lf
        L2b:
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static <K, V> java.lang.String toString(java.util.Map<K, V> r4) {
            if (r4 != 0) goto L5
            java.lang.String r4 = ""
            return r4
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L13:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L45
            java.lang.Object r2 = r4.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            int r3 = r1 + 1
            if (r1 <= 0) goto L28
            java.lang.String r1 = "&"
            r0.append(r1)
        L28:
            java.lang.Object r1 = r2.getKey()
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = "="
            r0.append(r1)
            java.lang.Object r1 = r2.getValue()
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            r1 = r3
            goto L13
        L45:
            java.lang.String r4 = r0.toString()
            return r4
    }

    public static <K> java.lang.String toString(java.util.Set<K> r4) {
            if (r4 != 0) goto L5
            java.lang.String r4 = ""
            return r4
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            java.util.Iterator r4 = r4.iterator()
        Lf:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L2b
            java.lang.Object r2 = r4.next()
            int r3 = r1 + 1
            if (r1 <= 0) goto L22
            java.lang.String r1 = "&"
            r0.append(r1)
        L22:
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            r1 = r3
            goto Lf
        L2b:
            java.lang.String r4 = r0.toString()
            return r4
    }
}
