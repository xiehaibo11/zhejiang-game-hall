package com.bianfeng.ymnsdk.entity;

public class UrlConfig {
    private java.lang.String gid;
    private int level;
    private int pid;
    private com.bianfeng.ymnsdk.entity.UrlConfig.ServerList serverList;

    public class Backup {
        private int max_fails;
        private int request_times;
        private java.lang.String server;
        final com.bianfeng.ymnsdk.entity.UrlConfig this$0;

        public Backup(com.bianfeng.ymnsdk.entity.UrlConfig r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        public int getMax_fails() {
                r1 = this;
                int r0 = r1.max_fails
                return r0
        }

        public int getRequest_times() {
                r1 = this;
                int r0 = r1.request_times
                return r0
        }

        public java.lang.String getServer() {
                r1 = this;
                java.lang.String r0 = r1.server
                return r0
        }
    }

    public class Normal {
        private int max_fails;
        private java.lang.String server;
        final com.bianfeng.ymnsdk.entity.UrlConfig this$0;

        public Normal(com.bianfeng.ymnsdk.entity.UrlConfig r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        public int getMax_fails() {
                r1 = this;
                int r0 = r1.max_fails
                return r0
        }

        public java.lang.String getServer() {
                r1 = this;
                java.lang.String r0 = r1.server
                return r0
        }
    }

    public class ServerList {
        private com.bianfeng.ymnsdk.entity.UrlConfig.Backup backup;
        private com.bianfeng.ymnsdk.entity.UrlConfig.Normal normal;
        final com.bianfeng.ymnsdk.entity.UrlConfig this$0;

        public ServerList(com.bianfeng.ymnsdk.entity.UrlConfig r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        public com.bianfeng.ymnsdk.entity.UrlConfig.Backup getBackup() {
                r1 = this;
                com.bianfeng.ymnsdk.entity.UrlConfig$Backup r0 = r1.backup
                return r0
        }

        public com.bianfeng.ymnsdk.entity.UrlConfig.Normal getNormal() {
                r1 = this;
                com.bianfeng.ymnsdk.entity.UrlConfig$Normal r0 = r1.normal
                return r0
        }
    }

    public UrlConfig() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.bianfeng.ymnsdk.entity.UrlConfig.Backup getBackup() {
            r1 = this;
            com.bianfeng.ymnsdk.entity.UrlConfig$ServerList r0 = r1.serverList
            if (r0 == 0) goto L9
            com.bianfeng.ymnsdk.entity.UrlConfig$Backup r0 = r0.getBackup()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public java.lang.String getBackupHost() {
            r1 = this;
            com.bianfeng.ymnsdk.entity.UrlConfig$Backup r0 = r1.getBackup()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.String r0 = r0.getServer()
            return r0
    }

    public java.lang.String getGid() {
            r1 = this;
            java.lang.String r0 = r1.gid
            return r0
    }

    public int getLevel() {
            r1 = this;
            int r0 = r1.level
            return r0
    }

    public int getMaxBackupAvailableCount() {
            r1 = this;
            com.bianfeng.ymnsdk.entity.UrlConfig$Backup r0 = r1.getBackup()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            int r0 = r0.getRequest_times()
            return r0
    }

    public int getMaxBackupFails() {
            r1 = this;
            com.bianfeng.ymnsdk.entity.UrlConfig$Backup r0 = r1.getBackup()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            int r0 = r0.getMax_fails()
            return r0
    }

    public int getMaxNormalFails() {
            r1 = this;
            com.bianfeng.ymnsdk.entity.UrlConfig$Normal r0 = r1.getNormal()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            int r0 = r0.getMax_fails()
            return r0
    }

    public com.bianfeng.ymnsdk.entity.UrlConfig.Normal getNormal() {
            r1 = this;
            com.bianfeng.ymnsdk.entity.UrlConfig$ServerList r0 = r1.serverList
            if (r0 == 0) goto L9
            com.bianfeng.ymnsdk.entity.UrlConfig$Normal r0 = r0.getNormal()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public java.lang.String getNormalHost() {
            r1 = this;
            com.bianfeng.ymnsdk.entity.UrlConfig$Normal r0 = r1.getNormal()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.String r0 = r0.getServer()
            return r0
    }

    public int getPid() {
            r1 = this;
            int r0 = r1.pid
            return r0
    }

    public boolean isEnable() {
            r2 = this;
            java.lang.String r0 = r2.getNormalHost()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 == 0) goto Lc
            return r1
        Lc:
            java.lang.String r0 = r2.getBackupHost()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L17
            return r1
        L17:
            r0 = 1
            return r0
    }
}
