.class Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->addDownloadChunk(Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

.field final synthetic val$chunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;Lcom/ss/android/socialbase/downloader/model/DownloadChunk;)V
    .locals 0

    .line 466
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$3;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    iput-object p2, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$3;->val$chunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 470
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$3;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->access$500(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;)Lcom/ss/android/socialbase/downloader/db/TableStatements;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/db/TableStatements;->getInsertStatement()Landroid/database/sqlite/SQLiteStatement;

    move-result-object v0

    .line 471
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$3;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$3;->val$chunk:Lcom/ss/android/socialbase/downloader/model/DownloadChunk;

    invoke-static {v1, v2, v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->access$700(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;Lcom/ss/android/socialbase/downloader/model/DownloadChunk;Landroid/database/sqlite/SQLiteStatement;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 473
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method
