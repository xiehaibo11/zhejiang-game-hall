.class Lcom/ss/android/downloadlib/addownload/fw$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/addownload/fw$df;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/fw;->rg()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/ss/android/downloadlib/addownload/fw;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/fw;)V
    .locals 0

    .line 348
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/fw$3;->rg:Lcom/ss/android/downloadlib/addownload/fw;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;)V
    .locals 4

    .line 351
    invoke-static {}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg()Lcom/ss/android/downloadlib/event/AdEventHandler;

    move-result-object v0

    iget-object v1, p0, Lcom/ss/android/downloadlib/addownload/fw$3;->rg:Lcom/ss/android/downloadlib/addownload/fw;

    invoke-static {v1}, Lcom/ss/android/downloadlib/addownload/fw;->df(Lcom/ss/android/downloadlib/addownload/fw;)J

    move-result-wide v1

    const/4 v3, 0x2

    invoke-virtual {v0, v1, v2, v3, p1}, Lcom/ss/android/downloadlib/event/AdEventHandler;->rg(JILcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-void
.end method
