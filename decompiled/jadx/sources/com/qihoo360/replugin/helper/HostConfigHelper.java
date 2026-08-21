package com.qihoo360.replugin.helper;

import com.qihoo360.replugin.utils.ReflectUtils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
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
    private static Class<?> HOST_CONFIG_CLASS = null;
    private static final String HOST_CONFIG_FILE_NAME = "RePluginHostConfig";
    private static final String HOST_CONFIG_FILE_PATH = "com.qihoo360.replugin.gen.";
    public static boolean PERSISTENT_ENABLE = true;
    public static String PERSISTENT_NAME = ":GuardService";

    public static void init() {
    }

    static {
        try {
            HOST_CONFIG_CLASS = ReflectUtils.getClass("com.qihoo360.replugin.gen.RePluginHostConfig");
        } catch (ClassNotFoundException unused) {
        }
        try {
            PERSISTENT_ENABLE = ((Boolean) readField("PERSISTENT_ENABLE")).booleanValue();
        } catch (NoSuchFieldException unused2) {
        }
        try {
            PERSISTENT_NAME = (String) readField("PERSISTENT_NAME");
        } catch (NoSuchFieldException unused3) {
        }
        try {
            ACTIVITY_PIT_USE_APPCOMPAT = ((Boolean) readField("ACTIVITY_PIT_USE_APPCOMPAT")).booleanValue();
        } catch (NoSuchFieldException unused4) {
        }
        try {
            ACTIVITY_PIT_COUNT_TS_STANDARD = ((Integer) readField("ACTIVITY_PIT_COUNT_TS_STANDARD")).intValue();
        } catch (NoSuchFieldException unused5) {
        }
        try {
            ACTIVITY_PIT_COUNT_TS_SINGLE_TOP = ((Integer) readField("ACTIVITY_PIT_COUNT_TS_SINGLE_TOP")).intValue();
        } catch (NoSuchFieldException unused6) {
        }
        try {
            ACTIVITY_PIT_COUNT_TS_SINGLE_TASK = ((Integer) readField("ACTIVITY_PIT_COUNT_TS_SINGLE_TASK")).intValue();
        } catch (NoSuchFieldException unused7) {
        }
        try {
            ACTIVITY_PIT_COUNT_TS_SINGLE_INSTANCE = ((Integer) readField("ACTIVITY_PIT_COUNT_TS_SINGLE_INSTANCE")).intValue();
        } catch (NoSuchFieldException unused8) {
        }
        try {
            ACTIVITY_PIT_COUNT_NTS_STANDARD = ((Integer) readField("ACTIVITY_PIT_COUNT_NTS_STANDARD")).intValue();
        } catch (NoSuchFieldException unused9) {
        }
        try {
            ACTIVITY_PIT_COUNT_NTS_SINGLE_TOP = ((Integer) readField("ACTIVITY_PIT_COUNT_NTS_SINGLE_TOP")).intValue();
        } catch (NoSuchFieldException unused10) {
        }
        try {
            ACTIVITY_PIT_COUNT_NTS_SINGLE_TASK = ((Integer) readField("ACTIVITY_PIT_COUNT_NTS_SINGLE_TASK")).intValue();
        } catch (NoSuchFieldException unused11) {
        }
        try {
            ACTIVITY_PIT_COUNT_NTS_SINGLE_INSTANCE = ((Integer) readField("ACTIVITY_PIT_COUNT_NTS_SINGLE_INSTANCE")).intValue();
        } catch (NoSuchFieldException unused12) {
        }
        try {
            ACTIVITY_PIT_COUNT_TASK = ((Integer) readField("ACTIVITY_PIT_COUNT_TASK")).intValue();
        } catch (NoSuchFieldException unused13) {
        }
        try {
            ADAPTER_COMPATIBLE_VERSION = ((Integer) readField("ADAPTER_COMPATIBLE_VERSION")).intValue();
        } catch (NoSuchFieldException unused14) {
        }
        try {
            ADAPTER_CURRENT_VERSION = ((Integer) readField("ADAPTER_CURRENT_VERSION")).intValue();
        } catch (NoSuchFieldException unused15) {
        }
    }

    private static <T> T readField(String str) throws NoSuchFieldException {
        try {
            return (T) ReflectUtils.readStaticField(HOST_CONFIG_CLASS, str);
        } catch (IllegalAccessException e) {
            throw new IllegalStateException(e);
        }
    }
}
