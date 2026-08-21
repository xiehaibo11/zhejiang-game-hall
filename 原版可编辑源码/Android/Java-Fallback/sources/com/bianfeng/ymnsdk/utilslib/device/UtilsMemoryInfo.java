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

    public UtilsMemoryInfo(android.content.Context r7) {
            r6 = this;
            r6.<init>()
            r0 = 1048576(0x100000, double:5.180654E-318)
            r6.unitM = r0
            java.lang.String r0 = "activity"
            java.lang.Object r0 = r7.getSystemService(r0)
            android.app.ActivityManager r0 = (android.app.ActivityManager) r0
            android.app.ActivityManager$MemoryInfo r1 = new android.app.ActivityManager$MemoryInfo
            r1.<init>()
            r6.memoryInfo = r1
            android.app.ActivityManager$MemoryInfo r1 = r6.memoryInfo
            r0.getMemoryInfo(r1)
            android.os.StatFs r1 = new android.os.StatFs
            java.io.File r2 = android.os.Environment.getDataDirectory()
            java.lang.String r2 = r2.getPath()
            r1.<init>(r2)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 18
            if (r2 <= r3) goto L3c
            long r2 = r1.getAvailableBytes()
            r6.availROMSize = r2
            long r2 = r1.getTotalBytes()
            r6.totalROMSize = r2
            goto L5e
        L3c:
            int r2 = r1.getAvailableBlocks()
            r6.availableCountsI = r2
            int r2 = r1.getBlockCount()
            r6.totalCountsI = r2
            int r2 = r1.getBlockSize()
            r6.sizeI = r2
            int r2 = r6.availableCountsI
            int r3 = r6.sizeI
            int r2 = r2 * r3
            long r4 = (long) r2
            r6.availROMSize = r4
            int r2 = r6.totalCountsI
            int r2 = r2 * r3
            long r2 = (long) r2
            r6.totalROMSize = r2
        L5e:
            int r2 = r0.getMemoryClass()
            r6.appMem = r2
            java.lang.Runtime r2 = java.lang.Runtime.getRuntime()
            long r2 = r2.freeMemory()
            double r2 = (double) r2
            r4 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r2 = r2 * r4
            long r4 = r6.unitM
            double r4 = (double) r4
            double r2 = r2 / r4
            float r2 = (float) r2
            int r3 = r6.appMem
            float r3 = (float) r3
            float r3 = r3 - r2
            int r3 = (int) r3
            r6.appUseMem = r3
            return
    }

    private int transform(long r4) {
            r3 = this;
            long r0 = r3.unitM
            long r0 = r4 / r0
            int r2 = (int) r0
            return r2
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
