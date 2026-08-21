.class final Lcom/mbridge/msdk/mbdownload/d$b;
.super Ljava/lang/Object;
.source "DownloadTaskList.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbdownload/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "b"
.end annotation


# static fields
.field public static final a:Lcom/mbridge/msdk/mbdownload/d;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 66
    new-instance v0, Lcom/mbridge/msdk/mbdownload/d;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/mbdownload/d;-><init>(Lcom/mbridge/msdk/mbdownload/d$1;)V

    sput-object v0, Lcom/mbridge/msdk/mbdownload/d$b;->a:Lcom/mbridge/msdk/mbdownload/d;

    return-void
.end method
