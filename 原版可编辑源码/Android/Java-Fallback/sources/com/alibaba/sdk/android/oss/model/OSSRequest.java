package com.alibaba.sdk.android.oss.model;

public class OSSRequest {
    private java.lang.Enum CRC64;
    private boolean isAuthorizationRequired;

    public enum CRC64Config extends java.lang.Enum<com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config> {
        private static final com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config[] $VALUES = null;
        public static final com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config NO = null;
        public static final com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config NULL = null;
        public static final com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config YES = null;

        static {
                com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r0 = new com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config
                r1 = 0
                java.lang.String r2 = "NULL"
                r0.<init>(r2, r1)
                com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.NULL = r0
                com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r0 = new com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config
                r2 = 1
                java.lang.String r3 = "YES"
                r0.<init>(r3, r2)
                com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.YES = r0
                com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r0 = new com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config
                r3 = 2
                java.lang.String r4 = "NO"
                r0.<init>(r4, r3)
                com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.NO = r0
                r4 = 3
                com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config[] r4 = new com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config[r4]
                com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r5 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.NULL
                r4[r1] = r5
                com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r1 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.YES
                r4[r2] = r1
                r4[r3] = r0
                com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.$VALUES = r4
                return
        }

        CRC64Config(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config valueOf(java.lang.String r1) {
                java.lang.Class<com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config> r0 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r1 = (com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config) r1
                return r1
        }

        public static com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config[] values() {
                com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config[] r0 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.$VALUES
                java.lang.Object r0 = r0.clone()
                com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config[] r0 = (com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config[]) r0
                return r0
        }
    }

    public OSSRequest() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.isAuthorizationRequired = r0
            com.alibaba.sdk.android.oss.model.OSSRequest$CRC64Config r0 = com.alibaba.sdk.android.oss.model.OSSRequest.CRC64Config.NULL
            r1.CRC64 = r0
            return
    }

    public java.lang.Enum getCRC64() {
            r1 = this;
            java.lang.Enum r0 = r1.CRC64
            return r0
    }

    public boolean isAuthorizationRequired() {
            r1 = this;
            boolean r0 = r1.isAuthorizationRequired
            return r0
    }

    public void setCRC64(java.lang.Enum r1) {
            r0 = this;
            r0.CRC64 = r1
            return
    }

    public void setIsAuthorizationRequired(boolean r1) {
            r0 = this;
            r0.isAuthorizationRequired = r1
            return
    }
}
