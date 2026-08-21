package com.bianfeng.fastvo.action;

public class DownloadFile implements java.io.Serializable {
    public static final int STATUS_DOWNLOADED = 4;
    public static final int STATUS_DOWNLOADING = 2;
    public static final int STATUS_NONE = 0;
    public static final int STATUS_PAUSE = 3;
    public static final int STATUS_QUEUE = 1;
    private static final long serialVersionUID = 1;
    public int downedSize;
    public java.lang.String filePath;
    public int status;
    public com.bianfeng.fastvo.action.DownloadTask task;
    public int totalSize;
    public java.lang.String url;

    public DownloadFile() {
            r0 = this;
            r0.<init>()
            return
    }

    public void fillData(com.bianfeng.fastvo.action.DownloadFile r2) {
            r1 = this;
            java.lang.String r0 = r2.url
            r1.url = r0
            int r0 = r2.downedSize
            r1.downedSize = r0
            int r0 = r2.totalSize
            r1.totalSize = r0
            java.lang.String r0 = r2.filePath
            r1.filePath = r0
            int r2 = r2.status
            r1.status = r2
            return
    }

    public java.lang.String toString(int r3) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "status"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L27
            java.lang.String r3 = "url"
            java.lang.String r1 = r2.url     // Catch: java.lang.Exception -> L27
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L27
            java.lang.String r3 = "downedSize"
            int r1 = r2.downedSize     // Catch: java.lang.Exception -> L27
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L27
            java.lang.String r3 = "totalSize"
            int r1 = r2.totalSize     // Catch: java.lang.Exception -> L27
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L27
            java.lang.String r3 = "filePath"
            java.lang.String r1 = r2.filePath     // Catch: java.lang.Exception -> L27
            r0.put(r3, r1)     // Catch: java.lang.Exception -> L27
            goto L2b
        L27:
            r3 = move-exception
            r3.printStackTrace()
        L2b:
            java.lang.String r3 = r0.toString()
            return r3
    }
}
