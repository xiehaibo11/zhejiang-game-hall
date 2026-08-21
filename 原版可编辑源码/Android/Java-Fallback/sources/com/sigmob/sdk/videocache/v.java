package com.sigmob.sdk.videocache;

public class v {
    private static com.sigmob.sdk.videocache.v a;
    private java.util.concurrent.ExecutorService b;
    private java.util.Map<java.lang.String, java.lang.ref.WeakReference<com.sigmob.sdk.videocache.v.a>> c;
    private android.content.Context d;

    private static class a implements java.lang.Runnable {
        private java.lang.String a;
        private java.util.concurrent.atomic.AtomicBoolean b;

        public a(java.lang.String r3) {
                r2 = this;
                r2.<init>()
                java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
                r1 = 0
                r0.<init>(r1)
                r2.b = r0
                r2.a = r3
                return
        }

        private void a(java.lang.String r7) {
                r6 = this;
                r0 = 0
                r1 = 1
                r2 = 0
                java.net.URL r3 = new java.net.URL     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L63
                r3.<init>(r7)     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L63
                java.net.URLConnection r7 = r3.openConnection()     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L63
                java.net.HttpURLConnection r7 = (java.net.HttpURLConnection) r7     // Catch: java.lang.Throwable -> L60 java.lang.Exception -> L63
                r3 = 5000(0x1388, float:7.006E-42)
                r7.setConnectTimeout(r3)     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                r7.setReadTimeout(r3)     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                r7.connect()     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                r3 = 1024(0x400, float:1.435E-42)
                byte[] r3 = new byte[r3]     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                java.io.InputStream r0 = r7.getInputStream()     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
            L21:
                int r4 = r0.read(r3)     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                r5 = -1
                if (r4 == r5) goto L3f
                java.util.concurrent.atomic.AtomicBoolean r4 = r6.b     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                boolean r4 = r4.get()     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                if (r4 == 0) goto L21
                java.lang.String r3 = "cancelPreLoadVideo,取消网络请求,成功(正在下载数据),url=%s"
                java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                java.lang.String r5 = r6.a     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                r4[r2] = r5     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                java.lang.String r3 = java.lang.String.format(r3, r4)     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                com.czhj.sdk.logger.SigmobLog.d(r3)     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
            L3f:
                java.lang.String r3 = "preloadVideo,网络文件,成功,url=%s"
                java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                java.lang.String r5 = r6.a     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                r4[r2] = r5     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                java.lang.String r3 = java.lang.String.format(r3, r4)     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                com.czhj.sdk.logger.SigmobLog.i(r3)     // Catch: java.lang.Exception -> L5e java.lang.Throwable -> L90
                if (r0 == 0) goto L58
                r0.close()     // Catch: java.lang.Exception -> L54
                goto L58
            L54:
                r0 = move-exception
                r0.printStackTrace()
            L58:
                if (r7 == 0) goto L8f
                r7.disconnect()     // Catch: java.lang.Exception -> L8b
                goto L8f
            L5e:
                r3 = move-exception
                goto L65
            L60:
                r1 = move-exception
                r7 = r0
                goto L91
            L63:
                r3 = move-exception
                r7 = r0
            L65:
                java.lang.String r4 = "preloadVideo,网络文件,失败,msg=%s,url=%s"
                r5 = 2
                java.lang.Object[] r5 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L90
                java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Throwable -> L90
                r5[r2] = r3     // Catch: java.lang.Throwable -> L90
                java.lang.String r2 = r6.a     // Catch: java.lang.Throwable -> L90
                r5[r1] = r2     // Catch: java.lang.Throwable -> L90
                java.lang.String r1 = java.lang.String.format(r4, r5)     // Catch: java.lang.Throwable -> L90
                com.czhj.sdk.logger.SigmobLog.e(r1)     // Catch: java.lang.Throwable -> L90
                if (r0 == 0) goto L85
                r0.close()     // Catch: java.lang.Exception -> L81
                goto L85
            L81:
                r0 = move-exception
                r0.printStackTrace()
            L85:
                if (r7 == 0) goto L8f
                r7.disconnect()     // Catch: java.lang.Exception -> L8b
                goto L8f
            L8b:
                r7 = move-exception
                r7.printStackTrace()
            L8f:
                return
            L90:
                r1 = move-exception
            L91:
                if (r0 == 0) goto L9b
                r0.close()     // Catch: java.lang.Exception -> L97
                goto L9b
            L97:
                r0 = move-exception
                r0.printStackTrace()
            L9b:
                if (r7 == 0) goto La5
                r7.disconnect()     // Catch: java.lang.Exception -> La1
                goto La5
            La1:
                r7 = move-exception
                r7.printStackTrace()
            La5:
                throw r1
        }

