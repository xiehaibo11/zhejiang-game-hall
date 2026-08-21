package com.mbridge.msdk.foundation.download.database;

public class DownloadModel {
    public static final java.lang.String CREATE_TABLE = "CREATE TABLE IF NOT EXISTS download_record( id INTEGER PRIMARY KEY AUTOINCREMENT,download_id TEXT,download_url TEXT, resource_url TEXT,etag TEXT, director_path TEXT, file_name TEXT, total_bytes INTEGER, downloaded_bytes INTEGER, last_modified_time INTEGER,download_rate INTEGER,usage_counter INTEGER,download_resource_type INTEGER,from_where INTEGER)";
    public static final java.lang.String DIRECTORY_PATH = "director_path";
    public static final java.lang.String DOWNLOADED_BYTES = "downloaded_bytes";
    public static final java.lang.String DOWNLOAD_ID = "download_id";
    public static final java.lang.String DOWNLOAD_RATE = "download_rate";
    public static final java.lang.String DOWNLOAD_RESOURCE_TYPE = "download_resource_type";
    public static final java.lang.String DOWNLOAD_URL = "download_url";
    public static final java.lang.String ETAG = "etag";
    public static final java.lang.String FILE_NAME = "file_name";
    public static final java.lang.String ID = "id";
    public static final java.lang.String LAST_MODIFIED_TIME = "last_modified_time";
    public static final java.lang.String RESOURCE_FROM = "from_where";
    public static final java.lang.String RESOURCE_URL = "resource_url";
    public static final java.lang.String TABLE_NAME = "download_record";
    public static final java.lang.String TOTAL_BYTES = "total_bytes";
    public static final java.lang.String USAGE_COUNTER = "usage_counter";
    private java.lang.String downloadId;
    private int downloadRate;
    private com.mbridge.msdk.foundation.download.DownloadResourceType downloadResourceType;
    private java.lang.String downloadUrl;
    private long downloadedBytes;
    private java.lang.String etag;
    private int from;
    private long lastModifiedTime;
    private java.lang.String resourceUrl;
    private java.lang.String saveDirectorPath;
    private java.lang.String saveFileName;
    private long totalBytes;
    private long unZipResourceByte;
    private java.lang.String unZipResourceDirectory;
    private int usageCounter;

    private DownloadModel() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.ContentValues create(com.mbridge.msdk.foundation.download.database.DownloadModel r3) {
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.String r1 = r3.getDownloadId()
            java.lang.String r2 = "download_id"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getDownloadUrl()
            java.lang.String r2 = "download_url"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getResourceUrl()
            java.lang.String r2 = "resource_url"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getEtag()
            java.lang.String r2 = "etag"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getSaveDirectorPath()
            java.lang.String r2 = "director_path"
            r0.put(r2, r1)
            java.lang.String r1 = r3.getSaveFileName()
            java.lang.String r2 = "file_name"
            r0.put(r2, r1)
            long r1 = r3.getTotalBytes()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "total_bytes"
            r0.put(r2, r1)
            long r1 = r3.getDownloadedBytes()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "downloaded_bytes"
            r0.put(r2, r1)
            long r1 = r3.getLastModifiedTime()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "last_modified_time"
            r0.put(r2, r1)
            int r1 = r3.getDownloadRate()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "download_rate"
            r0.put(r2, r1)
            int r1 = r3.getUsageCounter()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "usage_counter"
            r0.put(r2, r1)
            com.mbridge.msdk.foundation.download.DownloadResourceType r1 = r3.getDownloadResourceType()
            int r1 = r1.resourceType
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "download_resource_type"
            r0.put(r2, r1)
            int r3 = r3.getFrom()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r1 = "from_where"
            r0.put(r1, r3)
            return r0
    }

