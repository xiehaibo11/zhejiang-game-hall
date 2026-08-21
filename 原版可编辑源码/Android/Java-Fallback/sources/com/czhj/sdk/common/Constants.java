package com.czhj.sdk.common;

public class Constants {
    public static final java.lang.String ADSCENE = "ad_scene";
    public static final java.lang.String AD_SCENE_DESC = "scene_desc";
    public static final java.lang.String AD_SCENE_ID = "scene_id";
    public static final java.lang.String AESKEY = "sigandroid_mtadb";
    public static final java.lang.String AGE_RESTRICTED_STATUS = "age_restricted_status";
    public static final java.lang.String BROADCAST_IDENTIFIER_KEY = "broadcastIdentifier";
    public static final java.lang.String CLICK_TYPE = "clickType";
    public static final boolean ENCRYPT = false;
    public static final java.lang.String EXT_GDPR_REGION = "gdpr_region";
    public static final java.lang.String FAIL = "0";
    public static final java.lang.String GDPR_CONSENT_STATUS = "consent_status";
    public static final java.lang.String HTTP = "http";
    public static final java.lang.String HTTPS = "https";
    public static final java.lang.String IS_REQUEST_IN_EEA_OR_UNKNOWN = "is_request_in_eea_or_unknown";
    public static final java.lang.String LOAD_ID = "loadId";
    public static final java.lang.String SDK_COMMON_FOLDER = "sigmob";
    public static final int SDK_VERSION = 142;
    public static final java.lang.String SHOW_DOWNLOAD_DIALOG = "showDownloadDialog";
    public static final java.lang.String SUCCESS = "1";
    public static final java.lang.String TEMPLATETYPE = "templateType";
    public static final int TEN_SECONDS_MILLIS = 10000;
    public static final java.lang.String TOKEN = "token";
    public static final java.lang.String USER_AGE = "user_age";
    public static java.text.SimpleDateFormat sdf;

    static {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyy-MM-dd"
            r0.<init>(r1)
            com.czhj.sdk.common.Constants.sdf = r0
            return
    }

    public Constants() {
            r0 = this;
            r0.<init>()
            return
    }
}
