.class final Lcom/mbridge/msdk/mbdownload/e$b;
.super Ljava/lang/Object;
.source "DownloadTool.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbdownload/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation


# instance fields
.field a:Lcom/mbridge/msdk/mbdownload/k;

.field b:Lcom/mbridge/msdk/mbdownload/e$a;

.field c:I

.field d:I

.field e:Lcom/mbridge/msdk/mbdownload/b$a;

.field f:[J


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/mbdownload/b$a;I)V
    .locals 1

    .line 114
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x3

    new-array v0, v0, [J

    .line 111
    iput-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$b;->f:[J

    .line 115
    iput p2, p0, Lcom/mbridge/msdk/mbdownload/e$b;->c:I

    .line 116
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$b;->e:Lcom/mbridge/msdk/mbdownload/b$a;

    return-void
.end method
