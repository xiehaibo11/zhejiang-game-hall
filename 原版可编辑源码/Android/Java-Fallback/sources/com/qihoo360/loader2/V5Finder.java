package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class V5Finder {
    public V5Finder() {
            r0 = this;
            r0.<init>()
            return
    }

    static final void search(android.content.Context r8, java.io.File r9, com.qihoo360.loader2.Builder.PxAll r10) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.qihoo360.replugin.RePluginConfig r1 = com.qihoo360.replugin.RePlugin.getConfig()
            java.io.File r1 = r1.getPnInstallDir()
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r3 = "ws001"
            if (r2 == 0) goto L2b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "search v5 files: dir="
            r2.append(r4)
            java.lang.String r4 = r1.getAbsolutePath()
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        L2b:
            searchV5Plugins(r1, r0)
            java.util.Iterator r0 = r0.iterator()
        L32:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L81
            java.lang.Object r1 = r0.next()
            com.qihoo360.loader2.V5FileInfo r1 = (com.qihoo360.loader2.V5FileInfo) r1
            com.qihoo360.loader.utils.ProcessLocker r2 = new com.qihoo360.loader.utils.ProcessLocker
            android.content.Context r4 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            java.io.File r5 = r1.mFile
            java.lang.String r5 = r5.getParent()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.io.File r7 = r1.mFile
            java.lang.String r7 = r7.getName()
            r6.append(r7)
            java.lang.String r7 = ".lock"
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            r2.<init>(r4, r5, r6)
            boolean r2 = r2.isLocked()
            if (r2 == 0) goto L6b
            goto L32
        L6b:
            r2 = 0
            r4 = 1
            com.qihoo360.replugin.model.PluginInfo r1 = r1.updateV5FileTo(r8, r9, r2, r4)
            if (r1 != 0) goto L7d
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L32
            java.lang.String r1 = "search: fail to update v5 plugin"
            com.qihoo360.replugin.helper.LogDebug.d(r3, r1)
            goto L32
        L7d:
            r10.addV5(r1)
            goto L32
        L81:
            return
    }

    private static final void searchV5Plugins(java.io.File r7, java.util.ArrayList<com.qihoo360.loader2.V5FileInfo> r8) {
            java.io.File[] r7 = r7.listFiles()
            if (r7 != 0) goto L12
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r7 == 0) goto L11
            java.lang.String r7 = "ws001"
            java.lang.String r8 = "search v5 plugin: nothing"
            com.qihoo360.replugin.helper.LogDebug.d(r7, r8)
        L11:
            return
        L12:
            int r0 = r7.length
            r1 = 0
        L14:
            if (r1 >= r0) goto L42
            r2 = r7[r1]
            boolean r3 = r2.isDirectory()
            if (r3 == 0) goto L1f
            goto L3f
        L1f:
            long r3 = r2.length()
            r5 = 0
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 > 0) goto L2a
            goto L3f
        L2a:
            r3 = 1
            com.qihoo360.loader2.V5FileInfo r3 = com.qihoo360.loader2.V5FileInfo.build(r2, r3)
            if (r3 == 0) goto L35
            r8.add(r3)
            goto L3f
        L35:
            r3 = 3
            com.qihoo360.loader2.V5FileInfo r2 = com.qihoo360.loader2.V5FileInfo.build(r2, r3)
            if (r2 == 0) goto L3f
            r8.add(r2)
        L3f:
            int r1 = r1 + 1
            goto L14
        L42:
            return
    }
}
