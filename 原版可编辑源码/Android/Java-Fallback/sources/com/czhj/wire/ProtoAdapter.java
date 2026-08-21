package com.czhj.wire;

public abstract class ProtoAdapter<E> {
    public static final com.czhj.wire.ProtoAdapter<java.lang.Boolean> BOOL = null;
    public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.okio.ByteString> BYTES = null;
    public static final com.czhj.wire.ProtoAdapter<java.lang.Double> DOUBLE = null;
    public static final com.czhj.wire.ProtoAdapter<java.lang.Integer> FIXED32 = null;
    public static final com.czhj.wire.ProtoAdapter<java.lang.Long> FIXED64 = null;
    private static final int FIXED_32_SIZE = 4;
    private static final int FIXED_64_SIZE = 8;
    private static final int FIXED_BOOL_SIZE = 1;
    public static final com.czhj.wire.ProtoAdapter<java.lang.Float> FLOAT = null;
    public static final com.czhj.wire.ProtoAdapter<java.lang.Integer> INT32 = null;
    public static final com.czhj.wire.ProtoAdapter<java.lang.Long> INT64 = null;
    public static final com.czhj.wire.ProtoAdapter<java.lang.Integer> SFIXED32 = null;
    public static final com.czhj.wire.ProtoAdapter<java.lang.Long> SFIXED64 = null;
    public static final com.czhj.wire.ProtoAdapter<java.lang.Integer> SINT32 = null;
    public static final com.czhj.wire.ProtoAdapter<java.lang.Long> SINT64 = null;
    public static final com.czhj.wire.ProtoAdapter<java.lang.String> STRING = null;
    public static final com.czhj.wire.ProtoAdapter<java.lang.Integer> UINT32 = null;
    public static final com.czhj.wire.ProtoAdapter<java.lang.Long> UINT64 = null;
    private final com.czhj.wire.FieldEncoding fieldEncoding;
    final java.lang.Class<?> javaType;
    com.czhj.wire.ProtoAdapter<java.util.List<E>> packedAdapter;
    com.czhj.wire.ProtoAdapter<java.util.List<E>> repeatedAdapter;
















    public static final class EnumConstantNotFoundException extends java.lang.IllegalArgumentException {
        public final int value;

        public EnumConstantNotFoundException(int r3, java.lang.Class<?> r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Unknown enum tag "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r1 = " for "
                r0.append(r1)
                java.lang.String r4 = r4.getCanonicalName()
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                r2.<init>(r4)
                r2.value = r3
                return
        }
    }

    private static final class MapEntryProtoAdapter<K, V> extends com.czhj.wire.ProtoAdapter<java.util.Map.Entry<K, V>> {
        final com.czhj.wire.ProtoAdapter<K> a;
        final com.czhj.wire.ProtoAdapter<V> b;

        MapEntryProtoAdapter(com.czhj.wire.ProtoAdapter<K> r3, com.czhj.wire.ProtoAdapter<V> r4) {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<java.util.Map$Entry> r1 = java.util.Map.Entry.class
                r2.<init>(r0, r1)
                r2.a = r3
                r2.b = r4
                return
        }

        @Override
        public java.lang.Object decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                java.util.Map$Entry r1 = r0.decode(r1)
                return r1
        }

        @Override
        public java.util.Map.Entry<K, V> decode(com.czhj.wire.ProtoReader r1) {
                r0 = this;
                java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
                r1.<init>()
                throw r1
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, java.lang.Object r2) throws java.io.IOException {
                r0 = this;
                java.util.Map$Entry r2 = (java.util.Map.Entry) r2
                r0.encode(r1, r2)
                return
        }

        public void encode(com.czhj.wire.ProtoWriter r4, java.util.Map.Entry<K, V> r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<K> r0 = r3.a
                java.lang.Object r1 = r5.getKey()
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<V> r0 = r3.b
                java.lang.Object r5 = r5.getValue()
                r1 = 2
                r0.encodeWithTag(r4, r1, r5)
                return
        }

