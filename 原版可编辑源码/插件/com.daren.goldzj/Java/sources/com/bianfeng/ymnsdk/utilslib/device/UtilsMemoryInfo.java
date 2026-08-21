package com.bianfeng.ymnsdk.utilslib.device;

import android.app.ActivityManager;
import android.content.Context;
import android.os.Build;
import android.os.Environment;
import android.os.StatFs;

class UtilsMemoryInfo {
    private int appMem;
    private int appUseMem;
    private long availROMSize;
    private int availableCountsI;
    private ActivityManager.MemoryInfo memoryInfo;
    private int sizeI;
    private int totalCountsI;
    private long totalROMSize;
    private long unitM = 1048576;

    public UtilsMemoryInfo(Context context) {
        ActivityManager activityManager = (ActivityManager) context.getSystemService("activity");
        this.memoryInfo = new ActivityManager.MemoryInfo();
        activityManager.getMemoryInfo(this.memoryInfo);
        StatFs statFs = new StatFs(Environment.getDataDirectory().getPath());
        if (Build.VERSION.SDK_INT > 18) {
            this.availROMSize = statFs.getAvailableBytes();
            this.totalROMSize = statFs.getTotalBytes();
        } else {
            this.availableCountsI = statFs.getAvailableBlocks();
            this.totalCountsI = statFs.getBlockCount();
            this.sizeI = statFs.getBlockSize();
            int i = this.availableCountsI;
            int i2 = this.sizeI;
            this.availROMSize = i * i2;
            this.totalROMSize = this.totalCountsI * i2;
        }
        this.appMem = activityManager.getMemoryClass();
        this.appUseMem = (int) (this.appMem - ((float) ((Runtime.getRuntime().freeMemory() * 1.0d) / this.unitM)));
    }

    protected int getRamAvailMem() {
        return transform(this.memoryInfo.availMem);
    }

    protected int getRamTotalMem() {
        return transform(this.memoryInfo.totalMem);
    }

    protected int getRomAvailMem() {
        return transform(this.availROMSize);
    }

    protected int getRomTotalMem() {
        return transform(this.totalROMSize);
    }

    protected int getAppMem() {
        return this.appMem;
    }

    protected int getAppUsedMem() {
        return this.appUseMem;
    }

    private int transform(long j) {
        return (int) (j / this.unitM);
    }
}
