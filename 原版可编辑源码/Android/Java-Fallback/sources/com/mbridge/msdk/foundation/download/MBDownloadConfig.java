package com.mbridge.msdk.foundation.download;

public class MBDownloadConfig {
    private android.os.Handler databaseHandler;
    private com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper databaseHelper;
    private long defaultConnectTimeout;
    private long defaultPingInterval;
    private long defaultReadTimeout;
    private long defaultWriteTimeout;
    private com.mbridge.msdk.foundation.download.utils.ILogger logger;
    private int maxRequests;
    private int maxRequestsPerHost;

    static class 1 {
    }

    public static final class Builder {
        private android.os.Handler databaseHandler;
        private com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper databaseHelper;
        private java.lang.String databaseName;
        private int databaseVersion;
        private long defaultConnectTimeout;
        private long defaultPingInterval;
        private long defaultReadTimeout;
        private long defaultWriteTimeout;
        private com.mbridge.msdk.foundation.download.utils.ILogger logger;
        private int maxRequests;
        private int maxRequestsPerHost;
        private java.lang.String tableName;


        public Builder() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        public Builder(com.mbridge.msdk.foundation.download.MBDownloadConfig r3) {
                r2 = this;
                r2.<init>()
                java.lang.String r0 = ""
                r2.databaseName = r0
                java.lang.String r0 = "downloadTable"
                r2.tableName = r0
                r0 = -1
                r2.databaseVersion = r0
                com.mbridge.msdk.foundation.download.MBDownloadConfig$Builder$1 r0 = new com.mbridge.msdk.foundation.download.MBDownloadConfig$Builder$1
                r0.<init>(r2)
                r2.logger = r0
                r0 = 20000(0x4e20, double:9.8813E-320)
                r2.defaultReadTimeout = r0
                r2.defaultWriteTimeout = r0
                r2.defaultConnectTimeout = r0
                r0 = 64
                r2.maxRequests = r0
                r0 = 20
                r2.maxRequestsPerHost = r0
                r0 = 10
                r2.defaultPingInterval = r0
                boolean r0 = com.mbridge.msdk.foundation.download.utils.Objects.isNotNull(r3)
                if (r0 == 0) goto L65
                android.os.Handler r0 = r3.getDatabaseHandler()
                r2.databaseHandler = r0
                com.mbridge.msdk.foundation.download.utils.ILogger r0 = r3.getLogger()
                r2.logger = r0
                long r0 = r3.getDefaultReadTimeout()
                r2.defaultReadTimeout = r0
                long r0 = r3.getDefaultConnectTimeout()
                r2.defaultConnectTimeout = r0
                int r0 = r3.getMaxRequests()
                r2.maxRequests = r0
                long r0 = r3.getDefaultWriteTimeout()
                r2.defaultWriteTimeout = r0
                int r0 = r3.getMaxRequests()
                r2.maxRequests = r0
                int r0 = r3.getMaxRequestsPerHost()
                r2.maxRequestsPerHost = r0
                long r0 = r3.getDefaultPingInterval()
                r2.defaultPingInterval = r0
            L65:
                return
        }

        static com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper access$000(com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder r0) {
                com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper r0 = r0.databaseHelper
                return r0
        }

        static com.mbridge.msdk.foundation.download.utils.ILogger access$100(com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder r0) {
                com.mbridge.msdk.foundation.download.utils.ILogger r0 = r0.logger
                return r0
        }

        static android.os.Handler access$200(com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder r0) {
                android.os.Handler r0 = r0.databaseHandler
                return r0
        }

        static long access$300(com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder r2) {
                long r0 = r2.defaultConnectTimeout
                return r0
        }

        static long access$400(com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder r2) {
                long r0 = r2.defaultReadTimeout
                return r0
        }

        static long access$500(com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder r2) {
                long r0 = r2.defaultWriteTimeout
                return r0
        }

        static int access$600(com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder r0) {
                int r0 = r0.maxRequests
                return r0
        }

        static int access$700(com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder r0) {
                int r0 = r0.maxRequestsPerHost
                return r0
        }

        static long access$800(com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder r2) {
                long r0 = r2.defaultPingInterval
                return r0
        }

        public final com.mbridge.msdk.foundation.download.MBDownloadConfig build() {
                r2 = this;
                com.mbridge.msdk.foundation.download.MBDownloadConfig r0 = new com.mbridge.msdk.foundation.download.MBDownloadConfig
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }

