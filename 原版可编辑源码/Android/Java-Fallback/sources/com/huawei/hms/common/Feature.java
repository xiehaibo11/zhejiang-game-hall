package com.huawei.hms.common;

@java.lang.Deprecated
public class Feature extends com.huawei.hms.common.internal.safeparcel.AbstractSafeParcelable {
    public static final int ARGS_NAME = 1;
    public static final int ARGS_SVC_VER = 2;
    public static final int ARGS_VER = 3;
    public static final android.os.Parcelable.Creator<com.huawei.hms.common.Feature> CREATOR = null;
    private static final int SVC_VER = -1;
    private final long apiVersion;
    private final java.lang.String name;

    @java.lang.Deprecated
    private final int serviceVersion;

    static {
            com.huawei.hms.common.FeatureCreator r0 = new com.huawei.hms.common.FeatureCreator
            r0.<init>()
            com.huawei.hms.common.Feature.CREATOR = r0
            return
    }

    public Feature(java.lang.String r1, int r2, long r3) {
            r0 = this;
            r0.<init>()
            r0.name = r1
            r0.serviceVersion = r2
            r0.apiVersion = r3
            return
    }

    public Feature(java.lang.String r2, long r3) {
            r1 = this;
            r0 = -1
            r1.<init>(r2, r0, r3)
            return
    }

    public boolean equals(java.lang.Object r7) {
            r6 = this;
            boolean r0 = r7 instanceof com.huawei.hms.common.Feature
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            com.huawei.hms.common.Feature r7 = (com.huawei.hms.common.Feature) r7
            java.lang.String r0 = r6.name
            java.lang.String r2 = r7.getName()
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L15
            return r1
        L15:
            long r2 = r6.getVersion()
            long r4 = r7.getVersion()
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 == 0) goto L22
            return r1
        L22:
            r7 = 1
            return r7
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }

    public long getVersion() {
            r4 = this;
            long r0 = r4.apiVersion
            r2 = -1
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 != 0) goto Lb
            int r0 = r4.serviceVersion
            long r0 = (long) r0
        Lb:
            return r0
    }

    public int hashCode() {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r3.getName()
            r2 = 0
            r0[r2] = r1
            long r1 = r3.getVersion()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r2 = 1
            r0[r2] = r1
            int r0 = com.huawei.hms.common.internal.Objects.hashCode(r0)
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            com.huawei.hms.common.internal.Objects$ToStringHelper r0 = com.huawei.hms.common.internal.Objects.toStringHelper(r3)
            java.lang.String r1 = r3.getName()
            java.lang.String r2 = "name"
            com.huawei.hms.common.internal.Objects$ToStringHelper r0 = r0.add(r2, r1)
            long r1 = r3.getVersion()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "version"
            com.huawei.hms.common.internal.Objects$ToStringHelper r0 = r0.add(r2, r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r4, int r5) {
            r3 = this;
            int r5 = com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.beginObjectHeader(r4)
            java.lang.String r0 = r3.getName()
            r1 = 1
            r2 = 0
            com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.writeString(r4, r1, r0, r2)
            int r0 = r3.serviceVersion
            r1 = 2
            com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.writeInt(r4, r1, r0)
            long r0 = r3.getVersion()
            r2 = 3
            com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.writeLong(r4, r2, r0)
            com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.finishObjectHeader(r4, r5)
            return
    }
}
