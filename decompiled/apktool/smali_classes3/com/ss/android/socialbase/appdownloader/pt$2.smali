.class Lcom/ss/android/socialbase/appdownloader/pt$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/depend/IDownloadDepend;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/appdownloader/c;)I
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/ss/android/socialbase/appdownloader/pt;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/appdownloader/pt;)V
    .locals 0

    .line 512
    iput-object p1, p0, Lcom/ss/android/socialbase/appdownloader/pt$2;->rg:Lcom/ss/android/socialbase/appdownloader/pt;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public monitorLogSend(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V
    .locals 1

    .line 515
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt$2;->rg:Lcom/ss/android/socialbase/appdownloader/pt;

    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/appdownloader/pt;)Lcom/ss/android/socialbase/appdownloader/q/ux;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 516
    iget-object v0, p0, Lcom/ss/android/socialbase/appdownloader/pt$2;->rg:Lcom/ss/android/socialbase/appdownloader/pt;

    invoke-static {v0}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Lcom/ss/android/socialbase/appdownloader/pt;)Lcom/ss/android/socialbase/appdownloader/q/ux;

    move-result-object v0

    invoke-interface {v0, p1, p2, p3}, Lcom/ss/android/socialbase/appdownloader/q/ux;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/downloader/exception/BaseException;I)V

    :cond_0
    return-void
.end method
