package com.mbridge.msdk.playercommon.exoplayer2.drm;

public final class DrmInitData implements android.os.Parcelable, java.util.Comparator<com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData> {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData> CREATOR = null;
    private int hashCode;
    public final int schemeDataCount;
    private final com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData[] schemeDatas;
    public final java.lang.String schemeType;


    public static final class SchemeData implements android.os.Parcelable {
        public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData> CREATOR = null;
        public final byte[] data;
        private int hashCode;
        public final java.lang.String licenseServerUrl;
        public final java.lang.String mimeType;
        public final boolean requiresSecureDecryption;
        private final java.util.UUID uuid;


        static {
                com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData$1
                r0.<init>()
                com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData.CREATOR = r0
                return
        }

        SchemeData(android.os.Parcel r6) {
                r5 = this;
                r5.<init>()
                java.util.UUID r0 = new java.util.UUID
                long r1 = r6.readLong()
                long r3 = r6.readLong()
                r0.<init>(r1, r3)
                r5.uuid = r0
                java.lang.String r0 = r6.readString()
                r5.licenseServerUrl = r0
                java.lang.String r0 = r6.readString()
                r5.mimeType = r0
                byte[] r0 = r6.createByteArray()
                r5.data = r0
                byte r6 = r6.readByte()
                if (r6 == 0) goto L2c
                r6 = 1
                goto L2d
            L2c:
                r6 = 0
            L2d:
                r5.requiresSecureDecryption = r6
                return
        }

        public SchemeData(java.util.UUID r1, java.lang.String r2, java.lang.String r3, byte[] r4, boolean r5) {
                r0 = this;
                r0.<init>()
                java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
                java.util.UUID r1 = (java.util.UUID) r1
                r0.uuid = r1
                r0.licenseServerUrl = r2
                java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
                java.lang.String r1 = (java.lang.String) r1
                r0.mimeType = r1
                r0.data = r4
                r0.requiresSecureDecryption = r5
                return
        }