    public static com.mbridge.msdk.foundation.download.database.DownloadModel create(android.database.Cursor r3) {
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = new com.mbridge.msdk.foundation.download.database.DownloadModel
            r0.<init>()
            java.lang.String r1 = "download_id"
            int r1 = r3.getColumnIndex(r1)
            java.lang.String r1 = r3.getString(r1)
            r0.setDownloadId(r1)
            java.lang.String r1 = "download_url"
            int r1 = r3.getColumnIndex(r1)
            java.lang.String r1 = r3.getString(r1)
            r0.setDownloadUrl(r1)
            java.lang.String r1 = "resource_url"
            int r1 = r3.getColumnIndex(r1)
            java.lang.String r1 = r3.getString(r1)
            r0.setResourceUrl(r1)
            java.lang.String r1 = "etag"
            int r1 = r3.getColumnIndex(r1)
            java.lang.String r1 = r3.getString(r1)
            r0.setEtag(r1)
            java.lang.String r1 = "director_path"
            int r1 = r3.getColumnIndex(r1)
            java.lang.String r1 = r3.getString(r1)
            r0.setSaveDirectorPath(r1)
            java.lang.String r1 = "file_name"
            int r1 = r3.getColumnIndex(r1)
            java.lang.String r1 = r3.getString(r1)
            r0.setSaveFileName(r1)
            java.lang.String r1 = "total_bytes"
            int r1 = r3.getColumnIndex(r1)
            long r1 = r3.getLong(r1)
            r0.setTotalBytes(r1)
            java.lang.String r1 = "downloaded_bytes"
            int r1 = r3.getColumnIndex(r1)
            long r1 = r3.getLong(r1)
            r0.setDownloadedBytes(r1)
            java.lang.String r1 = "last_modified_time"
            int r1 = r3.getColumnIndex(r1)
            long r1 = r3.getLong(r1)
            r0.setLastModifiedTime(r1)
            java.lang.String r1 = "download_rate"
            int r1 = r3.getColumnIndex(r1)
            int r1 = r3.getInt(r1)
            r0.setDownloadRate(r1)
            java.lang.String r1 = "usage_counter"
            int r1 = r3.getColumnIndex(r1)
            int r1 = r3.getInt(r1)
            r0.setUsageCounter(r1)
            java.lang.String r1 = "download_resource_type"
            int r1 = r3.getColumnIndex(r1)
            int r1 = r3.getInt(r1)
            com.mbridge.msdk.foundation.download.DownloadResourceType r1 = com.mbridge.msdk.foundation.download.DownloadResourceType.getDownloadResourceType(r1)
            r0.setDownloadResourceType(r1)
            java.lang.String r1 = "from_where"
            int r1 = r3.getColumnIndex(r1)
            int r3 = r3.getInt(r1)
            r0.setFrom(r3)
            return r0
    }

    public static com.mbridge.msdk.foundation.download.database.DownloadModel create(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, long r7, long r9, int r11, int r12, com.mbridge.msdk.foundation.download.DownloadResourceType r13) {
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = new com.mbridge.msdk.foundation.download.database.DownloadModel
            r0.<init>()
            r0.setDownloadId(r1)
            r0.setDownloadUrl(r2)
            r0.setResourceUrl(r3)
            r0.setEtag(r4)
            r0.setSaveDirectorPath(r5)
            r0.setSaveFileName(r6)
            r0.setDownloadedBytes(r9)
            r0.setTotalBytes(r7)
            long r1 = java.lang.System.currentTimeMillis()
            r0.setLastModifiedTime(r1)
            r0.setUsageCounter(r12)
            r0.setDownloadRate(r11)
            r0.setDownloadResourceType(r13)
            r1 = 0
            r0.setUnZipResourceDirectory(r1)
            r1 = 0
            r0.setUnZipResourceByte(r1)
            r1 = 0
            r0.setFrom(r1)
            return r0
    }

    public static com.mbridge.msdk.foundation.download.database.DownloadModel create(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, long r7, long r9, int r11, int r12, com.mbridge.msdk.foundation.download.DownloadResourceType r13, int r14) {
            com.mbridge.msdk.foundation.download.database.DownloadModel r0 = new com.mbridge.msdk.foundation.download.database.DownloadModel
            r0.<init>()
            r0.setDownloadId(r1)
            r0.setDownloadUrl(r2)
            r0.setResourceUrl(r3)
            r0.setEtag(r4)
            r0.setSaveDirectorPath(r5)
            r0.setSaveFileName(r6)
            r0.setDownloadedBytes(r9)
            r0.setTotalBytes(r7)
            long r1 = java.lang.System.currentTimeMillis()
            r0.setLastModifiedTime(r1)
            r0.setUsageCounter(r12)
            r0.setDownloadRate(r11)
            r0.setDownloadResourceType(r13)
            r1 = 0
            r0.setUnZipResourceDirectory(r1)
            r1 = 0
            r0.setUnZipResourceByte(r1)
            r0.setFrom(r14)
            return r0
    }

