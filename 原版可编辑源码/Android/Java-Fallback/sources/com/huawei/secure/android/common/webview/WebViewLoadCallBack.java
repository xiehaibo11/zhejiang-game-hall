package com.huawei.secure.android.common.webview;

public interface WebViewLoadCallBack {

    public enum ErrorCode extends java.lang.Enum<com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode> {
        private static final com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode[] $VALUES = null;
        public static final com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode HTTP_URL = null;
        public static final com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode OTHER = null;
        public static final com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode URL_NOT_IN_WHITE_LIST = null;

        static {
                com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode r0 = new com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode
                r1 = 0
                java.lang.String r2 = "HTTP_URL"
                r0.<init>(r2, r1)
                com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode.HTTP_URL = r0
                com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode r0 = new com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode
                r2 = 1
                java.lang.String r3 = "URL_NOT_IN_WHITE_LIST"
                r0.<init>(r3, r2)
                com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode.URL_NOT_IN_WHITE_LIST = r0
                com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode r0 = new com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode
                r3 = 2
                java.lang.String r4 = "OTHER"
                r0.<init>(r4, r3)
                com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode.OTHER = r0
                r4 = 3
                com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode[] r4 = new com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode[r4]
                com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode r5 = com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode.HTTP_URL
                r4[r1] = r5
                com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode r1 = com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode.URL_NOT_IN_WHITE_LIST
                r4[r2] = r1
                r4[r3] = r0
                com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode.$VALUES = r4
                return
        }

        ErrorCode(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode valueOf(java.lang.String r1) {
                java.lang.Class<com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode> r0 = com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode r1 = (com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode) r1
                return r1
        }

        public static com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode[] values() {
                com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode[] r0 = com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode.$VALUES
                java.lang.Object r0 = r0.clone()
                com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode[] r0 = (com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode[]) r0
                return r0
        }
    }

    void onCheckError(java.lang.String r1, com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode r2);
}
