.class final Lcom/ymnsdk/replugin/util/DownloadUtils$Factory;
.super Ljava/lang/Object;
.source "DownloadUtils.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ymnsdk/replugin/util/DownloadUtils;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "Factory"
.end annotation


# static fields
.field private static final instance:Lcom/ymnsdk/replugin/util/DownloadUtils;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 45
    new-instance v0, Lcom/ymnsdk/replugin/util/DownloadUtils;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/util/DownloadUtils;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/util/DownloadUtils$Factory;->instance:Lcom/ymnsdk/replugin/util/DownloadUtils;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 44
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Lcom/ymnsdk/replugin/util/DownloadUtils;
    .locals 1

    .line 44
    sget-object v0, Lcom/ymnsdk/replugin/util/DownloadUtils$Factory;->instance:Lcom/ymnsdk/replugin/util/DownloadUtils;

    return-object v0
.end method
