.class Lcom/ss/android/downloadlib/pt/rg$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/downloadlib/guide/install/rg;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/pt/rg;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadlib/guide/install/rg;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/downloadlib/guide/install/rg;

.field final synthetic q:Lcom/ss/android/downloadlib/pt/rg;

.field final synthetic rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/pt/rg;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadlib/guide/install/rg;)V
    .locals 0

    .line 38
    iput-object p1, p0, Lcom/ss/android/downloadlib/pt/rg$2;->q:Lcom/ss/android/downloadlib/pt/rg;

    iput-object p2, p0, Lcom/ss/android/downloadlib/pt/rg$2;->rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iput-object p3, p0, Lcom/ss/android/downloadlib/pt/rg$2;->df:Lcom/ss/android/downloadlib/guide/install/rg;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg()V
    .locals 3

    .line 41
    iget-object v0, p0, Lcom/ss/android/downloadlib/pt/rg$2;->q:Lcom/ss/android/downloadlib/pt/rg;

    iget-object v1, p0, Lcom/ss/android/downloadlib/pt/rg$2;->rg:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v2, p0, Lcom/ss/android/downloadlib/pt/rg$2;->df:Lcom/ss/android/downloadlib/guide/install/rg;

    invoke-static {v0, v1, v2}, Lcom/ss/android/downloadlib/pt/rg;->rg(Lcom/ss/android/downloadlib/pt/rg;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/downloadlib/guide/install/rg;)V

    return-void
.end method
