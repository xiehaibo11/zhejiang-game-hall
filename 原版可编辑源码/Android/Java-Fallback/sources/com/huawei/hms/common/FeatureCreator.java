package com.huawei.hms.common;

public final class FeatureCreator implements android.os.Parcelable.Creator<com.huawei.hms.common.Feature> {
    public FeatureCreator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final com.huawei.hms.common.Feature createFromParcel(android.os.Parcel r10) {
            r9 = this;
            int r0 = com.huawei.hms.common.internal.safeparcel.SafeParcelReader.validateObjectHeader(r10)
            r1 = 0
            r2 = 0
            r3 = -1
            r4 = r3
            r3 = r2
            r2 = r1
        Lb:
            if (r1 > r0) goto L39
            int r6 = r10.dataPosition()
            if (r6 >= r0) goto L39
            int r1 = r1 + 1
            int r6 = com.huawei.hms.common.internal.safeparcel.SafeParcelReader.readHeader(r10)
            int r7 = com.huawei.hms.common.internal.safeparcel.SafeParcelReader.getFieldId(r6)
            r8 = 1
            if (r7 == r8) goto L34
            r8 = 2
            if (r7 == r8) goto L2f
            r8 = 3
            if (r7 == r8) goto L2a
            com.huawei.hms.common.internal.safeparcel.SafeParcelReader.skipUnknownField(r10, r6)
            goto Lb
        L2a:
            long r4 = com.huawei.hms.common.internal.safeparcel.SafeParcelReader.readLong(r10, r6)
            goto Lb
        L2f:
            int r2 = com.huawei.hms.common.internal.safeparcel.SafeParcelReader.readInt(r10, r6)
            goto Lb
        L34:
            java.lang.String r3 = com.huawei.hms.common.internal.safeparcel.SafeParcelReader.createString(r10, r6)
            goto Lb
        L39:
            com.huawei.hms.common.internal.safeparcel.SafeParcelReader.ensureAtEnd(r10, r0)
            com.huawei.hms.common.Feature r10 = new com.huawei.hms.common.Feature
            r10.<init>(r3, r2, r4)
            return r10
    }

    @Override
    public com.huawei.hms.common.Feature createFromParcel(android.os.Parcel r1) {
            r0 = this;
            com.huawei.hms.common.Feature r1 = r0.createFromParcel(r1)
            return r1
    }

    @Override
    public final com.huawei.hms.common.Feature[] newArray(int r1) {
            r0 = this;
            com.huawei.hms.common.Feature[] r1 = new com.huawei.hms.common.Feature[r1]
            return r1
    }

    @Override
    public com.huawei.hms.common.Feature[] newArray(int r1) {
            r0 = this;
            com.huawei.hms.common.Feature[] r1 = r0.newArray(r1)
            return r1
    }
}
