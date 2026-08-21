package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginNativeLibsHelper {
    private static final java.lang.String TAG = "PluginNativeLibsHelper";

    public PluginNativeLibsHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void clear(java.io.File r1) {
            boolean r0 = r1.exists()
            if (r0 != 0) goto L7
            return
        L7:
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r1)     // Catch: java.lang.IllegalArgumentException -> Lb java.io.IOException -> L10
            goto L14
        Lb:
            r1 = move-exception
            r1.printStackTrace()
            goto L14
        L10:
            r1 = move-exception
            r1.printStackTrace()
        L14:
            return
    }

    private static void extractFile(java.util.zip.ZipFile r2, java.util.zip.ZipEntry r3, java.io.File r4) throws java.io.IOException {
            java.io.InputStream r2 = r2.getInputStream(r3)     // Catch: java.lang.Throwable -> L2b
            com.qihoo360.replugin.utils.FileUtils.copyInputStreamToFile(r2, r4)     // Catch: java.lang.Throwable -> L29
            boolean r3 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.Throwable -> L29
            if (r3 == 0) goto L25
            java.lang.String r3 = "PluginNativeLibsHelper"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L29
            r0.<init>()     // Catch: java.lang.Throwable -> L29
            java.lang.String r1 = "extractFile(): Success! fn="
            r0.append(r1)     // Catch: java.lang.Throwable -> L29
            java.lang.String r4 = r4.getName()     // Catch: java.lang.Throwable -> L29
            r0.append(r4)     // Catch: java.lang.Throwable -> L29
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L29
            android.util.Log.i(r3, r4)     // Catch: java.lang.Throwable -> L29
        L25:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            return
        L29:
            r3 = move-exception
            goto L2d
        L2b:
            r3 = move-exception
            r2 = 0
        L2d:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            throw r3
    }

    private static java.lang.String findSoPathForAbis(java.util.Set<java.lang.String> r4, java.lang.String r5) {
            if (r4 == 0) goto L4f
            int r0 = r4.size()
            if (r0 > 0) goto L9
            goto L4f
        L9:
            boolean r0 = com.qihoo360.loader2.VMRuntimeCompat.is64Bit()
            if (r0 == 0) goto L12
            java.lang.String[] r1 = com.qihoo360.loader2.BuildCompat.SUPPORTED_64_BIT_ABIS
            goto L14
        L12:
            java.lang.String[] r1 = com.qihoo360.loader2.BuildCompat.SUPPORTED_32_BIT_ABIS
        L14:
            java.lang.String r4 = findSoPathWithAbiList(r4, r5, r1)
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L4e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "findSoPathForAbis: Find so path. name="
            r2.append(r3)
            r2.append(r5)
            java.lang.String r5 = "; list="
            r2.append(r5)
            r2.append(r4)
            java.lang.String r5 = "; Host-is-64bit?="
            r2.append(r5)
            r2.append(r0)
            java.lang.String r5 = "; abis="
            r2.append(r5)
            java.lang.String r5 = java.util.Arrays.toString(r1)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            java.lang.String r0 = "PluginNativeLibsHelper"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r5)
        L4e:
            return r4
        L4f:
            r4 = 0
            return r4
    }

    private static java.lang.String findSoPathWithAbiList(java.util.Set<java.lang.String> r5, java.lang.String r6, java.lang.String[] r7) {
            java.util.Arrays.sort(r7)
            java.util.Iterator r5 = r5.iterator()
        L7:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L3d
            java.lang.Object r0 = r5.next()
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r1 = ""
            java.lang.String r2 = "lib/"
            java.lang.String r2 = r0.replaceFirst(r2, r1)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "/"
            r3.append(r4)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            java.lang.String r1 = r2.replace(r3, r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L7
            int r1 = java.util.Arrays.binarySearch(r7, r1)
            if (r1 < 0) goto L7
            return r0
        L3d:
            r5 = 0
            return r5
    }

    private static void injectEntriesAndLibsMap(java.util.zip.ZipFile r3, java.util.Map<java.lang.String, java.util.zip.ZipEntry> r4, java.util.Map<java.lang.String, java.util.Set<java.lang.String>> r5) {
            java.util.Enumeration r3 = r3.entries()
        L4:
            boolean r0 = r3.hasMoreElements()
            if (r0 == 0) goto L4b
            java.lang.Object r0 = r3.nextElement()
            java.util.zip.ZipEntry r0 = (java.util.zip.ZipEntry) r0
            java.lang.String r1 = r0.getName()
            java.lang.String r2 = "../"
            boolean r2 = r1.contains(r2)
            if (r2 == 0) goto L1d
            goto L4
        L1d:
            java.lang.String r2 = "lib/"
            boolean r2 = r1.startsWith(r2)
            if (r2 == 0) goto L4
            boolean r2 = r0.isDirectory()
            if (r2 != 0) goto L4
            r4.put(r1, r0)
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            java.lang.String r0 = r0.getName()
            java.lang.Object r2 = r5.get(r0)
            java.util.Set r2 = (java.util.Set) r2
            if (r2 != 0) goto L47
            java.util.TreeSet r2 = new java.util.TreeSet
            r2.<init>()
            r5.put(r0, r2)
        L47:
            r2.add(r1)
            goto L4
        L4b:
            return
    }

    public static boolean install(java.lang.String r8, java.io.File r9) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "install(): Start. apkp="
            r0.append(r1)
            r0.append(r8)
            java.lang.String r1 = "; nd="
            r0.append(r1)
            java.lang.String r1 = r9.getAbsolutePath()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PluginNativeLibsHelper"
            android.util.Log.d(r1, r0)
            clear(r9)
            r0 = 0
            java.util.zip.ZipFile r2 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L8c
            r2.<init>(r8)     // Catch: java.lang.Throwable -> L8c
            java.util.HashMap r8 = new java.util.HashMap     // Catch: java.lang.Throwable -> L89
            r8.<init>()     // Catch: java.lang.Throwable -> L89
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L89
            r0.<init>()     // Catch: java.lang.Throwable -> L89
            injectEntriesAndLibsMap(r2, r8, r0)     // Catch: java.lang.Throwable -> L89
            java.util.Set r3 = r0.keySet()     // Catch: java.lang.Throwable -> L89
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L89
        L40:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Throwable -> L89
            if (r4 == 0) goto L84
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Throwable -> L89
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Throwable -> L89
            java.lang.Object r5 = r0.get(r4)     // Catch: java.lang.Throwable -> L89
            java.util.Set r5 = (java.util.Set) r5     // Catch: java.lang.Throwable -> L89
            java.lang.String r5 = findSoPathForAbis(r5, r4)     // Catch: java.lang.Throwable -> L89
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L89
            r6.<init>()     // Catch: java.lang.Throwable -> L89
            java.lang.String r7 = "install(): Ready to extract. so="
            r6.append(r7)     // Catch: java.lang.Throwable -> L89
            r6.append(r4)     // Catch: java.lang.Throwable -> L89
            java.lang.String r7 = "; sop="
            r6.append(r7)     // Catch: java.lang.Throwable -> L89
            r6.append(r5)     // Catch: java.lang.Throwable -> L89
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L89
            android.util.Log.d(r1, r6)     // Catch: java.lang.Throwable -> L89
            if (r5 != 0) goto L75
            goto L40
        L75:
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L89
            r6.<init>(r9, r4)     // Catch: java.lang.Throwable -> L89
            java.lang.Object r4 = r8.get(r5)     // Catch: java.lang.Throwable -> L89
            java.util.zip.ZipEntry r4 = (java.util.zip.ZipEntry) r4     // Catch: java.lang.Throwable -> L89
            extractFile(r2, r4, r6)     // Catch: java.lang.Throwable -> L89
            goto L40
        L84:
            r8 = 1
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r2)
            return r8
        L89:
            r8 = move-exception
            r0 = r2
            goto L8d
        L8c:
            r8 = move-exception
        L8d:
            boolean r1 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.Throwable -> L9c
            if (r1 == 0) goto L94
            r8.printStackTrace()     // Catch: java.lang.Throwable -> L9c
        L94:
            clear(r9)     // Catch: java.lang.Throwable -> L9c
            r8 = 0
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r0)
            return r8
        L9c:
            r8 = move-exception
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r0)
            throw r8
    }
}
