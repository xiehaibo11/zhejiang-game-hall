package com.ymnsdk.replugin.entity;

import com.ymnsdk.replugin.patch.download.DownloadFileInfo;
import java.util.Map;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class DownloadFileDataEnity {
    Map<String, DownloadFileInfo> infoMap;

    public Map<String, DownloadFileInfo> getInfoMap() {
        return this.infoMap;
    }

    public void setInfoMap(Map<String, DownloadFileInfo> map) {
        this.infoMap = map;
    }
}
