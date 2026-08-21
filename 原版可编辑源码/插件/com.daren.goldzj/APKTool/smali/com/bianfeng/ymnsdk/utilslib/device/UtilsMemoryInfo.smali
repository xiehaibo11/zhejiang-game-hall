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
    .locals 4

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/32 v0, 0x100000

    .line 21
    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->unitM:J

    const-string v0, "activity"

    .line 24
    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/app/ActivityManager;

    .line 25
    new-instance v0, Landroid/app/ActivityManager$MemoryInfo;

    invoke-direct {v0}, Landroid/app/ActivityManager$MemoryInfo;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->memoryInfo:Landroid/app/ActivityManager$MemoryInfo;

    .line 26
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->memoryInfo:Landroid/app/ActivityManager$MemoryInfo;

    invoke-virtual {p1, v0}, Landroid/app/ActivityManager;->getMemoryInfo(Landroid/app/ActivityManager$MemoryInfo;)V

    .line 28
    new-instance v0, Landroid/os/StatFs;

    invoke-static {}, Landroid/os/Environment;->getDataDirectory()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/StatFs;-><init>(Ljava/lang/String;)V

    .line 29
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x12

    if-le v1, v2, :cond_0

    .line 30
    invoke-virtual {v0}, Landroid/os/StatFs;->getAvailableBytes()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->availROMSize:J

    .line 31
    invoke-virtual {v0}, Landroid/os/StatFs;->getTotalBytes()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->totalROMSize:J

    goto :goto_0

    .line 33
    :cond_0
    invoke-virtual {v0}, Landroid/os/StatFs;->getAvailableBlocks()I

    move-result v1

    iput v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->availableCountsI:I

    .line 34
    invoke-virtual {v0}, Landroid/os/StatFs;->getBlockCount()I

    move-result v1

    iput v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->totalCountsI:I

    .line 35
    invoke-virtual {v0}, Landroid/os/StatFs;->getBlockSize()I

    move-result v0

    iput v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->sizeI:I

    .line 36
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->availableCountsI:I

    iget v1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->sizeI:I

    mul-int v0, v0, v1

    int-to-long v2, v0

    iput-wide v2, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->availROMSize:J

    .line 37
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->totalCountsI:I

    mul-int v0, v0, v1

    int-to-long v0, v0

    iput-wide v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->totalROMSize:J

    .line 41
    :goto_0
    invoke-virtual {p1}, Landroid/app/ActivityManager;->getMemoryClass()I

    move-result p1

    iput p1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->appMem:I

    .line 44
    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Runtime;->freeMemory()J

    move-result-wide v0

    long-to-double v0, v0

    const-wide/high16 v2, 0x3ff0000000000000L    # 1.0

    mul-double v0, v0, v2

    iget-wide v2, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->unitM:J

    long-to-double v2, v2

    div-double/2addr v0, v2

    double-to-float p1, v0

    .line 45
    iget v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->appMem:I

    int-to-float v0, v0

    sub-float/2addr v0, p1

    float-to-int p1, v0

    iput p1, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->appUseMem:I

    return-void
.end method

.method private transform(J)I
    .locals 2

    .line 74
    iget-wide v0, p0, Lcom/bianfeng/ymnsdk/utilslib/device/UtilsMemoryInfo;->unitM:J

    div-long/2addr p1, v0

    long-to-int p2, p1

    return p2
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
