.class public Lcom/tkay/core/common/res/a/a;
.super Lcom/tkay/core/common/res/image/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/res/a/a$b;,
        Lcom/tkay/core/common/res/a/a$a;
    }
.end annotation


# instance fields
.field final a:Ljava/lang/String;

.field public b:Lcom/tkay/core/common/res/a/b;

.field public j:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/core/common/res/a/a$a;",
            ">;"
        }
    .end annotation
.end field

.field public k:Lcom/tkay/core/common/res/a/a$b;

.field l:I

.field private final m:I

.field private final n:I

.field private o:I

.field private p:I

.field private q:J

.field private r:Ljava/lang/String;

.field private s:Z


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 2

    .line 50
    invoke-direct {p0, p1}, Lcom/tkay/core/common/res/image/b;-><init>(Ljava/lang/String;)V

    .line 32
    const-class p1, Lcom/tkay/core/common/res/a/a;

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/core/common/res/a/a;->a:Ljava/lang/String;

    const/4 p1, 0x0

    .line 38
    iput p1, p0, Lcom/tkay/core/common/res/a/a;->m:I

    const/4 v0, 0x1

    .line 39
    iput v0, p0, Lcom/tkay/core/common/res/a/a;->n:I

    const/4 v0, -0x1

    .line 147
    iput v0, p0, Lcom/tkay/core/common/res/a/a;->l:I

    .line 52
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/res/a/a;->j:Ljava/util/List;

    .line 53
    new-instance v0, Lcom/tkay/core/common/res/a/b;

    invoke-direct {v0}, Lcom/tkay/core/common/res/a/b;-><init>()V

    iput-object v0, p0, Lcom/tkay/core/common/res/a/a;->b:Lcom/tkay/core/common/res/a/b;

    .line 54
    iput p1, p0, Lcom/tkay/core/common/res/a/a;->p:I

    const-wide/16 v0, 0x0

    .line 55
    iput-wide v0, p0, Lcom/tkay/core/common/res/a/a;->q:J

    .line 56
    iput-boolean p1, p0, Lcom/tkay/core/common/res/a/a;->s:Z

    .line 1082
    iput p1, p0, Lcom/tkay/core/common/res/a/a;->o:I

    return-void
.end method

.method private a(I)V
    .locals 0

    .line 82
    iput p1, p0, Lcom/tkay/core/common/res/a/a;->o:I

    return-void
.end method

