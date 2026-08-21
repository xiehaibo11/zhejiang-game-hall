package com.ss.android.download.api.clean;

public class df extends com.ss.android.download.api.clean.c implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.ss.android.download.api.clean.df> CREATOR = null;
    java.util.List<com.ss.android.download.api.clean.c> rg;


    static {
            com.ss.android.download.api.clean.df$1 r0 = new com.ss.android.download.api.clean.df$1
            r0.<init>()
            com.ss.android.download.api.clean.df.CREATOR = r0
            return
    }

    public df() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.rg = r0
            return
    }

    df(android.os.Parcel r5) {
            r4 = this;
            r4.<init>(r5)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r4.rg = r0
            int r0 = r5.readInt()
            r1 = 0
        Lf:
            if (r1 >= r0) goto L25
            java.lang.Class<com.ss.android.download.api.clean.c> r2 = com.ss.android.download.api.clean.c.class
            java.lang.ClassLoader r2 = r2.getClassLoader()
            android.os.Parcelable r2 = r5.readParcelable(r2)
            com.ss.android.download.api.clean.c r2 = (com.ss.android.download.api.clean.c) r2
            java.util.List<com.ss.android.download.api.clean.c> r3 = r4.rg
            r3.add(r2)
            int r1 = r1 + 1
            goto Lf
        L25:
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            super.writeToParcel(r3, r4)
            java.util.List<com.ss.android.download.api.clean.c> r4 = r2.rg
            if (r4 != 0) goto Le
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r2.rg = r4
        Le:
            java.util.List<com.ss.android.download.api.clean.c> r4 = r2.rg
            int r4 = r4.size()
            r3.writeInt(r4)
            java.util.List<com.ss.android.download.api.clean.c> r4 = r2.rg
            java.util.Iterator r4 = r4.iterator()
        L1d:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L2e
            java.lang.Object r0 = r4.next()
            com.ss.android.download.api.clean.c r0 = (com.ss.android.download.api.clean.c) r0
            r1 = 0
            r3.writeParcelable(r0, r1)
            goto L1d
        L2e:
            return
    }
}
