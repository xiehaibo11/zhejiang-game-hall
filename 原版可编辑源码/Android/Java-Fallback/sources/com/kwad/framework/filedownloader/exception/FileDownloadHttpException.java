package com.kwad.framework.filedownloader.exception;

public class FileDownloadHttpException extends java.io.IOException {
    private final int mCode;
    private final java.util.Map<java.lang.String, java.util.List<java.lang.String>> mRequestHeaderMap;
    private final java.util.Map<java.lang.String, java.util.List<java.lang.String>> mResponseHeaderMap;

    public FileDownloadHttpException(int r4, java.util.Map<java.lang.String, java.util.List<java.lang.String>> r5, java.util.Map<java.lang.String, java.util.List<java.lang.String>> r6) {
            r3 = this;
            r0 = 3
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r2 = 0
            r0[r2] = r1
            r1 = 1
            r0[r1] = r5
            r1 = 2
            r0[r1] = r6
            java.lang.String r6 = "response requestHttpCode error: %d, \n request headers: %s \n response headers: %s"
            java.lang.String r6 = com.kwad.framework.filedownloader.f.f.b(r6, r0)
            r3.<init>(r6)
            r3.mCode = r4
            java.util.Map r4 = cloneSerializableMap(r5)
            r3.mRequestHeaderMap = r4
            java.util.Map r4 = cloneSerializableMap(r5)
            r3.mResponseHeaderMap = r4
            return
    }

    private static java.util.Map<java.lang.String, java.util.List<java.lang.String>> cloneSerializableMap(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        Ld:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L2e
            java.lang.Object r1 = r4.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.util.ArrayList r3 = new java.util.ArrayList
            java.lang.Object r1 = r1.getValue()
            java.util.Collection r1 = (java.util.Collection) r1
            r3.<init>(r1)
            r0.put(r2, r3)
            goto Ld
        L2e:
            return r0
    }

    public int getCode() {
            r1 = this;
            int r0 = r1.mCode
            return r0
    }

    public java.util.Map<java.lang.String, java.util.List<java.lang.String>> getRequestHeader() {
            r1 = this;
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r0 = r1.mRequestHeaderMap
            return r0
    }

    public java.util.Map<java.lang.String, java.util.List<java.lang.String>> getResponseHeader() {
            r1 = this;
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r0 = r1.mResponseHeaderMap
            return r0
    }
}
