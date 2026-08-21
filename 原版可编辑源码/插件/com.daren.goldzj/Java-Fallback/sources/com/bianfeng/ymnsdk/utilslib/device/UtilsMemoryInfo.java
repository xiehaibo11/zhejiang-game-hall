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
    private long unitM;

    public UtilsMemoryInfo(Context r5) {
        this.unitM = 1048576;
        ActivityManager r52 = (ActivityManager) r5.getSystemService("activity");
        this.memoryInfo = new ActivityManager.MemoryInfo();
        r52.getMemoryInfo(this.memoryInfo);
        StatFs r0 = new StatFs(Environment.getDataDirectory().getPath());
        if (Build.VERSION.SDK_INT <= 18) goto L5;
        this.availROMSize = r0.getAvailableBytes();
        this.totalROMSize = r0.getTotalBytes();
    L6:
        this.appMem = r52.getMemoryClass();
        this.appUseMem = (int) (this.appMem - ((float) ((Runtime.getRuntime().freeMemory() * 1.0d) / this.unitM)));
        return;
    L5:
        this.availableCountsI = r0.getAvailableBlocks();
        this.totalCountsI = r0.getBlockCount();
        this.sizeI = r0.getBlockSize();
        int r02 = this.availableCountsI;
        int r1 = this.sizeI;
        this.availROMSize = r02 * r1;
        this.totalROMSize = this.totalCountsI * r1;
        goto L6
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

    private int transform(long r3) {
        return (int) (r3 / this.unitM);
    }
}
