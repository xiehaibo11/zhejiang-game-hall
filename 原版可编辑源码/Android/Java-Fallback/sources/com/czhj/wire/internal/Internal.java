package com.czhj.wire.internal;

public final class Internal {
    private Internal() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void checkElementsNotNull(java.util.List<?> r3) {
            if (r3 == 0) goto L2f
            r0 = 0
            int r1 = r3.size()
        L7:
            if (r0 >= r1) goto L2e
            java.lang.Object r2 = r3.get(r0)
            if (r2 == 0) goto L12
            int r0 = r0 + 1
            goto L7
        L12:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Element at index "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = " is null"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r3.<init>(r0)
            throw r3
        L2e:
            return
        L2f:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.String r0 = "list == null"
            r3.<init>(r0)
            throw r3
    }

    public static void checkElementsNotNull(java.util.Map<?, ?> r3) {
            if (r3 == 0) goto L4c
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        La:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L4b
            java.lang.Object r0 = r3.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            if (r1 == 0) goto L43
            java.lang.Object r1 = r0.getValue()
            if (r1 == 0) goto L23
            goto La
        L23:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Value for key "
            r1.append(r2)
            java.lang.Object r0 = r0.getKey()
            r1.append(r0)
            java.lang.String r0 = " is null"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r3.<init>(r0)
            throw r3
        L43:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.String r0 = "map.containsKey(null)"
            r3.<init>(r0)
            throw r3
        L4b:
            return
        L4c:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.String r0 = "map == null"
            r3.<init>(r0)
            throw r3
    }

