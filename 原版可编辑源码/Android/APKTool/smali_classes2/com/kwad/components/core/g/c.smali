.class public final Lcom/kwad/components/core/g/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;


# instance fields
.field private Ks:Lcom/kwad/components/core/g/b;

.field private Kt:Lcom/kwad/components/core/g/a;

.field private Ku:I

.field private Kv:I

.field private Kw:J

.field private Kx:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/video/h;",
            ">;"
        }
    .end annotation
.end field

.field private gz:J


# direct methods
.method public constructor <init>()V
    .locals 3

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput v0, p0, Lcom/kwad/components/core/g/c;->Ku:I

    const/16 v0, 0x10

    iput v0, p0, Lcom/kwad/components/core/g/c;->Kv:I

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/g/c;->Kx:Ljava/util/List;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/g/a;

    new-instance v2, Landroid/os/Handler;

    invoke-direct {v2, v0}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    invoke-direct {v1, v2}, Lcom/kwad/components/core/g/a;-><init>(Landroid/os/Handler;)V

    iput-object v1, p0, Lcom/kwad/components/core/g/c;->Kt:Lcom/kwad/components/core/g/a;

    new-instance v0, Lcom/kwad/components/core/g/c$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/g/c$1;-><init>(Lcom/kwad/components/core/g/c;)V

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/g/a;->a(Lcom/kwad/components/core/g/a$a;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/g/c;Lcom/kwad/sdk/core/imageloader/core/assist/FailReason$FailType;)I
    .locals 0

    invoke-static {p1}, Lcom/kwad/components/core/g/c;->a(Lcom/kwad/sdk/core/imageloader/core/assist/FailReason$FailType;)I

    move-result p0

    return p0
.end method

