.class Lcom/ss/android/downloadlib/addownload/pp$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/pp;->c()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/ss/android/downloadlib/addownload/pp;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/pp;)V
    .locals 0

    .line 510
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$1;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 513
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$1;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/downloadlib/addownload/pp;)Ljava/util/Map;

    move-result-object v0

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/fw;->rg(Ljava/util/Map;)Ljava/util/List;

    move-result-object v0

    .line 514
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;

    .line 515
    iget-object v2, p0, Lcom/ss/android/downloadlib/addownload/pp$1;->rg:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v2}, Lcom/ss/android/downloadlib/addownload/pp;->df(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/download/api/model/DownloadShortInfo;

    move-result-object v2

    invoke-interface {v1, v2}, Lcom/ss/android/download/api/download/DownloadStatusChangeListener;->onInstalled(Lcom/ss/android/download/api/model/DownloadShortInfo;)V

    goto :goto_0

    :cond_0
    return-void
.end method
