.class public final Lcom/kwad/framework/filedownloader/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/framework/filedownloader/a;
.implements Lcom/kwad/framework/filedownloader/a$a;
.implements Lcom/kwad/framework/filedownloader/d$a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/framework/filedownloader/c$a;
    }
.end annotation


# instance fields
.field private aaA:Z

.field volatile aaB:I

.field private aaC:Z

.field private final aaD:Ljava/lang/Object;

.field private final aaE:Ljava/lang/Object;

.field private volatile aaF:Z

.field private final aal:Lcom/kwad/framework/filedownloader/x;

.field private final aam:Lcom/kwad/framework/filedownloader/x$a;

.field private aan:I

.field private aao:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private aap:Ljava/lang/String;

.field private aaq:Ljava/lang/String;

.field private aar:Z

.field private aas:Lcom/kwad/framework/filedownloader/d/b;

.field private aat:Lcom/kwad/framework/filedownloader/i;

.field private aau:Ljava/lang/Object;

.field private aav:I

.field private aaw:Z

.field private aax:Z

.field private aay:I

.field private aaz:I

.field private final mUrl:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/framework/filedownloader/c;->aav:I

    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/c;->aaw:Z

    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/c;->aax:Z

    const/16 v1, 0x64

    iput v1, p0, Lcom/kwad/framework/filedownloader/c;->aay:I

    const/16 v1, 0xa

    iput v1, p0, Lcom/kwad/framework/filedownloader/c;->aaz:I

    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/c;->aaA:Z

    iput v0, p0, Lcom/kwad/framework/filedownloader/c;->aaB:I

    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/c;->aaC:Z

    new-instance v1, Ljava/lang/Object;

    invoke-direct {v1}, Ljava/lang/Object;-><init>()V

    iput-object v1, p0, Lcom/kwad/framework/filedownloader/c;->aaE:Ljava/lang/Object;

    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/c;->aaF:Z

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/c;->mUrl:Ljava/lang/String;

    new-instance p1, Ljava/lang/Object;

    invoke-direct {p1}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/c;->aaD:Ljava/lang/Object;

    new-instance v0, Lcom/kwad/framework/filedownloader/d;

    invoke-direct {v0, p0, p1}, Lcom/kwad/framework/filedownloader/d;-><init>(Lcom/kwad/framework/filedownloader/d$a;Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    iput-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aam:Lcom/kwad/framework/filedownloader/x$a;

    return-void
.end method

.method static synthetic a(Lcom/kwad/framework/filedownloader/c;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/framework/filedownloader/c;->aaC:Z

    return p1
.end method

.method private tp()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->sX()B

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private tq()I
    .locals 4

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/c;->tp()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->isRunning()Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Ljava/lang/IllegalStateException;

    const/4 v1, 0x1

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->getId()I

    move-result v3

    invoke-static {v3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    aput-object v3, v1, v2

    const-string v2, "This task is running %d, if you want to start the same task, please create a new one by FileDownloader.create"

    invoke-static {v2, v1}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "This task is dirty to restart, If you want to reuse this task, please invoke #reuse method manually and retry to restart again."

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v2, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-virtual {v2}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0

    :cond_1
    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->sQ()Z

    move-result v0

    if-nez v0, :cond_2

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->ti()V

    :cond_2
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->tw()V

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->getId()I

    move-result v0

    return v0
.end method

.method private tr()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aas:Lcom/kwad/framework/filedownloader/d/b;

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aaE:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/c;->aas:Lcom/kwad/framework/filedownloader/d/b;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/framework/filedownloader/d/b;

    invoke-direct {v1}, Lcom/kwad/framework/filedownloader/d/b;-><init>()V

    iput-object v1, p0, Lcom/kwad/framework/filedownloader/c;->aas:Lcom/kwad/framework/filedownloader/d/b;

    :cond_0
    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/framework/filedownloader/i;)Lcom/kwad/framework/filedownloader/a;
    .locals 2

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/c;->aat:Lcom/kwad/framework/filedownloader/i;

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const-string p1, "setListener %s"

    invoke-static {p0, p1, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    return-object p0
.end method

.method public final aS(I)Lcom/kwad/framework/filedownloader/a;
    .locals 0

    const/4 p1, 0x3

    iput p1, p0, Lcom/kwad/framework/filedownloader/c;->aav:I

    return-object p0
.end method

.method public final aT(Z)Lcom/kwad/framework/filedownloader/a;
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/framework/filedownloader/c;->aaA:Z

    return-object p0
.end method

.method public final aT(I)Z
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->getId()I

    move-result v0

    if-ne v0, p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final aU(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/a;
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, p1, v0}, Lcom/kwad/framework/filedownloader/c;->b(Ljava/lang/String;Z)Lcom/kwad/framework/filedownloader/a;

    move-result-object p1

    return-object p1
.end method

.method public final aU(Z)Lcom/kwad/framework/filedownloader/a;
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/framework/filedownloader/c;->aaw:Z

    return-object p0
.end method

.method public final aV(Ljava/lang/String;)Lcom/kwad/framework/filedownloader/a;
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aas:Lcom/kwad/framework/filedownloader/d/b;

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aaE:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/c;->aas:Lcom/kwad/framework/filedownloader/d/b;

    if-nez v1, :cond_0

    monitor-exit v0

    return-object p0

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aas:Lcom/kwad/framework/filedownloader/d/b;

    invoke-virtual {v0, p1}, Lcom/kwad/framework/filedownloader/d/b;->bh(Ljava/lang/String;)V

    return-object p0
.end method

.method public final aV(Z)Lcom/kwad/framework/filedownloader/a;
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/framework/filedownloader/c;->aax:Z

    return-object p0
.end method

.method public final aW(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/c;->aaq:Ljava/lang/String;

    return-void
.end method

.method public final b(Ljava/lang/String;Z)Lcom/kwad/framework/filedownloader/a;
    .locals 2

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/c;->aap:Ljava/lang/String;

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const-string v1, "setPath %s"

    invoke-static {p0, v1, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    iput-boolean p2, p0, Lcom/kwad/framework/filedownloader/c;->aar:Z

    if-eqz p2, :cond_1

    const/4 p1, 0x0

    goto :goto_0

    :cond_1
    new-instance p2, Ljava/io/File;

    invoke-direct {p2, p1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {p2}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object p1

    :goto_0
    iput-object p1, p0, Lcom/kwad/framework/filedownloader/c;->aaq:Ljava/lang/String;

    return-object p0
.end method

.method public final cancel()Z
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->pause()Z

    move-result v0

    return v0
.end method

.method public final e(Ljava/lang/Object;)Lcom/kwad/framework/filedownloader/a;
    .locals 2

    iput-object p1, p0, Lcom/kwad/framework/filedownloader/c;->aau:Ljava/lang/Object;

    sget-boolean v0, Lcom/kwad/framework/filedownloader/f/d;->aeI:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    const/4 v1, 0x0

    aput-object p1, v0, v1

    const-string p1, "setTag %s"

    invoke-static {p0, p1, v0}, Lcom/kwad/framework/filedownloader/f/d;->c(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    return-object p0
.end method

.method public final free()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->free()V

    invoke-static {}, Lcom/kwad/framework/filedownloader/h;->tD()Lcom/kwad/framework/filedownloader/h;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/framework/filedownloader/h;->a(Lcom/kwad/framework/filedownloader/a$a;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/c;->aaF:Z

    :cond_0
    return-void
.end method

.method public final getFilename()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aaq:Ljava/lang/String;

    return-object v0
.end method

.method public final getId()I
    .locals 3

    iget v0, p0, Lcom/kwad/framework/filedownloader/c;->aan:I

    if-eqz v0, :cond_0

    return v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aap:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->mUrl:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->mUrl:Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/framework/filedownloader/c;->aap:Ljava/lang/String;

    iget-boolean v2, p0, Lcom/kwad/framework/filedownloader/c;->aar:Z

    invoke-static {v0, v1, v2}, Lcom/kwad/framework/filedownloader/f/f;->g(Ljava/lang/String;Ljava/lang/String;Z)I

    move-result v0

    iput v0, p0, Lcom/kwad/framework/filedownloader/c;->aan:I

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method public final getPath()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aap:Ljava/lang/String;

    return-object v0
.end method

.method public final getSmallFileSoFarBytes()I
    .locals 4

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->tx()J

    move-result-wide v0

    const-wide/32 v2, 0x7fffffff

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const v0, 0x7fffffff

    return v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->tx()J

    move-result-wide v0

    long-to-int v0, v0

    return v0
.end method

.method public final getSmallFileTotalBytes()I
    .locals 4

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->getTotalBytes()J

    move-result-wide v0

    const-wide/32 v2, 0x7fffffff

    cmp-long v0, v0, v2

    if-lez v0, :cond_0

    const v0, 0x7fffffff

    return v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->getTotalBytes()J

    move-result-wide v0

    long-to-int v0, v0

    return v0
.end method

.method public final getSpeed()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->getSpeed()I

    move-result v0

    return v0
.end method

.method public final getStatusUpdateTime()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->getStatusUpdateTime()J

    move-result-wide v0

    return-wide v0
.end method

.method public final getTag()Ljava/lang/Object;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aau:Ljava/lang/Object;

    return-object v0
.end method

.method public final getTargetFilePath()Ljava/lang/String;
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->getPath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->sT()Z

    move-result v1

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->getFilename()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/kwad/framework/filedownloader/f/f;->a(Ljava/lang/String;ZLjava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->mUrl:Ljava/lang/String;

    return-object v0
.end method

.method public final isOver()Z
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->sX()B

    move-result v0

    invoke-static {v0}, Lcom/kwad/framework/filedownloader/d/d;->bA(I)Z

    move-result v0

    return v0
.end method

.method public final isRunning()Z
    .locals 1

    invoke-static {}, Lcom/kwad/framework/filedownloader/r;->tW()Lcom/kwad/framework/filedownloader/r;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/framework/filedownloader/r;->ua()Lcom/kwad/framework/filedownloader/v;

    move-result-object v0

    invoke-interface {v0, p0}, Lcom/kwad/framework/filedownloader/v;->d(Lcom/kwad/framework/filedownloader/a$a;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->sX()B

    move-result v0

    invoke-static {v0}, Lcom/kwad/framework/filedownloader/d/d;->bB(I)Z

    move-result v0

    return v0
.end method

.method public final m(Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/framework/filedownloader/a;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/c;->tr()V

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aas:Lcom/kwad/framework/filedownloader/d/b;

    invoke-virtual {v0, p1, p2}, Lcom/kwad/framework/filedownloader/d/b;->o(Ljava/lang/String;Ljava/lang/String;)V

    return-object p0
.end method

.method public final pause()Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aaD:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    iget-object v1, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v1}, Lcom/kwad/framework/filedownloader/x;->pause()Z

    move-result v1

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public final sO()Lcom/kwad/framework/filedownloader/a$b;
    .locals 2

    new-instance v0, Lcom/kwad/framework/filedownloader/c$a;

    const/4 v1, 0x0

    invoke-direct {v0, p0, v1}, Lcom/kwad/framework/filedownloader/c$a;-><init>(Lcom/kwad/framework/filedownloader/c;B)V

    return-object v0
.end method

.method public final sP()Z
    .locals 3

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->isRunning()Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    new-array v0, v1, [Ljava/lang/Object;

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->getId()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v0, v2

    const-string v1, "This task[%d] is running, if you want start the same task, please create a new one by FileDownloader#create"

    invoke-static {p0, v1, v0}, Lcom/kwad/framework/filedownloader/f/d;->d(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)V

    return v2

    :cond_0
    iput v2, p0, Lcom/kwad/framework/filedownloader/c;->aaB:I

    iput-boolean v2, p0, Lcom/kwad/framework/filedownloader/c;->aaC:Z

    iput-boolean v2, p0, Lcom/kwad/framework/filedownloader/c;->aaF:Z

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->reset()V

    return v1
.end method

.method public final sQ()Z
    .locals 1

    iget v0, p0, Lcom/kwad/framework/filedownloader/c;->aaB:I

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final sR()I
    .locals 1

    iget v0, p0, Lcom/kwad/framework/filedownloader/c;->aay:I

    return v0
.end method

.method public final sS()I
    .locals 1

    iget v0, p0, Lcom/kwad/framework/filedownloader/c;->aaz:I

    return v0
.end method

.method public final sT()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/c;->aar:Z

    return v0
.end method

.method public final sU()Lcom/kwad/framework/filedownloader/i;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aat:Lcom/kwad/framework/filedownloader/i;

    return-object v0
.end method

.method public final sV()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->tx()J

    move-result-wide v0

    return-wide v0
.end method

.method public final sW()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->getTotalBytes()J

    move-result-wide v0

    return-wide v0
.end method

.method public final sX()B
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->sX()B

    move-result v0

    return v0
.end method

.method public final sY()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/c;->aaA:Z

    return v0
.end method

.method public final sZ()Ljava/lang/Throwable;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->sZ()Ljava/lang/Throwable;

    move-result-object v0

    return-object v0
.end method

.method public final start()I
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/c;->aaC:Z

    if-nez v0, :cond_0

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/c;->tq()I

    move-result v0

    return v0

    :cond_0
    new-instance v0, Ljava/lang/IllegalStateException;

    const-string v1, "If you start the task manually, it means this task doesn\'t belong to a queue, so you must not invoke BaseDownloadTask#ready() or InQueueTask#enqueue() before you start() this method. For detail: If this task doesn\'t belong to a queue, what is just an isolated task, you just need to invoke BaseDownloadTask#start() to start this task, that\'s all. In other words, If this task doesn\'t belong to a queue, you must not invoke BaseDownloadTask#ready() method or InQueueTask#enqueue() method before invoke BaseDownloadTask#start(), If you do that and if there is the same listener object to start a queue in another thread, this task may be assembled by the queue, in that case, when you invoke BaseDownloadTask#start() manually to start this task or this task is started by the queue, there is an exception buried in there, because this task object is started two times without declare BaseDownloadTask#reuse() : 1. you invoke BaseDownloadTask#start() manually;  2. the queue start this task automatically."

    invoke-direct {v0, v1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public final ta()I
    .locals 1

    iget v0, p0, Lcom/kwad/framework/filedownloader/c;->aav:I

    return v0
.end method

.method public final tb()I
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->tb()I

    move-result v0

    return v0
.end method

.method public final tc()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/c;->aaw:Z

    return v0
.end method

.method public final td()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aal:Lcom/kwad/framework/filedownloader/x;

    invoke-interface {v0}, Lcom/kwad/framework/filedownloader/x;->td()Z

    move-result v0

    return v0
.end method

.method public final te()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/c;->aax:Z

    return v0
.end method

.method public final tf()Lcom/kwad/framework/filedownloader/a;
    .locals 0

    return-object p0
.end method

.method public final tg()Lcom/kwad/framework/filedownloader/x$a;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aam:Lcom/kwad/framework/filedownloader/x$a;

    return-object v0
.end method

.method public final th()I
    .locals 1

    iget v0, p0, Lcom/kwad/framework/filedownloader/c;->aaB:I

    return v0
.end method

.method public final ti()V
    .locals 1

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->sU()Lcom/kwad/framework/filedownloader/i;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->sU()Lcom/kwad/framework/filedownloader/i;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->hashCode()I

    move-result v0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Ljava/lang/Object;->hashCode()I

    move-result v0

    :goto_0
    iput v0, p0, Lcom/kwad/framework/filedownloader/c;->aaB:I

    return-void
.end method

.method public final tj()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/framework/filedownloader/c;->aaF:Z

    return v0
.end method

.method public final tk()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/framework/filedownloader/c;->aaF:Z

    return-void
.end method

.method public final tl()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/framework/filedownloader/c;->tq()I

    return-void
.end method

.method public final tm()Z
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aao:Ljava/util/ArrayList;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 3

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    invoke-virtual {p0}, Lcom/kwad/framework/filedownloader/c;->getId()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    const/4 v2, 0x0

    aput-object v1, v0, v2

    invoke-super {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    aput-object v1, v0, v2

    const-string v1, "%d@%s"

    invoke-static {v1, v0}, Lcom/kwad/framework/filedownloader/f/f;->b(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final ts()Lcom/kwad/framework/filedownloader/d/b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aas:Lcom/kwad/framework/filedownloader/d/b;

    return-object v0
.end method

.method public final tt()Lcom/kwad/framework/filedownloader/a$a;
    .locals 0

    return-object p0
.end method

.method public final tu()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/framework/filedownloader/c;->aao:Ljava/util/ArrayList;

    return-object v0
.end method