        public final com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder setDatabaseHandler(android.os.Handler r1) {
                r0 = this;
                r0.databaseHandler = r1
                return r0
        }

        public final com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder setDatabaseOpenHelper(com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper r1) {
                r0 = this;
                r0.databaseHelper = r1
                return r0
        }

        public final com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder setDefaultConnectTimeout(long r1) {
                r0 = this;
                r0.defaultConnectTimeout = r1
                return r0
        }

        public final com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder setDefaultPingInterval(long r1) {
                r0 = this;
                r0.defaultPingInterval = r1
                return r0
        }

        public final com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder setDefaultReadTimeout(long r1) {
                r0 = this;
                r0.defaultReadTimeout = r1
                return r0
        }

        public final com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder setDefaultWriteTimeout(long r1) {
                r0 = this;
                r0.defaultWriteTimeout = r1
                return r0
        }

        public final com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder setLogger(com.mbridge.msdk.foundation.download.utils.ILogger r1) {
                r0 = this;
                r0.logger = r1
                return r0
        }

        public final com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder setMaxRequests(int r1) {
                r0 = this;
                r0.maxRequests = r1
                return r0
        }

        public final com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder setMaxRequestsPerHost(int r1) {
                r0 = this;
                r0.maxRequestsPerHost = r1
                return r0
        }
    }

    private MBDownloadConfig(com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder r3) {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper r0 = com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder.access$000(r3)
            r2.databaseHelper = r0
            com.mbridge.msdk.foundation.download.utils.ILogger r0 = com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder.access$100(r3)
            r2.logger = r0
            android.os.Handler r0 = com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder.access$200(r3)
            r2.databaseHandler = r0
            long r0 = com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder.access$300(r3)
            r2.defaultConnectTimeout = r0
            long r0 = com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder.access$400(r3)
            r2.defaultReadTimeout = r0
            long r0 = com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder.access$500(r3)
            r2.defaultWriteTimeout = r0
            int r0 = com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder.access$600(r3)
            r2.maxRequests = r0
            int r0 = com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder.access$700(r3)
            r2.maxRequestsPerHost = r0
            long r0 = com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder.access$800(r3)
            r2.defaultPingInterval = r0
            return
    }

    MBDownloadConfig(com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder r1, com.mbridge.msdk.foundation.download.MBDownloadConfig.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder newBuilder() {
            com.mbridge.msdk.foundation.download.MBDownloadConfig$Builder r0 = new com.mbridge.msdk.foundation.download.MBDownloadConfig$Builder
            r1 = 0
            r0.<init>(r1)
            return r0
    }

    public static com.mbridge.msdk.foundation.download.MBDownloadConfig.Builder newBuilder(com.mbridge.msdk.foundation.download.MBDownloadConfig r1) {
            com.mbridge.msdk.foundation.download.MBDownloadConfig$Builder r0 = new com.mbridge.msdk.foundation.download.MBDownloadConfig$Builder
            r0.<init>(r1)
            return r0
    }

    public android.os.Handler getDatabaseHandler() {
            r1 = this;
            android.os.Handler r0 = r1.databaseHandler
            return r0
    }

    public com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper getDatabaseHelper() {
            r1 = this;
            com.mbridge.msdk.foundation.download.database.IDatabaseOpenHelper r0 = r1.databaseHelper
            return r0
    }

    public long getDefaultConnectTimeout() {
            r2 = this;
            long r0 = r2.defaultConnectTimeout
            return r0
    }

    public long getDefaultPingInterval() {
            r2 = this;
            long r0 = r2.defaultPingInterval
            return r0
    }

    public long getDefaultReadTimeout() {
            r2 = this;
            long r0 = r2.defaultReadTimeout
            return r0
    }

    public long getDefaultWriteTimeout() {
            r2 = this;
            long r0 = r2.defaultWriteTimeout
            return r0
    }

    public com.mbridge.msdk.foundation.download.utils.ILogger getLogger() {
            r1 = this;
            com.mbridge.msdk.foundation.download.utils.ILogger r0 = r1.logger
            return r0
    }

    public int getMaxRequests() {
            r1 = this;
            int r0 = r1.maxRequests
            return r0
    }

    public int getMaxRequestsPerHost() {
            r1 = this;
            int r0 = r1.maxRequestsPerHost
            return r0
    }
}
