.class final Lcom/tkay/core/common/a/j$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/a/j;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/a/j;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/a/j;)V
    .locals 0

    .line 47
    iput-object p1, p0, Lcom/tkay/core/common/a/j$1;->a:Lcom/tkay/core/common/a/j;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 50
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 51
    iget-object v0, p0, Lcom/tkay/core/common/a/j$1;->a:Lcom/tkay/core/common/a/j;

    invoke-static {v0}, Lcom/tkay/core/common/a/j;->a(Lcom/tkay/core/common/a/j;)Lcom/tkay/core/common/c/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/c/m;->c()J

    move-result-wide v1

    invoke-static {v0, v1, v2}, Lcom/tkay/core/common/a/j;->a(Lcom/tkay/core/common/a/j;J)J

    .line 52
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "recycleSpace check curDownloadedVideoFileSize:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/core/common/a/j$1;->a:Lcom/tkay/core/common/a/j;

    invoke-static {v1}, Lcom/tkay/core/common/a/j;->b(Lcom/tkay/core/common/a/j;)J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ",MAX_VIDEO_CACHE_SIZE:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/tkay/core/common/a/j$1;->a:Lcom/tkay/core/common/a/j;

    invoke-static {v1}, Lcom/tkay/core/common/a/j;->c(Lcom/tkay/core/common/a/j;)J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    .line 53
    iget-object v0, p0, Lcom/tkay/core/common/a/j$1;->a:Lcom/tkay/core/common/a/j;

    invoke-static {v0}, Lcom/tkay/core/common/a/j;->b(Lcom/tkay/core/common/a/j;)J

    move-result-wide v0

    iget-object v2, p0, Lcom/tkay/core/common/a/j$1;->a:Lcom/tkay/core/common/a/j;

    invoke-static {v2}, Lcom/tkay/core/common/a/j;->c(Lcom/tkay/core/common/a/j;)J

    move-result-wide v2

    cmp-long v0, v0, v2

    if-lez v0, :cond_2

    .line 54
    iget-object v0, p0, Lcom/tkay/core/common/a/j$1;->a:Lcom/tkay/core/common/a/j;

    invoke-static {v0}, Lcom/tkay/core/common/a/j;->a(Lcom/tkay/core/common/a/j;)Lcom/tkay/core/common/c/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/c/m;->d()Ljava/util/List;

    move-result-object v0

    .line 59
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "recycleSpace start to delete video file,file list size:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 60
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :catchall_0
    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/a/i;

    .line 62
    :try_start_0
    new-instance v2, Ljava/io/File;

    invoke-virtual {v1}, Lcom/tkay/core/common/a/i;->b()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 63
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_1

    .line 64
    invoke-virtual {v2}, Ljava/io/File;->delete()Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 70
    :catchall_1
    :cond_1
    :try_start_1
    invoke-virtual {v1}, Lcom/tkay/core/common/a/i;->a()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 71
    invoke-virtual {v1}, Lcom/tkay/core/common/a/i;->a()Ljava/lang/String;

    move-result-object v1

    .line 73
    iget-object v2, p0, Lcom/tkay/core/common/a/j$1;->a:Lcom/tkay/core/common/a/j;

    invoke-static {v2}, Lcom/tkay/core/common/a/j;->d(Lcom/tkay/core/common/a/j;)Ljava/util/Map;

    move-result-object v2

    invoke-interface {v2, v1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 75
    invoke-static {}, Lcom/tkay/core/common/res/a/c;->a()Lcom/tkay/core/common/res/a/c;

    move-result-object v2

    invoke-virtual {v2, v1}, Lcom/tkay/core/common/res/a/c;->b(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :cond_2
    return-void
.end method
