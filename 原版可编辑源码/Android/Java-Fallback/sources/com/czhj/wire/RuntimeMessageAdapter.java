package com.czhj.wire;

import com.czhj.wire.Message;
import com.czhj.wire.Message.Builder;

final class RuntimeMessageAdapter<M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message.Builder<M, B>> extends com.czhj.wire.ProtoAdapter<M> {
    private static final java.lang.String a = "██";
    private final java.lang.Class<M> b;
    private final java.lang.Class<B> c;
    private final java.util.Map<java.lang.Integer, com.czhj.wire.FieldBinding<M, B>> d;

    RuntimeMessageAdapter(java.lang.Class<M> r2, java.lang.Class<B> r3, java.util.Map<java.lang.Integer, com.czhj.wire.FieldBinding<M, B>> r4) {
            r1 = this;
            com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
            r1.<init>(r0, r2)
            r1.b = r2
            r1.c = r3
            r1.d = r4
            return
    }

    static <M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message.Builder<M, B>> com.czhj.wire.RuntimeMessageAdapter<M, B> a(java.lang.Class<M> r9) {
            java.lang.Class r0 = b(r9)
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            java.lang.reflect.Field[] r2 = r9.getDeclaredFields()
            int r3 = r2.length
            r4 = 0
        Lf:
            if (r4 >= r3) goto L30
            r5 = r2[r4]
            java.lang.Class<com.czhj.wire.WireField> r6 = com.czhj.wire.WireField.class
            java.lang.annotation.Annotation r6 = r5.getAnnotation(r6)
            com.czhj.wire.WireField r6 = (com.czhj.wire.WireField) r6
            if (r6 == 0) goto L2d
            int r7 = r6.tag()
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            com.czhj.wire.FieldBinding r8 = new com.czhj.wire.FieldBinding
            r8.<init>(r6, r5, r0)
            r1.put(r7, r8)
        L2d:
            int r4 = r4 + 1
            goto Lf
        L30:
            com.czhj.wire.RuntimeMessageAdapter r2 = new com.czhj.wire.RuntimeMessageAdapter
            java.util.Map r1 = java.util.Collections.unmodifiableMap(r1)
            r2.<init>(r9, r0, r1)
            return r2
    }

    private static <M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message.Builder<M, B>> java.lang.Class<B> b(java.lang.Class<M> r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.ClassNotFoundException -> L1a
            r0.<init>()     // Catch: java.lang.ClassNotFoundException -> L1a
            java.lang.String r1 = r3.getName()     // Catch: java.lang.ClassNotFoundException -> L1a
            r0.append(r1)     // Catch: java.lang.ClassNotFoundException -> L1a
            java.lang.String r1 = "$Builder"
            r0.append(r1)     // Catch: java.lang.ClassNotFoundException -> L1a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.ClassNotFoundException -> L1a
            java.lang.Class r3 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L1a
            return r3
        L1a:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "No builder class found for message type "
            r1.append(r2)
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    java.util.Map<java.lang.Integer, com.czhj.wire.FieldBinding<M, B>> a() {
            r1 = this;
            java.util.Map<java.lang.Integer, com.czhj.wire.FieldBinding<M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message$Builder<M, B>>> r0 = r1.d
            return r0
    }

    B b() {
            r2 = this;
            java.lang.Class<B extends com.czhj.wire.Message$Builder<M, B>> r0 = r2.c     // Catch: java.lang.Throwable -> L9
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Throwable -> L9
            com.czhj.wire.Message$Builder r0 = (com.czhj.wire.Message.Builder) r0     // Catch: java.lang.Throwable -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>(r0)
            throw r1
    }

    @Override
    public M decode(com.czhj.wire.ProtoReader r9) throws java.io.IOException {
            r8 = this;
            com.czhj.wire.Message$Builder r0 = r8.b()
            long r1 = r9.beginMessage()
        L8:
            int r3 = r9.nextTag()
            r4 = -1
            if (r3 == r4) goto L52
            java.util.Map<java.lang.Integer, com.czhj.wire.FieldBinding<M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message$Builder<M, B>>> r4 = r8.d
            java.lang.Integer r5 = java.lang.Integer.valueOf(r3)
            java.lang.Object r4 = r4.get(r5)
            com.czhj.wire.FieldBinding r4 = (com.czhj.wire.FieldBinding) r4
            if (r4 == 0) goto L34
            boolean r5 = r4.a()     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L44
            if (r5 == 0) goto L28
            com.czhj.wire.ProtoAdapter r5 = r4.d()     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L44
            goto L2c
        L28:
            com.czhj.wire.ProtoAdapter r5 = r4.b()     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L44
        L2c:
            java.lang.Object r5 = r5.decode(r9)     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L44
            r4.a(r0, r5)     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L44
            goto L8
        L34:
            com.czhj.wire.FieldEncoding r4 = r9.peekFieldEncoding()     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L44
            com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L44
            java.lang.Object r5 = r5.decode(r9)     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L44
            r0.addUnknownField(r3, r4, r5)     // Catch: com.czhj.wire.ProtoAdapter.EnumConstantNotFoundException -> L44
            goto L8
        L44:
            r4 = move-exception
            com.czhj.wire.FieldEncoding r5 = com.czhj.wire.FieldEncoding.VARINT
            int r4 = r4.value
            long r6 = (long) r4
            java.lang.Long r4 = java.lang.Long.valueOf(r6)
            r0.addUnknownField(r3, r5, r4)
            goto L8
        L52:
            r9.endMessage(r1)
            com.czhj.wire.Message r9 = r0.build()
            return r9
    }

    @Override
    public java.lang.Object decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.Message r1 = r0.decode(r1)
            return r1
    }

