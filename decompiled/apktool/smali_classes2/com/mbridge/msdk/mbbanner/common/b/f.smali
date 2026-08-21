.class public Lcom/mbridge/msdk/mbbanner/common/b/f;
.super Ljava/lang/Object;
.source "DownloadBannerUrlListener.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/download/download/H5DownLoadManager$IH5SourceDownloadListener;


# static fields
.field private static final a:Ljava/lang/String;


# instance fields
.field private b:Lcom/mbridge/msdk/mbbanner/common/c/b;

.field private c:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 10
    const-class v0, Lcom/mbridge/msdk/mbbanner/common/b/f;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/mbbanner/common/b/f;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Lcom/mbridge/msdk/mbbanner/common/c/b;Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 16
    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/b/f;->b:Lcom/mbridge/msdk/mbbanner/common/c/b;

    .line 17
    iput-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/b/f;->c:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public onFailed(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 30
    sget-object p2, Lcom/mbridge/msdk/mbbanner/common/b/f;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "DownloadBannerUrlListener HTML FAIL:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 31
    iget-object p2, p0, Lcom/mbridge/msdk/mbbanner/common/b/f;->b:Lcom/mbridge/msdk/mbbanner/common/c/b;

    if-eqz p2, :cond_0

    .line 32
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/b/f;->c:Ljava/lang/String;

    const/4 v1, 0x3

    const/4 v2, 0x0

    invoke-virtual {p2, v0, v1, p1, v2}, Lcom/mbridge/msdk/mbbanner/common/c/b;->a(Ljava/lang/String;ILjava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public onSuccess(Ljava/lang/String;)V
    .locals 4

    .line 22
    sget-object v0, Lcom/mbridge/msdk/mbbanner/common/b/f;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "DownloadBannerUrlListener HTML SUCCESS:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 23
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/b/f;->b:Lcom/mbridge/msdk/mbbanner/common/c/b;

    if-eqz v0, :cond_0

    .line 24
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/b/f;->c:Ljava/lang/String;

    const/4 v2, 0x3

    const/4 v3, 0x1

    invoke-virtual {v0, v1, v2, p1, v3}, Lcom/mbridge/msdk/mbbanner/common/c/b;->a(Ljava/lang/String;ILjava/lang/String;Z)V

    :cond_0
    return-void
.end method
