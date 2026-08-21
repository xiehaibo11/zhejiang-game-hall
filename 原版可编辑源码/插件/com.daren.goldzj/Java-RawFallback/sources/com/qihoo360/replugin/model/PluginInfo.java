package com.qihoo360.replugin.model;

public class PluginInfo implements android.os.Parcelable, java.io.Serializable, java.lang.Cloneable {
    public static final int ADAPTER_CURRENT_VERSION = 12;
    public static final android.os.Parcelable.Creator<com.qihoo360.replugin.model.PluginInfo> CREATOR = null;
    public static final int FRAMEWORK_VERSION_UNKNOWN = 0;
    public static final java.lang.String LOCAL_PLUGIN_DATA_SUB_DIR = "plugins_v3_data";
    public static final int TYPE_BUILTIN = 2;
    public static final int TYPE_EXTRACTED = 11;
    public static final int TYPE_NOT_INSTALL = 10;
    public static final int TYPE_PN_INSTALLED = 1;
    public static final int TYPE_PN_JAR = 3;
    private transient org.json.JSONObject a;
    private java.lang.String b;
    private com.qihoo360.replugin.model.PluginInfo c;
    private com.qihoo360.replugin.model.PluginInfo d;
    private com.qihoo360.replugin.model.PluginInfo e;
    private boolean f;
    private com.qihoo360.replugin.model.PluginInfo g;


    private static class a {
        private static final byte[] a = null;
        private static volatile java.lang.Boolean b;

        static {
                r0 = 0
                byte[] r0 = new byte[r0]
                com.qihoo360.replugin.model.PluginInfo.a.a = r0
                return
        }

        public static boolean a() {
                java.lang.Boolean r0 = com.qihoo360.replugin.model.PluginInfo.a.b
                if (r0 == 0) goto Lb
                java.lang.Boolean r0 = com.qihoo360.replugin.model.PluginInfo.a.b
                boolean r0 = r0.booleanValue()
                return r0
            Lb:
                byte[] r0 = com.qihoo360.replugin.model.PluginInfo.a.a
                monitor-enter(r0)
                java.lang.Boolean r1 = com.qihoo360.replugin.model.PluginInfo.a.b     // Catch: java.lang.Throwable -> L2c
                if (r1 == 0) goto L1a
                java.lang.Boolean r1 = com.qihoo360.replugin.model.PluginInfo.a.b     // Catch: java.lang.Throwable -> L2c
                boolean r1 = r1.booleanValue()     // Catch: java.lang.Throwable -> L2c
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
                return r1
            L1a:
                boolean r1 = c()     // Catch: java.lang.Throwable -> L2c
                java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Throwable -> L2c
                com.qihoo360.replugin.model.PluginInfo.a.b = r1     // Catch: java.lang.Throwable -> L2c
                java.lang.Boolean r1 = com.qihoo360.replugin.model.PluginInfo.a.b     // Catch: java.lang.Throwable -> L2c
                boolean r1 = r1.booleanValue()     // Catch: java.lang.Throwable -> L2c
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
                return r1
            L2c:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
                throw r1
        }

        public static java.lang.String b() {
                boolean r0 = a()
                if (r0 == 0) goto L9
                java.lang.String r0 = "arm64"
                goto Lb
            L9:
                java.lang.String r0 = "arm"
            Lb:
                return r0
        }

