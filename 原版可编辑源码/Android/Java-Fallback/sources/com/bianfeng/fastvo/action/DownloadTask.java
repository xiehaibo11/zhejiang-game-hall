package com.bianfeng.fastvo.action;

public class DownloadTask extends android.os.AsyncTask<com.bianfeng.fastvo.action.DownloadFile, java.lang.Integer, java.lang.Integer> {
    public static final int ERROR_CONTENT_LENGTH_INVALID = 402;
    public static final int ERROR_OPEN_CONNECTION_FAIL = 401;
    public static final int ERROR_PAUSE = 403;
    public static final int ERROR_UNKNOW = 400;
    public static int RW_BUF_SIZE = 1024;
    public static final int SUCCESS_NORMAL = 200;
    public static final int SUCCESS_ON_CHECK = 201;
    private android.content.Context context;
    public com.bianfeng.fastvo.action.DownloadFile fileInfo;
    private int lastProgress;
    private com.bianfeng.fastvo.action.DownloadListener listener;
    private boolean pause;

    static {
            return
    }

    public DownloadTask(android.content.Context r1, com.bianfeng.fastvo.action.DownloadListener r2) {
            r0 = this;
            r0.<init>()
            r0.context = r1
            r0.listener = r2
            return
    }

    private java.net.HttpURLConnection getHttpConnection(java.lang.String r4, int r5) {
            r3 = this;
            java.net.URL r0 = new java.net.URL     // Catch: java.io.IOException -> L3d
            r0.<init>(r4)     // Catch: java.io.IOException -> L3d
            android.content.Context r4 = r3.context     // Catch: java.io.IOException -> L3d
            java.net.HttpURLConnection r4 = com.bianfeng.ymnsdk.action.HttpHelper.getProxy(r4, r0)     // Catch: java.io.IOException -> L3d
            if (r4 != 0) goto L13
            java.net.URLConnection r4 = r0.openConnection()     // Catch: java.io.IOException -> L3d
            java.net.HttpURLConnection r4 = (java.net.HttpURLConnection) r4     // Catch: java.io.IOException -> L3d
        L13:
            r0 = 1
            r4.setAllowUserInteraction(r0)     // Catch: java.io.IOException -> L3d
            java.lang.String r0 = "GET"
            r4.setRequestMethod(r0)     // Catch: java.io.IOException -> L3d
            r0 = 5000(0x1388, float:7.006E-42)
            r4.setReadTimeout(r0)     // Catch: java.io.IOException -> L3d
            java.lang.String r0 = "Range"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L3d
            r1.<init>()     // Catch: java.io.IOException -> L3d
            java.lang.String r2 = "bytes="
            r1.append(r2)     // Catch: java.io.IOException -> L3d
            r1.append(r5)     // Catch: java.io.IOException -> L3d
            java.lang.String r5 = "-"
            r1.append(r5)     // Catch: java.io.IOException -> L3d
            java.lang.String r5 = r1.toString()     // Catch: java.io.IOException -> L3d
            r4.setRequestProperty(r0, r5)     // Catch: java.io.IOException -> L3d
            return r4
        L3d:
            r4 = move-exception
            r4.printStackTrace()
            r4 = 0
            return r4
    }

    public void cancel() {
            r2 = this;
            r0 = 1
            r2.pause = r0
            com.bianfeng.fastvo.action.DownloadFile r0 = r2.fileInfo
            if (r0 == 0) goto La
            r1 = 3
            r0.status = r1
        La:
            return
    }

