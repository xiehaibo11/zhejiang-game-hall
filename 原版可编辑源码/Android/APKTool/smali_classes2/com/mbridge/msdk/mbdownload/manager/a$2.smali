.class final Lcom/mbridge/msdk/mbdownload/manager/a$2;
.super Ljava/lang/Object;
.source "ApkDownloadTaskObservable.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/download/OnProgressStateListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbdownload/manager/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbdownload/manager/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbdownload/manager/a;)V
    .locals 0

    .line 80
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$2;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onProgress(Lcom/mbridge/msdk/foundation/download/DownloadMessage;Lcom/mbridge/msdk/foundation/download/DownloadProgress;)V
    .locals 2

    .line 83
    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/download/DownloadProgress;->getCurrentDownloadRate()I

    move-result p2

    .line 84
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a$2;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;)I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a$2;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->h(Lcom/mbridge/msdk/mbdownload/manager/a;)I

    move-result v0

    if-eq v0, p2, :cond_0

    .line 85
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a$2;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {v0, p2}, Lcom/mbridge/msdk/mbdownload/manager/a;->c(Lcom/mbridge/msdk/mbdownload/manager/a;I)I

    .line 86
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/manager/a$2;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p2}, Lcom/mbridge/msdk/mbdownload/manager/a;->i(Lcom/mbridge/msdk/mbdownload/manager/a;)V

    .line 87
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/manager/a$2;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p2}, Lcom/mbridge/msdk/mbdownload/manager/a;->c(Lcom/mbridge/msdk/mbdownload/manager/a;)Lcom/mbridge/msdk/mbdownload/manager/c;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a$2;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;)I

    move-result v0

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/mbdownload/manager/c;->a(I)V

    .line 88
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/manager/a$2;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p2}, Lcom/mbridge/msdk/mbdownload/manager/a;->h(Lcom/mbridge/msdk/mbdownload/manager/a;)I

    move-result v0

    invoke-static {p2, v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->d(Lcom/mbridge/msdk/mbdownload/manager/a;I)V

    .line 89
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/manager/a$2;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p2}, Lcom/mbridge/msdk/mbdownload/manager/a;->c(Lcom/mbridge/msdk/mbdownload/manager/a;)Lcom/mbridge/msdk/mbdownload/manager/c;

    move-result-object p2

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a$2;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->h(Lcom/mbridge/msdk/mbdownload/manager/a;)I

    move-result v0

    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/mbdownload/manager/c;->b(I)V

    .line 90
    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/manager/a$2;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p2}, Lcom/mbridge/msdk/mbdownload/manager/a;->c(Lcom/mbridge/msdk/mbdownload/manager/a;)Lcom/mbridge/msdk/mbdownload/manager/c;

    move-result-object p2

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getSaveFilePath()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/mbdownload/manager/c;->a(Ljava/lang/String;)V

    .line 91
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$2;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->c(Lcom/mbridge/msdk/mbdownload/manager/a;)Lcom/mbridge/msdk/mbdownload/manager/c;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbdownload/manager/a;->notifyObservers(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method
