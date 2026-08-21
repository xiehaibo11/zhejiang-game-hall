.class final Lcom/mbridge/msdk/mbdownload/manager/a$1;
.super Ljava/lang/Object;
.source "ApkDownloadTaskObservable.java"

# interfaces
.implements Lcom/mbridge/msdk/foundation/download/OnDownloadStateListener;


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

    .line 38
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onCancelDownload(Lcom/mbridge/msdk/foundation/download/DownloadMessage;)V
    .locals 1

    .line 51
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->d(Lcom/mbridge/msdk/mbdownload/manager/a;)V

    .line 52
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    const/4 v0, 0x5

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->a(Lcom/mbridge/msdk/mbdownload/manager/a;I)I

    .line 53
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->c(Lcom/mbridge/msdk/mbdownload/manager/a;)Lcom/mbridge/msdk/mbdownload/manager/c;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbdownload/manager/c;->a(I)V

    .line 54
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;)I

    move-result v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;I)V

    .line 55
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->c(Lcom/mbridge/msdk/mbdownload/manager/a;)Lcom/mbridge/msdk/mbdownload/manager/c;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->notifyObservers(Ljava/lang/Object;)V

    return-void
.end method

.method public final onDownloadComplete(Lcom/mbridge/msdk/foundation/download/DownloadMessage;)V
    .locals 2

    .line 60
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->e(Lcom/mbridge/msdk/mbdownload/manager/a;)V

    .line 61
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbdownload/manager/a;->a(Lcom/mbridge/msdk/mbdownload/manager/a;I)I

    .line 62
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->c(Lcom/mbridge/msdk/mbdownload/manager/a;)Lcom/mbridge/msdk/mbdownload/manager/c;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {v1}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbdownload/manager/c;->a(I)V

    .line 63
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;)I

    move-result v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;I)V

    .line 64
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/download/DownloadMessage;->getSaveFilePath()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->a(Lcom/mbridge/msdk/mbdownload/manager/a;Ljava/lang/String;)Ljava/lang/String;

    .line 65
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->f(Lcom/mbridge/msdk/mbdownload/manager/a;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;Ljava/lang/String;)V

    .line 66
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->c(Lcom/mbridge/msdk/mbdownload/manager/a;)Lcom/mbridge/msdk/mbdownload/manager/c;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->f(Lcom/mbridge/msdk/mbdownload/manager/a;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbdownload/manager/c;->a(Ljava/lang/String;)V

    .line 68
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->c(Lcom/mbridge/msdk/mbdownload/manager/a;)Lcom/mbridge/msdk/mbdownload/manager/c;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->notifyObservers(Ljava/lang/Object;)V

    return-void
.end method

.method public final onDownloadError(Lcom/mbridge/msdk/foundation/download/DownloadMessage;Lcom/mbridge/msdk/foundation/download/DownloadError;)V
    .locals 0

    .line 73
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->g(Lcom/mbridge/msdk/mbdownload/manager/a;)V

    .line 74
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    const/16 p2, 0x8

    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbdownload/manager/a;->a(Lcom/mbridge/msdk/mbdownload/manager/a;I)I

    .line 75
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->c(Lcom/mbridge/msdk/mbdownload/manager/a;)Lcom/mbridge/msdk/mbdownload/manager/c;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p2}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;)I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbdownload/manager/c;->a(I)V

    .line 76
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;)I

    move-result p2

    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;I)V

    .line 77
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->c(Lcom/mbridge/msdk/mbdownload/manager/a;)Lcom/mbridge/msdk/mbdownload/manager/c;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbdownload/manager/a;->notifyObservers(Ljava/lang/Object;)V

    return-void
.end method

.method public final onDownloadStart(Lcom/mbridge/msdk/foundation/download/DownloadMessage;)V
    .locals 1

    .line 41
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->a(Lcom/mbridge/msdk/mbdownload/manager/a;)V

    .line 42
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    const/4 v0, 0x2

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->a(Lcom/mbridge/msdk/mbdownload/manager/a;I)I

    .line 43
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->c(Lcom/mbridge/msdk/mbdownload/manager/a;)Lcom/mbridge/msdk/mbdownload/manager/c;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;)I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbdownload/manager/c;->a(I)V

    .line 44
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;)I

    move-result v0

    invoke-static {p1, v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->b(Lcom/mbridge/msdk/mbdownload/manager/a;I)V

    .line 45
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/manager/a$1;->a:Lcom/mbridge/msdk/mbdownload/manager/a;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/manager/a;->c(Lcom/mbridge/msdk/mbdownload/manager/a;)Lcom/mbridge/msdk/mbdownload/manager/c;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbdownload/manager/a;->notifyObservers(Ljava/lang/Object;)V

    return-void
.end method
