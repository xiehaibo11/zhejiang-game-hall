package com.kwad.framework.filedownloader.d;

public final class b implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.kwad.framework.filedownloader.d.b> CREATOR = null;
    private java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> adZ;


    static {
            com.kwad.framework.filedownloader.d.b$1 r0 = new com.kwad.framework.filedownloader.d.b$1
            r0.<init>()
            com.kwad.framework.filedownloader.d.b.CREATOR = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    protected b(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            java.lang.Class<java.lang.String> r0 = java.lang.String.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            java.util.HashMap r2 = r2.readHashMap(r0)
            r1.adZ = r2
            return
    }

    public final void bh(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r0 = r1.adZ
            if (r0 != 0) goto L5
            return
        L5:
            r0.remove(r2)
            return
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final void o(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            com.kwad.sdk.utils.ao.fE(r3)
            com.kwad.sdk.utils.ao.fE(r4)
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r0 = r2.adZ
            if (r0 != 0) goto L11
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.adZ = r0
        L11:
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r0 = r2.adZ
            java.lang.Object r0 = r0.get(r3)
            java.util.List r0 = (java.util.List) r0
            if (r0 != 0) goto L25
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r1 = r2.adZ
            r1.put(r3, r0)
        L25:
            boolean r3 = r0.contains(r4)
            if (r3 != 0) goto L2e
            r0.add(r4)
        L2e:
            return
    }

    public final java.lang.String toString() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r0 = r1.adZ
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> vl() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r0 = r1.adZ
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r2 = r0.adZ
            r1.writeMap(r2)
            return
    }
}
