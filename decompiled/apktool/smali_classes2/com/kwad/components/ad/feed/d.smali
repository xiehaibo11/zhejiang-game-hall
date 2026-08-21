.class public final Lcom/kwad/components/ad/feed/d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/feed/d$b;,
        Lcom/kwad/components/ad/feed/d$a;
    }
.end annotation


# static fields
.field private static dO:Lcom/kwad/sdk/core/g/d;

.field private static dP:Landroid/os/Vibrator;

.field private static dQ:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/ad/feed/d$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    sput-object v0, Lcom/kwad/components/ad/feed/d;->dQ:Ljava/util/List;

    return-void
.end method

.method private static F(Landroid/content/Context;)Landroid/os/Vibrator;
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/feed/d;->dP:Landroid/os/Vibrator;

    if-nez v0, :cond_0

    const-string v0, "vibrator"

    invoke-virtual {p0, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/os/Vibrator;

    sput-object p0, Lcom/kwad/components/ad/feed/d;->dP:Landroid/os/Vibrator;

    :cond_0
    sget-object p0, Lcom/kwad/components/ad/feed/d;->dP:Landroid/os/Vibrator;

    return-object p0
.end method

.method static synthetic G(Landroid/content/Context;)Landroid/os/Vibrator;
    .locals 0

    invoke-static {p0}, Lcom/kwad/components/ad/feed/d;->F(Landroid/content/Context;)Landroid/os/Vibrator;

    move-result-object p0

    return-object p0
.end method

.method private static a(FLandroid/content/Context;)V
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/g/d;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/g/d;-><init>(F)V

    sput-object v0, Lcom/kwad/components/ad/feed/d;->dO:Lcom/kwad/sdk/core/g/d;

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    sput-object v0, Lcom/kwad/components/ad/feed/d;->dQ:Ljava/util/List;

    sget-object v0, Lcom/kwad/components/ad/feed/d;->dO:Lcom/kwad/sdk/core/g/d;

    new-instance v1, Lcom/kwad/components/ad/feed/d$1;

    invoke-direct {v1}, Lcom/kwad/components/ad/feed/d$1;-><init>()V

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/d;->a(Lcom/kwad/sdk/core/g/b;)V

    sget-object v0, Lcom/kwad/components/ad/feed/d;->dO:Lcom/kwad/sdk/core/g/d;

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/g/d;->e(F)V

    sget-object p0, Lcom/kwad/components/ad/feed/d;->dO:Lcom/kwad/sdk/core/g/d;

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/core/g/d;->bg(Landroid/content/Context;)V

    return-void
.end method

.method public static a(FLandroid/content/Context;Lcom/kwad/components/ad/feed/d$b;)V
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/feed/d;->dO:Lcom/kwad/sdk/core/g/d;

    if-nez v0, :cond_0

    invoke-static {p0, p1}, Lcom/kwad/components/ad/feed/d;->a(FLandroid/content/Context;)V

    :cond_0
    new-instance p0, Lcom/kwad/components/ad/feed/d$a;

    invoke-direct {p0, p2, p1}, Lcom/kwad/components/ad/feed/d$a;-><init>(Lcom/kwad/components/ad/feed/d$b;Landroid/content/Context;)V

    sget-object p1, Lcom/kwad/components/ad/feed/d;->dQ:Ljava/util/List;

    invoke-interface {p1, p0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public static a(Lcom/kwad/components/ad/feed/d$b;)V
    .locals 3

    sget-object v0, Lcom/kwad/components/ad/feed/d;->dQ:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/ad/feed/d$a;

    invoke-static {v1}, Lcom/kwad/components/ad/feed/d$a;->a(Lcom/kwad/components/ad/feed/d$a;)Lcom/kwad/components/ad/feed/d$b;

    move-result-object v2

    if-ne v2, p0, :cond_0

    sget-object v2, Lcom/kwad/components/ad/feed/d;->dQ:Ljava/util/List;

    invoke-interface {v2, v1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    new-instance p0, Ljava/lang/StringBuilder;

    const-string v0, "sShakeItems size "

    invoke-direct {p0, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    sget-object v0, Lcom/kwad/components/ad/feed/d;->dQ:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    const-string v0, "KSFeedShakeManager"

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic aR()Ljava/util/List;
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/feed/d;->dQ:Ljava/util/List;

    return-object v0
.end method

.method static synthetic aS()Lcom/kwad/sdk/core/g/d;
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/feed/d;->dO:Lcom/kwad/sdk/core/g/d;

    return-object v0
.end method
