package com.huawei.hms.common.data;

public final class DataHolderCreator implements android.os.Parcelable.Creator<com.huawei.hms.common.data.DataHolder> {
    public DataHolderCreator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final com.huawei.hms.common.data.DataHolder createFromParcel(android.os.Parcel r11) {
            r10 = this;
            int r0 = com.huawei.hms.common.internal.safeparcel.SafeParcelReader.validateObjectHeader(r11)
            r1 = 0
            r2 = 0
            r5 = r1
            r6 = r5
            r8 = r6
            r4 = r2
            r7 = r4
        Lb:
            if (r2 > r0) goto L4f
            int r1 = r11.dataPosition()
            if (r1 >= r0) goto L4f
            int r2 = r2 + 1
            int r1 = com.huawei.hms.common.internal.safeparcel.SafeParcelReader.readHeader(r11)
            int r3 = com.huawei.hms.common.internal.safeparcel.SafeParcelReader.getFieldId(r1)
            r9 = 1000(0x3e8, float:1.401E-42)
            if (r3 == r9) goto L4a
            r9 = 1
            if (r3 == r9) goto L45
            r9 = 2
            if (r3 == r9) goto L3b
            r9 = 3
            if (r3 == r9) goto L36
            r9 = 4
            if (r3 == r9) goto L31
            com.huawei.hms.common.internal.safeparcel.SafeParcelReader.skipUnknownField(r11, r1)
            goto Lb
        L31:
            android.os.Bundle r8 = com.huawei.hms.common.internal.safeparcel.SafeParcelReader.createBundle(r11, r1)
            goto Lb
        L36:
            int r7 = com.huawei.hms.common.internal.safeparcel.SafeParcelReader.readInt(r11, r1)
            goto Lb
        L3b:
            android.os.Parcelable$Creator r3 = android.database.CursorWindow.CREATOR
            java.lang.Object[] r1 = com.huawei.hms.common.internal.safeparcel.SafeParcelReader.createTypedArray(r11, r1, r3)
            r6 = r1
            android.database.CursorWindow[] r6 = (android.database.CursorWindow[]) r6
            goto Lb
        L45:
            java.lang.String[] r5 = com.huawei.hms.common.internal.safeparcel.SafeParcelReader.createStringArray(r11, r1)
            goto Lb
        L4a:
            int r4 = com.huawei.hms.common.internal.safeparcel.SafeParcelReader.readInt(r11, r1)
            goto Lb
        L4f:
            com.huawei.hms.common.internal.safeparcel.SafeParcelReader.ensureAtEnd(r11, r0)
            com.huawei.hms.common.data.DataHolder r11 = new com.huawei.hms.common.data.DataHolder
            r3 = r11
            r3.<init>(r4, r5, r6, r7, r8)
            return r11
    }

    @Override
    public com.huawei.hms.common.data.DataHolder createFromParcel(android.os.Parcel r1) {
            r0 = this;
            com.huawei.hms.common.data.DataHolder r1 = r0.createFromParcel(r1)
            return r1
    }

    @Override
    public final com.huawei.hms.common.data.DataHolder[] newArray(int r1) {
            r0 = this;
            com.huawei.hms.common.data.DataHolder[] r1 = new com.huawei.hms.common.data.DataHolder[r1]
            return r1
    }

    @Override
    public com.huawei.hms.common.data.DataHolder[] newArray(int r1) {
            r0 = this;
            com.huawei.hms.common.data.DataHolder[] r1 = r0.newArray(r1)
            return r1
    }
}