        @Override
        public int encodedSize(java.lang.Object r1) {
                r0 = this;
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public int encodedSize(java.util.Map.Entry<K, V> r4) {
                r3 = this;
                com.czhj.wire.ProtoAdapter<K> r0 = r3.a
                java.lang.Object r1 = r4.getKey()
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<V> r1 = r3.b
                java.lang.Object r4 = r4.getValue()
                r2 = 2
                int r4 = r1.encodedSizeWithTag(r2, r4)
                int r0 = r0 + r4
                return r0
        }
    }

    private static final class MapProtoAdapter<K, V> extends com.czhj.wire.ProtoAdapter<java.util.Map<K, V>> {
        private final com.czhj.wire.ProtoAdapter.MapEntryProtoAdapter<K, V> a;

        MapProtoAdapter(com.czhj.wire.ProtoAdapter<K> r3, com.czhj.wire.ProtoAdapter<V> r4) {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<java.util.Map> r1 = java.util.Map.class
                r2.<init>(r0, r1)
                com.czhj.wire.ProtoAdapter$MapEntryProtoAdapter r0 = new com.czhj.wire.ProtoAdapter$MapEntryProtoAdapter
                r0.<init>(r3, r4)
                r2.a = r0
                return
        }

        @Override
        public java.lang.Object decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                java.util.Map r1 = r0.decode(r1)
                return r1
        }

