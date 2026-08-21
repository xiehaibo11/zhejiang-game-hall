package com.qihoo360.replugin.model;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginInfo implements java.io.Serializable, android.os.Parcelable, java.lang.Cloneable {
    public static final android.os.Parcelable.Creator<com.qihoo360.replugin.model.PluginInfo> CREATOR = null;
    public static final int FRAMEWORK_VERSION_UNKNOWN = 0;
    public static final java.lang.String PI_ALI = "ali";
    public static final java.lang.String PI_COVER = "cover";
    public static final java.lang.String PI_COVERINFO = "coverinfo";
    public static final java.lang.String PI_DELINFO = "delinfo";
    public static final java.lang.String PI_FRM_VER = "frm_ver";
    public static final java.lang.String PI_HIGH = "high";
    public static final java.lang.String PI_LOW = "low";
    public static final java.lang.String PI_NAME = "name";
    public static final java.lang.String PI_PATH = "path";
    public static final java.lang.String PI_PKGNAME = "pkgname";
    public static final java.lang.String PI_TYPE = "type";
    public static final java.lang.String PI_UPINFO = "upinfo";
    public static final java.lang.String PI_USED = "used";
    public static final java.lang.String PI_VER = "ver";
    public static final java.lang.String PI_VERV = "verv";
    public static final java.lang.String[] QUERY_COLUMNS = null;
    private static final java.util.regex.Pattern REGEX = null;
    private static final java.lang.String TAG = "PluginInfo";
    public static final int TYPE_BUILTIN = 2;
    public static final int TYPE_EXTRACTED = 11;
    public static final int TYPE_NOT_INSTALL = 10;
    public static final int TYPE_PN_INSTALLED = 1;
    public static final int TYPE_PN_JAR = 3;
    public static final java.util.Comparator<com.qihoo360.replugin.model.PluginInfo> VERSION_COMPARATOR = null;
    private static final long serialVersionUID = -6531475023210445876L;
    private boolean mIsPendingCover;
    private final transient java.util.Map<java.lang.String, java.lang.Object> mJson;
    private com.qihoo360.replugin.model.PluginInfo mParentInfo;
    private com.qihoo360.replugin.model.PluginInfo mPendingCover;
    private com.qihoo360.replugin.model.PluginInfo mPendingDelete;
    private com.qihoo360.replugin.model.PluginInfo mPendingUpdate;



    static {
            com.qihoo360.replugin.model.PluginInfo$1 r0 = new com.qihoo360.replugin.model.PluginInfo$1
            r0.<init>()
            com.qihoo360.replugin.model.PluginInfo.CREATOR = r0
            java.lang.String r1 = "name"
            java.lang.String r2 = "low"
            java.lang.String r3 = "high"
            java.lang.String r4 = "ver"
            java.lang.String r5 = "type"
            java.lang.String r6 = "v5type"
            java.lang.String r7 = "path"
            java.lang.String r8 = "v5index"
            java.lang.String r9 = "v5offset"
            java.lang.String r10 = "v5length"
            java.lang.String r11 = "v5md5"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11}
            com.qihoo360.replugin.model.PluginInfo.QUERY_COLUMNS = r0
            java.lang.String r0 = "^([^-]+)-([0-9]+)-([0-9]+)-([0-9]+).jar$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.qihoo360.replugin.model.PluginInfo.REGEX = r0
            com.qihoo360.replugin.model.PluginInfo$2 r0 = new com.qihoo360.replugin.model.PluginInfo$2
            r0.<init>()
            com.qihoo360.replugin.model.PluginInfo.VERSION_COMPARATOR = r0
            return
    }

    private PluginInfo(android.os.Parcel r4) {
            r3 = this;
            r3.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 16
            r0.<init>(r1)
            r3.mJson = r0
            java.lang.String r4 = r4.readString()     // Catch: org.json.JSONException -> L18
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L16
            r0.<init>(r4)     // Catch: org.json.JSONException -> L16
            goto L39
        L16:
            r0 = move-exception
            goto L1a
        L18:
            r0 = move-exception
            r4 = 0
        L1a:
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L34
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "PluginInfo: mJson error! s="
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "PluginInfo"
            com.qihoo360.replugin.helper.LogDebug.e(r1, r4, r0)
        L34:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
        L39:
            r3.initPluginInfo(r0)
            return
    }

    PluginInfo(android.os.Parcel r1, com.qihoo360.replugin.model.PluginInfo.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private PluginInfo(java.lang.String r3, int r4, int r5, int r6) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 16
            r0.<init>(r1)
            r2.mJson = r0
            java.lang.String r0 = "name"
            r2.put(r0, r3)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r4)
            java.lang.String r4 = "low"
            r2.put(r4, r3)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r5)
            java.lang.String r4 = "high"
            r2.put(r4, r3)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r6)
            java.lang.String r4 = "ver"
            r2.put(r4, r3)
            return
    }

    private PluginInfo(java.lang.String r10, int r11, int r12, int r13, int r14, int r15, java.lang.String r16, int r17, int r18, int r19, java.lang.String r20) {
            r9 = this;
            r8 = r9
            r0 = r9
            r1 = r10
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r16
            r7 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r15)
            java.lang.String r1 = "v5type"
            r9.put(r1, r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r17)
            java.lang.String r1 = "v5index"
            r9.put(r1, r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r18)
            java.lang.String r1 = "v5offset"
            r9.put(r1, r0)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r19)
            java.lang.String r1 = "v5length"
            r9.put(r1, r0)
            java.lang.String r0 = "v5md5"
            r1 = r20
            r9.put(r0, r1)
            return
    }

    private PluginInfo(java.lang.String r3, java.lang.String r4, int r5, int r6, int r7, java.lang.String r8, int r9) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 16
            r0.<init>(r1)
            r2.mJson = r0
            if (r5 > 0) goto L10
            int r5 = com.qihoo360.loader2.Constant.ADAPTER_COMPATIBLE_VERSION
        L10:
            if (r6 > 0) goto L14
            int r6 = com.qihoo360.loader2.Constant.ADAPTER_COMPATIBLE_VERSION
        L14:
            java.lang.String r0 = "pkgname"
            r2.put(r0, r3)
            java.lang.String r0 = "ali"
            r2.put(r0, r4)
            java.lang.String r3 = r2.makeName(r3, r4)
            java.lang.String r4 = "name"
            r2.put(r4, r3)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r5)
            java.lang.String r4 = "low"
            r2.put(r4, r3)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r6)
            java.lang.String r4 = "high"
            r2.put(r4, r3)
            r2.setVersion(r7)
            r2.setPath(r8)
            r2.setType(r9)
            return
    }

    private PluginInfo(org.json.JSONObject r3) {
            r2 = this;
            r2.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 16
            r0.<init>(r1)
            r2.mJson = r0
            r2.initPluginInfo(r3)
            return
    }

    public static final com.qihoo360.replugin.model.PluginInfo build(android.database.Cursor r13) {
            r0 = 0
            java.lang.String r2 = r13.getString(r0)
            r0 = 1
            int r3 = r13.getInt(r0)
            r0 = 2
            int r4 = r13.getInt(r0)
            r0 = 3
            int r5 = r13.getInt(r0)
            r0 = 4
            int r6 = r13.getInt(r0)
            r0 = 5
            int r7 = r13.getInt(r0)
            r0 = 6
            java.lang.String r8 = r13.getString(r0)
            r0 = 7
            int r9 = r13.getInt(r0)
            r0 = 8
            int r10 = r13.getInt(r0)
            r0 = 9
            int r11 = r13.getInt(r0)
            r0 = 10
            java.lang.String r12 = r13.getString(r0)
            com.qihoo360.replugin.model.PluginInfo r13 = new com.qihoo360.replugin.model.PluginInfo
            r1 = r13
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            return r13
    }

    public static final com.qihoo360.replugin.model.PluginInfo build(java.io.File r17) {
            java.util.regex.Pattern r0 = com.qihoo360.replugin.model.PluginInfo.REGEX
            java.lang.String r1 = r17.getName()
            java.util.regex.Matcher r0 = r0.matcher(r1)
            r1 = 0
            java.lang.String r2 = "ws001"
            if (r0 == 0) goto Lb3
            boolean r3 = r0.matches()
            if (r3 != 0) goto L17
            goto Lb3
        L17:
            java.util.regex.MatchResult r0 = r0.toMatchResult()
            if (r0 == 0) goto L96
            int r3 = r0.groupCount()
            r4 = 4
            if (r3 == r4) goto L25
            goto L96
        L25:
            r1 = 1
            java.lang.String r6 = r0.group(r1)
            r1 = 2
            java.lang.String r1 = r0.group(r1)
            int r7 = java.lang.Integer.parseInt(r1)
            r1 = 3
            java.lang.String r1 = r0.group(r1)
            int r8 = java.lang.Integer.parseInt(r1)
            java.lang.String r0 = r0.group(r4)
            int r9 = java.lang.Integer.parseInt(r0)
            java.lang.String r12 = r17.getPath()
            com.qihoo360.replugin.model.PluginInfo r0 = new com.qihoo360.replugin.model.PluginInfo
            r10 = 1
            r11 = 0
            r13 = -1
            r14 = -1
            r15 = -1
            r16 = 0
            r5 = r0
            r5.<init>(r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16)
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L95
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "PluginInfo.build: found plugin, name="
            r1.append(r3)
            java.lang.String r3 = r0.getName()
            r1.append(r3)
            java.lang.String r3 = " low="
            r1.append(r3)
            int r3 = r0.getLowInterfaceApi()
            r1.append(r3)
            java.lang.String r3 = " high="
            r1.append(r3)
            int r3 = r0.getHighInterfaceApi()
            r1.append(r3)
            java.lang.String r3 = " ver="
            r1.append(r3)
            int r3 = r0.getVersion()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
        L95:
            return r0
        L96:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto Lb2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "PluginInfo.build: skip, no match2, file="
            r0.append(r3)
            java.lang.String r3 = r17.getAbsolutePath()
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)
        Lb2:
            return r1
        Lb3:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto Lcf
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "PluginInfo.build: skip, no match1, file="
            r0.append(r3)
            java.lang.String r3 = r17.getAbsolutePath()
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)
        Lcf:
            return r1
    }

    public static final com.qihoo360.replugin.model.PluginInfo build(java.lang.String r1, int r2, int r3, int r4) {
            com.qihoo360.replugin.model.PluginInfo r0 = new com.qihoo360.replugin.model.PluginInfo
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    private final long buildCompareValue() {
            r6 = this;
            int r0 = r6.getHighInterfaceApi()
            r0 = r0 & 32767(0x7fff, float:4.5916E-41)
            long r0 = (long) r0
            r2 = 48
            long r0 = r0 << r2
            int r2 = r6.getLowInterfaceApi()
            r3 = 65535(0xffff, float:9.1834E-41)
            r2 = r2 & r3
            long r2 = (long) r2
            r4 = 32
            long r2 = r2 << r4
            int r4 = r6.getVersion()
            long r4 = (long) r4
            long r0 = r0 | r2
            long r0 = r0 | r4
            return r0
    }

    public static final com.qihoo360.replugin.model.PluginInfo buildFromBuiltInJson(org.json.JSONObject r9) {
            java.lang.String r0 = "pkg"
            java.lang.String r2 = r9.optString(r0)
            java.lang.String r0 = "name"
            java.lang.String r3 = r9.optString(r0)
            java.lang.String r0 = "path"
            java.lang.String r7 = r9.optString(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L57
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L57
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto L25
            goto L57
        L25:
            int r0 = com.qihoo360.loader2.Constant.ADAPTER_COMPATIBLE_VERSION
            java.lang.String r1 = "low"
            int r4 = r9.optInt(r1, r0)
            int r0 = com.qihoo360.loader2.Constant.ADAPTER_COMPATIBLE_VERSION
            java.lang.String r1 = "high"
            int r5 = r9.optInt(r1, r0)
            java.lang.String r0 = "ver"
            int r6 = r9.optInt(r0)
            com.qihoo360.replugin.model.PluginInfo r0 = new com.qihoo360.replugin.model.PluginInfo
            r8 = 2
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            java.lang.String r1 = "frm"
            int r9 = r9.optInt(r1)
            r1 = 1
            if (r9 >= r1) goto L53
            com.qihoo360.replugin.RePluginConfig r9 = com.qihoo360.replugin.RePlugin.getConfig()
            int r9 = r9.getDefaultFrameworkVersion()
        L53:
            r0.setFrameworkVersion(r9)
            return r0
        L57:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L71
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "buildFromBuiltInJson: Invalid json. j="
            r0.append(r1)
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            java.lang.String r0 = "PluginInfo"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r9)
        L71:
            r9 = 0
            return r9
    }

    public static final com.qihoo360.replugin.model.PluginInfo buildV5(java.lang.String r13, int r14, int r15, int r16, int r17, java.lang.String r18, int r19, int r20, int r21, java.lang.String r22) {
            com.qihoo360.replugin.model.PluginInfo r12 = new com.qihoo360.replugin.model.PluginInfo
            r5 = 3
            r0 = r12
            r1 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r9 = r20
            r10 = r21
            r11 = r22
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            return r12
    }

    static com.qihoo360.replugin.model.PluginInfo createByJO(org.json.JSONObject r2) {
            r0 = 0
            if (r2 == 0) goto L1b
            int r1 = r2.length()
            if (r1 != 0) goto La
            goto L1b
        La:
            com.qihoo360.replugin.model.PluginInfo r1 = new com.qihoo360.replugin.model.PluginInfo
            r1.<init>(r2)
            java.lang.String r2 = r1.getName()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L1a
            return r0
        L1a:
            return r1
        L1b:
            return r0
    }

    public static final java.lang.String format(java.lang.String r1, int r2, int r3, int r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            r0.append(r2)
            r0.append(r1)
            r0.append(r3)
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = r0.toString()
            return r1
    }

    private java.lang.String formatName() {
            r4 = this;
            java.lang.String r0 = r4.getName()
            int r1 = r4.getLowInterfaceApi()
            int r2 = r4.getHighInterfaceApi()
            int r3 = r4.getVersion()
            java.lang.String r0 = format(r0, r1, r2, r3)
            return r0
    }

    private <T> T get(java.lang.String r2, T r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.mJson
            java.lang.Object r2 = r0.get(r2)
            java.lang.Class r0 = r3.getClass()
            boolean r0 = r0.isInstance(r2)
            if (r0 == 0) goto L11
            r3 = r2
        L11:
            return r3
    }

    private java.io.File getDexDir(java.io.File r4, java.lang.String r5) {
            r3 = this;
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.makeInstalledFileName()
            r1.append(r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r4, r5)
            boolean r4 = r0.exists()
            if (r4 != 0) goto L21
            r0.mkdir()
        L21:
            return r0
    }

    private void initPluginInfo(org.json.JSONObject r4) {
            r3 = this;
            java.util.Iterator r0 = r4.keys()
        L4:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L18
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r2 = r4.opt(r1)
            r3.put(r1, r2)
            goto L4
        L18:
            java.lang.String r0 = "upinfo"
            org.json.JSONObject r0 = r4.optJSONObject(r0)
            if (r0 == 0) goto L28
            com.qihoo360.replugin.model.PluginInfo r1 = new com.qihoo360.replugin.model.PluginInfo
            r1.<init>(r0)
            r3.setPendingUpdate(r1)
        L28:
            java.lang.String r0 = "delinfo"
            org.json.JSONObject r0 = r4.optJSONObject(r0)
            if (r0 == 0) goto L38
            com.qihoo360.replugin.model.PluginInfo r1 = new com.qihoo360.replugin.model.PluginInfo
            r1.<init>(r0)
            r3.setPendingDelete(r1)
        L38:
            java.lang.String r0 = "coverinfo"
            org.json.JSONObject r0 = r4.optJSONObject(r0)
            if (r0 == 0) goto L48
            com.qihoo360.replugin.model.PluginInfo r1 = new com.qihoo360.replugin.model.PluginInfo
            r1.<init>(r0)
            r3.setPendingCover(r1)
        L48:
            java.lang.String r0 = "cover"
            boolean r4 = r4.optBoolean(r0)
            r3.setIsPendingCover(r4)
            return
    }

    private java.lang.String makeName(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L7
            return r3
        L7:
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto Le
            return r2
        Le:
            java.lang.String r2 = ""
            return r2
    }

    public static com.qihoo360.replugin.model.PluginInfo parseFromJsonText(java.lang.String r2) {
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L25
            r1.<init>(r2)     // Catch: org.json.JSONException -> L25
            java.lang.String r2 = "pkgname"
            boolean r2 = r1.has(r2)
            if (r2 == 0) goto L24
            java.lang.String r2 = "type"
            boolean r2 = r1.has(r2)
            if (r2 == 0) goto L24
            java.lang.String r2 = "ver"
            boolean r2 = r1.has(r2)
            if (r2 == 0) goto L24
            com.qihoo360.replugin.model.PluginInfo r2 = new com.qihoo360.replugin.model.PluginInfo
            r2.<init>(r1)
            return r2
        L24:
            return r0
        L25:
            r2 = move-exception
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L2d
            r2.printStackTrace()
        L2d:
            return r0
    }

    public static com.qihoo360.replugin.model.PluginInfo parseFromPackageInfo(android.content.pm.PackageInfo r11, java.lang.String r12) {
            android.content.pm.ApplicationInfo r0 = r11.applicationInfo
            java.lang.String r2 = r11.packageName
            android.os.Bundle r0 = r0.metaData
            r1 = 0
            if (r0 == 0) goto L25
            java.lang.String r1 = "com.qihoo360.plugin.name"
            java.lang.String r1 = r0.getString(r1)
            java.lang.String r3 = "com.qihoo360.plugin.version.low"
            int r3 = r0.getInt(r3)
            java.lang.String r4 = "com.qihoo360.plugin.version.high"
            int r4 = r0.getInt(r4)
            java.lang.String r5 = "com.qihoo360.plugin.version.ver"
            int r5 = r0.getInt(r5)
            r10 = r3
            r3 = r1
            r1 = r10
            goto L28
        L25:
            r3 = 0
            r4 = r1
            r5 = r4
        L28:
            if (r1 > 0) goto L2c
            int r1 = com.qihoo360.loader2.Constant.ADAPTER_COMPATIBLE_VERSION
        L2c:
            r6 = r1
            if (r4 > 0) goto L33
            int r1 = com.qihoo360.loader2.Constant.ADAPTER_COMPATIBLE_VERSION
            r7 = r1
            goto L34
        L33:
            r7 = r4
        L34:
            if (r5 > 0) goto L39
            int r11 = r11.versionCode
            goto L3a
        L39:
            r11 = r5
        L3a:
            com.qihoo360.replugin.model.PluginInfo r9 = new com.qihoo360.replugin.model.PluginInfo
            r8 = 10
            r1 = r9
            r4 = r6
            r5 = r7
            r6 = r11
            r7 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            r9.setFrameworkVersionByMeta(r0)
            return r9
    }

    private void setAlias(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.getAlias()
            boolean r0 = android.text.TextUtils.equals(r2, r0)
            if (r0 != 0) goto Lf
            java.lang.String r0 = "ali"
            r1.put(r0, r2)
        Lf:
            return
    }

    private void setPackageName(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.getPackageName()
            boolean r0 = android.text.TextUtils.equals(r2, r0)
            if (r0 != 0) goto Lf
            java.lang.String r0 = "pkgname"
            r1.put(r0, r2)
        Lf:
            return
    }

    private void setVersion(int r3) {
            r2 = this;
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r0 = "ver"
            r2.put(r0, r3)
            long r0 = r2.buildCompareValue()
            java.lang.Long r3 = java.lang.Long.valueOf(r0)
            java.lang.String r0 = "verv"
            r2.put(r0, r3)
            return
    }

    private void toContentString(java.lang.StringBuilder r4) {
            r3 = this;
            r0 = 60
            r4.append(r0)
            java.lang.String r0 = r3.getName()
            r4.append(r0)
            r0 = 58
            r4.append(r0)
            int r0 = r3.getVersion()
            r4.append(r0)
            r0 = 40
            r4.append(r0)
            int r0 = r3.getFrameworkVersion()
            r4.append(r0)
            r0 = 41
            r4.append(r0)
            java.lang.String r0 = "> "
            r4.append(r0)
            com.qihoo360.replugin.model.PluginInfo r0 = r3.mParentInfo
            if (r0 == 0) goto L37
            java.lang.String r0 = "[HAS_PARENT] "
            r4.append(r0)
        L37:
            int r0 = r3.getType()
            r1 = 2
            if (r0 != r1) goto L44
            java.lang.String r0 = "[BUILTIN] "
            r4.append(r0)
            goto L55
        L44:
            boolean r0 = r3.isPnPlugin()
            if (r0 == 0) goto L50
            java.lang.String r0 = "[P-N] "
            r4.append(r0)
            goto L55
        L50:
            java.lang.String r0 = "[APK] "
            r4.append(r0)
        L55:
            boolean r0 = r3.isDexExtracted()
            if (r0 == 0) goto L60
            java.lang.String r0 = "[DEX_EXTRACTED] "
            r4.append(r0)
        L60:
            java.lang.String r0 = r3.getName()
            boolean r0 = com.qihoo360.replugin.RePlugin.isPluginRunning(r0)
            if (r0 == 0) goto L6f
            java.lang.String r0 = "[RUNNING] "
            r4.append(r0)
        L6f:
            java.lang.String r0 = r3.getName()
            java.lang.String[] r0 = com.qihoo360.replugin.RePlugin.getRunningProcessesByPlugin(r0)
            r1 = 32
            if (r0 == 0) goto L8a
            java.lang.String r2 = "processes="
            r4.append(r2)
            java.lang.String r0 = java.util.Arrays.toString(r0)
            r4.append(r0)
            r4.append(r1)
        L8a:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.mJson
            if (r0 == 0) goto L9b
            java.lang.String r0 = "js="
            r4.append(r0)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.mJson
            r4.append(r0)
            r4.append(r1)
        L9b:
            java.lang.String r0 = "dex="
            r4.append(r0)
            java.io.File r0 = r3.getDexFile()
            r4.append(r0)
            r4.append(r1)
            java.lang.String r0 = "nlib="
            r4.append(r0)
            java.io.File r0 = r3.getNativeLibsDir()
            r4.append(r0)
            return
    }

    public final boolean canReplaceForPn(com.qihoo360.replugin.model.PluginInfo r4) {
            r3 = this;
            int r0 = r3.getType()
            r1 = 1
            if (r0 == r1) goto L3a
            int r0 = r4.getType()
            if (r0 != r1) goto L3a
            java.lang.String r0 = r3.getName()
            java.lang.String r2 = r4.getName()
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L3a
            int r0 = r3.getLowInterfaceApi()
            int r2 = r4.getLowInterfaceApi()
            if (r0 != r2) goto L3a
            int r0 = r3.getHighInterfaceApi()
            int r2 = r4.getHighInterfaceApi()
            if (r0 != r2) goto L3a
            int r0 = r3.getVersion()
            int r4 = r4.getVersion()
            if (r0 != r4) goto L3a
            return r1
        L3a:
            r4 = 0
            return r4
    }

    public java.lang.Object clone() {
            r3 = this;
            org.json.JSONObject r0 = r3.getJSON()     // Catch: org.json.JSONException -> L13
            java.lang.String r0 = r0.toString()     // Catch: org.json.JSONException -> L13
            com.qihoo360.replugin.model.PluginInfo r1 = new com.qihoo360.replugin.model.PluginInfo     // Catch: org.json.JSONException -> L13
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L13
            r2.<init>(r0)     // Catch: org.json.JSONException -> L13
            r1.<init>(r2)     // Catch: org.json.JSONException -> L13
            return r1
        L13:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public final boolean deleteObsolote(android.content.Context r2) {
            r1 = this;
            int r2 = r1.getType()
            r0 = 1
            if (r2 == r0) goto L8
            return r0
        L8:
            java.lang.String r2 = r1.getPath()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L13
            return r0
        L13:
            java.io.File r2 = new java.io.File
            java.lang.String r0 = r1.getPath()
            r2.<init>(r0)
            boolean r2 = r2.delete()
            java.io.File r0 = r1.getNativeLibsDir()
            com.qihoo360.loader2.PluginNativeLibsHelper.clear(r0)
            return r2
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            if (r3 != r4) goto L8
            r4 = 1
            return r4
        L8:
            java.lang.Class r1 = r3.getClass()
            java.lang.Class r2 = r4.getClass()
            if (r1 == r2) goto L13
            return r0
        L13:
            com.qihoo360.replugin.model.PluginInfo r4 = (com.qihoo360.replugin.model.PluginInfo) r4
            java.util.Map<java.lang.String, java.lang.Object> r4 = r4.mJson     // Catch: java.lang.Exception -> L26
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L26
            java.util.Map<java.lang.String, java.lang.Object> r1 = r3.mJson     // Catch: java.lang.Exception -> L26
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L26
            boolean r4 = r4.equals(r1)     // Catch: java.lang.Exception -> L26
            return r4
        L26:
            return r0
    }

    public java.lang.String getAlias() {
            r2 = this;
            java.lang.String r0 = "ali"
            java.lang.String r1 = ""
            java.lang.Object r0 = r2.get(r0, r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.lang.String getApkDir() {
            r3 = this;
            android.content.Context r0 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            boolean r1 = r3.isPnPlugin()
            r2 = 0
            if (r1 == 0) goto L12
            java.lang.String r1 = "plugins_v3"
            java.io.File r0 = r0.getDir(r1, r2)
            goto L25
        L12:
            boolean r1 = r3.getIsPendingCover()
            if (r1 == 0) goto L1f
            java.lang.String r1 = "p_c"
            java.io.File r0 = r0.getDir(r1, r2)
            goto L25
        L1f:
            java.lang.String r1 = "p_a"
            java.io.File r0 = r0.getDir(r1, r2)
        L25:
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    public java.io.File getApkFile() {
            r4 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r4.getApkDir()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r4.makeInstalledFileName()
            r2.append(r3)
            java.lang.String r3 = ".jar"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.<init>(r1, r2)
            return r0
    }

    public java.io.File getDexFile() {
            r4 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 25
            if (r0 <= r1) goto L25
            java.io.File r0 = r4.getDexParentDir()
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r4.makeInstalledFileName()
            r2.append(r3)
            java.lang.String r3 = ".odex"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r0, r2)
            return r1
        L25:
            java.io.File r0 = r4.getDexParentDir()
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r4.makeInstalledFileName()
            r2.append(r3)
            java.lang.String r3 = ".dex"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r0, r2)
            return r1
    }

    public java.io.File getDexParentDir() {
            r3 = this;
            android.content.Context r0 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 25
            if (r1 <= r2) goto L36
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.getApkDir()
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            java.lang.String r2 = "oat"
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            java.lang.String r2 = com.qihoo360.loader2.VMRuntimeCompat.getArtOatCpuType()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            return r0
        L36:
            boolean r1 = r3.isPnPlugin()
            r2 = 0
            if (r1 == 0) goto L44
            java.lang.String r1 = "plugins_v3_odex"
            java.io.File r0 = r0.getDir(r1, r2)
            return r0
        L44:
            boolean r1 = r3.getIsPendingCover()
            if (r1 == 0) goto L51
            java.lang.String r1 = "p_c"
            java.io.File r0 = r0.getDir(r1, r2)
            return r0
        L51:
            java.lang.String r1 = "p_od"
            java.io.File r0 = r0.getDir(r1, r2)
            return r0
    }

    public java.io.File getExtraDexDir() {
            r2 = this;
            java.io.File r0 = r2.getDexParentDir()
            java.lang.String r1 = "_ed"
            java.io.File r0 = r2.getDexDir(r0, r1)
            return r0
    }

    public java.io.File getExtraOdexDir() {
            r2 = this;
            java.io.File r0 = r2.getDexParentDir()
            java.lang.String r1 = "_eod"
            java.io.File r0 = r2.getDexDir(r0, r1)
            return r0
    }

    public int getFrameworkVersion() {
            r2 = this;
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "frm_ver"
            java.lang.Object r0 = r2.get(r1, r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    public int getHighInterfaceApi() {
            r2 = this;
            int r0 = com.qihoo360.loader2.Constant.ADAPTER_COMPATIBLE_VERSION
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "high"
            java.lang.Object r0 = r2.get(r1, r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    public boolean getIsPendingCover() {
            r1 = this;
            boolean r0 = r1.mIsPendingCover
            return r0
    }

    public org.json.JSONObject getJSON() {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            java.util.Map<java.lang.String, java.lang.Object> r1 = r2.mJson
            r0.<init>(r1)
            return r0
    }

    public int getLowInterfaceApi() {
            r2 = this;
            int r0 = com.qihoo360.loader2.Constant.ADAPTER_COMPATIBLE_VERSION
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "low"
            java.lang.Object r0 = r2.get(r1, r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    public java.lang.String getName() {
            r2 = this;
            java.lang.String r0 = "name"
            java.lang.String r1 = ""
            java.lang.Object r0 = r2.get(r0, r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public java.io.File getNativeLibsDir() {
            r3 = this;
            android.content.Context r0 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            boolean r1 = r3.isPnPlugin()
            r2 = 0
            if (r1 == 0) goto L12
            java.lang.String r1 = "plugins_v3_libs"
            java.io.File r0 = r0.getDir(r1, r2)
            goto L25
        L12:
            boolean r1 = r3.getIsPendingCover()
            if (r1 == 0) goto L1f
            java.lang.String r1 = "p_c"
            java.io.File r0 = r0.getDir(r1, r2)
            goto L25
        L1f:
            java.lang.String r1 = "p_n"
            java.io.File r0 = r0.getDir(r1, r2)
        L25:
            java.io.File r1 = new java.io.File
            java.lang.String r2 = r3.makeInstalledFileName()
            r1.<init>(r0, r2)
            return r1
    }

    public java.lang.String getPackageName() {
            r2 = this;
            java.lang.String r0 = "pkgname"
            java.lang.String r1 = ""
            java.lang.Object r0 = r2.get(r0, r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public com.qihoo360.replugin.model.PluginInfo getParentInfo() {
            r1 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r1.mParentInfo
            return r0
    }

    public java.lang.String getPath() {
            r2 = this;
            java.lang.String r0 = "path"
            java.lang.String r1 = ""
            java.lang.Object r0 = r2.get(r0, r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public com.qihoo360.replugin.model.PluginInfo getPendingCover() {
            r1 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r1.mPendingCover
            return r0
    }

    public com.qihoo360.replugin.model.PluginInfo getPendingDelete() {
            r1 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r1.mPendingDelete
            return r0
    }

    public com.qihoo360.replugin.model.PluginInfo getPendingUpdate() {
            r1 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r1.mPendingUpdate
            return r0
    }

    public int getType() {
            r2 = this;
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "type"
            java.lang.Object r0 = r2.get(r1, r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    public int getV5Index() {
            r2 = this;
            r0 = -1
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "v5index"
            java.lang.Object r0 = r2.get(r1, r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    public int getV5Length() {
            r2 = this;
            r0 = -1
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "v5length"
            java.lang.Object r0 = r2.get(r1, r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    public java.lang.String getV5MD5() {
            r2 = this;
            java.lang.String r0 = "v5md5"
            java.lang.String r1 = ""
            java.lang.Object r0 = r2.get(r0, r1)
            java.lang.String r0 = (java.lang.String) r0
            return r0
    }

    public int getV5Offset() {
            r2 = this;
            r0 = -1
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "v5offset"
            java.lang.Object r0 = r2.get(r1, r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    public int getV5Type() {
            r2 = this;
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "v5type"
            java.lang.Object r0 = r2.get(r1, r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    public int getVersion() {
            r2 = this;
            r0 = 0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r1 = "ver"
            java.lang.Object r0 = r2.get(r1, r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    public long getVersionValue() {
            r2 = this;
            r0 = 0
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            java.lang.String r1 = "verv"
            java.lang.Object r0 = r2.get(r1, r0)
            java.lang.Long r0 = (java.lang.Long) r0
            long r0 = r0.longValue()
            return r0
    }

    public int hashCode() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.mJson
            int r0 = r0.hashCode()
            return r0
    }

    public boolean isDexExtracted() {
            r4 = this;
            java.io.File r0 = r4.getDexFile()
            boolean r1 = r0.exists()
            if (r1 == 0) goto L16
            long r0 = com.qihoo360.replugin.utils.FileUtils.sizeOf(r0)
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L16
            r0 = 1
            goto L17
        L16:
            r0 = 0
        L17:
            return r0
    }

    public boolean isNeedCover() {
            r1 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r1.mPendingCover
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean isNeedUninstall() {
            r1 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r1.mPendingDelete
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean isNeedUpdate() {
            r1 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r1.mPendingUpdate
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean isPnPlugin() {
            r3 = this;
            int r0 = r3.getType()
            r1 = 1
            if (r0 == r1) goto Lf
            r2 = 3
            if (r0 == r2) goto Lf
            r2 = 2
            if (r0 != r2) goto Le
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    public boolean isUsed() {
            r2 = this;
            boolean r0 = r2.isPnPlugin()
            if (r0 == 0) goto Lb
            boolean r0 = r2.isDexExtracted()
            return r0
        Lb:
            com.qihoo360.replugin.model.PluginInfo r0 = r2.getParentInfo()
            if (r0 == 0) goto L1a
            com.qihoo360.replugin.model.PluginInfo r0 = r2.getParentInfo()
            boolean r0 = r0.isUsed()
            return r0
        L1a:
            r0 = 0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            java.lang.String r1 = "used"
            java.lang.Object r0 = r2.get(r1, r0)
            java.lang.Boolean r0 = (java.lang.Boolean) r0
            boolean r0 = r0.booleanValue()
            return r0
    }

    public java.lang.String makeInstalledFileName() {
            r2 = this;
            boolean r0 = r2.isPnPlugin()
            if (r0 != 0) goto L47
            int r0 = r2.getType()
            r1 = 2
            if (r0 != r1) goto Le
            goto L47
        Le:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getPackageName()
            java.lang.String r1 = r1.toLowerCase()
            r0.append(r1)
            int r1 = r2.getLowInterfaceApi()
            r0.append(r1)
            int r1 = r2.getHighInterfaceApi()
            r0.append(r1)
            int r1 = r2.getVersion()
            r0.append(r1)
            java.lang.String r1 = "ak"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            int r0 = r0.hashCode()
            int r0 = r0 + (-88)
            java.lang.String r0 = java.lang.Integer.toString(r0)
            return r0
        L47:
            java.lang.String r0 = r2.formatName()
            return r0
    }

    public final boolean match() {
            r3 = this;
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            com.qihoo360.replugin.RePluginCallbacks r0 = r0.getCallbacks()
            boolean r0 = r0.isPluginBlocked(r3)
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L19
            if (r0 == 0) goto L19
            java.lang.String r1 = "ws001"
            java.lang.String r2 = "match result: plugin is blocked"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r2)
        L19:
            r0 = r0 ^ 1
            return r0
    }

    public <T> void put(java.lang.String r2, T r3) {
            r1 = this;
            if (r2 == 0) goto La
            if (r3 != 0) goto L5
            goto La
        L5:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.mJson
            r0.put(r2, r3)
        La:
            return
    }

    public void setFrameworkVersion(int r2) {
            r1 = this;
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r0 = "frm_ver"
            r1.put(r0, r2)
            return
    }

    public void setFrameworkVersionByMeta(android.os.Bundle r3) {
            r2 = this;
            com.qihoo360.replugin.RePluginConfig r0 = com.qihoo360.replugin.RePlugin.getConfig()
            int r0 = r0.getDefaultFrameworkVersion()
            if (r3 == 0) goto L11
            java.lang.String r1 = "com.qihoo360.framework.ver"
            int r3 = r3.getInt(r1, r0)
            goto L12
        L11:
            r3 = 0
        L12:
            r1 = 1
            if (r3 >= r1) goto L16
            goto L17
        L16:
            r0 = r3
        L17:
            r2.setFrameworkVersion(r0)
            return
    }

    public void setIsPendingCover(boolean r2) {
            r1 = this;
            r1.mIsPendingCover = r2
            java.lang.String r0 = "cover"
            if (r2 == 0) goto Lf
            r2 = 1
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r1.put(r0, r2)
            goto L14
        Lf:
            java.util.Map<java.lang.String, java.lang.Object> r2 = r1.mJson
            r2.remove(r0)
        L14:
            return
    }

    public void setIsUsed(boolean r2) {
            r1 = this;
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            java.lang.String r0 = "used"
            r1.put(r0, r2)
            return
    }

    public void setParentInfo(com.qihoo360.replugin.model.PluginInfo r1) {
            r0 = this;
            r0.mParentInfo = r1
            return
    }

    public void setPath(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "path"
            r1.put(r0, r2)
            return
    }

    public void setPendingCover(com.qihoo360.replugin.model.PluginInfo r2) {
            r1 = this;
            r1.mPendingCover = r2
            java.lang.String r0 = "coverinfo"
            if (r2 == 0) goto Le
            org.json.JSONObject r2 = r2.getJSON()
            r1.put(r0, r2)
            goto L13
        Le:
            java.util.Map<java.lang.String, java.lang.Object> r2 = r1.mJson
            r2.remove(r0)
        L13:
            return
    }

    public void setPendingDelete(com.qihoo360.replugin.model.PluginInfo r2) {
            r1 = this;
            r1.mPendingDelete = r2
            java.lang.String r0 = "delinfo"
            if (r2 == 0) goto Le
            org.json.JSONObject r2 = r2.getJSON()
            r1.put(r0, r2)
            goto L13
        Le:
            java.util.Map<java.lang.String, java.lang.Object> r2 = r1.mJson
            r2.remove(r0)
        L13:
            return
    }

    public void setPendingUpdate(com.qihoo360.replugin.model.PluginInfo r2) {
            r1 = this;
            r1.mPendingUpdate = r2
            java.lang.String r0 = "upinfo"
            if (r2 == 0) goto Le
            org.json.JSONObject r2 = r2.getJSON()
            r1.put(r0, r2)
            goto L13
        Le:
            java.util.Map<java.lang.String, java.lang.Object> r2 = r1.mJson
            r2.remove(r0)
        L13:
            return
    }

    public void setType(int r2) {
            r1 = this;
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r0 = "type"
            r1.put(r0, r2)
            return
    }

    public final void to(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = r2.getName()
            java.lang.String r1 = "name"
            r3.putExtra(r1, r0)
            int r0 = r2.getLowInterfaceApi()
            java.lang.String r1 = "low"
            r3.putExtra(r1, r0)
            int r0 = r2.getHighInterfaceApi()
            java.lang.String r1 = "high"
            r3.putExtra(r1, r0)
            int r0 = r2.getVersion()
            java.lang.String r1 = "ver"
            r3.putExtra(r1, r0)
            int r0 = r2.getType()
            java.lang.String r1 = "type"
            r3.putExtra(r1, r0)
            int r0 = r2.getV5Type()
            java.lang.String r1 = "v5type"
            r3.putExtra(r1, r0)
            java.lang.String r0 = r2.getPath()
            java.lang.String r1 = "path"
            r3.putExtra(r1, r0)
            int r0 = r2.getV5Index()
            java.lang.String r1 = "v5index"
            r3.putExtra(r1, r0)
            int r0 = r2.getV5Offset()
            java.lang.String r1 = "v5offset"
            r3.putExtra(r1, r0)
            int r0 = r2.getV5Length()
            java.lang.String r1 = "v5length"
            r3.putExtra(r1, r0)
            java.lang.String r0 = r2.getV5MD5()
            java.lang.String r1 = "v5md5"
            r3.putExtra(r1, r0)
            return
    }

    final void to(android.database.MatrixCursor r2) {
            r1 = this;
            android.database.MatrixCursor$RowBuilder r2 = r2.newRow()
            java.lang.String r0 = r1.getName()
            android.database.MatrixCursor$RowBuilder r2 = r2.add(r0)
            int r0 = r1.getLowInterfaceApi()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            android.database.MatrixCursor$RowBuilder r2 = r2.add(r0)
            int r0 = r1.getHighInterfaceApi()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            android.database.MatrixCursor$RowBuilder r2 = r2.add(r0)
            int r0 = r1.getVersion()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            android.database.MatrixCursor$RowBuilder r2 = r2.add(r0)
            int r0 = r1.getType()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            android.database.MatrixCursor$RowBuilder r2 = r2.add(r0)
            int r0 = r1.getV5Type()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            android.database.MatrixCursor$RowBuilder r2 = r2.add(r0)
            java.lang.String r0 = r1.getPath()
            android.database.MatrixCursor$RowBuilder r2 = r2.add(r0)
            int r0 = r1.getV5Index()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            android.database.MatrixCursor$RowBuilder r2 = r2.add(r0)
            int r0 = r1.getV5Offset()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            android.database.MatrixCursor$RowBuilder r2 = r2.add(r0)
            int r0 = r1.getV5Length()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            android.database.MatrixCursor$RowBuilder r2 = r2.add(r0)
            java.lang.String r0 = r1.getV5MD5()
            r2.add(r0)
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PInfo { "
            r0.append(r1)
            r2.toContentString(r0)
            java.lang.String r1 = " }"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void update(com.qihoo360.replugin.model.PluginInfo r2) {
            r1 = this;
            int r0 = r2.getVersion()
            r1.setVersion(r0)
            java.lang.String r0 = r2.getPath()
            r1.setPath(r0)
            int r0 = r2.getType()
            r1.setType(r0)
            java.lang.String r0 = r2.getPackageName()
            r1.setPackageName(r0)
            java.lang.String r2 = r2.getAlias()
            r1.setAlias(r2)
            return
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            org.json.JSONObject r2 = r0.getJSON()
            java.lang.String r2 = r2.toString()
            r1.writeString(r2)
            return
    }
}