    public java.lang.String getDownloadId() {
            r1 = this;
            java.lang.String r0 = r1.downloadId
            return r0
    }

    public int getDownloadRate() {
            r1 = this;
            int r0 = r1.downloadRate
            return r0
    }

    public com.mbridge.msdk.foundation.download.DownloadResourceType getDownloadResourceType() {
            r1 = this;
            com.mbridge.msdk.foundation.download.DownloadResourceType r0 = r1.downloadResourceType
            return r0
    }

    public java.lang.String getDownloadUrl() {
            r1 = this;
            java.lang.String r0 = r1.downloadUrl
            return r0
    }

    public long getDownloadedBytes() {
            r2 = this;
            long r0 = r2.downloadedBytes
            return r0
    }

    public java.lang.String getEtag() {
            r1 = this;
            java.lang.String r0 = r1.etag
            return r0
    }

    public int getFrom() {
            r1 = this;
            int r0 = r1.from
            return r0
    }

    public long getLastModifiedTime() {
            r2 = this;
            long r0 = r2.lastModifiedTime
            return r0
    }

    public java.lang.String getResourceUrl() {
            r1 = this;
            java.lang.String r0 = r1.resourceUrl
            return r0
    }

    public java.lang.String getSaveDirectorPath() {
            r1 = this;
            java.lang.String r0 = r1.saveDirectorPath
            return r0
    }

    public java.lang.String getSaveFileName() {
            r1 = this;
            java.lang.String r0 = r1.saveFileName
            return r0
    }

    public long getTotalBytes() {
            r2 = this;
            long r0 = r2.totalBytes
            return r0
    }

    public long getUnZipResourceByte() {
            r2 = this;
            long r0 = r2.unZipResourceByte
            return r0
    }

    public java.lang.String getUnZipResourceDirectory() {
            r1 = this;
            java.lang.String r0 = r1.unZipResourceDirectory
            return r0
    }

    public int getUsageCounter() {
            r1 = this;
            int r0 = r1.usageCounter
            return r0
    }

    public void setDownloadId(java.lang.String r1) {
            r0 = this;
            r0.downloadId = r1
            return
    }

    public void setDownloadRate(int r1) {
            r0 = this;
            r0.downloadRate = r1
            return
    }

    public void setDownloadResourceType(com.mbridge.msdk.foundation.download.DownloadResourceType r1) {
            r0 = this;
            r0.downloadResourceType = r1
            return
    }

    public void setDownloadUrl(java.lang.String r1) {
            r0 = this;
            r0.downloadUrl = r1
            return
    }

    public void setDownloadedBytes(long r1) {
            r0 = this;
            r0.downloadedBytes = r1
            return
    }

    public void setEtag(java.lang.String r1) {
            r0 = this;
            r0.etag = r1
            return
    }

    public void setFrom(int r1) {
            r0 = this;
            r0.from = r1
            return
    }

    public void setLastModifiedTime(long r1) {
            r0 = this;
            r0.lastModifiedTime = r1
            return
    }

    public void setResourceUrl(java.lang.String r1) {
            r0 = this;
            r0.resourceUrl = r1
            return
    }

    public void setSaveDirectorPath(java.lang.String r1) {
            r0 = this;
            r0.saveDirectorPath = r1
            return
    }

    public void setSaveFileName(java.lang.String r1) {
            r0 = this;
            r0.saveFileName = r1
            return
    }

    public void setTotalBytes(long r1) {
            r0 = this;
            r0.totalBytes = r1
            return
    }

    public void setUnZipResourceByte(long r1) {
            r0 = this;
            r0.unZipResourceByte = r1
            return
    }

    public void setUnZipResourceDirectory(java.lang.String r1) {
            r0 = this;
            r0.unZipResourceDirectory = r1
            return
    }

    public void setUsageCounter(int r1) {
            r0 = this;
            r0.usageCounter = r1
            return
    }
}
