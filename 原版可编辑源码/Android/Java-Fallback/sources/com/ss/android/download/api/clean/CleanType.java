package com.ss.android.download.api.clean;

public class CleanType extends com.ss.android.download.api.clean.df implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.ss.android.download.api.clean.CleanType> CREATOR = null;
    private java.util.Map<java.lang.String, com.ss.android.download.api.clean.pt> c;
    private int pp;


    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface Type {
        public static final int APK = -1;
        public static final int CACHE = -3;
        public static final int LOG = -2;
        public static final int OTHERS = -5;
        public static final int REMAIN = -4;
    }

    static {
            com.ss.android.download.api.clean.CleanType$1 r0 = new com.ss.android.download.api.clean.CleanType$1
            r0.<init>()
            com.ss.android.download.api.clean.CleanType.CREATOR = r0
            return
    }

    public CleanType() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.c = r0
            return
    }

    CleanType(android.os.Parcel r6) {
            r5 = this;
            r5.<init>(r6)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r5.c = r0
            int r0 = r6.readInt()
            r5.pp = r0
            int r0 = r6.readInt()
            r1 = 0
        L15:
            if (r1 >= r0) goto L2f
            java.lang.String r2 = r6.readString()
            java.lang.Class<com.ss.android.download.api.clean.pt> r3 = com.ss.android.download.api.clean.pt.class
            java.lang.ClassLoader r3 = r3.getClassLoader()
            android.os.Parcelable r3 = r6.readParcelable(r3)
            com.ss.android.download.api.clean.pt r3 = (com.ss.android.download.api.clean.pt) r3
            java.util.Map<java.lang.String, com.ss.android.download.api.clean.pt> r4 = r5.c
            r4.put(r2, r3)
            int r1 = r1 + 1
            goto L15
        L2f:
            return
    }

    public int getType() {
            r1 = this;
            int r0 = r1.pp
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            super.writeToParcel(r3, r4)
            int r4 = r2.pp
            r3.writeInt(r4)
            java.util.Map<java.lang.String, com.ss.android.download.api.clean.pt> r4 = r2.c
            int r4 = r4.size()
            r3.writeInt(r4)
            java.util.Map<java.lang.String, com.ss.android.download.api.clean.pt> r4 = r2.c
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L1b:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L40
            java.lang.Object r0 = r4.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()     // Catch: java.lang.Exception -> L3b
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L3b
            java.lang.Object r0 = r0.getValue()     // Catch: java.lang.Exception -> L3b
            com.ss.android.download.api.clean.pt r0 = (com.ss.android.download.api.clean.pt) r0     // Catch: java.lang.Exception -> L3b
            r3.writeString(r1)     // Catch: java.lang.Exception -> L3b
            r1 = 0
            r3.writeParcelable(r0, r1)     // Catch: java.lang.Exception -> L3b
            goto L1b
        L3b:
            r0 = move-exception
            r0.printStackTrace()
            goto L1b
        L40:
            return
    }
}