        public void a(boolean r2) {
                r1 = this;
                java.util.concurrent.atomic.AtomicBoolean r0 = r1.b
                r0.set(r2)
                return
        }

        @Override
        public void run() {
                r3 = this;
                java.util.concurrent.atomic.AtomicBoolean r0 = r3.b
                boolean r0 = r0.get()
                if (r0 == 0) goto L1a
                r0 = 1
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r1 = 0
                java.lang.String r2 = r3.a
                r0[r1] = r2
                java.lang.String r1 = "cancelPreLoadVideo,取消网络请求,成功(未下载数据),url=%s"
                java.lang.String r0 = java.lang.String.format(r1, r0)
                com.czhj.sdk.logger.SigmobLog.i(r0)
                return
            L1a:
                java.lang.String r0 = r3.a
                r3.a(r0)
                return
        }
    }

    private v(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 8
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newFixedThreadPool(r0)
            r1.b = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.c = r0
            r1.d = r2
            return
    }

    public static com.sigmob.sdk.videocache.v a(android.content.Context r2) {
            android.content.Context r2 = r2.getApplicationContext()
            com.sigmob.sdk.videocache.v r0 = com.sigmob.sdk.videocache.v.a
            if (r0 != 0) goto L1b
            java.lang.Class<com.sigmob.sdk.videocache.v> r0 = com.sigmob.sdk.videocache.v.class
            monitor-enter(r0)
            com.sigmob.sdk.videocache.v r1 = com.sigmob.sdk.videocache.v.a     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            com.sigmob.sdk.videocache.v r1 = new com.sigmob.sdk.videocache.v     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            com.sigmob.sdk.videocache.v.a = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            throw r2
        L1b:
            com.sigmob.sdk.videocache.v r2 = com.sigmob.sdk.videocache.v.a
            return r2
    }

    public void a(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L3f
            java.lang.String r0 = "http"
            boolean r0 = r4.startsWith(r0)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L32
            java.lang.Object[] r0 = new java.lang.Object[r2]
            r0[r1] = r4
            java.lang.String r1 = "preloadVideo,网络文件,开始下载:ulr=%s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            com.czhj.sdk.logger.SigmobLog.d(r0)
            com.sigmob.sdk.videocache.v$a r0 = new com.sigmob.sdk.videocache.v$a
            r0.<init>(r4)
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<com.sigmob.sdk.videocache.v$a>> r1 = r3.c
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
            r2.<init>(r0)
            r1.put(r4, r2)
            java.util.concurrent.ExecutorService r4 = r3.b
            r4.execute(r0)
            goto L3f
        L32:
            java.lang.Object[] r0 = new java.lang.Object[r2]
            r0[r1] = r4
            java.lang.String r4 = "preloadVideo,本地文件:ulr=%s"
            java.lang.String r4 = java.lang.String.format(r4, r0)
            com.czhj.sdk.logger.SigmobLog.d(r4)
        L3f:
            return
    }

    public void b(java.lang.String r5) {
            r4 = this;
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]
            r2 = 0
            r1[r2] = r5
            java.lang.String r3 = "cancelPreLoadVideo,ulr=%s"
            java.lang.String r1 = java.lang.String.format(r3, r1)
            com.czhj.sdk.logger.SigmobLog.d(r1)
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<com.sigmob.sdk.videocache.v$a>> r1 = r4.c
            if (r1 == 0) goto L3b
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 != 0) goto L3b
            java.util.Map<java.lang.String, java.lang.ref.WeakReference<com.sigmob.sdk.videocache.v$a>> r1 = r4.c
            java.lang.Object r1 = r1.get(r5)
            java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
            if (r1 == 0) goto L3b
            java.lang.Object r1 = r1.get()
            com.sigmob.sdk.videocache.v$a r1 = (com.sigmob.sdk.videocache.v.a) r1
            if (r1 == 0) goto L3b
            java.lang.Object[] r3 = new java.lang.Object[r0]
            r3[r2] = r5
            java.lang.String r5 = "cancelPreLoadVideo,取消网络请求,ulr=%s"
            java.lang.String r5 = java.lang.String.format(r5, r3)
            com.czhj.sdk.logger.SigmobLog.d(r5)
            r1.a(r0)
        L3b:
            return
    }
}
