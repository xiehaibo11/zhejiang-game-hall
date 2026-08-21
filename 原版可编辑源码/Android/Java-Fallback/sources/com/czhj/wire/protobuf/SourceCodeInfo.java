package com.czhj.wire.protobuf;

public final class SourceCodeInfo extends com.czhj.wire.Message<com.czhj.wire.protobuf.SourceCodeInfo, com.czhj.wire.protobuf.SourceCodeInfo.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.SourceCodeInfo> ADAPTER = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.google.protobuf.SourceCodeInfo$Location#ADAPTER", label = com.czhj.wire.WireField.Label.REPEATED, tag = 1)
    public final java.util.List<com.czhj.wire.protobuf.SourceCodeInfo.Location> location;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.SourceCodeInfo, com.czhj.wire.protobuf.SourceCodeInfo.Builder> {
        public java.util.List<com.czhj.wire.protobuf.SourceCodeInfo.Location> location;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.location = r0
                return
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.wire.protobuf.SourceCodeInfo r0 = r1.build()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.SourceCodeInfo build() {
                r3 = this;
                com.czhj.wire.protobuf.SourceCodeInfo r0 = new com.czhj.wire.protobuf.SourceCodeInfo
                java.util.List<com.czhj.wire.protobuf.SourceCodeInfo$Location> r1 = r3.location
                com.czhj.wire.okio.ByteString r2 = super.buildUnknownFields()
                r0.<init>(r1, r2)
                return r0
        }

        public com.czhj.wire.protobuf.SourceCodeInfo.Builder location(java.util.List<com.czhj.wire.protobuf.SourceCodeInfo.Location> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.location = r1
                return r0
        }
    }

    public static final class Location extends com.czhj.wire.Message<com.czhj.wire.protobuf.SourceCodeInfo.Location, com.czhj.wire.protobuf.SourceCodeInfo.Location.Builder> {
        public static final com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.SourceCodeInfo.Location> ADAPTER = null;
        public static final java.lang.String DEFAULT_LEADING_COMMENTS = "";
        public static final java.lang.String DEFAULT_TRAILING_COMMENTS = "";
        private static final long serialVersionUID = 0;

        @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 3)
        public final java.lang.String leading_comments;

        @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", label = com.czhj.wire.WireField.Label.REPEATED, tag = 6)
        public final java.util.List<java.lang.String> leading_detached_comments;

        @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", label = com.czhj.wire.WireField.Label.PACKED, tag = 1)
        public final java.util.List<java.lang.Integer> path;

        @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#INT32", label = com.czhj.wire.WireField.Label.PACKED, tag = 2)
        public final java.util.List<java.lang.Integer> span;

        @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 4)
        public final java.lang.String trailing_comments;

        public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.wire.protobuf.SourceCodeInfo.Location, com.czhj.wire.protobuf.SourceCodeInfo.Location.Builder> {
            public java.lang.String leading_comments;
            public java.util.List<java.lang.String> leading_detached_comments;
            public java.util.List<java.lang.Integer> path;
            public java.util.List<java.lang.Integer> span;
            public java.lang.String trailing_comments;

            public Builder() {
                    r1 = this;
                    r1.<init>()
                    java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                    r1.path = r0
                    java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                    r1.span = r0
                    java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                    r1.leading_detached_comments = r0
                    return
            }

            @Override
            public com.czhj.wire.Message build() {
                    r1 = this;
                    com.czhj.wire.protobuf.SourceCodeInfo$Location r0 = r1.build()
                    return r0
            }

            @Override
            public com.czhj.wire.protobuf.SourceCodeInfo.Location build() {
                    r8 = this;
                    com.czhj.wire.protobuf.SourceCodeInfo$Location r7 = new com.czhj.wire.protobuf.SourceCodeInfo$Location
                    java.util.List<java.lang.Integer> r1 = r8.path
                    java.util.List<java.lang.Integer> r2 = r8.span
                    java.lang.String r3 = r8.leading_comments
                    java.lang.String r4 = r8.trailing_comments
                    java.util.List<java.lang.String> r5 = r8.leading_detached_comments
                    com.czhj.wire.okio.ByteString r6 = super.buildUnknownFields()
                    r0 = r7
                    r0.<init>(r1, r2, r3, r4, r5, r6)
                    return r7
            }

            public com.czhj.wire.protobuf.SourceCodeInfo.Location.Builder leading_comments(java.lang.String r1) {
                    r0 = this;
                    r0.leading_comments = r1
                    return r0
            }

            public com.czhj.wire.protobuf.SourceCodeInfo.Location.Builder leading_detached_comments(java.util.List<java.lang.String> r1) {
                    r0 = this;
                    com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                    r0.leading_detached_comments = r1
                    return r0
            }

            public com.czhj.wire.protobuf.SourceCodeInfo.Location.Builder path(java.util.List<java.lang.Integer> r1) {
                    r0 = this;
                    com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                    r0.path = r1
                    return r0
            }

            public com.czhj.wire.protobuf.SourceCodeInfo.Location.Builder span(java.util.List<java.lang.Integer> r1) {
                    r0 = this;
                    com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                    r0.span = r1
                    return r0
            }

            public com.czhj.wire.protobuf.SourceCodeInfo.Location.Builder trailing_comments(java.lang.String r1) {
                    r0 = this;
                    r0.trailing_comments = r1
                    return r0
            }
        }

        private static final class ProtoAdapter_Location extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.SourceCodeInfo.Location> {
            public ProtoAdapter_Location() {
                    r2 = this;
                    com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                    java.lang.Class<com.czhj.wire.protobuf.SourceCodeInfo$Location> r1 = com.czhj.wire.protobuf.SourceCodeInfo.Location.class
                    r2.<init>(r0, r1)
                    return
            }

            @Override
            public com.czhj.wire.protobuf.SourceCodeInfo.Location decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                    r6 = this;
                    com.czhj.wire.protobuf.SourceCodeInfo$Location$Builder r0 = new com.czhj.wire.protobuf.SourceCodeInfo$Location$Builder
                    r0.<init>()
                    long r1 = r7.beginMessage()
                L9:
                    int r3 = r7.nextTag()
                    r4 = -1
                    if (r3 == r4) goto L5b
                    r4 = 1
                    if (r3 == r4) goto L4f
                    r4 = 2
                    if (r3 == r4) goto L4c
                    r4 = 3
                    if (r3 == r4) goto L40
                    r4 = 4
                    if (r3 == r4) goto L34
                    r4 = 6
                    if (r3 == r4) goto L2f
                    com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                    com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                    java.lang.Object r5 = r5.decode(r7)
                    r0.addUnknownField(r3, r4, r5)
                    goto L9
                L2f:
                    java.util.List<java.lang.String> r3 = r0.leading_detached_comments
                    com.czhj.wire.ProtoAdapter<java.lang.String> r4 = com.czhj.wire.ProtoAdapter.STRING
                    goto L53
                L34:
                    com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                    java.lang.Object r3 = r3.decode(r7)
                    java.lang.String r3 = (java.lang.String) r3
                    r0.trailing_comments(r3)
                    goto L9
                L40:
                    com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                    java.lang.Object r3 = r3.decode(r7)
                    java.lang.String r3 = (java.lang.String) r3
                    r0.leading_comments(r3)
                    goto L9
                L4c:
                    java.util.List<java.lang.Integer> r3 = r0.span
                    goto L51
                L4f:
                    java.util.List<java.lang.Integer> r3 = r0.path
                L51:
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r4 = com.czhj.wire.ProtoAdapter.INT32
                L53:
                    java.lang.Object r4 = r4.decode(r7)
                    r3.add(r4)
                    goto L9
                L5b:
                    r7.endMessage(r1)
                    com.czhj.wire.protobuf.SourceCodeInfo$Location r7 = r0.build()
                    return r7
            }

            @Override
            public com.czhj.wire.protobuf.SourceCodeInfo.Location decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                    r0 = this;
                    com.czhj.wire.protobuf.SourceCodeInfo$Location r1 = r0.decode(r1)
                    return r1
            }

            public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.SourceCodeInfo.Location r5) throws java.io.IOException {
                    r3 = this;
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                    com.czhj.wire.ProtoAdapter r0 = r0.asPacked()
                    java.util.List<java.lang.Integer> r1 = r5.path
                    r2 = 1
                    r0.encodeWithTag(r4, r2, r1)
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                    com.czhj.wire.ProtoAdapter r0 = r0.asPacked()
                    java.util.List<java.lang.Integer> r1 = r5.span
                    r2 = 2
                    r0.encodeWithTag(r4, r2, r1)
                    com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                    java.lang.String r1 = r5.leading_comments
                    r2 = 3
                    r0.encodeWithTag(r4, r2, r1)
                    com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                    java.lang.String r1 = r5.trailing_comments
                    r2 = 4
                    r0.encodeWithTag(r4, r2, r1)
                    com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                    com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                    java.util.List<java.lang.String> r1 = r5.leading_detached_comments
                    r2 = 6
                    r0.encodeWithTag(r4, r2, r1)
                    com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                    r4.writeBytes(r5)
                    return
            }

            @Override
            public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.SourceCodeInfo.Location r2) throws java.io.IOException {
                    r0 = this;
                    com.czhj.wire.protobuf.SourceCodeInfo$Location r2 = (com.czhj.wire.protobuf.SourceCodeInfo.Location) r2
                    r0.encode(r1, r2)
                    return
            }

            public int encodedSize(com.czhj.wire.protobuf.SourceCodeInfo.Location r5) {
                    r4 = this;
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.INT32
                    com.czhj.wire.ProtoAdapter r0 = r0.asPacked()
                    java.util.List<java.lang.Integer> r1 = r5.path
                    r2 = 1
                    int r0 = r0.encodedSizeWithTag(r2, r1)
                    com.czhj.wire.ProtoAdapter<java.lang.Integer> r1 = com.czhj.wire.ProtoAdapter.INT32
                    com.czhj.wire.ProtoAdapter r1 = r1.asPacked()
                    java.util.List<java.lang.Integer> r2 = r5.span
                    r3 = 2
                    int r1 = r1.encodedSizeWithTag(r3, r2)
                    int r0 = r0 + r1
                    com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                    java.lang.String r2 = r5.leading_comments
                    r3 = 3
                    int r1 = r1.encodedSizeWithTag(r3, r2)
                    int r0 = r0 + r1
                    com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                    java.lang.String r2 = r5.trailing_comments
                    r3 = 4
                    int r1 = r1.encodedSizeWithTag(r3, r2)
                    int r0 = r0 + r1
                    com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                    com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                    java.util.List<java.lang.String> r2 = r5.leading_detached_comments
                    r3 = 6
                    int r1 = r1.encodedSizeWithTag(r3, r2)
                    int r0 = r0 + r1
                    com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                    int r5 = r5.size()
                    int r0 = r0 + r5
                    return r0
            }

            @Override
            public int encodedSize(com.czhj.wire.protobuf.SourceCodeInfo.Location r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.SourceCodeInfo$Location r1 = (com.czhj.wire.protobuf.SourceCodeInfo.Location) r1
                    int r1 = r0.encodedSize(r1)
                    return r1
            }

            public com.czhj.wire.protobuf.SourceCodeInfo.Location redact(com.czhj.wire.protobuf.SourceCodeInfo.Location r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.SourceCodeInfo$Location$Builder r1 = r1.newBuilder()
                    r1.clearUnknownFields()
                    com.czhj.wire.protobuf.SourceCodeInfo$Location r1 = r1.build()
                    return r1
            }

            @Override
            public com.czhj.wire.protobuf.SourceCodeInfo.Location redact(com.czhj.wire.protobuf.SourceCodeInfo.Location r1) {
                    r0 = this;
                    com.czhj.wire.protobuf.SourceCodeInfo$Location r1 = (com.czhj.wire.protobuf.SourceCodeInfo.Location) r1
                    com.czhj.wire.protobuf.SourceCodeInfo$Location r1 = r0.redact(r1)
                    return r1
            }
        }

        static {
                com.czhj.wire.protobuf.SourceCodeInfo$Location$ProtoAdapter_Location r0 = new com.czhj.wire.protobuf.SourceCodeInfo$Location$ProtoAdapter_Location
                r0.<init>()
                com.czhj.wire.protobuf.SourceCodeInfo.Location.ADAPTER = r0
                return
        }

        public Location(java.util.List<java.lang.Integer> r8, java.util.List<java.lang.Integer> r9, java.lang.String r10, java.lang.String r11, java.util.List<java.lang.String> r12) {
                r7 = this;
                com.czhj.wire.okio.ByteString r6 = com.czhj.wire.okio.ByteString.EMPTY
                r0 = r7
                r1 = r8
                r2 = r9
                r3 = r10
                r4 = r11
                r5 = r12
                r0.<init>(r1, r2, r3, r4, r5, r6)
                return
        }

        public Location(java.util.List<java.lang.Integer> r2, java.util.List<java.lang.Integer> r3, java.lang.String r4, java.lang.String r5, java.util.List<java.lang.String> r6, com.czhj.wire.okio.ByteString r7) {
                r1 = this;
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.SourceCodeInfo$Location> r0 = com.czhj.wire.protobuf.SourceCodeInfo.Location.ADAPTER
                r1.<init>(r0, r7)
                java.lang.String r7 = "path"
                java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r7, r2)
                r1.path = r2
                java.lang.String r2 = "span"
                java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r3)
                r1.span = r2
                r1.leading_comments = r4
                r1.trailing_comments = r5
                java.lang.String r2 = "leading_detached_comments"
                java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r6)
                r1.leading_detached_comments = r2
                return
        }

        public boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r5 != r4) goto L4
                return r0
            L4:
                boolean r1 = r5 instanceof com.czhj.wire.protobuf.SourceCodeInfo.Location
                r2 = 0
                if (r1 != 0) goto La
                return r2
            La:
                com.czhj.wire.protobuf.SourceCodeInfo$Location r5 = (com.czhj.wire.protobuf.SourceCodeInfo.Location) r5
                com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
                com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
                boolean r1 = r1.equals(r3)
                if (r1 == 0) goto L4d
                java.util.List<java.lang.Integer> r1 = r4.path
                java.util.List<java.lang.Integer> r3 = r5.path
                boolean r1 = r1.equals(r3)
                if (r1 == 0) goto L4d
                java.util.List<java.lang.Integer> r1 = r4.span
                java.util.List<java.lang.Integer> r3 = r5.span
                boolean r1 = r1.equals(r3)
                if (r1 == 0) goto L4d
                java.lang.String r1 = r4.leading_comments
                java.lang.String r3 = r5.leading_comments
                boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
                if (r1 == 0) goto L4d
                java.lang.String r1 = r4.trailing_comments
                java.lang.String r3 = r5.trailing_comments
                boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
                if (r1 == 0) goto L4d
                java.util.List<java.lang.String> r1 = r4.leading_detached_comments
                java.util.List<java.lang.String> r5 = r5.leading_detached_comments
                boolean r5 = r1.equals(r5)
                if (r5 == 0) goto L4d
                goto L4e
            L4d:
                r0 = r2
            L4e:
                return r0
        }

        public int hashCode() {
                r3 = this;
                int r0 = r3.hashCode
                if (r0 != 0) goto L42
                com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
                int r0 = r0.hashCode()
                int r0 = r0 * 37
                java.util.List<java.lang.Integer> r1 = r3.path
                int r1 = r1.hashCode()
                int r0 = r0 + r1
                int r0 = r0 * 37
                java.util.List<java.lang.Integer> r1 = r3.span
                int r1 = r1.hashCode()
                int r0 = r0 + r1
                int r0 = r0 * 37
                java.lang.String r1 = r3.leading_comments
                r2 = 0
                if (r1 == 0) goto L2a
                int r1 = r1.hashCode()
                goto L2b
            L2a:
                r1 = r2
            L2b:
                int r0 = r0 + r1
                int r0 = r0 * 37
                java.lang.String r1 = r3.trailing_comments
                if (r1 == 0) goto L36
                int r2 = r1.hashCode()
            L36:
                int r0 = r0 + r2
                int r0 = r0 * 37
                java.util.List<java.lang.String> r1 = r3.leading_detached_comments
                int r1 = r1.hashCode()
                int r0 = r0 + r1
                r3.hashCode = r0
            L42:
                return r0
        }

        @Override
        public com.czhj.wire.Message.Builder newBuilder() {
                r1 = this;
                com.czhj.wire.protobuf.SourceCodeInfo$Location$Builder r0 = r1.newBuilder()
                return r0
        }

        @Override
        public com.czhj.wire.protobuf.SourceCodeInfo.Location.Builder newBuilder() {
                r3 = this;
                com.czhj.wire.protobuf.SourceCodeInfo$Location$Builder r0 = new com.czhj.wire.protobuf.SourceCodeInfo$Location$Builder
                r0.<init>()
                java.util.List<java.lang.Integer> r1 = r3.path
                java.lang.String r2 = "path"
                java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
                r0.path = r1
                java.util.List<java.lang.Integer> r1 = r3.span
                java.lang.String r2 = "span"
                java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
                r0.span = r1
                java.lang.String r1 = r3.leading_comments
                r0.leading_comments = r1
                java.lang.String r1 = r3.trailing_comments
                r0.trailing_comments = r1
                java.util.List<java.lang.String> r1 = r3.leading_detached_comments
                java.lang.String r2 = "leading_detached_comments"
                java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
                r0.leading_detached_comments = r1
                com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
                r0.addUnknownFields(r1)
                return r0
        }

        @Override
        public java.lang.String toString() {
                r4 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.util.List<java.lang.Integer> r1 = r4.path
                boolean r1 = r1.isEmpty()
                if (r1 != 0) goto L17
                java.lang.String r1 = ", path="
                r0.append(r1)
                java.util.List<java.lang.Integer> r1 = r4.path
                r0.append(r1)
            L17:
                java.util.List<java.lang.Integer> r1 = r4.span
                boolean r1 = r1.isEmpty()
                if (r1 != 0) goto L29
                java.lang.String r1 = ", span="
                r0.append(r1)
                java.util.List<java.lang.Integer> r1 = r4.span
                r0.append(r1)
            L29:
                java.lang.String r1 = r4.leading_comments
                if (r1 == 0) goto L37
                java.lang.String r1 = ", leading_comments="
                r0.append(r1)
                java.lang.String r1 = r4.leading_comments
                r0.append(r1)
            L37:
                java.lang.String r1 = r4.trailing_comments
                if (r1 == 0) goto L45
                java.lang.String r1 = ", trailing_comments="
                r0.append(r1)
                java.lang.String r1 = r4.trailing_comments
                r0.append(r1)
            L45:
                java.util.List<java.lang.String> r1 = r4.leading_detached_comments
                boolean r1 = r1.isEmpty()
                if (r1 != 0) goto L57
                java.lang.String r1 = ", leading_detached_comments="
                r0.append(r1)
                java.util.List<java.lang.String> r1 = r4.leading_detached_comments
                r0.append(r1)
            L57:
                r1 = 0
                r2 = 2
                java.lang.String r3 = "Location{"
                java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    private static final class ProtoAdapter_SourceCodeInfo extends com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.SourceCodeInfo> {
        public ProtoAdapter_SourceCodeInfo() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.wire.protobuf.SourceCodeInfo> r1 = com.czhj.wire.protobuf.SourceCodeInfo.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.wire.protobuf.SourceCodeInfo decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.wire.protobuf.SourceCodeInfo$Builder r0 = new com.czhj.wire.protobuf.SourceCodeInfo$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L2f
                r4 = 1
                if (r3 == r4) goto L23
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                java.util.List<com.czhj.wire.protobuf.SourceCodeInfo$Location> r3 = r0.location
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.SourceCodeInfo$Location> r4 = com.czhj.wire.protobuf.SourceCodeInfo.Location.ADAPTER
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L2f:
                r7.endMessage(r1)
                com.czhj.wire.protobuf.SourceCodeInfo r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.wire.protobuf.SourceCodeInfo decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.SourceCodeInfo r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.wire.protobuf.SourceCodeInfo r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.SourceCodeInfo$Location> r0 = com.czhj.wire.protobuf.SourceCodeInfo.Location.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.SourceCodeInfo$Location> r1 = r5.location
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.wire.protobuf.SourceCodeInfo r2) throws java.io.IOException {
                r0 = this;
                com.czhj.wire.protobuf.SourceCodeInfo r2 = (com.czhj.wire.protobuf.SourceCodeInfo) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.wire.protobuf.SourceCodeInfo r4) {
                r3 = this;
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.SourceCodeInfo$Location> r0 = com.czhj.wire.protobuf.SourceCodeInfo.Location.ADAPTER
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<com.czhj.wire.protobuf.SourceCodeInfo$Location> r1 = r4.location
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.okio.ByteString r4 = r4.unknownFields()
                int r4 = r4.size()
                int r0 = r0 + r4
                return r0
        }

        @Override
        public int encodedSize(com.czhj.wire.protobuf.SourceCodeInfo r1) {
                r0 = this;
                com.czhj.wire.protobuf.SourceCodeInfo r1 = (com.czhj.wire.protobuf.SourceCodeInfo) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.wire.protobuf.SourceCodeInfo redact(com.czhj.wire.protobuf.SourceCodeInfo r3) {
                r2 = this;
                com.czhj.wire.protobuf.SourceCodeInfo$Builder r3 = r3.newBuilder()
                java.util.List<com.czhj.wire.protobuf.SourceCodeInfo$Location> r0 = r3.location
                com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.SourceCodeInfo$Location> r1 = com.czhj.wire.protobuf.SourceCodeInfo.Location.ADAPTER
                com.czhj.wire.internal.Internal.redactElements(r0, r1)
                r3.clearUnknownFields()
                com.czhj.wire.protobuf.SourceCodeInfo r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.wire.protobuf.SourceCodeInfo redact(com.czhj.wire.protobuf.SourceCodeInfo r1) {
                r0 = this;
                com.czhj.wire.protobuf.SourceCodeInfo r1 = (com.czhj.wire.protobuf.SourceCodeInfo) r1
                com.czhj.wire.protobuf.SourceCodeInfo r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.wire.protobuf.SourceCodeInfo$ProtoAdapter_SourceCodeInfo r0 = new com.czhj.wire.protobuf.SourceCodeInfo$ProtoAdapter_SourceCodeInfo
            r0.<init>()
            com.czhj.wire.protobuf.SourceCodeInfo.ADAPTER = r0
            return
    }

    public SourceCodeInfo(java.util.List<com.czhj.wire.protobuf.SourceCodeInfo.Location> r2) {
            r1 = this;
            com.czhj.wire.okio.ByteString r0 = com.czhj.wire.okio.ByteString.EMPTY
            r1.<init>(r2, r0)
            return
    }

    public SourceCodeInfo(java.util.List<com.czhj.wire.protobuf.SourceCodeInfo.Location> r2, com.czhj.wire.okio.ByteString r3) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.wire.protobuf.SourceCodeInfo> r0 = com.czhj.wire.protobuf.SourceCodeInfo.ADAPTER
            r1.<init>(r0, r3)
            java.lang.String r3 = "location"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r3, r2)
            r1.location = r2
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.wire.protobuf.SourceCodeInfo
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.wire.protobuf.SourceCodeInfo r5 = (com.czhj.wire.protobuf.SourceCodeInfo) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L25
            java.util.List<com.czhj.wire.protobuf.SourceCodeInfo$Location> r1 = r4.location
            java.util.List<com.czhj.wire.protobuf.SourceCodeInfo$Location> r5 = r5.location
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L25
            goto L26
        L25:
            r0 = r2
        L26:
            return r0
    }

    public int hashCode() {
            r2 = this;
            int r0 = r2.hashCode
            if (r0 != 0) goto L17
            com.czhj.wire.okio.ByteString r0 = r2.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.util.List<com.czhj.wire.protobuf.SourceCodeInfo$Location> r1 = r2.location
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            r2.hashCode = r0
        L17:
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.wire.protobuf.SourceCodeInfo$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public com.czhj.wire.protobuf.SourceCodeInfo.Builder newBuilder() {
            r3 = this;
            com.czhj.wire.protobuf.SourceCodeInfo$Builder r0 = new com.czhj.wire.protobuf.SourceCodeInfo$Builder
            r0.<init>()
            java.util.List<com.czhj.wire.protobuf.SourceCodeInfo$Location> r1 = r3.location
            java.lang.String r2 = "location"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.location = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.util.List<com.czhj.wire.protobuf.SourceCodeInfo$Location> r1 = r4.location
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L17
            java.lang.String r1 = ", location="
            r0.append(r1)
            java.util.List<com.czhj.wire.protobuf.SourceCodeInfo$Location> r1 = r4.location
            r0.append(r1)
        L17:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "SourceCodeInfo{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
