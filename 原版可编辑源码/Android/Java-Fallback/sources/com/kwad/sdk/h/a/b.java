package com.kwad.sdk.h.a;

public class b extends com.kwad.sdk.core.response.a.a {
    public java.lang.String aCb;
    public java.lang.String aCc;
    public java.lang.String aCd;
    public long aCe;
    public boolean aCf;
    public java.lang.String agi;
    public int loadType;
    public int packageType;
    public java.lang.String packageUrl;
    public java.lang.String version;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public final long FC() {
            r2 = this;
            long r0 = r2.aCe
            return r0
    }

    public final void an(long r1) {
            r0 = this;
            r0.aCe = r1
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L33
            java.lang.Class r2 = r4.getClass()
            java.lang.Class r3 = r5.getClass()
            if (r2 == r3) goto L12
            goto L33
        L12:
            com.kwad.sdk.h.a.b r5 = (com.kwad.sdk.h.a.b) r5
            java.lang.String r2 = r4.aCb
            java.lang.String r3 = r5.aCb
            boolean r2 = com.kwad.sdk.utils.bc.isEquals(r2, r3)
            if (r2 == 0) goto L33
            java.lang.String r2 = r4.agi
            java.lang.String r3 = r5.agi
            boolean r2 = com.kwad.sdk.utils.bc.isEquals(r2, r3)
            if (r2 == 0) goto L33
            java.lang.String r2 = r4.version
            java.lang.String r5 = r5.version
            boolean r5 = com.kwad.sdk.utils.bc.isEquals(r2, r5)
            if (r5 == 0) goto L33
            return r0
        L33:
            return r1
    }

    public int hashCode() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.aCb
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            java.lang.String r2 = r3.agi
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = r3.version
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L2b
            int r0 = super.hashCode()
            return r0
        L2b:
            java.lang.String r0 = r0.toString()
            int r0 = r0.hashCode()
            return r0
    }

    public final boolean isValid() {
            r1 = this;
            java.lang.String r0 = r1.aCb
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L22
            java.lang.String r0 = r1.packageUrl
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L22
            java.lang.String r0 = r1.version
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L22
            java.lang.String r0 = r1.aCc
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L22
            r0 = 1
            return r0
        L22:
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "PackageInfoBean{packageId='"
            r0.<init>(r1)
            java.lang.String r1 = r4.aCb
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", zipFileName='"
            r0.append(r2)
            java.lang.String r2 = r4.aCc
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", zipPath='"
            r0.append(r2)
            java.lang.String r2 = r4.aCd
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", startDownloadTime="
            r0.append(r2)
            long r2 = r4.aCe
            r0.append(r2)
            java.lang.String r2 = ", packageUrl='"
            r0.append(r2)
            java.lang.String r2 = r4.packageUrl
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", version='"
            r0.append(r2)
            java.lang.String r2 = r4.version
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", checksum='"
            r0.append(r2)
            java.lang.String r2 = r4.agi
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ", loadType="
            r0.append(r1)
            int r1 = r4.loadType
            r0.append(r1)
            java.lang.String r1 = ", packageType="
            r0.append(r1)
            int r1 = r4.packageType
            r0.append(r1)
            java.lang.String r1 = ", isPublic="
            r0.append(r1)
            boolean r1 = r4.aCf
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
