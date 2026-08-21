.class public abstract Lcom/tkay/expressad/exoplayer/c/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/exoplayer/c/c;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<I:",
        "Lcom/tkay/expressad/exoplayer/c/e;",
        "O:",
        "Lcom/tkay/expressad/exoplayer/c/f;",
        "E:",
        "Ljava/lang/Exception;",
        ">",
        "Ljava/lang/Object;",
        "Lcom/tkay/expressad/exoplayer/c/c<",
        "TI;TO;TE;>;"
    }
.end annotation


# instance fields
.field private final a:Ljava/lang/Thread;

.field private final b:Ljava/lang/Object;

.field private final c:Ljava/util/ArrayDeque;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayDeque<",
            "TI;>;"
        }
    .end annotation
.end field

.field private final d:Ljava/util/ArrayDeque;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayDeque<",
            "TO;>;"
        }
    .end annotation
.end field

.field private final e:[Lcom/tkay/expressad/exoplayer/c/e;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "[TI;"
        }
    .end annotation
.end field

.field private final f:[Lcom/tkay/expressad/exoplayer/c/f;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "[TO;"
        }
    .end annotation
.end field

.field private g:I

.field private h:I

.field private i:Lcom/tkay/expressad/exoplayer/c/e;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TI;"
        }
    .end annotation
.end field

.field private j:Ljava/lang/Exception;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TE;"
        }
    .end annotation
.end field

.field private k:Z

.field private l:Z

.field private m:I


