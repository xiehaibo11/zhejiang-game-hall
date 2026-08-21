package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class Finder {
    public Finder() {
            r0 = this;
            r0.<init>()
            return
    }

    static final void search(android.content.Context r4, com.qihoo360.loader2.Builder.PxAll r5) {
            com.qihoo360.loader2.FinderBuiltin.loadPlugins(r4, r5)
            java.lang.String r0 = "plugins_v3"
            r1 = 0
            java.io.File r0 = r4.getDir(r0, r1)
            com.qihoo360.loader2.V5Finder.search(r4, r0, r5)
            java.util.HashSet r4 = new java.util.HashSet
            r4.<init>()
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r2 = "ws001"
            if (r1 == 0) goto L30
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "search plugins: dir="
            r1.append(r3)
            java.lang.String r3 = r0.getAbsolutePath()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
        L30:
            searchLocalPlugins(r0, r5, r4)
            java.util.Iterator r5 = r4.iterator()
        L37:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L82
            java.lang.Object r0 = r5.next()
            java.io.File r0 = (java.io.File) r0
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L5f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "search: delete plugin dir invalid file="
            r1.append(r3)
            java.lang.String r3 = r0.getAbsolutePath()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
        L5f:
            boolean r1 = r0.delete()
            if (r1 != 0) goto L37
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L37
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "search: can't delete plugin dir invalid file="
            r1.append(r3)
            java.lang.String r0 = r0.getAbsolutePath()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)
            goto L37
        L82:
            r4.clear()
            return
    }

    private static final void searchLocalPlugins(java.io.File r8, com.qihoo360.loader2.Builder.PxAll r9, java.util.HashSet<java.io.File> r10) {
            java.io.File[] r8 = r8.listFiles()
            java.lang.String r0 = "ws001"
            if (r8 != 0) goto L12
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r8 == 0) goto L11
            java.lang.String r8 = "search local plugin: nothing"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r8)
        L11:
            return
        L12:
            int r1 = r8.length
            r2 = 0
        L14:
            if (r2 >= r1) goto L85
            r3 = r8[r2]
            boolean r4 = r3.isDirectory()
            if (r4 == 0) goto L1f
            goto L82
        L1f:
            long r4 = r3.length()
            r6 = 0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 > 0) goto L4b
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L45
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "search local plugin: zero length, file="
            r4.append(r5)
            java.lang.String r5 = r3.getAbsolutePath()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r0, r4)
        L45:
            if (r10 == 0) goto L82
            r10.add(r3)
            goto L82
        L4b:
            com.qihoo360.replugin.model.PluginInfo r4 = com.qihoo360.replugin.model.PluginInfo.build(r3)
            if (r4 != 0) goto L57
            if (r10 == 0) goto L82
            r10.add(r3)
            goto L82
        L57:
            boolean r5 = r4.match()
            if (r5 != 0) goto L7f
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L79
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "search local plugin: mismatch, file="
            r4.append(r5)
            java.lang.String r5 = r3.getAbsolutePath()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r0, r4)
        L79:
            if (r10 == 0) goto L82
            r10.add(r3)
            goto L82
        L7f:
            r9.addNormal(r4)
        L82:
            int r2 = r2 + 1
            goto L14
        L85:
            return
    }
}
