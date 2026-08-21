package com.czhj.wire;

public enum FieldEncoding extends java.lang.Enum<com.czhj.wire.FieldEncoding> {
    private static final com.czhj.wire.FieldEncoding[] $VALUES = null;
    public static final com.czhj.wire.FieldEncoding FIXED32 = null;
    public static final com.czhj.wire.FieldEncoding FIXED64 = null;
    public static final com.czhj.wire.FieldEncoding LENGTH_DELIMITED = null;
    public static final com.czhj.wire.FieldEncoding VARINT = null;
    final int value;

    static class 1 {
        static final int[] a = null;

        static {
                com.czhj.wire.FieldEncoding[] r0 = com.czhj.wire.FieldEncoding.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.czhj.wire.FieldEncoding.1.a = r0
                com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.VARINT     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.czhj.wire.FieldEncoding.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.FIXED32     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.czhj.wire.FieldEncoding.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.FIXED64     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.czhj.wire.FieldEncoding.1.a     // Catch: java.lang.NoSuchFieldError -> L33
                com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                return
        }
    }

    static {
            com.czhj.wire.FieldEncoding r0 = new com.czhj.wire.FieldEncoding
            r1 = 0
            java.lang.String r2 = "VARINT"
            r0.<init>(r2, r1, r1)
            com.czhj.wire.FieldEncoding.VARINT = r0
            com.czhj.wire.FieldEncoding r0 = new com.czhj.wire.FieldEncoding
            r2 = 1
            java.lang.String r3 = "FIXED64"
            r0.<init>(r3, r2, r2)
            com.czhj.wire.FieldEncoding.FIXED64 = r0
            com.czhj.wire.FieldEncoding r0 = new com.czhj.wire.FieldEncoding
            r3 = 2
            java.lang.String r4 = "LENGTH_DELIMITED"
            r0.<init>(r4, r3, r3)
            com.czhj.wire.FieldEncoding.LENGTH_DELIMITED = r0
            com.czhj.wire.FieldEncoding r0 = new com.czhj.wire.FieldEncoding
            r4 = 3
            java.lang.String r5 = "FIXED32"
            r6 = 5
            r0.<init>(r5, r4, r6)
            com.czhj.wire.FieldEncoding.FIXED32 = r0
            r5 = 4
            com.czhj.wire.FieldEncoding[] r5 = new com.czhj.wire.FieldEncoding[r5]
            com.czhj.wire.FieldEncoding r6 = com.czhj.wire.FieldEncoding.VARINT
            r5[r1] = r6
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.FIXED64
            r5[r2] = r1
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
            r5[r3] = r1
            r5[r4] = r0
            com.czhj.wire.FieldEncoding.$VALUES = r5
            return
    }

    FieldEncoding(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.value = r3
            return
    }

    static com.czhj.wire.FieldEncoding a(int r3) throws java.io.IOException {
            if (r3 == 0) goto L2b
            r0 = 1
            if (r3 == r0) goto L28
            r0 = 2
            if (r3 == r0) goto L25
            r0 = 5
            if (r3 != r0) goto Le
            com.czhj.wire.FieldEncoding r3 = com.czhj.wire.FieldEncoding.FIXED32
            return r3
        Le:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unexpected FieldEncoding: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L25:
            com.czhj.wire.FieldEncoding r3 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
            return r3
        L28:
            com.czhj.wire.FieldEncoding r3 = com.czhj.wire.FieldEncoding.FIXED64
            return r3
        L2b:
            com.czhj.wire.FieldEncoding r3 = com.czhj.wire.FieldEncoding.VARINT
            return r3
    }

    public static com.czhj.wire.FieldEncoding valueOf(java.lang.String r1) {
            java.lang.Class<com.czhj.wire.FieldEncoding> r0 = com.czhj.wire.FieldEncoding.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.czhj.wire.FieldEncoding r1 = (com.czhj.wire.FieldEncoding) r1
            return r1
    }

    public static com.czhj.wire.FieldEncoding[] values() {
            com.czhj.wire.FieldEncoding[] r0 = com.czhj.wire.FieldEncoding.$VALUES
            java.lang.Object r0 = r0.clone()
            com.czhj.wire.FieldEncoding[] r0 = (com.czhj.wire.FieldEncoding[]) r0
            return r0
    }

    public com.czhj.wire.ProtoAdapter<?> rawProtoAdapter() {
            r2 = this;
            int[] r0 = com.czhj.wire.FieldEncoding.1.a
            int r1 = r2.ordinal()
            r0 = r0[r1]
            r1 = 1
            if (r0 == r1) goto L23
            r1 = 2
            if (r0 == r1) goto L20
            r1 = 3
            if (r0 == r1) goto L1d
            r1 = 4
            if (r0 != r1) goto L17
            com.czhj.wire.ProtoAdapter<com.czhj.wire.okio.ByteString> r0 = com.czhj.wire.ProtoAdapter.BYTES
            return r0
        L17:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>()
            throw r0
        L1d:
            com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.FIXED64
            return r0
        L20:
            com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.FIXED32
            return r0
        L23:
            com.czhj.wire.ProtoAdapter<java.lang.Long> r0 = com.czhj.wire.ProtoAdapter.UINT64
            return r0
    }
}
