.class public final Lcom/mbridge/msdk/mbdownload/manager/b;
.super Ljava/lang/Object;
.source "ApkDownloadTaskObserver.java"

# interfaces
.implements Ljava/util/Observer;


# instance fields
.field private a:Z

.field private b:Lcom/mbridge/msdk/out/IDownloadListener;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/out/IDownloadListener;)V
    .locals 1

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 10
    iput-boolean v0, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->a:Z

    .line 16
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->b:Lcom/mbridge/msdk/out/IDownloadListener;

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/out/IDownloadListener;)V
    .locals 0

    .line 20
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->b:Lcom/mbridge/msdk/out/IDownloadListener;

    return-void
.end method

.method public final update(Ljava/util/Observable;Ljava/lang/Object;)V
    .locals 3

    .line 26
    :try_start_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->b:Lcom/mbridge/msdk/out/IDownloadListener;

    if-eqz p1, :cond_8

    const/16 p1, 0x8

    if-eqz p2, :cond_7

    .line 28
    check-cast p2, Lcom/mbridge/msdk/mbdownload/manager/c;

    .line 29
    invoke-virtual {p2}, Lcom/mbridge/msdk/mbdownload/manager/c;->b()I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_6

    const/4 v1, 0x5

    if-eq v0, v1, :cond_5

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eq v0, v2, :cond_4

    const/4 v2, 0x2

    if-eq v0, v2, :cond_2

    if-eq v0, p1, :cond_1

    const/16 p1, 0x9

    if-eq v0, p1, :cond_0

    .line 56
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->b:Lcom/mbridge/msdk/out/IDownloadListener;

    invoke-virtual {p2}, Lcom/mbridge/msdk/mbdownload/manager/c;->b()I

    move-result p2

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/out/IDownloadListener;->onStatus(I)V

    goto :goto_0

    .line 50
    :cond_0
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->b:Lcom/mbridge/msdk/out/IDownloadListener;

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/out/IDownloadListener;->onStatus(I)V

    goto :goto_0

    .line 47
    :cond_1
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->b:Lcom/mbridge/msdk/out/IDownloadListener;

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/out/IDownloadListener;->onStatus(I)V

    goto :goto_0

    .line 31
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->b:Lcom/mbridge/msdk/out/IDownloadListener;

    invoke-interface {p1, v2}, Lcom/mbridge/msdk/out/IDownloadListener;->onStatus(I)V

    .line 32
    iget-boolean p1, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->a:Z

    if-eqz p1, :cond_3

    .line 33
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->b:Lcom/mbridge/msdk/out/IDownloadListener;

    invoke-interface {p1}, Lcom/mbridge/msdk/out/IDownloadListener;->onStart()V

    .line 34
    iput-boolean v1, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->a:Z

    .line 37
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->b:Lcom/mbridge/msdk/out/IDownloadListener;

    invoke-virtual {p2}, Lcom/mbridge/msdk/mbdownload/manager/c;->c()I

    move-result p2

    invoke-interface {p1, p2}, Lcom/mbridge/msdk/out/IDownloadListener;->onProgressUpdate(I)V

    goto :goto_0

    .line 43
    :cond_4
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->b:Lcom/mbridge/msdk/out/IDownloadListener;

    invoke-virtual {p2}, Lcom/mbridge/msdk/mbdownload/manager/c;->a()Ljava/lang/String;

    move-result-object p2

    invoke-interface {p1, v2, v1, p2}, Lcom/mbridge/msdk/out/IDownloadListener;->onEnd(IILjava/lang/String;)V

    .line 44
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->b:Lcom/mbridge/msdk/out/IDownloadListener;

    invoke-interface {p1, v2}, Lcom/mbridge/msdk/out/IDownloadListener;->onStatus(I)V

    goto :goto_0

    .line 40
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->b:Lcom/mbridge/msdk/out/IDownloadListener;

    invoke-interface {p1, v1}, Lcom/mbridge/msdk/out/IDownloadListener;->onStatus(I)V

    goto :goto_0

    .line 53
    :cond_6
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->b:Lcom/mbridge/msdk/out/IDownloadListener;

    invoke-interface {p1, v1}, Lcom/mbridge/msdk/out/IDownloadListener;->onStatus(I)V

    goto :goto_0

    .line 60
    :cond_7
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/manager/b;->b:Lcom/mbridge/msdk/out/IDownloadListener;

    invoke-interface {p2, p1}, Lcom/mbridge/msdk/out/IDownloadListener;->onStatus(I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 64
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_8
    :goto_0
    return-void
.end method
