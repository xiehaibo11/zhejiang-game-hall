.class public final Lcom/kwad/sdk/core/video/videoview/a;
.super Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;

# interfaces
.implements Landroid/view/TextureView$SurfaceTextureListener;
.implements Lcom/kwad/sdk/core/video/videoview/c;


# annotations
.annotation runtime Ljava/lang/Deprecated;
.end annotation


# static fields
.field private static awa:Ljava/util/concurrent/atomic/AtomicBoolean;


# instance fields
.field private RV:I

.field private RW:Lcom/kwad/sdk/core/video/a/c;

.field private RX:I

.field private RY:J

.field private Sa:Lcom/kwad/sdk/contentalliance/a/a/b;

.field private Sh:Lcom/kwad/sdk/core/video/a/c$e;

.field private Si:Lcom/kwad/sdk/core/video/a/c$h;

.field private Sj:Lcom/kwad/sdk/core/video/a/c$b;

.field private Sk:Lcom/kwad/sdk/core/video/a/c$c;

.field private Sl:Lcom/kwad/sdk/core/video/a/c$d;

.field private Sm:Lcom/kwad/sdk/core/video/a/c$a;

.field private St:Landroid/graphics/SurfaceTexture;

.field private Su:Landroid/view/Surface;

.field private avW:Landroid/media/AudioManager;

.field private avX:Lcom/kwad/sdk/core/video/a;

.field private avY:Lcom/kwad/sdk/core/video/videoview/b;

.field private avZ:Z

.field private awb:Z

.field private awc:Z

.field private awd:Landroid/widget/ImageView;

.field private cT:Lcom/kwad/sdk/contentalliance/a/a/a;

.field private hk:Landroid/widget/FrameLayout;

.field private mContext:Landroid/content/Context;

.field private mHeaders:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private mUrl:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/kwad/sdk/core/video/videoview/a;->awa:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-direct {p0, p1, v0}, Lcom/kwad/sdk/core/video/videoview/a;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    const/4 p2, 0x0

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/view/AdBasePvFrameLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p2, 0x0

    iput p2, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    iput-boolean p2, p0, Lcom/kwad/sdk/core/video/videoview/a;->avZ:Z

    iput-boolean p2, p0, Lcom/kwad/sdk/core/video/videoview/a;->awb:Z

    iput-boolean p2, p0, Lcom/kwad/sdk/core/video/videoview/a;->awc:Z

    new-instance p2, Lcom/kwad/sdk/core/video/videoview/a$1;

    invoke-direct {p2, p0}, Lcom/kwad/sdk/core/video/videoview/a$1;-><init>(Lcom/kwad/sdk/core/video/videoview/a;)V

    iput-object p2, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sh:Lcom/kwad/sdk/core/video/a/c$e;

    new-instance p2, Lcom/kwad/sdk/core/video/videoview/a$2;

    invoke-direct {p2, p0}, Lcom/kwad/sdk/core/video/videoview/a$2;-><init>(Lcom/kwad/sdk/core/video/videoview/a;)V

    iput-object p2, p0, Lcom/kwad/sdk/core/video/videoview/a;->Si:Lcom/kwad/sdk/core/video/a/c$h;

    new-instance p2, Lcom/kwad/sdk/core/video/videoview/a$3;

    invoke-direct {p2, p0}, Lcom/kwad/sdk/core/video/videoview/a$3;-><init>(Lcom/kwad/sdk/core/video/videoview/a;)V

    iput-object p2, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sj:Lcom/kwad/sdk/core/video/a/c$b;

    new-instance p2, Lcom/kwad/sdk/core/video/videoview/a$4;

    invoke-direct {p2, p0}, Lcom/kwad/sdk/core/video/videoview/a$4;-><init>(Lcom/kwad/sdk/core/video/videoview/a;)V

    iput-object p2, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sk:Lcom/kwad/sdk/core/video/a/c$c;

    new-instance p2, Lcom/kwad/sdk/core/video/videoview/a$5;

    invoke-direct {p2, p0}, Lcom/kwad/sdk/core/video/videoview/a$5;-><init>(Lcom/kwad/sdk/core/video/videoview/a;)V

    iput-object p2, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sl:Lcom/kwad/sdk/core/video/a/c$d;

    new-instance p2, Lcom/kwad/sdk/core/video/videoview/a$6;

    invoke-direct {p2, p0}, Lcom/kwad/sdk/core/video/videoview/a$6;-><init>(Lcom/kwad/sdk/core/video/videoview/a;)V

    iput-object p2, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sm:Lcom/kwad/sdk/core/video/a/c$a;

    iput-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a;->mContext:Landroid/content/Context;

    invoke-direct {p0}, Lcom/kwad/sdk/core/video/videoview/a;->init()V

    return-void
