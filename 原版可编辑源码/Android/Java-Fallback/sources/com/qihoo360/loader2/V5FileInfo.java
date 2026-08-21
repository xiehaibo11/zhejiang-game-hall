package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class V5FileInfo {
    private static final java.lang.String EXTENSION = ".jar";
    public static final int INCREMENT_PLUGIN = 3;
    private static final java.lang.String INCREMENT_PLUGIN_FILE_PATTERN = "^v-plugin-([^.-]+).jar$";
    private static final java.util.regex.Pattern INCREMENT_REGEX = null;
    private static final java.util.regex.Pattern INCREMENT_SINGLE_REGEX = null;
    public static final int MULTI_PLUGIN = 4;
    private static final java.lang.String MULTI_PLUGIN_FILE_PATTERN = "^p-m-([^.-]+).jar$";
    private static final java.util.regex.Pattern MULTI_REGEX = null;
    public static final int NONE_PLUGIN = 0;
    public static final int NORMAL_PLUGIN = 1;
    private static final java.lang.String NORMAL_PLUGIN_FILE_PATTERN = "^p-n-([^.-]+).jar$";
    private static final java.lang.String NORMAL_PREFIX = "p-n-";
    private static final java.util.regex.Pattern NORMAL_REGEX = null;
    public static final int SINGLE_PLUGIN = 2;
    private static final java.lang.String SINGLE_PLUGIN_FILE_PATTERN = "^plugin-s-([^.-]+).jar$";
    private static final int V5_FILE_HEADER_SIZE = 16;
    java.io.File mFile;
    java.lang.String mName;
    int mType;

    static {
            java.lang.String r0 = "^v-plugin-([^.-]+).jar$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.qihoo360.loader2.V5FileInfo.INCREMENT_REGEX = r0
            java.lang.String r0 = "^plugin-s-([^.-]+).jar$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.qihoo360.loader2.V5FileInfo.INCREMENT_SINGLE_REGEX = r0
            java.lang.String r0 = "^p-n-([^.-]+).jar$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.qihoo360.loader2.V5FileInfo.NORMAL_REGEX = r0
            java.lang.String r0 = "^p-m-([^.-]+).jar$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.qihoo360.loader2.V5FileInfo.MULTI_REGEX = r0
            return
    }

    public V5FileInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    static final com.qihoo360.loader2.V5FileInfo build(java.io.File r4, int r5) {
            java.lang.String r0 = r4.getName()
            r1 = 3
            if (r5 != r1) goto Le
            java.util.regex.Pattern r1 = com.qihoo360.loader2.V5FileInfo.INCREMENT_REGEX
            java.util.regex.Matcher r0 = r1.matcher(r0)
            goto L28
        Le:
            r1 = 2
            if (r5 != r1) goto L18
            java.util.regex.Pattern r1 = com.qihoo360.loader2.V5FileInfo.INCREMENT_SINGLE_REGEX
            java.util.regex.Matcher r0 = r1.matcher(r0)
            goto L28
        L18:
            r1 = 4
            if (r5 != r1) goto L22
            java.util.regex.Pattern r1 = com.qihoo360.loader2.V5FileInfo.MULTI_REGEX
            java.util.regex.Matcher r0 = r1.matcher(r0)
            goto L28
        L22:
            java.util.regex.Pattern r1 = com.qihoo360.loader2.V5FileInfo.NORMAL_REGEX
            java.util.regex.Matcher r0 = r1.matcher(r0)
        L28:
            r1 = 0
            if (r0 == 0) goto L84
            boolean r2 = r0.matches()
            if (r2 != 0) goto L32
            goto L84
        L32:
            java.util.regex.MatchResult r0 = r0.toMatchResult()
            if (r0 == 0) goto L84
            int r2 = r0.groupCount()
            r3 = 1
            if (r2 == r3) goto L40
            goto L84
        L40:
            boolean r2 = r4.exists()
            if (r2 == 0) goto L84
            boolean r2 = r4.isFile()
            if (r2 != 0) goto L4d
            goto L84
        L4d:
            com.qihoo360.loader2.V5FileInfo r1 = new com.qihoo360.loader2.V5FileInfo
            r1.<init>()
            java.lang.String r0 = r0.group(r3)
            r1.mName = r0
            r1.mFile = r4
            r1.mType = r5
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L84
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "V5FileInfo.build: found plugin, name="
            r5.append(r0)
            java.lang.String r0 = r1.mName
            r5.append(r0)
            java.lang.String r0 = " file="
            r5.append(r0)
            java.lang.String r4 = r4.getAbsolutePath()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.String r5 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r5, r4)
        L84:
            return r1
    }

    public static com.qihoo360.replugin.model.PluginInfo fetchPluginInfo(android.content.Context r9, java.lang.String r10) {
            java.io.File r0 = new java.io.File
            java.io.File r1 = r9.getFilesDir()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "p-n-"
            r2.append(r3)
            r2.append(r10)
            java.lang.String r10 = ".jar"
            r2.append(r10)
            java.lang.String r10 = r2.toString()
            r0.<init>(r1, r10)
            boolean r10 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws000"
            if (r10 == 0) goto L3d
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r2 = "needUpdate(): local file =  "
            r10.append(r2)
            java.lang.String r2 = r0.getAbsolutePath()
            r10.append(r2)
            java.lang.String r10 = r10.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r10)
        L3d:
            boolean r10 = r0.exists()
            r2 = 0
            if (r10 != 0) goto L61
            boolean r9 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r9 == 0) goto L60
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "needUpdate(): file is not exists, file =  "
            r9.append(r10)
            java.lang.String r10 = r0.getAbsolutePath()
            r9.append(r10)
            java.lang.String r9 = r9.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r9)
        L60:
            return r2
        L61:
            r10 = 1
            com.qihoo360.loader2.V5FileInfo r10 = build(r0, r10)
            if (r10 != 0) goto L6d
            r10 = 3
            com.qihoo360.loader2.V5FileInfo r10 = build(r0, r10)
        L6d:
            if (r10 != 0) goto L74
            r10 = 4
            com.qihoo360.loader2.V5FileInfo r10 = build(r0, r10)
        L74:
            r3 = r10
            boolean r10 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r10 == 0) goto L8d
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "needUpdate(): localFileInfo =  "
            r10.append(r0)
            r10.append(r3)
            java.lang.String r10 = r10.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r10)
        L8d:
            if (r3 == 0) goto L9f
            r10 = 0
            java.lang.String r0 = "plugins_v3"
            java.io.File r5 = r9.getDir(r0, r10)
            r6 = 0
            r7 = 0
            r8 = 0
            r4 = r9
            com.qihoo360.replugin.model.PluginInfo r9 = r3.updateV5FileTo(r4, r5, r6, r7, r8)
            return r9
        L9f:
            return r2
    }

    static final java.lang.String getFileName(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "p-n-"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = ".jar"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static final java.lang.String parseName(java.lang.String r2, int r3) {
            r0 = 3
            if (r3 != r0) goto La
            java.util.regex.Pattern r3 = com.qihoo360.loader2.V5FileInfo.INCREMENT_REGEX
            java.util.regex.Matcher r2 = r3.matcher(r2)
            goto L24
        La:
            r0 = 2
            if (r3 != r0) goto L14
            java.util.regex.Pattern r3 = com.qihoo360.loader2.V5FileInfo.INCREMENT_SINGLE_REGEX
            java.util.regex.Matcher r2 = r3.matcher(r2)
            goto L24
        L14:
            r0 = 4
            if (r3 != r0) goto L1e
            java.util.regex.Pattern r3 = com.qihoo360.loader2.V5FileInfo.MULTI_REGEX
            java.util.regex.Matcher r2 = r3.matcher(r2)
            goto L24
        L1e:
            java.util.regex.Pattern r3 = com.qihoo360.loader2.V5FileInfo.NORMAL_REGEX
            java.util.regex.Matcher r2 = r3.matcher(r2)
        L24:
            r3 = 0
            if (r2 == 0) goto L41
            boolean r0 = r2.matches()
            if (r0 != 0) goto L2e
            goto L41
        L2e:
            java.util.regex.MatchResult r2 = r2.toMatchResult()
            if (r2 == 0) goto L41
            int r0 = r2.groupCount()
            r1 = 1
            if (r0 == r1) goto L3c
            goto L41
        L3c:
            java.lang.String r2 = r2.group(r1)
            return r2
        L41:
            return r3
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.mName
            return r0
    }

    final com.qihoo360.replugin.model.PluginInfo updateV5FileTo(android.content.Context r7, java.io.File r8, boolean r9, boolean r10) {
            r6 = this;
            r3 = 1
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r9
            r5 = r10
            com.qihoo360.replugin.model.PluginInfo r7 = r0.updateV5FileTo(r1, r2, r3, r4, r5)
            return r7
    }

    final com.qihoo360.replugin.model.PluginInfo updateV5FileTo(android.content.Context r21, java.io.File r22, boolean r23, boolean r24, boolean r25) {
            r20 = this;
            r1 = r20
            r0 = r22
            java.lang.String r2 = "ws001"
            r3 = 0
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L411
            java.io.File r5 = r1.mFile     // Catch: java.lang.Throwable -> L411
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L411
            java.io.DataInputStream r5 = new java.io.DataInputStream     // Catch: java.lang.Throwable -> L40d
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L40d
            int r6 = r1.mType     // Catch: java.lang.Throwable -> L409
            r7 = 3
            if (r6 != r7) goto L23
            r6 = 16
            r5.skip(r6)     // Catch: java.lang.Throwable -> L20
            r6 = 16
            goto L24
        L20:
            r0 = move-exception
            goto L414
        L23:
            r6 = 0
        L24:
            int r10 = r5.readInt()     // Catch: java.lang.Throwable -> L409
            int r6 = r6 + 4
            int r11 = r5.readInt()     // Catch: java.lang.Throwable -> L409
            int r6 = r6 + 4
            int r12 = r5.readInt()     // Catch: java.lang.Throwable -> L409
            int r6 = r6 + 4
            java.lang.String r7 = r5.readUTF()     // Catch: java.lang.Throwable -> L409
            int r9 = r7.length()     // Catch: java.lang.Throwable -> L409
            r13 = 32
            java.lang.String r14 = " name="
            if (r9 == r13) goto L6f
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L68
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L20
            r0.<init>()     // Catch: java.lang.Throwable -> L20
            java.lang.String r6 = "update v5 plugin: invalid md5 length: length="
            r0.append(r6)     // Catch: java.lang.Throwable -> L20
            int r6 = r7.length()     // Catch: java.lang.Throwable -> L20
            r0.append(r6)     // Catch: java.lang.Throwable -> L20
            r0.append(r14)     // Catch: java.lang.Throwable -> L20
            java.lang.String r6 = r1.mName     // Catch: java.lang.Throwable -> L20
            r0.append(r6)     // Catch: java.lang.Throwable -> L20
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L20
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)     // Catch: java.lang.Throwable -> L20
        L68:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r4)
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r5)
            return r3
        L6f:
            int r9 = r7.length()     // Catch: java.lang.Throwable -> L409
            int r9 = r9 + 2
            int r6 = r6 + r9
            int r9 = r5.readInt()     // Catch: java.lang.Throwable -> L409
            int r6 = r6 + 4
            r19 = r4
            long r3 = (long) r9
            r5.skip(r3)     // Catch: java.lang.Throwable -> L405
            int r6 = r6 + r9
            int r3 = r5.readInt()     // Catch: java.lang.Throwable -> L405
            int r6 = r6 + 4
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r4 == 0) goto Ld1
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r4.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r13 = "update v5 plugin: low="
            r4.append(r13)     // Catch: java.lang.Throwable -> L405
            r4.append(r10)     // Catch: java.lang.Throwable -> L405
            java.lang.String r13 = " high="
            r4.append(r13)     // Catch: java.lang.Throwable -> L405
            r4.append(r11)     // Catch: java.lang.Throwable -> L405
            java.lang.String r13 = " ver="
            r4.append(r13)     // Catch: java.lang.Throwable -> L405
            r4.append(r12)     // Catch: java.lang.Throwable -> L405
            java.lang.String r13 = " md5="
            r4.append(r13)     // Catch: java.lang.Throwable -> L405
            r4.append(r7)     // Catch: java.lang.Throwable -> L405
            java.lang.String r13 = " custom="
            r4.append(r13)     // Catch: java.lang.Throwable -> L405
            r4.append(r9)     // Catch: java.lang.Throwable -> L405
            java.lang.String r9 = " length="
            r4.append(r9)     // Catch: java.lang.Throwable -> L405
            r4.append(r3)     // Catch: java.lang.Throwable -> L405
            r4.append(r14)     // Catch: java.lang.Throwable -> L405
            java.lang.String r9 = r1.mName     // Catch: java.lang.Throwable -> L405
            r4.append(r9)     // Catch: java.lang.Throwable -> L405
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r4)     // Catch: java.lang.Throwable -> L405
        Ld1:
            int r4 = r6 + r3
            long r8 = (long) r4     // Catch: java.lang.Throwable -> L405
            java.io.File r4 = r1.mFile     // Catch: java.lang.Throwable -> L405
            long r15 = r4.length()     // Catch: java.lang.Throwable -> L405
            int r4 = (r8 > r15 ? 1 : (r8 == r15 ? 0 : -1))
            if (r4 == 0) goto L10e
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r0 == 0) goto L106
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r0.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = "update v5 plugin: invalid length: calc.length="
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            java.io.File r3 = r1.mFile     // Catch: java.lang.Throwable -> L405
            long r3 = r3.length()     // Catch: java.lang.Throwable -> L405
            long r6 = (long) r6     // Catch: java.lang.Throwable -> L405
            long r3 = r3 - r6
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            r0.append(r14)     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = r1.mName     // Catch: java.lang.Throwable -> L405
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)     // Catch: java.lang.Throwable -> L405
        L106:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r19)
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r5)
            r2 = 0
            return r2
        L10e:
            int r4 = com.qihoo360.loader2.Constant.ADAPTER_COMPATIBLE_VERSION     // Catch: java.lang.Throwable -> L405
            if (r10 >= r4) goto L13d
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r0 == 0) goto L106
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r0.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = "update v5 plugin: not supported plugin.low="
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            r0.append(r10)     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = " host.compatible.ver="
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            int r3 = com.qihoo360.loader2.Constant.ADAPTER_COMPATIBLE_VERSION     // Catch: java.lang.Throwable -> L405
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            r0.append(r14)     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = r1.mName     // Catch: java.lang.Throwable -> L405
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)     // Catch: java.lang.Throwable -> L405
            goto L106
        L13d:
            if (r11 < r10) goto L3e3
            int r4 = r11 - r10
            r6 = 1024(0x400, float:1.435E-42)
            if (r4 <= r6) goto L147
            goto L3e3
        L147:
            java.lang.String r4 = r1.mName     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.model.PluginInfo r4 = com.qihoo360.replugin.model.PluginInfo.build(r4, r10, r11, r12)     // Catch: java.lang.Throwable -> L405
            if (r23 == 0) goto L191
            com.qihoo360.replugin.RePluginConfig r6 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.RePluginCallbacks r6 = r6.getCallbacks()     // Catch: java.lang.Throwable -> L405
            boolean r4 = r6.isPluginBlocked(r4)     // Catch: java.lang.Throwable -> L405
            if (r4 == 0) goto L191
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r0 == 0) goto L106
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r0.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = "update v5 plugin: failed, plugin is blocked, name="
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = r1.mName     // Catch: java.lang.Throwable -> L405
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = ",low="
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            r0.append(r10)     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = ",high="
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            r0.append(r11)     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = ",ver="
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            r0.append(r12)     // Catch: java.lang.Throwable -> L405
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)     // Catch: java.lang.Throwable -> L405
            goto L106
        L191:
            if (r24 != 0) goto L1c9
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r0 == 0) goto L1ad
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r0.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = "update v5 plugin: delay extract f="
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            java.io.File r3 = r1.mFile     // Catch: java.lang.Throwable -> L405
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)     // Catch: java.lang.Throwable -> L405
        L1ad:
            java.lang.String r9 = r1.mName     // Catch: java.lang.Throwable -> L405
            int r13 = r1.mType     // Catch: java.lang.Throwable -> L405
            java.io.File r0 = r1.mFile     // Catch: java.lang.Throwable -> L405
            java.lang.String r14 = r0.getAbsolutePath()     // Catch: java.lang.Throwable -> L405
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = 0
            com.qihoo360.replugin.model.PluginInfo r0 = com.qihoo360.replugin.model.PluginInfo.buildV5(r9, r10, r11, r12, r13, r14, r15, r16, r17, r18)     // Catch: java.lang.Throwable -> L405
        L1c2:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r19)
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r5)
            return r0
        L1c9:
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L405
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r6.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r8 = r1.mName     // Catch: java.lang.Throwable -> L405
            java.lang.String r8 = com.qihoo360.replugin.model.PluginInfo.format(r8, r10, r11, r12)     // Catch: java.lang.Throwable -> L405
            r6.append(r8)     // Catch: java.lang.Throwable -> L405
            java.lang.String r8 = ".jar"
            r6.append(r8)     // Catch: java.lang.Throwable -> L405
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L405
            r4.<init>(r0, r6)     // Catch: java.lang.Throwable -> L405
            boolean r6 = r4.exists()     // Catch: java.lang.Throwable -> L405
            java.lang.String r8 = ""
            if (r6 == 0) goto L248
            long r9 = r4.length()     // Catch: java.lang.Throwable -> L405
            long r11 = (long) r3     // Catch: java.lang.Throwable -> L405
            int r6 = (r9 > r11 ? 1 : (r9 == r11 ? 0 : -1))
            if (r6 != 0) goto L248
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r6 == 0) goto L210
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r6.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r9 = "update v5 plugin: checking target ...  name="
            r6.append(r9)     // Catch: java.lang.Throwable -> L405
            java.lang.String r9 = r1.mName     // Catch: java.lang.Throwable -> L405
            r6.append(r9)     // Catch: java.lang.Throwable -> L405
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r6)     // Catch: java.lang.Throwable -> L405
        L210:
            byte[] r6 = com.qihoo360.replugin.utils.basic.SecurityUtil.MD5(r4)     // Catch: java.lang.Throwable -> L405
            if (r6 == 0) goto L21b
            java.lang.String r6 = com.qihoo360.loader.utils.StringUtils.toHexString(r6)     // Catch: java.lang.Throwable -> L405
            goto L21c
        L21b:
            r6 = r8
        L21c:
            java.util.Locale r9 = java.util.Locale.ENGLISH     // Catch: java.lang.Throwable -> L405
            java.lang.String r6 = r6.toLowerCase(r9)     // Catch: java.lang.Throwable -> L405
            boolean r6 = r7.equals(r6)     // Catch: java.lang.Throwable -> L405
            if (r6 == 0) goto L248
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r0 == 0) goto L242
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r0.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = "update v5 plugin: target match name="
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = r1.mName     // Catch: java.lang.Throwable -> L405
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)     // Catch: java.lang.Throwable -> L405
        L242:
            com.qihoo360.replugin.model.PluginInfo r0 = com.qihoo360.replugin.model.PluginInfo.build(r4)     // Catch: java.lang.Throwable -> L405
            goto L1c2
        L248:
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r6 == 0) goto L262
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r6.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r9 = "update v5 plugin: extract ... name="
            r6.append(r9)     // Catch: java.lang.Throwable -> L405
            java.lang.String r9 = r1.mName     // Catch: java.lang.Throwable -> L405
            r6.append(r9)     // Catch: java.lang.Throwable -> L405
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r6)     // Catch: java.lang.Throwable -> L405
        L262:
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L405
            java.lang.String r9 = "%s_plugin.tmp"
            r10 = 1
            java.lang.Object[] r11 = new java.lang.Object[r10]     // Catch: java.lang.Throwable -> L405
            java.lang.String r12 = r1.mName     // Catch: java.lang.Throwable -> L405
            r13 = 0
            r11[r13] = r12     // Catch: java.lang.Throwable -> L405
            java.lang.String r9 = java.lang.String.format(r9, r11)     // Catch: java.lang.Throwable -> L405
            r6.<init>(r0, r9)     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.utils.FileUtils.copyInputStreamToFile(r5, r6)     // Catch: java.lang.Throwable -> L405
            long r11 = r6.length()     // Catch: java.lang.Throwable -> L405
            r9 = r14
            long r13 = (long) r3     // Catch: java.lang.Throwable -> L405
            int r0 = (r11 > r13 ? 1 : (r11 == r13 ? 0 : -1))
            if (r0 == 0) goto L2a8
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r0 == 0) goto L2a6
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r0.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r11 = "update v5 plugin: extract file length="
            r0.append(r11)     // Catch: java.lang.Throwable -> L405
            long r11 = r6.length()     // Catch: java.lang.Throwable -> L405
            r0.append(r11)     // Catch: java.lang.Throwable -> L405
            java.lang.String r11 = " expected="
            r0.append(r11)     // Catch: java.lang.Throwable -> L405
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)     // Catch: java.lang.Throwable -> L405
        L2a6:
            r0 = r10
            goto L2a9
        L2a8:
            r0 = 0
        L2a9:
            if (r0 != 0) goto L2ef
            byte[] r3 = com.qihoo360.replugin.utils.basic.SecurityUtil.MD5(r6)     // Catch: java.lang.Throwable -> L405
            if (r3 == 0) goto L2b6
            java.lang.String r3 = com.qihoo360.loader.utils.StringUtils.toHexString(r3)     // Catch: java.lang.Throwable -> L405
            goto L2b7
        L2b6:
            r3 = r8
        L2b7:
            java.util.Locale r11 = java.util.Locale.ENGLISH     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = r3.toLowerCase(r11)     // Catch: java.lang.Throwable -> L405
            boolean r11 = r7.equals(r3)     // Catch: java.lang.Throwable -> L405
            if (r11 != 0) goto L2ef
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r0 == 0) goto L2ed
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r0.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r11 = "update v5 plugin: extract="
            r0.append(r11)     // Catch: java.lang.Throwable -> L405
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = " orig="
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            r0.append(r7)     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = ", delete tmpfile name="
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = r1.mName     // Catch: java.lang.Throwable -> L405
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)     // Catch: java.lang.Throwable -> L405
        L2ed:
            r3 = r10
            goto L2f0
        L2ef:
            r3 = r0
        L2f0:
            if (r3 != 0) goto L39b
            android.content.pm.PackageManager r0 = r21.getPackageManager()     // Catch: java.lang.Throwable -> L405
            java.lang.String r7 = r6.getAbsolutePath()     // Catch: java.lang.Throwable -> L301
            r11 = 64
            android.content.pm.PackageInfo r0 = com.qihoo360.loader.utils.PackageUtils.getPackageArchiveInfo(r0, r7, r11)     // Catch: java.lang.Throwable -> L301
            goto L30e
        L301:
            r0 = move-exception
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r7 == 0) goto L30d
            java.lang.String r7 = r0.getMessage()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r7, r0)     // Catch: java.lang.Throwable -> L405
        L30d:
            r0 = 0
        L30e:
            if (r0 != 0) goto L32b
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r3 == 0) goto L32a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r3.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r7 = "update v5 plugin: can't fetch package info:  name="
            r3.append(r7)     // Catch: java.lang.Throwable -> L405
            java.lang.String r7 = r1.mName     // Catch: java.lang.Throwable -> L405
            r3.append(r7)     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r3)     // Catch: java.lang.Throwable -> L405
        L32a:
            r3 = r10
        L32b:
            if (r25 == 0) goto L368
            boolean r7 = com.qihoo360.loader2.CertUtils.isPluginSignatures(r0)     // Catch: java.lang.Throwable -> L405
            if (r7 != 0) goto L368
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r7 == 0) goto L34d
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r7.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r11 = "update v5 plugin: invalid cert:  name="
            r7.append(r11)     // Catch: java.lang.Throwable -> L405
            java.lang.String r11 = r1.mName     // Catch: java.lang.Throwable -> L405
            r7.append(r11)     // Catch: java.lang.Throwable -> L405
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r7)     // Catch: java.lang.Throwable -> L405
        L34d:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r7.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r11 = "uv5p ic n="
            r7.append(r11)     // Catch: java.lang.Throwable -> L405
            java.lang.String r11 = r1.mName     // Catch: java.lang.Throwable -> L405
            r7.append(r11)     // Catch: java.lang.Throwable -> L405
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogRelease.e(r2, r7)     // Catch: java.lang.Throwable -> L405
            boolean r7 = com.qihoo360.replugin.RePluginInternal.FOR_DEV     // Catch: java.lang.Throwable -> L405
            if (r7 != 0) goto L368
            r3 = r10
        L368:
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r7 == 0) goto L39b
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r7.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r11 = "update v5 plugin: package="
            r7.append(r11)     // Catch: java.lang.Throwable -> L405
            if (r0 == 0) goto L37a
            java.lang.String r8 = r0.packageName     // Catch: java.lang.Throwable -> L405
        L37a:
            r7.append(r8)     // Catch: java.lang.Throwable -> L405
            java.lang.String r0 = " delete="
            r7.append(r0)     // Catch: java.lang.Throwable -> L405
            if (r3 == 0) goto L387
            java.lang.String r0 = "true"
            goto L389
        L387:
            java.lang.String r0 = "false"
        L389:
            r7.append(r0)     // Catch: java.lang.Throwable -> L405
            r7.append(r9)     // Catch: java.lang.Throwable -> L405
            java.lang.String r0 = r1.mName     // Catch: java.lang.Throwable -> L405
            r7.append(r0)     // Catch: java.lang.Throwable -> L405
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)     // Catch: java.lang.Throwable -> L405
        L39b:
            com.qihoo360.replugin.model.PluginInfo r0 = com.qihoo360.replugin.model.PluginInfo.build(r4)     // Catch: java.lang.Throwable -> L405
            if (r0 != 0) goto L3a2
            r3 = r10
        L3a2:
            if (r3 != 0) goto L3b3
            java.io.File r7 = r0.getNativeLibsDir()     // Catch: java.lang.Throwable -> L405
            java.lang.String r8 = r6.getAbsolutePath()     // Catch: java.lang.Throwable -> L405
            boolean r7 = com.qihoo360.loader2.PluginNativeLibsHelper.install(r8, r7)     // Catch: java.lang.Throwable -> L405
            if (r7 != 0) goto L3b3
            goto L3b4
        L3b3:
            r10 = r3
        L3b4:
            if (r10 == 0) goto L3bb
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r6)     // Catch: java.lang.Throwable -> L405
            goto L106
        L3bb:
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r3 == 0) goto L3d5
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r3.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r7 = "update v5 plugin: extract success name="
            r3.append(r7)     // Catch: java.lang.Throwable -> L405
            java.lang.String r7 = r1.mName     // Catch: java.lang.Throwable -> L405
            r3.append(r7)     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r3)     // Catch: java.lang.Throwable -> L405
        L3d5:
            boolean r3 = r4.exists()     // Catch: java.lang.Throwable -> L405
            if (r3 == 0) goto L3de
            com.qihoo360.replugin.utils.FileUtils.forceDelete(r4)     // Catch: java.lang.Throwable -> L405
        L3de:
            com.qihoo360.replugin.utils.FileUtils.moveFile(r6, r4)     // Catch: java.lang.Throwable -> L405
            goto L1c2
        L3e3:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L405
            if (r0 == 0) goto L106
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L405
            r0.<init>()     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = "update v5 plugin: invalid plugin.high="
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            r0.append(r11)     // Catch: java.lang.Throwable -> L405
            java.lang.String r3 = " plugin.low="
            r0.append(r3)     // Catch: java.lang.Throwable -> L405
            r0.append(r10)     // Catch: java.lang.Throwable -> L405
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L405
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)     // Catch: java.lang.Throwable -> L405
            goto L106
        L405:
            r0 = move-exception
            r4 = r19
            goto L414
        L409:
            r0 = move-exception
            r19 = r4
            goto L414
        L40d:
            r0 = move-exception
            r19 = r4
            goto L413
        L411:
            r0 = move-exception
            r4 = 0
        L413:
            r5 = 0
        L414:
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L427
            if (r3 == 0) goto L41f
            java.lang.String r3 = r0.getMessage()     // Catch: java.lang.Throwable -> L427
            com.qihoo360.replugin.helper.LogDebug.d(r2, r3, r0)     // Catch: java.lang.Throwable -> L427
        L41f:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r4)
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r5)
            r2 = 0
            return r2
        L427:
            r0 = move-exception
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r4)
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r5)
            throw r0
    }
}
