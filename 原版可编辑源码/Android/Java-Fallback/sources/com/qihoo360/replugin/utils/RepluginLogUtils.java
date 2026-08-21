package com.qihoo360.replugin.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RepluginLogUtils {
    private com.qihoo360.replugin.utils.basic.RepluginLogData logData;
    private java.lang.String mWriteablePath;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static final class Factory {
        private static final com.qihoo360.replugin.utils.RepluginLogUtils instance = null;

        static {
                com.qihoo360.replugin.utils.RepluginLogUtils r0 = new com.qihoo360.replugin.utils.RepluginLogUtils
                r0.<init>()
                com.qihoo360.replugin.utils.RepluginLogUtils.Factory.instance = r0
                return
        }

        private Factory() {
                r0 = this;
                r0.<init>()
                return
        }

        static com.qihoo360.replugin.utils.RepluginLogUtils access$000() {
                com.qihoo360.replugin.utils.RepluginLogUtils r0 = com.qihoo360.replugin.utils.RepluginLogUtils.Factory.instance
                return r0
        }
    }

    public RepluginLogUtils() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.logData = r0
            return
    }

    public static com.qihoo360.replugin.utils.RepluginLogUtils getInstance() {
            com.qihoo360.replugin.utils.RepluginLogUtils r0 = com.qihoo360.replugin.utils.RepluginLogUtils.Factory.access$000()
            return r0
    }

    public void addLog(java.lang.String r3) {
            r2 = this;
            com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils r0 = com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils.getInstance()
            java.lang.String r0 = r0.getPluginLog()
            java.lang.String r1 = "true"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L11
            return
        L11:
            r2.syncFromFile()
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = r2.logData
            if (r0 != 0) goto L1f
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = new com.qihoo360.replugin.utils.basic.RepluginLogData
            r0.<init>()
            r2.logData = r0
        L1f:
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = r2.logData
            int r1 = r0.getSize()
            int r1 = r1 + 1
            r0.setSize(r1)
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = r2.logData
            java.util.ArrayList r0 = r0.getLogList()
            if (r0 != 0) goto L37
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        L37:
            r0.add(r3)
            com.qihoo360.replugin.utils.basic.RepluginLogData r3 = r2.logData
            r3.setLogList(r0)
            r2.syncToFile()
            return
    }

    public void clearLog() {
            r2 = this;
            r2.syncFromFile()
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = r2.logData
            if (r0 != 0) goto Le
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = new com.qihoo360.replugin.utils.basic.RepluginLogData
            r0.<init>()
            r2.logData = r0
        Le:
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = r2.logData
            r1 = 0
            r0.setSize(r1)
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = r2.logData
            java.util.ArrayList r0 = r0.getLogList()
            if (r0 != 0) goto L26
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = r2.logData
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.setLogList(r1)
        L26:
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = r2.logData
            java.util.ArrayList r0 = r0.getLogList()
            r0.clear()
            r2.syncToFile()
            return
    }

    public java.lang.String getConfigPath() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.mWriteablePath
            r0.append(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "plugin_log.cfg"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String getWriteablePath() {
            r1 = this;
            java.lang.String r0 = r1.mWriteablePath
            return r0
    }

    public com.qihoo360.replugin.utils.basic.RepluginLogData readLog() {
            r1 = this;
            r1.syncFromFile()
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = r1.logData
            if (r0 != 0) goto Le
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = new com.qihoo360.replugin.utils.basic.RepluginLogData
            r0.<init>()
            r1.logData = r0
        Le:
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = r1.logData
            return r0
    }

    public void setWriteablePath(java.lang.String r2) {
            r1 = this;
            java.io.File r0 = new java.io.File     // Catch: java.io.IOException -> L15
            r0.<init>(r2)     // Catch: java.io.IOException -> L15
            boolean r2 = r0.exists()     // Catch: java.io.IOException -> L15
            if (r2 != 0) goto Le
            r0.mkdirs()     // Catch: java.io.IOException -> L15
        Le:
            java.lang.String r2 = r0.getCanonicalPath()     // Catch: java.io.IOException -> L15
            r1.mWriteablePath = r2     // Catch: java.io.IOException -> L15
            goto L19
        L15:
            r2 = move-exception
            r2.printStackTrace()
        L19:
            return
    }

    public synchronized void syncFromFile() {
            r4 = this;
            monitor-enter(r4)
            java.lang.String r0 = r4.getConfigPath()     // Catch: java.lang.Throwable -> L3f
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L3f
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L3f
            boolean r1 = r1.exists()     // Catch: java.lang.Throwable -> L3f
            if (r1 != 0) goto L12
            monitor-exit(r4)
            return
        L12:
            java.io.ObjectInputStream r1 = new java.io.ObjectInputStream     // Catch: java.lang.Throwable -> L39
            java.io.BufferedInputStream r2 = new java.io.BufferedInputStream     // Catch: java.lang.Throwable -> L39
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L39
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L39
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L39
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L39
            java.lang.Object r0 = r1.readObject()     // Catch: java.lang.Throwable -> L2d
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = (com.qihoo360.replugin.utils.basic.RepluginLogData) r0     // Catch: java.lang.Throwable -> L2d
            r4.logData = r0     // Catch: java.lang.Throwable -> L2d
            r1.close()     // Catch: java.lang.Throwable -> L39
            goto L3d
        L2d:
            r0 = move-exception
            throw r0     // Catch: java.lang.Throwable -> L2f
        L2f:
            r2 = move-exception
            r1.close()     // Catch: java.lang.Throwable -> L34
            goto L38
        L34:
            r1 = move-exception
            r0.addSuppressed(r1)     // Catch: java.lang.Throwable -> L39
        L38:
            throw r2     // Catch: java.lang.Throwable -> L39
        L39:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L3f
        L3d:
            monitor-exit(r4)
            return
        L3f:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public synchronized void syncToFile() {
            r5 = this;
            monitor-enter(r5)
            java.lang.String r0 = r5.getConfigPath()     // Catch: java.lang.Throwable -> L30
            java.io.ObjectOutputStream r1 = new java.io.ObjectOutputStream     // Catch: java.lang.Throwable -> L2a
            java.io.BufferedOutputStream r2 = new java.io.BufferedOutputStream     // Catch: java.lang.Throwable -> L2a
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L2a
            r4 = 0
            r3.<init>(r0, r4)     // Catch: java.lang.Throwable -> L2a
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L2a
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2a
            com.qihoo360.replugin.utils.basic.RepluginLogData r0 = r5.logData     // Catch: java.lang.Throwable -> L1e
            r1.writeObject(r0)     // Catch: java.lang.Throwable -> L1e
            r1.close()     // Catch: java.lang.Throwable -> L2a
            goto L2e
        L1e:
            r0 = move-exception
            throw r0     // Catch: java.lang.Throwable -> L20
        L20:
            r2 = move-exception
            r1.close()     // Catch: java.lang.Throwable -> L25
            goto L29
        L25:
            r1 = move-exception
            r0.addSuppressed(r1)     // Catch: java.lang.Throwable -> L2a
        L29:
            throw r2     // Catch: java.lang.Throwable -> L2a
        L2a:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L30
        L2e:
            monitor-exit(r5)
            return
        L30:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }
}
