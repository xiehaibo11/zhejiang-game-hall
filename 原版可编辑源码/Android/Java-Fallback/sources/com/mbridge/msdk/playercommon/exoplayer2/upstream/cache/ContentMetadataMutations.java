package com.mbridge.msdk.playercommon.exoplayer2.upstream.cache;

public class ContentMetadataMutations {
    private final java.util.Map<java.lang.String, java.lang.Object> editedValues;
    private final java.util.List<java.lang.String> removedValues;

    public ContentMetadataMutations() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.editedValues = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.removedValues = r0
            return
    }

    private com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations checkAndSet(java.lang.String r3, java.lang.Object r4) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.editedValues
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
            java.lang.Object r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r4)
            r0.put(r1, r4)
            java.util.List<java.lang.String> r4 = r2.removedValues
            r4.remove(r3)
            return r2
    }

    public java.util.Map<java.lang.String, java.lang.Object> getEditedValues() {
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            java.util.Map<java.lang.String, java.lang.Object> r1 = r5.editedValues
            r0.<init>(r1)
            java.util.Set r1 = r0.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L30
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getValue()
            boolean r4 = r3 instanceof byte[]
            if (r4 == 0) goto Lf
            byte[] r3 = (byte[]) r3
            byte[] r3 = (byte[]) r3
            int r4 = r3.length
            byte[] r3 = java.util.Arrays.copyOf(r3, r4)
            r2.setValue(r3)
            goto Lf
        L30:
            java.util.Map r0 = java.util.Collections.unmodifiableMap(r0)
            return r0
    }

    public java.util.List<java.lang.String> getRemovedValues() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List<java.lang.String> r1 = r2.removedValues
            r0.<init>(r1)
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            return r0
    }

    public com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations remove(java.lang.String r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.removedValues
            r0.add(r2)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.editedValues
            r0.remove(r2)
            return r1
    }

    public com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations set(java.lang.String r1, long r2) {
            r0 = this;
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r1 = r0.checkAndSet(r1, r2)
            return r1
    }

    public com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations set(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r1 = r0.checkAndSet(r1, r2)
            return r1
    }

    public com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations set(java.lang.String r2, byte[] r3) {
            r1 = this;
            int r0 = r3.length
            byte[] r3 = java.util.Arrays.copyOf(r3, r0)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.cache.ContentMetadataMutations r2 = r1.checkAndSet(r2, r3)
            return r2
    }
}
