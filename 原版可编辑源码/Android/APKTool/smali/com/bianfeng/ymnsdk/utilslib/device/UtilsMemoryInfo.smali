.class Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;
.super Ljava/lang/Object;
.source "UtilsMemoryInfo.java"


# instance fields
.field private appMem:I

.field private appUseMem:I

.field private availROMSize:J

.field private availableCountsI:I

.field private memoryInfo:Landroid/app/ActivityManager$MemoryInfo;

.field private sizeI:I

.field private totalCountsI:I

.field private totalROMSize:J

.field private unitM:J


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 6
    .param p1, "context"    # Landroid/content/Context;

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 21
    const-wide/32 v0, 0x100000

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->unitM:J

    .line 24
    const-string v0, "activity"

    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/app/ActivityManager;

    .line 25
    .local v0, "manager":Landroid/app/ActivityManager;
    new-instance v1, Landroid/app/ActivityManager$MemoryInfo;

    invoke-direct {v1}, Landroid/app/ActivityManager$MemoryInfo;-><init>()V

    iput-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->memoryInfo:Landroid/app/ActivityManager$MemoryInfo;

    .line 26
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->memoryInfo:Landroid/app/ActivityManager$MemoryInfo;

    invoke-virtual {v0, v1}, Landroid/app/ActivityManager;->getMemoryInfo(Landroid/app/ActivityManager$MemoryInfo;)V

    .line 28
    new-instance v1, Landroid/os/StatFs;

    invoke-static {}, Landroid/os/Environment;->getDataDirectory()Ljava/io/File;

    move-result-object v2

    invoke-virtual {v2}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Landroid/os/StatFs;-><init>(Ljava/lang/String;)V

    .line 29
    .local v1, "statFs":Landroid/os/StatFs;
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x12

    if-le v2, v3, :cond_0

    .line 30
    invoke-virtual {v1}, Landroid/os/StatFs;->getAvailableBytes()J

    move-result-wide v2

    iput-wide v2, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->availROMSize:J

    .line 31
    invoke-virtual {v1}, Landroid/os/StatFs;->getTotalBytes()J

    move-result-wide v2

    iput-wide v2, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->totalROMSize:J

    goto :goto_0

    .line 33
    :cond_0
    invoke-virtual {v1}, Landroid/os/StatFs;->getAvailableBlocks()I

    move-result v2

    iput v2, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->availableCountsI:I

    .line 34
    invoke-virtual {v1}, Landroid/os/StatFs;->getBlockCount()I

    move-result v2

    iput v2, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->totalCountsI:I

    .line 35
    invoke-virtual {v1}, Landroid/os/StatFs;->getBlockSize()I

    move-result v2

    iput v2, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->sizeI:I

    .line 36
    iget v2, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->availableCountsI:I

    iget v3, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->sizeI:I

    mul-int v2, v2, v3

    int-to-long v4, v2

    iput-wide v4, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->availROMSize:J

    .line 37
    iget v2, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->totalCountsI:I

    mul-int v2, v2, v3

    int-to-long v2, v2

    iput-wide v2, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->totalROMSize:J

    .line 41
    :goto_0
    invoke-virtual {v0}, Landroid/app/ActivityManager;->getMemoryClass()I

    move-result v2

    iput v2, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->appMem:I

    .line 44
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Runtime;->freeMemory()J

    move-result-wide v2

    long-to-double v2, v2

    const-wide/high16 v4, 0x3ff0000000000000L    # 1.0

    mul-double v2, v2, v4

    iget-wide v4, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->unitM:J

    long-to-double v4, v4

    div-double/2addr v2, v4

    double-to-float v2, v2

    .line 45
    .local v2, "freeMemory":F
    iget v3, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->appMem:I

    int-to-float v3, v3

    sub-float/2addr v3, v2

    float-to-int v3, v3

    iput v3, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->appUseMem:I

    .line 47
    return-void
.end method

.method private transform(J)I
    .locals 3
    .param p1, "mem"    # J

    .line 74
    iget-wide v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->unitM:J

    div-long v0, p1, v0

    .line 75
    .local v0, "l":J
    long-to-int v2, v0

    return v2
.end method


# virtual methods
.method protected getAppMem()I
    .locals 1

    .line 66
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->appMem:I

    return v0
.end method

.method protected getAppUsedMem()I
    .locals 1

    .line 69
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->appUseMem:I

    return v0
.end method

.method protected getRamAvailMem()I
    .locals 2

    .line 50
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->memoryInfo:Landroid/app/ActivityManager$MemoryInfo;

    iget-wide v0, v0, Landroid/app/ActivityManager$MemoryInfo;->availMem:J

    invoke-direct {p0, v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->transform(J)I

    move-result v0

    return v0
.end method

.method protected getRamTotalMem()I
    .locals 2

    .line 54
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->memoryInfo:Landroid/app/ActivityManager$MemoryInfo;

    iget-wide v0, v0, Landroid/app/ActivityManager$MemoryInfo;->totalMem:J

    invoke-direct {p0, v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->transform(J)I

    move-result v0

    return v0
.end method

.method protected getRomAvailMem()I
    .locals 2

    .line 58
    iget-wide v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->availROMSize:J

    invoke-direct {p0, v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->transform(J)I

    move-result v0

    return v0
.end method

.method protected getRomTotalMem()I
    .locals 2

    .line 62
    iget-wide v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->totalROMSize:J

    invoke-direct {p0, v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->transform(J)I

    move-result v0

    return v0
.end method
