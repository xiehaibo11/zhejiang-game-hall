package com.huawei.hms.common.webserverpic;

public class WebServerPic {
    public static final android.os.Parcelable.Creator<com.huawei.hms.common.webserverpic.WebServerPic> CREATOR = null;
    private final int height;
    private final android.net.Uri url;
    private final int width;

    static {
            com.huawei.hms.common.webserverpic.WebServerPicCreator r0 = new com.huawei.hms.common.webserverpic.WebServerPicCreator
            r0.<init>()
            com.huawei.hms.common.webserverpic.WebServerPic.CREATOR = r0
            return
    }

    public WebServerPic(android.net.Uri r2) throws java.lang.IllegalArgumentException {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r0)
            return
    }

    public WebServerPic(android.net.Uri r1, int r2, int r3) throws java.lang.IllegalArgumentException {
            r0 = this;
            r0.<init>()
            r0.url = r1
            r0.width = r2
            r0.height = r3
            if (r1 == 0) goto L18
            if (r2 < 0) goto L10
            if (r3 < 0) goto L10
            return
        L10:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "width and height should be positive or 0"
            r1.<init>(r2)
            throw r1
        L18:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "url is not able to be null"
            r1.<init>(r2)
            throw r1
    }

    public final int getHeight() {
            r1 = this;
            int r0 = r1.height
            return r0
    }

    public final android.net.Uri getUrl() {
            r1 = this;
            android.net.Uri r0 = r1.url
            return r0
    }

    public final int getWidth() {
            r1 = this;
            int r0 = r1.width
            return r0
    }

    public final java.lang.String toString() {
            r4 = this;
            java.util.Locale r0 = java.util.Locale.ENGLISH
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            int r2 = r4.width
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 0
            r1[r3] = r2
            int r2 = r4.height
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r3 = 1
            r1[r3] = r2
            android.net.Uri r2 = r4.url
            java.lang.String r2 = r2.toString()
            r3 = 2
            r1[r3] = r2
            java.lang.String r2 = "Image %dx%d %s"
            java.lang.String r0 = java.lang.String.format(r0, r2, r1)
            return r0
    }

    public final void writeToParcel(android.os.Parcel r5, int r6) {
            r4 = this;
            com.huawei.hms.common.internal.Preconditions.checkNotNull(r5)
            int r0 = com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.beginObjectHeader(r5)
            android.net.Uri r1 = r4.getUrl()
            r2 = 1
            r3 = 0
            com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.writeParcelable(r5, r2, r1, r6, r3)
            int r6 = r4.getWidth()
            r1 = 2
            com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.writeInt(r5, r1, r6)
            int r6 = r4.getHeight()
            r1 = 3
            com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.writeInt(r5, r1, r6)
            com.huawei.hms.common.internal.safeparcel.SafeParcelWriter.finishObjectHeader(r5, r0)
            return
    }
}