# direct methods
.method private constructor <init>([Lcom/tkay/expressad/exoplayer/c/e;[Lcom/tkay/expressad/exoplayer/c/f;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "([TI;[TO;)V"
        }
    .end annotation

    .line 50
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 51
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->b:Ljava/lang/Object;

    .line 52
    new-instance v0, Ljava/util/ArrayDeque;

    invoke-direct {v0}, Ljava/util/ArrayDeque;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->c:Ljava/util/ArrayDeque;

    .line 53
    new-instance v0, Ljava/util/ArrayDeque;

    invoke-direct {v0}, Ljava/util/ArrayDeque;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->d:Ljava/util/ArrayDeque;

    .line 54
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/c/g;->e:[Lcom/tkay/expressad/exoplayer/c/e;

    .line 55
    array-length p1, p1

    iput p1, p0, Lcom/tkay/expressad/exoplayer/c/g;->g:I

    const/4 p1, 0x0

    move v0, p1

    .line 56
    :goto_0
    iget v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->g:I

    if-ge v0, v1, :cond_0

    .line 57
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->e:[Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/c/g;->h()Lcom/tkay/expressad/exoplayer/c/e;

    move-result-object v2

    aput-object v2, v1, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    .line 59
    :cond_0
    iput-object p2, p0, Lcom/tkay/expressad/exoplayer/c/g;->f:[Lcom/tkay/expressad/exoplayer/c/f;

    .line 60
    array-length p2, p2

    iput p2, p0, Lcom/tkay/expressad/exoplayer/c/g;->h:I

    .line 61
    :goto_1
    iget p2, p0, Lcom/tkay/expressad/exoplayer/c/g;->h:I

    if-ge p1, p2, :cond_1

    .line 62
    iget-object p2, p0, Lcom/tkay/expressad/exoplayer/c/g;->f:[Lcom/tkay/expressad/exoplayer/c/f;

    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/c/g;->i()Lcom/tkay/expressad/exoplayer/c/f;

    move-result-object v0

    aput-object v0, p2, p1

    add-int/lit8 p1, p1, 0x1

    goto :goto_1

    .line 64
    :cond_1
    new-instance p1, Lcom/tkay/expressad/exoplayer/c/g$1;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/exoplayer/c/g$1;-><init>(Lcom/tkay/expressad/exoplayer/c/g;)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/c/g;->a:Ljava/lang/Thread;

    .line 70
    invoke-virtual {p1}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method private a(I)V
    .locals 4

    .line 82
    iget v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->g:I

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->e:[Lcom/tkay/expressad/exoplayer/c/e;

    array-length v1, v1

    const/4 v2, 0x0

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    move v0, v2

    :goto_0
    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 83
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->e:[Lcom/tkay/expressad/exoplayer/c/e;

    array-length v1, v0

    :goto_1
    if-ge v2, v1, :cond_1

    aget-object v3, v0, v2

    .line 84
    invoke-virtual {v3, p1}, Lcom/tkay/expressad/exoplayer/c/e;->d(I)V

    add-int/lit8 v2, v2, 0x1

    goto :goto_1

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/exoplayer/c/g;)V
    .locals 1

    .line 1189
    :cond_0
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/c/g;->o()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_0

    return-void

    :catch_0
    move-exception p0

    .line 1194
    new-instance v0, Ljava/lang/IllegalStateException;

    invoke-direct {v0, p0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/Throwable;)V

    throw v0
.end method

.method private b(Lcom/tkay/expressad/exoplayer/c/e;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TI;)V"
        }
    .end annotation

    .line 265
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/c/e;->a()V

    .line 266
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->e:[Lcom/tkay/expressad/exoplayer/c/e;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->g:I

    add-int/lit8 v2, v1, 0x1

    iput v2, p0, Lcom/tkay/expressad/exoplayer/c/g;->g:I

    aput-object p1, v0, v1

    return-void
.end method

.method private b(Lcom/tkay/expressad/exoplayer/c/f;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TO;)V"
        }
    .end annotation

    .line 270
    invoke-virtual {p1}, Lcom/tkay/expressad/exoplayer/c/f;->a()V

    .line 271
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->f:[Lcom/tkay/expressad/exoplayer/c/f;

    iget v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->h:I

    add-int/lit8 v2, v1, 0x1

    iput v2, p0, Lcom/tkay/expressad/exoplayer/c/g;->h:I

    aput-object p1, v0, v1

    return-void
.end method

.method private l()V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V^TE;"
        }
    .end annotation

    .line 170
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->j:Ljava/lang/Exception;

    if-nez v0, :cond_0

    return-void

    .line 171
    :cond_0
    throw v0
.end method

.method private m()V
    .locals 1

    .line 182
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/c/g;->p()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 183
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->b:Ljava/lang/Object;

    invoke-virtual {v0}, Ljava/lang/Object;->notify()V

    :cond_0
    return-void
.end method

.method private n()V
    .locals 2

    .line 189
    :cond_0
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/c/g;->o()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/InterruptedException; {:try_start_0 .. :try_end_0} :catch_0

    if-nez v0, :cond_0

    return-void

    :catch_0
    move-exception v0

    .line 194
    new-instance v1, Ljava/lang/IllegalStateException;

    invoke-direct {v1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/Throwable;)V

    throw v1
.end method

.method private o()Z
    .locals 6

    .line 204
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->b:Ljava/lang/Object;

    monitor-enter v0

    .line 205
    :goto_0
    :try_start_0
    iget-boolean v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->l:Z

    if-nez v1, :cond_0

    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/c/g;->p()Z

    move-result v1

    if-nez v1, :cond_0

    .line 206
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->b:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->wait()V

    goto :goto_0

    .line 208
    :cond_0
    iget-boolean v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->l:Z

    const/4 v2, 0x0

    if-eqz v1, :cond_1

    .line 209
    monitor-exit v0

    return v2

    .line 211
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->c:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->removeFirst()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/c/e;

    .line 212
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/c/g;->f:[Lcom/tkay/expressad/exoplayer/c/f;

    iget v4, p0, Lcom/tkay/expressad/exoplayer/c/g;->h:I

    const/4 v5, 0x1

    sub-int/2addr v4, v5

    iput v4, p0, Lcom/tkay/expressad/exoplayer/c/g;->h:I

    aget-object v3, v3, v4

    .line 214
    iput-boolean v2, p0, Lcom/tkay/expressad/exoplayer/c/g;->k:Z

    .line 215
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 217
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/c/e;->c()Z

    move-result v0

    if-eqz v0, :cond_2

    const/4 v0, 0x4

    .line 218
    invoke-virtual {v3, v0}, Lcom/tkay/expressad/exoplayer/c/f;->b(I)V

    goto :goto_2

    .line 220
    :cond_2
    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/c/e;->b()Z

    move-result v0

    if-eqz v0, :cond_3

    const/high16 v0, -0x80000000

    .line 221
    invoke-virtual {v3, v0}, Lcom/tkay/expressad/exoplayer/c/f;->b(I)V

    .line 224
    :cond_3
    :try_start_1
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/c/g;->k()Ljava/lang/Exception;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->j:Ljava/lang/Exception;
    :try_end_1
    .catch Ljava/lang/RuntimeException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/OutOfMemoryError; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    .line 233
    :catch_0
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/c/g;->j()Ljava/lang/Exception;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->j:Ljava/lang/Exception;

    goto :goto_1

    .line 228
    :catch_1
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/c/g;->j()Ljava/lang/Exception;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->j:Ljava/lang/Exception;

    .line 235
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->j:Ljava/lang/Exception;

    if-eqz v0, :cond_4

    .line 237
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->b:Ljava/lang/Object;

    monitor-enter v0

    monitor-exit v0

    return v2

    .line 242
    :cond_4
    :goto_2
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->b:Ljava/lang/Object;

    monitor-enter v0

    .line 243
    :try_start_2
    iget-boolean v4, p0, Lcom/tkay/expressad/exoplayer/c/g;->k:Z

    if-eqz v4, :cond_5

    .line 244
    invoke-direct {p0, v3}, Lcom/tkay/expressad/exoplayer/c/g;->b(Lcom/tkay/expressad/exoplayer/c/f;)V

    goto :goto_3

    .line 245
    :cond_5
    invoke-virtual {v3}, Lcom/tkay/expressad/exoplayer/c/f;->b()Z

    move-result v4

    if-eqz v4, :cond_6

    .line 246
    iget v2, p0, Lcom/tkay/expressad/exoplayer/c/g;->m:I

    add-int/2addr v2, v5

    iput v2, p0, Lcom/tkay/expressad/exoplayer/c/g;->m:I

    .line 247
    invoke-direct {p0, v3}, Lcom/tkay/expressad/exoplayer/c/g;->b(Lcom/tkay/expressad/exoplayer/c/f;)V

    goto :goto_3

    .line 249
    :cond_6
    iget v4, p0, Lcom/tkay/expressad/exoplayer/c/g;->m:I

    iput v4, v3, Lcom/tkay/expressad/exoplayer/c/f;->b:I

    .line 250
    iput v2, p0, Lcom/tkay/expressad/exoplayer/c/g;->m:I

    .line 251
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/c/g;->d:Ljava/util/ArrayDeque;

    invoke-virtual {v2, v3}, Ljava/util/ArrayDeque;->addLast(Ljava/lang/Object;)V

    .line 254
    :goto_3
    invoke-direct {p0, v1}, Lcom/tkay/expressad/exoplayer/c/g;->b(Lcom/tkay/expressad/exoplayer/c/e;)V

    .line 255
    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return v5

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    :catchall_1
    move-exception v1

    .line 215
    monitor-exit v0

    throw v1
.end method

.method private p()Z
    .locals 1

    .line 261
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->c:Ljava/util/ArrayDeque;

    invoke-virtual {v0}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    iget v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->h:I

    if-lez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/exoplayer/c/e;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TI;)V^TE;"
        }
    .end annotation

    .line 101
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->b:Ljava/lang/Object;

    monitor-enter v0

    .line 102
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/c/g;->l()V

    .line 103
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->i:Lcom/tkay/expressad/exoplayer/c/e;

    if-ne p1, v1, :cond_0

    const/4 v1, 0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->a(Z)V

    .line 104
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->c:Ljava/util/ArrayDeque;

    invoke-virtual {v1, p1}, Ljava/util/ArrayDeque;->addLast(Ljava/lang/Object;)V

    .line 105
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/c/g;->m()V

    const/4 p1, 0x0

    .line 106
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/c/g;->i:Lcom/tkay/expressad/exoplayer/c/e;

    .line 107
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0

    throw p1
.end method

.method protected final a(Lcom/tkay/expressad/exoplayer/c/f;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TO;)V"
        }
    .end annotation

    .line 127
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->b:Ljava/lang/Object;

    monitor-enter v0

    .line 128
    :try_start_0
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/c/g;->b(Lcom/tkay/expressad/exoplayer/c/f;)V

    .line 129
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/c/g;->m()V

    .line 130
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0

    throw p1
.end method

.method public final bridge synthetic a(Ljava/lang/Object;)V
    .locals 0

    .line 26
    check-cast p1, Lcom/tkay/expressad/exoplayer/c/e;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/exoplayer/c/g;->a(Lcom/tkay/expressad/exoplayer/c/e;)V

    return-void
.end method

.method public final synthetic b()Ljava/lang/Object;
    .locals 1

    .line 26
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/c/g;->f()Lcom/tkay/expressad/exoplayer/c/e;

    move-result-object v0

    return-object v0
.end method

.method public final synthetic c()Ljava/lang/Object;
    .locals 1

    .line 26
    invoke-virtual {p0}, Lcom/tkay/expressad/exoplayer/c/g;->g()Lcom/tkay/expressad/exoplayer/c/f;

    move-result-object v0

    return-object v0
.end method

.method public final d()V
    .locals 2

    .line 135
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->b:Ljava/lang/Object;

    monitor-enter v0

    const/4 v1, 0x1

    .line 136
    :try_start_0
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->k:Z

    const/4 v1, 0x0

    .line 137
    iput v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->m:I

    .line 138
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->i:Lcom/tkay/expressad/exoplayer/c/e;

    if-eqz v1, :cond_0

    .line 139
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->i:Lcom/tkay/expressad/exoplayer/c/e;

    invoke-direct {p0, v1}, Lcom/tkay/expressad/exoplayer/c/g;->b(Lcom/tkay/expressad/exoplayer/c/e;)V

    const/4 v1, 0x0

    .line 140
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->i:Lcom/tkay/expressad/exoplayer/c/e;

    .line 142
    :cond_0
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->c:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 143
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->c:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->removeFirst()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/c/e;

    invoke-direct {p0, v1}, Lcom/tkay/expressad/exoplayer/c/g;->b(Lcom/tkay/expressad/exoplayer/c/e;)V

    goto :goto_0

    .line 145
    :cond_1
    :goto_1
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->d:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2

    .line 146
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->d:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->removeFirst()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/c/f;

    invoke-direct {p0, v1}, Lcom/tkay/expressad/exoplayer/c/g;->b(Lcom/tkay/expressad/exoplayer/c/f;)V

    goto :goto_1

    .line 148
    :cond_2
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method

.method public final e()V
    .locals 2

    .line 153
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->b:Ljava/lang/Object;

    monitor-enter v0

    const/4 v1, 0x1

    .line 154
    :try_start_0
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->l:Z

    .line 155
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->b:Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Object;->notify()V

    .line 156
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 158
    :try_start_1
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->a:Ljava/lang/Thread;

    invoke-virtual {v0}, Ljava/lang/Thread;->join()V
    :try_end_1
    .catch Ljava/lang/InterruptedException; {:try_start_1 .. :try_end_1} :catch_0

    return-void

    .line 160
    :catch_0
    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Thread;->interrupt()V

    return-void

    :catchall_0
    move-exception v1

    .line 156
    monitor-exit v0

    throw v1
.end method

.method public final f()Lcom/tkay/expressad/exoplayer/c/e;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TI;^TE;"
        }
    .end annotation

    .line 90
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->b:Ljava/lang/Object;

    monitor-enter v0

    .line 91
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/c/g;->l()V

    .line 92
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->i:Lcom/tkay/expressad/exoplayer/c/e;

    const/4 v2, 0x1

    if-nez v1, :cond_0

    move v1, v2

    goto :goto_0

    :cond_0
    const/4 v1, 0x0

    :goto_0
    invoke-static {v1}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 93
    iget v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->g:I

    if-nez v1, :cond_1

    const/4 v1, 0x0

    goto :goto_1

    .line 94
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->e:[Lcom/tkay/expressad/exoplayer/c/e;

    iget v3, p0, Lcom/tkay/expressad/exoplayer/c/g;->g:I

    sub-int/2addr v3, v2

    iput v3, p0, Lcom/tkay/expressad/exoplayer/c/g;->g:I

    aget-object v1, v1, v3

    :goto_1
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->i:Lcom/tkay/expressad/exoplayer/c/e;

    .line 95
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v1

    :catchall_0
    move-exception v1

    .line 96
    monitor-exit v0

    throw v1
.end method

.method public final g()Lcom/tkay/expressad/exoplayer/c/f;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TO;^TE;"
        }
    .end annotation

    .line 112
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/c/g;->b:Ljava/lang/Object;

    monitor-enter v0

    .line 113
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/c/g;->l()V

    .line 114
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->d:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->isEmpty()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x0

    .line 115
    monitor-exit v0

    return-object v1

    .line 117
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/c/g;->d:Ljava/util/ArrayDeque;

    invoke-virtual {v1}, Ljava/util/ArrayDeque;->removeFirst()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/exoplayer/c/f;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v1

    :catchall_0
    move-exception v1

    .line 118
    monitor-exit v0

    throw v1
.end method

.method protected abstract h()Lcom/tkay/expressad/exoplayer/c/e;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TI;"
        }
    .end annotation
.end method

.method protected abstract i()Lcom/tkay/expressad/exoplayer/c/f;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TO;"
        }
    .end annotation
.end method

.method protected abstract j()Ljava/lang/Exception;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TE;"
        }
    .end annotation
.end method

.method protected abstract k()Ljava/lang/Exception;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TE;"
        }
    .end annotation
.end method
