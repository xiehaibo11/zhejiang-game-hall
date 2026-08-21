.class final Lcom/ymnsdk/replugin/patch/download/DownloadFileState$Factory;
.super Ljava/lang/Object;
.source "DownloadFileState.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ymnsdk/replugin/patch/download/DownloadFileState;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "Factory"
.end annotation


# static fields
.field private static final instance:Lcom/ymnsdk/replugin/patch/download/DownloadFileState;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 29
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    invoke-direct {v0}, Lcom/ymnsdk/replugin/patch/download/DownloadFileState;-><init>()V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState$Factory;->instance:Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Lcom/ymnsdk/replugin/patch/download/DownloadFileState;
    .locals 1

    .line 28
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/DownloadFileState$Factory;->instance:Lcom/ymnsdk/replugin/patch/download/DownloadFileState;

    return-object v0
.end method
