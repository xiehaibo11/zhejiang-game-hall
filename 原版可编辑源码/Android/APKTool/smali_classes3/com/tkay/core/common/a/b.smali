.class public Lcom/tkay/core/common/a/b;
.super Ljava/lang/Object;


# static fields
.field private static volatile b:Lcom/tkay/core/common/a/b;


# instance fields
.field final a:Ljava/lang/String;

.field private c:Lcom/tkay/core/common/c/f;

.field private d:Lcom/tkay/core/common/c/e;


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 21
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 15
    const-class v0, Lcom/tkay/core/common/a/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/a/b;->a:Ljava/lang/String;

    .line 22
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 23
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/f;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/f;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/a/b;->c:Lcom/tkay/core/common/c/f;

    .line 24
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/c/c;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/c/e;->a(Lcom/tkay/core/common/c/b;)Lcom/tkay/core/common/c/e;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/a/b;->d:Lcom/tkay/core/common/c/e;

    :cond_0
    return-void
.end method

.method public static a()Lcom/tkay/core/common/a/b;
    .locals 2

    .line 29
    sget-object v0, Lcom/tkay/core/common/a/b;->b:Lcom/tkay/core/common/a/b;

    if-nez v0, :cond_1

    .line 30
    const-class v0, Lcom/tkay/core/common/a/b;

    monitor-enter v0

    .line 31
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/a/b;->b:Lcom/tkay/core/common/a/b;

    if-nez v1, :cond_0

    .line 32
    new-instance v1, Lcom/tkay/core/common/a/b;

    invoke-direct {v1}, Lcom/tkay/core/common/a/b;-><init>()V

    sput-object v1, Lcom/tkay/core/common/a/b;->b:Lcom/tkay/core/common/a/b;

    .line 33
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 35
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/core/common/a/b;->b:Lcom/tkay/core/common/a/b;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/core/common/a/b;)Lcom/tkay/core/common/c/f;
    .locals 0

    .line 13
    iget-object p0, p0, Lcom/tkay/core/common/a/b;->c:Lcom/tkay/core/common/c/f;

    return-object p0
.end method

.method static synthetic b(Lcom/tkay/core/common/a/b;)Lcom/tkay/core/common/c/e;
    .locals 0

    .line 13
    iget-object p0, p0, Lcom/tkay/core/common/a/b;->d:Lcom/tkay/core/common/c/e;

    return-object p0
.end method


# virtual methods
.method public final a(I)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/a/d;",
            ">;"
        }
    .end annotation

    .line 79
    iget-object v0, p0, Lcom/tkay/core/common/a/b;->c:Lcom/tkay/core/common/c/f;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/c/f;->a(I)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public final a(Lcom/tkay/core/common/f/f;)V
    .locals 2

    .line 39
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "insertDspOfferShowRecord dspOfferId:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->U()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 40
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    new-instance v0, Lcom/tkay/core/common/a/b$1;

    invoke-direct {v0, p0, p1}, Lcom/tkay/core/common/a/b$1;-><init>(Lcom/tkay/core/common/a/b;Lcom/tkay/core/common/f/f;)V

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->b(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final b(I)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I)",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/a/d;",
            ">;"
        }
    .end annotation

    .line 106
    iget-object v0, p0, Lcom/tkay/core/common/a/b;->d:Lcom/tkay/core/common/c/e;

    invoke-virtual {v0, p1}, Lcom/tkay/core/common/c/e;->a(I)Ljava/util/List;

    move-result-object p1

    return-object p1
.end method

.method public final b()V
    .locals 1

    .line 70
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    new-instance v0, Lcom/tkay/core/common/a/b$3;

    invoke-direct {v0, p0}, Lcom/tkay/core/common/a/b$3;-><init>(Lcom/tkay/core/common/a/b;)V

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->b(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final b(Lcom/tkay/core/common/f/f;)V
    .locals 2

    .line 54
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "updateDspOfferShowRecord dspOfferId:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->U()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 55
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    new-instance v0, Lcom/tkay/core/common/a/b$2;

    invoke-direct {v0, p0, p1}, Lcom/tkay/core/common/a/b$2;-><init>(Lcom/tkay/core/common/a/b;Lcom/tkay/core/common/f/f;)V

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->b(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final c(Lcom/tkay/core/common/f/f;)V
    .locals 3

    .line 84
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->W()I

    move-result v0

    const-string v1, ",not need to record install"

    const/4 v2, 0x1

    if-ne v0, v2, :cond_2

    .line 85
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->D()I

    move-result v0

    if-eq v0, v2, :cond_1

    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->D()I

    move-result v0

    const/4 v2, 0x4

    if-ne v0, v2, :cond_0

    goto :goto_0

    .line 98
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "adxOffer.getClickType = "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->D()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void

    .line 86
    :cond_1
    :goto_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    new-instance v0, Lcom/tkay/core/common/a/b$4;

    invoke-direct {v0, p0, p1}, Lcom/tkay/core/common/a/b$4;-><init>(Lcom/tkay/core/common/a/b;Lcom/tkay/core/common/f/f;)V

    invoke-static {v0}, Lcom/tkay/core/common/b/m;->b(Ljava/lang/Runnable;)V

    return-void

    .line 101
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "adxOffer.getDspInstallIdUploadSwitch() = "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->W()I

    move-result p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method
