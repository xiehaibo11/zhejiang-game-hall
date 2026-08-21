package com.ymnsdk.replugin.patch.download;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class DownloadFileState {
    private static java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> mDownloadFileInfo;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes4.dex
     */
    private static final class Factory {
        private static final com.ymnsdk.replugin.patch.download.DownloadFileState instance = null;

        static {
                com.ymnsdk.replugin.patch.download.DownloadFileState r0 = new com.ymnsdk.replugin.patch.download.DownloadFileState
                r0.<init>()
                com.ymnsdk.replugin.patch.download.DownloadFileState.Factory.instance = r0
                return
        }

        private Factory() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.ymnsdk.replugin.patch.download.DownloadFileState access$000() {
                com.ymnsdk.replugin.patch.download.DownloadFileState r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.Factory.instance
                return r0
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo = r0
            return
    }

    public DownloadFileState() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ymnsdk.replugin.patch.download.DownloadFileState getInstance() {
            com.ymnsdk.replugin.patch.download.DownloadFileState r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.Factory.access$000()
            return r0
    }

    public boolean clearAllTasks() {
            r4 = this;
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo     // Catch: java.lang.Exception -> L4b
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Exception -> L4b
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L4b
        La:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L4b
            if (r1 == 0) goto L49
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L4b
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Exception -> L4b
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Exception -> L4b
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r1 = (com.ymnsdk.replugin.patch.download.DownloadFileInfo) r1     // Catch: java.lang.Exception -> L4b
            java.io.File r2 = new java.io.File     // Catch: java.lang.Exception -> L4b
            java.lang.String r3 = r1.getSavePath()     // Catch: java.lang.Exception -> L4b
            r2.<init>(r3)     // Catch: java.lang.Exception -> L4b
            java.io.File r3 = new java.io.File     // Catch: java.lang.Exception -> L4b
            java.lang.String r1 = r1.getSaveCachePath()     // Catch: java.lang.Exception -> L4b
            r3.<init>(r1)     // Catch: java.lang.Exception -> L4b
            boolean r1 = r2.exists()     // Catch: java.lang.Exception -> L4b
            if (r1 == 0) goto L37
            r2.delete()     // Catch: java.lang.Exception -> L4b
        L37:
            boolean r1 = r3.exists()     // Catch: java.lang.Exception -> L4b
            if (r1 == 0) goto L40
            r3.delete()     // Catch: java.lang.Exception -> L4b
        L40:
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r1 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo     // Catch: java.lang.Exception -> L4b
            r1.clear()     // Catch: java.lang.Exception -> L4b
            r4.syncToFile()     // Catch: java.lang.Exception -> L4b
            goto La
        L49:
            r0 = 1
            return r0
        L4b:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public com.ymnsdk.replugin.patch.download.DownloadFileInfo getDownloadFileInfo(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto L19
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L19
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L19
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo
            java.lang.Object r2 = r0.get(r2)
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r2 = (com.ymnsdk.replugin.patch.download.DownloadFileInfo) r2
            return r2
        L19:
            r2 = 0
            return r2
    }

    public java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> getDownloadFileStatus() {
            r1 = this;
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo
            return r0
    }

    public long getDownloadSize(java.lang.String r3) {
            r2 = this;
            boolean r0 = r3.isEmpty()
            if (r0 != 0) goto L11
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r3 = r2.getDownloadFileInfo(r3)
            if (r3 == 0) goto L11
            long r0 = r3.getSavedSize()
            goto L13
        L11:
            r0 = 0
        L13:
            return r0
    }

    public boolean isResumeDownload(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L10
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo
            java.lang.Object r2 = r0.get(r2)
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r2 = (com.ymnsdk.replugin.patch.download.DownloadFileInfo) r2
        L10:
            r2 = 0
            return r2
    }

    public boolean newTaskState(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r0 = new com.ymnsdk.replugin.patch.download.DownloadFileInfo
            r0.<init>()
            r0.setHash(r2)
            r0.setURL(r3)
            r0.setSavePath(r4)
            r1.updateTaskState(r0)
            r2 = 1
            return r2
    }

    public boolean overTime(long r1, long r3, int r5) {
            r0 = this;
            long r3 = r3 - r1
            int r5 = r5 * 60
            int r5 = r5 * 60
            int r5 = r5 * 1000
            long r1 = (long) r5
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 <= 0) goto Le
            r1 = 1
            return r1
        Le:
            r1 = 0
            return r1
    }

    public void pause() {
            r3 = this;
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getValue()
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r1 = (com.ymnsdk.replugin.patch.download.DownloadFileInfo) r1
            r2 = 0
            r1.setValid(r2)
            goto La
        L21:
            r3.syncToFile()
            return
    }

    public void pause(java.lang.String r2) {
            r1 = this;
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r2 = r1.getDownloadFileInfo(r2)
            if (r2 == 0) goto Ld
            r0 = 0
            r2.setValid(r0)
            r1.updateTaskState(r2)
        Ld:
            return
    }

    public boolean removeTaskHistory(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L10
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo
            r0.remove(r2)
            r1.syncToFile()
        L10:
            r2 = 1
            return r2
    }

    public synchronized boolean resetStatus(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r4 = r3.getDownloadFileInfo(r4)     // Catch: java.lang.Throwable -> L31
            if (r4 == 0) goto L2e
            r0 = 0
            r4.setSavedSize(r0)     // Catch: java.lang.Throwable -> L31
            r4.setTotalSize(r0)     // Catch: java.lang.Throwable -> L31
            r0 = 1
            r4.setValid(r0)     // Catch: java.lang.Throwable -> L31
            r3.updateTaskState(r4)     // Catch: java.lang.Throwable -> L31
            com.ymnsdk.replugin.util.DownloadUtils r1 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = r4.getSavePath()     // Catch: java.lang.Throwable -> L31
            r1.removeFile(r2)     // Catch: java.lang.Throwable -> L31
            com.ymnsdk.replugin.util.DownloadUtils r1 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()     // Catch: java.lang.Throwable -> L31
            java.lang.String r4 = r4.getSaveCachePath()     // Catch: java.lang.Throwable -> L31
            r1.removeFile(r4)     // Catch: java.lang.Throwable -> L31
            monitor-exit(r3)
            return r0
        L2e:
            r4 = 0
            monitor-exit(r3)
            return r4
        L31:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public void resume() {
            r3 = this;
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getValue()
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r1 = (com.ymnsdk.replugin.patch.download.DownloadFileInfo) r1
            r2 = 1
            r1.setValid(r2)
            goto La
        L21:
            r3.syncToFile()
            return
    }

    public void resume(java.lang.String r2) {
            r1 = this;
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r2 = r1.getDownloadFileInfo(r2)
            if (r2 == 0) goto Ld
            r0 = 1
            r2.setValid(r0)
            r1.updateTaskState(r2)
        Ld:
            return
    }

    public com.ymnsdk.replugin.patch.download.DownloadFileInfo searchResumeTask() {
            r6 = this;
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2f
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r1 = r1.getValue()
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r1 = (com.ymnsdk.replugin.patch.download.DownloadFileInfo) r1
            boolean r2 = r1.getValid()
            if (r2 == 0) goto La
            long r2 = r1.getSavedSize()
            long r4 = r1.getTotalSize()
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto La
            return r1
        L2f:
            r0 = 0
            return r0
    }

    public boolean syncDownloadFileSize(java.lang.String r3, int r4) {
            r2 = this;
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r3 = r2.getDownloadFileInfo(r3)
            if (r3 == 0) goto L15
            boolean r0 = r3.getValid()
            if (r0 == 0) goto L15
            long r0 = (long) r4
            r3.addSavedSize(r0)
            r2.updateTaskState(r3)
            r3 = 1
            return r3
        L15:
            r3 = 0
            return r3
    }

    public boolean syncDownloadStatus(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            r3.syncFromFile()
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r0 = r3.getDownloadFileInfo(r4)
            if (r0 != 0) goto Ld
            r3.newTaskState(r4, r5, r6)
            goto L34
        Ld:
            java.io.File r4 = new java.io.File
            java.lang.String r5 = r0.getSaveCachePath()
            r4.<init>(r5)
            boolean r5 = r4.exists()
            if (r5 == 0) goto L21
            long r4 = r4.length()
            goto L23
        L21:
            r4 = 0
        L23:
            long r1 = r0.getSavedSize()
            int r6 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r6 <= 0) goto L2e
            r0.setSavedSize(r4)
        L2e:
            r0.addRetryCount()
            r3.updateTaskState(r0)
        L34:
            r4 = 1
            return r4
    }

    public synchronized void syncFromFile() {
            r4 = this;
            monitor-enter(r4)
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = r0.getConfigPath()     // Catch: java.lang.Throwable -> L43
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L43
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L43
            boolean r1 = r1.exists()     // Catch: java.lang.Throwable -> L43
            if (r1 != 0) goto L16
            monitor-exit(r4)
            return
        L16:
            java.io.ObjectInputStream r1 = new java.io.ObjectInputStream     // Catch: java.lang.Throwable -> L3d
            java.io.BufferedInputStream r2 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L3d
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L3d
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L3d
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L3d
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3d
            java.lang.Object r0 = r1.readObject()     // Catch: java.lang.Throwable -> L31
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Throwable -> L31
            com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo = r0     // Catch: java.lang.Throwable -> L31
            r1.close()     // Catch: java.lang.Throwable -> L3d
            goto L41
        L31:
            r0 = move-exception
            throw r0     // Catch: java.lang.Throwable -> L33
        L33:
            r2 = move-exception
            r1.close()     // Catch: java.lang.Throwable -> L38
            goto L3c
        L38:
            r1 = move-exception
            r0.addSuppressed(r1)     // Catch: java.lang.Throwable -> L3d
        L3c:
            throw r2     // Catch: java.lang.Throwable -> L3d
        L3d:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L43
        L41:
            monitor-exit(r4)
            return
        L43:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public synchronized void syncToFile() {
            r5 = this;
            monitor-enter(r5)
            com.ymnsdk.replugin.util.DownloadUtils r0 = com.ymnsdk.replugin.util.DownloadUtils.getInstance()     // Catch: java.lang.Throwable -> L34
            java.lang.String r0 = r0.getConfigPath()     // Catch: java.lang.Throwable -> L34
            java.io.ObjectOutputStream r1 = new java.io.ObjectOutputStream     // Catch: java.lang.Throwable -> L2e
            java.io.BufferedOutputStream r2 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L2e
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L2e
            r4 = 0
            r3.<init>(r0, r4)     // Catch: java.lang.Throwable -> L2e
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L2e
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2e
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo     // Catch: java.lang.Throwable -> L22
            r1.writeObject(r0)     // Catch: java.lang.Throwable -> L22
            r1.close()     // Catch: java.lang.Throwable -> L2e
            goto L32
        L22:
            r0 = move-exception
            throw r0     // Catch: java.lang.Throwable -> L24
        L24:
            r2 = move-exception
            r1.close()     // Catch: java.lang.Throwable -> L29
            goto L2d
        L29:
            r1 = move-exception
            r0.addSuppressed(r1)     // Catch: java.lang.Throwable -> L2e
        L2d:
            throw r2     // Catch: java.lang.Throwable -> L2e
        L2e:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L34
        L32:
            monitor-exit(r5)
            return
        L34:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    public void updateState(java.lang.String r2, long r3) {
            r1 = this;
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo
            java.lang.Object r0 = r0.get(r2)
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r0 = (com.ymnsdk.replugin.patch.download.DownloadFileInfo) r0
            r0.setSavedSize(r3)
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r3 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo
            r3.put(r2, r0)
            r1.syncToFile()
            return
    }

    public boolean updateTaskState(com.ymnsdk.replugin.patch.download.DownloadFileInfo r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.ymnsdk.replugin.patch.download.DownloadFileInfo> r0 = com.ymnsdk.replugin.patch.download.DownloadFileState.mDownloadFileInfo
            java.lang.String r1 = r3.getHash()
            r0.put(r1, r3)
            r2.syncToFile()
            r3 = 1
            return r3
    }

    public boolean verifySaveFileSize(java.lang.String r5, long r6) {
            r4 = this;
            com.ymnsdk.replugin.patch.download.DownloadFileInfo r5 = r4.getDownloadFileInfo(r5)
            if (r5 == 0) goto L1f
            long r0 = r5.getSavedSize()
            long r6 = r6 + r0
            long r0 = r5.getTotalSize()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L1f
            long r0 = r5.getTotalSize()
            int r0 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r0 == 0) goto L1f
            r5 = 0
            return r5
        L1f:
            r5.setTotalSize(r6)
            r4.updateTaskState(r5)
            r5 = 1
            return r5
    }
}
