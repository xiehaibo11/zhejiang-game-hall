package com.qihoo360.replugin.packages;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class PluginPublishFileGenerator {
    PluginPublishFileGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean write(java.lang.String r4, java.lang.String r5, int r6, int r7, int r8) {
            r0 = 0
            r1 = 0
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L5f
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L5f
            java.io.FileInputStream r2 = com.qihoo360.replugin.utils.FileUtils.openInputStream(r2)     // Catch: java.lang.Throwable -> L5f
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L5c
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L5c
            java.io.FileOutputStream r5 = com.qihoo360.replugin.utils.FileUtils.openOutputStream(r3)     // Catch: java.lang.Throwable -> L5c
            java.io.DataOutputStream r3 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L5a
            r3.<init>(r5)     // Catch: java.lang.Throwable -> L5a
            r3.writeInt(r6)     // Catch: java.lang.Throwable -> L57
            r3.writeInt(r7)     // Catch: java.lang.Throwable -> L57
            r3.writeInt(r8)     // Catch: java.lang.Throwable -> L57
            java.lang.String r6 = com.qihoo360.replugin.utils.basic.SecurityUtil.getFileMD5(r4)     // Catch: java.lang.Throwable -> L57
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L57
            if (r7 == 0) goto L36
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r3)
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r5)
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            return r0
        L36:
            r3.writeUTF(r6)     // Catch: java.lang.Throwable -> L57
            r3.writeInt(r0)     // Catch: java.lang.Throwable -> L57
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L57
            r6.<init>(r4)     // Catch: java.lang.Throwable -> L57
            long r6 = r6.length()     // Catch: java.lang.Throwable -> L57
            int r4 = (int) r6     // Catch: java.lang.Throwable -> L57
            r3.writeInt(r4)     // Catch: java.lang.Throwable -> L57
            com.qihoo360.replugin.utils.IOUtils.copy(r2, r3)     // Catch: java.lang.Throwable -> L57
            r4 = 1
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r3)
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r5)
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            return r4
        L57:
            r4 = move-exception
            r1 = r3
            goto L62
        L5a:
            r4 = move-exception
            goto L62
        L5c:
            r4 = move-exception
            r5 = r1
            goto L62
        L5f:
            r4 = move-exception
            r5 = r1
            r2 = r5
        L62:
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L6f
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r1)
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r5)
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            return r0
        L6f:
            r4 = move-exception
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r1)
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r5)
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            throw r4
    }
}