        public SchemeData(java.util.UUID r2, java.lang.String r3, byte[] r4) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r3, r4, r0)
                return
        }

        public SchemeData(java.util.UUID r7, java.lang.String r8, byte[] r9, boolean r10) {
                r6 = this;
                r2 = 0
                r0 = r6
                r1 = r7
                r3 = r8
                r4 = r9
                r5 = r10
                r0.<init>(r1, r2, r3, r4, r5)
                return
        }

        static java.util.UUID access$000(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData r0) {
                java.util.UUID r0 = r0.uuid
                return r0
        }

        public final boolean canReplace(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData r2) {
                r1 = this;
                boolean r0 = r1.hasData()
                if (r0 == 0) goto L16
                boolean r0 = r2.hasData()
                if (r0 != 0) goto L16
                java.util.UUID r2 = r2.uuid
                boolean r2 = r1.matches(r2)
                if (r2 == 0) goto L16
                r2 = 1
                goto L17
            L16:
                r2 = 0
            L17:
                return r2
        }

        @Override
        public final int describeContents() {
                r1 = this;
                r0 = 0
                return r0
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                boolean r0 = r5 instanceof com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData
                r1 = 0
                if (r0 != 0) goto L6
                return r1
            L6:
                r0 = 1
                if (r5 != r4) goto La
                return r0
            La:
                com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r5 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData) r5
                java.lang.String r2 = r4.licenseServerUrl
                java.lang.String r3 = r5.licenseServerUrl
                boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
                if (r2 == 0) goto L35
                java.lang.String r2 = r4.mimeType
                java.lang.String r3 = r5.mimeType
                boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
                if (r2 == 0) goto L35
                java.util.UUID r2 = r4.uuid
                java.util.UUID r3 = r5.uuid
                boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
                if (r2 == 0) goto L35
                byte[] r2 = r4.data
                byte[] r5 = r5.data
                boolean r5 = java.util.Arrays.equals(r2, r5)
                if (r5 == 0) goto L35
                r1 = r0
            L35:
                return r1
        }

        public final boolean hasData() {
                r1 = this;
                byte[] r0 = r1.data
                if (r0 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                return r0
        }

        public final int hashCode() {
                r2 = this;
                int r0 = r2.hashCode
                if (r0 != 0) goto L2b
                java.util.UUID r0 = r2.uuid
                int r0 = r0.hashCode()
                int r0 = r0 * 31
                java.lang.String r1 = r2.licenseServerUrl
                if (r1 != 0) goto L12
                r1 = 0
                goto L16
            L12:
                int r1 = r1.hashCode()
            L16:
                int r0 = r0 + r1
                int r0 = r0 * 31
                java.lang.String r1 = r2.mimeType
                int r1 = r1.hashCode()
                int r0 = r0 + r1
                int r0 = r0 * 31
                byte[] r1 = r2.data
                int r1 = java.util.Arrays.hashCode(r1)
                int r0 = r0 + r1
                r2.hashCode = r0
            L2b:
                int r0 = r2.hashCode
                return r0
        }

        public final boolean matches(java.util.UUID r3) {
                r2 = this;
                java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.C.UUID_NIL
                java.util.UUID r1 = r2.uuid
                boolean r0 = r0.equals(r1)
                if (r0 != 0) goto L15
                java.util.UUID r0 = r2.uuid
                boolean r3 = r3.equals(r0)
                if (r3 == 0) goto L13
                goto L15
            L13:
                r3 = 0
                goto L16
            L15:
                r3 = 1
            L16:
                return r3
        }

        @Override
        public final void writeToParcel(android.os.Parcel r3, int r4) {
                r2 = this;
                java.util.UUID r4 = r2.uuid
                long r0 = r4.getMostSignificantBits()
                r3.writeLong(r0)
                java.util.UUID r4 = r2.uuid
                long r0 = r4.getLeastSignificantBits()
                r3.writeLong(r0)
                java.lang.String r4 = r2.licenseServerUrl
                r3.writeString(r4)
                java.lang.String r4 = r2.mimeType
                r3.writeString(r4)
                byte[] r4 = r2.data
                r3.writeByteArray(r4)
                boolean r4 = r2.requiresSecureDecryption
                byte r4 = (byte) r4
                r3.writeByte(r4)
                return
        }
    }

    static {
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.CREATOR = r0
            return
    }

    DrmInitData(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = r2.readString()
            r1.schemeType = r0
            android.os.Parcelable$Creator<com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData> r0 = com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData.CREATOR
            java.lang.Object[] r2 = r2.createTypedArray(r0)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r2 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData[]) r2
            r1.schemeDatas = r2
            int r2 = r2.length
            r1.schemeDataCount = r2
            return
    }

    public DrmInitData(java.lang.String r2, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData> r3) {
            r1 = this;
            int r0 = r3.size()
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData[r0]
            java.lang.Object[] r3 = r3.toArray(r0)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r3 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData[]) r3
            r0 = 0
            r1.<init>(r2, r0, r3)
            return
    }

    private DrmInitData(java.lang.String r1, boolean r2, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData... r3) {
            r0 = this;
            r0.<init>()
            r0.schemeType = r1
            if (r2 == 0) goto Le
            java.lang.Object r1 = r3.clone()
            r3 = r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r3 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData[]) r3
        Le:
            java.util.Arrays.sort(r3, r0)
            r0.schemeDatas = r3
            int r1 = r3.length
            r0.schemeDataCount = r1
            return
    }

    public DrmInitData(java.lang.String r2, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData... r3) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r0, r3)
            return
    }

    public DrmInitData(java.util.List<com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData> r3) {
            r2 = this;
            int r0 = r3.size()
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData[r0]
            java.lang.Object[] r3 = r3.toArray(r0)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r3 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData[]) r3
            r0 = 0
            r1 = 0
            r2.<init>(r0, r1, r3)
            return
    }

    public DrmInitData(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData... r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    private static boolean containsSchemeDataWithUuid(java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData> r3, int r4, java.util.UUID r5) {
            r0 = 0
            r1 = r0
        L2:
            if (r1 >= r4) goto L19
            java.lang.Object r2 = r3.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r2 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData) r2
            java.util.UUID r2 = com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData.access$000(r2)
            boolean r2 = r2.equals(r5)
            if (r2 == 0) goto L16
            r3 = 1
            return r3
        L16:
            int r1 = r1 + 1
            goto L2
        L19:
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData createSessionCreationData(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r8, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r9) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
            r2 = 0
            if (r8 == 0) goto L1f
            java.lang.String r3 = r8.schemeType
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r8 = r8.schemeDatas
            int r4 = r8.length
            r5 = r1
        Lf:
            if (r5 >= r4) goto L20
            r6 = r8[r5]
            boolean r7 = r6.hasData()
            if (r7 == 0) goto L1c
            r0.add(r6)
        L1c:
            int r5 = r5 + 1
            goto Lf
        L1f:
            r3 = r2
        L20:
            if (r9 == 0) goto L48
            if (r3 != 0) goto L27
            java.lang.String r8 = r9.schemeType
            r3 = r8
        L27:
            int r8 = r0.size()
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r9 = r9.schemeDatas
            int r4 = r9.length
        L2e:
            if (r1 >= r4) goto L48
            r5 = r9[r1]
            boolean r6 = r5.hasData()
            if (r6 == 0) goto L45
            java.util.UUID r6 = com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData.access$000(r5)
            boolean r6 = containsSchemeDataWithUuid(r0, r8, r6)
            if (r6 != 0) goto L45
            r0.add(r5)
        L45:
            int r1 = r1 + 1
            goto L2e
        L48:
            boolean r8 = r0.isEmpty()
            if (r8 == 0) goto L4f
            goto L54
        L4f:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r2 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData
            r2.<init>(r3, r0)
        L54:
            return r2
    }

    public final int compare(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData r3, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData r4) {
            r2 = this;
            java.util.UUID r0 = com.mbridge.msdk.playercommon.exoplayer2.C.UUID_NIL
            java.util.UUID r1 = com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData.access$000(r3)
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L1c
            java.util.UUID r3 = com.mbridge.msdk.playercommon.exoplayer2.C.UUID_NIL
            java.util.UUID r4 = com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData.access$000(r4)
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L1a
            r3 = 0
            goto L28
        L1a:
            r3 = 1
            goto L28
        L1c:
            java.util.UUID r3 = com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData.access$000(r3)
            java.util.UUID r4 = com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData.access$000(r4)
            int r3 = r3.compareTo(r4)
        L28:
            return r3
    }

    @Override
    public final int compare(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData r1, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData r2) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r1 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData) r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r2 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData) r2
            int r1 = r0.compare(r1, r2)
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData copyWithSchemeType(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = r3.schemeType
            boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r0, r4)
            if (r0 == 0) goto L9
            return r3
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r0 = new com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData
            r1 = 0
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r2 = r3.schemeDatas
            r0.<init>(r4, r1, r2)
            return r0
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L2b
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L2b
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r5 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData) r5
            java.lang.String r2 = r4.schemeType
            java.lang.String r3 = r5.schemeType
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto L29
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r2 = r4.schemeDatas
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r5 = r5.schemeDatas
            boolean r5 = java.util.Arrays.equals(r2, r5)
            if (r5 == 0) goto L29
            goto L2a
        L29:
            r0 = r1
        L2a:
            return r0
        L2b:
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData get(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r0 = r1.schemeDatas
            r2 = r0[r2]
            return r2
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.SchemeData get(java.util.UUID r6) {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r0 = r5.schemeDatas
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto L12
            r3 = r0[r2]
            boolean r4 = r3.matches(r6)
            if (r4 == 0) goto Lf
            return r3
        Lf:
            int r2 = r2 + 1
            goto L4
        L12:
            r6 = 0
            return r6
    }

    public final int hashCode() {
            r2 = this;
            int r0 = r2.hashCode
            if (r0 != 0) goto L19
            java.lang.String r0 = r2.schemeType
            if (r0 != 0) goto La
            r0 = 0
            goto Le
        La:
            int r0 = r0.hashCode()
        Le:
            int r0 = r0 * 31
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r1 = r2.schemeDatas
            int r1 = java.util.Arrays.hashCode(r1)
            int r0 = r0 + r1
            r2.hashCode = r0
        L19:
            int r0 = r2.hashCode
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r2, int r3) {
            r1 = this;
            java.lang.String r3 = r1.schemeType
            r2.writeString(r3)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData[] r3 = r1.schemeDatas
            r0 = 0
            r2.writeTypedArray(r3, r0)
            return
    }
}
