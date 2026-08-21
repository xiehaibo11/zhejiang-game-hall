.class Lcom/ss/android/downloadlib/addownload/pp$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/addownload/pp$rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/addownload/pp;->c(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:I

.field final synthetic q:Lcom/ss/android/downloadlib/addownload/pp;

.field final synthetic rg:I


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/addownload/pp;II)V
    .locals 0

    .line 624
    iput-object p1, p0, Lcom/ss/android/downloadlib/addownload/pp$2;->q:Lcom/ss/android/downloadlib/addownload/pp;

    iput p2, p0, Lcom/ss/android/downloadlib/addownload/pp$2;->rg:I

    iput p3, p0, Lcom/ss/android/downloadlib/addownload/pp$2;->df:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg()V
    .locals 4

    .line 627
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$2;->q:Lcom/ss/android/downloadlib/addownload/pp;

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pp;->q(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/downloadlib/addownload/pt;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/downloadlib/addownload/pt;->rg()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 630
    :cond_0
    iget-object v0, p0, Lcom/ss/android/downloadlib/addownload/pp$2;->q:Lcom/ss/android/downloadlib/addownload/pp;

    iget v1, p0, Lcom/ss/android/downloadlib/addownload/pp$2;->rg:I

    iget v2, p0, Lcom/ss/android/downloadlib/addownload/pp$2;->df:I

    invoke-static {v0}, Lcom/ss/android/downloadlib/addownload/pp;->pt(Lcom/ss/android/downloadlib/addownload/pp;)Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    move-result-object v3

    invoke-static {v0, v1, v2, v3}, Lcom/ss/android/downloadlib/addownload/pp;->rg(Lcom/ss/android/downloadlib/addownload/pp;IILcom/ss/android/socialbase/downloader/model/DownloadInfo;)V

    return-void
.end method