    public static <T> java.util.List<T> copyOf(java.lang.String r1, java.util.List<T> r2) {
            if (r2 == 0) goto L19
            java.util.List r1 = java.util.Collections.emptyList()
            if (r2 == r1) goto L13
            boolean r1 = r2 instanceof com.czhj.wire.internal.ImmutableList
            if (r1 == 0) goto Ld
            goto L13
        Ld:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r2)
            return r1
        L13:
            com.czhj.wire.internal.MutableOnWriteList r1 = new com.czhj.wire.internal.MutableOnWriteList
            r1.<init>(r2)
            return r1
        L19:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = " == null"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            r2.<init>(r1)
            throw r2
    }

    public static <K, V> java.util.Map<K, V> copyOf(java.lang.String r1, java.util.Map<K, V> r2) {
            if (r2 == 0) goto L8
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>(r2)
            return r1
        L8:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = " == null"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            r2.<init>(r1)
            throw r2
    }

    public static int countNonNull(java.lang.Object r2, java.lang.Object r3) {
            r0 = 1
            r1 = 0
            if (r2 == 0) goto L6
            r2 = r0
            goto L7
        L6:
            r2 = r1
        L7:
            if (r3 == 0) goto La
            goto Lb
        La:
            r0 = r1
        Lb:
            int r2 = r2 + r0
            return r2
    }

    public static int countNonNull(java.lang.Object r2, java.lang.Object r3, java.lang.Object r4) {
            r0 = 1
            r1 = 0
            if (r2 == 0) goto L6
            r2 = r0
            goto L7
        L6:
            r2 = r1
        L7:
            if (r3 == 0) goto Lb
            r3 = r0
            goto Lc
        Lb:
            r3 = r1
        Lc:
            int r2 = r2 + r3
            if (r4 == 0) goto L10
            goto L11
        L10:
            r0 = r1
        L11:
            int r2 = r2 + r0
            return r2
    }

    public static int countNonNull(java.lang.Object r1, java.lang.Object r2, java.lang.Object r3, java.lang.Object r4, java.lang.Object... r5) {
            r0 = 0
            if (r1 == 0) goto L5
            r1 = 1
            goto L6
        L5:
            r1 = r0
        L6:
            if (r2 == 0) goto La
            int r1 = r1 + 1
        La:
            if (r3 == 0) goto Le
            int r1 = r1 + 1
        Le:
            if (r4 == 0) goto L12
            int r1 = r1 + 1
        L12:
            int r2 = r5.length
        L13:
            if (r0 >= r2) goto L1e
            r3 = r5[r0]
            if (r3 == 0) goto L1b
            int r1 = r1 + 1
        L1b:
            int r0 = r0 + 1
            goto L13
        L1e:
            return r1
    }

    public static boolean equals(java.lang.Object r0, java.lang.Object r1) {
            if (r0 == r1) goto Ld
            if (r0 == 0) goto Lb
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    public static <T> java.util.List<T> immutableCopyOf(java.lang.String r1, java.util.List<T> r2) {
            if (r2 == 0) goto L3a
            boolean r0 = r2 instanceof com.czhj.wire.internal.MutableOnWriteList
            if (r0 == 0) goto La
            com.czhj.wire.internal.MutableOnWriteList r2 = (com.czhj.wire.internal.MutableOnWriteList) r2
            java.util.List<T> r2 = r2.a
        La:
            java.util.List r0 = java.util.Collections.emptyList()
            if (r2 == r0) goto L39
            boolean r0 = r2 instanceof com.czhj.wire.internal.ImmutableList
            if (r0 == 0) goto L15
            goto L39
        L15:
            com.czhj.wire.internal.ImmutableList r0 = new com.czhj.wire.internal.ImmutableList
            r0.<init>(r2)
            r2 = 0
            boolean r2 = r0.contains(r2)
            if (r2 != 0) goto L22
            return r0
        L22:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = ".contains(null)"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            r2.<init>(r1)
            throw r2
        L39:
            return r2
        L3a:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = " == null"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            r2.<init>(r1)
            throw r2
    }

    public static <K, V> java.util.Map<K, V> immutableCopyOf(java.lang.String r2, java.util.Map<K, V> r3) {
            if (r3 == 0) goto L52
            boolean r0 = r3.isEmpty()
            if (r0 == 0) goto Ld
            java.util.Map r2 = java.util.Collections.emptyMap()
            return r2
        Ld:
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>(r3)
            r3 = 0
            boolean r1 = r0.containsKey(r3)
            if (r1 != 0) goto L3b
            boolean r3 = r0.containsValue(r3)
            if (r3 != 0) goto L24
            java.util.Map r2 = java.util.Collections.unmodifiableMap(r0)
            return r2
        L24:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ".containsValue(null)"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
        L3b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = ".containsKey(null)"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
        L52:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = " == null"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
    }

    public static java.lang.IllegalStateException missingRequiredFields(java.lang.Object... r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r5.length
            java.lang.String r2 = ""
            r3 = 0
        L9:
            if (r3 >= r1) goto L26
            r4 = r5[r3]
            if (r4 != 0) goto L23
            int r4 = r0.length()
            if (r4 <= 0) goto L17
            java.lang.String r2 = "s"
        L17:
            java.lang.String r4 = "\n  "
            r0.append(r4)
            int r4 = r3 + 1
            r4 = r5[r4]
            r0.append(r4)
        L23:
            int r3 = r3 + 2
            goto L9
        L26:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "Required field"
            r1.append(r3)
            r1.append(r2)
            java.lang.String r2 = " not set:"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r5.<init>(r0)
            throw r5
    }

    public static <T> java.util.List<T> newMutableList() {
            com.czhj.wire.internal.MutableOnWriteList r0 = new com.czhj.wire.internal.MutableOnWriteList
            java.util.List r1 = java.util.Collections.emptyList()
            r0.<init>(r1)
            return r0
    }

    public static <K, V> java.util.Map<K, V> newMutableMap() {
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            return r0
    }

    public static <T> void redactElements(java.util.List<T> r3, com.czhj.wire.ProtoAdapter<T> r4) {
            int r0 = r3.size()
            r1 = 0
        L5:
            if (r1 >= r0) goto L15
            java.lang.Object r2 = r3.get(r1)
            java.lang.Object r2 = r4.redact(r2)
            r3.set(r1, r2)
            int r1 = r1 + 1
            goto L5
        L15:
            return
    }

    public static <T> void redactElements(java.util.Map<?, T> r2, com.czhj.wire.ProtoAdapter<T> r3) {
            java.util.Set r2 = r2.entrySet()
            java.util.Iterator r2 = r2.iterator()
        L8:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L20
            java.lang.Object r0 = r2.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getValue()
            java.lang.Object r1 = r3.redact(r1)
            r0.setValue(r1)
            goto L8
        L20:
            return
    }
}