        private static boolean c() {
                r0 = 0
                int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L41
                r2 = 21
                if (r1 >= r2) goto L8
                return r0
            L8:
                java.lang.String r1 = "dalvik.system.VMRuntime"
                java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L41
                if (r1 != 0) goto L11
                return r0
            L11:
                java.lang.String r2 = "getRuntime"
                java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L41
                java.lang.reflect.Method r2 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.Throwable -> L41
                if (r2 != 0) goto L1c
                return r0
            L1c:
                r3 = 0
                java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L41
                java.lang.Object r2 = r2.invoke(r3, r4)     // Catch: java.lang.Throwable -> L41
                if (r2 != 0) goto L26
                return r0
            L26:
                java.lang.String r3 = "is64Bit"
                java.lang.Class[] r4 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L41
                java.lang.reflect.Method r1 = r1.getDeclaredMethod(r3, r4)     // Catch: java.lang.Throwable -> L41
                if (r1 != 0) goto L31
                return r0
            L31:
                java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L41
                java.lang.Object r1 = r1.invoke(r2, r3)     // Catch: java.lang.Throwable -> L41
                boolean r2 = r1 instanceof java.lang.Boolean     // Catch: java.lang.Throwable -> L41
                if (r2 == 0) goto L41
                java.lang.Boolean r1 = (java.lang.Boolean) r1     // Catch: java.lang.Throwable -> L41
                boolean r0 = r1.booleanValue()     // Catch: java.lang.Throwable -> L41
            L41:
                return r0
        }
    }

    static {
            com.qihoo360.replugin.model.PluginInfo$1 r0 = new com.qihoo360.replugin.model.PluginInfo$1
            r0.<init>()
            com.qihoo360.replugin.model.PluginInfo.CREATOR = r0
            return
    }

    private PluginInfo(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r2 = r2.readString()     // Catch: org.json.JSONException -> Ld
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Ld
            r0.<init>(r2)     // Catch: org.json.JSONException -> Ld
            goto L12
        Ld:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
        L12:
            r1.a(r0)
            return
    }

