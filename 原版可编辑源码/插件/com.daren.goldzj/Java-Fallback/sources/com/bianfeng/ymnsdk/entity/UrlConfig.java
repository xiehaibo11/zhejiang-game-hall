package com.bianfeng.ymnsdk.entity;

import android.text.TextUtils;

public class UrlConfig {
    private String gid;
    private int level;
    private int pid;
    private ServerList serverList;

    public class Backup {
        private int max_fails;
        private int request_times;
        private String server;
        final UrlConfig this$0;

        public Backup(UrlConfig r1) {
            this.this$0 = r1;
        }

        public int getMax_fails() {
            return this.max_fails;
        }

        public int getRequest_times() {
            return this.request_times;
        }

        public String getServer() {
            return this.server;
        }
    }

    public class Normal {
        private int max_fails;
        private String server;
        final UrlConfig this$0;

        public Normal(UrlConfig r1) {
            this.this$0 = r1;
        }

        public int getMax_fails() {
            return this.max_fails;
        }

        public String getServer() {
            return this.server;
        }
    }

    public class ServerList {
        private Backup backup;
        private Normal normal;
        final UrlConfig this$0;

        public ServerList(UrlConfig r1) {
            this.this$0 = r1;
        }

        public Backup getBackup() {
            return this.backup;
        }

        public Normal getNormal() {
            return this.normal;
        }
    }

    public UrlConfig() {
    }

    public Backup getBackup() {
        ServerList r0 = this.serverList;
        if (r0 != null) goto L5;
        return null;
    L5:
        return r0.getBackup();
    }

    public String getBackupHost() {
        Backup r0 = getBackup();
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getServer();
    }

    public String getGid() {
        return this.gid;
    }

    public int getLevel() {
        return this.level;
    }

    public int getMaxBackupAvailableCount() {
        Backup r0 = getBackup();
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.getRequest_times();
    }

    public int getMaxBackupFails() {
        Backup r0 = getBackup();
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.getMax_fails();
    }

    public int getMaxNormalFails() {
        Normal r0 = getNormal();
        if (r0 != null) goto L7;
        return 0;
    L7:
        return r0.getMax_fails();
    }

    public Normal getNormal() {
        ServerList r0 = this.serverList;
        if (r0 != null) goto L5;
        return null;
    L5:
        return r0.getNormal();
    }

    public String getNormalHost() {
        Normal r0 = getNormal();
        if (r0 != null) goto L7;
        return null;
    L7:
        return r0.getServer();
    }

    public int getPid() {
        return this.pid;
    }

    public boolean isEnable() {
        if (TextUtils.isEmpty(getNormalHost()) == false) goto L6;
        return false;
    L6:
        if (TextUtils.isEmpty(getBackupHost()) == false) goto L8;
        return false;
    L8:
        return true;
    }
}
