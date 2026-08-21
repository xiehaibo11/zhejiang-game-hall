package com.bianfeng.fastvo.action;

import java.io.Serializable;
import org.json.JSONObject;

public class DownloadFile implements Serializable {
    public static final int STATUS_DOWNLOADED = 4;
    public static final int STATUS_DOWNLOADING = 2;
    public static final int STATUS_NONE = 0;
    public static final int STATUS_PAUSE = 3;
    public static final int STATUS_QUEUE = 1;
    private static final long serialVersionUID = 1;
    public int downedSize;
    public String filePath;
    public int status;
    public DownloadTask task;
    public int totalSize;
    public String url;

    public void fillData(DownloadFile downloadFile) {
        this.url = downloadFile.url;
        this.downedSize = downloadFile.downedSize;
        this.totalSize = downloadFile.totalSize;
        this.filePath = downloadFile.filePath;
        this.status = downloadFile.status;
    }

    public String toString(int i) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("status", i);
            jSONObject.put("url", this.url);
            jSONObject.put("downedSize", this.downedSize);
            jSONObject.put("totalSize", this.totalSize);
            jSONObject.put("filePath", this.filePath);
        } catch (Exception e) {
            e.printStackTrace();
        }
        return jSONObject.toString();
    }
}
