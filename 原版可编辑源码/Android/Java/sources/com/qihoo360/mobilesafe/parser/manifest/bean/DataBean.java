package com.qihoo360.mobilesafe.parser.manifest.bean;

import android.text.TextUtils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class DataBean {
    public String host;
    public String mimeType;
    public String path;
    public String pathPattern;
    public String pathPrefix;
    public String port;
    public String scheme;

    public String toString() {
        return String.format("{scheme:%s, host:%s, mimeType:%s, path:%s, pathPattern:%s, pathPrefix:%s, port:%s}", this.scheme, this.host, this.mimeType, this.pathPattern, this.pathPrefix, this.path, this.port);
    }

    public int getPatternMatcherType() {
        if (TextUtils.isEmpty(this.pathPattern) && TextUtils.isEmpty(this.pathPattern)) {
            return 0;
        }
        return !TextUtils.isEmpty(this.pathPrefix) ? 1 : 2;
    }
}