.method private declared-synchronized a(IJ)V
    .locals 11

    monitor-enter p0

    .line 150
    :try_start_0
    iget v0, p0, Lcom/tkay/core/common/res/a/a;->l:I

    if-eq v0, p1, :cond_0

    .line 151
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/common/res/a/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " notifyDownloadProcess:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 152
    iput p1, p0, Lcom/tkay/core/common/res/a/a;->l:I

    .line 154
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/res/a/a;->j:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    const/4 v1, 0x0

    move v10, v1

    .line 156
    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    .line 157
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    move-object v3, v2

    check-cast v3, Lcom/tkay/core/common/res/a/a$a;

    .line 158
    iget-wide v7, p0, Lcom/tkay/core/common/res/a/a;->i:J

    move v4, p1

    move-wide v5, p2

    invoke-virtual/range {v3 .. v8}, Lcom/tkay/core/common/res/a/a$a;->a(IJJ)Z

    move-result v2

    if-eqz v2, :cond_1

    const/16 v2, 0x64

    if-eq p1, v2, :cond_2

    const/4 v2, 0x1

    move v10, v2

    goto :goto_1

    :cond_2
    move v10, v1

    .line 160
    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->remove()V

    goto :goto_0

    .line 163
    :cond_3
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/res/a/a;->c:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/core/common/res/a/a;->r:Ljava/lang/String;

    iget-wide v5, p0, Lcom/tkay/core/common/res/a/a;->i:J

    move-wide v7, p2

    move v9, p1

    invoke-virtual/range {v2 .. v10}, Lcom/tkay/core/common/a/j;->a(Ljava/lang/String;Ljava/lang/String;JJIZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 164
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private a(Lcom/tkay/core/common/res/a/a$b;)V
    .locals 0

    .line 78
    iput-object p1, p0, Lcom/tkay/core/common/res/a/a;->k:Lcom/tkay/core/common/res/a/a$b;

    return-void
.end method

.method private b(IJ)V
    .locals 21

    move-object/from16 v0, p0

    move/from16 v8, p1

    .line 167
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, v0, Lcom/tkay/core/common/res/a/a;->c:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, " notifyDownloadFinish: downloadRate:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/16 v1, 0x64

    if-ne v8, v1, :cond_0

    .line 169
    invoke-static {}, Lcom/tkay/core/common/a/j;->a()Lcom/tkay/core/common/a/j;

    move-result-object v1

    iget-object v2, v0, Lcom/tkay/core/common/res/a/a;->c:Ljava/lang/String;

    iget-object v3, v0, Lcom/tkay/core/common/res/a/a;->r:Ljava/lang/String;

    iget-wide v4, v0, Lcom/tkay/core/common/res/a/a;->i:J

    const/4 v9, 0x1

    move-wide/from16 v6, p2

    move/from16 v8, p1

    invoke-virtual/range {v1 .. v9}, Lcom/tkay/core/common/a/j;->a(Ljava/lang/String;Ljava/lang/String;JJIZ)V

    .line 170
    iget-object v10, v0, Lcom/tkay/core/common/res/a/a;->k:Lcom/tkay/core/common/res/a/a$b;

    if-eqz v10, :cond_0

    .line 171
    iget-wide v11, v0, Lcom/tkay/core/common/res/a/a;->i:J

    iget-wide v13, v0, Lcom/tkay/core/common/res/a/a;->e:J

    iget-wide v1, v0, Lcom/tkay/core/common/res/a/a;->g:J

    iget-wide v3, v0, Lcom/tkay/core/common/res/a/a;->f:J

    iget-wide v5, v0, Lcom/tkay/core/common/res/a/a;->h:J

    move-wide v15, v1

    move-wide/from16 v17, v3

    move-wide/from16 v19, v5

    invoke-virtual/range {v10 .. v20}, Lcom/tkay/core/common/res/a/a$b;->a(JJJJJ)V

    :cond_0
    return-void
.end method

.method private declared-synchronized b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 12

    monitor-enter p0

    .line 261
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/common/res/a/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " notifyLoadFailed: errorCode:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",errorMsg:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v0, 0x0

    .line 5082
    iput v0, p0, Lcom/tkay/core/common/res/a/a;->o:I

    .line 264
    iget-object v0, p0, Lcom/tkay/core/common/res/a/a;->j:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    .line 265
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 266
    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/core/common/res/a/a$a;

    .line 267
    invoke-virtual {v1, p1, p2}, Lcom/tkay/core/common/res/a/a$a;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 269
    :cond_0
    invoke-direct {p0}, Lcom/tkay/core/common/res/a/a;->j()V

    .line 271
    iget-object v0, p0, Lcom/tkay/core/common/res/a/a;->k:Lcom/tkay/core/common/res/a/a$b;

    if-eqz v0, :cond_1

    .line 272
    iget-object v1, p0, Lcom/tkay/core/common/res/a/a;->k:Lcom/tkay/core/common/res/a/a$b;

    iget-wide v4, p0, Lcom/tkay/core/common/res/a/a;->i:J

    iget-wide v6, p0, Lcom/tkay/core/common/res/a/a;->e:J

    iget-wide v8, p0, Lcom/tkay/core/common/res/a/a;->f:J

    iget-wide v10, p0, Lcom/tkay/core/common/res/a/a;->h:J

    move-object v2, p1

    move-object v3, p2

    invoke-virtual/range {v1 .. v11}, Lcom/tkay/core/common/res/a/a$b;->a(Ljava/lang/String;Ljava/lang/String;JJJJ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 274
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private declared-synchronized b(I)Z
    .locals 3

    monitor-enter p0

    .line 138
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/core/common/res/a/a;->s:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 139
    monitor-exit p0

    return v1

    .line 141
    :cond_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/core/common/res/a/a;->b:Lcom/tkay/core/common/res/a/b;

    iget v0, v0, Lcom/tkay/core/common/res/a/b;->c:I

    const/4 v2, 0x2

    if-ne v0, v2, :cond_1

    iget-object v0, p0, Lcom/tkay/core/common/res/a/a;->b:Lcom/tkay/core/common/res/a/b;

    iget v0, v0, Lcom/tkay/core/common/res/a/b;->a:I
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-lt p1, v0, :cond_1

    const/4 p1, 0x0

    .line 142
    monitor-exit p0

    return p1

    .line 144
    :cond_1
    monitor-exit p0

    return v1

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method private g()I
    .locals 1

    .line 86
    iget v0, p0, Lcom/tkay/core/common/res/a/a;->o:I

    return v0
.end method

.method private h()V
    .locals 3

    .line 110
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/d;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/d;

    move-result-object v0

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/res/d;->a(I)Ljava/lang/String;

    move-result-object v0

    .line 111
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v0, ""

    const-string v1, "without saveDirectory"

    .line 112
    invoke-direct {p0, v0, v1}, Lcom/tkay/core/common/res/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 116
    :cond_0
    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 117
    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v0

    if-nez v0, :cond_1

    .line 118
    invoke-virtual {v2}, Ljava/io/File;->mkdirs()Z

    .line 121
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/d;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/d;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/core/common/res/a/a;->c:Ljava/lang/String;

    .line 3116
    invoke-static {v2}, Lcom/tkay/core/common/l/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 121
    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/res/d;->b(ILjava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/res/a/a;->r:Ljava/lang/String;

    .line 122
    new-instance v0, Ljava/io/File;

    iget-object v1, p0, Lcom/tkay/core/common/res/a/a;->r:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 123
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 124
    invoke-virtual {v0}, Ljava/io/File;->length()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/core/common/res/a/a;->q:J

    :cond_2
    return-void
.end method

.method private i()Z
    .locals 4

    .line 129
    iget v0, p0, Lcom/tkay/core/common/res/a/a;->p:I

    const/4 v1, 0x0

    const/16 v2, 0x64

    if-ne v0, v2, :cond_0

    .line 130
    iget-wide v2, p0, Lcom/tkay/core/common/res/a/a;->q:J

    invoke-direct {p0, v0, v2, v3}, Lcom/tkay/core/common/res/a/a;->a(IJ)V

    .line 131
    iget v0, p0, Lcom/tkay/core/common/res/a/a;->p:I

    iget-wide v2, p0, Lcom/tkay/core/common/res/a/a;->q:J

    invoke-direct {p0, v0, v2, v3}, Lcom/tkay/core/common/res/a/a;->b(IJ)V

    return v1

    .line 134
    :cond_0
    iget v3, p0, Lcom/tkay/core/common/res/a/a;->o:I

    if-nez v3, :cond_1

    if-ge v0, v2, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    return v1
.end method

.method private declared-synchronized j()V
    .locals 1

    monitor-enter p0

    .line 277
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/res/a/a;->j:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 278
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method


# virtual methods
.method protected final a()Ljava/util/Map;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    return-object v0
.end method

.method protected final a(Lcom/tkay/core/common/l/b/b;)V
    .locals 2

    .line 246
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    const/4 v1, 0x5

    invoke-virtual {v0, p1, v1}, Lcom/tkay/core/common/l/b/a;->a(Lcom/tkay/core/common/l/b/b;I)V

    return-void
.end method

.method public final declared-synchronized a(Lcom/tkay/core/common/res/a/a$a;)V
    .locals 1

    monitor-enter p0

    .line 72
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/res/a/a;->j:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 73
    iget-object v0, p0, Lcom/tkay/core/common/res/a/a;->j:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 75
    :cond_0
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method public final declared-synchronized a(Lcom/tkay/core/common/res/a/b;)V
    .locals 2

    monitor-enter p0

    .line 61
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/common/res/a/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " setVideoUrlLoaderConfig: mReadyRate:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Lcom/tkay/core/common/res/a/b;->a:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ",mVideoCtnType:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p1, Lcom/tkay/core/common/res/a/b;->c:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 62
    iget-object v0, p0, Lcom/tkay/core/common/res/a/a;->b:Lcom/tkay/core/common/res/a/b;

    iget v0, v0, Lcom/tkay/core/common/res/a/b;->a:I

    iget v1, p1, Lcom/tkay/core/common/res/a/b;->a:I

    if-ge v0, v1, :cond_0

    .line 63
    iget-object v0, p0, Lcom/tkay/core/common/res/a/a;->b:Lcom/tkay/core/common/res/a/b;

    iget v1, p1, Lcom/tkay/core/common/res/a/b;->a:I

    iput v1, v0, Lcom/tkay/core/common/res/a/b;->a:I

    .line 66
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/res/a/a;->b:Lcom/tkay/core/common/res/a/b;

    iget v0, v0, Lcom/tkay/core/common/res/a/b;->c:I

    const/4 v1, 0x1

    if-eq v0, v1, :cond_1

    .line 67
    iget-object v0, p0, Lcom/tkay/core/common/res/a/a;->b:Lcom/tkay/core/common/res/a/b;

    iget p1, p1, Lcom/tkay/core/common/res/a/b;->c:I

    iput p1, v0, Lcom/tkay/core/common/res/a/b;->c:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 69
    :cond_1
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method protected final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 257
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/res/a/a;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method protected final a(Ljava/io/InputStream;)Z
    .locals 13

    .line 193
    iget-object v0, p0, Lcom/tkay/core/common/res/a/a;->r:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    :catchall_0
    :cond_0
    :goto_0
    move v1, v2

    goto/16 :goto_4

    :cond_1
    const/4 v0, 0x0

    .line 198
    :try_start_0
    iget-wide v3, p0, Lcom/tkay/core/common/res/a/a;->q:J

    const-wide/16 v5, 0x0

    cmp-long v3, v3, v5

    const-wide/high16 v4, 0x4059000000000000L    # 100.0

    const-wide/high16 v6, 0x3ff0000000000000L    # 1.0

    if-lez v3, :cond_2

    .line 199
    iget-wide v8, p0, Lcom/tkay/core/common/res/a/a;->q:J

    invoke-virtual {p1, v8, v9}, Ljava/io/InputStream;->skip(J)J

    .line 200
    new-instance v3, Ljava/io/FileOutputStream;

    iget-object v8, p0, Lcom/tkay/core/common/res/a/a;->r:Ljava/lang/String;

    invoke-direct {v3, v8, v1}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 201
    :try_start_1
    iget-wide v8, p0, Lcom/tkay/core/common/res/a/a;->q:J

    long-to-double v8, v8

    mul-double/2addr v8, v6

    iget-wide v10, p0, Lcom/tkay/core/common/res/a/a;->i:J

    long-to-double v10, v10

    div-double/2addr v8, v10

    mul-double/2addr v8, v4

    double-to-int v0, v8

    iput v0, p0, Lcom/tkay/core/common/res/a/a;->p:I

    .line 202
    iget-wide v8, p0, Lcom/tkay/core/common/res/a/a;->q:J

    invoke-direct {p0, v0, v8, v9}, Lcom/tkay/core/common/res/a/a;->a(IJ)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_1

    .line 204
    :cond_2
    :try_start_2
    new-instance v3, Ljava/io/FileOutputStream;

    iget-object v8, p0, Lcom/tkay/core/common/res/a/a;->r:Ljava/lang/String;

    invoke-direct {v3, v8}, Ljava/io/FileOutputStream;-><init>(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    .line 205
    :try_start_3
    iput v2, p0, Lcom/tkay/core/common/res/a/a;->p:I
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    :goto_1
    move-object v0, v3

    const/16 v3, 0x800

    :try_start_4
    new-array v3, v3, [B

    .line 210
    :goto_2
    invoke-virtual {p1, v3}, Ljava/io/InputStream;->read([B)I

    move-result v8

    const/4 v9, -0x1

    if-eq v8, v9, :cond_3

    iget v9, p0, Lcom/tkay/core/common/res/a/a;->p:I

    invoke-direct {p0, v9}, Lcom/tkay/core/common/res/a/a;->b(I)Z

    move-result v9

    if-eqz v9, :cond_3

    .line 211
    invoke-virtual {v0, v3, v2, v8}, Ljava/io/FileOutputStream;->write([BII)V

    .line 212
    iget-wide v9, p0, Lcom/tkay/core/common/res/a/a;->q:J

    int-to-long v11, v8

    add-long/2addr v9, v11

    iput-wide v9, p0, Lcom/tkay/core/common/res/a/a;->q:J

    long-to-double v8, v9

    mul-double/2addr v8, v6

    .line 213
    iget-wide v10, p0, Lcom/tkay/core/common/res/a/a;->i:J

    long-to-double v10, v10

    div-double/2addr v8, v10

    mul-double/2addr v8, v4

    double-to-int v8, v8

    iput v8, p0, Lcom/tkay/core/common/res/a/a;->p:I

    .line 214
    iget-wide v9, p0, Lcom/tkay/core/common/res/a/a;->q:J

    invoke-direct {p0, v8, v9, v10}, Lcom/tkay/core/common/res/a/a;->a(IJ)V

    goto :goto_2

    .line 216
    :cond_3
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    .line 224
    :try_start_5
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    goto :goto_4

    :catchall_1
    move-exception p1

    move-object v0, v3

    goto :goto_3

    :catchall_2
    move-exception p1

    .line 219
    :goto_3
    :try_start_6
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_4

    if-eqz v0, :cond_0

    .line 224
    :try_start_7
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    goto :goto_0

    .line 230
    :catchall_3
    :goto_4
    iget p1, p0, Lcom/tkay/core/common/res/a/a;->p:I

    iget-wide v2, p0, Lcom/tkay/core/common/res/a/a;->q:J

    invoke-direct {p0, p1, v2, v3}, Lcom/tkay/core/common/res/a/a;->b(IJ)V

    return v1

    :catchall_4
    move-exception p1

    if-eqz v0, :cond_4

    .line 224
    :try_start_8
    invoke-virtual {v0}, Ljava/io/FileOutputStream;->close()V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_5

    .line 228
    :catchall_5
    :cond_4
    throw p1
.end method

.method protected final b()V
    .locals 0

    return-void
.end method

.method protected final c()V
    .locals 1

    const/4 v0, 0x0

    .line 4082
    iput v0, p0, Lcom/tkay/core/common/res/a/a;->o:I

    return-void
.end method

.method public final e()V
    .locals 2

    .line 90
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/common/res/a/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " startRequest: canStartLoader():"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0}, Lcom/tkay/core/common/res/a/a;->i()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    .line 91
    invoke-direct {p0}, Lcom/tkay/core/common/res/a/a;->i()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 93
    invoke-direct {p0}, Lcom/tkay/core/common/res/a/a;->h()V

    const/4 v0, 0x1

    .line 2082
    iput v0, p0, Lcom/tkay/core/common/res/a/a;->o:I

    .line 95
    invoke-virtual {p0}, Lcom/tkay/core/common/res/a/a;->d()V

    :cond_0
    return-void
.end method

.method public final f()V
    .locals 2

    .line 100
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/core/common/res/a/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " startRequest: resumeRequest():"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-direct {p0}, Lcom/tkay/core/common/res/a/a;->i()Z

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const/4 v0, 0x1

    .line 101
    iput-boolean v0, p0, Lcom/tkay/core/common/res/a/a;->s:Z

    .line 102
    invoke-direct {p0}, Lcom/tkay/core/common/res/a/a;->i()Z

    move-result v1

    if-eqz v1, :cond_0

    .line 103
    invoke-direct {p0}, Lcom/tkay/core/common/res/a/a;->h()V

    .line 3082
    iput v0, p0, Lcom/tkay/core/common/res/a/a;->o:I

    .line 105
    invoke-virtual {p0}, Lcom/tkay/core/common/res/a/a;->d()V

    :cond_0
    return-void
.end method
