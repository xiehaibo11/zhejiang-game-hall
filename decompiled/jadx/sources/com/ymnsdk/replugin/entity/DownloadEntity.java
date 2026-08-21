package com.ymnsdk.replugin.entity;

import android.app.Activity;
import com.ymnsdk.replugin.patch.download.DownloadCallback;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class DownloadEntity {
    Activity activity;
    DownloadCallback callback;
    long downSize;
    int downloadType;
    String downloadUri;
    String md5;
    int noNetTimeout;
    String pluginId;
    int weaknetTimeout;

    public DownloadEntity() {
    }

    public DownloadEntity(Activity activity, String str, String str2, int i, long j, String str3, int i2, int i3, DownloadCallback downloadCallback) {
        this.activity = activity;
        this.pluginId = str;
        this.downloadUri = str2;
        this.downloadType = i;
        this.downSize = j;
        this.md5 = str3;
        this.noNetTimeout = i2;
        this.weaknetTimeout = i3;
        this.callback = downloadCallback;
    }

    public Activity getActivity() {
        return this.activity;
    }

    public void setActivity(Activity activity) {
        this.activity = activity;
    }

    public String getPluginId() {
        return this.pluginId;
    }

    public void setPluginId(String str) {
        this.pluginId = str;
    }

    public String getDownloadUri() {
        return this.downloadUri;
    }

    public void setDownloadUri(String str) {
        this.downloadUri = str;
    }

    public int getDownloadType() {
        return this.downloadType;
    }

    public void setDownloadType(int i) {
        this.downloadType = i;
    }

    public long getDownSize() {
        return this.downSize;
    }

    public void setDownSize(long j) {
        this.downSize = j;
    }

    public String getMd5() {
        return this.md5;
    }

    public void setMd5(String str) {
        this.md5 = str;
    }

    public int getNoNetTimeout() {
        return this.noNetTimeout;
    }

    public void setNoNetTimeout(int i) {
        this.noNetTimeout = i;
    }

    public int getWeaknetTimeout() {
        return this.weaknetTimeout;
    }

    public void setWeaknetTimeout(int i) {
        this.weaknetTimeout = i;
    }

    public DownloadCallback getCallback() {
        return this.callback;
    }

    public void setCallback(DownloadCallback downloadCallback) {
        this.callback = downloadCallback;
    }
}
