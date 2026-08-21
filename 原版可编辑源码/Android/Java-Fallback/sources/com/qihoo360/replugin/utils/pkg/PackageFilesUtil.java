package com.qihoo360.replugin.utils.pkg;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PackageFilesUtil {
    private static final java.lang.String TAG = "PackageFilesUtil";
    private static final java.lang.String TIMESTAMP_EXT = ".timestamp";

    public PackageFilesUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean compareDataFileVersion(android.content.Context r16, java.lang.String r17) {
            r1 = r17
            java.lang.String r2 = " version="
            java.lang.String r3 = "close error"
            java.lang.String r4 = "PackageFilesUtil"
            r0 = 4
            byte[] r5 = new byte[r0]
            r6 = 84
            r7 = 3
            r8 = 65
            r9 = 2
            r10 = 68
            r11 = 86
            r12 = 0
            r14 = 1
            java.io.DataInputStream r15 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L85
            android.content.res.AssetManager r0 = r16.getAssets()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L85
            java.io.InputStream r0 = r0.open(r1)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L85
            r15.<init>(r0)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L85
            r15.read(r5)     // Catch: java.lang.Exception -> L7d java.lang.Throwable -> L173
            r0 = r5[r12]     // Catch: java.lang.Exception -> L7d java.lang.Throwable -> L173
            if (r0 != r11) goto L6f
            r0 = r5[r14]     // Catch: java.lang.Exception -> L7d java.lang.Throwable -> L173
            if (r0 != r10) goto L6f
            r0 = r5[r9]     // Catch: java.lang.Exception -> L7d java.lang.Throwable -> L173
            if (r0 != r8) goto L6f
            r0 = r5[r7]     // Catch: java.lang.Exception -> L7d java.lang.Throwable -> L173
            if (r0 != r6) goto L6f
            r15.readInt()     // Catch: java.lang.Exception -> L7d java.lang.Throwable -> L173
            r15.readInt()     // Catch: java.lang.Exception -> L7d java.lang.Throwable -> L173
            int r13 = r15.readInt()     // Catch: java.lang.Exception -> L7d java.lang.Throwable -> L173
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> L173
            if (r0 == 0) goto L5f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> L173
            r0.<init>()     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> L173
            java.lang.String r6 = "Get assets version file="
            r0.append(r6)     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> L173
            r0.append(r1)     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> L173
            r0.append(r2)     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> L173
            r0.append(r13)     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> L173
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> L173
            android.util.Log.i(r4, r0)     // Catch: java.lang.Exception -> L6d java.lang.Throwable -> L173
        L5f:
            r15.close()     // Catch: java.lang.Exception -> L63
            goto Lad
        L63:
            r0 = move-exception
            r6 = r0
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 == 0) goto Lad
        L69:
            android.util.Log.e(r4, r3, r6)
            goto Lad
        L6d:
            r0 = move-exception
            goto L88
        L6f:
            r15.close()     // Catch: java.lang.Exception -> L73
            goto L7c
        L73:
            r0 = move-exception
            r1 = r0
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 == 0) goto L7c
            android.util.Log.e(r4, r3, r1)
        L7c:
            return r14
        L7d:
            r0 = move-exception
            r13 = -1
            goto L88
        L80:
            r0 = move-exception
            r1 = r0
            r15 = 0
            goto L175
        L85:
            r0 = move-exception
            r13 = -1
            r15 = 0
        L88:
            boolean r6 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.Throwable -> L173
            if (r6 == 0) goto La0
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L173
            r6.<init>()     // Catch: java.lang.Throwable -> L173
            java.lang.String r7 = "Get assets version error, file:"
            r6.append(r7)     // Catch: java.lang.Throwable -> L173
            r6.append(r1)     // Catch: java.lang.Throwable -> L173
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L173
            android.util.Log.e(r4, r6, r0)     // Catch: java.lang.Throwable -> L173
        La0:
            if (r15 == 0) goto Lad
            r15.close()     // Catch: java.lang.Exception -> La6
            goto Lad
        La6:
            r0 = move-exception
            r6 = r0
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 == 0) goto Lad
            goto L69
        Lad:
            java.io.DataInputStream r6 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L11c java.lang.Exception -> L11f
            java.io.FileInputStream r0 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L11c java.lang.Exception -> L11f
            java.io.File r7 = r16.getFileStreamPath(r17)     // Catch: java.lang.Throwable -> L11c java.lang.Exception -> L11f
            r0.<init>(r7)     // Catch: java.lang.Throwable -> L11c java.lang.Exception -> L11f
            r6.<init>(r0)     // Catch: java.lang.Throwable -> L11c java.lang.Exception -> L11f
            r6.read(r5)     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L119
            r0 = r5[r12]     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L119
            if (r0 != r11) goto L107
            r0 = r5[r14]     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L119
            if (r0 != r10) goto L107
            r0 = r5[r9]     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L119
            if (r0 != r8) goto L107
            r7 = 3
            r0 = r5[r7]     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L119
            r5 = 84
            if (r0 != r5) goto L107
            r6.readInt()     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L119
            r6.readInt()     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L119
            int r5 = r6.readInt()     // Catch: java.lang.Throwable -> L115 java.lang.Exception -> L119
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L115
            if (r0 == 0) goto Lf9
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L115
            r0.<init>()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L115
            java.lang.String r7 = "Get local version file="
            r0.append(r7)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L115
            r0.append(r1)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L115
            r0.append(r2)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L115
            r0.append(r5)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L115
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L115
            android.util.Log.i(r4, r0)     // Catch: java.lang.Exception -> L104 java.lang.Throwable -> L115
        Lf9:
            r6.close()     // Catch: java.lang.Exception -> Lfd
            goto L148
        Lfd:
            r0 = move-exception
            r1 = r0
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 == 0) goto L148
            goto L145
        L104:
            r0 = move-exception
            r15 = r6
            goto L121
        L107:
            r6.close()     // Catch: java.lang.Exception -> L10b
            goto L114
        L10b:
            r0 = move-exception
            r1 = r0
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 == 0) goto L114
            android.util.Log.e(r4, r3, r1)
        L114:
            return r14
        L115:
            r0 = move-exception
            r1 = r0
            r15 = r6
            goto L163
        L119:
            r0 = move-exception
            r15 = r6
            goto L120
        L11c:
            r0 = move-exception
            r1 = r0
            goto L163
        L11f:
            r0 = move-exception
        L120:
            r5 = -1
        L121:
            boolean r2 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.Throwable -> L11c
            if (r2 == 0) goto L139
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L11c
            r2.<init>()     // Catch: java.lang.Throwable -> L11c
            java.lang.String r6 = "Get file version error, file:"
            r2.append(r6)     // Catch: java.lang.Throwable -> L11c
            r2.append(r1)     // Catch: java.lang.Throwable -> L11c
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L11c
            android.util.Log.e(r4, r1, r0)     // Catch: java.lang.Throwable -> L11c
        L139:
            if (r15 == 0) goto L148
            r15.close()     // Catch: java.lang.Exception -> L13f
            goto L148
        L13f:
            r0 = move-exception
            r1 = r0
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 == 0) goto L148
        L145:
            android.util.Log.e(r4, r3, r1)
        L148:
            r1 = -1
            if (r13 == r1) goto L159
            if (r5 == r1) goto L159
            if (r13 > r5) goto L159
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 == 0) goto L158
            java.lang.String r0 = "compare file version not extract"
            android.util.Log.i(r4, r0)
        L158:
            return r12
        L159:
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 == 0) goto L162
            java.lang.String r0 = "compare file version need extract"
            android.util.Log.i(r4, r0)
        L162:
            return r14
        L163:
            if (r15 == 0) goto L172
            r15.close()     // Catch: java.lang.Exception -> L169
            goto L172
        L169:
            r0 = move-exception
            r2 = r0
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 == 0) goto L172
            android.util.Log.e(r4, r3, r2)
        L172:
            throw r1
        L173:
            r0 = move-exception
            r1 = r0
        L175:
            if (r15 == 0) goto L184
            r15.close()     // Catch: java.lang.Exception -> L17b
            goto L184
        L17b:
            r0 = move-exception
            r2 = r0
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 == 0) goto L184
            android.util.Log.e(r4, r3, r2)
        L184:
            throw r1
    }

    public static void forceDelete(com.qihoo360.replugin.model.PluginInfo r6) {
            if (r6 != 0) goto L3
            return
        L3:
            java.io.File r0 = r6.getApkFile()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            boolean r1 = r0.exists()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r2 = "delete "
            java.lang.String r3 = "PackageFilesUtil"
            if (r1 == 0) goto L2e
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r0)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            if (r0 == 0) goto L2e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.<init>()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.append(r2)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.io.File r1 = r6.getApkFile()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.append(r1)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r0 = r0.toString()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            android.util.Log.i(r3, r0)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
        L2e:
            java.io.File r0 = r6.getDexFile()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            boolean r1 = r0.exists()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            if (r1 == 0) goto L55
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r0)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            if (r0 == 0) goto L55
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.<init>()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.append(r2)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.io.File r1 = r6.getDexFile()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.append(r1)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r0 = r0.toString()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            android.util.Log.i(r3, r0)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
        L55:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r1 = 25
            if (r0 <= r1) goto Ld1
            java.io.File r0 = r6.getDexParentDir()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.io.File r1 = r6.getDexFile()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r1 = com.qihoo360.replugin.utils.FileUtils.getFileNameWithoutExt(r1)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.io.File r4 = new java.io.File     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r5.<init>()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r5.append(r1)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r1 = ".vdex"
            r5.append(r1)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r1 = r5.toString()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r4.<init>(r0, r1)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r4)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            if (r0 == 0) goto L9a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.<init>()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.append(r2)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.append(r4)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r0 = r0.toString()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            android.util.Log.i(r3, r0)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
        L9a:
            java.io.File r0 = new java.io.File     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r1.<init>()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.io.File r4 = r6.getApkFile()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r4 = r4.getAbsolutePath()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r1.append(r4)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r4 = ".prof"
            r1.append(r4)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r1 = r1.toString()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.<init>(r1)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r0)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            boolean r1 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            if (r1 == 0) goto Ld1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r1.<init>()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r1.append(r2)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r1.append(r0)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r0 = r1.toString()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            android.util.Log.i(r3, r0)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
        Ld1:
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r1 = 21
            if (r0 >= r1) goto Lf8
            java.io.File r0 = r6.getExtraOdexDir()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r0)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            if (r0 == 0) goto Lf8
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.<init>()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.append(r2)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.io.File r1 = r6.getExtraOdexDir()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.append(r1)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r0 = r0.toString()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            android.util.Log.i(r3, r0)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
        Lf8:
            java.io.File r0 = r6.getNativeLibsDir()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            boolean r0 = r0.exists()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            if (r0 == 0) goto L123
            java.io.File r0 = r6.getNativeLibsDir()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r0)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            if (r0 == 0) goto L123
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.<init>()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.append(r2)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.io.File r1 = r6.getNativeLibsDir()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.append(r1)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r0 = r0.toString()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            android.util.Log.i(r3, r0)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
        L123:
            java.lang.String r0 = "plugin_v3_%s.lock"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r4 = 0
            java.io.File r6 = r6.getApkFile()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r6 = r6.getName()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r1[r4] = r6     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r6 = java.lang.String.format(r0, r1)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.io.File r0 = new java.io.File     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            android.content.Context r1 = com.qihoo360.replugin.RePluginInternal.getAppContext()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.io.File r1 = r1.getFilesDir()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r0.<init>(r1, r6)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r0)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            boolean r6 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            if (r6 == 0) goto L167
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r6.<init>()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r6.append(r2)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            r6.append(r0)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            java.lang.String r6 = r6.toString()     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            android.util.Log.i(r3, r6)     // Catch: java.lang.IllegalArgumentException -> L15e java.io.IOException -> L163
            goto L167
        L15e:
            r6 = move-exception
            r6.printStackTrace()
            goto L167
        L163:
            r6 = move-exception
            r6.printStackTrace()
        L167:
            return
    }

    public static long getBundleTimestamp(android.content.Context r1, java.lang.String r2) {
            android.content.res.AssetManager r1 = r1.getAssets()     // Catch: java.lang.Exception -> L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1a
            r0.<init>()     // Catch: java.lang.Exception -> L1a
            r0.append(r2)     // Catch: java.lang.Exception -> L1a
            java.lang.String r2 = ".timestamp"
            r0.append(r2)     // Catch: java.lang.Exception -> L1a
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Exception -> L1a
            java.io.InputStream r1 = r1.open(r2)     // Catch: java.lang.Exception -> L1a
            goto L1b
        L1a:
            r1 = 0
        L1b:
            if (r1 == 0) goto L22
            long r1 = getTimestampFromStream(r1)
            return r1
        L22:
            r1 = 0
            return r1
    }

    public static long getFileTimestamp(android.content.Context r1, java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L16
            r0.<init>()     // Catch: java.lang.Exception -> L16
            r0.append(r2)     // Catch: java.lang.Exception -> L16
            java.lang.String r2 = ".timestamp"
            r0.append(r2)     // Catch: java.lang.Exception -> L16
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Exception -> L16
            java.io.FileInputStream r1 = r1.openFileInput(r2)     // Catch: java.lang.Exception -> L16
            goto L17
        L16:
            r1 = 0
        L17:
            if (r1 == 0) goto L1e
            long r1 = getTimestampFromStream(r1)
            return r1
        L1e:
            r1 = 0
            return r1
    }

    public static long getLatestFileTimestamp(android.content.Context r2, java.lang.String r3) {
            long r0 = getFileTimestamp(r2, r3)
            long r2 = getBundleTimestamp(r2, r3)
            long r2 = java.lang.Math.max(r0, r2)
            return r2
    }

    private static long getTimestampFromStream(java.io.InputStream r7) {
            java.lang.String r0 = ""
            java.lang.String r1 = "PackageFilesUtil"
            r2 = 0
            java.io.DataInputStream r3 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L43
            r3.<init>(r7)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L43
            java.lang.String r2 = r3.readLine()     // Catch: java.lang.Exception -> L3c java.lang.Throwable -> L64
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L3c java.lang.Throwable -> L64
            if (r4 != 0) goto L2a
            long r4 = java.lang.Long.parseLong(r2)     // Catch: java.lang.Exception -> L3c java.lang.Throwable -> L64
            r3.close()     // Catch: java.lang.Exception -> L21
            if (r7 == 0) goto L29
            r7.close()     // Catch: java.lang.Exception -> L21
            goto L29
        L21:
            r7 = move-exception
            boolean r2 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r2 == 0) goto L29
            android.util.Log.e(r1, r0, r7)
        L29:
            return r4
        L2a:
            r3.close()     // Catch: java.lang.Exception -> L33
            if (r7 == 0) goto L61
            r7.close()     // Catch: java.lang.Exception -> L33
            goto L61
        L33:
            r7 = move-exception
            boolean r2 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r2 == 0) goto L61
        L38:
            android.util.Log.e(r1, r0, r7)
            goto L61
        L3c:
            r2 = move-exception
            goto L47
        L3e:
            r3 = move-exception
            r6 = r3
            r3 = r2
            r2 = r6
            goto L65
        L43:
            r3 = move-exception
            r6 = r3
            r3 = r2
            r2 = r6
        L47:
            boolean r4 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.Throwable -> L64
            if (r4 == 0) goto L4e
            android.util.Log.e(r1, r0, r2)     // Catch: java.lang.Throwable -> L64
        L4e:
            if (r3 == 0) goto L56
            r3.close()     // Catch: java.lang.Exception -> L54
            goto L56
        L54:
            r7 = move-exception
            goto L5c
        L56:
            if (r7 == 0) goto L61
            r7.close()     // Catch: java.lang.Exception -> L54
            goto L61
        L5c:
            boolean r2 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r2 == 0) goto L61
            goto L38
        L61:
            r0 = 0
            return r0
        L64:
            r2 = move-exception
        L65:
            if (r3 == 0) goto L6d
            r3.close()     // Catch: java.lang.Exception -> L6b
            goto L6d
        L6b:
            r7 = move-exception
            goto L73
        L6d:
            if (r7 == 0) goto L7a
            r7.close()     // Catch: java.lang.Exception -> L6b
            goto L7a
        L73:
            boolean r3 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r3 == 0) goto L7a
            android.util.Log.e(r1, r0, r7)
        L7a:
            throw r2
    }

    public static boolean isExtractedFromAssetsToFiles(android.content.Context r1, java.lang.String r2) {
            java.io.File r0 = r1.getFileStreamPath(r2)
            if (r0 == 0) goto L12
            boolean r0 = r0.exists()
            if (r0 != 0) goto Ld
            goto L12
        Ld:
            boolean r1 = compareDataFileVersion(r1, r2)
            return r1
        L12:
            boolean r1 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r1 == 0) goto L2c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "Extract no exist file from assets filename = "
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "PackageFilesUtil"
            android.util.Log.i(r2, r1)
        L2c:
            r1 = 1
            return r1
    }

    public static boolean isFileUpdated(android.content.Context r4, java.lang.String r5) {
            java.io.File r0 = r4.getFileStreamPath(r5)
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            boolean r0 = r0.exists()
            if (r0 != 0) goto Lf
            return r1
        Lf:
            long r2 = getFileTimestamp(r4, r5)
            long r4 = getBundleTimestamp(r4, r5)
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 > 0) goto L1c
            r1 = 1
        L1c:
            return r1
    }

    public static java.io.InputStream openLatestInputFile(android.content.Context r4, java.lang.String r5) {
            long r0 = getFileTimestamp(r4, r5)
            long r2 = getBundleTimestamp(r4, r5)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            java.lang.String r1 = "PackageFilesUtil"
            r2 = 0
            if (r0 < 0) goto L44
            java.io.FileInputStream r2 = r4.openFileInput(r5)     // Catch: java.lang.Exception -> L2c
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.lang.Exception -> L2c
            if (r0 == 0) goto L44
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2c
            r0.<init>()     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = "Opening in files directory: "
            r0.append(r3)     // Catch: java.lang.Exception -> L2c
            r0.append(r5)     // Catch: java.lang.Exception -> L2c
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2c
            android.util.Log.i(r1, r0)     // Catch: java.lang.Exception -> L2c
            goto L44
        L2c:
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 == 0) goto L44
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r3 = " in files directory not found, skip."
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            android.util.Log.i(r1, r0)
        L44:
            if (r2 != 0) goto L6f
            android.content.res.AssetManager r4 = r4.getAssets()     // Catch: java.io.IOException -> L67 java.io.FileNotFoundException -> L6f
            java.io.InputStream r2 = r4.open(r5)     // Catch: java.io.IOException -> L67 java.io.FileNotFoundException -> L6f
            boolean r4 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG     // Catch: java.io.IOException -> L67 java.io.FileNotFoundException -> L6f
            if (r4 == 0) goto L6f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L67 java.io.FileNotFoundException -> L6f
            r4.<init>()     // Catch: java.io.IOException -> L67 java.io.FileNotFoundException -> L6f
            java.lang.String r0 = "Opening in assets: "
            r4.append(r0)     // Catch: java.io.IOException -> L67 java.io.FileNotFoundException -> L6f
            r4.append(r5)     // Catch: java.io.IOException -> L67 java.io.FileNotFoundException -> L6f
            java.lang.String r4 = r4.toString()     // Catch: java.io.IOException -> L67 java.io.FileNotFoundException -> L6f
            android.util.Log.i(r1, r4)     // Catch: java.io.IOException -> L67 java.io.FileNotFoundException -> L6f
            goto L6f
        L67:
            r4 = move-exception
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            if (r0 == 0) goto L6f
            android.util.Log.w(r1, r5, r4)
        L6f:
            return r2
    }
}
