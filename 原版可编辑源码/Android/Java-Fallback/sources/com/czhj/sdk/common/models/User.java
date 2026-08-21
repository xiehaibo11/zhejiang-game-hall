package com.czhj.sdk.common.models;

public final class User extends com.czhj.wire.AndroidMessage<com.czhj.sdk.common.models.User, com.czhj.sdk.common.models.User.Builder> {
    public static final com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.User> ADAPTER = null;
    public static final android.os.Parcelable.Creator<com.czhj.sdk.common.models.User> CREATOR = null;
    public static final java.lang.Boolean DEFAULT_CHANGE_RECOMMENDATION_STATE = null;
    public static final java.lang.Boolean DEFAULT_DISABLE_PERSONALIZED_RECOMMENDATION = null;
    public static final java.lang.String DEFAULT_GENDER = "";
    public static final java.lang.Boolean DEFAULT_IS_MINOR = null;
    public static final java.lang.Integer DEFAULT_YOB = null;
    private static final long serialVersionUID = 0;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", label = com.czhj.wire.WireField.Label.REPEATED, tag = 3)
    public final java.util.List<java.lang.String> app_list;

    @com.czhj.wire.WireField(adapter = "Version#ADAPTER", tag = 5)
    public final com.czhj.sdk.common.models.Version app_market_version;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 9)
    public final java.lang.Boolean change_recommendation_state;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 8)
    public final java.lang.Boolean disable_personalized_recommendation;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", tag = 2)
    public final java.lang.String gender;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#BOOL", tag = 7)
    public final java.lang.Boolean is_minor;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#STRING", label = com.czhj.wire.WireField.Label.REPEATED, tag = 4)
    public final java.util.List<java.lang.String> user_strategy;

    @com.czhj.wire.WireField(adapter = "com.squareup.wire.ProtoAdapter#UINT32", tag = 1)
    public final java.lang.Integer yob;

    public static final class Builder extends com.czhj.wire.Message.Builder<com.czhj.sdk.common.models.User, com.czhj.sdk.common.models.User.Builder> {
        public java.util.List<java.lang.String> app_list;
        public com.czhj.sdk.common.models.Version app_market_version;
        public java.lang.Boolean change_recommendation_state;
        public java.lang.Boolean disable_personalized_recommendation;
        public java.lang.String gender;
        public java.lang.Boolean is_minor;
        public java.util.List<java.lang.String> user_strategy;
        public java.lang.Integer yob;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.lang.Integer r0 = com.czhj.sdk.common.models.User.DEFAULT_YOB
                r1.yob = r0
                java.lang.String r0 = ""
                r1.gender = r0
                java.lang.Boolean r0 = com.czhj.sdk.common.models.User.DEFAULT_IS_MINOR
                r1.is_minor = r0
                java.lang.Boolean r0 = com.czhj.sdk.common.models.User.DEFAULT_DISABLE_PERSONALIZED_RECOMMENDATION
                r1.disable_personalized_recommendation = r0
                java.lang.Boolean r0 = com.czhj.sdk.common.models.User.DEFAULT_CHANGE_RECOMMENDATION_STATE
                r1.change_recommendation_state = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.app_list = r0
                java.util.List r0 = com.czhj.wire.internal.Internal.newMutableList()
                r1.user_strategy = r0
                return
        }

        public com.czhj.sdk.common.models.User.Builder app_list(java.util.List<java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.app_list = r1
                return r0
        }

        public com.czhj.sdk.common.models.User.Builder app_market_version(com.czhj.sdk.common.models.Version r1) {
                r0 = this;
                r0.app_market_version = r1
                return r0
        }

        @Override
        public com.czhj.sdk.common.models.User build() {
                r11 = this;
                com.czhj.sdk.common.models.User r10 = new com.czhj.sdk.common.models.User
                java.lang.Integer r1 = r11.yob
                java.lang.String r2 = r11.gender
                java.util.List<java.lang.String> r3 = r11.app_list
                java.util.List<java.lang.String> r4 = r11.user_strategy
                com.czhj.sdk.common.models.Version r5 = r11.app_market_version
                java.lang.Boolean r6 = r11.is_minor
                java.lang.Boolean r7 = r11.disable_personalized_recommendation
                java.lang.Boolean r8 = r11.change_recommendation_state
                com.czhj.wire.okio.ByteString r9 = super.buildUnknownFields()
                r0 = r10
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9)
                return r10
        }

        @Override
        public com.czhj.wire.Message build() {
                r1 = this;
                com.czhj.sdk.common.models.User r0 = r1.build()
                return r0
        }

        public com.czhj.sdk.common.models.User.Builder change_recommendation_state(java.lang.Boolean r1) {
                r0 = this;
                r0.change_recommendation_state = r1
                return r0
        }

        public com.czhj.sdk.common.models.User.Builder disable_personalized_recommendation(java.lang.Boolean r1) {
                r0 = this;
                r0.disable_personalized_recommendation = r1
                return r0
        }

        public com.czhj.sdk.common.models.User.Builder gender(java.lang.String r1) {
                r0 = this;
                r0.gender = r1
                return r0
        }

        public com.czhj.sdk.common.models.User.Builder is_minor(java.lang.Boolean r1) {
                r0 = this;
                r0.is_minor = r1
                return r0
        }

        public com.czhj.sdk.common.models.User.Builder user_strategy(java.util.List<java.lang.String> r1) {
                r0 = this;
                com.czhj.wire.internal.Internal.checkElementsNotNull(r1)
                r0.user_strategy = r1
                return r0
        }

        public com.czhj.sdk.common.models.User.Builder yob(java.lang.Integer r1) {
                r0 = this;
                r0.yob = r1
                return r0
        }
    }

    private static final class ProtoAdapter_User extends com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.User> {
        public ProtoAdapter_User() {
                r2 = this;
                com.czhj.wire.FieldEncoding r0 = com.czhj.wire.FieldEncoding.LENGTH_DELIMITED
                java.lang.Class<com.czhj.sdk.common.models.User> r1 = com.czhj.sdk.common.models.User.class
                r2.<init>(r0, r1)
                return
        }

        @Override
        public com.czhj.sdk.common.models.User decode(com.czhj.wire.ProtoReader r7) throws java.io.IOException {
                r6 = this;
                com.czhj.sdk.common.models.User$Builder r0 = new com.czhj.sdk.common.models.User$Builder
                r0.<init>()
                long r1 = r7.beginMessage()
            L9:
                int r3 = r7.nextTag()
                r4 = -1
                if (r3 == r4) goto L7a
                switch(r3) {
                    case 1: goto L6e;
                    case 2: goto L62;
                    case 3: goto L56;
                    case 4: goto L53;
                    case 5: goto L47;
                    case 6: goto L13;
                    case 7: goto L3b;
                    case 8: goto L2f;
                    case 9: goto L23;
                    default: goto L13;
                }
            L13:
                com.czhj.wire.FieldEncoding r4 = r7.peekFieldEncoding()
                com.czhj.wire.ProtoAdapter r5 = r4.rawProtoAdapter()
                java.lang.Object r5 = r5.decode(r7)
                r0.addUnknownField(r3, r4, r5)
                goto L9
            L23:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.change_recommendation_state(r3)
                goto L9
            L2f:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.disable_personalized_recommendation(r3)
                goto L9
            L3b:
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r3 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Boolean r3 = (java.lang.Boolean) r3
                r0.is_minor(r3)
                goto L9
            L47:
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r3 = com.czhj.sdk.common.models.Version.ADAPTER
                java.lang.Object r3 = r3.decode(r7)
                com.czhj.sdk.common.models.Version r3 = (com.czhj.sdk.common.models.Version) r3
                r0.app_market_version(r3)
                goto L9
            L53:
                java.util.List<java.lang.String> r3 = r0.user_strategy
                goto L58
            L56:
                java.util.List<java.lang.String> r3 = r0.app_list
            L58:
                com.czhj.wire.ProtoAdapter<java.lang.String> r4 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r4 = r4.decode(r7)
                r3.add(r4)
                goto L9
            L62:
                com.czhj.wire.ProtoAdapter<java.lang.String> r3 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.Object r3 = r3.decode(r7)
                java.lang.String r3 = (java.lang.String) r3
                r0.gender(r3)
                goto L9
            L6e:
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r3 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Object r3 = r3.decode(r7)
                java.lang.Integer r3 = (java.lang.Integer) r3
                r0.yob(r3)
                goto L9
            L7a:
                r7.endMessage(r1)
                com.czhj.sdk.common.models.User r7 = r0.build()
                return r7
        }

        @Override
        public com.czhj.sdk.common.models.User decode(com.czhj.wire.ProtoReader r1) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.User r1 = r0.decode(r1)
                return r1
        }

        public void encode(com.czhj.wire.ProtoWriter r4, com.czhj.sdk.common.models.User r5) throws java.io.IOException {
                r3 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.yob
                r2 = 1
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r1 = r5.gender
                r2 = 2
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.String> r1 = r5.app_list
                r2 = 3
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r0 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r0 = r0.asRepeated()
                java.util.List<java.lang.String> r1 = r5.user_strategy
                r2 = 4
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r0 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r1 = r5.app_market_version
                r2 = 5
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.is_minor
                r2 = 7
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.disable_personalized_recommendation
                r2 = 8
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r0 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r1 = r5.change_recommendation_state
                r2 = 9
                r0.encodeWithTag(r4, r2, r1)
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                r4.writeBytes(r5)
                return
        }

        @Override
        public void encode(com.czhj.wire.ProtoWriter r1, com.czhj.sdk.common.models.User r2) throws java.io.IOException {
                r0 = this;
                com.czhj.sdk.common.models.User r2 = (com.czhj.sdk.common.models.User) r2
                r0.encode(r1, r2)
                return
        }

        public int encodedSize(com.czhj.sdk.common.models.User r5) {
                r4 = this;
                com.czhj.wire.ProtoAdapter<java.lang.Integer> r0 = com.czhj.wire.ProtoAdapter.UINT32
                java.lang.Integer r1 = r5.yob
                r2 = 1
                int r0 = r0.encodedSizeWithTag(r2, r1)
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                java.lang.String r2 = r5.gender
                r3 = 2
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.String> r2 = r5.app_list
                r3 = 3
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.String> r1 = com.czhj.wire.ProtoAdapter.STRING
                com.czhj.wire.ProtoAdapter r1 = r1.asRepeated()
                java.util.List<java.lang.String> r2 = r5.user_strategy
                r3 = 4
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r1 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r2 = r5.app_market_version
                r3 = 5
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.is_minor
                r3 = 7
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.disable_personalized_recommendation
                r3 = 8
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.ProtoAdapter<java.lang.Boolean> r1 = com.czhj.wire.ProtoAdapter.BOOL
                java.lang.Boolean r2 = r5.change_recommendation_state
                r3 = 9
                int r1 = r1.encodedSizeWithTag(r3, r2)
                int r0 = r0 + r1
                com.czhj.wire.okio.ByteString r5 = r5.unknownFields()
                int r5 = r5.size()
                int r0 = r0 + r5
                return r0
        }

        @Override
        public int encodedSize(com.czhj.sdk.common.models.User r1) {
                r0 = this;
                com.czhj.sdk.common.models.User r1 = (com.czhj.sdk.common.models.User) r1
                int r1 = r0.encodedSize(r1)
                return r1
        }

        public com.czhj.sdk.common.models.User redact(com.czhj.sdk.common.models.User r3) {
                r2 = this;
                com.czhj.sdk.common.models.User$Builder r3 = r3.newBuilder()
                com.czhj.sdk.common.models.Version r0 = r3.app_market_version
                if (r0 == 0) goto L14
                com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.Version> r0 = com.czhj.sdk.common.models.Version.ADAPTER
                com.czhj.sdk.common.models.Version r1 = r3.app_market_version
                java.lang.Object r0 = r0.redact(r1)
                com.czhj.sdk.common.models.Version r0 = (com.czhj.sdk.common.models.Version) r0
                r3.app_market_version = r0
            L14:
                r3.clearUnknownFields()
                com.czhj.sdk.common.models.User r3 = r3.build()
                return r3
        }

        @Override
        public com.czhj.sdk.common.models.User redact(com.czhj.sdk.common.models.User r1) {
                r0 = this;
                com.czhj.sdk.common.models.User r1 = (com.czhj.sdk.common.models.User) r1
                com.czhj.sdk.common.models.User r1 = r0.redact(r1)
                return r1
        }
    }

    static {
            com.czhj.sdk.common.models.User$ProtoAdapter_User r0 = new com.czhj.sdk.common.models.User$ProtoAdapter_User
            r0.<init>()
            com.czhj.sdk.common.models.User.ADAPTER = r0
            android.os.Parcelable$Creator r0 = com.czhj.wire.AndroidMessage.newCreator(r0)
            com.czhj.sdk.common.models.User.CREATOR = r0
            r0 = 0
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.czhj.sdk.common.models.User.DEFAULT_YOB = r0
            com.czhj.sdk.common.models.User.DEFAULT_IS_MINOR = r1
            com.czhj.sdk.common.models.User.DEFAULT_DISABLE_PERSONALIZED_RECOMMENDATION = r1
            com.czhj.sdk.common.models.User.DEFAULT_CHANGE_RECOMMENDATION_STATE = r1
            return
    }

    public User(java.lang.Integer r11, java.lang.String r12, java.util.List<java.lang.String> r13, java.util.List<java.lang.String> r14, com.czhj.sdk.common.models.Version r15, java.lang.Boolean r16, java.lang.Boolean r17, java.lang.Boolean r18) {
            r10 = this;
            com.czhj.wire.okio.ByteString r9 = com.czhj.wire.okio.ByteString.EMPTY
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r17
            r8 = r18
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return
    }

    public User(java.lang.Integer r2, java.lang.String r3, java.util.List<java.lang.String> r4, java.util.List<java.lang.String> r5, com.czhj.sdk.common.models.Version r6, java.lang.Boolean r7, java.lang.Boolean r8, java.lang.Boolean r9, com.czhj.wire.okio.ByteString r10) {
            r1 = this;
            com.czhj.wire.ProtoAdapter<com.czhj.sdk.common.models.User> r0 = com.czhj.sdk.common.models.User.ADAPTER
            r1.<init>(r0, r10)
            r1.yob = r2
            r1.gender = r3
            java.lang.String r2 = "app_list"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r4)
            r1.app_list = r2
            java.lang.String r2 = "user_strategy"
            java.util.List r2 = com.czhj.wire.internal.Internal.immutableCopyOf(r2, r5)
            r1.user_strategy = r2
            r1.app_market_version = r6
            r1.is_minor = r7
            r1.disable_personalized_recommendation = r8
            r1.change_recommendation_state = r9
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof com.czhj.sdk.common.models.User
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.czhj.sdk.common.models.User r5 = (com.czhj.sdk.common.models.User) r5
            com.czhj.wire.okio.ByteString r1 = r4.unknownFields()
            com.czhj.wire.okio.ByteString r3 = r5.unknownFields()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L6b
            java.lang.Integer r1 = r4.yob
            java.lang.Integer r3 = r5.yob
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L6b
            java.lang.String r1 = r4.gender
            java.lang.String r3 = r5.gender
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L6b
            java.util.List<java.lang.String> r1 = r4.app_list
            java.util.List<java.lang.String> r3 = r5.app_list
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L6b
            java.util.List<java.lang.String> r1 = r4.user_strategy
            java.util.List<java.lang.String> r3 = r5.user_strategy
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L6b
            com.czhj.sdk.common.models.Version r1 = r4.app_market_version
            com.czhj.sdk.common.models.Version r3 = r5.app_market_version
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L6b
            java.lang.Boolean r1 = r4.is_minor
            java.lang.Boolean r3 = r5.is_minor
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L6b
            java.lang.Boolean r1 = r4.disable_personalized_recommendation
            java.lang.Boolean r3 = r5.disable_personalized_recommendation
            boolean r1 = com.czhj.wire.internal.Internal.equals(r1, r3)
            if (r1 == 0) goto L6b
            java.lang.Boolean r1 = r4.change_recommendation_state
            java.lang.Boolean r5 = r5.change_recommendation_state
            boolean r5 = com.czhj.wire.internal.Internal.equals(r1, r5)
            if (r5 == 0) goto L6b
            goto L6c
        L6b:
            r0 = r2
        L6c:
            return r0
    }

    public int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L6d
            com.czhj.wire.okio.ByteString r0 = r3.unknownFields()
            int r0 = r0.hashCode()
            int r0 = r0 * 37
            java.lang.Integer r1 = r3.yob
            r2 = 0
            if (r1 == 0) goto L18
            int r1 = r1.hashCode()
            goto L19
        L18:
            r1 = r2
        L19:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.String r1 = r3.gender
            if (r1 == 0) goto L25
            int r1 = r1.hashCode()
            goto L26
        L25:
            r1 = r2
        L26:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.String> r1 = r3.app_list
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.util.List<java.lang.String> r1 = r3.user_strategy
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 37
            com.czhj.sdk.common.models.Version r1 = r3.app_market_version
            if (r1 == 0) goto L44
            int r1 = r1.hashCode()
            goto L45
        L44:
            r1 = r2
        L45:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.is_minor
            if (r1 == 0) goto L51
            int r1 = r1.hashCode()
            goto L52
        L51:
            r1 = r2
        L52:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.disable_personalized_recommendation
            if (r1 == 0) goto L5e
            int r1 = r1.hashCode()
            goto L5f
        L5e:
            r1 = r2
        L5f:
            int r0 = r0 + r1
            int r0 = r0 * 37
            java.lang.Boolean r1 = r3.change_recommendation_state
            if (r1 == 0) goto L6a
            int r2 = r1.hashCode()
        L6a:
            int r0 = r0 + r2
            r3.hashCode = r0
        L6d:
            return r0
    }

    @Override
    public com.czhj.sdk.common.models.User.Builder newBuilder() {
            r3 = this;
            com.czhj.sdk.common.models.User$Builder r0 = new com.czhj.sdk.common.models.User$Builder
            r0.<init>()
            java.lang.Integer r1 = r3.yob
            r0.yob = r1
            java.lang.String r1 = r3.gender
            r0.gender = r1
            java.util.List<java.lang.String> r1 = r3.app_list
            java.lang.String r2 = "app_list"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.app_list = r1
            java.util.List<java.lang.String> r1 = r3.user_strategy
            java.lang.String r2 = "user_strategy"
            java.util.List r1 = com.czhj.wire.internal.Internal.copyOf(r2, r1)
            r0.user_strategy = r1
            com.czhj.sdk.common.models.Version r1 = r3.app_market_version
            r0.app_market_version = r1
            java.lang.Boolean r1 = r3.is_minor
            r0.is_minor = r1
            java.lang.Boolean r1 = r3.disable_personalized_recommendation
            r0.disable_personalized_recommendation = r1
            java.lang.Boolean r1 = r3.change_recommendation_state
            r0.change_recommendation_state = r1
            com.czhj.wire.okio.ByteString r1 = r3.unknownFields()
            r0.addUnknownFields(r1)
            return r0
    }

    @Override
    public com.czhj.wire.Message.Builder newBuilder() {
            r1 = this;
            com.czhj.sdk.common.models.User$Builder r0 = r1.newBuilder()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Integer r1 = r4.yob
            if (r1 == 0) goto L13
            java.lang.String r1 = ", yob="
            r0.append(r1)
            java.lang.Integer r1 = r4.yob
            r0.append(r1)
        L13:
            java.lang.String r1 = r4.gender
            if (r1 == 0) goto L21
            java.lang.String r1 = ", gender="
            r0.append(r1)
            java.lang.String r1 = r4.gender
            r0.append(r1)
        L21:
            java.util.List<java.lang.String> r1 = r4.app_list
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L33
            java.lang.String r1 = ", app_list="
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r4.app_list
            r0.append(r1)
        L33:
            java.util.List<java.lang.String> r1 = r4.user_strategy
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L45
            java.lang.String r1 = ", user_strategy="
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r4.user_strategy
            r0.append(r1)
        L45:
            com.czhj.sdk.common.models.Version r1 = r4.app_market_version
            if (r1 == 0) goto L53
            java.lang.String r1 = ", app_market_version="
            r0.append(r1)
            com.czhj.sdk.common.models.Version r1 = r4.app_market_version
            r0.append(r1)
        L53:
            java.lang.Boolean r1 = r4.is_minor
            if (r1 == 0) goto L61
            java.lang.String r1 = ", is_minor="
            r0.append(r1)
            java.lang.Boolean r1 = r4.is_minor
            r0.append(r1)
        L61:
            java.lang.Boolean r1 = r4.disable_personalized_recommendation
            if (r1 == 0) goto L6f
            java.lang.String r1 = ", disable_personalized_recommendation="
            r0.append(r1)
            java.lang.Boolean r1 = r4.disable_personalized_recommendation
            r0.append(r1)
        L6f:
            java.lang.Boolean r1 = r4.change_recommendation_state
            if (r1 == 0) goto L7d
            java.lang.String r1 = ", change_recommendation_state="
            r0.append(r1)
            java.lang.Boolean r1 = r4.change_recommendation_state
            r0.append(r1)
        L7d:
            r1 = 0
            r2 = 2
            java.lang.String r3 = "User{"
            java.lang.StringBuilder r0 = r0.replace(r1, r2, r3)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
