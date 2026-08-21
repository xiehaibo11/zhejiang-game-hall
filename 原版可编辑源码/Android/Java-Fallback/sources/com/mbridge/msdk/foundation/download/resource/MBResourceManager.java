package com.mbridge.msdk.foundation.download.resource;

public class MBResourceManager {
    private static volatile com.mbridge.msdk.foundation.download.resource.MBResourceManager MBResourceManager;


    private MBResourceManager() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.mbridge.msdk.foundation.download.resource.MBResourceManager access$000() {
            com.mbridge.msdk.foundation.download.resource.MBResourceManager r0 = com.mbridge.msdk.foundation.download.resource.MBResourceManager.MBResourceManager
            return r0
    }

    public static com.mbridge.msdk.foundation.download.resource.MBResourceManager getInstance() {
            com.mbridge.msdk.foundation.download.resource.MBResourceManager r0 = com.mbridge.msdk.foundation.download.resource.MBResourceManager.MBResourceManager
            if (r0 != 0) goto L17
            java.lang.Class<com.mbridge.msdk.foundation.download.resource.MBResourceManager> r0 = com.mbridge.msdk.foundation.download.resource.MBResourceManager.class
            monitor-enter(r0)
            com.mbridge.msdk.foundation.download.resource.MBResourceManager r1 = com.mbridge.msdk.foundation.download.resource.MBResourceManager.MBResourceManager     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.foundation.download.resource.MBResourceManager r1 = new com.mbridge.msdk.foundation.download.resource.MBResourceManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.foundation.download.resource.MBResourceManager.MBResourceManager = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.mbridge.msdk.foundation.download.resource.MBResourceManager r0 = com.mbridge.msdk.foundation.download.resource.MBResourceManager.MBResourceManager
            return r0
    }

    public void deleteFile(java.io.File r6) {
            r5 = this;
            if (r6 == 0) goto L2f
            boolean r0 = r6.exists()
            if (r0 != 0) goto L9
            goto L2f
        L9:
            boolean r0 = r6.isFile()
            if (r0 == 0) goto L13
            r6.delete()
            goto L2f
        L13:
            java.io.File[] r0 = r6.listFiles()
            int r1 = r0.length
            r2 = 0
        L19:
            if (r2 >= r1) goto L2c
            r3 = r0[r2]
            java.io.File r4 = new java.io.File
            java.lang.String r3 = r3.getAbsolutePath()
            r4.<init>(r3)
            r5.deleteFile(r4)
            int r2 = r2 + 1
            goto L19
        L2c:
            r6.delete()
        L2f:
            return
    }

    public void deleteFile(java.lang.String r2) {
            r1 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            r1.deleteFile(r0)
            return
    }

    public void executeResourceStrategy(com.mbridge.msdk.foundation.download.resource.ResourceConfig r5) {
            r4 = this;
            if (r5 == 0) goto L56
            java.util.Queue r0 = r5.getResourceStrategyQueue()
            if (r0 == 0) goto L56
            java.util.Queue r0 = r5.getResourceStrategyQueue()
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L56
            java.util.Queue r0 = r5.getResourceStrategyQueue()
            if (r0 == 0) goto L56
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L1f
            goto L56
        L1f:
            com.mbridge.msdk.foundation.download.core.GlobalComponent r1 = com.mbridge.msdk.foundation.download.core.GlobalComponent.getInstance()
            com.mbridge.msdk.foundation.download.utils.ILogger r1 = r1.getLogger()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "配置的资源管理策略数量： "
            r2.append(r3)
            int r3 = r0.size()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ResourceStrategy"
            r1.log(r3, r2)
            com.mbridge.msdk.foundation.download.resource.MBResourceManager$1 r1 = new com.mbridge.msdk.foundation.download.resource.MBResourceManager$1
            r1.<init>(r4, r0, r5)
            com.mbridge.msdk.foundation.download.core.ExecutorManager r5 = com.mbridge.msdk.foundation.download.core.ExecutorManager.getInstance()
            com.mbridge.msdk.foundation.download.core.ExecutorSupplier r5 = r5.getExecutorSupplier()
            java.util.concurrent.ExecutorService r5 = r5.getLruCacheThreadTasks()
            r5.execute(r1)
        L56:
            return
    }

    public com.mbridge.msdk.foundation.download.resource.stream.DownloadFileOutputStream getDownloadFileOutputStream(java.io.File r2) throws java.io.IOException {
            r1 = this;
            if (r2 == 0) goto L1c
            java.io.File r0 = r2.getParentFile()
            boolean r0 = r0.exists()
            if (r0 != 0) goto L13
            java.io.File r0 = r2.getParentFile()
            r0.mkdirs()
        L13:
            r2.createNewFile()
            com.mbridge.msdk.foundation.download.resource.stream.FileDownloadRandomAccessDownloadFile r0 = new com.mbridge.msdk.foundation.download.resource.stream.FileDownloadRandomAccessDownloadFile
            r0.<init>(r2)
            return r0
        L1c:
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r0 = "file is null"
            r2.<init>(r0)
            throw r2
    }

    public java.lang.String getDownloadId(java.lang.String r3) {
            r2 = this;
            java.net.URL r0 = new java.net.URL     // Catch: java.net.MalformedURLException -> L6 java.lang.Throwable -> L27
            r0.<init>(r3)     // Catch: java.net.MalformedURLException -> L6 java.lang.Throwable -> L27
            goto L7
        L6:
            r3 = 0
        L7:
            java.lang.String r0 = "MD5"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Throwable -> L27 java.lang.Throwable -> L27
            java.lang.String r1 = "UTF-8"
            byte[] r3 = r3.getBytes(r1)     // Catch: java.lang.Throwable -> L27 java.lang.Throwable -> L27
            r0.update(r3)     // Catch: java.lang.Throwable -> L27 java.lang.Throwable -> L27
            java.math.BigInteger r3 = new java.math.BigInteger     // Catch: java.lang.Throwable -> L27 java.lang.Throwable -> L27
            r1 = 1
            byte[] r0 = r0.digest()     // Catch: java.lang.Throwable -> L27 java.lang.Throwable -> L27
            r3.<init>(r1, r0)     // Catch: java.lang.Throwable -> L27 java.lang.Throwable -> L27
            r0 = 16
            java.lang.String r3 = r3.toString(r0)     // Catch: java.lang.Throwable -> L27 java.lang.Throwable -> L27
            return r3
        L27:
            java.lang.String r3 = ""
            return r3
    }

    public long getFileSize(java.io.File r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            boolean r4 = com.mbridge.msdk.foundation.download.utils.Objects.exists(r3, r4, r5)
            r0 = 0
            if (r4 == 0) goto Ld
            long r3 = r3.length()     // Catch: java.lang.Exception -> Ld
            return r3
        Ld:
            return r0
    }

    public void unZip(java.lang.String r2, java.lang.String r3) throws java.io.IOException {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L15
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L15
            com.mbridge.msdk.foundation.download.utils.UnzipUtility r0 = new com.mbridge.msdk.foundation.download.utils.UnzipUtility
            r0.<init>()
            r0.unzip(r2, r3)
            return
        L15:
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r3 = "zipFilePath or destDirectory is null"
            r2.<init>(r3)
            throw r2
    }
}