    PluginInfo(android.os.Parcel r1, com.qihoo360.replugin.model.PluginInfo.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private PluginInfo(org.json.JSONObject r1) {
            r0 = this;
            r0.<init>()
            r0.a(r1)
            return
    }

    private java.io.File a(java.io.File r4, java.lang.String r5) {
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

    private java.lang.String a() {
            r4 = this;
            java.lang.String r0 = r4.getName()
            int r1 = r4.getLowInterfaceApi()
            int r2 = r4.getHighInterfaceApi()
            int r3 = r4.getVersion()
            java.lang.String r0 = format(r0, r1, r2, r3)
            return r0
    }

    private void a(java.lang.StringBuilder r4) {
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
            com.qihoo360.replugin.model.PluginInfo r0 = r3.g
            if (r0 == 0) goto L37
            java.lang.String r0 = "[HAS_PARENT] "
            r4.append(r0)
        L37:
            int r0 = r3.getType()
            r1 = 2
            if (r0 != r1) goto L44
            java.lang.String r0 = "[BUILTIN] "
        L40:
            r4.append(r0)
            goto L50
        L44:
            boolean r0 = r3.isPnPlugin()
            if (r0 == 0) goto L4d
            java.lang.String r0 = "[P-N] "
            goto L40
        L4d:
            java.lang.String r0 = "[APK] "
            goto L40
        L50:
            boolean r0 = r3.isDexExtracted()
            if (r0 == 0) goto L5b
            java.lang.String r0 = "[DEX_EXTRACTED] "
            r4.append(r0)
        L5b:
            java.lang.String r0 = r3.getName()
            boolean r0 = com.qihoo360.replugin.RePlugin.isPluginRunning(r0)
            if (r0 == 0) goto L6a
            java.lang.String r0 = "[RUNNING] "
            r4.append(r0)
        L6a:
            java.lang.String r0 = r3.getName()
            java.lang.String[] r0 = com.qihoo360.replugin.RePlugin.getRunningProcessesByPlugin(r0)
            r1 = 32
            if (r0 == 0) goto L85
            java.lang.String r2 = "processes="
            r4.append(r2)
            java.lang.String r0 = java.util.Arrays.toString(r0)
            r4.append(r0)
            r4.append(r1)
        L85:
            org.json.JSONObject r0 = r3.a
            if (r0 == 0) goto L96
            java.lang.String r0 = "js="
            r4.append(r0)
            org.json.JSONObject r0 = r3.a
            r4.append(r0)
            r4.append(r1)
        L96:
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

    private void a(org.json.JSONObject r3) {
            r2 = this;
            r2.a = r3
            java.lang.String r0 = "upinfo"
            org.json.JSONObject r0 = r3.optJSONObject(r0)
            if (r0 == 0) goto L11
            com.qihoo360.replugin.model.PluginInfo r1 = new com.qihoo360.replugin.model.PluginInfo
            r1.<init>(r0)
            r2.c = r1
        L11:
            java.lang.String r0 = "delinfo"
            org.json.JSONObject r0 = r3.optJSONObject(r0)
            if (r0 == 0) goto L20
            com.qihoo360.replugin.model.PluginInfo r1 = new com.qihoo360.replugin.model.PluginInfo
            r1.<init>(r0)
            r2.d = r1
        L20:
            java.lang.String r0 = "coverinfo"
            org.json.JSONObject r0 = r3.optJSONObject(r0)
            if (r0 == 0) goto L2f
            com.qihoo360.replugin.model.PluginInfo r1 = new com.qihoo360.replugin.model.PluginInfo
            r1.<init>(r0)
            r2.e = r1
        L2f:
            java.lang.String r0 = "cover"
            boolean r3 = r3.optBoolean(r0)
            r2.f = r3
            return
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

    public java.lang.Object clone() {
            r4 = this;
            org.json.JSONObject r0 = r4.a
            r1 = 0
            if (r0 == 0) goto La
            java.lang.String r0 = r0.toString()
            goto Lb
        La:
            r0 = r1
        Lb:
            r4.b = r0
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream     // Catch: org.json.JSONException -> L7b java.io.IOException -> L83 java.lang.ClassNotFoundException -> L8b
            r0.<init>()     // Catch: org.json.JSONException -> L7b java.io.IOException -> L83 java.lang.ClassNotFoundException -> L8b
            java.io.ObjectOutputStream r2 = new java.io.ObjectOutputStream     // Catch: org.json.JSONException -> L7b java.io.IOException -> L83 java.lang.ClassNotFoundException -> L8b
            r2.<init>(r0)     // Catch: org.json.JSONException -> L7b java.io.IOException -> L83 java.lang.ClassNotFoundException -> L8b
            r2.writeObject(r4)     // Catch: org.json.JSONException -> L7b java.io.IOException -> L83 java.lang.ClassNotFoundException -> L8b
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream     // Catch: org.json.JSONException -> L7b java.io.IOException -> L83 java.lang.ClassNotFoundException -> L8b
            byte[] r0 = r0.toByteArray()     // Catch: org.json.JSONException -> L7b java.io.IOException -> L83 java.lang.ClassNotFoundException -> L8b
            r2.<init>(r0)     // Catch: org.json.JSONException -> L7b java.io.IOException -> L83 java.lang.ClassNotFoundException -> L8b
            java.io.ObjectInputStream r0 = new java.io.ObjectInputStream     // Catch: org.json.JSONException -> L7b java.io.IOException -> L83 java.lang.ClassNotFoundException -> L8b
            r0.<init>(r2)     // Catch: org.json.JSONException -> L7b java.io.IOException -> L83 java.lang.ClassNotFoundException -> L8b
            java.lang.Object r0 = r0.readObject()     // Catch: org.json.JSONException -> L7b java.io.IOException -> L83 java.lang.ClassNotFoundException -> L8b
            com.qihoo360.replugin.model.PluginInfo r0 = (com.qihoo360.replugin.model.PluginInfo) r0     // Catch: org.json.JSONException -> L7b java.io.IOException -> L83 java.lang.ClassNotFoundException -> L8b
            if (r0 == 0) goto L92
            java.lang.String r1 = r4.b     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            if (r1 != 0) goto L92
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            java.lang.String r2 = r4.b     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            r1.<init>(r2)     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            r0.a = r1     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            org.json.JSONObject r1 = r0.a     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            java.lang.String r2 = "upinfo"
            org.json.JSONObject r1 = r1.optJSONObject(r2)     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            if (r1 == 0) goto L52
            com.qihoo360.replugin.model.PluginInfo r2 = new com.qihoo360.replugin.model.PluginInfo     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            r2.<init>(r1)     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            r0.c = r2     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
        L52:
            org.json.JSONObject r1 = r0.a     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            java.lang.String r2 = "delinfo"
            org.json.JSONObject r1 = r1.optJSONObject(r2)     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            if (r1 == 0) goto L63
            com.qihoo360.replugin.model.PluginInfo r2 = new com.qihoo360.replugin.model.PluginInfo     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            r2.<init>(r1)     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            r0.d = r2     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
        L63:
            org.json.JSONObject r1 = r0.a     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            java.lang.String r2 = "coverinfo"
            org.json.JSONObject r1 = r1.optJSONObject(r2)     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            if (r1 == 0) goto L92
            com.qihoo360.replugin.model.PluginInfo r2 = new com.qihoo360.replugin.model.PluginInfo     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            r2.<init>(r1)     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            r0.e = r2     // Catch: org.json.JSONException -> L75 java.io.IOException -> L77 java.lang.ClassNotFoundException -> L79
            goto L92
        L75:
            r1 = move-exception
            goto L7f
        L77:
            r1 = move-exception
            goto L87
        L79:
            r1 = move-exception
            goto L8f
        L7b:
            r0 = move-exception
            r3 = r1
            r1 = r0
            r0 = r3
        L7f:
            r1.printStackTrace()
            goto L92
        L83:
            r0 = move-exception
            r3 = r1
            r1 = r0
            r0 = r3
        L87:
            r1.printStackTrace()
            goto L92
        L8b:
            r0 = move-exception
            r3 = r1
            r1 = r0
            r0 = r3
        L8f:
            r1.printStackTrace()
        L92:
            return r0
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
            org.json.JSONObject r4 = r4.a     // Catch: java.lang.Exception -> L26
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L26
            org.json.JSONObject r1 = r3.a     // Catch: java.lang.Exception -> L26
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L26
            boolean r4 = r4.equals(r1)     // Catch: java.lang.Exception -> L26
            return r4
        L26:
            return r0
    }

    public java.lang.String getAlias() {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            java.lang.String r1 = "ali"
            java.lang.String r0 = r0.optString(r1)
            return r0
    }

    public java.lang.String getApkDir() {
            r3 = this;
            android.content.Context r0 = com.qihoo360.replugin.d.a()
            boolean r1 = r3.isPnPlugin()
            r2 = 0
            if (r1 == 0) goto L12
            java.lang.String r1 = "plugins_v3"
        Ld:
            java.io.File r0 = r0.getDir(r1, r2)
            goto L1e
        L12:
            boolean r1 = r3.getIsPendingCover()
            if (r1 == 0) goto L1b
            java.lang.String r1 = "p_c"
            goto Ld
        L1b:
            java.lang.String r1 = "p_a"
            goto Ld
        L1e:
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
            android.content.Context r0 = com.qihoo360.replugin.d.a()
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
            java.lang.String r2 = com.qihoo360.replugin.model.PluginInfo.a.b()
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
            java.io.File r0 = r2.a(r0, r1)
            return r0
    }

    public java.io.File getExtraOdexDir() {
            r2 = this;
            java.io.File r0 = r2.getDexParentDir()
            java.lang.String r1 = "_eod"
            java.io.File r0 = r2.a(r0, r1)
            return r0
    }

    public int getFrameworkVersion() {
            r3 = this;
            org.json.JSONObject r0 = r3.a
            java.lang.String r1 = "frm_ver"
            r2 = 0
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public int getHighInterfaceApi() {
            r3 = this;
            org.json.JSONObject r0 = r3.a
            java.lang.String r1 = "high"
            r2 = 10
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public boolean getIsPendingCover() {
            r1 = this;
            boolean r0 = r1.f
            return r0
    }

    public int getLowInterfaceApi() {
            r3 = this;
            org.json.JSONObject r0 = r3.a
            java.lang.String r1 = "low"
            r2 = 10
            int r0 = r0.optInt(r1, r2)
            return r0
    }

    public java.lang.String getName() {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            java.lang.String r1 = "name"
            java.lang.String r0 = r0.optString(r1)
            return r0
    }

    public java.io.File getNativeLibsDir() {
            r3 = this;
            android.content.Context r0 = com.qihoo360.replugin.d.a()
            boolean r1 = r3.isPnPlugin()
            r2 = 0
            if (r1 == 0) goto L12
            java.lang.String r1 = "plugins_v3_libs"
        Ld:
            java.io.File r0 = r0.getDir(r1, r2)
            goto L1e
        L12:
            boolean r1 = r3.getIsPendingCover()
            if (r1 == 0) goto L1b
            java.lang.String r1 = "p_c"
            goto Ld
        L1b:
            java.lang.String r1 = "p_n"
            goto Ld
        L1e:
            java.io.File r1 = new java.io.File
            java.lang.String r2 = r3.makeInstalledFileName()
            r1.<init>(r0, r2)
            return r1
    }

    public java.lang.String getPackageName() {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            java.lang.String r1 = "pkgname"
            java.lang.String r0 = r0.optString(r1)
            return r0
    }

    public com.qihoo360.replugin.model.PluginInfo getParentInfo() {
            r1 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r1.g
            return r0
    }

    public java.lang.String getPath() {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            java.lang.String r1 = "path"
            java.lang.String r0 = r0.optString(r1)
            return r0
    }

    public com.qihoo360.replugin.model.PluginInfo getPendingCover() {
            r1 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r1.e
            return r0
    }

    public com.qihoo360.replugin.model.PluginInfo getPendingDelete() {
            r1 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r1.d
            return r0
    }

    public com.qihoo360.replugin.model.PluginInfo getPendingUpdate() {
            r1 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r1.c
            return r0
    }

    public int getType() {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            java.lang.String r1 = "type"
            int r0 = r0.optInt(r1)
            return r0
    }

    public int getVersion() {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            java.lang.String r1 = "ver"
            int r0 = r0.optInt(r1)
            return r0
    }

    public long getVersionValue() {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            java.lang.String r1 = "verv"
            long r0 = r0.optLong(r1)
            return r0
    }

    public int hashCode() {
            r1 = this;
            org.json.JSONObject r0 = r1.a
            int r0 = r0.hashCode()
            return r0
    }

    public boolean isDexExtracted() {
            r5 = this;
            java.io.File r0 = r5.getDexFile()
            boolean r1 = r0.exists()
            if (r1 == 0) goto L16
            long r0 = r0.length()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L16
            r0 = 1
            goto L17
        L16:
            r0 = 0
        L17:
            return r0
    }

    public boolean isNeedCover() {
            r1 = this;
            com.qihoo360.replugin.model.PluginInfo r0 = r1.e
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
            com.qihoo360.replugin.model.PluginInfo r0 = r1.d
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
            com.qihoo360.replugin.model.PluginInfo r0 = r1.c
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
            org.json.JSONObject r0 = r2.a
            java.lang.String r1 = "used"
            boolean r0 = r0.optBoolean(r1)
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
            java.lang.String r0 = r2.a()
            return r0
    }

    public void setFrameworkVersion(int r3) {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r1 = "frm_ver"
            library.c.a(r0, r1, r3)
            return
    }

    public void setIsUsed(boolean r3) {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            java.lang.String r1 = "used"
            library.c.a(r0, r1, r3)
            return
    }

    public void setPath(java.lang.String r3) {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            java.lang.String r1 = "path"
            library.c.a(r0, r1, r3)
            return
    }

    public void setType(int r3) {
            r2 = this;
            org.json.JSONObject r0 = r2.a
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r1 = "type"
            library.c.a(r0, r1, r3)
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PInfo { "
            r0.append(r1)
            r2.a(r0)
            java.lang.String r1 = " }"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            org.json.JSONObject r2 = r0.a
            java.lang.String r2 = r2.toString()
            r1.writeString(r2)
            return
    }
}
