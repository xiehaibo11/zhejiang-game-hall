.class Lcom/ss/android/socialbase/appdownloader/pt$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/appdownloader/q/f;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/appdownloader/c;)I
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

.field final synthetic pp:Lcom/ss/android/socialbase/appdownloader/pt;

.field final synthetic pt:Z

.field final synthetic q:I

.field final synthetic rg:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/appdownloader/pt;Ljava/lang/String;Lcom/ss/android/socialbase/downloader/model/DownloadTask;IZ)V
    .locals 0

    .line 610
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->pp:Lcom/ss/android/socialbase/appdownloader/pt;

    iput-object p2, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->rg:Ljava/lang/String;

    iput-object p3, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->df:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    iput p4, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->q:I

    iput-boolean p5, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->pt:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public df()V
    .locals 4

    .line 619
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->un()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "notification permission denied, start download :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->rg:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 620
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->pp:Lcom/ss/android/socialbase/appdownloader/pt;

    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->df:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    iget v2, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->q:I

    iget-boolean v3, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->pt:Z

    invoke-static {v0, v1, v2, v3}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/appdownloader/pt;Lcom/ss/android/socialbase/downloader/model/DownloadTask;IZ)V

    return-void
.end method

.method public rg()V
    .locals 4

    .line 613
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->un()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "notification permission granted, start download :"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->rg:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/logger/Logger;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 614
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->pp:Lcom/ss/android/socialbase/appdownloader/pt;

    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->df:Lcom/ss/android/socialbase/downloader/model/DownloadTask;

    iget v2, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->q:I

    iget-boolean v3, p0, Lcom/ss/android/socialbase/appdownloader/pt$3;->pt:Z

    invoke-static {v0, v1, v2, v3}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/appdownloader/pt;Lcom/ss/android/socialbase/downloader/model/DownloadTask;IZ)V

    return-void
.end method
