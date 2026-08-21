package com.qihoo360.loader2;

import com.qihoo360.replugin.helper.HostConfigHelper;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class Constant {
    public static final int ADAPTER_COMPATIBLE_VERSION = HostConfigHelper.ADAPTER_COMPATIBLE_VERSION;
    public static final int ADAPTER_CURRENT_VERSION = HostConfigHelper.ADAPTER_CURRENT_VERSION;
    public static final boolean ENABLE_PLUGIN_ACTIVITY_AND_BINDER_RUN_IN_MAIN_UI_PROCESS = true;
    public static final String LOAD_PLUGIN_LOCK = "plugin_v3_%s.lock";
    public static final String LOCAL_PLUGIN_APK_COVER_DIR = "p_c";
    public static final String LOCAL_PLUGIN_APK_LIB_DIR = "p_n";
    public static final String LOCAL_PLUGIN_APK_ODEX_SUB_DIR = "p_od";
    public static final String LOCAL_PLUGIN_APK_SUB_DIR = "p_a";
    public static final String LOCAL_PLUGIN_DATA_LIB_DIR = "plugins_v3_libs";
    public static final String LOCAL_PLUGIN_DATA_SUB_DIR = "plugins_v3_data";
    public static final String LOCAL_PLUGIN_FILE_PATTERN = "^([^-]+)-([0-9]+)-([0-9]+)-([0-9]+).jar$";
    public static final String LOCAL_PLUGIN_INDEPENDENT_EXTRA_DEX_SUB_DIR = "_ed";
    public static final String LOCAL_PLUGIN_INDEPENDENT_EXTRA_ODEX_SUB_DIR = "_eod";
    public static final String LOCAL_PLUGIN_ODEX_SUB_DIR = "plugins_v3_odex";
    public static final String LOCAL_PLUGIN_SUB_DIR = "plugins_v3";
    public static final boolean LOG_V5_FILE_SEARCH = false;
    public static final String PLUGIN_NAME_UI = "ui";
    public static final boolean SIMPLE_QUIT_CONTROLLER = false;
    public static final int STUB_PROCESS_COUNT = 2;
    public static final String STUB_PROCESS_SUFFIX_PATTERN = "^(.*):loader([0-1])$";
}
