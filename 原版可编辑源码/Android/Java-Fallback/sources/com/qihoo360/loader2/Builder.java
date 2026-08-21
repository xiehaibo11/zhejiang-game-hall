package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class Builder {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static final class PxAll {
        private final java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> all;
        private final java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> builtins;
        private final java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> normals;
        private final java.util.HashSet<com.qihoo360.replugin.model.PluginInfo> others;
        private final java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> v5;

        PxAll() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.builtins = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.v5 = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.normals = r0
                java.util.HashSet r0 = new java.util.HashSet
                r0.<init>()
                r1.others = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.all = r0
                return
        }

        private final com.qihoo360.replugin.model.PluginInfo getBuiltin(java.lang.String r4) {
                r3 = this;
                java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> r0 = r3.builtins
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1d
                java.lang.Object r1 = r0.next()
                com.qihoo360.replugin.model.PluginInfo r1 = (com.qihoo360.replugin.model.PluginInfo) r1
                java.lang.String r2 = r1.getName()
                boolean r2 = r2.equals(r4)
                if (r2 == 0) goto L6
                return r1
            L1d:
                r4 = 0
                return r4
        }

        private final com.qihoo360.replugin.model.PluginInfo getV5(java.lang.String r4) {
                r3 = this;
                java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> r0 = r3.v5
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1d
                java.lang.Object r1 = r0.next()
                com.qihoo360.replugin.model.PluginInfo r1 = (com.qihoo360.replugin.model.PluginInfo) r1
                java.lang.String r2 = r1.getName()
                boolean r2 = r2.equals(r4)
                if (r2 == 0) goto L6
                return r1
            L1d:
                r4 = 0
                return r4
        }

        private final boolean hasOlder(java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> r4, com.qihoo360.replugin.model.PluginInfo r5) {
                r3 = this;
                java.util.Iterator r4 = r4.iterator()
            L4:
                boolean r0 = r4.hasNext()
                if (r0 == 0) goto L28
                java.lang.Object r0 = r4.next()
                com.qihoo360.replugin.model.PluginInfo r0 = (com.qihoo360.replugin.model.PluginInfo) r0
                java.lang.String r1 = r0.getName()
                java.lang.String r2 = r5.getName()
                boolean r1 = r1.equals(r2)
                if (r1 == 0) goto L4
                java.util.Comparator<com.qihoo360.replugin.model.PluginInfo> r1 = com.qihoo360.replugin.model.PluginInfo.VERSION_COMPARATOR
                int r0 = r1.compare(r0, r5)
                if (r0 >= 0) goto L4
                r4 = 1
                return r4
            L28:
                r4 = 0
                return r4
        }

        private final boolean insert(java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> r7, com.qihoo360.replugin.model.PluginInfo r8, boolean r9) {
                r6 = this;
                r0 = 0
                r1 = r0
            L2:
                int r2 = r7.size()
                r3 = 1
                if (r1 >= r2) goto L41
                java.lang.Object r2 = r7.get(r1)
                com.qihoo360.replugin.model.PluginInfo r2 = (com.qihoo360.replugin.model.PluginInfo) r2
                java.lang.String r4 = r2.getName()
                java.lang.String r5 = r8.getName()
                boolean r4 = r4.equals(r5)
                if (r4 == 0) goto L3e
                if (r9 == 0) goto L28
                java.util.Comparator<com.qihoo360.replugin.model.PluginInfo> r9 = com.qihoo360.replugin.model.PluginInfo.VERSION_COMPARATOR
                int r9 = r9.compare(r2, r8)
                if (r9 <= 0) goto L31
                return r0
            L28:
                java.util.Comparator<com.qihoo360.replugin.model.PluginInfo> r9 = com.qihoo360.replugin.model.PluginInfo.VERSION_COMPARATOR
                int r9 = r9.compare(r2, r8)
                if (r9 < 0) goto L31
                return r0
            L31:
                java.util.HashSet<com.qihoo360.replugin.model.PluginInfo> r9 = r6.others
                java.lang.Object r0 = r7.get(r1)
                r9.add(r0)
                r7.set(r1, r8)
                return r3
            L3e:
                int r1 = r1 + 1
                goto L2
            L41:
                r7.add(r8)
                return r3
        }

        final void addBuiltin(com.qihoo360.replugin.model.PluginInfo r3) {
                r2 = this;
                java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> r0 = r2.builtins
                r1 = 0
                r2.insert(r0, r3, r1)
                java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> r0 = r2.all
                r2.insert(r0, r3, r1)
                return
        }

        final void addNormal(com.qihoo360.replugin.model.PluginInfo r7) {
                r6 = this;
                java.lang.String r0 = r7.getName()
                com.qihoo360.replugin.model.PluginInfo r0 = r6.getBuiltin(r0)
                java.lang.String r1 = "ws001"
                if (r0 == 0) goto L31
                long r2 = r0.getVersionValue()
                long r4 = r7.getVersionValue()
                int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r0 != 0) goto L31
                boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r0 == 0) goto L5f
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = "builtin plugin: normal="
                r0.append(r2)
                r0.append(r7)
                java.lang.String r0 = r0.toString()
                com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
                goto L5f
            L31:
                java.lang.String r0 = r7.getName()
                com.qihoo360.replugin.model.PluginInfo r0 = r6.getV5(r0)
                if (r0 == 0) goto L66
                long r2 = r0.getVersionValue()
                long r4 = r7.getVersionValue()
                int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r0 != 0) goto L66
                boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r0 == 0) goto L5f
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = "v5 plugin: normal="
                r0.append(r2)
                r0.append(r7)
                java.lang.String r0 = r0.toString()
                com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
            L5f:
                java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> r0 = r6.normals
                r1 = 0
                r6.insert(r0, r7, r1)
                return
            L66:
                java.util.HashSet<com.qihoo360.replugin.model.PluginInfo> r0 = r6.others
                r0.add(r7)
                return
        }

        final void addV5(com.qihoo360.replugin.model.PluginInfo r3) {
                r2 = this;
                java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> r0 = r2.all
                r1 = 0
                boolean r0 = r2.insert(r0, r3, r1)
                if (r0 != 0) goto La
                return
            La:
                java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> r0 = r2.v5
                r2.insert(r0, r3, r1)
                return
        }

        final java.util.HashSet<com.qihoo360.replugin.model.PluginInfo> getOthers() {
                r1 = this;
                java.util.HashSet<com.qihoo360.replugin.model.PluginInfo> r0 = r1.others
                return r0
        }

        final java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> getPlugins() {
                r1 = this;
                java.util.ArrayList<com.qihoo360.replugin.model.PluginInfo> r0 = r1.all
                return r0
        }
    }

    public Builder() {
            r0 = this;
            r0.<init>()
            return
    }

    static final void builder(android.content.Context r5, com.qihoo360.loader2.Builder.PxAll r6) {
            com.qihoo360.loader2.Finder.search(r5, r6)
            java.util.HashSet r0 = r6.getOthers()
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L50
            java.lang.Object r1 = r0.next()
            com.qihoo360.replugin.model.PluginInfo r1 = (com.qihoo360.replugin.model.PluginInfo) r1
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r3 = "ws001"
            if (r2 == 0) goto L31
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "delete obsolote plugin="
            r2.append(r4)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        L31:
            boolean r2 = r1.deleteObsolote(r5)
            if (r2 != 0) goto Lb
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto Lb
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "can't delete obsolote plugin="
            r2.append(r4)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r3, r1)
            goto Lb
        L50:
            deleteUnknownDexs(r5, r6)
            deleteUnknownLibs(r5, r6)
            return
    }

    private static void deleteUnknownDexs(android.content.Context r7, com.qihoo360.loader2.Builder.PxAll r8) {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.ArrayList r8 = r8.getPlugins()
            java.util.Iterator r8 = r8.iterator()
        Ld:
            boolean r1 = r8.hasNext()
            java.lang.String r2 = "ws001"
            if (r1 == 0) goto L88
            java.lang.Object r1 = r8.next()
            com.qihoo360.replugin.model.PluginInfo r1 = (com.qihoo360.replugin.model.PluginInfo) r1
            java.io.File r3 = r1.getDexFile()
            java.lang.String r3 = r3.getName()
            r0.add(r3)
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L46
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "dexFile:"
            r3.append(r4)
            java.io.File r4 = r1.getDexFile()
            java.lang.String r4 = r4.getName()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r3)
        L46:
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 25
            if (r3 <= r4) goto Ld
            java.io.File r1 = r1.getDexFile()
            java.lang.String r1 = r1.getAbsolutePath()
            java.lang.String r1 = com.qihoo360.replugin.utils.FileUtils.getFileNameWithoutExt(r1)
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r4 = ".vdex"
            if (r3 == 0) goto L75
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "vdexFile:"
            r3.append(r5)
            r3.append(r1)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r3)
        L75:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            r2.append(r4)
            java.lang.String r1 = r2.toString()
            r0.add(r1)
            goto Ld
        L88:
            java.io.File r7 = getDexDir(r7)
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r8 == 0) goto La4
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r1 = "to delete dex dir:"
            r8.append(r1)
            r8.append(r7)
            java.lang.String r8 = r8.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r8)
        La4:
            java.io.File[] r7 = r7.listFiles()
            if (r7 == 0) goto L120
            int r8 = r7.length
            r1 = 0
        Lac:
            if (r1 >= r8) goto L120
            r3 = r7[r1]
            java.lang.String r4 = r3.getName()
            boolean r4 = r0.contains(r4)
            if (r4 == 0) goto Ld7
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L11d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "no need delete "
            r4.append(r5)
            java.lang.String r3 = r3.getAbsolutePath()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r3)
            goto L11d
        Ld7:
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto Lf3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "delete unknown dex="
            r4.append(r5)
            java.lang.String r5 = r3.getAbsolutePath()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r4)
        Lf3:
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r3)     // Catch: java.lang.IllegalArgumentException -> Lf7 java.io.IOException -> L100
            goto L11d
        Lf7:
            r3 = move-exception
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r4 == 0) goto L11d
            r3.printStackTrace()
            goto L11d
        L100:
            r4 = move-exception
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L11d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "can't delete unknown dex="
            r5.append(r6)
            java.lang.String r3 = r3.getAbsolutePath()
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r3, r4)
        L11d:
            int r1 = r1 + 1
            goto Lac
        L120:
            return
    }

    private static void deleteUnknownLibs(android.content.Context r7, com.qihoo360.loader2.Builder.PxAll r8) {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.ArrayList r8 = r8.getPlugins()
            java.util.Iterator r8 = r8.iterator()
        Ld:
            boolean r1 = r8.hasNext()
            if (r1 == 0) goto L25
            java.lang.Object r1 = r8.next()
            com.qihoo360.replugin.model.PluginInfo r1 = (com.qihoo360.replugin.model.PluginInfo) r1
            java.io.File r1 = r1.getNativeLibsDir()
            java.lang.String r1 = r1.getName()
            r0.add(r1)
            goto Ld
        L25:
            r8 = 0
            java.lang.String r1 = "plugins_v3_libs"
            java.io.File r7 = r7.getDir(r1, r8)
            java.io.File[] r7 = r7.listFiles()
            if (r7 == 0) goto L8d
            int r1 = r7.length
        L33:
            if (r8 >= r1) goto L8d
            r2 = r7[r8]
            java.lang.String r3 = r2.getName()
            boolean r3 = r0.contains(r3)
            if (r3 == 0) goto L42
            goto L8a
        L42:
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r4 = "ws001"
            if (r3 == 0) goto L60
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "delete unknown libs="
            r3.append(r5)
            java.lang.String r5 = r2.getAbsolutePath()
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r3)
        L60:
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r2)     // Catch: java.lang.IllegalArgumentException -> L64 java.io.IOException -> L6d
            goto L8a
        L64:
            r2 = move-exception
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L8a
            r2.printStackTrace()
            goto L8a
        L6d:
            r3 = move-exception
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L8a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "can't delete unknown libs="
            r5.append(r6)
            java.lang.String r2 = r2.getAbsolutePath()
            r5.append(r2)
            java.lang.String r2 = r5.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r4, r2, r3)
        L8a:
            int r8 = r8 + 1
            goto L33
        L8d:
            return
    }

    private static java.io.File getDexDir(android.content.Context r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 25
            if (r0 <= r2) goto L35
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "plugins_v3"
            java.io.File r4 = r4.getDir(r3, r1)
            r2.append(r4)
            java.lang.String r4 = java.io.File.separator
            r2.append(r4)
            java.lang.String r4 = "oat"
            r2.append(r4)
            java.lang.String r4 = java.io.File.separator
            r2.append(r4)
            java.lang.String r4 = com.qihoo360.loader2.VMRuntimeCompat.getArtOatCpuType()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r0.<init>(r4)
            return r0
        L35:
            java.lang.String r0 = "plugins_v3_odex"
            java.io.File r4 = r4.getDir(r0, r1)
            return r4
    }
}
