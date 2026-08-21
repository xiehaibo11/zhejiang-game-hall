.class final Lcom/ymnsdk/replugin/patch/download/FileDownloader$Factory;
.super Ljava/lang/Object;
.source "FileDownloader.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ymnsdk/replugin/patch/download/FileDownloader;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "Factory"
.end annotation


# static fields
.field private static final instance:Lcom/ymnsdk/replugin/patch/download/FileDownloader;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 32
    new-instance v0, Lcom/ymnsdk/replugin/patch/download/FileDownloader;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/patch/download/FileDownloader;-><init>(Lcom/ymnsdk/replugin/patch/download/FileDownloader$1;)V

    sput-object v0, Lcom/ymnsdk/replugin/patch/download/FileDownloader$Factory;->instance:Lcom/ymnsdk/replugin/patch/download/FileDownloader;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic access$000()Lcom/ymnsdk/replugin/patch/download/FileDownloader;
    .locals 1

    .line 31
    sget-object v0, Lcom/ymnsdk/replugin/patch/download/FileDownloader$Factory;->instance:Lcom/ymnsdk/replugin/patch/download/FileDownloader;

    return-object v0
.end method
