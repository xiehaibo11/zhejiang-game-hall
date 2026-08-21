package com.qihoo360.replugin.helper;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class HostConfigHelper {
    public static int ACTIVITY_PIT_COUNT_NTS_SINGLE_INSTANCE = 2;
    public static int ACTIVITY_PIT_COUNT_NTS_SINGLE_TASK = 3;
    public static int ACTIVITY_PIT_COUNT_NTS_SINGLE_TOP = 2;
    public static int ACTIVITY_PIT_COUNT_NTS_STANDARD = 6;
    public static int ACTIVITY_PIT_COUNT_TASK = 2;
    public static int ACTIVITY_PIT_COUNT_TS_SINGLE_INSTANCE = 3;
    public static int ACTIVITY_PIT_COUNT_TS_SINGLE_TASK = 2;
    public static int ACTIVITY_PIT_COUNT_TS_SINGLE_TOP = 2;
    public static int ACTIVITY_PIT_COUNT_TS_STANDARD = 2;
    public static boolean ACTIVITY_PIT_USE_APPCOMPAT = false;
    public static int ADAPTER_COMPATIBLE_VERSION = 10;
    public static int ADAPTER_CURRENT_VERSION = 12;
    private static java.lang.Class<?> HOST_CONFIG_CLASS = null;
    private static final java.lang.String HOST_CONFIG_FILE_NAME = "RePluginHostConfig";
    private static final java.lang.String HOST_CONFIG_FILE_PATH = "com.qihoo360.replugin.gen.";
    public static boolean PERSISTENT_ENABLE = true;
    public static java.lang.String PERSISTENT_NAME = ":GuardService";

    static {
            java.lang.String r0 = "com.qihoo360.replugin.gen.RePluginHostConfig"
            java.lang.Class r0 = com.qihoo360.replugin.utils.ReflectUtils.getClass(r0)     // Catch: java.lang.ClassNotFoundException -> L8
            com.qihoo360.replugin.helper.HostConfigHelper.HOST_CONFIG_CLASS = r0     // Catch: java.lang.ClassNotFoundException -> L8
        L8:
            java.lang.String r0 = "PERSISTENT_ENABLE"
            java.lang.Object r0 = readField(r0)     // Catch: java.lang.NoSuchFieldException -> L16
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.NoSuchFieldException -> L16
            boolean r0 = r0.booleanValue()     // Catch: java.lang.NoSuchFieldException -> L16
            com.qihoo360.replugin.helper.HostConfigHelper.PERSISTENT_ENABLE = r0     // Catch: java.lang.NoSuchFieldException -> L16
        L16:
            java.lang.String r0 = "PERSISTENT_NAME"
            java.lang.Object r0 = readField(r0)     // Catch: java.lang.NoSuchFieldException -> L20
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.NoSuchFieldException -> L20
            com.qihoo360.replugin.helper.HostConfigHelper.PERSISTENT_NAME = r0     // Catch: java.lang.NoSuchFieldException -> L20
        L20:
            java.lang.String r0 = "ACTIVITY_PIT_USE_APPCOMPAT"
            java.lang.Object r0 = readField(r0)     // Catch: java.lang.NoSuchFieldException -> L2e
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.NoSuchFieldException -> L2e
            boolean r0 = r0.booleanValue()     // Catch: java.lang.NoSuchFieldException -> L2e
            com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_USE_APPCOMPAT = r0     // Catch: java.lang.NoSuchFieldException -> L2e
        L2e:
            java.lang.String r0 = "ACTIVITY_PIT_COUNT_TS_STANDARD"
            java.lang.Object r0 = readField(r0)     // Catch: java.lang.NoSuchFieldException -> L3c
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.NoSuchFieldException -> L3c
            int r0 = r0.intValue()     // Catch: java.lang.NoSuchFieldException -> L3c
            com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_STANDARD = r0     // Catch: java.lang.NoSuchFieldException -> L3c
        L3c:
            java.lang.String r0 = "ACTIVITY_PIT_COUNT_TS_SINGLE_TOP"
            java.lang.Object r0 = readField(r0)     // Catch: java.lang.NoSuchFieldException -> L4a
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.NoSuchFieldException -> L4a
            int r0 = r0.intValue()     // Catch: java.lang.NoSuchFieldException -> L4a
            com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_TOP = r0     // Catch: java.lang.NoSuchFieldException -> L4a
        L4a:
            java.lang.String r0 = "ACTIVITY_PIT_COUNT_TS_SINGLE_TASK"
            java.lang.Object r0 = readField(r0)     // Catch: java.lang.NoSuchFieldException -> L58
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.NoSuchFieldException -> L58
            int r0 = r0.intValue()     // Catch: java.lang.NoSuchFieldException -> L58
            com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_TASK = r0     // Catch: java.lang.NoSuchFieldException -> L58
        L58:
            java.lang.String r0 = "ACTIVITY_PIT_COUNT_TS_SINGLE_INSTANCE"
            java.lang.Object r0 = readField(r0)     // Catch: java.lang.NoSuchFieldException -> L66
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.NoSuchFieldException -> L66
            int r0 = r0.intValue()     // Catch: java.lang.NoSuchFieldException -> L66
            com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_INSTANCE = r0     // Catch: java.lang.NoSuchFieldException -> L66
        L66:
            java.lang.String r0 = "ACTIVITY_PIT_COUNT_NTS_STANDARD"
            java.lang.Object r0 = readField(r0)     // Catch: java.lang.NoSuchFieldException -> L74
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.NoSuchFieldException -> L74
            int r0 = r0.intValue()     // Catch: java.lang.NoSuchFieldException -> L74
            com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_STANDARD = r0     // Catch: java.lang.NoSuchFieldException -> L74
        L74:
            java.lang.String r0 = "ACTIVITY_PIT_COUNT_NTS_SINGLE_TOP"
            java.lang.Object r0 = readField(r0)     // Catch: java.lang.NoSuchFieldException -> L82
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.NoSuchFieldException -> L82
            int r0 = r0.intValue()     // Catch: java.lang.NoSuchFieldException -> L82
            com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_TOP = r0     // Catch: java.lang.NoSuchFieldException -> L82
        L82:
            java.lang.String r0 = "ACTIVITY_PIT_COUNT_NTS_SINGLE_TASK"
            java.lang.Object r0 = readField(r0)     // Catch: java.lang.NoSuchFieldException -> L90
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.NoSuchFieldException -> L90
            int r0 = r0.intValue()     // Catch: java.lang.NoSuchFieldException -> L90
            com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_TASK = r0     // Catch: java.lang.NoSuchFieldException -> L90
        L90:
            java.lang.String r0 = "ACTIVITY_PIT_COUNT_NTS_SINGLE_INSTANCE"
            java.lang.Object r0 = readField(r0)     // Catch: java.lang.NoSuchFieldException -> L9e
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.NoSuchFieldException -> L9e
            int r0 = r0.intValue()     // Catch: java.lang.NoSuchFieldException -> L9e
            com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_INSTANCE = r0     // Catch: java.lang.NoSuchFieldException -> L9e
        L9e:
            java.lang.String r0 = "ACTIVITY_PIT_COUNT_TASK"
            java.lang.Object r0 = readField(r0)     // Catch: java.lang.NoSuchFieldException -> Lac
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.NoSuchFieldException -> Lac
            int r0 = r0.intValue()     // Catch: java.lang.NoSuchFieldException -> Lac
            com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TASK = r0     // Catch: java.lang.NoSuchFieldException -> Lac
        Lac:
            java.lang.String r0 = "ADAPTER_COMPATIBLE_VERSION"
            java.lang.Object r0 = readField(r0)     // Catch: java.lang.NoSuchFieldException -> Lba
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.NoSuchFieldException -> Lba
            int r0 = r0.intValue()     // Catch: java.lang.NoSuchFieldException -> Lba
            com.qihoo360.replugin.helper.HostConfigHelper.ADAPTER_COMPATIBLE_VERSION = r0     // Catch: java.lang.NoSuchFieldException -> Lba
        Lba:
            java.lang.String r0 = "ADAPTER_CURRENT_VERSION"
            java.lang.Object r0 = readField(r0)     // Catch: java.lang.NoSuchFieldException -> Lc8
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.NoSuchFieldException -> Lc8
            int r0 = r0.intValue()     // Catch: java.lang.NoSuchFieldException -> Lc8
            com.qihoo360.replugin.helper.HostConfigHelper.ADAPTER_CURRENT_VERSION = r0     // Catch: java.lang.NoSuchFieldException -> Lc8
        Lc8:
            return
    }

    public HostConfigHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void init() {
            return
    }

    private static <T> T readField(java.lang.String r1) throws java.lang.NoSuchFieldException {
            java.lang.Class<?> r0 = com.qihoo360.replugin.helper.HostConfigHelper.HOST_CONFIG_CLASS     // Catch: java.lang.IllegalAccessException -> L7
            java.lang.Object r1 = com.qihoo360.replugin.utils.ReflectUtils.readStaticField(r0, r1)     // Catch: java.lang.IllegalAccessException -> L7
            return r1
        L7:
            r1 = move-exception
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r0.<init>(r1)
            throw r0
    }
}
