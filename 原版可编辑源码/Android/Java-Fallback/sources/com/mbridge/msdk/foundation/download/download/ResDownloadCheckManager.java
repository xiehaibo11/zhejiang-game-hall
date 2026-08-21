package com.mbridge.msdk.foundation.download.download;

public class ResDownloadCheckManager {
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> recordImageMap;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> campaignStateMap;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> preLoadSuccessedMap;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> recordVideoMap;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> recordZipMap;

    static class 1 {
    }

    private static final class Holder {
        public static com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager instance;

        static {
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r0 = new com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.Holder.instance = r0
                return
        }

        private Holder() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.recordImageMap = r0
            return
    }

    private ResDownloadCheckManager() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.recordVideoMap = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.recordZipMap = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.campaignStateMap = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.preLoadSuccessedMap = r0
            return
    }

    ResDownloadCheckManager(com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private void addImageUrlToMap(java.util.List<java.lang.String> r4) {
            r3 = this;
            if (r4 == 0) goto L4a
            int r0 = r4.size()
            if (r0 != 0) goto L9
            goto L4a
        L9:
            java.util.Iterator r4 = r4.iterator()
        Ld:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L4a
            java.lang.Object r0 = r4.next()
            java.lang.String r0 = (java.lang.String) r0
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L20
            goto Ld
        L20:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r1 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.recordImageMap
            if (r1 == 0) goto Ld
            boolean r1 = r1.containsKey(r0)
            if (r1 != 0) goto Ld
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.foundation.same.c.b r1 = com.mbridge.msdk.foundation.same.c.b.a(r1)
            boolean r1 = r1.b(r0)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto Ld
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r2 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.recordImageMap
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r2.put(r0, r1)
            goto Ld
        L4a:
            return
    }

    private void addUrlToMap(com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r4 = this;
            if (r5 == 0) goto L61
            java.lang.String r0 = r5.getVideoUrlEncode()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 != 0) goto L20
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r1 = r4.recordVideoMap
            if (r1 == 0) goto L20
            boolean r1 = r1.containsKey(r0)
            if (r1 != 0) goto L20
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r1 = r4.recordVideoMap
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r2)
            r1.put(r0, r3)
        L20:
            java.lang.String r0 = r5.getendcard_url()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L3d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r1 = r4.recordZipMap
            if (r1 == 0) goto L3d
            boolean r1 = r1.containsKey(r0)
            if (r1 != 0) goto L3d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r1 = r4.recordZipMap
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r1.put(r0, r2)
        L3d:
            com.mbridge.msdk.foundation.entity.CampaignEx$c r5 = r5.getRewardTemplateMode()
            if (r5 == 0) goto L61
            java.util.List r5 = r5.f()
            if (r5 == 0) goto L61
            java.util.Iterator r5 = r5.iterator()
        L4d:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L61
            java.lang.Object r0 = r5.next()
            com.mbridge.msdk.foundation.entity.CampaignEx$c$a r0 = (com.mbridge.msdk.foundation.entity.CampaignEx.c.a) r0
            if (r0 == 0) goto L4d
            java.util.List<java.lang.String> r0 = r0.b
            r4.addImageUrlToMap(r0)
            goto L4d
        L61:
            return
    }

    private boolean checkImageUrlState(boolean r3, java.lang.String r4) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r3 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.recordImageMap
            boolean r3 = r2.checkState(r3, r4)
            r0 = 1
            if (r3 == 0) goto La
            return r0
        La:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.foundation.same.c.b r1 = com.mbridge.msdk.foundation.same.c.b.a(r1)
            boolean r4 = r1.b(r4)
            if (r4 == 0) goto L1d
            return r0
        L1d:
            return r3
    }

    private boolean checkState(java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L8
            r3 = 1
            return r3
        L8:
            r0 = 0
            if (r3 == 0) goto L24
            boolean r1 = r3.containsKey(r4)
            if (r1 == 0) goto L1c
            java.lang.Object r3 = r3.get(r4)
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            return r3
        L1c:
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r0)
            r3.put(r4, r1)
            goto L30
        L24:
            java.util.concurrent.ConcurrentHashMap r3 = new java.util.concurrent.ConcurrentHashMap
            r3.<init>()
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r0)
            r3.put(r4, r1)
        L30:
            return r0
    }

    private boolean checkZipState(boolean r3, java.lang.String r4) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r2.recordZipMap
            boolean r0 = r2.checkState(r0, r4)
            if (r0 == 0) goto L9
            return r0
        L9:
            if (r3 == 0) goto L23
            com.mbridge.msdk.foundation.download.download.H5DownLoadManager r3 = com.mbridge.msdk.foundation.download.download.H5DownLoadManager.getInstance()
            java.lang.String r3 = r3.getH5ResAddress(r4)
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L23
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r3 = r2.recordZipMap
            r0 = 1
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r0)
            r3.put(r4, r1)
        L23:
            return r0
    }

    public static com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager getInstance() {
            com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager r0 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.Holder.instance
            return r0
    }

    private boolean getIsEffectivePath(java.lang.String r3) {
            r2 = this;
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.x.d(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.same.b.c r1 = com.mbridge.msdk.foundation.same.b.c.c
            java.lang.String r1 = com.mbridge.msdk.foundation.same.b.e.b(r1)
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            r3 = 0
            boolean r1 = r0.exists()     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L40
            boolean r1 = r0.isFile()     // Catch: java.lang.Throwable -> L38
            if (r1 == 0) goto L40
            boolean r0 = r0.canRead()     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L40
            r3 = 1
            goto L40
        L38:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L40
            r0.printStackTrace()
        L40:
            return r3
    }

    private void updateCampaignState(java.lang.String r2, boolean r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.campaignStateMap
            if (r0 != 0) goto Lb
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.campaignStateMap = r0
        Lb:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.campaignStateMap
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r0.put(r2, r3)
        L1a:
            return
    }

    public boolean checkImageState(boolean r4, com.mbridge.msdk.foundation.entity.CampaignEx.c r5) {
            r3 = this;
            r0 = 1
            if (r5 != 0) goto L4
            return r0
        L4:
            java.util.List r5 = r5.f()
            if (r5 == 0) goto L3a
            java.util.Iterator r5 = r5.iterator()
        Le:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L3a
            java.lang.Object r1 = r5.next()
            com.mbridge.msdk.foundation.entity.CampaignEx$c$a r1 = (com.mbridge.msdk.foundation.entity.CampaignEx.c.a) r1
            if (r1 == 0) goto Le
            java.util.List<java.lang.String> r2 = r1.b
            if (r2 == 0) goto Le
            java.util.List<java.lang.String> r1 = r1.b
            java.util.Iterator r1 = r1.iterator()
        L26:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Le
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            boolean r2 = r3.checkImageUrlState(r4, r2)
            if (r2 != 0) goto L26
            r4 = 0
            return r4
        L3a:
            return r0
    }

    public boolean checkPreLoadState(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r2.preLoadSuccessedMap
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L1d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r2.preLoadSuccessedMap
            java.lang.Object r3 = r0.get(r3)
            java.lang.Boolean r3 = (java.lang.Boolean) r3
            boolean r3 = r3.booleanValue()
            return r3
        L1d:
            return r1
    }

    public boolean containsVideoKey(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.recordVideoMap
            if (r0 == 0) goto L1f
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1f
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.recordVideoMap
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L1f
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.recordVideoMap
            java.lang.Object r2 = r0.get(r2)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r2 = r2.booleanValue()
            return r2
        L1f:
            r2 = 0
            return r2
    }

    public boolean containsZipKey(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.recordZipMap
            if (r0 == 0) goto L1f
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1f
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.recordZipMap
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L1f
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.recordZipMap
            java.lang.Object r2 = r0.get(r2)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r2 = r2.booleanValue()
            return r2
        L1f:
            r2 = 0
            return r2
    }

    public void removePreLoadState(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.preLoadSuccessedMap
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto Ld
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.preLoadSuccessedMap
            r0.remove(r2)
        Ld:
            return
    }

    public void setCampaignList(com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            r1 = this;
            if (r2 == 0) goto Ld
            r1.addUrlToMap(r2)
            java.lang.String r2 = r2.getId()
            r0 = 0
            r1.updateCampaignState(r2, r0)
        Ld:
            return
    }

    public void setCampaignList(java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.foundation.entity.CampaignEx> r3) {
            r2 = this;
            if (r3 == 0) goto L27
            int r0 = r3.size()
            if (r0 != 0) goto L9
            goto L27
        L9:
            java.util.Iterator r3 = r3.iterator()
        Ld:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L27
            java.lang.Object r0 = r3.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            if (r0 == 0) goto Ld
            r2.addUrlToMap(r0)
            java.lang.String r0 = r0.getId()
            r1 = 0
            r2.updateCampaignState(r0, r1)
            goto Ld
        L27:
            return
    }

    public void setImageDownloadDone(java.lang.String r2, boolean r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.recordImageMap
            if (r0 != 0) goto Lb
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.recordImageMap = r0
        Lb:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = com.mbridge.msdk.foundation.download.download.ResDownloadCheckManager.recordImageMap
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r0.put(r2, r3)
        L1a:
            return
    }

    public void setTemplatePreLoadDone(java.lang.String r2, boolean r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.preLoadSuccessedMap
            if (r0 != 0) goto Lb
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.preLoadSuccessedMap = r0
        Lb:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.preLoadSuccessedMap
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r0.put(r2, r3)
        L1a:
            return
    }

    public void setVideoDownloadDone(java.lang.String r2, boolean r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.recordVideoMap
            if (r0 != 0) goto Lb
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.recordVideoMap = r0
        Lb:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.recordVideoMap
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r0.put(r2, r3)
        L1a:
            return
    }

    public void setZipDownloadDone(java.lang.String r2, boolean r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.recordZipMap
            if (r0 != 0) goto Lb
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.recordZipMap = r0
        Lb:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r0 = r1.recordZipMap
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r0.put(r2, r3)
        L1a:
            return
    }
}
