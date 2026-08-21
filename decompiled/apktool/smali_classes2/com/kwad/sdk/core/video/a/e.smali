.class public final Lcom/kwad/sdk/core/video/a/e;
.super Ljava/lang/Object;


# static fields
.field private static RT:Z = false

.field private static final Zs:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private static avS:Ljava/util/concurrent/atomic/AtomicBoolean; = null

.field private static avT:I = -0x1

.field private static final avU:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private static avV:I


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/kwad/sdk/core/video/a/e;->Zs:Ljava/util/concurrent/atomic/AtomicBoolean;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/kwad/sdk/core/video/a/e;->avU:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method public static Ds()I
    .locals 1

    sget v0, Lcom/kwad/sdk/core/video/a/e;->avV:I

    return v0
.end method

.method private static Dt()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/video/a/e;->avS:Ljava/util/concurrent/atomic/AtomicBoolean;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    return v0

    :cond_0
    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/kwad/sdk/core/video/a/e;->avS:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    return v0
.end method

.method public static a(Landroid/content/Context;ZZZ)Lcom/kwad/sdk/core/video/a/c;
    .locals 10

    const-string p0, "MediaPlayerImpl"

    const/4 v0, 0x0

    const/4 v1, 0x1

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/core/video/a/e;->yG()Z

    move-result v2

    if-eqz v2, :cond_0

    if-eqz p2, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/video/a/e;->Dt()Z

    move-result v2

    if-eqz v2, :cond_0

    const-string v2, "constructPlayer KwaiMediaPlayer"

    invoke-static {p0, v2}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v2, Lcom/kwad/sdk/core/video/a/d;

    invoke-direct {v2}, Lcom/kwad/sdk/core/video/a/d;-><init>()V

    const/4 v3, 0x2

    sput v3, Lcom/kwad/sdk/core/video/a/e;->avV:I

    move-object v3, v2

    check-cast v3, Lcom/kwad/sdk/core/video/a/d;

    invoke-virtual {v3, p1}, Lcom/kwad/sdk/core/video/a/d;->bf(Z)V

    goto :goto_0

    :cond_0
    const-string p1, "constructPlayer AndroidMediaPlayer"

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v2, Lcom/kwad/sdk/core/video/a/b;

    invoke-direct {v2}, Lcom/kwad/sdk/core/video/a/b;-><init>()V

    sput v1, Lcom/kwad/sdk/core/video/a/e;->avV:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :goto_0
    move v7, v0

    goto :goto_1

    :catchall_0
    move-exception p1

    const-string v2, "constructPlayer exception, using AndroidMediaPlayer"

    invoke-static {p0, v2, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    sget-boolean p0, Lcom/kwad/sdk/core/video/a/e;->RT:Z

    if-nez p0, :cond_1

    sput-boolean v1, Lcom/kwad/sdk/core/video/a/e;->RT:Z

    invoke-static {p1}, Lcom/kwad/sdk/service/c;->gatherException(Ljava/lang/Throwable;)V

    :cond_1
    new-instance v2, Lcom/kwad/sdk/core/video/a/b;

    invoke-direct {v2}, Lcom/kwad/sdk/core/video/a/b;-><init>()V

    sput v1, Lcom/kwad/sdk/core/video/a/e;->avV:I

    move v7, v1

    :goto_1
    const-class p0, Lcom/kwad/sdk/service/a/e;

    invoke-static {p0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_2

    const-class p0, Lcom/kwad/sdk/service/a/e;

    invoke-static {p0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {p0}, Lcom/kwad/sdk/service/a/e;->getIsExternal()Z

    move-result p0

    if-eqz p0, :cond_2

    move v4, v1

    goto :goto_2

    :cond_2
    move v4, v0

    :goto_2
    invoke-static {}, Lcom/kwad/sdk/core/video/a/e;->yG()Z

    move-result v3

    invoke-static {}, Lcom/kwad/sdk/core/video/a/e;->Dt()Z

    move-result v6

    invoke-interface {v2}, Lcom/kwad/sdk/core/video/a/c;->getMediaPlayerType()I

    move-result v9

    move v5, p2

    move v8, p3

    invoke-static/range {v3 .. v9}, Lcom/kwad/sdk/utils/am;->a(ZZZZZZI)I

    move-result p0

    new-instance p1, Ljava/lang/StringBuilder;

    const-string p2, "player v="

    invoke-direct {p1, p2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {p0}, Ljava/lang/Integer;->toBinaryString(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->cW(Ljava/lang/String;)V

    sget p1, Lcom/kwad/sdk/core/video/a/e;->avT:I

    if-eq p1, p0, :cond_3

    sput p0, Lcom/kwad/sdk/core/video/a/e;->avT:I

    invoke-static {p0}, Lcom/kwad/sdk/core/video/a/e;->cy(I)V

    :cond_3
    return-object v2
.end method

.method private static cy(I)V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/report/r;

    const-wide/16 v1, 0x27e4

    invoke-direct {v0, v1, v2}, Lcom/kwad/sdk/core/report/r;-><init>(J)V

    iput p0, v0, Lcom/kwad/sdk/core/report/r;->arX:I

    invoke-static {v0}, Lcom/kwad/sdk/core/report/i;->a(Lcom/kwad/sdk/core/report/r;)V

    return-void
.end method

.method private static yG()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/video/a/e;->avU:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-nez v0, :cond_1

    sget-object v0, Lcom/kwad/framework/a/a;->HN:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x1

    return v0
.end method