    protected java.lang.Integer doInBackground(com.bianfeng.fastvo.action.DownloadFile... r14) {
            r13 = this;
            com.bianfeng.fastvo.action.DownloadFile r0 = r13.fileInfo
            r1 = 0
            if (r0 != 0) goto L9
            r14 = r14[r1]
            r13.fileInfo = r14
        L9:
            com.bianfeng.fastvo.action.DownloadFile r14 = r13.fileInfo
            java.lang.String r14 = r14.filePath
            java.lang.String r14 = com.bianfeng.fastvo.util.FileUtil.getFolder(r14)
            java.io.File r0 = new java.io.File
            r0.<init>(r14)
            boolean r14 = r0.exists()
            if (r14 != 0) goto L1f
            r0.mkdirs()
        L1f:
            r14 = 400(0x190, float:5.6E-43)
            r0 = 0
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            com.bianfeng.fastvo.action.DownloadFile r3 = r13.fileInfo     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            java.lang.String r3 = r3.filePath     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            boolean r3 = r2.exists()     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            if (r3 == 0) goto L50
            com.bianfeng.fastvo.action.DownloadFile r1 = r13.fileInfo     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            com.bianfeng.fastvo.action.DownloadFile r3 = r13.fileInfo     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            long r4 = r2.length()     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            int r2 = (int) r4     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            r3.totalSize = r2     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            r1.downedSize = r2     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            com.bianfeng.fastvo.action.DownloadListener r1 = r13.listener     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            if (r1 == 0) goto L49
            com.bianfeng.fastvo.action.DownloadListener r1 = r13.listener     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            com.bianfeng.fastvo.action.DownloadFile r2 = r13.fileInfo     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            r1.onBegin(r2)     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
        L49:
            r1 = 201(0xc9, float:2.82E-43)
            java.lang.Integer r14 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            return r14
        L50:
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            r3.<init>()     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            com.bianfeng.fastvo.action.DownloadFile r4 = r13.fileInfo     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            java.lang.String r4 = r4.filePath     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            r3.append(r4)     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            java.lang.String r4 = ".tmp"
            r3.append(r4)     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            boolean r3 = r2.exists()     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            if (r3 == 0) goto L80
            boolean r3 = r2.isFile()     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            if (r3 == 0) goto L7c
            long r3 = r2.length()     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            int r4 = (int) r3     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            goto L84
        L7c:
            r2.delete()     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            goto L83
        L80:
            r2.createNewFile()     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
        L83:
            r4 = 0
        L84:
            java.io.RandomAccessFile r3 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            java.lang.String r5 = "rw"
            r3.<init>(r2, r5)     // Catch: java.lang.Throwable -> L19d java.lang.Exception -> L1a1
            long r5 = (long) r4
            r3.seek(r5)     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L197
            com.bianfeng.fastvo.action.DownloadListener r5 = r13.listener     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L197
            if (r5 == 0) goto L9a
            com.bianfeng.fastvo.action.DownloadListener r5 = r13.listener     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L197
            com.bianfeng.fastvo.action.DownloadFile r6 = r13.fileInfo     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L197
            r5.onBegin(r6)     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L197
        L9a:
            com.bianfeng.fastvo.action.DownloadFile r5 = r13.fileInfo     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L197
            java.lang.String r5 = r5.url     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L197
            java.lang.String r6 = "NOTE"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L197
            r7.<init>()     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L197
            java.lang.String r8 = "target url is "
            r7.append(r8)     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L197
            r7.append(r5)     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L197
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L197
            android.util.Log.i(r6, r7)     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L197
            java.net.HttpURLConnection r5 = r13.getHttpConnection(r5, r4)     // Catch: java.lang.Throwable -> L192 java.lang.Exception -> L197
            r6 = 401(0x191, float:5.62E-43)
            if (r5 != 0) goto Lc9
            java.lang.Integer r14 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r3.close()     // Catch: java.lang.Exception -> Lc3
        Lc3:
            if (r5 == 0) goto Lc8
            r5.disconnect()     // Catch: java.lang.Exception -> Lc8
        Lc8:
            return r14
        Lc9:
            r5.connect()     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            int r7 = r5.getResponseCode()     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r8 = 200(0xc8, float:2.8E-43)
            if (r7 == r8) goto Le5
            r9 = 206(0xce, float:2.89E-43)
            if (r7 == r9) goto Le5
            java.lang.Integer r14 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r3.close()     // Catch: java.lang.Exception -> Ldf
        Ldf:
            if (r5 == 0) goto Le4
            r5.disconnect()     // Catch: java.lang.Exception -> Le4
        Le4:
            return r14
        Le5:
            int r6 = r5.getContentLength()     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            int r7 = r4 + r6
            r9 = -1
            if (r6 != r9) goto Lfd
            r1 = 402(0x192, float:5.63E-43)
            java.lang.Integer r14 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r3.close()     // Catch: java.lang.Exception -> Lf7
        Lf7:
            if (r5 == 0) goto Lfc
            r5.disconnect()     // Catch: java.lang.Exception -> Lfc
        Lfc:
            return r14
        Lfd:
            com.bianfeng.fastvo.action.DownloadFile r6 = r13.fileInfo     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r6.totalSize = r7     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            int r6 = com.bianfeng.fastvo.action.DownloadTask.RW_BUF_SIZE     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            byte[] r6 = new byte[r6]     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            java.io.InputStream r0 = r5.getInputStream()     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
        L109:
            int r10 = r0.read(r6)     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            if (r10 == r9) goto L14c
            r3.write(r6, r1, r10)     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            int r4 = r4 + r10
            com.bianfeng.fastvo.action.DownloadFile r10 = r13.fileInfo     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r10.downedSize = r4     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r10 = 2
            java.lang.Integer[] r10 = new java.lang.Integer[r10]     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            java.lang.Integer r11 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r10[r1] = r11     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r11 = 1
            java.lang.Integer r12 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r10[r11] = r12     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r13.publishProgress(r10)     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            boolean r10 = r13.pause     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            if (r10 == 0) goto L109
            r3.close()     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r0.close()     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r1 = 403(0x193, float:5.65E-43)
            java.lang.Integer r14 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r3.close()     // Catch: java.lang.Exception -> L13e
            goto L13f
        L13e:
        L13f:
            if (r0 == 0) goto L146
            r0.close()     // Catch: java.lang.Exception -> L145
            goto L146
        L145:
        L146:
            if (r5 == 0) goto L14b
            r5.disconnect()     // Catch: java.lang.Exception -> L14b
        L14b:
            return r14
        L14c:
            if (r10 > 0) goto L175
            com.bianfeng.fastvo.action.DownloadFile r1 = r13.fileInfo     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r4 = 4
            r1.status = r4     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            com.bianfeng.fastvo.action.DownloadFile r4 = r13.fileInfo     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            java.lang.String r4 = r4.filePath     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r2.renameTo(r1)     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            java.lang.Integer r14 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r3.close()     // Catch: java.lang.Exception -> L167
            goto L168
        L167:
        L168:
            if (r0 == 0) goto L16f
            r0.close()     // Catch: java.lang.Exception -> L16e
            goto L16f
        L16e:
        L16f:
            if (r5 == 0) goto L174
            r5.disconnect()     // Catch: java.lang.Exception -> L174
        L174:
            return r14
        L175:
            java.lang.Integer r14 = java.lang.Integer.valueOf(r14)     // Catch: java.lang.Throwable -> L18b java.lang.Exception -> L18e
            r3.close()     // Catch: java.lang.Exception -> L17d
            goto L17e
        L17d:
        L17e:
            if (r0 == 0) goto L185
            r0.close()     // Catch: java.lang.Exception -> L184
            goto L185
        L184:
        L185:
            if (r5 == 0) goto L18a
            r5.disconnect()     // Catch: java.lang.Exception -> L18a
        L18a:
            return r14
        L18b:
            r14 = move-exception
            r1 = r0
            goto L195
        L18e:
            r1 = move-exception
            r2 = r1
            r1 = r0
            goto L19b
        L192:
            r14 = move-exception
            r1 = r0
            r5 = r1
        L195:
            r0 = r3
            goto L1c1
        L197:
            r1 = move-exception
            r5 = r0
            r2 = r1
            r1 = r5
        L19b:
            r0 = r3
            goto L1a5
        L19d:
            r14 = move-exception
            r1 = r0
            r5 = r1
            goto L1c1
        L1a1:
            r1 = move-exception
            r5 = r0
            r2 = r1
            r1 = r5
        L1a5:
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L1c0
            if (r0 == 0) goto L1af
            r0.close()     // Catch: java.lang.Exception -> L1ae
            goto L1af
        L1ae:
        L1af:
            if (r1 == 0) goto L1b6
            r1.close()     // Catch: java.lang.Exception -> L1b5
            goto L1b6
        L1b5:
        L1b6:
            if (r5 == 0) goto L1bb
            r5.disconnect()     // Catch: java.lang.Exception -> L1bb
        L1bb:
            java.lang.Integer r14 = java.lang.Integer.valueOf(r14)
            return r14
        L1c0:
            r14 = move-exception
        L1c1:
            if (r0 == 0) goto L1c8
            r0.close()     // Catch: java.lang.Exception -> L1c7
            goto L1c8
        L1c7:
        L1c8:
            if (r1 == 0) goto L1cf
            r1.close()     // Catch: java.lang.Exception -> L1ce
            goto L1cf
        L1ce:
        L1cf:
            if (r5 == 0) goto L1d4
            r5.disconnect()     // Catch: java.lang.Exception -> L1d4
        L1d4:
            goto L1d6
        L1d5:
            throw r14
        L1d6:
            goto L1d5
    }

