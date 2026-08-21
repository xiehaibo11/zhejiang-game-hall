package com.mbridge.msdk.foundation.download.database;

public interface IDatabaseHelper {
    public static final java.lang.String TAG = "DatabaseHelper";

    public interface IDatabaseListener {
        void onDatabase(com.mbridge.msdk.foundation.download.database.DownloadModel r1);
    }

    void clear();

    void find(java.lang.String r1, java.lang.String r2, com.mbridge.msdk.foundation.download.database.IDatabaseHelper.IDatabaseListener r3);

    java.util.List<com.mbridge.msdk.foundation.download.database.DownloadModel> findAll();

    void findByDownloadUrl(java.lang.String r1, com.mbridge.msdk.foundation.download.database.IDatabaseHelper.IDatabaseListener r2);

    java.util.List<com.mbridge.msdk.foundation.download.database.DownloadModel> getUnwantedModels(long r1);

    void insert(com.mbridge.msdk.foundation.download.database.DownloadModel r1);

    android.database.Cursor rawQuery(java.lang.String r1, java.lang.String[] r2);

    void remove(java.lang.String r1);

    void remove(java.lang.String r1, java.lang.String r2);

    void update(com.mbridge.msdk.foundation.download.database.DownloadModel r1, java.lang.String r2);

    void updateProgress(java.lang.String r1, java.lang.String r2, com.mbridge.msdk.foundation.download.database.DownloadModel r3);

    void updateUnzipResource(java.lang.String r1, java.lang.String r2, long r3);
}
