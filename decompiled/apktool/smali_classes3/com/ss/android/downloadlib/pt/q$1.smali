.class Lcom/ss/android/downloadlib/pt/q$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/appdownloader/q/rz;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/downloadlib/pt/q;->rg(Lcom/ss/android/socialbase/downloader/model/DownloadInfo;ILcom/ss/android/socialbase/appdownloader/q/rz;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic df:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

.field final synthetic pt:Lcom/ss/android/downloadlib/pt/q;

.field final synthetic q:Lcom/ss/android/socialbase/appdownloader/q/rz;

.field final synthetic rg:I


# direct methods
.method constructor <init>(Lcom/ss/android/downloadlib/pt/q;ILcom/ss/android/socialbase/downloader/model/DownloadInfo;Lcom/ss/android/socialbase/appdownloader/q/rz;)V
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/ss/android/downloadlib/pt/q$1;->pt:Lcom/ss/android/downloadlib/pt/q;

    iput p2, p0, Lcom/ss/android/downloadlib/pt/q$1;->rg:I

    iput-object p3, p0, Lcom/ss/android/downloadlib/pt/q$1;->df:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iput-object p4, p0, Lcom/ss/android/downloadlib/pt/q$1;->q:Lcom/ss/android/socialbase/appdownloader/q/rz;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rg()V
    .locals 4

    .line 62
    iget v0, p0, Lcom/ss/android/downloadlib/pt/q$1;->rg:I

    add-int/lit8 v0, v0, 0x1

    .line 63
    iget-object v1, p0, Lcom/ss/android/downloadlib/pt/q$1;->pt:Lcom/ss/android/downloadlib/pt/q;

    iget-object v2, p0, Lcom/ss/android/downloadlib/pt/q$1;->df:Lcom/ss/android/socialbase/downloader/model/DownloadInfo;

    iget-object v3, p0, Lcom/ss/android/downloadlib/pt/q$1;->q:Lcom/ss/android/socialbase/appdownloader/q/rz;

    invoke-static {v1, v2, v0, v3}, Lcom/ss/android/downloadlib/pt/q;->rg(Lcom/ss/android/downloadlib/pt/q;Lcom/ss/android/socialbase/downloader/model/DownloadInfo;ILcom/ss/android/socialbase/appdownloader/q/rz;)V

    return-void
.end method
