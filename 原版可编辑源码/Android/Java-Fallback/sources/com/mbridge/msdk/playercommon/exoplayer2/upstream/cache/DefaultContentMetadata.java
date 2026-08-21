package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

public final class DefaultContentMetadata implements com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadata {
    public static final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata EMPTY = null;
    private static final int MAX_VALUE_LENGTH = 10485760;
    private int hashCode;
    private final java.util.Map<java.lang.String, byte[]> metadata;

    static {
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata
            java.util.Map r1 = java.util.Collections.emptyMap()
            r0.<init>(r1)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata.EMPTY = r0
            return
    }

    private DefaultContentMetadata(java.util.Map<java.lang.String, byte[]> r1) {
            r0 = this;
            r0.<init>()
            java.util.Map r1 = java.util.Collections.unmodifiableMap(r1)
            r0.metadata = r1
            return
    }

    private static void addValues(java.util.HashMap<java.lang.String, byte[]> r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            java.util.Set r0 = r6.keySet()
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L46
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r2 = r6.get(r1)
            byte[] r2 = getBytes(r2)
            int r3 = r2.length
            r4 = 10485760(0xa00000, float:1.469368E-38)
            if (r3 > r4) goto L25
            r5.put(r1, r2)
            goto L8
        L25:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            r6 = 3
            java.lang.Object[] r6 = new java.lang.Object[r6]
            r0 = 0
            r6[r0] = r1
            r0 = 1
            int r1 = r2.length
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r6[r0] = r1
            r0 = 2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r6[r0] = r1
            java.lang.String r0 = "The size of %s (%d) is greater than maximum allowed: %d"
            java.lang.String r6 = java.lang.String.format(r0, r6)
            r5.<init>(r6)
            throw r5
        L46:
            return
    }

