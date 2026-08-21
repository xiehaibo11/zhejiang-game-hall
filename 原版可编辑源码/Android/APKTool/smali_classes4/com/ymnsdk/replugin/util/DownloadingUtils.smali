.class public Lcom/ymnsdk/replugin/util/DownloadingUtils;
.super Ljava/lang/Object;
.source "DownloadingUtils.java"


# static fields
.field public static processArray:[J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/16 v0, 0xa

    new-array v0, v0, [J

    .line 8
    fill-array-data v0, :array_0

    sput-object v0, Lcom/ymnsdk/replugin/util/DownloadingUtils;->processArray:[J

    return-void

    :array_0
    .array-data 8
        0x0
        0x1
        0x2
        0x4
        0x8
        0x10
        0x20
        0x40
        0x63
        0x64
    .end array-data
.end method

.method public constructor <init>()V
    .locals 0

    .line 6
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static inProcessArray(J)Z
    .locals 5

    const/4 v0, 0x0

    move v1, v0

    .line 12
    :goto_0
    sget-object v2, Lcom/ymnsdk/replugin/util/DownloadingUtils;->processArray:[J

    array-length v3, v2

    if-ge v1, v3, :cond_1

    .line 14
    aget-wide v3, v2, v1

    cmp-long v2, p0, v3

    if-nez v2, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return v0
.end method