.method private static a(Lcom/kwad/sdk/core/imageloader/core/assist/FailReason$FailType;)I
    .locals 1

    sget-object v0, Lcom/kwad/components/core/g/c$6;->$SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType:[I

    invoke-virtual {p0}, Lcom/kwad/sdk/core/imageloader/core/assist/FailReason$FailType;->ordinal()I

    move-result p0

    aget p0, v0, p0

    const/4 v0, 0x1

    if-eq p0, v0, :cond_3

    const/4 v0, 0x2

    if-eq p0, v0, :cond_2

    const/4 v0, 0x3

    if-eq p0, v0, :cond_1

    const/4 v0, 0x4

    if-eq p0, v0, :cond_0

    const/4 p0, -0x1

    return p0

    :cond_0
    const/4 p0, -0x5

    return p0

    :cond_1
    const/4 p0, -0x4

    return p0

    :cond_2
    const/4 p0, -0x3

    return p0

    :cond_3
    const/4 p0, -0x2

    return p0
.end method

.method static synthetic a(Lcom/kwad/components/core/g/c;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/core/g/c;->gz:J

    return-wide v0
.end method

.method static synthetic a(Lcom/kwad/components/core/g/c;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/core/g/c;->gz:J

    return-wide p1
.end method

.method static synthetic a(Lcom/kwad/components/core/g/c;Lcom/kwad/sdk/g/a;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/g/c;->b(Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/core/g/c;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/core/g/c;->Kw:J

    return-wide v0
.end method

.method private b(Lcom/kwad/sdk/g/a;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Lcom/kwad/sdk/g/a<",
            "Lcom/kwad/components/core/video/h;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Kx:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/video/h;

    invoke-interface {p1, v1}, Lcom/kwad/sdk/g/a;->accept(Ljava/lang/Object;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private nW()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Ks:Lcom/kwad/components/core/g/b;

    if-eqz v0, :cond_0

    iget v1, p0, Lcom/kwad/components/core/g/c;->Ku:I

    iget v2, p0, Lcom/kwad/components/core/g/c;->Kv:I

    or-int/2addr v1, v2

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/g/b;->setImageGravity(I)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final c(Lcom/kwad/components/core/video/h;)V
    .locals 1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Kx:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public final d(Lcom/kwad/components/core/video/h;)V
    .locals 1

    if-eqz p1, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Kx:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    :cond_0
    return-void
.end method

.method public final destroy()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Kx:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->clear()V

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Ks:Lcom/kwad/components/core/g/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/g/b;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Ks:Lcom/kwad/components/core/g/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/g/b;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/kwad/components/core/g/c;->Ks:Lcom/kwad/components/core/g/b;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_0
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/g/c;->Ks:Lcom/kwad/components/core/g/b;

    iget-object v1, p0, Lcom/kwad/components/core/g/c;->Kt:Lcom/kwad/components/core/g/a;

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lcom/kwad/components/core/g/a;->destroy()V

    iput-object v0, p0, Lcom/kwad/components/core/g/c;->Kt:Lcom/kwad/components/core/g/a;

    :cond_1
    return-void
.end method

.method public final getImagePlayerView(Landroid/content/Context;)Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Ks:Lcom/kwad/components/core/g/b;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/g/b;

    invoke-direct {v0, p1}, Lcom/kwad/components/core/g/b;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/kwad/components/core/g/c;->Ks:Lcom/kwad/components/core/g/b;

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/core/g/c;->Ks:Lcom/kwad/components/core/g/b;

    return-object p1
.end method

.method public final getPlayDuration()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/core/g/c;->gz:J

    return-wide v0
.end method

.method public final onDecode(Ljava/lang/String;Ljava/io/InputStream;Lcom/kwad/sdk/core/imageloader/core/decode/DecodedResult;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public final onLoadingCancelled(Ljava/lang/String;Landroid/view/View;)V
    .locals 0

    return-void
.end method

.method public final onLoadingComplete(Ljava/lang/String;Landroid/view/View;Lcom/kwad/sdk/core/imageloader/core/decode/DecodedResult;)V
    .locals 0

    return-void
.end method

.method public final onLoadingFailed(Ljava/lang/String;Landroid/view/View;Lcom/kwad/sdk/core/imageloader/core/assist/FailReason;)V
    .locals 0

    new-instance p1, Lcom/kwad/components/core/g/c$5;

    invoke-direct {p1, p0, p3}, Lcom/kwad/components/core/g/c$5;-><init>(Lcom/kwad/components/core/g/c;Lcom/kwad/sdk/core/imageloader/core/assist/FailReason;)V

    invoke-direct {p0, p1}, Lcom/kwad/components/core/g/c;->b(Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method public final onLoadingStarted(Ljava/lang/String;Landroid/view/View;)V
    .locals 0

    return-void
.end method

.method public final pause()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Kt:Lcom/kwad/components/core/g/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/g/a;->pause()V

    :cond_0
    new-instance v0, Lcom/kwad/components/core/g/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/g/c$2;-><init>(Lcom/kwad/components/core/g/c;)V

    invoke-direct {p0, v0}, Lcom/kwad/components/core/g/c;->b(Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method public final play()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Kt:Lcom/kwad/components/core/g/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/g/a;->start()V

    :cond_0
    return-void
.end method

.method public final resume()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Kt:Lcom/kwad/components/core/g/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/g/a;->resume()V

    new-instance v0, Lcom/kwad/components/core/g/c$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/g/c$3;-><init>(Lcom/kwad/components/core/g/c;)V

    invoke-direct {p0, v0}, Lcom/kwad/components/core/g/c;->b(Lcom/kwad/sdk/g/a;)V

    :cond_0
    return-void
.end method

.method public final setHorizontalGravity(I)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/components/core/b/c;->al(I)I

    move-result p1

    iput p1, p0, Lcom/kwad/components/core/g/c;->Kv:I

    invoke-direct {p0}, Lcom/kwad/components/core/g/c;->nW()V

    return-void
.end method

.method public final setImageScaleType(Landroid/widget/ImageView$ScaleType;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Ks:Lcom/kwad/components/core/g/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/g/b;->setImageScaleType(Landroid/widget/ImageView$ScaleType;)V

    :cond_0
    return-void
.end method

.method public final setRadius(FFFF)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Ks:Lcom/kwad/components/core/g/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1, p2, p3, p4}, Lcom/kwad/components/core/g/b;->setRadius(FFFF)V

    :cond_0
    return-void
.end method

.method public final setURLs(Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_1

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Ks:Lcom/kwad/components/core/g/b;

    if-eqz v0, :cond_1

    invoke-virtual {v0, p1, p0}, Lcom/kwad/components/core/g/b;->a(Ljava/lang/String;Lcom/kwad/sdk/core/imageloader/core/listener/ImageLoadingListener;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final setVerticalGravity(I)V
    .locals 0

    invoke-static {p1}, Lcom/kwad/components/core/b/c;->ak(I)I

    move-result p1

    iput p1, p0, Lcom/kwad/components/core/g/c;->Kv:I

    invoke-direct {p0}, Lcom/kwad/components/core/g/c;->nW()V

    return-void
.end method

.method public final skipToEnd()V
    .locals 1

    new-instance v0, Lcom/kwad/components/core/g/c$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/g/c$4;-><init>(Lcom/kwad/components/core/g/c;)V

    invoke-direct {p0, v0}, Lcom/kwad/components/core/g/c;->b(Lcom/kwad/sdk/g/a;)V

    return-void
.end method

.method public final stop()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/g/c;->Kt:Lcom/kwad/components/core/g/a;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/g/a;->stop()V

    :cond_0
    return-void
.end method

.method public final v(J)V
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/core/g/c;->Kw:J

    return-void
.end method