        @Override
        public java.util.Map<K, V> decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                long r0 = r7.beginMessage()
                r2 = 0
                r3 = r2
            L6:
                int r4 = r7.nextTag()
                r5 = -1
                if (r4 == r5) goto L26
                r5 = 1
                if (r4 == r5) goto L1d
                r5 = 2
                if (r4 == r5) goto L14
                goto L6
            L14:
                com.czhj.wire.ProtoAdapter$MapEntryProtoAdapter<K, V> r3 = r6.a
                com.czhj.wire.ProtoAdapter<V> r3 = r3.b
                java.lang.Object r3 = r3.decode(r7)
                goto L6
            L1d:
                com.czhj.wire.ProtoAdapter$MapEntryProtoAdapter<K, V> r2 = r6.a
                com.czhj.wire.ProtoAdapter<K> r2 = r2.a
                java.lang.Object r2 = r2.decode(r7)
                goto L6
            L26:
                r7.endMessage(r0)
                if (r2 == 0) goto L3a
                if (r3 == 0) goto L32
                java.util.Map r7 = java.util.Collections.singletonMap(r2, r3)
                return r7
            L32:
                java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
                java.lang.String r0 = "Map entry with null value"
                r7.<init>(r0)
                throw r7
            L3a:
                java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
                java.lang.String r0 = "Map entry with null key"
                r7.<init>(r0)
                throw r7
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, java.lang.Object r2) throws java.io.IOException {
                r0 = this;
                java.util.Map r2 = (java.util.Map) r2
                r0.encode(r1, r2)
                return
        }

        public void encode(com.czhj.wire.ProtoWriter r1, java.util.Map<K, V> r2) {
                r0 = this;
                java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
                java.lang.String r2 = "Repeated values can only be encoded with a tag."
                r1.<init>(r2)
                throw r1
        }

        @Override
        public void encodeWithTag(com.czhj.wire.ProtoWriter r1, int r2, java.lang.Object r3) throws java.io.IOException {
                r0 = this;
                java.util.Map r3 = (java.util.Map) r3
                r0.encodeWithTag(r1, r2, r3)
                return
        }

        public void encodeWithTag(com.czhj.wire.ProtoWriter r3, int r4, java.util.Map<K, V> r5) throws java.io.IOException {
                r2 = this;
                java.util.Set r5 = r5.entrySet()
                java.util.Iterator r5 = r5.iterator()
            L8:
                boolean r0 = r5.hasNext()
                if (r0 == 0) goto L1a
                java.lang.Object r0 = r5.next()
                java.util.Map$Entry r0 = (java.util.Map.Entry) r0
                com.czhj.wire.ProtoAdapter$MapEntryProtoAdapter<K, V> r1 = r2.a
                r1.encodeWithTag(r3, r4, r0)
                goto L8
            L1a:
                return
        }

        @Override
        public int encodedSize(java.lang.Object r1) {
                r0 = this;
                java.util.Map r1 = (java.util.Map) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public int encodedSize(java.util.Map<K, V> r2) {
                r1 = this;
                java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
                java.lang.String r0 = "Repeated values can only be sized with a tag."
                r2.<init>(r0)
                throw r2
        }

        @Override
        public int encodedSizeWithTag(int r1, java.lang.Object r2) {
                r0 = this;
                java.util.Map r2 = (java.util.Map) r2
                int r1 = r0.encodedSizeWithTag(r1, r2)
                return r1
        }

        public int encodedSizeWithTag(int r4, java.util.Map<K, V> r5) {
                r3 = this;
                java.util.Set r5 = r5.entrySet()
                java.util.Iterator r5 = r5.iterator()
                r0 = 0
            L9:
                boolean r1 = r5.hasNext()
                if (r1 == 0) goto L1d
                java.lang.Object r1 = r5.next()
                java.util.Map$Entry r1 = (java.util.Map.Entry) r1
                com.czhj.wire.ProtoAdapter$MapEntryProtoAdapter<K, V> r2 = r3.a
                int r1 = r2.encodedSizeWithTag(r4, r1)
                int r0 = r0 + r1
                goto L9
            L1d:
                return r0
        }

        @Override
        public java.lang.Object redact(java.lang.Object r1) {
                r0 = this;
                java.util.Map r1 = (java.util.Map) r1
                java.util.Map r1 = r0.redact(r1)
                return r1
        }

        public java.util.Map<K, V> redact(java.util.Map<K, V> r1) {
                r0 = this;
                java.util.Map r1 = java.util.Collections.emptyMap()
                return r1
        }
    }

    static {
            com.czhj.wire.ProtoAdapter$1 r0 = new com.czhj.wire.ProtoAdapter$1
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.VARINT
            java.lang.Class<java.lang.Boolean> r2 = java.lang.Boolean.class
            r0.<init>(r1, r2)
            com.czhj.wire.ProtoAdapter.BOOL = r0
            com.czhj.wire.ProtoAdapter$2 r0 = new com.czhj.wire.ProtoAdapter$2
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.VARINT
            java.lang.Class<java.lang.Integer> r2 = java.lang.Integer.class
            r0.<init>(r1, r2)
            com.czhj.wire.ProtoAdapter.INT32 = r0
            com.czhj.wire.ProtoAdapter$3 r0 = new com.czhj.wire.ProtoAdapter$3
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.VARINT
            java.lang.Class<java.lang.Integer> r2 = java.lang.Integer.class
            r0.<init>(r1, r2)
            com.czhj.wire.ProtoAdapter.UINT32 = r0
            com.czhj.wire.ProtoAdapter$4 r0 = new com.czhj.wire.ProtoAdapter$4
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.VARINT
            java.lang.Class<java.lang.Integer> r2 = java.lang.Integer.class
            r0.<init>(r1, r2)
            com.czhj.wire.ProtoAdapter.SINT32 = r0
            com.czhj.wire.ProtoAdapter$5 r0 = new com.czhj.wire.ProtoAdapter$5
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.FIXED32
            java.lang.Class<java.lang.Integer> r2 = java.lang.Integer.class
            r0.<init>(r1, r2)
            com.czhj.wire.ProtoAdapter.FIXED32 = r0
            com.czhj.wire.ProtoAdapter.SFIXED32 = r0
            com.czhj.wire.ProtoAdapter$6 r0 = new com.czhj.wire.ProtoAdapter$6
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.VARINT
            java.lang.Class<java.lang.Long> r2 = java.lang.Long.class
            r0.<init>(r1, r2)
            com.czhj.wire.ProtoAdapter.INT64 = r0
            com.czhj.wire.ProtoAdapter$7 r0 = new com.czhj.wire.ProtoAdapter$7
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.VARINT
            java.lang.Class<java.lang.Long> r2 = java.lang.Long.class
            r0.<init>(r1, r2)
            com.czhj.wire.ProtoAdapter.UINT64 = r0
            com.czhj.wire.ProtoAdapter$8 r0 = new com.czhj.wire.ProtoAdapter$8
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.VARINT
            java.lang.Class<java.lang.Long> r2 = java.lang.Long.class
            r0.<init>(r1, r2)
            com.czhj.wire.ProtoAdapter.SINT64 = r0
            com.czhj.wire.ProtoAdapter$9 r0 = new com.czhj.wire.ProtoAdapter$9
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.FIXED64
            java.lang.Class<java.lang.Long> r2 = java.lang.Long.class
            r0.<init>(r1, r2)
            com.czhj.wire.ProtoAdapter.FIXED64 = r0
            com.czhj.wire.ProtoAdapter.SFIXED64 = r0
            com.czhj.wire.ProtoAdapter$10 r0 = new com.czhj.wire.ProtoAdapter$10
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.FIXED32
            java.lang.Class<java.lang.Float> r2 = java.lang.Float.class
            r0.<init>(r1, r2)
            com.czhj.wire.ProtoAdapter.FLOAT = r0
            com.czhj.wire.ProtoAdapter$11 r0 = new com.czhj.wire.ProtoAdapter$11
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.FIXED64
            java.lang.Class<java.lang.Double> r2 = java.lang.Double.class
            r0.<init>(r1, r2)
            com.czhj.wire.ProtoAdapter.DOUBLE = r0
            com.czhj.wire.ProtoAdapter$12 r0 = new com.czhj.wire.ProtoAdapter$12
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
            java.lang.Class<java.lang.String> r2 = java.lang.String.class
            r0.<init>(r1, r2)
            com.czhj.wire.ProtoAdapter.STRING = r0
            com.czhj.wire.ProtoAdapter$13 r0 = new com.czhj.wire.ProtoAdapter$13
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
            java.lang.Class<com.czhj.wire.okio.ByteString> r2 = com.czhj.wire.okio.ByteString.class
            r0.<init>(r1, r2)
            com.czhj.wire.ProtoAdapter.BYTES = r0
            return
    }

    public ProtoAdapter(com.czhj.wire.FieldEncoding r1, java.lang.Class<?> r2) {
            r0 = this;
            r0.<init>()
            r0.fieldEncoding = r1
            r0.javaType = r2
            return
    }

    private com.czhj.wire.ProtoAdapter<java.util.List<E>> createPacked() {
            r3 = this;
            com.czhj.wire.FieldEncoding r0 = r3.fieldEncoding
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
            if (r0 == r1) goto L10
            com.czhj.wire.ProtoAdapter$14 r0 = new com.czhj.wire.ProtoAdapter$14
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
            java.lang.Class<java.util.List> r2 = java.util.List.class
            r0.<init>(r3, r1, r2)
            return r0
        L10:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "Unable to pack a length-delimited type."
            r0.<init>(r1)
            throw r0
    }

    private com.czhj.wire.ProtoAdapter<java.util.List<E>> createRepeated() {
            r3 = this;
            com.czhj.wire.ProtoAdapter$15 r0 = new com.czhj.wire.ProtoAdapter$15
            com.czhj.wire.FieldEncoding r1 = r3.fieldEncoding
            java.lang.Class<java.util.List> r2 = java.util.List.class
            r0.<init>(r3, r1, r2)
            return r0
    }

    public static <M extends com.czhj.wire.Message> com.czhj.wire.ProtoAdapter<M> get(M r0) {
            java.lang.Class r0 = r0.getClass()
            com.czhj.wire.ProtoAdapter r0 = get(r0)
            return r0
    }

    public static <M> com.czhj.wire.ProtoAdapter<M> get(java.lang.Class<M> r4) {
            java.lang.String r0 = "ADAPTER"
            java.lang.reflect.Field r0 = r4.getField(r0)     // Catch: java.lang.Throwable -> Le
            r1 = 0
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> Le
            com.czhj.wire.ProtoAdapter r0 = (com.czhj.wire.ProtoAdapter) r0     // Catch: java.lang.Throwable -> Le
            return r0
        Le:
            r0 = move-exception
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "failed to access "
            r2.append(r3)
            java.lang.String r4 = r4.getName()
            r2.append(r4)
            java.lang.String r4 = "#ADAPTER"
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4, r0)
            throw r1
    }

    public static com.czhj.wire.ProtoAdapter<?> get(java.lang.String r4) {
            r0 = 35
            int r0 = r4.indexOf(r0)     // Catch: java.lang.Throwable -> L21
            r1 = 0
            java.lang.String r1 = r4.substring(r1, r0)     // Catch: java.lang.Throwable -> L21
            int r0 = r0 + 1
            java.lang.String r0 = r4.substring(r0)     // Catch: java.lang.Throwable -> L21
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L21
            java.lang.reflect.Field r0 = r1.getField(r0)     // Catch: java.lang.Throwable -> L21
            r1 = 0
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L21
            com.czhj.wire.ProtoAdapter r0 = (com.czhj.wire.ProtoAdapter) r0     // Catch: java.lang.Throwable -> L21
            return r0
        L21:
            r0 = move-exception
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "failed to access "
            r2.append(r3)
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4, r0)
            throw r1
    }

    public static <E extends com.czhj.wire.WireEnum> com.czhj.wire.RuntimeEnumAdapter<E> newEnumAdapter(java.lang.Class<E> r1) {
            com.czhj.wire.RuntimeEnumAdapter r0 = new com.czhj.wire.RuntimeEnumAdapter
            r0.<init>(r1)
            return r0
    }

    public static <K, V> com.czhj.wire.ProtoAdapter<java.util.Map<K, V>> newMapAdapter(com.czhj.wire.ProtoAdapter<K> r1, com.czhj.wire.ProtoAdapter<V> r2) {
            com.czhj.wire.ProtoAdapter$MapProtoAdapter r0 = new com.czhj.wire.ProtoAdapter$MapProtoAdapter
            r0.<init>(r1, r2)
            return r0
    }

    public static <M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message.Builder<M, B>> com.czhj.wire.ProtoAdapter<M> newMessageAdapter(java.lang.Class<M> r0) {
            com.czhj.wire.RuntimeMessageAdapter r0 = com.czhj.wire.RuntimeMessageAdapter.a(r0)
            return r0
    }

    public final com.czhj.wire.ProtoAdapter<java.util.List<E>> asPacked() {
            r1 = this;
            com.czhj.wire.ProtoAdapter<java.util.List<E>> r0 = r1.packedAdapter
            if (r0 == 0) goto L5
            goto Lb
        L5:
            com.czhj.wire.ProtoAdapter r0 = r1.createPacked()
            r1.packedAdapter = r0
        Lb:
            return r0
    }

    public final com.czhj.wire.ProtoAdapter<java.util.List<E>> asRepeated() {
            r1 = this;
            com.czhj.wire.ProtoAdapter<java.util.List<E>> r0 = r1.repeatedAdapter
            if (r0 == 0) goto L5
            goto Lb
        L5:
            com.czhj.wire.ProtoAdapter r0 = r1.createRepeated()
            r1.repeatedAdapter = r0
        Lb:
            return r0
    }

    public abstract E decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException;

    public final E decode(com.czhj.wire.okio.BufferedSource r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "source == null"
            com.czhj.wire.Preconditions.a(r2, r0)
            com.czhj.wire.ProtoReader r0 = new com.czhj.wire.ProtoReader
            r0.<init>(r2)
            java.lang.Object r2 = r1.decode(r0)
            return r2
    }

    public final E decode(com.czhj.wire.okio.ByteString r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "bytes == null"
            com.czhj.wire.Preconditions.a(r2, r0)
            com.czhj.wire.okio.Buffer r0 = new com.czhj.wire.okio.Buffer
            r0.<init>()
            com.czhj.wire.okio.Buffer r2 = r0.write(r2)
            java.lang.Object r2 = r1.decode(r2)
            return r2
    }

    public final E decode(java.io.InputStream r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "stream == null"
            com.czhj.wire.Preconditions.a(r2, r0)
            com.czhj.wire.okio.Source r2 = com.czhj.wire.okio.Okio.source(r2)
            com.czhj.wire.okio.BufferedSource r2 = com.czhj.wire.okio.Okio.buffer(r2)
            java.lang.Object r2 = r1.decode(r2)
            return r2
    }

    public final E decode(byte[] r2) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "bytes == null"
            com.czhj.wire.Preconditions.a(r2, r0)
            com.czhj.wire.okio.Buffer r0 = new com.czhj.wire.okio.Buffer
            r0.<init>()
            com.czhj.wire.okio.Buffer r2 = r0.write(r2)
            java.lang.Object r2 = r1.decode(r2)
            return r2
    }

    public abstract void encode(com.czhj.wire.ProtoWriter r1, E r2) throws java.io.IOException;

    public final void encode(com.czhj.wire.okio.BufferedSink r2, E r3) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "value == null"
            com.czhj.wire.Preconditions.a(r3, r0)
            java.lang.String r0 = "sink == null"
            com.czhj.wire.Preconditions.a(r2, r0)
            com.czhj.wire.ProtoWriter r0 = new com.czhj.wire.ProtoWriter
            r0.<init>(r2)
            r1.encode(r0, r3)
            return
    }

    public final void encode(java.io.OutputStream r2, E r3) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "value == null"
            com.czhj.wire.Preconditions.a(r3, r0)
            java.lang.String r0 = "stream == null"
            com.czhj.wire.Preconditions.a(r2, r0)
            com.czhj.wire.okio.Sink r2 = com.czhj.wire.okio.Okio.sink(r2)
            com.czhj.wire.okio.BufferedSink r2 = com.czhj.wire.okio.Okio.buffer(r2)
            r1.encode(r2, r3)
            r2.emit()
            return
    }

    public final byte[] encode(E r2) {
            r1 = this;
            java.lang.String r0 = "value == null"
            com.czhj.wire.Preconditions.a(r2, r0)
            com.czhj.wire.okio.Buffer r0 = new com.czhj.wire.okio.Buffer
            r0.<init>()
            r1.encode(r0, r2)     // Catch: java.io.IOException -> L12
            byte[] r2 = r0.readByteArray()
            return r2
        L12:
            r2 = move-exception
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>(r2)
            throw r0
    }

    public void encodeWithTag(com.czhj.wire.ProtoWriter r2, int r3, E r4) throws java.io.IOException {
            r1 = this;
            if (r4 != 0) goto L3
            return
        L3:
            com.czhj.wire.FieldEncoding r0 = r1.fieldEncoding
            r2.writeTag(r3, r0)
            com.czhj.wire.FieldEncoding r3 = r1.fieldEncoding
            com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
            if (r3 != r0) goto L15
            int r3 = r1.encodedSize(r4)
            r2.writeVarint32(r3)
        L15:
            r1.encode(r2, r4)
            return
    }

    public abstract int encodedSize(E r1);

    public int encodedSizeWithTag(int r3, E r4) {
            r2 = this;
            if (r4 != 0) goto L4
            r3 = 0
            return r3
        L4:
            int r4 = r2.encodedSize(r4)
            com.czhj.wire.FieldEncoding r0 = r2.fieldEncoding
            com.czhj.wire.FieldEncoding r1 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
            if (r0 != r1) goto L13
            int r0 = com.czhj.wire.ProtoWriter.c(r4)
            int r4 = r4 + r0
        L13:
            int r3 = com.czhj.wire.ProtoWriter.a(r3)
            int r4 = r4 + r3
            return r4
    }

    public E redact(E r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    public java.lang.String toString(E r1) {
            r0 = this;
            java.lang.String r1 = r1.toString()
            return r1
    }

    com.czhj.wire.ProtoAdapter<?> withLabel(com.czhj.wire.WireField.Label r2) {
            r1 = this;
            boolean r0 = r2.a()
            if (r0 == 0) goto L16
            boolean r2 = r2.b()
            if (r2 == 0) goto L11
            com.czhj.wire.ProtoAdapter r2 = r1.asPacked()
            goto L15
        L11:
            com.czhj.wire.ProtoAdapter r2 = r1.asRepeated()
        L15:
            return r2
        L16:
            return r1
    }
}
