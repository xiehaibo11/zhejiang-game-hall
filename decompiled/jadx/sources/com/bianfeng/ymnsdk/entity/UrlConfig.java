package com.bianfeng.ymnsdk.entity;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes.dex */
public class UrlConfig {
    private String gid;
    private int level;
    private int pid;
    private ServerList serverList;

    public boolean isEnable() {
        return (TextUtils.isEmpty(getNormalHost()) || TextUtils.isEmpty(getBackupHost())) ? false : true;
    }

    public int getPid() {
        return this.pid;
    }

    public String getGid() {
        return this.gid;
    }

    public int getLevel() {
        return this.level;
    }

    public Normal getNormal() {
        ServerList serverList = this.serverList;
        if (serverList != null) {
            return serverList.getNormal();
        }
        return null;
    }

    public String getNormalHost() {
        Normal normal = getNormal();
        if (normal == null) {
            return null;
        }
        return normal.getServer();
    }

    public int getMaxNormalFails() {
        Normal normal = getNormal();
        if (normal == null) {
            return 0;
        }
        return normal.getMax_fails();
    }

    public Backup getBackup() {
        ServerList serverList = this.serverList;
        if (serverList != null) {
            return serverList.getBackup();
        }
        return null;
    }

    public String getBackupHost() {
        Backup backup = getBackup();
        if (backup == null) {
            return null;
        }
        return backup.getServer();
    }

    public int getMaxBackupFails() {
        Backup backup = getBackup();
        if (backup == null) {
            return 0;
        }
        return backup.getMax_fails();
    }

    public int getMaxBackupAvailableCount() {
        Backup backup = getBackup();
        if (backup == null) {
            return 0;
        }
        return backup.getRequest_times();
    }

    public class ServerList {
        private Backup backup;
        private Normal normal;

        public ServerList() {
        }

        public Normal getNormal() {
            return this.normal;
        }

        public Backup getBackup() {
            return this.backup;
        }
    }

    public class Normal {
        private int max_fails;
        private String server;

        public Normal() {
        }

        public String getServer() {
            return this.server;
        }

        public int getMax_fails() {
            return this.max_fails;
        }
    }

    public class Backup {
        private int max_fails;
        private int request_times;
        private String server;

        public Backup() {
        }

        public String getServer() {
            return this.server;
        }

        public int getMax_fails() {
            return this.max_fails;
        }

        public int getRequest_times() {
            return this.request_times;
        }
    }
}
