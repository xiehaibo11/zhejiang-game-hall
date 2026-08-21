package com.bianfeng.pluginlibrary;

public final class BuildConfig {
    public static final String BUILD_TYPE = "debug";
    public static final boolean DEBUG = false;
    public static final String LIBRARY_PACKAGE_NAME = "com.bianfeng.pluginlibrary";

    public BuildConfig() {
    }

    static {
        DEBUG = Boolean.parseBoolean("true");
    }
}