    public void encode(com.czhj.wire.ProtoWriter r5, M r6) throws java.io.IOException {
            r4 = this;
            java.util.Map<java.lang.Integer, com.czhj.wire.FieldBinding<M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message$Builder<M, B>>> r0 = r4.d
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L27
            java.lang.Object r1 = r0.next()
            com.czhj.wire.FieldBinding r1 = (com.czhj.wire.FieldBinding) r1
            java.lang.Object r2 = r1.a(r6)
            if (r2 != 0) goto L1d
            goto La
        L1d:
            com.czhj.wire.ProtoAdapter r3 = r1.d()
            int r1 = r1.tag
            r3.encodeWithTag(r5, r1, r2)
            goto La
        L27:
            com.czhj.wire.okio.ByteString r6 = r6.unknownFields()
            r5.writeBytes(r6)
            return
    }

    @Override
    public void encode(com.czhj.wire.ProtoWriter r1, java.lang.Object r2) throws java.io.IOException {
            r0 = this;
            com.czhj.wire.Message r2 = (com.czhj.wire.Message) r2
            r0.encode(r1, r2)
            return
    }

    public int encodedSize(M r6) {
            r5 = this;
            int r0 = r6.cachedSerializedSize
            if (r0 == 0) goto L5
            return r0
        L5:
            r0 = 0
            java.util.Map<java.lang.Integer, com.czhj.wire.FieldBinding<M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message$Builder<M, B>>> r1 = r5.d
            java.util.Collection r1 = r1.values()
            java.util.Iterator r1 = r1.iterator()
        L10:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L2f
            java.lang.Object r2 = r1.next()
            com.czhj.wire.FieldBinding r2 = (com.czhj.wire.FieldBinding) r2
            java.lang.Object r3 = r2.a(r6)
            if (r3 != 0) goto L23
            goto L10
        L23:
            com.czhj.wire.ProtoAdapter r4 = r2.d()
            int r2 = r2.tag
            int r2 = r4.encodedSizeWithTag(r2, r3)
            int r0 = r0 + r2
            goto L10
        L2f:
            com.czhj.wire.okio.ByteString r1 = r6.unknownFields()
            int r1 = r1.size()
            int r0 = r0 + r1
            r6.cachedSerializedSize = r0
            return r0
    }

