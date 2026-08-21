package com.kwad.sdk.collector.model.jni;

public class UploadEntryNative extends com.kwad.sdk.collector.model.jni.NativeObject implements com.kwad.sdk.collector.model.e {
    public UploadEntryNative() {
            r2 = this;
            r2.<init>()
            long r0 = com.kwad.sdk.collector.AppStatusNative.nativeCreateUploadEntry()
            r2.mPtr = r0
            return
    }

    public UploadEntryNative(long r1) {
            r0 = this;
            r0.<init>()
            r0.mPtr = r1
            return
    }

    private static java.lang.String a(com.kwad.sdk.collector.model.jni.UploadEntryNative r0) {
            java.lang.String r0 = com.kwad.sdk.collector.AppStatusNative.uploadEntryGetPackageName(r0)
            return r0
    }

    private java.lang.String yN() {
            r3 = this;
            java.lang.String r0 = com.kwad.sdk.collector.AppStatusNative.uploadEntryGetPackageName(r3)     // Catch: java.lang.Throwable -> L17
            java.lang.String r1 = com.kwad.sdk.collector.AppStatusNative.uploadEntryGetOriginFilePath(r3)     // Catch: java.lang.Throwable -> L17
            int r2 = r1.indexOf(r0)     // Catch: java.lang.Throwable -> L17
            java.lang.String r1 = r1.substring(r2)     // Catch: java.lang.Throwable -> L17
            java.lang.String r2 = ""
            java.lang.String r0 = r1.replaceFirst(r0, r2)     // Catch: java.lang.Throwable -> L17
            return r0
        L17:
            r0 = 0
            return r0
    }

    @Override
    public void destroy() {
            r4 = this;
            long r0 = r4.mPtr
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lf
            long r0 = r4.mPtr
            com.kwad.sdk.collector.AppStatusNative.nativeDeleteUploadEntry(r0)
            r4.mPtr = r2
        Lf:
            return
    }

    public boolean equals(java.lang.Object r6) {
            r5 = this;
            r0 = 1
            if (r5 != r6) goto L4
            return r0
        L4:
            r1 = 0
            if (r6 == 0) goto L3e
            java.lang.Class r2 = r5.getClass()
            java.lang.Class r3 = r6.getClass()
            if (r2 == r3) goto L12
            goto L3e
        L12:
            com.kwad.sdk.collector.model.jni.UploadEntryNative r6 = (com.kwad.sdk.collector.model.jni.UploadEntryNative) r6
            java.lang.String r2 = com.kwad.sdk.collector.AppStatusNative.uploadEntryGetPackageName(r5)
            java.lang.String r3 = com.kwad.sdk.collector.AppStatusNative.uploadEntryGetOriginFilePath(r5)
            if (r2 == 0) goto L29
            java.lang.String r4 = a(r6)
            boolean r2 = r2.equals(r4)
            if (r2 != 0) goto L30
            goto L2f
        L29:
            java.lang.String r2 = a(r6)
            if (r2 == 0) goto L30
        L2f:
            return r1
        L30:
            java.lang.String r6 = com.kwad.sdk.collector.AppStatusNative.uploadEntryGetOriginFilePath(r6)
            if (r3 == 0) goto L3b
            boolean r6 = r3.equals(r6)
            return r6
        L3b:
            if (r6 != 0) goto L3e
            return r0
        L3e:
            return r1
    }

    public int hashCode() {
            r3 = this;
            java.lang.String r0 = com.kwad.sdk.collector.AppStatusNative.uploadEntryGetPackageName(r3)
            java.lang.String r1 = com.kwad.sdk.collector.AppStatusNative.uploadEntryGetOriginFilePath(r3)
            r2 = 0
            if (r0 == 0) goto L10
            int r0 = r0.hashCode()
            goto L11
        L10:
            r0 = r2
        L11:
            int r0 = r0 * 31
            if (r1 == 0) goto L19
            int r2 = r1.hashCode()
        L19:
            int r0 = r0 + r2
            return r0
    }

    @Override
    public void parseJson(org.json.JSONObject r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "packageName"
            java.lang.String r0 = r3.optString(r0)
            java.lang.String r1 = "originFilePath"
            java.lang.String r3 = r3.optString(r1)
            com.kwad.sdk.collector.AppStatusNative.uploadEntrySetPackageName(r2, r0)
            com.kwad.sdk.collector.AppStatusNative.uploadEntrySetOriginFilePath(r2, r3)
            return
    }

    @Override
    public org.json.JSONObject toJson() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = com.kwad.sdk.collector.AppStatusNative.uploadEntryGetPackageName(r3)
            java.lang.String r2 = "packageName"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            java.lang.String r1 = com.kwad.sdk.collector.AppStatusNative.uploadEntryGetOriginFilePath(r3)
            java.lang.String r2 = "originFilePath"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "UploadEntry{packageName='"
            r0.<init>(r1)
            java.lang.String r1 = com.kwad.sdk.collector.AppStatusNative.uploadEntryGetPackageName(r2)
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", originFile="
            r0.append(r1)
            java.lang.String r1 = com.kwad.sdk.collector.AppStatusNative.uploadEntryGetOriginFilePath(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final org.json.JSONObject yL() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L25
            r0.<init>()     // Catch: java.lang.Throwable -> L25
            java.lang.String r1 = "packageName"
            java.lang.String r2 = com.kwad.sdk.collector.AppStatusNative.uploadEntryGetPackageName(r3)     // Catch: java.lang.Throwable -> L25
            com.kwad.sdk.utils.t.putValue(r0, r1, r2)     // Catch: java.lang.Throwable -> L25
            java.lang.String r1 = "content"
            java.lang.String r2 = com.kwad.sdk.collector.AppStatusNative.uploadEntryGetOriginFilePath(r3)     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = com.kwad.sdk.collector.e.cl(r2)     // Catch: java.lang.Throwable -> L25
            com.kwad.sdk.utils.t.putValue(r0, r1, r2)     // Catch: java.lang.Throwable -> L25
            java.lang.String r1 = r3.yN()     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = "fileName"
            com.kwad.sdk.utils.t.putValue(r0, r2, r1)     // Catch: java.lang.Throwable -> L25
            return r0
        L25:
            r0 = 0
            return r0
    }
}
