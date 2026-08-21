package com.ss.android.downloadlib.addownload.model;

public class OpenAppResult {
    private int df;
    private java.lang.String q;
    private int rg;

    public @interface Message {
        public static final int DEFAULT_MARKET_UNINSTALLED = 15;
        public static final int LAUNCH_INTENT_NOT_EXIST = 22;
        public static final int MARKET_UNINSTALLED = 13;
        public static final int OPEN_URL_INVALID = 24;
        public static final int OPEN_URL_NOT_EXIST = 21;
        public static final int PACKAGE_NAME_EMPTY = 11;
        public static final int START_ACTIVITY_EXCEPTION = 23;
        public static final int START_EXCEPTION = 14;
        public static final int TEST_FAILED = 25;
        public static final int URI_ERROR = 12;
    }

    public @interface Source {
        public static final java.lang.String AM_HW = "am_hw";
        public static final java.lang.String AM_KLLK1 = "am_kllk1";
        public static final java.lang.String AM_KLLK2 = "am_kllk2";
        public static final java.lang.String AM_M1 = "am_m1";
        public static final java.lang.String AM_M2 = "am_m2";
        public static final java.lang.String AM_V1 = "am_v1";
    }

    public @interface Type {
        public static final int FAILED_BY_PACKAGE = 4;
        public static final int FAILED_BY_URL = 2;
        public static final int FAILED_MARKET = 6;
        public static final int IGNORE_MARKET = 7;
        public static final int NONE = 0;
        public static final int SUCCESS_BY_PACKAGE = 3;
        public static final int SUCCESS_BY_URL = 1;
        public static final int SUCCESS_MARKET = 5;
    }

    public OpenAppResult(int r3) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public OpenAppResult(int r2, int r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public OpenAppResult(int r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.rg = r1
            r0.df = r2
            r0.q = r3
            return
    }

    public OpenAppResult(int r2, java.lang.String r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r3)
            return
    }

    public java.lang.String df() {
            r1 = this;
            java.lang.String r0 = r1.q
            return r0
    }

    public int getType() {
            r1 = this;
            int r0 = r1.rg
            return r0
    }

    public int rg() {
            r1 = this;
            int r0 = r1.df
            return r0
    }
}