    @Override
    public int encodedSize(java.lang.Object r1) {
            r0 = this;
            com.czhj.wire.Message r1 = (com.czhj.wire.Message) r1
            int r1 = r0.encodedSize(r1)
            return r1
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.czhj.wire.RuntimeMessageAdapter
            if (r0 == 0) goto Le
            com.czhj.wire.RuntimeMessageAdapter r2 = (com.czhj.wire.RuntimeMessageAdapter) r2
            java.lang.Class<M extends com.czhj.wire.Message<M, B>> r2 = r2.b
            java.lang.Class<M extends com.czhj.wire.Message<M, B>> r0 = r1.b
            if (r2 != r0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    public int hashCode() {
            r1 = this;
            java.lang.Class<M extends com.czhj.wire.Message<M, B>> r0 = r1.b
            int r0 = r0.hashCode()
            return r0
    }

    public M redact(M r5) {
            r4 = this;
            com.czhj.wire.Message$Builder r5 = r5.newBuilder()
            java.util.Map<java.lang.Integer, com.czhj.wire.FieldBinding<M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message$Builder<M, B>>> r0 = r4.d
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L87
            java.lang.Object r1 = r0.next()
            com.czhj.wire.FieldBinding r1 = (com.czhj.wire.FieldBinding) r1
            boolean r2 = r1.redacted
            if (r2 == 0) goto L42
            com.czhj.wire.WireField$Label r2 = r1.label
            com.czhj.wire.WireField$Label r3 = com.czhj.wire.WireField.Label.REQUIRED
            if (r2 == r3) goto L25
            goto L42
        L25:
            java.lang.UnsupportedOperationException r5 = new java.lang.UnsupportedOperationException
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r2 = 0
            java.lang.String r1 = r1.name
            r0[r2] = r1
            r1 = 1
            java.lang.Class<?> r2 = r4.javaType
            java.lang.String r2 = r2.getName()
            r0[r1] = r2
            java.lang.String r1 = "Field '%s' in %s is required and cannot be redacted."
            java.lang.String r0 = java.lang.String.format(r1, r0)
            r5.<init>(r0)
            throw r5
        L42:
            java.lang.Class<com.czhj.wire.Message> r2 = com.czhj.wire.Message.class
            com.czhj.wire.ProtoAdapter r3 = r1.b()
            java.lang.Class<?> r3 = r3.javaType
            boolean r2 = r2.isAssignableFrom(r3)
            boolean r3 = r1.redacted
            if (r3 != 0) goto L75
            if (r2 == 0) goto L5d
            com.czhj.wire.WireField$Label r3 = r1.label
            boolean r3 = r3.a()
            if (r3 != 0) goto L5d
            goto L75
        L5d:
            if (r2 == 0) goto Le
            com.czhj.wire.WireField$Label r2 = r1.label
            boolean r2 = r2.a()
            if (r2 == 0) goto Le
            java.lang.Object r2 = r1.a(r5)
            java.util.List r2 = (java.util.List) r2
            com.czhj.wire.ProtoAdapter r1 = r1.b()
            com.czhj.wire.internal.Internal.redactElements(r2, r1)
            goto Le
        L75:
            java.lang.Object r2 = r1.a(r5)
            if (r2 == 0) goto Le
            com.czhj.wire.ProtoAdapter r3 = r1.d()
            java.lang.Object r2 = r3.redact(r2)
            r1.b(r5, r2)
            goto Le
        L87:
            r5.clearUnknownFields()
            com.czhj.wire.Message r5 = r5.build()
            return r5
    }

    @Override
    public java.lang.Object redact(java.lang.Object r1) {
            r0 = this;
            com.czhj.wire.Message r1 = (com.czhj.wire.Message) r1
            com.czhj.wire.Message r1 = r0.redact(r1)
            return r1
    }

    public java.lang.String toString(M r6) {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.Map<java.lang.Integer, com.czhj.wire.FieldBinding<M extends com.czhj.wire.Message<M, B>, B extends com.czhj.wire.Message$Builder<M, B>>> r1 = r5.d
            java.util.Collection r1 = r1.values()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L3a
            java.lang.Object r2 = r1.next()
            com.czhj.wire.FieldBinding r2 = (com.czhj.wire.FieldBinding) r2
            java.lang.Object r3 = r2.a(r6)
            if (r3 == 0) goto Lf
            java.lang.String r4 = ", "
            r0.append(r4)
            java.lang.String r4 = r2.name
            r0.append(r4)
            r4 = 61
            r0.append(r4)
            boolean r2 = r2.redacted
            if (r2 == 0) goto L36
            java.lang.String r3 = "██"
        L36:
            r0.append(r3)
            goto Lf
        L3a:
            r6 = 0
            r1 = 2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.Class<M extends com.czhj.wire.Message<M, B>> r3 = r5.b
            java.lang.String r3 = r3.getSimpleName()
            r2.append(r3)
            r3 = 123(0x7b, float:1.72E-43)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.replace(r6, r1, r2)
            r6 = 125(0x7d, float:1.75E-43)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            return r6
    }

    @Override
    public java.lang.String toString(java.lang.Object r1) {
            r0 = this;
            com.czhj.wire.Message r1 = (com.czhj.wire.Message) r1
            java.lang.String r1 = r0.toString(r1)
            return r1
    }
}
