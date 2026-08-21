package com.bianfeng.ymnsdk.utilslib.device;

class UtilsMemoryInfo {
    private int appMem;
    private int appUseMem;
    private long availROMSize;
    private int availableCountsI;
    private android.app.ActivityManager.MemoryInfo memoryInfo;
    private int sizeI;
    private int totalCountsI;
    private long totalROMSize;
    private long unitM;

    public UtilsMemoryInfo(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            r0 = 1048576(0x100000, double:5.180654E-318)
            r4.unitM = r0
            java.lang.String r0 = "activity"
            java.lang.Object r5 = r5.getSystemService(r0)
            android.app.ActivityManager r5 = (android.app.ActivityManager) r5
            android.app.ActivityManager$MemoryInfo r0 = new android.app.ActivityManager$MemoryInfo
            r0.<init>()
            r4.memoryInfo = r0
            android.app.ActivityManager$MemoryInfo r0 = r4.memoryInfo
            r5.getMemoryInfo(r0)
            android.os.StatFs r0 = new android.os.StatFs
            java.io.File r1 = android.os.Environment.getDataDirectory()
            java.lang.String r1 = r1.getPath()
            r0.<init>(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 18
            if (r1 <= r2) goto L3c
            long r1 = r0.getAvailableBytes()
            r4.availROMSize = r1
            long r0 = r0.getTotalBytes()
            r4.totalROMSize = r0
            goto L5e
        L3c:
            int r1 = r0.getAvailableBlocks()
            r4.availableCountsI = r1
            int r1 = r0.getBlockCount()
            r4.totalCountsI = r1
            int r0 = r0.getBlockSize()
            r4.sizeI = r0
            int r0 = r4.availableCountsI
            int r1 = r4.sizeI
            int r0 = r0 * r1
            long r2 = (long) r0
            r4.availROMSize = r2
            int r0 = r4.totalCountsI
            int r0 = r0 * r1
            long r0 = (long) r0
            r4.totalROMSize = r0
        L5e:
            int r5 = r5.getMemoryClass()
            r4.appMem = r5
            java.lang.Runtime r5 = java.lang.Runtime.getRuntime()
            long r0 = r5.freeMemory()
            double r0 = (double) r0
            r2 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r0 = r0 * r2
            long r2 = r4.unitM
            double r2 = (double) r2
            double r0 = r0 / r2
            float r5 = (float) r0
            int r0 = r4.appMem
            float r0 = (float) r0
            float r0 = r0 - r5
            int r5 = (int) r0
            r4.appUseMem = r5
            return
    }

    private int transform(long r3) {
            r2 = this;
            long r0 = r2.unitM
            long r3 = r3 / r0
            int r4 = (int) r3
            return r4
    }

    protected int getAppMem() {
            r1 = this;
            int r0 = r1.appMem
            return r0
    }

    protected int getAppUsedMem() {
            r1 = this;
            int r0 = r1.appUseMem
            return r0
    }

    protected int getRamAvailMem() {
            r2 = this;
            android.app.ActivityManager$MemoryInfo r0 = r2.memoryInfo
            long r0 = r0.availMem
            int r0 = r2.transform(r0)
            return r0
    }

    protected int getRamTotalMem() {
            r2 = this;
            android.app.ActivityManager$MemoryInfo r0 = r2.memoryInfo
            long r0 = r0.totalMem
            int r0 = r2.transform(r0)
            return r0
    }

    protected int getRomAvailMem() {
            r2 = this;
            long r0 = r2.availROMSize
            int r0 = r2.transform(r0)
            return r0
    }

    protected int getRomTotalMem() {
            r2 = this;
            long r0 = r2.totalROMSize
            int r0 = r2.transform(r0)
            return r0
    }
}
