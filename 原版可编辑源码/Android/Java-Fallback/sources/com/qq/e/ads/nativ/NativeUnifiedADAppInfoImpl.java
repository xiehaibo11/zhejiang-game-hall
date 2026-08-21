package com.qq.e.ads.nativ;

public class NativeUnifiedADAppInfoImpl implements com.qq.e.ads.nativ.NativeUnifiedADAppMiitInfo {
    private final java.lang.String a;
    private final java.lang.String b;
    private final long c;
    private final java.lang.String d;
    private final java.lang.String e;
    private final java.lang.String f;

    private interface Keys {
        public static final java.lang.String APP_NAME = "app_name";
        public static final java.lang.String AUTHOR_NAME = "author_name";
        public static final java.lang.String PACKAGE_SIZE = "package_size";
        public static final java.lang.String PERMISSION_URL = "permission_url";
        public static final java.lang.String PRIVACY_AGREEMENT = "privacy_agreement";
        public static final java.lang.String VERSION_NAME = "version_name";
    }

    public NativeUnifiedADAppInfoImpl(org.json.JSONObject r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "app_name"
            java.lang.String r0 = r3.optString(r0)
            r2.a = r0
            java.lang.String r0 = "author_name"
            java.lang.String r0 = r3.optString(r0)
            r2.b = r0
            java.lang.String r0 = "package_size"
            long r0 = r3.optLong(r0)
            r2.c = r0
            java.lang.String r0 = "permission_url"
            java.lang.String r0 = r3.optString(r0)
            r2.d = r0
            java.lang.String r0 = "privacy_agreement"
            java.lang.String r0 = r3.optString(r0)
            r2.e = r0
            java.lang.String r0 = "version_name"
            java.lang.String r3 = r3.optString(r0)
            r2.f = r3
            return
    }

    @Override
    public java.lang.String getAppName() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    @Override
    public java.lang.String getAuthorName() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    @Override
    public long getPackageSizeBytes() {
            r2 = this;
            long r0 = r2.c
            return r0
    }

    @Override
    public java.lang.String getPermissionsUrl() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    @Override
    public java.lang.String getPrivacyAgreement() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    @Override
    public java.lang.String getVersionName() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }
}
