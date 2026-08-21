package com.qihoo360.replugin.utils;

import com.qihoo360.replugin.utils.basic.RepluginLogData;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class RepluginLogUtils {
    private RepluginLogData logData = null;
    private String mWriteablePath;

    public static RepluginLogUtils getInstance() {
        return Factory.instance;
    }

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private static final class Factory {
        private static final RepluginLogUtils instance = new RepluginLogUtils();

        private Factory() {
        }
    }

    public void setWriteablePath(String str) {
        try {
            File file = new File(str);
            if (!file.exists()) {
                file.mkdirs();
            }
            this.mWriteablePath = file.getCanonicalPath();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    public String getWriteablePath() {
        return this.mWriteablePath;
    }

    public String getConfigPath() {
        return this.mWriteablePath + File.separator + "plugin_log.cfg";
    }

    public synchronized void syncFromFile() {
        String configPath = getConfigPath();
        if (new File(configPath).exists()) {
            try {
                ObjectInputStream objectInputStream = new ObjectInputStream(new BufferedInputStream(new FileInputStream(configPath)));
                try {
                    this.logData = (RepluginLogData) objectInputStream.readObject();
                    objectInputStream.close();
                } finally {
                }
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    public synchronized void syncToFile() {
        try {
            ObjectOutputStream objectOutputStream = new ObjectOutputStream(new BufferedOutputStream(new FileOutputStream(getConfigPath(), false)));
            try {
                objectOutputStream.writeObject(this.logData);
                objectOutputStream.close();
            } finally {
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public void addLog(String str) {
        if (RepluginSharedPreferencesUtils.getInstance().getPluginLog().equals("true")) {
            syncFromFile();
            if (this.logData == null) {
                this.logData = new RepluginLogData();
            }
            RepluginLogData repluginLogData = this.logData;
            repluginLogData.setSize(repluginLogData.getSize() + 1);
            ArrayList<String> logList = this.logData.getLogList();
            if (logList == null) {
                logList = new ArrayList<>();
            }
            logList.add(str);
            this.logData.setLogList(logList);
            syncToFile();
        }
    }

    public void clearLog() {
        syncFromFile();
        if (this.logData == null) {
            this.logData = new RepluginLogData();
        }
        this.logData.setSize(0);
        if (this.logData.getLogList() == null) {
            this.logData.setLogList(new ArrayList<>());
        }
        this.logData.getLogList().clear();
        syncToFile();
    }

    public RepluginLogData readLog() {
        syncFromFile();
        if (this.logData == null) {
            this.logData = new RepluginLogData();
        }
        return this.logData;
    }
}
