.class Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$11;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->update(ILandroid/content/ContentValues;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

.field final synthetic val$cv:Landroid/content/ContentValues;

.field final synthetic val$id:I


# direct methods
.method constructor <init>(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;ILandroid/content/ContentValues;)V
    .locals 0

    .line 1004
    iput-object p1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$11;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    iput p2, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$11;->val$id:I

    iput-object p3, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$11;->val$cv:Landroid/content/ContentValues;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 1007
    iget-object v0, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$11;->this$0:Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;

    iget v1, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$11;->val$id:I

    iget-object v2, p0, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache$11;->val$cv:Landroid/content/ContentValues;

    invoke-static {v0, v1, v2}, Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;->access$1500(Lcom/ss/android/socialbase/downloader/db/SqlDownloadCache;ILandroid/content/ContentValues;)V

    return-void
.end method
