.class final Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager$a;
.super Ljava/lang/Object;
.source "ADownloadManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# static fields
.field private static final a:Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 47
    new-instance v0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;-><init>(Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager$1;)V

    sput-object v0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager$a;->a:Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;

    return-void
.end method

.method static synthetic a()Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;
    .locals 1

    .line 46
    sget-object v0, Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager$a;->a:Lcom/mbridge/msdk/mbdownload/manager/ADownloadManager;

    return-object v0
.end method
