package com.mbridge.msdk.mbdownload.manager;

public class ADownloadManager {
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> apkConcurrentHashMap;
    private java.util.concurrent.ConcurrentHashMap<com.mbridge.msdk.out.IDownloadListener, com.mbridge.msdk.mbdownload.manager.b> listenerConcurrentHashMap;
    private java.util.concurrent.ConcurrentHashMap<com.mbridge.msdk.mbdownload.manager.b, java.lang.String> listenerUniqueKeyConcurrentHashMap;

    static class 1 {
    }

    private static class a {
        private static final com.mbridge.msdk.mbdownload.manager.ADownloadManager a = null;

        static {
                com.mbridge.msdk.mbdownload.manager.ADownloadManager r0 = new com.mbridge.msdk.mbdownload.manager.ADownloadManager
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.mbdownload.manager.ADownloadManager.a.a = r0
                return
        }

        static com.mbridge.msdk.mbdownload.manager.ADownloadManager a() {
                com.mbridge.msdk.mbdownload.manager.ADownloadManager r0 = com.mbridge.msdk.mbdownload.manager.ADownloadManager.a.a
                return r0
        }
    }

    private ADownloadManager() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.apkConcurrentHashMap = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.listenerConcurrentHashMap = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.listenerUniqueKeyConcurrentHashMap = r0
            r1.register()
            return
    }

    ADownloadManager(com.mbridge.msdk.mbdownload.manager.ADownloadManager.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private void addPreListener(com.mbridge.msdk.mbdownload.manager.a r5, java.lang.String r6) {
            r4 = this;
            java.util.concurrent.ConcurrentHashMap<com.mbridge.msdk.mbdownload.manager.b, java.lang.String> r0 = r4.listenerUniqueKeyConcurrentHashMap
            boolean r0 = r0.containsValue(r6)
            if (r0 == 0) goto L3d
            java.util.concurrent.ConcurrentHashMap<com.mbridge.msdk.mbdownload.manager.b, java.lang.String> r0 = r4.listenerUniqueKeyConcurrentHashMap
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L12:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3d
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getValue()
            java.lang.String r2 = (java.lang.String) r2
            boolean r3 = r6.equals(r2)
            if (r3 == 0) goto L12
            java.lang.Object r3 = r1.getKey()
            java.util.Observer r3 = (java.util.Observer) r3
            r5.addObserver(r3)
            java.util.concurrent.ConcurrentHashMap<com.mbridge.msdk.mbdownload.manager.b, java.lang.String> r3 = r4.listenerUniqueKeyConcurrentHashMap
            java.lang.Object r1 = r1.getKey()
            r3.remove(r1, r2)
            goto L12
        L3d:
            return
    }

    public static com.mbridge.msdk.mbdownload.manager.ADownloadManager getInstance() {
            com.mbridge.msdk.mbdownload.manager.ADownloadManager r0 = com.mbridge.msdk.mbdownload.manager.ADownloadManager.a.a()
            return r0
    }

    private static java.lang.String getTaskUniqueKey(com.mbridge.msdk.foundation.entity.CampaignEx r1, java.lang.String r2) {
            if (r1 == 0) goto L17
            java.lang.String r1 = r1.getAkdlui()
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L19
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L19
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r2)
            goto L19
        L17:
            java.lang.String r1 = ""
        L19:
            return r1
    }

    private void register() {
            r4 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 == 0) goto L1c
            com.mbridge.msdk.mbdownload.DownloadNetWorkChangeReceiver r1 = new com.mbridge.msdk.mbdownload.DownloadNetWorkChangeReceiver
            r1.<init>()
            android.content.IntentFilter r2 = new android.content.IntentFilter
            r2.<init>()
            java.lang.String r3 = "android.net.conn.CONNECTIVITY_CHANGE"
            r2.addAction(r3)
            r0.registerReceiver(r1, r2)
        L1c:
            return
    }

    private void startNotice(com.mbridge.msdk.foundation.entity.CampaignEx r4, java.lang.String r5) {
            r3 = this;
            com.mbridge.msdk.mbdownload.f r0 = new com.mbridge.msdk.mbdownload.f
            java.lang.String r1 = getTaskUniqueKey(r4, r5)
            r0.<init>(r1, r5)
            int r5 = r4.getNtbarpasbl()
            r1 = 0
            r2 = 1
            if (r5 != r2) goto L13
            r5 = r2
            goto L14
        L13:
            r5 = r1
        L14:
            r0.setCanPause(r5)
            int r5 = r4.getNtbarpt()
            if (r5 != 0) goto L1e
            r1 = r2
        L1e:
            r0.setOnGoingStatus(r1)
            java.lang.String r5 = r4.getIconUrl()
            r0.setTargetAppIconUrl(r5)
            java.lang.String r4 = r4.getAppName()
            r0.setTitle(r4)
            r0.start()
            return
    }

    public boolean addDownloadListener(java.lang.String r3, com.mbridge.msdk.out.IDownloadListener r4) {
            r2 = this;
            if (r4 == 0) goto L3c
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L3c
            java.util.concurrent.ConcurrentHashMap<com.mbridge.msdk.out.IDownloadListener, com.mbridge.msdk.mbdownload.manager.b> r0 = r2.listenerConcurrentHashMap
            boolean r0 = r0.containsKey(r4)
            if (r0 != 0) goto L1b
            com.mbridge.msdk.mbdownload.manager.b r0 = new com.mbridge.msdk.mbdownload.manager.b
            r0.<init>(r4)
            java.util.concurrent.ConcurrentHashMap<com.mbridge.msdk.out.IDownloadListener, com.mbridge.msdk.mbdownload.manager.b> r1 = r2.listenerConcurrentHashMap
            r1.put(r4, r0)
            goto L24
        L1b:
            java.util.concurrent.ConcurrentHashMap<com.mbridge.msdk.out.IDownloadListener, com.mbridge.msdk.mbdownload.manager.b> r0 = r2.listenerConcurrentHashMap
            java.lang.Object r4 = r0.get(r4)
            r0 = r4
            com.mbridge.msdk.mbdownload.manager.b r0 = (com.mbridge.msdk.mbdownload.manager.b) r0
        L24:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r4 = r2.apkConcurrentHashMap
            java.lang.Object r4 = r4.get(r3)
            com.mbridge.msdk.mbdownload.manager.a r4 = (com.mbridge.msdk.mbdownload.manager.a) r4
            if (r4 == 0) goto L33
            r4.addObserver(r0)
            r3 = 1
            goto L3d
        L33:
            java.util.concurrent.ConcurrentHashMap<com.mbridge.msdk.mbdownload.manager.b, java.lang.String> r4 = r2.listenerUniqueKeyConcurrentHashMap
            if (r4 == 0) goto L3c
            if (r0 == 0) goto L3c
            r4.put(r0, r3)
        L3c:
            r3 = 0
        L3d:
            return r3
    }

    public void cancelAllTask() {
            r4 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r0 = r4.apkConcurrentHashMap
            if (r0 == 0) goto L25
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L25
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.mbdownload.manager.a r1 = (com.mbridge.msdk.mbdownload.manager.a) r1
            if (r1 == 0) goto Lc
            int r2 = r1.d()
            r3 = 2
            if (r2 != r3) goto Lc
            r1.b()
            goto Lc
        L25:
            return
    }

    public boolean deleteDownloadListener(java.lang.String r3, com.mbridge.msdk.out.IDownloadListener r4) {
            r2 = this;
            if (r4 == 0) goto L2f
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L2f
            java.util.concurrent.ConcurrentHashMap<com.mbridge.msdk.out.IDownloadListener, com.mbridge.msdk.mbdownload.manager.b> r0 = r2.listenerConcurrentHashMap
            boolean r0 = r0.containsKey(r4)
            r1 = 0
            if (r0 == 0) goto L1a
            java.util.concurrent.ConcurrentHashMap<com.mbridge.msdk.out.IDownloadListener, com.mbridge.msdk.mbdownload.manager.b> r0 = r2.listenerConcurrentHashMap
            java.lang.Object r4 = r0.remove(r4)
            com.mbridge.msdk.mbdownload.manager.b r4 = (com.mbridge.msdk.mbdownload.manager.b) r4
            goto L1b
        L1a:
            r4 = r1
        L1b:
            if (r4 == 0) goto L20
            r4.a(r1)
        L20:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r0 = r2.apkConcurrentHashMap
            java.lang.Object r3 = r0.get(r3)
            com.mbridge.msdk.mbdownload.manager.a r3 = (com.mbridge.msdk.mbdownload.manager.a) r3
            if (r3 == 0) goto L2f
            r3.deleteObserver(r4)
            r3 = 1
            goto L30
        L2f:
            r3 = 0
        L30:
            return r3
    }

    public int getTaskProgressByUniqueKey(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r0 = r1.apkConcurrentHashMap
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L1d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r0 = r1.apkConcurrentHashMap
            java.lang.Object r2 = r0.get(r2)
            com.mbridge.msdk.mbdownload.manager.a r2 = (com.mbridge.msdk.mbdownload.manager.a) r2
            if (r2 == 0) goto L1d
            int r2 = r2.e()
            goto L1e
        L1d:
            r2 = 0
        L1e:
            return r2
    }

    public int getTaskStatusByUniqueKey(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r0 = r1.apkConcurrentHashMap
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L1d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r0 = r1.apkConcurrentHashMap
            java.lang.Object r2 = r0.get(r2)
            com.mbridge.msdk.mbdownload.manager.a r2 = (com.mbridge.msdk.mbdownload.manager.a) r2
            if (r2 == 0) goto L1d
            int r2 = r2.d()
            goto L1e
        L1d:
            r2 = -1
        L1e:
            return r2
    }

    public java.lang.String initAPKDownloadTask(com.mbridge.msdk.foundation.entity.CampaignEx r9, java.lang.String r10, com.mbridge.msdk.out.IDownloadListener r11) {
            r8 = this;
            java.lang.String r0 = getTaskUniqueKey(r9, r10)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto Lb4
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)
            com.mbridge.msdk.foundation.db.e r1 = com.mbridge.msdk.foundation.db.e.a(r1)
            int r2 = r1.c(r0)
            r3 = 1
            if (r2 == r3) goto L9c
            r4 = 10
            if (r2 == r4) goto L9c
            r5 = 11
            if (r2 != r5) goto L2b
            goto L9c
        L2b:
            if (r2 != 0) goto L46
            r9.setAkdlui(r0)
            r1.a(r9)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r2 = r2.j()
            com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r2)
            com.mbridge.msdk.foundation.db.g r2 = com.mbridge.msdk.foundation.db.g.b(r2)
            r2.a(r9)
        L46:
            r2 = 0
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r6 = r8.apkConcurrentHashMap
            boolean r6 = r6.containsKey(r0)
            if (r6 != 0) goto L5d
            com.mbridge.msdk.mbdownload.manager.a r2 = new com.mbridge.msdk.mbdownload.manager.a
            r2.<init>(r0, r10)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r1 = r8.apkConcurrentHashMap
            r1.put(r0, r2)
            r8.addPreListener(r2, r0)
            goto L70
        L5d:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r6 = r8.apkConcurrentHashMap
            java.lang.Object r6 = r6.get(r0)
            com.mbridge.msdk.mbdownload.manager.a r6 = (com.mbridge.msdk.mbdownload.manager.a) r6
            int r7 = r6.d()
            if (r7 == r3) goto L80
            if (r7 == r4) goto L80
            if (r7 != r5) goto L70
            goto L80
        L70:
            if (r2 == 0) goto L7c
            int r1 = r2.d()
            r2 = 2
            if (r1 == r2) goto L7c
            r8.startNotice(r9, r10)
        L7c:
            r8.addDownloadListener(r0, r11)
            goto Lb4
        L80:
            java.lang.String r9 = r6.f()
            com.mbridge.msdk.foundation.controller.a r11 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r11 = r11.j()
            java.io.File r2 = new java.io.File
            r2.<init>(r9)
            android.net.Uri r2 = android.net.Uri.fromFile(r2)
            com.mbridge.msdk.click.c.a(r11, r2, r10, r0)
            r1.b(r0, r9)
            return r0
        L9c:
            java.lang.String r9 = r1.i(r0)
            com.mbridge.msdk.foundation.controller.a r11 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r11 = r11.j()
            java.io.File r1 = new java.io.File
            r1.<init>(r9)
            android.net.Uri r9 = android.net.Uri.fromFile(r1)
            com.mbridge.msdk.click.c.a(r11, r9, r10, r0)
        Lb4:
            return r0
    }

    public void installApkByUniqueKey(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L41
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r0 = r3.apkConcurrentHashMap
            boolean r0 = r0.containsKey(r4)
            if (r0 == 0) goto L41
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r0 = r3.apkConcurrentHashMap
            java.lang.Object r0 = r0.get(r4)
            com.mbridge.msdk.mbdownload.manager.a r0 = (com.mbridge.msdk.mbdownload.manager.a) r0
            if (r0 == 0) goto L41
            java.lang.String r0 = r0.f()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L41
            java.io.File r1 = new java.io.File
            r1.<init>(r0)
            boolean r1 = r1.exists()
            if (r1 == 0) goto L41
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            android.net.Uri r0 = android.net.Uri.fromFile(r2)
            com.mbridge.msdk.click.c.a(r1, r0, r5, r4)
        L41:
            return
    }

    public void installed(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1d
            r0 = 0
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r1 = r2.apkConcurrentHashMap
            boolean r1 = r1.containsKey(r3)
            if (r1 == 0) goto L18
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r0 = r2.apkConcurrentHashMap
            java.lang.Object r3 = r0.get(r3)
            r0 = r3
            com.mbridge.msdk.mbdownload.manager.a r0 = (com.mbridge.msdk.mbdownload.manager.a) r0
        L18:
            if (r0 == 0) goto L1d
            r0.c()
        L1d:
            return
    }

    public void pause(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1d
            r0 = 0
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r1 = r2.apkConcurrentHashMap
            boolean r1 = r1.containsKey(r3)
            if (r1 == 0) goto L18
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r0 = r2.apkConcurrentHashMap
            java.lang.Object r3 = r0.get(r3)
            r0 = r3
            com.mbridge.msdk.mbdownload.manager.a r0 = (com.mbridge.msdk.mbdownload.manager.a) r0
        L18:
            if (r0 == 0) goto L1d
            r0.b()
        L1d:
            return
    }

    public void reStartAllTask() {
            r4 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r0 = r4.apkConcurrentHashMap
            if (r0 == 0) goto L32
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L32
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.mbdownload.manager.a r1 = (com.mbridge.msdk.mbdownload.manager.a) r1
            if (r1 == 0) goto Lc
            int r2 = r1.d()
            r3 = 5
            if (r2 == r3) goto L2e
            r3 = 6
            if (r2 == r3) goto L2e
            r3 = -1
            if (r2 == r3) goto L2e
            r3 = 8
            if (r2 == r3) goto L2e
            r3 = 2
            if (r2 != r3) goto Lc
        L2e:
            r1.a()
            goto Lc
        L32:
            return
    }

    public void start(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L27
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r0 = r1.apkConcurrentHashMap
            boolean r0 = r0.containsKey(r2)
            if (r0 != 0) goto L19
            com.mbridge.msdk.mbdownload.manager.a r0 = new com.mbridge.msdk.mbdownload.manager.a
            r0.<init>(r2, r3)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r3 = r1.apkConcurrentHashMap
            r3.put(r2, r0)
            goto L22
        L19:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.mbridge.msdk.mbdownload.manager.a> r3 = r1.apkConcurrentHashMap
            java.lang.Object r2 = r3.get(r2)
            r0 = r2
            com.mbridge.msdk.mbdownload.manager.a r0 = (com.mbridge.msdk.mbdownload.manager.a) r0
        L22:
            if (r0 == 0) goto L27
            r0.a()
        L27:
            return
    }
}
