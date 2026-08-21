.class Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/ss/android/socialbase/downloader/downloader/DownloadComponentManager$IndependentHolderCreator$OnMainProcessRebindErrorListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;-><init>()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;)V
    .locals 0

    .line 79
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache$2;->this$0:Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onRebindError()V
    .locals 2

    .line 83
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache$2;->this$0:Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;

    new-instance v1, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    invoke-direct {v1}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;-><init>()V

    invoke-static {v0, v1}, Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;->access$002(Lcom/ss/android/socialbase/downloader/impls/DefaultDownloadCache;Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;)Lcom/ss/android/socialbase/downloader/downloader/ISqlDownloadCache;

    const-string v0, "DefaultDownloadCache"

    const-string v1, "rebind error,use backup sqlDownloadCache"

    .line 84
    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void
.end method
