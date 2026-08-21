package com.ymnsdk.replugin.entity;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class Patch {
    private String from_version;
    private String patch_md5;
    private String patch_path;
    private long patch_size;

    public String getFrom_version() {
        return this.from_version;
    }

    public void setFrom_version(String str) {
        this.from_version = str;
    }

    public long getPatch_size() {
        return this.patch_size;
    }

    public void setPatch_size(long j) {
        this.patch_size = j;
    }

    public String getPatch_md5() {
        return this.patch_md5;
    }

    public void setPatch_md5(String str) {
        this.patch_md5 = str;
    }

    public String getPatch_path() {
        return this.patch_path;
    }

    public void setPatch_path(String str) {
        this.patch_path = str;
    }
}
