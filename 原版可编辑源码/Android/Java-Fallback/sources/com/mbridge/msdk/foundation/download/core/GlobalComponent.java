package com.mbridge.msdk.foundation.download.core;

public final class GlobalComponent {
    private static volatile com.mbridge.msdk.foundation.download.core.GlobalComponent INSTANCE;
    private int byteBufferSize;
    private com.mbridge.msdk.foundation.download.MBDownloadConfig config;
    private android.content.Context context;
    private com.mbridge.msdk.foundation.download.database.IDatabaseHelper databaseHelper;
    private java.lang.String databaseTableName;
    private com.mbridge.msdk.foundation.download.utils.ILogger logger;
    private volatile com.mbridge.msdk.thrid.okhttp.OkHttpClient okHttpClient;



    private GlobalComponent() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "download_record"
            r1.databaseTableName = r0
            r0 = 4096(0x1000, float:5.74E-42)
            r1.byteBufferSize = r0
            return
    }

    public static com.mbridge.msdk.foundation.download.core.GlobalComponent getInstance() {
            com.mbridge.msdk.foundation.download.core.GlobalComponent r0 = com.mbridge.msdk.foundation.download.core.GlobalComponent.INSTANCE
            boolean r0 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r0)
            if (r0 == 0) goto L1f
            java.lang.Class<com.mbridge.msdk.foundation.download.core.GlobalComponent> r0 = com.mbridge.msdk.foundation.download.core.GlobalComponent.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.download.core.GlobalComponent r1 = com.mbridge.msdk.foundation.download.core.GlobalComponent.INSTANCE     // Catch: java.lang.Throwable -> L1c
            boolean r1 = com.mbridge.msdk.foundation.download.utils.Objects.isNull(r1)     // Catch: java.lang.Throwable -> L1c
            if (r1 == 0) goto L1a
            com.mbridge.msdk.foundation.download.core.GlobalComponent r1 = new com.mbridge.msdk.foundation.download.core.GlobalComponent     // Catch: java.lang.Throwable -> L1c
            r1.<init>()     // Catch: java.lang.Throwable -> L1c
            com.mbridge.msdk.foundation.download.core.GlobalComponent.INSTANCE = r1     // Catch: java.lang.Throwable -> L1c
        L1a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            goto L1f
        L1c:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1c
            throw r1
        L1f:
            com.mbridge.msdk.foundation.download.core.GlobalComponent r0 = com.mbridge.msdk.foundation.download.core.GlobalComponent.INSTANCE
            return r0
    }

    public final int getByteBufferSize() {
            r1 = this;
            int r0 = r1.byteBufferSize
            return r0
    }

    public final android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.context
            return r0
    }

    public final com.mbridge.msdk.foundation.download.database.IDatabaseHelper getDatabaseHelper() {
            r1 = this;
            com.mbridge.msdk.foundation.download.database.IDatabaseHelper r0 = r1.databaseHelper
            return r0
    }

    public final java.lang.String getDatabaseTableName() {
            r1 = this;
            java.lang.String r0 = r1.databaseTableName
            return r0
    }

    public final com.mbridge.msdk.foundation.download.utils.ILogger getLogger() {
            r1 = this;
            com.mbridge.msdk.foundation.download.utils.ILogger r0 = r1.logger
            if (r0 != 0) goto Lb
            com.mbridge.msdk.foundation.download.core.GlobalComponent$2 r0 = new com.mbridge.msdk.foundation.download.core.GlobalComponent$2
            r0.<init>(r1)
            r1.logger = r0
        Lb:
            com.mbridge.msdk.foundation.download.utils.ILogger r0 = r1.logger
            return r0
    }

    public final com.mbridge.msdk.thrid.okhttp.OkHttpClient getOkHttpClient() {
            r6 = this;
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r6.okHttpClient
            if (r0 != 0) goto L6d
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.mbridge.msdk.thrid.okhttp.Protocol r1 = com.mbridge.msdk.thrid.okhttp.Protocol.HTTP_1_1
            r0.add(r1)
            com.mbridge.msdk.thrid.okhttp.Dispatcher r1 = new com.mbridge.msdk.thrid.okhttp.Dispatcher
            r1.<init>()
            com.mbridge.msdk.foundation.download.MBDownloadConfig r2 = r6.config
            int r2 = r2.getMaxRequests()
            r1.setMaxRequests(r2)
            com.mbridge.msdk.foundation.download.MBDownloadConfig r2 = r6.config
            int r2 = r2.getMaxRequestsPerHost()
            r1.setMaxRequestsPerHost(r2)
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r2 = new com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder
            r2.<init>()
            com.mbridge.msdk.foundation.download.MBDownloadConfig r3 = r6.config
            long r3 = r3.getDefaultConnectTimeout()
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MILLISECONDS
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r2 = r2.connectTimeout(r3, r5)
            com.mbridge.msdk.foundation.download.MBDownloadConfig r3 = r6.config
            long r3 = r3.getDefaultConnectTimeout()
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MILLISECONDS
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r2 = r2.readTimeout(r3, r5)
            com.mbridge.msdk.foundation.download.MBDownloadConfig r3 = r6.config
            long r3 = r3.getDefaultWriteTimeout()
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.MILLISECONDS
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r2 = r2.writeTimeout(r3, r5)
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r1 = r2.dispatcher(r1)
            com.mbridge.msdk.foundation.download.MBDownloadConfig r2 = r6.config
            long r2 = r2.getDefaultPingInterval()
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.MILLISECONDS
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r1 = r1.pingInterval(r2, r4)
            r2 = 1
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r1 = r1.retryOnConnectionFailure(r2)
            com.mbridge.msdk.thrid.okhttp.OkHttpClient$Builder r0 = r1.protocols(r0)
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r0.build()
            r6.okHttpClient = r0
        L6d:
            com.mbridge.msdk.thrid.okhttp.OkHttpClient r0 = r6.okHttpClient
            return r0
    }

    public final void initialize(android.content.Context r3, com.mbridge.msdk.foundation.download.MBDownloadConfig r4) {
            r2 = this;
            android.content.Context r0 = r3.getApplicationContext()
            r2.context = r0
            com.mbridge.msdk.foundation.download.utils.ILogger r0 = r4.getLogger()
            r2.logger = r0
            r2.config = r4
            if (r4 == 0) goto L2c
            android.os.Handler r0 = r4.getDatabaseHandler()
            if (r0 == 0) goto L2c
            com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper r0 = r4.getDatabaseHelper()
            if (r0 == 0) goto L2c
            com.mbridge.msdk.foundation.download.database.DatabaseHelper r0 = new com.mbridge.msdk.foundation.download.database.DatabaseHelper
            android.os.Handler r1 = r4.getDatabaseHandler()
            com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper r4 = r4.getDatabaseHelper()
            r0.<init>(r3, r1, r4)
            r2.databaseHelper = r0
            goto L33
        L2c:
            com.mbridge.msdk.foundation.download.core.GlobalComponent$1 r3 = new com.mbridge.msdk.foundation.download.core.GlobalComponent$1
            r3.<init>(r2)
            r2.databaseHelper = r3
        L33:
            return
    }
}
