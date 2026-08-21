.class final Lcom/kwad/sdk/core/download/b/a$b;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/core/download/b/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "b"
.end annotation


# static fields
.field private static anX:Ljava/lang/String; = "ksad_notification_default_icon"


# instance fields
.field private Xj:Ljava/lang/String;

.field private anY:Ljava/lang/String;

.field private anZ:Ljava/lang/String;

.field private aoa:Ljava/io/File;

.field private aob:Ljava/lang/String;

.field private aoc:Z

.field private name:Ljava/lang/String;

.field private progress:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/core/download/b/a$b;->aoa:Ljava/io/File;

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/sdk/core/download/b/a$b;->aoc:Z

    return-void
.end method

.method public static AB()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/download/b/a$b;->anX:Ljava/lang/String;

    return-object v0
.end method

.method private static a(Lcom/kwad/sdk/DownloadTask;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/download/b/a$b;
    .locals 4

    new-instance v0, Lcom/kwad/sdk/core/download/b/a$b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/download/b/a$b;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/sdk/DownloadTask;->getTag()Ljava/lang/Object;

    move-result-object v1

    instance-of v2, v1, Lcom/kwad/sdk/core/download/DownloadParams;

    if-eqz v2, :cond_1

    check-cast v1, Lcom/kwad/sdk/core/download/DownloadParams;

    const-class v2, Lcom/kwad/sdk/service/a/c;

    invoke-static {v2}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/service/a/c;

    iget-object v3, v1, Lcom/kwad/sdk/core/download/DownloadParams;->mAppIcon:Ljava/lang/String;

    invoke-interface {v2, v3}, Lcom/kwad/sdk/service/a/c;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object v2

    if-eqz v2, :cond_0

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_0

    iput-object v2, v0, Lcom/kwad/sdk/core/download/b/a$b;->aoa:Ljava/io/File;

    :cond_0
    iget-object v1, v1, Lcom/kwad/sdk/core/download/DownloadParams;->mAppName:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/core/download/b/a$b;->name:Ljava/lang/String;

    :cond_1
    invoke-virtual {p0}, Lcom/kwad/sdk/DownloadTask;->isPaused()Z

    move-result v1

    iput-boolean v1, v0, Lcom/kwad/sdk/core/download/b/a$b;->aoc:Z

    iput-object p1, v0, Lcom/kwad/sdk/core/download/b/a$b;->Xj:Ljava/lang/String;

    iput-object p2, v0, Lcom/kwad/sdk/core/download/b/a$b;->aob:Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/kwad/sdk/DownloadTask;->getSmallFileSoFarBytes()I

    move-result p2

    int-to-long v1, p2

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/download/b/a;->X(J)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, " / "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/kwad/sdk/DownloadTask;->getSmallFileTotalBytes()I

    move-result p2

    int-to-long v1, p2

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/download/b/a;->X(J)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/kwad/sdk/core/download/b/a$b;->anY:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/kwad/sdk/DownloadTask;->getSmallFileTotalBytes()I

    move-result p1

    int-to-long p1, p1

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/download/b/a;->X(J)Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/kwad/sdk/core/download/b/a$b;->anZ:Ljava/lang/String;

    const/high16 p1, 0x42c80000    # 100.0f

    invoke-virtual {p0}, Lcom/kwad/sdk/DownloadTask;->getSmallFileSoFarBytes()I

    move-result p2

    int-to-float p2, p2

    mul-float/2addr p2, p1

    invoke-virtual {p0}, Lcom/kwad/sdk/DownloadTask;->getSmallFileTotalBytes()I

    move-result p0

    int-to-float p0, p0

    div-float/2addr p2, p0

    float-to-int p0, p2

    iput p0, v0, Lcom/kwad/sdk/core/download/b/a$b;->progress:I

    return-object v0
.end method

.method private static a(Lcom/kwad/sdk/core/download/DownloadParams;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/download/b/a$b;
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/download/b/a$b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/download/b/a$b;-><init>()V

    iget-object v1, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppName:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/core/download/b/a$b;->name:Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppIcon:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-class v1, Lcom/kwad/sdk/service/a/c;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/c;

    iget-object v2, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppIcon:Ljava/lang/String;

    invoke-interface {v1, v2}, Lcom/kwad/sdk/service/a/c;->bR(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Ljava/io/File;->exists()Z

    move-result v2

    if-eqz v2, :cond_0

    iput-object v1, v0, Lcom/kwad/sdk/core/download/b/a$b;->aoa:Ljava/io/File;

    :cond_0
    iput-object p1, v0, Lcom/kwad/sdk/core/download/b/a$b;->Xj:Ljava/lang/String;

    iget-wide p0, p0, Lcom/kwad/sdk/core/download/DownloadParams;->mAppSize:J

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/download/b/a;->X(J)Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/download/b/a$b;->anZ:Ljava/lang/String;

    iput-object p2, v0, Lcom/kwad/sdk/core/download/b/a$b;->aob:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic b(Lcom/kwad/sdk/DownloadTask;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/download/b/a$b;
    .locals 0

    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/core/download/b/a$b;->a(Lcom/kwad/sdk/DownloadTask;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/download/b/a$b;

    move-result-object p0

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/sdk/core/download/DownloadParams;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/download/b/a$b;
    .locals 0

    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/core/download/b/a$b;->a(Lcom/kwad/sdk/core/download/DownloadParams;Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/download/b/a$b;

    move-result-object p0

    return-object p0
.end method


# virtual methods
.method public final AC()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/b/a$b;->anY:Ljava/lang/String;

    return-object v0
.end method

.method public final AD()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/b/a$b;->anZ:Ljava/lang/String;

    return-object v0
.end method

.method public final AE()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/b/a$b;->Xj:Ljava/lang/String;

    return-object v0
.end method

.method public final AF()Ljava/io/File;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/b/a$b;->aoa:Ljava/io/File;

    return-object v0
.end method

.method public final AG()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "\u6b63\u5728\u4e0b\u8f7d "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/kwad/sdk/core/download/b/a$b;->progress:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "%"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final AH()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/b/a$b;->aob:Ljava/lang/String;

    return-object v0
.end method

.method public final getName()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/download/b/a$b;->name:Ljava/lang/String;

    if-nez v0, :cond_0

    const-string v0, ""

    :cond_0
    return-object v0
.end method

.method public final getProgress()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/core/download/b/a$b;->progress:I

    return v0
.end method

.method public final isPaused()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/core/download/b/a$b;->aoc:Z

    return v0
.end method