    @Override
    protected java.lang.Integer doInBackground(com.bianfeng.fastvo.action.DownloadFile[] r1) {
            r0 = this;
            com.bianfeng.fastvo.action.DownloadFile[] r1 = (com.bianfeng.fastvo.action.DownloadFile[]) r1
            java.lang.Integer r1 = r0.doInBackground(r1)
            return r1
    }

    public boolean downLoadIsPause() {
            r1 = this;
            boolean r0 = r1.pause
            return r0
    }

    protected void onPostExecute(java.lang.Integer r4) {
            r3 = this;
            int r0 = r4.intValue()
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 == r1) goto L1e
            r1 = 201(0xc9, float:2.82E-43)
            if (r0 == r1) goto L1e
            switch(r0) {
                case 400: goto L10;
                case 401: goto L10;
                case 402: goto L10;
                case 403: goto L10;
                default: goto Lf;
            }
        Lf:
            goto L27
        L10:
            com.bianfeng.fastvo.action.DownloadListener r0 = r3.listener
            if (r0 == 0) goto L27
            int r1 = r4.intValue()
            com.bianfeng.fastvo.action.DownloadFile r2 = r3.fileInfo
            r0.onError(r1, r2)
            goto L27
        L1e:
            com.bianfeng.fastvo.action.DownloadListener r0 = r3.listener
            if (r0 == 0) goto L27
            com.bianfeng.fastvo.action.DownloadFile r1 = r3.fileInfo
            r0.onComplete(r1)
        L27:
            super.onPostExecute(r4)
            return
    }

    @Override
    protected void onPostExecute(java.lang.Integer r1) {
            r0 = this;
            java.lang.Integer r1 = (java.lang.Integer) r1
            r0.onPostExecute(r1)
            return
    }

    @Override
    protected void onPreExecute() {
            r1 = this;
            r0 = 0
            r1.pause = r0
            super.onPreExecute()
            return
    }

    protected void onProgressUpdate(java.lang.Integer... r5) {
            r4 = this;
            com.bianfeng.fastvo.action.DownloadFile r0 = r4.fileInfo
            int r0 = r0.downedSize
            double r0 = (double) r0
            r2 = 4636737291354636288(0x4059000000000000, double:100.0)
            java.lang.Double.isNaN(r0)
            double r0 = r0 * r2
            com.bianfeng.fastvo.action.DownloadFile r2 = r4.fileInfo
            int r2 = r2.totalSize
            double r2 = (double) r2
            java.lang.Double.isNaN(r2)
            double r0 = r0 / r2
            int r0 = (int) r0
            int r1 = r4.lastProgress
            if (r0 > r1) goto L1b
            return
        L1b:
            r4.lastProgress = r0
            com.bianfeng.fastvo.action.DownloadListener r0 = r4.listener
            if (r0 == 0) goto L26
            com.bianfeng.fastvo.action.DownloadFile r1 = r4.fileInfo
            r0.onUpdate(r1)
        L26:
            super.onProgressUpdate(r5)
            return
    }

    @Override
    protected void onProgressUpdate(java.lang.Integer[] r1) {
            r0 = this;
            java.lang.Integer[] r1 = (java.lang.Integer[]) r1
            r0.onProgressUpdate(r1)
            return
    }

    public void sleep() {
            r2 = this;
            r0 = 10
            java.lang.Thread.sleep(r0)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r0 = move-exception
            r0.printStackTrace()
        La:
            return
    }

    public void start() {
            r1 = this;
            r0 = 0
            com.bianfeng.fastvo.action.DownloadFile[] r0 = new com.bianfeng.fastvo.action.DownloadFile[r0]
            r1.execute(r0)
            return
    }

    public void start(com.bianfeng.fastvo.action.DownloadFile r3) {
            r2 = this;
            r0 = 1
            com.bianfeng.fastvo.action.DownloadFile[] r0 = new com.bianfeng.fastvo.action.DownloadFile[r0]
            r1 = 0
            r0[r1] = r3
            r2.execute(r0)
            return
    }
}