.end method

.method private DA()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->avW:Landroid/media/AudioManager;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->abandonAudioFocus(Landroid/media/AudioManager$OnAudioFocusChangeListener;)I

    iput-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->avW:Landroid/media/AudioManager;

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->release()V

    iput-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    :cond_1
    new-instance v0, Lcom/kwad/sdk/core/video/videoview/a$7;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/core/video/videoview/a$7;-><init>(Lcom/kwad/sdk/core/video/videoview/a;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->runOnUiThread(Ljava/lang/Runnable;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->Su:Landroid/view/Surface;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/view/Surface;->release()V

    iput-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->Su:Landroid/view/Surface;

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->St:Landroid/graphics/SurfaceTexture;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Landroid/graphics/SurfaceTexture;->release()V

    iput-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->St:Landroid/graphics/SurfaceTexture;

    :cond_3
    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    return-void
.end method

.method private Du()Landroid/widget/ImageView;
    .locals 3

    new-instance v0, Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    new-instance v1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v2, -0x1

    invoke-direct {v1, v2, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p0, v0, v1}, Lcom/kwad/sdk/core/video/videoview/a;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-object v0
.end method

.method private Dv()Z
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    const/4 v1, 0x6

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private Dx()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    if-nez v0, :cond_2

    const-class v0, Lcom/kwad/sdk/core/video/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/video/a/f;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/f;->xs()Z

    move-result v3

    if-eqz v3, :cond_0

    move v3, v1

    goto :goto_0

    :cond_0
    move v3, v2

    :goto_0
    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/f;->xt()Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_1

    :cond_1
    move v1, v2

    :goto_1
    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->mContext:Landroid/content/Context;

    invoke-static {v0, v2, v3, v1}, Lcom/kwad/sdk/core/video/a/e;->a(Landroid/content/Context;ZZZ)Lcom/kwad/sdk/core/video/a/c;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    const/4 v1, 0x3

    invoke-interface {v0, v1}, Lcom/kwad/sdk/core/video/a/c;->setAudioStreamType(I)V

    iget-boolean v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->awb:Z

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    const/4 v1, 0x0

    invoke-interface {v0, v1, v1}, Lcom/kwad/sdk/core/video/a/c;->setVolume(FF)V

    :cond_2
    return-void
.end method

.method private Dy()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->hk:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->avX:Lcom/kwad/sdk/core/video/a;

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->removeView(Landroid/view/View;)V

    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x1

    const/16 v2, 0x11

    invoke-direct {v0, v1, v1, v2}, Landroid/widget/FrameLayout$LayoutParams;-><init>(III)V

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->hk:Landroid/widget/FrameLayout;

    iget-object v2, p0, Lcom/kwad/sdk/core/video/videoview/a;->avX:Lcom/kwad/sdk/core/video/a;

    const/4 v3, 0x0

    invoke-virtual {v1, v2, v3, v0}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method private Dz()V
    .locals 4

    const-string v0, "KSVideoPlayerViewView"

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->hk:Landroid/widget/FrameLayout;

    const/4 v2, 0x1

    invoke-virtual {v1, v2}, Landroid/widget/FrameLayout;->setKeepScreenOn(Z)V

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    iget-object v3, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sh:Lcom/kwad/sdk/core/video/a/c$e;

    invoke-interface {v1, v3}, Lcom/kwad/sdk/core/video/a/c;->b(Lcom/kwad/sdk/core/video/a/c$e;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    iget-object v3, p0, Lcom/kwad/sdk/core/video/videoview/a;->Si:Lcom/kwad/sdk/core/video/a/c$h;

    invoke-interface {v1, v3}, Lcom/kwad/sdk/core/video/a/c;->a(Lcom/kwad/sdk/core/video/a/c$h;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    iget-object v3, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sj:Lcom/kwad/sdk/core/video/a/c$b;

    invoke-interface {v1, v3}, Lcom/kwad/sdk/core/video/a/c;->a(Lcom/kwad/sdk/core/video/a/c$b;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    iget-object v3, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sk:Lcom/kwad/sdk/core/video/a/c$c;

    invoke-interface {v1, v3}, Lcom/kwad/sdk/core/video/a/c;->a(Lcom/kwad/sdk/core/video/a/c$c;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    iget-object v3, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sl:Lcom/kwad/sdk/core/video/a/c$d;

    invoke-interface {v1, v3}, Lcom/kwad/sdk/core/video/a/c;->c(Lcom/kwad/sdk/core/video/a/c$d;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    iget-object v3, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sm:Lcom/kwad/sdk/core/video/a/c$a;

    invoke-interface {v1, v3}, Lcom/kwad/sdk/core/video/a/c;->a(Lcom/kwad/sdk/core/video/a/c$a;)V

    :try_start_0
    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sa:Lcom/kwad/sdk/contentalliance/a/a/b;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->cT:Lcom/kwad/sdk/contentalliance/a/a/a;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sa:Lcom/kwad/sdk/contentalliance/a/a/b;

    iget-object v3, p0, Lcom/kwad/sdk/core/video/videoview/a;->cT:Lcom/kwad/sdk/contentalliance/a/a/a;

    iput-object v3, v1, Lcom/kwad/sdk/contentalliance/a/a/b;->aka:Lcom/kwad/sdk/contentalliance/a/a/a;

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    iget-object v3, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sa:Lcom/kwad/sdk/contentalliance/a/a/b;

    invoke-interface {v1, v3}, Lcom/kwad/sdk/core/video/a/c;->a(Lcom/kwad/sdk/contentalliance/a/a/b;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->Su:Landroid/view/Surface;

    if-nez v1, :cond_1

    new-instance v1, Landroid/view/Surface;

    iget-object v3, p0, Lcom/kwad/sdk/core/video/videoview/a;->St:Landroid/graphics/SurfaceTexture;

    invoke-direct {v1, v3}, Landroid/view/Surface;-><init>(Landroid/graphics/SurfaceTexture;)V

    iput-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->Su:Landroid/view/Surface;

    :cond_1
    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    iget-object v3, p0, Lcom/kwad/sdk/core/video/videoview/a;->Su:Landroid/view/Surface;

    invoke-interface {v1, v3}, Lcom/kwad/sdk/core/video/a/c;->setSurface(Landroid/view/Surface;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v1}, Lcom/kwad/sdk/core/video/a/c;->prepareAsync()Z

    move-result v1

    if-eqz v1, :cond_2

    iput v2, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->avY:Lcom/kwad/sdk/core/video/videoview/b;

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/video/videoview/b;->onPlayStateChanged(I)V

    const-string v1, "STATE_PREPARING"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-void

    :catch_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    const-string v2, "\u6253\u5f00\u64ad\u653e\u5668\u53d1\u751f\u9519\u8bef"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/sdk/core/video/videoview/a;I)I
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    return p1
.end method

.method static synthetic c(Lcom/kwad/sdk/core/video/videoview/a;)I
    .locals 0

    iget p0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    return p0
.end method

.method static synthetic c(Lcom/kwad/sdk/core/video/videoview/a;I)I
    .locals 0

    iput p1, p0, Lcom/kwad/sdk/core/video/videoview/a;->RX:I

    return p1
.end method

.method private cx(Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 3

    const-class v0, Lcom/kwad/sdk/service/a/g;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/g;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->awd:Landroid/widget/ImageView;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->ck(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v1, v2, p1}, Lcom/kwad/sdk/service/a/g;->load(Landroid/widget/ImageView;Ljava/lang/Object;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :cond_0
    return-void
.end method

.method static synthetic d(Lcom/kwad/sdk/core/video/videoview/a;)Lcom/kwad/sdk/core/video/videoview/b;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/video/videoview/a;->avY:Lcom/kwad/sdk/core/video/videoview/b;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/sdk/core/video/videoview/a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/sdk/core/video/videoview/a;->avZ:Z

    return p0
.end method

.method static synthetic f(Lcom/kwad/sdk/core/video/videoview/a;)Landroid/content/Context;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/video/videoview/a;->mContext:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/sdk/core/video/videoview/a;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/video/videoview/a;->mUrl:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/sdk/core/video/videoview/a;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RY:J

    return-wide v0
.end method

.method static synthetic i(Lcom/kwad/sdk/core/video/videoview/a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/sdk/core/video/videoview/a;->awc:Z

    return p0
.end method

.method private init()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/core/video/videoview/a;->Du()Landroid/widget/ImageView;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->awd:Landroid/widget/ImageView;

    new-instance v0, Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Landroid/widget/FrameLayout;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->hk:Landroid/widget/FrameLayout;

    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->hk:Landroid/widget/FrameLayout;

    invoke-virtual {p0, v1, v0}, Lcom/kwad/sdk/core/video/videoview/a;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method static synthetic j(Lcom/kwad/sdk/core/video/videoview/a;)Lcom/kwad/sdk/core/video/a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/video/videoview/a;->avX:Lcom/kwad/sdk/core/video/a;

    return-object p0
.end method

.method static synthetic k(Lcom/kwad/sdk/core/video/videoview/a;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/video/videoview/a;->hk:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method private qJ()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->avX:Lcom/kwad/sdk/core/video/a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/sdk/core/video/a;

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->mContext:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/kwad/sdk/core/video/a;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->avX:Lcom/kwad/sdk/core/video/a;

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/video/a;->setSurfaceTextureListener(Landroid/view/TextureView$SurfaceTextureListener;)V

    :cond_0
    return-void
.end method

.method private setPlayType(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sa:Lcom/kwad/sdk/contentalliance/a/a/b;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/kwad/sdk/contentalliance/a/a/b;->videoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sa:Lcom/kwad/sdk/contentalliance/a/a/b;

    iget-object v0, v0, Lcom/kwad/sdk/contentalliance/a/a/b;->videoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    iput p1, v0, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;->mVideoPlayerType:I

    :cond_0
    return-void
.end method


# virtual methods
.method public final Dw()Z
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    const/4 v1, 0x7

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final a(Lcom/kwad/sdk/contentalliance/a/a/b;Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/contentalliance/a/a/b;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    iput-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sa:Lcom/kwad/sdk/contentalliance/a/a/b;

    iget-object p2, p1, Lcom/kwad/sdk/contentalliance/a/a/b;->videoUrl:Ljava/lang/String;

    iput-object p2, p0, Lcom/kwad/sdk/core/video/videoview/a;->mUrl:Ljava/lang/String;

    const/4 p2, 0x0

    iput-object p2, p0, Lcom/kwad/sdk/core/video/videoview/a;->mHeaders:Ljava/util/Map;

    iget-object p1, p1, Lcom/kwad/sdk/contentalliance/a/a/b;->adTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/video/videoview/a;->cx(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method

.method public final getBufferPercentage()I
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RX:I

    return v0
.end method

.method public final getController()Lcom/kwad/sdk/core/video/videoview/b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->avY:Lcom/kwad/sdk/core/video/videoview/b;

    return-object v0
.end method

.method public final getCurrentPosition()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->getCurrentPosition()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public final getDuration()J
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->getDuration()J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public final getMaxVolume()I
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->avW:Landroid/media/AudioManager;

    if-eqz v0, :cond_0

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->getStreamMaxVolume(I)I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final getVideoController()Lcom/kwad/sdk/core/video/videoview/b;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->avY:Lcom/kwad/sdk/core/video/videoview/b;

    return-object v0
.end method

.method public final getVolume()I
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->avW:Landroid/media/AudioManager;

    if-eqz v0, :cond_0

    const/4 v1, 0x3

    invoke-virtual {v0, v1}, Landroid/media/AudioManager;->getStreamVolume(I)I

    move-result v0

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final isCompleted()Z
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    const/16 v1, 0x9

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final isIdle()Z
    .locals 1

    iget v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final isPaused()Z
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    const/4 v1, 0x5

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final isPlaying()Z
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    const/4 v1, 0x4

    if-ne v0, v1, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final onSurfaceTextureAvailable(Landroid/graphics/SurfaceTexture;II)V
    .locals 0

    iget-object p2, p0, Lcom/kwad/sdk/core/video/videoview/a;->St:Landroid/graphics/SurfaceTexture;

    if-nez p2, :cond_0

    iput-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a;->St:Landroid/graphics/SurfaceTexture;

    invoke-direct {p0}, Lcom/kwad/sdk/core/video/videoview/a;->Dz()V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a;->avX:Lcom/kwad/sdk/core/video/a;

    invoke-virtual {p1, p2}, Lcom/kwad/sdk/core/video/a;->setSurfaceTexture(Landroid/graphics/SurfaceTexture;)V

    return-void
.end method

.method public final onSurfaceTextureDestroyed(Landroid/graphics/SurfaceTexture;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public final onSurfaceTextureSizeChanged(Landroid/graphics/SurfaceTexture;II)V
    .locals 0

    return-void
.end method

.method public final onSurfaceTextureUpdated(Landroid/graphics/SurfaceTexture;)V
    .locals 0

    return-void
.end method

.method public final pause()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    const/4 v2, 0x4

    const-string v3, "KSVideoPlayerViewView"

    if-ne v1, v2, :cond_1

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->pause()V

    const/4 v0, 0x5

    iput v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->avY:Lcom/kwad/sdk/core/video/videoview/b;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/video/videoview/b;->onPlayStateChanged(I)V

    const-string v0, "STATE_PAUSED"

    :goto_0
    invoke-static {v3, v0}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    const/4 v2, 0x6

    if-ne v1, v2, :cond_2

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->pause()V

    const/4 v0, 0x7

    iput v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->avY:Lcom/kwad/sdk/core/video/videoview/b;

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/video/videoview/b;->onPlayStateChanged(I)V

    const-string v0, "STATE_BUFFERING_PAUSED"

    goto :goto_0

    :cond_2
    return-void
.end method

.method public final release()V
    .locals 4

    iget-boolean v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->avZ:Z

    if-eqz v0, :cond_2

    invoke-virtual {p0}, Lcom/kwad/sdk/core/video/videoview/a;->isPlaying()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/sdk/core/video/videoview/a;->Dv()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/video/videoview/a;->Dw()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/sdk/core/video/videoview/a;->isPaused()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/video/videoview/a;->isCompleted()Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->mUrl:Ljava/lang/String;

    const-wide/16 v2, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->mContext:Landroid/content/Context;

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->mUrl:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/kwad/sdk/core/video/videoview/a;->getCurrentPosition()J

    move-result-wide v2

    :goto_1
    invoke-static {v0, v1, v2, v3}, Lcom/kwad/sdk/utils/y;->e(Landroid/content/Context;Ljava/lang/String;J)V

    :cond_2
    invoke-direct {p0}, Lcom/kwad/sdk/core/video/videoview/a;->DA()V

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->avY:Lcom/kwad/sdk/core/video/videoview/b;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/kwad/sdk/core/video/videoview/b;->reset()V

    :cond_3
    return-void
.end method

.method public final restart()V
    .locals 3

    iget v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    const-string v1, "KSVideoPlayerViewView"

    const/4 v2, 0x5

    if-ne v0, v2, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->start()V

    const/4 v0, 0x4

    iput v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    iget-object v2, p0, Lcom/kwad/sdk/core/video/videoview/a;->avY:Lcom/kwad/sdk/core/video/videoview/b;

    invoke-virtual {v2, v0}, Lcom/kwad/sdk/core/video/videoview/b;->onPlayStateChanged(I)V

    const/4 v0, 0x2

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/video/videoview/a;->setPlayType(I)V

    const-string v0, "STATE_PLAYING"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    const/4 v2, 0x7

    if-ne v0, v2, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->start()V

    const/4 v0, 0x6

    iput v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    iget-object v2, p0, Lcom/kwad/sdk/core/video/videoview/a;->avY:Lcom/kwad/sdk/core/video/videoview/b;

    invoke-virtual {v2, v0}, Lcom/kwad/sdk/core/video/videoview/b;->onPlayStateChanged(I)V

    const-string v0, "STATE_BUFFERING_PLAYING"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_1
    const/16 v2, 0x9

    if-eq v0, v2, :cond_3

    const/4 v2, -0x1

    if-ne v0, v2, :cond_2

    goto :goto_0

    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "KSVideoPlayer\u5728\u72b6\u6001\u4e3a "

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v2, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, " \u65f6\u4e0d\u80fd\u8c03\u7528restart()\u65b9\u6cd5."

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    invoke-interface {v0}, Lcom/kwad/sdk/core/video/a/c;->reset()V

    invoke-direct {p0}, Lcom/kwad/sdk/core/video/videoview/a;->Dz()V

    const/4 v0, 0x3

    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/video/videoview/a;->setPlayType(I)V

    return-void
.end method

.method public final seekTo(I)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    if-eqz v0, :cond_0

    int-to-long v1, p1

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/core/video/a/c;->seekTo(J)V

    :cond_0
    return-void
.end method

.method public final setController(Lcom/kwad/sdk/core/video/videoview/b;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->hk:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->avY:Lcom/kwad/sdk/core/video/videoview/b;

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->removeView(Landroid/view/View;)V

    iput-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a;->avY:Lcom/kwad/sdk/core/video/videoview/b;

    invoke-virtual {p1}, Lcom/kwad/sdk/core/video/videoview/b;->reset()V

    new-instance p1, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v0, -0x1

    invoke-direct {p1, v0, v0}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->hk:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/kwad/sdk/core/video/videoview/a;->avY:Lcom/kwad/sdk/core/video/videoview/b;

    invoke-virtual {v0, v1, p1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method public final setKsPlayLogParam(Lcom/kwad/sdk/contentalliance/a/a/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/video/videoview/a;->cT:Lcom/kwad/sdk/contentalliance/a/a/a;

    return-void
.end method

.method public final setLooping(Z)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/sdk/core/video/a/c;->setLooping(Z)V

    :cond_0
    return-void
.end method

.method public final setPortraitFullscreen(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/core/video/videoview/a;->awc:Z

    return-void
.end method

.method public final setVideoSoundEnable(Z)V
    .locals 1

    iput-boolean p1, p0, Lcom/kwad/sdk/core/video/videoview/a;->awb:Z

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RW:Lcom/kwad/sdk/core/video/a/c;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    const/high16 p1, 0x3f800000    # 1.0f

    invoke-interface {v0, p1, p1}, Lcom/kwad/sdk/core/video/a/c;->setVolume(FF)V

    return-void

    :cond_0
    const/4 p1, 0x0

    invoke-interface {v0, p1, p1}, Lcom/kwad/sdk/core/video/a/c;->setVolume(FF)V

    :cond_1
    return-void
.end method

.method public final setVolume(I)V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->avW:Landroid/media/AudioManager;

    if-eqz v0, :cond_0

    const/4 v1, 0x3

    const/4 v2, 0x0

    invoke-virtual {v0, v1, p1, v2}, Landroid/media/AudioManager;->setStreamVolume(III)V

    :cond_0
    return-void
.end method

.method public final start()V
    .locals 2

    iget v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->RV:I

    if-nez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/sdk/core/video/videoview/a;->Dx()V

    invoke-direct {p0}, Lcom/kwad/sdk/core/video/videoview/a;->qJ()V

    invoke-direct {p0}, Lcom/kwad/sdk/core/video/videoview/a;->Dy()V

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sa:Lcom/kwad/sdk/contentalliance/a/a/b;

    if-eqz v0, :cond_2

    iget-object v0, v0, Lcom/kwad/sdk/contentalliance/a/a/b;->videoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/video/videoview/a;->Sa:Lcom/kwad/sdk/contentalliance/a/a/b;

    iget-object v0, v0, Lcom/kwad/sdk/contentalliance/a/a/b;->videoPlayerStatus:Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/VideoPlayerStatus;->mVideoPlayerType:I

    if-nez v0, :cond_0

    const/4 v0, 0x1

    :goto_0
    invoke-direct {p0, v0}, Lcom/kwad/sdk/core/video/videoview/a;->setPlayType(I)V

    return-void

    :cond_0
    const/4 v0, 0x3

    goto :goto_0

    :cond_1
    const-string v0, "KSVideoPlayerViewView"

    const-string v1, "KSVideoPlayer\u53ea\u6709\u5728\u72b6\u6001\u4e3aSTATE_IDLE\u65f6\u624d\u80fd\u8c03\u7528start\u65b9\u6cd5."

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method
