.class public abstract Lcom/kwad/library/solder/lib/a/f;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "<P:",
        "Lcom/kwad/library/solder/lib/a/a;",
        ">",
        "Ljava/lang/Object;"
    }
.end annotation


# instance fields
.field protected afO:Lcom/kwad/library/solder/lib/a/e;

.field protected afR:Ljava/lang/String;

.field private final afT:[B

.field protected afW:I

.field protected afX:I

.field protected afY:Ljava/lang/StringBuffer;

.field protected afZ:Ljava/lang/String;

.field protected aga:Ljava/lang/String;

.field protected agb:Z

.field protected agc:Lcom/kwad/library/solder/lib/a/a;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "TP;"
        }
    .end annotation
.end field

.field protected agd:Lcom/kwad/library/solder/lib/ext/b;

.field protected age:Ljava/lang/Throwable;

.field protected agf:Ljava/lang/String;

.field protected agg:Z

.field protected agh:J

.field protected agi:Ljava/lang/String;

.field protected agj:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/library/solder/lib/c/a;",
            ">;"
        }
    .end annotation
.end field

.field protected agk:Lcom/kwad/library/solder/lib/c/b;

.field protected mDownloadUrl:Ljava/lang/String;

.field protected mState:I

.field protected mVersion:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/library/solder/lib/a/f;->mState:I

    const/4 v1, 0x0

    iput v1, p0, Lcom/kwad/library/solder/lib/a/f;->afW:I

    new-array v1, v1, [B

    iput-object v1, p0, Lcom/kwad/library/solder/lib/a/f;->afT:[B

    new-instance v1, Ljava/lang/StringBuffer;

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Ljava/lang/StringBuffer;-><init>(Ljava/lang/String;)V

    iput-object v1, p0, Lcom/kwad/library/solder/lib/a/f;->afY:Ljava/lang/StringBuffer;

    return-void
.end method

.method public constructor <init>(Lcom/kwad/library/solder/lib/c/b;)V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/library/solder/lib/a/f;-><init>()V

    iput-object p1, p0, Lcom/kwad/library/solder/lib/a/f;->agk:Lcom/kwad/library/solder/lib/c/b;

    iget-object v0, p1, Lcom/kwad/library/solder/lib/c/b;->agy:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->afR:Ljava/lang/String;

    iget-object v0, p1, Lcom/kwad/library/solder/lib/c/b;->version:Ljava/lang/String;

    iput-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->mVersion:Ljava/lang/String;

    iget-boolean v0, p1, Lcom/kwad/library/solder/lib/c/b;->agg:Z

    iput-boolean v0, p0, Lcom/kwad/library/solder/lib/a/f;->agg:Z

    iget-object p1, p1, Lcom/kwad/library/solder/lib/c/b;->agf:Ljava/lang/String;

    iput-object p1, p0, Lcom/kwad/library/solder/lib/a/f;->agf:Ljava/lang/String;

    return-void
.end method

.method private A(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/List<",
            "Lcom/kwad/library/solder/lib/c/a;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_2

    :cond_0
    iget-object v1, p0, Lcom/kwad/library/solder/lib/a/f;->afO:Lcom/kwad/library/solder/lib/a/e;

    invoke-interface {v1}, Lcom/kwad/library/solder/lib/a/e;->wg()Lcom/kwad/library/solder/lib/a/c;

    move-result-object v1

    invoke-interface {v1, p1}, Lcom/kwad/library/solder/lib/a/c;->bA(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    new-instance v2, Ljava/io/File;

    invoke-direct {v2, v1}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v1

    if-nez v1, :cond_1

    return-object v0

    :cond_1
    invoke-virtual {v2}, Ljava/io/File;->list()[Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_5

    array-length v2, v1

    if-nez v2, :cond_2

    goto :goto_2

    :cond_2
    array-length v2, v1

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v2, :cond_4

    aget-object v4, v1, v3

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_3

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_3

    invoke-virtual {p2, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v5

    if-eqz v5, :cond_3

    iget-object v5, p0, Lcom/kwad/library/solder/lib/a/f;->afO:Lcom/kwad/library/solder/lib/a/e;

    invoke-interface {v5}, Lcom/kwad/library/solder/lib/a/e;->wg()Lcom/kwad/library/solder/lib/a/c;

    move-result-object v5

    invoke-interface {v5, p1, v4}, Lcom/kwad/library/solder/lib/a/c;->z(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_3

    new-instance v5, Lcom/kwad/library/solder/lib/c/a;

    invoke-direct {v5}, Lcom/kwad/library/solder/lib/c/a;-><init>()V

    iput-object p1, v5, Lcom/kwad/library/solder/lib/c/a;->agy:Ljava/lang/String;

    iput-object v4, v5, Lcom/kwad/library/solder/lib/c/a;->version:Ljava/lang/String;

    const/4 v4, 0x1

    iput-boolean v4, v5, Lcom/kwad/library/solder/lib/c/a;->qB:Z

    invoke-interface {v0, v5}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_3
    iget-object v5, p0, Lcom/kwad/library/solder/lib/a/f;->afO:Lcom/kwad/library/solder/lib/a/e;

    invoke-interface {v5}, Lcom/kwad/library/solder/lib/a/e;->wg()Lcom/kwad/library/solder/lib/a/c;

    move-result-object v5

    invoke-interface {v5, p1, v4}, Lcom/kwad/library/solder/lib/a/c;->u(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_4
    invoke-static {v0}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    :cond_5
    :goto_2
    return-object v0
.end method


# virtual methods
.method public final P(J)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    iput-wide p1, p0, Lcom/kwad/library/solder/lib/a/f;->agh:J

    return-void
.end method

.method public final a(Lcom/kwad/library/solder/lib/a/e;)Lcom/kwad/library/solder/lib/a/f;
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/solder/lib/a/f;->afO:Lcom/kwad/library/solder/lib/a/e;

    return-object p0
.end method

.method public final a(Lcom/kwad/library/solder/lib/ext/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/solder/lib/a/f;->agd:Lcom/kwad/library/solder/lib/ext/b;

    return-void
.end method

.method public final b(Lcom/kwad/library/solder/lib/c/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/solder/lib/a/f;->agk:Lcom/kwad/library/solder/lib/c/b;

    return-void
.end method

.method public final bD(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/solder/lib/a/f;->mVersion:Ljava/lang/String;

    return-void
.end method

.method public final bG(Ljava/lang/String;)Lcom/kwad/library/solder/lib/a/f;
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->afY:Ljava/lang/StringBuffer;

    const-string v1, " --> "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    :cond_0
    return-object p0
.end method

.method public final bH(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/solder/lib/a/f;->afZ:Ljava/lang/String;

    return-void
.end method

.method public final bI(I)Lcom/kwad/library/solder/lib/a/f;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->afT:[B

    monitor-enter v0

    :try_start_0
    iput p1, p0, Lcom/kwad/library/solder/lib/a/f;->mState:I

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/library/solder/lib/a/f;->bG(Ljava/lang/String;)Lcom/kwad/library/solder/lib/a/f;

    move-result-object p1

    return-object p1

    :catchall_0
    move-exception p1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method public final bI(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/solder/lib/a/f;->aga:Ljava/lang/String;

    return-void
.end method

.method public final bJ(I)V
    .locals 0

    if-lez p1, :cond_0

    iput p1, p0, Lcom/kwad/library/solder/lib/a/f;->afX:I

    :cond_0
    return-void
.end method

.method public final bJ(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/solder/lib/a/f;->agi:Ljava/lang/String;

    return-void
.end method

.method public final bK(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/solder/lib/a/f;->mDownloadUrl:Ljava/lang/String;

    return-void
.end method

.method public abstract bL(Ljava/lang/String;)Lcom/kwad/library/solder/lib/a/a;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")TP;"
        }
    .end annotation
.end method

.method public final c(Lcom/kwad/library/solder/lib/a/a;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(TP;)V"
        }
    .end annotation

    iput-object p1, p0, Lcom/kwad/library/solder/lib/a/f;->agc:Lcom/kwad/library/solder/lib/a/a;

    return-void
.end method

.method public final cancel()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->afT:[B

    monitor-enter v0

    const/4 v1, -0x7

    :try_start_0
    invoke-virtual {p0, v1}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    monitor-exit v0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public final getDownloadUrl()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->mDownloadUrl:Ljava/lang/String;

    return-object v0
.end method

.method public final getId()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->afR:Ljava/lang/String;

    return-object v0
.end method

.method public final getState()I
    .locals 2

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->afT:[B

    monitor-enter v0

    :try_start_0
    iget v1, p0, Lcom/kwad/library/solder/lib/a/f;->mState:I

    monitor-exit v0

    return v1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1
.end method

.method public final getVersion()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->mVersion:Ljava/lang/String;

    return-object v0
.end method

.method public final isCanceled()Z
    .locals 2

    iget v0, p0, Lcom/kwad/library/solder/lib/a/f;->mState:I

    const/4 v1, -0x7

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final j(Ljava/lang/Throwable;)Lcom/kwad/library/solder/lib/a/f;
    .locals 0

    iput-object p1, p0, Lcom/kwad/library/solder/lib/a/f;->age:Ljava/lang/Throwable;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getLocalizedMessage()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/library/solder/lib/a/f;->bG(Ljava/lang/String;)Lcom/kwad/library/solder/lib/a/f;

    move-result-object p1

    return-object p1
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "PluginRequest{mId=\'"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/library/solder/lib/a/f;->afR:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x27

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final wA()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->agi:Ljava/lang/String;

    return-object v0
.end method

.method public final wB()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/kwad/library/solder/lib/c/a;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->agj:Ljava/util/List;

    return-object v0
.end method

.method public final wC()Lcom/kwad/library/solder/lib/c/b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->agk:Lcom/kwad/library/solder/lib/c/b;

    return-object v0
.end method

.method public final wD()V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->getId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/kwad/library/solder/lib/a/f;->agj:Ljava/util/List;

    if-nez v1, :cond_0

    invoke-virtual {p0}, Lcom/kwad/library/solder/lib/a/f;->getVersion()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v0, v1}, Lcom/kwad/library/solder/lib/a/f;->A(Ljava/lang/String;Ljava/lang/String;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->agj:Ljava/util/List;

    :cond_0
    return-void
.end method

.method public final wE()V
    .locals 1

    const/4 v0, -0x3

    invoke-virtual {p0, v0}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    return-void
.end method

.method public final wp()Lcom/kwad/library/solder/lib/a/e;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->afO:Lcom/kwad/library/solder/lib/a/e;

    return-object v0
.end method

.method public final wq()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->afY:Ljava/lang/StringBuffer;

    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final wr()Ljava/lang/Throwable;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->age:Ljava/lang/Throwable;

    return-object v0
.end method

.method public final ws()Z
    .locals 3

    const/4 v0, -0x1

    invoke-virtual {p0, v0}, Lcom/kwad/library/solder/lib/a/f;->bI(I)Lcom/kwad/library/solder/lib/a/f;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->agj:Ljava/util/List;

    iget v0, p0, Lcom/kwad/library/solder/lib/a/f;->afW:I

    const/4 v1, 0x1

    add-int/2addr v0, v1

    iput v0, p0, Lcom/kwad/library/solder/lib/a/f;->afW:I

    iget v2, p0, Lcom/kwad/library/solder/lib/a/f;->afX:I

    if-gt v0, v2, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final wt()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/a/f;->agb:Z

    return v0
.end method

.method public final wu()I
    .locals 1

    iget v0, p0, Lcom/kwad/library/solder/lib/a/f;->afW:I

    return v0
.end method

.method public final wv()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->afZ:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->afZ:Ljava/lang/String;

    return-object v0

    :cond_0
    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->aga:Ljava/lang/String;

    return-object v0
.end method

.method public final ww()Lcom/kwad/library/solder/lib/a/a;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()TP;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->agc:Lcom/kwad/library/solder/lib/a/a;

    return-object v0
.end method

.method public final wx()Lcom/kwad/library/solder/lib/ext/b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->agd:Lcom/kwad/library/solder/lib/ext/b;

    return-object v0
.end method

.method public final wy()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/library/solder/lib/a/f;->agg:Z

    return v0
.end method

.method public final wz()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/library/solder/lib/a/f;->agf:Ljava/lang/String;

    return-object v0
.end method
