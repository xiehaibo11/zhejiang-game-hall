package com.mbridge.msdk.foundation.download.download;

public class DownloadTask {
    private com.mbridge.msdk.foundation.same.e.b mLoader;

    static class 1 {
    }

    private static class DownloadTaskHolder {
        public static com.mbridge.msdk.foundation.download.download.DownloadTask instance;

        static {
                com.mbridge.msdk.foundation.download.download.DownloadTask r0 = new com.mbridge.msdk.foundation.download.download.DownloadTask
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.download.download.DownloadTask.DownloadTaskHolder.instance = r0
                return
        }

        private DownloadTaskHolder() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private DownloadTask() {
            r0 = this;
            r0.<init>()
            r0.init()
            return
    }

    DownloadTask(com.mbridge.msdk.foundation.download.download.DownloadTask.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.download.download.DownloadTask getInstance() {
            com.mbridge.msdk.foundation.download.download.DownloadTask r0 = com.mbridge.msdk.foundation.download.download.DownloadTask.DownloadTaskHolder.instance
            return r0
    }

    private void init() {
            r2 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 == 0) goto L19
            com.mbridge.msdk.foundation.same.e.b r0 = new com.mbridge.msdk.foundation.same.e.b
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r0.<init>(r1)
            r2.mLoader = r0
        L19:
            return
    }

    public void runTask(com.mbridge.msdk.foundation.same.e.a r2) {
            r1 = this;
            com.mbridge.msdk.foundation.same.e.b r0 = r1.mLoader
            if (r0 == 0) goto L7
            r0.b(r2)
        L7:
            return
    }
}
