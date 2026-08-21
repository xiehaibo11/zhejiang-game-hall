package com.qihoo360.mobilesafe.parser.manifest.bean;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class DataBean {
    public java.lang.String host;
    public java.lang.String mimeType;
    public java.lang.String path;
    public java.lang.String pathPattern;
    public java.lang.String pathPrefix;
    public java.lang.String port;
    public java.lang.String scheme;

    public DataBean() {
            r0 = this;
            r0.<init>()
            return
    }

    public int getPatternMatcherType() {
            r1 = this;
            java.lang.String r0 = r1.pathPattern
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L12
            java.lang.String r0 = r1.pathPattern
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L12
            r0 = 0
            return r0
        L12:
            java.lang.String r0 = r1.pathPrefix
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1c
            r0 = 1
            return r0
        L1c:
            r0 = 2
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            r0 = 7
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r3.scheme
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = r3.host
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = r3.mimeType
            r2 = 2
            r0[r2] = r1
            java.lang.String r1 = r3.pathPattern
            r2 = 3
            r0[r2] = r1
            java.lang.String r1 = r3.pathPrefix
            r2 = 4
            r0[r2] = r1
            java.lang.String r1 = r3.path
            r2 = 5
            r0[r2] = r1
            java.lang.String r1 = r3.port
            r2 = 6
            r0[r2] = r1
            java.lang.String r1 = "{scheme:%s, host:%s, mimeType:%s, path:%s, pathPattern:%s, pathPrefix:%s, port:%s}"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }
}
