package com.ss.android.download.api.clean;

public class c extends com.ss.android.download.api.clean.pp implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.ss.android.download.api.clean.c> CREATOR = null;
    private java.util.Map<java.lang.String, com.ss.android.download.api.clean.pp> c;
    private boolean fw;
    private java.util.List<com.ss.android.download.api.clean.pp> pp;
    private java.lang.String rg;


    static {
            com.ss.android.download.api.clean.c$1 r0 = new com.ss.android.download.api.clean.c$1
            r0.<init>()
            com.ss.android.download.api.clean.c.CREATOR = r0
            return
    }

    public c() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.pp = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.c = r0
            return
    }

    c(android.os.Parcel r6) {
            r5 = this;
            r5.<init>(r6)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r5.pp = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r5.c = r0
            java.lang.String r0 = r6.readString()
            r5.rg = r0
            int r0 = r6.readInt()
            r1 = 0
            r2 = 1
            if (r0 != r2) goto L20
            goto L21
        L20:
            r2 = r1
        L21:
            r5.fw = r2
            int r0 = r6.readInt()
        L27:
            if (r1 >= r0) goto L84
            java.lang.String r2 = r6.readString()
            java.lang.String r3 = r6.readString()
            java.lang.String r4 = "apk_clean_file"
            boolean r4 = r4.equals(r3)
            if (r4 == 0) goto L46
            java.lang.Class<com.ss.android.download.api.clean.rg> r3 = com.ss.android.download.api.clean.rg.class
            java.lang.ClassLoader r3 = r3.getClassLoader()
            android.os.Parcelable r3 = r6.readParcelable(r3)
            com.ss.android.download.api.clean.pp r3 = (com.ss.android.download.api.clean.pp) r3
            goto L7c
        L46:
            java.lang.String r4 = "clean_app_cache"
            boolean r4 = r4.equals(r3)
            if (r4 == 0) goto L5b
            java.lang.Class<com.ss.android.download.api.clean.pt> r3 = com.ss.android.download.api.clean.pt.class
            java.lang.ClassLoader r3 = r3.getClassLoader()
            android.os.Parcelable r3 = r6.readParcelable(r3)
            com.ss.android.download.api.clean.pp r3 = (com.ss.android.download.api.clean.pp) r3
            goto L7c
        L5b:
            java.lang.String r4 = "clean_folder"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L70
            java.lang.Class<com.ss.android.download.api.clean.c> r3 = com.ss.android.download.api.clean.c.class
            java.lang.ClassLoader r3 = r3.getClassLoader()
            android.os.Parcelable r3 = r6.readParcelable(r3)
            com.ss.android.download.api.clean.pp r3 = (com.ss.android.download.api.clean.pp) r3
            goto L7c
        L70:
            java.lang.Class<com.ss.android.download.api.clean.pp> r3 = com.ss.android.download.api.clean.pp.class
            java.lang.ClassLoader r3 = r3.getClassLoader()
            android.os.Parcelable r3 = r6.readParcelable(r3)
            com.ss.android.download.api.clean.pp r3 = (com.ss.android.download.api.clean.pp) r3
        L7c:
            java.util.Map<java.lang.String, com.ss.android.download.api.clean.pp> r4 = r5.c
            r4.put(r2, r3)
            int r1 = r1 + 1
            goto L27
        L84:
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String rg() {
            r1 = this;
            java.lang.String r0 = "clean_folder"
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            super.writeToParcel(r3, r4)
            java.lang.String r4 = r2.rg
            r3.writeString(r4)
            boolean r4 = r2.fw
            r3.writeInt(r4)
            java.util.Map<java.lang.String, com.ss.android.download.api.clean.pp> r4 = r2.c
            int r4 = r4.size()
            r3.writeInt(r4)
            java.util.Map<java.lang.String, com.ss.android.download.api.clean.pp> r4 = r2.c
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L20:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L47
            java.lang.Object r0 = r4.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            com.ss.android.download.api.clean.pp r0 = (com.ss.android.download.api.clean.pp) r0
            r3.writeString(r1)
            java.lang.String r1 = r0.rg()
            r3.writeString(r1)
            r1 = 0
            r3.writeParcelable(r0, r1)
            goto L20
        L47:
            return
    }
}
