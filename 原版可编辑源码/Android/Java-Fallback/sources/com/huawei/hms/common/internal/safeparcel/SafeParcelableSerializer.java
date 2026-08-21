package com.huawei.hms.common.internal.safeparcel;

public final class SafeParcelableSerializer {
    public SafeParcelableSerializer() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <S extends com.huawei.hms.common.internal.safeparcel.SafeParcelable> S deserializeFromBytes(byte[] r3, android.os.Parcelable.Creator<S> r4) {
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r4)
            android.os.Parcel r0 = android.os.Parcel.obtain()
            int r1 = r3.length
            r2 = 0
            r0.unmarshall(r3, r2, r1)
            r0.setDataPosition(r2)
            java.lang.Object r3 = r4.createFromParcel(r0)
            com.huawei.hms.common.internal.safeparcel.SafeParcelable r3 = (com.huawei.hms.common.internal.safeparcel.SafeParcelable) r3
            r0.recycle()
            return r3
    }

    public static <S extends com.huawei.hms.common.internal.safeparcel.SafeParcelable> S deserializeFromIntentExtra(android.content.Intent r0, java.lang.String r1, android.os.Parcelable.Creator<S> r2) {
            byte[] r0 = r0.getByteArrayExtra(r1)
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            com.huawei.hms.common.internal.safeparcel.SafeParcelable r0 = deserializeFromBytes(r0, r2)
            return r0
    }

    public static <S extends com.huawei.hms.common.internal.safeparcel.SafeParcelable> S deserializeFromString(java.lang.String r0, android.os.Parcelable.Creator<S> r1) {
            byte[] r0 = com.huawei.hms.common.util.Base64Utils.decodeUrlSafe(r0)
            com.huawei.hms.common.internal.safeparcel.SafeParcelable r0 = deserializeFromBytes(r0, r1)
            return r0
    }

    public static <S extends com.huawei.hms.common.internal.safeparcel.SafeParcelable> java.util.ArrayList<S> deserializeIterableFromBundle(android.os.Bundle r1, java.lang.String r2, android.os.Parcelable.Creator<S> r3) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            java.io.Serializable r1 = r1.getSerializable(r2)
            java.util.ArrayList r1 = (java.util.ArrayList) r1
            if (r1 != 0) goto Ld
            return r0
        Ld:
            java.util.ArrayList r2 = new java.util.ArrayList
            int r0 = r1.size()
            r2.<init>(r0)
            java.util.Iterator r1 = r1.iterator()
        L1a:
            boolean r0 = r1.hasNext()
            if (r0 == 0) goto L2e
            java.lang.Object r0 = r1.next()
            byte[] r0 = (byte[]) r0
            com.huawei.hms.common.internal.safeparcel.SafeParcelable r0 = deserializeFromBytes(r0, r3)
            r2.add(r0)
            goto L1a
        L2e:
            return r2
    }

    public static <S extends com.huawei.hms.common.internal.safeparcel.SafeParcelable> java.util.ArrayList<S> deserializeIterableFromIntentExtra(android.content.Intent r1, java.lang.String r2, android.os.Parcelable.Creator<S> r3) {
            java.io.Serializable r1 = r1.getSerializableExtra(r2)
            java.util.ArrayList r1 = (java.util.ArrayList) r1
            if (r1 != 0) goto La
            r1 = 0
            return r1
        La:
            java.util.ArrayList r2 = new java.util.ArrayList
            int r0 = r1.size()
            r2.<init>(r0)
            java.util.Iterator r1 = r1.iterator()
        L17:
            boolean r0 = r1.hasNext()
            if (r0 == 0) goto L2b
            java.lang.Object r0 = r1.next()
            byte[] r0 = (byte[]) r0
            com.huawei.hms.common.internal.safeparcel.SafeParcelable r0 = deserializeFromBytes(r0, r3)
            r2.add(r0)
            goto L17
        L2b:
            return r2
    }

    public static <S extends com.huawei.hms.common.internal.safeparcel.SafeParcelable> void serializeIterableToBundle(java.lang.Iterable<S> r2, android.os.Bundle r3, java.lang.String r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r2 = r2.iterator()
        L9:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r2.next()
            com.huawei.hms.common.internal.safeparcel.SafeParcelable r1 = (com.huawei.hms.common.internal.safeparcel.SafeParcelable) r1
            byte[] r1 = serializeToBytes(r1)
            r0.add(r1)
            goto L9
        L1d:
            r3.putSerializable(r4, r0)
            return
    }

    public static <S extends com.huawei.hms.common.internal.safeparcel.SafeParcelable> void serializeIterableToIntentExtra(java.lang.Iterable<S> r2, android.content.Intent r3, java.lang.String r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r2 = r2.iterator()
        L9:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r2.next()
            com.huawei.hms.common.internal.safeparcel.SafeParcelable r1 = (com.huawei.hms.common.internal.safeparcel.SafeParcelable) r1
            byte[] r1 = serializeToBytes(r1)
            r0.add(r1)
            goto L9
        L1d:
            r3.putExtra(r4, r0)
            return
    }

    public static <S extends com.huawei.hms.common.internal.safeparcel.SafeParcelable> byte[] serializeToBytes(S r2) {
            android.os.Parcel r0 = android.os.Parcel.obtain()
            r1 = 0
            r2.writeToParcel(r0, r1)
            byte[] r2 = r0.marshall()
            r0.recycle()
            return r2
    }

    public static <S extends com.huawei.hms.common.internal.safeparcel.SafeParcelable> void serializeToIntentExtra(S r0, android.content.Intent r1, java.lang.String r2) {
            byte[] r0 = serializeToBytes(r0)
            r1.putExtra(r2, r0)
            return
    }

    public static <S extends com.huawei.hms.common.internal.safeparcel.SafeParcelable> java.lang.String serializeToString(S r0) {
            byte[] r0 = serializeToBytes(r0)
            java.lang.String r0 = com.huawei.hms.common.util.Base64Utils.encodeUrlSafe(r0)
            return r0
    }
}
