.class Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->updateSubDownloadChunkIndex(IIII)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

.field final synthetic val$chunkIndex:I

.field final synthetic val$hostChunkIndex:I

.field final synthetic val$id:I

.field final synthetic val$newChunkIndex:I


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;IIII)V
    .locals 0

    .line 557
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$6;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    iput p2, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$6;->val$id:I

    iput p3, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$6;->val$chunkIndex:I

    iput p4, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$6;->val$hostChunkIndex:I

    iput p5, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$6;->val$newChunkIndex:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 7

    .line 561
    :try_start_0
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$6;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    invoke-static {v0}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->access$500(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;)Lcom/ss/android/socialbase/downloader/db/TableStatements;

    move-result-object v0

    invoke-virtual {v0}, Lcom/ss/android/socialbase/downloader/db/TableStatements;->getUpdateStatement()Landroid/database/sqlite/SQLiteStatement;

    move-result-object v6

    .line 562
    iget-object v1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$6;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    iget v2, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$6;->val$id:I

    iget v3, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$6;->val$chunkIndex:I

    iget v4, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$6;->val$hostChunkIndex:I

    iget v5, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$6;->val$newChunkIndex:I

    invoke-static/range {v1 .. v6}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->access$1000(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;IIIILandroid/database/sqlite/SQLiteStatement;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 564
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :goto_0
    return-void
.end method
