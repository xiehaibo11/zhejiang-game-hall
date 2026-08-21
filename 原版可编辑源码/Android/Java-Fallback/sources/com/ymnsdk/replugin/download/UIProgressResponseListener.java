package com.ymnsdk.replugin.download;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public abstract class UIProgressResponseListener implements com.ymnsdk.replugin.download.ProgressResponseListener {
    private static final int RESPONSE_UPDATE = 2;
    private final android.os.Handler mHandler;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    private static class UIHandler extends android.os.Handler {
        private final java.lang.ref.WeakReference<com.ymnsdk.replugin.download.UIProgressResponseListener> mUIProgressResponseListenerWeakReference;

        public UIHandler(android.os.Looper r1, com.ymnsdk.replugin.download.UIProgressResponseListener r2) {
                r0 = this;
                r0.<init>(r1)
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r2)
                r0.mUIProgressResponseListenerWeakReference = r1
                return
        }

        @Override
        public void handleMessage(android.os.Message r8) {
                r7 = this;
                int r0 = r8.what
                r1 = 2
                if (r0 == r1) goto L9
                super.handleMessage(r8)
                goto L27
            L9:
                java.lang.ref.WeakReference<com.ymnsdk.replugin.download.UIProgressResponseListener> r0 = r7.mUIProgressResponseListenerWeakReference
                java.lang.Object r0 = r0.get()
                r1 = r0
                com.ymnsdk.replugin.download.UIProgressResponseListener r1 = (com.ymnsdk.replugin.download.UIProgressResponseListener) r1
                if (r1 == 0) goto L27
                java.lang.Object r8 = r8.obj
                com.ymnsdk.replugin.download.ProgressModel r8 = (com.ymnsdk.replugin.download.ProgressModel) r8
                long r2 = r8.getCurrentBytes()
                long r4 = r8.getContentLength()
                boolean r6 = r8.isDone()
                r1.onUIResponseProgress(r2, r4, r6)
            L27:
                return
        }
    }

    public UIProgressResponseListener() {
            r2 = this;
            r2.<init>()
            com.ymnsdk.replugin.download.UIProgressResponseListener$UIHandler r0 = new com.ymnsdk.replugin.download.UIProgressResponseListener$UIHandler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1, r2)
            r2.mHandler = r0
            return
    }

    @Override
    public void onResponseProgress(long r9, long r11, boolean r13) {
            r8 = this;
            android.os.Message r0 = android.os.Message.obtain()
            com.ymnsdk.replugin.download.ProgressModel r7 = new com.ymnsdk.replugin.download.ProgressModel
            r1 = r7
            r2 = r9
            r4 = r11
            r6 = r13
            r1.<init>(r2, r4, r6)
            r0.obj = r7
            r9 = 2
            r0.what = r9
            android.os.Handler r9 = r8.mHandler
            r9.sendMessage(r0)
            return
    }

    public abstract void onUIResponseProgress(long r1, long r3, boolean r5);
}