    private static java.util.Map<java.lang.String, byte[]> applyMutations(java.util.Map<java.lang.String, byte[]> r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r2) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>(r1)
            java.util.List r1 = r2.getRemovedValues()
            removeValues(r0, r1)
            java.util.Map r1 = r2.getEditedValues()
            addValues(r0, r1)
            return r0
    }

    private static byte[] getBytes(java.lang.Object r3) {
            boolean r0 = r3 instanceof java.lang.Long
            if (r0 == 0) goto L19
            r0 = 8
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            java.lang.Long r3 = (java.lang.Long) r3
            long r1 = r3.longValue()
            java.nio.ByteBuffer r3 = r0.putLong(r1)
            byte[] r3 = r3.array()
            return r3
        L19:
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L2a
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            byte[] r3 = r3.getBytes(r0)
            return r3
        L2a:
            boolean r0 = r3 instanceof byte[]
            if (r0 == 0) goto L33
            byte[] r3 = (byte[]) r3
            byte[] r3 = (byte[]) r3
            return r3
        L33:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            r3.<init>()
            throw r3
    }

    private boolean isMetadataEqual(java.util.Map<java.lang.String, byte[]> r5) {
            r4 = this;
            java.util.Map<java.lang.String, byte[]> r0 = r4.metadata
            int r0 = r0.size()
            int r1 = r5.size()
            r2 = 0
            if (r0 == r1) goto Le
            return r2
        Le:
            java.util.Map<java.lang.String, byte[]> r0 = r4.metadata
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3b
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r3 = r1.getValue()
            byte[] r3 = (byte[]) r3
            java.lang.Object r1 = r1.getKey()
            java.lang.Object r1 = r5.get(r1)
            byte[] r1 = (byte[]) r1
            boolean r1 = java.util.Arrays.equals(r3, r1)
            if (r1 != 0) goto L18
            return r2
        L3b:
            r5 = 1
            return r5
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata readFromStream(java.io.DataInputStream r6) throws java.io.IOException {
            int r0 = r6.readInt()
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r2 = 0
        La:
            if (r2 >= r0) goto L3c
            java.lang.String r3 = r6.readUTF()
            int r4 = r6.readInt()
            if (r4 < 0) goto L25
            r5 = 10485760(0xa00000, float:1.469368E-38)
            if (r4 > r5) goto L25
            byte[] r4 = new byte[r4]
            r6.readFully(r4)
            r1.put(r3, r4)
            int r2 = r2 + 1
            goto La
        L25:
            java.io.IOException r6 = new java.io.IOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid value size: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            throw r6
        L3c:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r6 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata
            r6.<init>(r1)
            return r6
    }

    private static void removeValues(java.util.HashMap<java.lang.String, byte[]> r2, java.util.List<java.lang.String> r3) {
            r0 = 0
        L1:
            int r1 = r3.size()
            if (r0 >= r1) goto L11
            java.lang.Object r1 = r3.get(r0)
            r2.remove(r1)
            int r0 = r0 + 1
            goto L1
        L11:
            return
    }

    @Override
    public final boolean contains(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, byte[]> r0 = r1.metadata
            boolean r2 = r0.containsKey(r2)
            return r2
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata copyWithMutationsApplied(com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r2) {
            r1 = this;
            java.util.Map<java.lang.String, byte[]> r0 = r1.metadata
            java.util.Map r2 = applyMutations(r0, r2)
            boolean r0 = r1.isMetadataEqual(r2)
            if (r0 == 0) goto Ld
            return r1
        Ld:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata
            r0.<init>(r2)
            return r0
    }

    public final boolean equals(java.lang.Object r3) {
            r2 = this;
            if (r2 != r3) goto L4
            r3 = 1
            return r3
        L4:
            if (r3 == 0) goto L1a
            java.lang.Class r0 = r2.getClass()
            java.lang.Class r1 = r3.getClass()
            if (r0 == r1) goto L11
            goto L1a
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata r3 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.DefaultContentMetadata) r3
            java.util.Map<java.lang.String, byte[]> r3 = r3.metadata
            boolean r3 = r2.isMetadataEqual(r3)
            return r3
        L1a:
            r3 = 0
            return r3
    }

    @Override
    public final long get(java.lang.String r2, long r3) {
            r1 = this;
            java.util.Map<java.lang.String, byte[]> r0 = r1.metadata
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L19
            java.util.Map<java.lang.String, byte[]> r3 = r1.metadata
            java.lang.Object r2 = r3.get(r2)
            byte[] r2 = (byte[]) r2
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.wrap(r2)
            long r2 = r2.getLong()
            return r2
        L19:
            return r3
    }

    @Override
    public final java.lang.String get(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, byte[]> r0 = r1.metadata
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L1b
            java.util.Map<java.lang.String, byte[]> r3 = r1.metadata
            java.lang.Object r2 = r3.get(r2)
            byte[] r2 = (byte[]) r2
            java.lang.String r3 = new java.lang.String
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            r3.<init>(r2, r0)
        L1b:
            return r3
    }

    @Override
    public final byte[] get(java.lang.String r2, byte[] r3) {
            r1 = this;
            java.util.Map<java.lang.String, byte[]> r0 = r1.metadata
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L16
            java.util.Map<java.lang.String, byte[]> r3 = r1.metadata
            java.lang.Object r2 = r3.get(r2)
            byte[] r2 = (byte[]) r2
            int r3 = r2.length
            byte[] r2 = java.util.Arrays.copyOf(r2, r3)
            return r2
        L16:
            return r3
    }

    public final int hashCode() {
            r4 = this;
            int r0 = r4.hashCode
            if (r0 != 0) goto L34
            r0 = 0
            java.util.Map<java.lang.String, byte[]> r1 = r4.metadata
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L32
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            int r3 = r3.hashCode()
            java.lang.Object r2 = r2.getValue()
            byte[] r2 = (byte[]) r2
            int r2 = java.util.Arrays.hashCode(r2)
            r2 = r2 ^ r3
            int r0 = r0 + r2
            goto Lf
        L32:
            r4.hashCode = r0
        L34:
            int r0 = r4.hashCode
            return r0
    }

    public final void writeToStream(java.io.DataOutputStream r4) throws java.io.IOException {
            r3 = this;
            java.util.Map<java.lang.String, byte[]> r0 = r3.metadata
            int r0 = r0.size()
            r4.writeInt(r0)
            java.util.Map<java.lang.String, byte[]> r0 = r3.metadata
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L13:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L36
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            r4.writeUTF(r2)
            java.lang.Object r1 = r1.getValue()
            byte[] r1 = (byte[]) r1
            int r2 = r1.length
            r4.writeInt(r2)
            r4.write(r1)
            goto L13
        L36:
            return
    }
}
