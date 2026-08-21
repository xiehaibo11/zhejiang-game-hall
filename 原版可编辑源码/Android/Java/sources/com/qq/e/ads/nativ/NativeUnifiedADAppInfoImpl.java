package com.qq.e.ads.nativ;

import org.json.JSONObject;

public class NativeUnifiedADAppInfoImpl implements NativeUnifiedADAppMiitInfo {
    private final String a;
    private final String b;
    private final long c;
    private final String d;
    private final String e;
    private final String f;

    private interface Keys {
        public static final String APP_NAME = "app_name";
        public static final String AUTHOR_NAME = "author_name";
        public static final String PACKAGE_SIZE = "package_size";
        public static final String PERMISSION_URL = "permission_url";
        public static final String PRIVACY_AGREEMENT = "privacy_agreement";
        public static final String VERSION_NAME = "version_name";
    }

    public NativeUnifiedADAppInfoImpl(JSONObject jSONObject) {
        this.a = jSONObject.optString("app_name");
        this.b = jSONObject.optString(Keys.AUTHOR_NAME);
        this.c = jSONObject.optLong("package_size");
        this.d = jSONObject.optString(Keys.PERMISSION_URL);
        this.e = jSONObject.optString(Keys.PRIVACY_AGREEMENT);
        this.f = jSONObject.optString(Keys.VERSION_NAME);
    }

    @Override
    public String getAppName() {
        return this.a;
    }

    @Override
    public String getAuthorName() {
        return this.b;
    }

    @Override
    public long getPackageSizeBytes() {
        return this.c;
    }

    @Override
    public String getPermissionsUrl() {
        return this.d;
    }

    @Override
    public String getPrivacyAgreement() {
        return this.e;
    }

    @Override
    public String getVersionName() {
        return this.f;
    }
}
