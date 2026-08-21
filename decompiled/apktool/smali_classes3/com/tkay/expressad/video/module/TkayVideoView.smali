.class public Lcom/tkay/expressad/video/module/TkayVideoView;
.super Lcom/tkay/expressad/video/module/TkayBaseView;

# interfaces
.implements Lcom/tkay/expressad/video/signal/f;
.implements Lcom/tkay/expressad/video/signal/j;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/video/module/TkayVideoView$a;,
        Lcom/tkay/expressad/video/module/TkayVideoView$b;
    }
.end annotation


# static fields
.field private static A:I = 0x0

.field private static B:I = 0x0

.field private static final C:Ljava/lang/String; = "2"

.field public static final TAG:Ljava/lang/String; = "TkayVideoView"

.field private static av:Z = false

.field private static final s:Ljava/lang/String; = "tkay_reward_videoview_item"

.field private static final t:I = 0x1

.field private static final u:F = 1280.0f

.field private static final v:F = 720.0f

.field private static final w:F = 0.1f

.field private static x:I

.field private static y:I

.field private static z:I


# instance fields
.field private D:Lcom/tkay/expressad/playercommon/PlayerView;

.field private E:Lcom/tkay/expressad/video/widget/SoundImageView;

.field private F:Landroid/widget/TextView;

.field private G:Landroid/view/View;

.field private H:Landroid/widget/RelativeLayout;

.field private I:Landroid/widget/ImageView;

.field private J:Landroid/widget/ProgressBar;

.field private K:Lcom/tkay/expressad/widget/FeedBackButton;

.field private L:Z

.field private M:Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;

.field private N:Lcom/tkay/expressad/video/dynview/f/a;

.field private O:I

.field private P:Landroid/widget/FrameLayout;

.field private Q:Lcom/tkay/expressad/video/module/TkayClickCTAView;

.field private R:Lcom/tkay/expressad/video/signal/factory/b;

.field private S:I

.field private T:Landroid/widget/RelativeLayout;

.field private U:Lcom/tkay/expressad/video/module/a/a;

.field private V:Z

.field private W:Z

.field private aA:I

.field private aB:Z

.field private aC:Z

.field private aD:Z

.field private aE:Z

.field private aF:Z

.field private aG:Z

.field private aH:Z

.field private aI:Z

.field private aJ:Landroid/view/animation/AlphaAnimation;

.field private aK:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

.field private aL:Lcom/tkay/expressad/video/module/TkayVideoView$b;

.field private aM:Z

.field private aN:Ljava/lang/Runnable;

.field private aa:Ljava/lang/String;

.field private ab:I

.field private ac:I

.field private ad:I

.field private ae:I

.field private af:Lcom/tkay/expressad/widget/a/b;

.field private ag:Lcom/tkay/expressad/widget/a/c;

.field private ah:Ljava/lang/String;

.field private ai:D

.field private aj:D

.field private ak:Z

.field private al:Z

.field private am:Z

.field private an:Z

.field private ao:Z

.field private ap:Z

.field private aq:Z

.field private ar:Z

.field private as:Z

.field private at:I

.field private au:Z

.field private aw:I

.field private ax:Ljava/lang/String;

.field private ay:I

.field private az:I

.field public mCampOrderViewData:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;"
        }
    .end annotation
.end field

.field public mCampaignSize:I

.field public mCurrPlayNum:I

.field public mCurrentPlayProgressTime:I

.field public mMuteSwitch:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 328
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 127
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mMuteSwitch:I

    .line 130
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->O:I

    const/4 v0, 0x1

    .line 131
    iput v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampaignSize:I

    .line 132
    iput v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    .line 133
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrentPlayProgressTime:I

    .line 190
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->V:Z

    .line 191
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->W:Z

    const-string v1, ""

    .line 216
    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    .line 238
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ak:Z

    .line 243
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->al:Z

    .line 248
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->am:Z

    .line 257
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->an:Z

    .line 262
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ao:Z

    .line 266
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ap:Z

    .line 270
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aq:Z

    .line 275
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ar:Z

    .line 286
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->as:Z

    .line 295
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->au:Z

    const/4 v1, 0x2

    .line 299
    iput v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aw:I

    .line 309
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aB:Z

    .line 310
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aC:Z

    .line 311
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aD:Z

    .line 312
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aE:Z

    .line 313
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aF:Z

    .line 314
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aG:Z

    .line 315
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aH:Z

    .line 316
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    .line 325
    new-instance v0, Lcom/tkay/expressad/video/module/TkayVideoView$b;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$b;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aL:Lcom/tkay/expressad/video/module/TkayVideoView$b;

    .line 1429
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aM:Z

    .line 2268
    new-instance p1, Lcom/tkay/expressad/video/module/TkayVideoView$3;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$3;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aN:Ljava/lang/Runnable;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    .line 332
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 127
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mMuteSwitch:I

    .line 130
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->O:I

    const/4 p2, 0x1

    .line 131
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampaignSize:I

    .line 132
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    .line 133
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrentPlayProgressTime:I

    .line 190
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->V:Z

    .line 191
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->W:Z

    const-string v0, ""

    .line 216
    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    .line 238
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ak:Z

    .line 243
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->al:Z

    .line 248
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->am:Z

    .line 257
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->an:Z

    .line 262
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ao:Z

    .line 266
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ap:Z

    .line 270
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aq:Z

    .line 275
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ar:Z

    .line 286
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->as:Z

    .line 295
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->au:Z

    const/4 v0, 0x2

    .line 299
    iput v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aw:I

    .line 309
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aB:Z

    .line 310
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aC:Z

    .line 311
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aD:Z

    .line 312
    iput-boolean p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aE:Z

    .line 313
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aF:Z

    .line 314
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aG:Z

    .line 315
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aH:Z

    .line 316
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    .line 325
    new-instance p2, Lcom/tkay/expressad/video/module/TkayVideoView$b;

    invoke-direct {p2, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$b;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aL:Lcom/tkay/expressad/video/module/TkayVideoView$b;

    .line 1429
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aM:Z

    .line 2268
    new-instance p1, Lcom/tkay/expressad/video/module/TkayVideoView$3;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$3;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aN:Ljava/lang/Runnable;

    return-void
.end method

.method static synthetic A(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/video/dynview/f/a;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->N:Lcom/tkay/expressad/video/dynview/f/a;

    return-object p0
.end method

.method static synthetic B(Lcom/tkay/expressad/video/module/TkayVideoView;)I
    .locals 0

    .line 76
    iget p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->O:I

    return p0
.end method

.method static synthetic C(Lcom/tkay/expressad/video/module/TkayVideoView;)Z
    .locals 0

    .line 76
    iget-boolean p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aG:Z

    return p0
.end method

.method static synthetic D(Lcom/tkay/expressad/video/module/TkayVideoView;)Z
    .locals 0

    .line 76
    iget-boolean p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aB:Z

    return p0
.end method

.method static synthetic E(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->M:Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;

    return-object p0
.end method

.method static synthetic F(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/view/animation/AlphaAnimation;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aJ:Landroid/view/animation/AlphaAnimation;

    return-object p0
.end method

.method static synthetic G(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ImageView;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->I:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic H(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/FrameLayout;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->P:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method private a(Lcom/tkay/expressad/foundation/d/c;)I
    .locals 3

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 2172
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ao()I

    move-result v1

    const/4 v2, -0x1

    if-eq v1, v2, :cond_0

    .line 2173
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ao()I

    move-result p1

    goto :goto_0

    .line 2175
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object p1

    .line 2176
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    invoke-virtual {p1, v1, v2, v0}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->v()I

    move-result p1

    goto :goto_0

    .line 2179
    :cond_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object p1

    .line 2180
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    invoke-virtual {p1, v1, v2, v0}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->v()I

    move-result p1

    :goto_0
    return p1
.end method

.method static synthetic a(Lcom/tkay/expressad/video/module/TkayVideoView;I)I
    .locals 0

    .line 76
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->S:I

    return p1
.end method

.method static synthetic a(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/video/module/a/a;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->U:Lcom/tkay/expressad/video/module/a/a;

    return-object p0
.end method

.method private static a(II)Ljava/lang/String;
    .locals 2

    if-eqz p1, :cond_0

    int-to-float p0, p0

    int-to-float v0, p1

    div-float/2addr p0, v0

    float-to-double v0, p0

    .line 1188
    :try_start_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {v0, v1}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->a(Ljava/lang/Double;)D

    move-result-wide v0

    invoke-virtual {p0, v0, v1}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 1190
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1193
    :cond_0
    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private a()V
    .locals 2

    const-string v0, "tkay_reward_videoview_item"

    .line 360
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->findLayout(Ljava/lang/String;)I

    move-result v0

    if-lez v0, :cond_0

    .line 362
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->c:Landroid/view/LayoutInflater;

    invoke-virtual {v1, v0, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 363
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->b()V

    :cond_0
    const/4 v0, 0x0

    .line 365
    sput-boolean v0, Lcom/tkay/expressad/video/module/TkayVideoView;->av:Z

    return-void
.end method

.method private a(Landroid/view/ViewGroup;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 374
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/c;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/c;-><init>()V

    invoke-static {p1, p2}, Lcom/tkay/expressad/video/dynview/j/c;->a(Landroid/view/View;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/video/dynview/c;

    move-result-object p2

    .line 375
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b;->a()Lcom/tkay/expressad/video/dynview/b;

    new-instance v0, Lcom/tkay/expressad/video/module/TkayVideoView$1;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayVideoView$1;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;Landroid/view/ViewGroup;Lcom/tkay/expressad/video/dynview/c;)V

    invoke-static {p2, v0}, Lcom/tkay/expressad/video/dynview/b;->a(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;)V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 2

    .line 2191
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/video/module/TkayVideoView$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$2;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/module/TkayVideoView;Z)Z
    .locals 0

    .line 76
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    return p1
.end method

.method static synthetic a(Z)Z
    .locals 0

    .line 76
    sput-boolean p0, Lcom/tkay/expressad/video/module/TkayVideoView;->av:Z

    return p0
.end method

.method static synthetic b(Lcom/tkay/expressad/video/module/TkayVideoView;Z)Ljava/lang/String;
    .locals 0

    .line 76
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->b(Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private b(Z)Ljava/lang/String;
    .locals 4

    .line 2091
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->au:Z

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    .line 2095
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 2096
    iget-boolean v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aB:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, "Alert_window_status"

    if-nez v2, :cond_1

    .line 2097
    :try_start_1
    sget v2, Lcom/tkay/expressad/foundation/g/a;->cv:I

    invoke-virtual {v0, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2100
    :cond_1
    iget-boolean v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aD:Z

    if-eqz v2, :cond_2

    .line 2101
    sget v2, Lcom/tkay/expressad/foundation/g/a;->cx:I

    invoke-virtual {v0, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2104
    :cond_2
    iget-boolean v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aC:Z

    if-eqz v2, :cond_3

    .line 2105
    sget v2, Lcom/tkay/expressad/foundation/g/a;->cw:I

    invoke-virtual {v0, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_3
    const-string v2, "complete_info"

    if-eqz p1, :cond_4

    const/4 p1, 0x1

    goto :goto_0

    :cond_4
    const/4 p1, 0x2

    .line 2108
    :goto_0
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2110
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object p1

    :catch_0
    return-object v1
.end method

.method private b()V
    .locals 3

    .line 452
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->f()Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    .line 456
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->c()V

    .line 457
    new-instance v0, Landroid/view/animation/AlphaAnimation;

    const/4 v1, 0x0

    const/high16 v2, 0x42c80000    # 100.0f

    invoke-direct {v0, v1, v2}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aJ:Landroid/view/animation/AlphaAnimation;

    const-wide/16 v1, 0xc8

    .line 458
    invoke-virtual {v0, v1, v2}, Landroid/view/animation/AlphaAnimation;->setDuration(J)V

    return-void
.end method

.method private b(I)V
    .locals 3

    if-lez p1, :cond_1

    .line 913
    new-instance v0, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {v0}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    .line 914
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object v1

    int-to-float p1, p1

    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    int-to-float p1, p1

    invoke-virtual {v0, p1}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    const/4 p1, -0x1

    .line 915
    invoke-virtual {v0, p1}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    const/4 p1, 0x0

    const/4 v1, 0x1

    .line 916
    invoke-virtual {v0, v1, p1}, Landroid/graphics/drawable/GradientDrawable;->setStroke(II)V

    .line 917
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x10

    if-lt p1, v2, :cond_0

    .line 918
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->setBackground(Landroid/graphics/drawable/Drawable;)V

    .line 919
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/playercommon/PlayerView;->setBackground(Landroid/graphics/drawable/Drawable;)V

    goto :goto_0

    .line 921
    :cond_0
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 922
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/playercommon/PlayerView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 924
    :goto_0
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x15

    if-lt p1, v0, :cond_1

    .line 925
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setClipToOutline(Z)V

    .line 926
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->setClipToOutline(Z)V

    :cond_1
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/video/module/TkayVideoView;)V
    .locals 0

    .line 76
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->b()V

    return-void
.end method

.method private b(II)Z
    .locals 2

    .line 1199
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->f(Landroid/content/Context;)I

    move-result v0

    .line 1200
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->e(Landroid/content/Context;)I

    move-result v1

    if-lez p1, :cond_0

    if-lez p2, :cond_0

    if-lt v0, p1, :cond_0

    if-lt v1, p2, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method static synthetic c(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/playercommon/PlayerView;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/expressad/video/module/TkayVideoView;)Z
    .locals 0

    .line 76
    iget-boolean p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->au:Z

    return p0
.end method

.method private e()V
    .locals 9

    .line 560
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->au:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/16 v1, 0x8

    const-string v2, ""

    const/4 v3, 0x2

    if-eqz v0, :cond_e

    :try_start_1
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ay:I

    sget v4, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-eq v0, v4, :cond_0

    iget v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ay:I

    sget v4, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-ne v0, v4, :cond_e

    .line 561
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aB:Z

    if-eqz v0, :cond_2

    .line 562
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ay:I

    sget v1, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-ne v0, v1, :cond_1

    .line 564
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_1

    .line 565
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aF:Z

    invoke-direct {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->b(Z)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v3, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_1
    return-void

    .line 570
    :cond_2
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ay:I

    sget v4, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-ne v0, v4, :cond_4

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aH:Z

    if-eqz v0, :cond_4

    .line 571
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_3

    .line 572
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aF:Z

    invoke-direct {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->b(Z)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v3, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_3
    return-void

    .line 578
    :cond_4
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aE:Z

    if-eqz v0, :cond_d

    .line 579
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->getCurPosition()I

    move-result v0

    div-int/lit16 v0, v0, 0x3e8

    .line 580
    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v4}, Lcom/tkay/expressad/playercommon/PlayerView;->getDuration()I

    move-result v4

    if-nez v4, :cond_5

    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->bi()I

    move-result v4

    goto :goto_0

    :cond_5
    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v4}, Lcom/tkay/expressad/playercommon/PlayerView;->getDuration()I

    move-result v4

    :goto_0
    int-to-float v5, v0

    int-to-float v4, v4

    div-float/2addr v5, v4

    const/high16 v4, 0x42c80000    # 100.0f

    mul-float/2addr v5, v4

    float-to-int v4, v5

    .line 584
    iget v5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ay:I

    sget v6, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-ne v5, v6, :cond_a

    .line 585
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->h()V

    .line 588
    iget v5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->az:I

    sget v6, Lcom/tkay/expressad/foundation/g/a;->ct:I

    if-ne v5, v6, :cond_7

    iget v5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aA:I

    if-lt v4, v5, :cond_7

    .line 589
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_6

    .line 590
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aF:Z

    invoke-direct {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->b(Z)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v3, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_6
    return-void

    .line 596
    :cond_7
    iget v5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->az:I

    sget v6, Lcom/tkay/expressad/foundation/g/a;->cu:I

    if-ne v5, v6, :cond_9

    iget v5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aA:I

    if-lt v0, v5, :cond_9

    .line 597
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_8

    .line 598
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aF:Z

    invoke-direct {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->b(Z)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v3, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_8
    return-void

    .line 602
    :cond_9
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v3, :cond_a

    .line 603
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-interface {v3, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 608
    :cond_a
    iget v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ay:I

    sget v5, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-ne v3, v5, :cond_d

    .line 610
    iget v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->az:I

    sget v5, Lcom/tkay/expressad/foundation/g/a;->ct:I

    if-ne v3, v5, :cond_c

    iget v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aA:I

    if-lt v4, v3, :cond_c

    .line 611
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->h()V

    .line 612
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_b

    .line 613
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_b
    return-void

    .line 619
    :cond_c
    iget v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->az:I

    sget v4, Lcom/tkay/expressad/foundation/g/a;->cu:I

    if-ne v3, v4, :cond_d

    iget v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aA:I

    if-lt v0, v3, :cond_d

    .line 620
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->h()V

    .line 621
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_d

    .line 622
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_d
    return-void

    .line 635
    :cond_e
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_15

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v0

    if-eq v0, v3, :cond_15

    .line 636
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->i()I

    move-result v0

    .line 637
    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v4}, Lcom/tkay/expressad/playercommon/PlayerView;->getCurPosition()I

    move-result v4

    div-int/lit16 v4, v4, 0x3e8

    .line 640
    iget-object v5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v5

    const/4 v6, 0x5

    const/4 v7, 0x0

    const/4 v8, 0x1

    if-ne v5, v6, :cond_10

    iget v5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    if-le v5, v8, :cond_10

    if-eqz v0, :cond_12

    if-lez v0, :cond_12

    if-ge v4, v0, :cond_12

    :cond_f
    :goto_1
    move v7, v8

    goto :goto_2

    :cond_10
    if-lez v0, :cond_11

    if-lt v4, v0, :cond_f

    :cond_11
    if-nez v0, :cond_12

    goto :goto_1

    :cond_12
    :goto_2
    if-eqz v7, :cond_13

    .line 649
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ad:I

    if-ne v0, v8, :cond_13

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->as:Z

    if-nez v0, :cond_13

    .line 650
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->h()V

    .line 651
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_14

    .line 652
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void

    .line 655
    :cond_13
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_14

    .line 656
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-interface {v0, v3, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_14
    return-void

    .line 660
    :cond_15
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_16

    .line 661
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-interface {v0, v3, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :cond_16
    return-void

    :catch_0
    move-exception v0

    .line 665
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic e(Lcom/tkay/expressad/video/module/TkayVideoView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 76
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aH:Z

    return v0
.end method

.method private f()Z
    .locals 5

    const/4 v0, 0x0

    .line 1235
    :try_start_0
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    const-string v2, "tkay_vfpv"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/playercommon/PlayerView;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    .line 1236
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    const-string v2, "tkay_sound_switch"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/video/widget/SoundImageView;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->E:Lcom/tkay/expressad/video/widget/SoundImageView;

    .line 1237
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    const-string v2, "tkay_tv_count"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->F:Landroid/widget/TextView;

    .line 1238
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    const-string v2, "tkay_rl_playing_close"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->G:Landroid/view/View;

    const/4 v2, 0x4

    .line 1239
    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 1240
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    const-string v3, "tkay_top_control"

    invoke-virtual {p0, v1, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->H:Landroid/widget/RelativeLayout;

    .line 1241
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    const-string v3, "tkay_videoview_bg"

    invoke-virtual {p0, v1, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->I:Landroid/widget/ImageView;

    .line 1242
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    const-string v3, "tkay_video_progress_bar"

    invoke-virtual {p0, v1, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ProgressBar;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->J:Landroid/widget/ProgressBar;

    .line 1243
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    const-string v3, "tkay_native_endcard_feed_btn"

    invoke-virtual {p0, v1, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/widget/FeedBackButton;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->K:Lcom/tkay/expressad/widget/FeedBackButton;

    .line 1246
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    const-string v3, "tkay_reward_segment_progressbar"

    invoke-virtual {p0, v1, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->M:Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;

    .line 1247
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    const-string v3, "tkay_reward_cta_layout"

    invoke-virtual {p0, v1, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/FrameLayout;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->P:Landroid/widget/FrameLayout;

    .line 1248
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    const-string v3, "tkay_animation_click_view"

    invoke-virtual {p0, v1, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aK:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    .line 1249
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aI:Z

    const-string v3, "tkay_reward_moreoffer_layout"

    invoke-virtual {p0, v1, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->T:Landroid/widget/RelativeLayout;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 1252
    :try_start_1
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aE()Ljava/lang/String;

    move-result-object v1

    .line 1253
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    const-string v1, "https://mores.toponad.com/image/default/mintegral_logo.png"

    .line 1256
    :cond_0
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    .line 1258
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    invoke-static {v3}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v3

    new-instance v4, Lcom/tkay/expressad/video/module/TkayVideoView$10;

    invoke-direct {v4, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$10;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    invoke-virtual {v3, v1, v4}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 1285
    :try_start_2
    sget-boolean v3, Lcom/tkay/expressad/b;->a:Z

    if-eqz v3, :cond_1

    .line 1286
    invoke-virtual {v1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_1
    :goto_0
    new-array v1, v2, [Landroid/view/View;

    .line 1289
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    aput-object v2, v1, v0

    const/4 v2, 0x1

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->E:Lcom/tkay/expressad/video/widget/SoundImageView;

    aput-object v3, v1, v2

    const/4 v2, 0x2

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->F:Landroid/widget/TextView;

    aput-object v3, v1, v2

    const/4 v2, 0x3

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->G:Landroid/view/View;

    aput-object v3, v1, v2

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->isNotNULL([Landroid/view/View;)Z

    move-result v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    return v0

    :catchall_0
    move-exception v1

    .line 1291
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return v0
.end method

.method static synthetic f(Lcom/tkay/expressad/video/module/TkayVideoView;)Z
    .locals 0

    .line 76
    iget-boolean p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aE:Z

    return p0
.end method

.method private g()V
    .locals 7

    .line 1297
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->U()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 1298
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->U()Ljava/lang/String;

    move-result-object v0

    const-string v1, "x"

    .line 1300
    invoke-virtual {v0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 1301
    array-length v1, v0

    const/4 v2, 0x2

    const-wide/16 v3, 0x0

    if-ne v1, v2, :cond_2

    const/4 v1, 0x0

    .line 1302
    aget-object v2, v0, v1

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->b(Ljava/lang/String;)D

    move-result-wide v5

    cmpl-double v2, v5, v3

    if-lez v2, :cond_0

    .line 1303
    aget-object v1, v0, v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->b(Ljava/lang/String;)D

    move-result-wide v1

    iput-wide v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    :cond_0
    const/4 v1, 0x1

    .line 1305
    aget-object v2, v0, v1

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->b(Ljava/lang/String;)D

    move-result-wide v5

    cmpl-double v2, v5, v3

    if-lez v2, :cond_1

    .line 1306
    aget-object v0, v0, v1

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->b(Ljava/lang/String;)D

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D

    .line 1308
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "TkayBaseView mVideoW:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-wide v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v1, "  mVideoH:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    .line 1310
    :cond_2
    iget-wide v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    cmpg-double v0, v0, v3

    if-gtz v0, :cond_3

    const-wide/high16 v0, 0x4094000000000000L    # 1280.0

    .line 1311
    iput-wide v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    .line 1313
    :cond_3
    iget-wide v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D

    cmpg-double v0, v0, v3

    if-gtz v0, :cond_4

    const-wide v0, 0x4086800000000000L    # 720.0

    .line 1314
    iput-wide v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D

    :cond_4
    return-void
.end method

.method static synthetic g(Lcom/tkay/expressad/video/module/TkayVideoView;)V
    .locals 0

    .line 76
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->e()V

    return-void
.end method

.method private h()V
    .locals 5

    .line 1339
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    if-eqz v0, :cond_2

    .line 1340
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->W:Z

    const/4 v2, 0x0

    if-nez v1, :cond_1

    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->V:Z

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    move v1, v2

    goto :goto_1

    :cond_1
    :goto_0
    const/4 v1, 0x1

    :goto_1
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->setIsCovered(Z)V

    .line 1341
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->onPause()V

    .line 1343
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aw()Z

    move-result v0

    if-nez v0, :cond_2

    .line 1344
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ax()V

    .line 1345
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/n;->m()[Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v1, v3, v4, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception v0

    .line 1353
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic h(Lcom/tkay/expressad/video/module/TkayVideoView;)Z
    .locals 1

    const/4 v0, 0x0

    .line 76
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->V:Z

    return v0
.end method

.method private i()V
    .locals 3

    .line 1359
    :try_start_0
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->al:Z

    if-nez v0, :cond_1

    .line 1372
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->playVideo()Z

    move-result v0

    .line 1380
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->J()I

    move-result v1

    const/4 v2, 0x2

    if-eq v1, v2, :cond_0

    if-nez v0, :cond_0

    .line 1383
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aL:Lcom/tkay/expressad/video/module/TkayVideoView$b;

    if-eqz v0, :cond_0

    .line 1384
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aL:Lcom/tkay/expressad/video/module/TkayVideoView$b;

    const-string v1, "play video failed"

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView$b;->onPlayError(Ljava/lang/String;)V

    :cond_0
    const/4 v0, 0x1

    .line 1388
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->al:Z

    return-void

    .line 1390
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->W:Z

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->V:Z

    if-nez v0, :cond_2

    .line 1391
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->setIsCovered(Z)V

    .line 1392
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->onResume()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-void

    :catch_0
    move-exception v0

    .line 1404
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic i(Lcom/tkay/expressad/video/module/TkayVideoView;)Z
    .locals 0

    .line 76
    iget-boolean p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->V:Z

    return p0
.end method

.method static synthetic j(Lcom/tkay/expressad/video/module/TkayVideoView;)I
    .locals 0

    .line 76
    iget p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ay:I

    return p0
.end method

.method private j()V
    .locals 2

    .line 1409
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->G:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_2

    .line 1410
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->i:Z

    if-eqz v0, :cond_0

    .line 1411
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->L:Z

    if-eqz v0, :cond_1

    .line 1415
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->G:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    :cond_1
    const/4 v0, 0x1

    .line 1417
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ao:Z

    :cond_2
    return-void
.end method

.method private k()V
    .locals 4

    .line 1432
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aM:Z

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ar:Z

    if-nez v0, :cond_2

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ap:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    .line 1435
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aM:Z

    .line 1436
    iget v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ab:I

    if-ltz v1, :cond_2

    if-nez v1, :cond_1

    .line 1438
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ar:Z

    return-void

    .line 1440
    :cond_1
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    new-instance v1, Lcom/tkay/expressad/video/module/TkayVideoView$11;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$11;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    iget v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ab:I

    mul-int/lit16 v2, v2, 0x3e8

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_2
    :goto_0
    return-void
.end method

.method static synthetic k(Lcom/tkay/expressad/video/module/TkayVideoView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 76
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aC:Z

    return v0
.end method

.method private l()V
    .locals 13

    .line 1451
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->f(Landroid/content/Context;)I

    move-result v0

    int-to-float v0, v0

    .line 1452
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->e(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    .line 1454
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v2

    const/4 v3, 0x1

    const/4 v4, 0x2

    if-eqz v2, :cond_2

    .line 1456
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$c;->c()I

    move-result v5

    if-ne v5, v3, :cond_0

    cmpl-float v5, v0, v1

    if-gtz v5, :cond_1

    .line 1457
    :cond_0
    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c$c;->c()I

    move-result v2

    if-ne v2, v4, :cond_2

    cmpl-float v2, v1, v0

    if-lez v2, :cond_2

    :cond_1
    add-float/2addr v0, v1

    sub-float v1, v0, v1

    sub-float/2addr v0, v1

    .line 1464
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object v2

    const/high16 v5, 0x42680000    # 58.0f

    invoke-static {v2, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    .line 1465
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object v5

    const/high16 v6, 0x42d00000    # 104.0f

    invoke-static {v5, v6}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v5

    .line 1467
    iget-object v6, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v6, :cond_6

    iget-object v6, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->f()I

    move-result v6

    if-ne v6, v4, :cond_6

    .line 1468
    iget-object v6, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c$c;->c()I

    move-result v6

    if-ne v6, v3, :cond_3

    mul-int/lit8 v7, v2, 0x2

    int-to-float v7, v7

    sub-float/2addr v0, v7

    mul-int/lit8 v7, v5, 0x2

    int-to-float v7, v7

    sub-float/2addr v1, v7

    :cond_3
    if-ne v6, v4, :cond_4

    mul-int/lit8 v7, v5, 0x2

    int-to-float v7, v7

    sub-float/2addr v0, v7

    mul-int/lit8 v7, v2, 0x2

    int-to-float v7, v7

    sub-float/2addr v1, v7

    :cond_4
    if-nez v6, :cond_6

    .line 1480
    iget v6, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->d:I

    if-ne v6, v3, :cond_5

    mul-int/2addr v2, v4

    int-to-float v2, v2

    sub-float/2addr v0, v2

    mul-int/2addr v5, v4

    int-to-float v2, v5

    goto :goto_0

    :cond_5
    mul-int/2addr v5, v4

    int-to-float v5, v5

    sub-float/2addr v0, v5

    mul-int/2addr v2, v4

    int-to-float v2, v2

    :goto_0
    sub-float/2addr v1, v2

    .line 1490
    :cond_6
    iget-wide v4, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    const-wide/16 v6, 0x0

    cmpg-double v2, v4, v6

    if-lez v2, :cond_11

    iget-wide v8, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D

    cmpg-double v2, v8, v6

    if-lez v2, :cond_11

    const/4 v2, 0x0

    cmpg-float v6, v0, v2

    if-lez v6, :cond_11

    cmpg-float v2, v1, v2

    if-gtz v2, :cond_7

    goto/16 :goto_4

    :cond_7
    div-double/2addr v4, v8

    div-float v2, v0, v1

    float-to-double v6, v2

    .line 1497
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v8, "videoWHDivide:"

    invoke-direct {v2, v8}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v4, v5}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v8, "  screenWHDivide:"

    invoke-virtual {v2, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6, v7}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    .line 1498
    invoke-static {v4, v5}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->a(Ljava/lang/Double;)D

    move-result-wide v8

    .line 1499
    invoke-static {v6, v7}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->a(Ljava/lang/Double;)D

    move-result-wide v6

    .line 1500
    new-instance v2, Ljava/lang/StringBuilder;

    const-string v10, "videoWHDivideFinal:"

    invoke-direct {v2, v10}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2, v8, v9}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v10, "  screenWHDivideFinal:"

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v6, v7}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    .line 1502
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v2}, Lcom/tkay/expressad/playercommon/PlayerView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/FrameLayout$LayoutParams;

    cmpl-double v10, v8, v6

    const/16 v11, 0x11

    const/4 v12, -0x1

    if-lez v10, :cond_8

    float-to-double v6, v0

    .line 1504
    iget-wide v8, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D

    mul-double/2addr v6, v8

    iget-wide v8, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    div-double/2addr v6, v8

    .line 1505
    iput v12, v2, Landroid/widget/FrameLayout$LayoutParams;->width:I

    double-to-int v6, v6

    .line 1506
    iput v6, v2, Landroid/widget/FrameLayout$LayoutParams;->height:I

    .line 1507
    iput v11, v2, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    goto :goto_1

    :cond_8
    cmpg-double v6, v8, v6

    if-gez v6, :cond_9

    float-to-double v6, v1

    mul-double/2addr v6, v4

    double-to-int v6, v6

    .line 1511
    iput v6, v2, Landroid/widget/FrameLayout$LayoutParams;->width:I

    .line 1512
    iput v12, v2, Landroid/widget/FrameLayout$LayoutParams;->height:I

    .line 1513
    iput v11, v2, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    goto :goto_1

    .line 1516
    :cond_9
    iput v12, v2, Landroid/widget/FrameLayout$LayoutParams;->width:I

    .line 1517
    iput v12, v2, Landroid/widget/FrameLayout$LayoutParams;->height:I

    .line 1520
    :goto_1
    :try_start_0
    iget-object v6, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v6, :cond_10

    iget-object v6, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v6

    if-eqz v6, :cond_10

    .line 1521
    iget-object v6, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c$c;->b()I

    move-result v6

    .line 1522
    iget-object v7, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v7}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v7

    invoke-virtual {v7}, Lcom/tkay/expressad/foundation/d/c$c;->c()I

    move-result v7

    const/16 v8, 0x66

    const/16 v9, 0xca

    if-eq v6, v8, :cond_a

    if-ne v6, v9, :cond_c

    :cond_a
    if-ne v7, v3, :cond_b

    .line 1527
    iput v12, v2, Landroid/widget/FrameLayout$LayoutParams;->width:I

    .line 1528
    iput v11, v2, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    .line 1529
    iget-wide v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D

    iget-wide v7, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    float-to-double v10, v0

    div-double/2addr v7, v10

    div-double/2addr v3, v7

    double-to-int v1, v3

    iput v1, v2, Landroid/widget/FrameLayout$LayoutParams;->height:I

    goto :goto_2

    .line 1532
    :cond_b
    iput v12, v2, Landroid/widget/FrameLayout$LayoutParams;->height:I

    .line 1533
    iput v11, v2, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    float-to-double v7, v1

    mul-double/2addr v7, v4

    double-to-int v1, v7

    .line 1534
    iput v1, v2, Landroid/widget/FrameLayout$LayoutParams;->width:I

    :cond_c
    :goto_2
    if-ne v6, v9, :cond_d

    .line 1538
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_d

    .line 1539
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->a(Ljava/lang/String;)V

    :cond_d
    const/16 v1, 0x12e

    if-eq v6, v1, :cond_e

    const/16 v1, 0x322

    if-ne v6, v1, :cond_10

    .line 1543
    :cond_e
    iget-wide v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    iget-wide v5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D

    div-double/2addr v3, v5

    const-wide/high16 v5, 0x3ff0000000000000L    # 1.0

    cmpl-double v1, v3, v5

    if-lez v1, :cond_f

    .line 1544
    iput v12, v2, Landroid/widget/FrameLayout$LayoutParams;->width:I

    .line 1545
    iget-wide v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D

    float-to-double v0, v0

    mul-double/2addr v3, v0

    iget-wide v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    div-double/2addr v3, v0

    double-to-int v0, v3

    iput v0, v2, Landroid/widget/FrameLayout$LayoutParams;->height:I

    goto :goto_3

    .line 1547
    :cond_f
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x435c0000    # 220.0f

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    .line 1548
    iget-wide v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    int-to-double v5, v0

    mul-double/2addr v3, v5

    iget-wide v5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D

    div-double/2addr v3, v5

    double-to-int v1, v3

    iput v1, v2, Landroid/widget/FrameLayout$LayoutParams;->width:I

    .line 1549
    iput v0, v2, Landroid/widget/FrameLayout$LayoutParams;->height:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception v0

    .line 1554
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 1557
    :cond_10
    :goto_3
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0, v2}, Lcom/tkay/expressad/playercommon/PlayerView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1558
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->setMatchParent()V

    return-void

    .line 1491
    :cond_11
    :goto_4
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->m()V

    return-void
.end method

.method static synthetic l(Lcom/tkay/expressad/video/module/TkayVideoView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 76
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aG:Z

    return v0
.end method

.method private m()V
    .locals 3

    const/4 v0, 0x0

    const/4 v1, -0x1

    .line 1564
    :try_start_0
    invoke-virtual {p0, v0, v0, v1, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setLayoutParam(IIII)V

    .line 1566
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->isLandscape()Z

    move-result v0

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    if-eqz v0, :cond_0

    .line 1567
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    .line 1569
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->f(Landroid/content/Context;)I

    move-result v2

    .line 1570
    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->width:I

    mul-int/lit8 v2, v2, 0x9

    .line 1571
    div-int/lit8 v2, v2, 0x10

    iput v2, v0, Landroid/widget/FrameLayout$LayoutParams;->height:I

    const/16 v1, 0x11

    .line 1572
    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->gravity:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    .line 1576
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method static synthetic m(Lcom/tkay/expressad/video/module/TkayVideoView;)V
    .locals 0

    .line 76
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->i()V

    return-void
.end method

.method private n()V
    .locals 4

    .line 2158
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2159
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 2160
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_1"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    .line 2161
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->K:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/widget/FeedBackButton;)V

    return-void

    .line 2163
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->K:Lcom/tkay/expressad/widget/FeedBackButton;

    if-eqz v0, :cond_1

    const/16 v1, 0x8

    .line 2164
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method static synthetic n(Lcom/tkay/expressad/video/module/TkayVideoView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 76
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aD:Z

    return v0
.end method

.method private o()I
    .locals 4

    .line 2186
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v0

    .line 2187
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->x()I

    move-result v0

    return v0
.end method

.method static synthetic o(Lcom/tkay/expressad/video/module/TkayVideoView;)Z
    .locals 0

    .line 76
    iget-boolean p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aF:Z

    return p0
.end method

.method private p()V
    .locals 3

    .line 2214
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->P:Landroid/widget/FrameLayout;

    if-nez v0, :cond_0

    return-void

    .line 2218
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->Q:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    if-nez v0, :cond_2

    .line 2219
    new-instance v0, Lcom/tkay/expressad/video/module/TkayClickCTAView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/module/TkayClickCTAView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->Q:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    .line 2220
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 2221
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->Q:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->setUnitId(Ljava/lang/String;)V

    .line 2222
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->U:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_1

    .line 2223
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->Q:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    new-instance v2, Lcom/tkay/expressad/video/module/a/a/i;

    invoke-direct {v2, v0}, Lcom/tkay/expressad/video/module/a/a/i;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 2225
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->Q:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->R:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 2228
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->P:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->Q:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    return-void
.end method

.method static synthetic p(Lcom/tkay/expressad/video/module/TkayVideoView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 76
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ar:Z

    return v0
.end method

.method static synthetic q(Lcom/tkay/expressad/video/module/TkayVideoView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 76
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->L:Z

    return v0
.end method

.method static synthetic r(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/ProgressBar;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->J:Landroid/widget/ProgressBar;

    return-object p0
.end method

.method static synthetic s(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/RelativeLayout;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->H:Landroid/widget/RelativeLayout;

    return-object p0
.end method

.method static synthetic t(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/widget/TextView;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->F:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic u(Lcom/tkay/expressad/video/module/TkayVideoView;)V
    .locals 0

    .line 76
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->n()V

    return-void
.end method

.method static synthetic v(Lcom/tkay/expressad/video/module/TkayVideoView;)I
    .locals 0

    .line 76
    iget p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->S:I

    return p0
.end method

.method static synthetic w(Lcom/tkay/expressad/video/module/TkayVideoView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 76
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aF:Z

    return v0
.end method

.method static synthetic x(Lcom/tkay/expressad/video/module/TkayVideoView;)Landroid/view/View;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->G:Landroid/view/View;

    return-object p0
.end method

.method static synthetic y(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/widget/FeedBackButton;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->K:Lcom/tkay/expressad/widget/FeedBackButton;

    return-object p0
.end method

.method static synthetic z(Lcom/tkay/expressad/video/module/TkayVideoView;)Lcom/tkay/expressad/video/widget/SoundImageView;
    .locals 0

    .line 76
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->E:Lcom/tkay/expressad/video/widget/SoundImageView;

    return-object p0
.end method


# virtual methods
.method public alertWebViewShowed()V
    .locals 1

    const/4 v0, 0x1

    .line 719
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->V:Z

    .line 720
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->setShowingAlertViewCover(Z)V

    return-void
.end method

.method protected final c()V
    .locals 2

    .line 484
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->c()V

    .line 485
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    if-eqz v0, :cond_4

    .line 487
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->i:Z

    if-eqz v0, :cond_1

    .line 488
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/i/c;->a(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-static {v0}, Lcom/tkay/expressad/video/dynview/i/c;->a(Lcom/tkay/expressad/foundation/d/c;)I

    move-result v0

    const/16 v1, 0x64

    if-ne v0, v1, :cond_2

    .line 489
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayVideoView$5;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$5;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_0

    .line 504
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayVideoView$6;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$6;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 513
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->E:Lcom/tkay/expressad/video/widget/SoundImageView;

    if-eqz v0, :cond_3

    .line 514
    new-instance v1, Lcom/tkay/expressad/video/module/TkayVideoView$7;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$7;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/widget/SoundImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 533
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->G:Landroid/view/View;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayVideoView$8;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$8;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_4
    return-void
.end method

.method public closeVideoOperate(II)V
    .locals 1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 1030
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aH:Z

    .line 1032
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_0

    .line 1033
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->e()V

    :cond_0
    if-ne p2, v0, :cond_1

    .line 1037
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->gonePlayingCloseView()V

    return-void

    :cond_1
    const/4 p1, 0x2

    if-ne p2, p1, :cond_5

    .line 1039
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aG:Z

    if-eqz p1, :cond_2

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getVisibility()I

    move-result p1

    if-eqz p1, :cond_5

    .line 7409
    :cond_2
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->G:Landroid/view/View;

    invoke-virtual {p1}, Landroid/view/View;->getVisibility()I

    move-result p1

    if-eqz p1, :cond_5

    .line 7410
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->i:Z

    if-eqz p1, :cond_3

    .line 7411
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->L:Z

    if-eqz p1, :cond_4

    .line 7415
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->G:Landroid/view/View;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Landroid/view/View;->setVisibility(I)V

    .line 7417
    :cond_4
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ao:Z

    :cond_5
    return-void
.end method

.method public defaultShow()V
    .locals 12

    .line 841
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->defaultShow()V

    const/4 v0, 0x1

    .line 842
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ak:Z

    .line 844
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->f(Landroid/content/Context;)I

    move-result v5

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    .line 845
    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->e(Landroid/content/Context;)I

    move-result v6

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x0

    const/4 v11, 0x0

    move-object v2, p0

    .line 844
    invoke-virtual/range {v2 .. v11}, Lcom/tkay/expressad/video/module/TkayVideoView;->showVideoLocation(IIIIIIIII)V

    .line 846
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->videoOperate(I)V

    .line 847
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ab:I

    if-nez v0, :cond_0

    const/4 v0, -0x1

    const/4 v1, 0x2

    .line 848
    invoke-virtual {p0, v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->closeVideoOperate(II)V

    :cond_0
    return-void
.end method

.method public dismissAllAlert()V
    .locals 3

    .line 725
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->af:Lcom/tkay/expressad/widget/a/b;

    if-eqz v0, :cond_0

    .line 726
    invoke-virtual {v0}, Lcom/tkay/expressad/widget/a/b;->dismiss()V

    .line 728
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_1

    .line 729
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0x7d

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_1
    return-void
.end method

.method public getBorderViewHeight()I
    .locals 1

    .line 1149
    sget v0, Lcom/tkay/expressad/video/module/TkayVideoView;->B:I

    return v0
.end method

.method public getBorderViewLeft()I
    .locals 1

    .line 1159
    sget v0, Lcom/tkay/expressad/video/module/TkayVideoView;->z:I

    return v0
.end method

.method public getBorderViewRadius()I
    .locals 1

    .line 1169
    sget v0, Lcom/tkay/expressad/video/module/TkayVideoView;->x:I

    return v0
.end method

.method public getBorderViewTop()I
    .locals 1

    .line 1164
    sget v0, Lcom/tkay/expressad/video/module/TkayVideoView;->y:I

    return v0
.end method

.method public getBorderViewWidth()I
    .locals 1

    .line 1154
    sget v0, Lcom/tkay/expressad/video/module/TkayVideoView;->A:I

    return v0
.end method

.method public getCloseAlert()I
    .locals 1

    .line 1210
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ad:I

    return v0
.end method

.method public getCurrentProgress()Ljava/lang/String;
    .locals 5

    .line 1088
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aL:Lcom/tkay/expressad/video/module/TkayVideoView$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a()I

    move-result v0

    const/4 v1, 0x0

    .line 1090
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v2, :cond_0

    .line 1091
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bi()I

    move-result v1

    .line 1093
    :cond_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "progress"

    .line 1095
    invoke-static {v0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->a(II)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "time"

    .line 1096
    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "duration"

    .line 1097
    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1098
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    .line 1100
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    const-string v0, "{}"

    return-object v0
.end method

.method public getMute()I
    .locals 1

    .line 2065
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aw:I

    return v0
.end method

.method public getUnitId()Ljava/lang/String;
    .locals 1

    .line 226
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    return-object v0
.end method

.method public getVideoSkipTime()I
    .locals 1

    .line 1218
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ab:I

    return v0
.end method

.method public gonePlayingCloseView()V
    .locals 4

    .line 1422
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->G:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    const/16 v1, 0x8

    if-eq v0, v1, :cond_0

    .line 1423
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->G:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    const/4 v0, 0x0

    .line 1424
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ao:Z

    .line 7432
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aM:Z

    if-nez v0, :cond_3

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ar:Z

    if-nez v0, :cond_3

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ap:Z

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    const/4 v0, 0x1

    .line 7435
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aM:Z

    .line 7436
    iget v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ab:I

    if-ltz v1, :cond_3

    if-nez v1, :cond_2

    .line 7438
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ar:Z

    return-void

    .line 7440
    :cond_2
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    new-instance v1, Lcom/tkay/expressad/video/module/TkayVideoView$11;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$11;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    iget v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ab:I

    mul-int/lit16 v2, v2, 0x3e8

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_3
    :goto_0
    return-void
.end method

.method public hideAlertView(I)V
    .locals 5

    .line 675
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->V:Z

    if-eqz v0, :cond_6

    const/4 v0, 0x0

    .line 676
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->V:Z

    const/4 v1, 0x1

    .line 677
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aB:Z

    .line 678
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->setShowingAlertViewCover(Z)V

    .line 679
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v2

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    invoke-virtual {v2, v3, v4, v0}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    const-string v0, ""

    if-nez p1, :cond_2

    .line 683
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->i()V

    .line 685
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->au:Z

    if-eqz p1, :cond_6

    iget p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ay:I

    sget v2, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-eq p1, v2, :cond_0

    iget p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ay:I

    sget v2, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-ne p1, v2, :cond_6

    .line 687
    :cond_0
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aC:Z

    .line 688
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz p1, :cond_1

    .line 689
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v2, 0x7c

    invoke-interface {p1, v2, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 691
    :cond_1
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aG:Z

    .line 692
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->gonePlayingCloseView()V

    return-void

    .line 696
    :cond_2
    iput-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aD:Z

    .line 698
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->au:Z

    if-eqz p1, :cond_3

    iget p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ay:I

    sget v1, Lcom/tkay/expressad/foundation/g/a;->cs:I

    if-ne p1, v1, :cond_3

    .line 700
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->i()V

    return-void

    .line 704
    :cond_3
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->au:Z

    const/4 v1, 0x2

    if-eqz p1, :cond_5

    iget p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ay:I

    sget v2, Lcom/tkay/expressad/foundation/g/a;->cr:I

    if-ne p1, v2, :cond_5

    .line 705
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz p1, :cond_4

    .line 706
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aF:Z

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->b(Z)Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v1, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_4
    return-void

    .line 710
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz p1, :cond_6

    .line 711
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    invoke-interface {p1, v1, v0}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_6
    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public isH5Canvas()Z
    .locals 2

    .line 1140
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    iget v0, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->e(Landroid/content/Context;)I

    move-result v1

    if-lt v0, v1, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public isInstallDialogShowing()Z
    .locals 1

    .line 184
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->W:Z

    return v0
.end method

.method public isMiniCardShowing()Z
    .locals 1

    .line 251
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->an:Z

    return v0
.end method

.method public isShowingAlertView()Z
    .locals 1

    .line 180
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->V:Z

    return v0
.end method

.method public isShowingTransparent()Z
    .locals 1

    .line 278
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->as:Z

    return v0
.end method

.method public isfront()Z
    .locals 7

    .line 1321
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 1323
    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->indexOfChild(Landroid/view/View;)I

    move-result v2

    .line 1324
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v3

    const/4 v4, 0x1

    add-int/2addr v2, v4

    move v5, v1

    :goto_0
    add-int/lit8 v6, v3, -0x1

    if-gt v2, v6, :cond_1

    .line 1327
    invoke-virtual {v0, v2}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v5

    invoke-virtual {v5}, Landroid/view/View;->getVisibility()I

    move-result v5

    if-nez v5, :cond_0

    iget-boolean v5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->an:Z

    if-eqz v5, :cond_0

    goto :goto_1

    :cond_0
    add-int/lit8 v2, v2, 0x1

    move v5, v4

    goto :goto_0

    :cond_1
    move v1, v5

    :cond_2
    :goto_1
    return v1
.end method

.method public notifyCloseBtn(I)V
    .locals 1

    const/4 v0, 0x1

    if-nez p1, :cond_0

    .line 2039
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ap:Z

    const/4 p1, 0x0

    .line 2040
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ar:Z

    return-void

    :cond_0
    if-ne p1, v0, :cond_1

    .line 2042
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aq:Z

    :cond_1
    return-void
.end method

.method public notifyVideoClose()V
    .locals 3

    .line 2052
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/4 v1, 0x2

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method public onBackPress()V
    .locals 1

    .line 2015
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->an:Z

    if-nez v0, :cond_4

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->V:Z

    if-eqz v0, :cond_0

    goto :goto_0

    .line 2019
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aC:Z

    if-eqz v0, :cond_1

    return-void

    .line 2022
    :cond_1
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ao:Z

    if-eqz v0, :cond_2

    .line 2023
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->e()V

    return-void

    .line 2027
    :cond_2
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ap:Z

    if-eqz v0, :cond_3

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aq:Z

    if-eqz v0, :cond_3

    .line 2028
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->e()V

    return-void

    .line 2031
    :cond_3
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ap:Z

    if-nez v0, :cond_4

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ar:Z

    if-eqz v0, :cond_4

    .line 2032
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->e()V

    :cond_4
    :goto_0
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 1174
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 1175
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    .line 1179
    :cond_0
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    if-eqz p1, :cond_1

    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ak:Z

    if-eqz p1, :cond_1

    .line 1180
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->l()V

    :cond_1
    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 2

    .line 2354
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->onDetachedFromWindow()V

    .line 2356
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aN:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 2357
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getHandler()Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aN:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception v0

    .line 2360
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 7

    .line 813
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->R:Lcom/tkay/expressad/video/signal/factory/b;

    .line 814
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    const/4 v0, 0x0

    if-eqz p1, :cond_5

    .line 815
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aa:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_6

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_6

    .line 5297
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->U()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_4

    .line 5298
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->U()Ljava/lang/String;

    move-result-object p1

    const-string v1, "x"

    .line 5300
    invoke-virtual {p1, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 5301
    array-length v1, p1

    const/4 v2, 0x2

    const-wide/16 v3, 0x0

    if-ne v1, v2, :cond_2

    .line 5302
    aget-object v1, p1, v0

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->b(Ljava/lang/String;)D

    move-result-wide v1

    cmpl-double v1, v1, v3

    if-lez v1, :cond_0

    .line 5303
    aget-object v1, p1, v0

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->b(Ljava/lang/String;)D

    move-result-wide v1

    iput-wide v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    :cond_0
    const/4 v1, 0x1

    .line 5305
    aget-object v2, p1, v1

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->b(Ljava/lang/String;)D

    move-result-wide v5

    cmpl-double v2, v5, v3

    if-lez v2, :cond_1

    .line 5306
    aget-object p1, p1, v1

    invoke-static {p1}, Lcom/tkay/expressad/foundation/h/t;->b(Ljava/lang/String;)D

    move-result-wide v1

    iput-wide v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D

    .line 5308
    :cond_1
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, "TkayBaseView mVideoW:"

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-wide v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    invoke-virtual {p1, v1, v2}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v1, "  mVideoH:"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D

    invoke-virtual {p1, v1, v2}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    .line 5310
    :cond_2
    iget-wide v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    cmpg-double p1, v1, v3

    if-gtz p1, :cond_3

    const-wide/high16 v1, 0x4094000000000000L    # 1280.0

    .line 5311
    iput-wide v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    .line 5313
    :cond_3
    iget-wide v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D

    cmpg-double p1, v1, v3

    if-gtz p1, :cond_4

    const-wide v1, 0x4086800000000000L    # 720.0

    .line 5314
    iput-wide v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D

    .line 826
    :cond_4
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    iget v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ac:I

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/playercommon/PlayerView;->initBufferIngParam(I)V

    .line 827
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aa:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->S()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->ao()I

    move-result v3

    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aL:Lcom/tkay/expressad/video/module/TkayVideoView$b;

    invoke-virtual {p1, v1, v2, v3, v4}, Lcom/tkay/expressad/playercommon/PlayerView;->initVFPData(Ljava/lang/String;Ljava/lang/String;ILcom/tkay/expressad/playercommon/VideoPlayerStatusListener;)Z

    .line 829
    iget p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aw:I

    const/4 v1, -0x1

    const/4 v2, 0x0

    invoke-virtual {p0, p1, v1, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->soundOperate(IILjava/lang/String;)V

    goto :goto_0

    .line 832
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz p1, :cond_6

    .line 833
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0xc

    const-string v2, "TYVideoView initSuccess false"

    invoke-interface {p1, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 836
    :cond_6
    :goto_0
    sput-boolean v0, Lcom/tkay/expressad/video/module/TkayVideoView;->av:Z

    return-void
.end method

.method public progressBarOperate(I)V
    .locals 1

    .line 1047
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 1049
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->J:Landroid/widget/ProgressBar;

    if-eqz p1, :cond_1

    const/16 v0, 0x8

    .line 1050
    invoke-virtual {p1, v0}, Landroid/widget/ProgressBar;->setVisibility(I)V

    return-void

    :cond_0
    const/4 v0, 0x2

    if-ne p1, v0, :cond_1

    .line 1053
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->J:Landroid/widget/ProgressBar;

    if-eqz p1, :cond_1

    const/4 v0, 0x0

    .line 1054
    invoke-virtual {p1, v0}, Landroid/widget/ProgressBar;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method public progressOperate(II)V
    .locals 2

    .line 1062
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    if-eqz v0, :cond_4

    .line 1065
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 1066
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bi()I

    move-result v0

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    if-lez p1, :cond_1

    if-gt p1, v0, :cond_1

    .line 1069
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    if-eqz v0, :cond_1

    mul-int/lit16 p1, p1, 0x3e8

    .line 1071
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/playercommon/PlayerView;->seekTo(I)V

    :cond_1
    const/4 p1, 0x1

    if-ne p2, p1, :cond_2

    .line 1075
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->F:Landroid/widget/TextView;

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setVisibility(I)V

    goto :goto_1

    :cond_2
    const/4 p1, 0x2

    if-ne p2, p1, :cond_3

    .line 1077
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->F:Landroid/widget/TextView;

    invoke-virtual {p1, v1}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1079
    :cond_3
    :goto_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->F:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_4

    .line 1080
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->n()V

    :cond_4
    return-void
.end method

.method public releasePlayer()V
    .locals 1

    .line 2366
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->am:Z

    if-nez v0, :cond_0

    .line 2367
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->release()V

    .line 2370
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aL:Lcom/tkay/expressad/video/module/TkayVideoView$b;

    if-eqz v0, :cond_1

    .line 2371
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aL:Lcom/tkay/expressad/video/module/TkayVideoView$b;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/module/TkayVideoView$b;->b()V

    .line 2374
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->U:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_2

    const/4 v0, 0x0

    .line 2375
    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->U:Lcom/tkay/expressad/video/module/a/a;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-void

    :catch_0
    move-exception v0

    .line 2379
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setBufferTimeout(I)V
    .locals 0

    .line 1230
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ac:I

    return-void
.end method

.method public setCTALayoutVisibleOrGone()V
    .locals 4

    .line 2232
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-nez v0, :cond_0

    return-void

    .line 2236
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    .line 2240
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->P:Landroid/widget/FrameLayout;

    if-nez v0, :cond_2

    return-void

    .line 2244
    :cond_2
    iget v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->S:I

    const/4 v2, -0x1

    if-ge v1, v2, :cond_3

    return-void

    .line 2248
    :cond_3
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->Q:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    if-nez v1, :cond_6

    if-eqz v0, :cond_6

    if-nez v1, :cond_5

    .line 8219
    new-instance v0, Lcom/tkay/expressad/video/module/TkayClickCTAView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/expressad/video/module/TkayClickCTAView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->Q:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    .line 8220
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 8221
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->Q:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->setUnitId(Ljava/lang/String;)V

    .line 8222
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->U:Lcom/tkay/expressad/video/module/a/a;

    if-eqz v0, :cond_4

    .line 8223
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->Q:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    new-instance v3, Lcom/tkay/expressad/video/module/a/a/i;

    invoke-direct {v3, v0}, Lcom/tkay/expressad/video/module/a/a/i;-><init>(Lcom/tkay/expressad/video/module/a/a;)V

    invoke-virtual {v1, v3}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->setNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V

    .line 8225
    :cond_4
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->Q:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->R:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    .line 8228
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->P:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->Q:Lcom/tkay/expressad/video/module/TkayClickCTAView;

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 2252
    :cond_6
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->S:I

    const/4 v1, 0x0

    if-ltz v0, :cond_7

    .line 2253
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->P:Landroid/widget/FrameLayout;

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void

    :cond_7
    if-ne v0, v2, :cond_9

    .line 2258
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->P:Landroid/widget/FrameLayout;

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_8

    .line 2259
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->P:Landroid/widget/FrameLayout;

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    .line 2260
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aN:Ljava/lang/Runnable;

    const-wide/16 v1, 0xbb8

    invoke-virtual {p0, v0, v1, v2}, Lcom/tkay/expressad/video/module/TkayVideoView;->postDelayed(Ljava/lang/Runnable;J)Z

    return-void

    .line 2262
    :cond_8
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->P:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    .line 2263
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getHandler()Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aN:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    :cond_9
    return-void
.end method

.method public setCamPlayOrderCallback(Lcom/tkay/expressad/video/dynview/f/a;Ljava/util/List;II)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/video/dynview/f/a;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;II)V"
        }
    .end annotation

    .line 149
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->N:Lcom/tkay/expressad/video/dynview/f/a;

    .line 150
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p1

    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampaignSize:I

    .line 151
    iput p3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCurrPlayNum:I

    .line 152
    iput p4, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->O:I

    .line 153
    iput-object p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    .line 155
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-nez p1, :cond_0

    return-void

    .line 158
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result p1

    const/4 p2, 0x5

    if-ne p1, p2, :cond_5

    .line 159
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->M:Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;

    if-eqz p1, :cond_5

    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    if-nez p2, :cond_1

    goto :goto_1

    .line 163
    :cond_1
    iget p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampaignSize:I

    const/4 p3, 0x1

    if-le p2, p3, :cond_4

    const/4 p2, 0x0

    .line 164
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->setVisibility(I)V

    .line 165
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->M:Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;

    iget p3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampaignSize:I

    const/4 p4, 0x2

    invoke-virtual {p1, p3, p4}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->init(II)V

    .line 166
    :goto_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-ge p2, p1, :cond_3

    .line 167
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {p1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aF()I

    move-result p1

    if-lez p1, :cond_2

    .line 169
    iget-object p3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->M:Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;

    invoke-virtual {p3, p1, p2}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->setProgress(II)V

    :cond_2
    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    :cond_3
    return-void

    :cond_4
    const/16 p2, 0x8

    .line 173
    invoke-virtual {p1, p2}, Lcom/tkay/expressad/video/dynview/widget/TYSegmentsProgressBar;->setVisibility(I)V

    nop

    :cond_5
    :goto_1
    return-void
.end method

.method public setCampaign(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 5

    .line 471
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->setCampaign(Lcom/tkay/expressad/foundation/d/c;)V

    .line 472
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aL:Lcom/tkay/expressad/video/module/TkayVideoView$b;

    if-eqz v0, :cond_2

    .line 473
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a(Lcom/tkay/expressad/foundation/d/c;)V

    .line 474
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aL:Lcom/tkay/expressad/video/module/TkayVideoView$b;

    const/4 v1, 0x0

    if-eqz p1, :cond_1

    .line 5172
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ao()I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_0

    .line 5173
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ao()I

    move-result p1

    goto :goto_0

    .line 5175
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object p1

    .line 5176
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    invoke-virtual {p1, v2, v3, v1}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->v()I

    move-result p1

    goto :goto_0

    .line 5179
    :cond_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object p1

    .line 5180
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    invoke-virtual {p1, v2, v3, v1}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/e/d;->v()I

    move-result p1

    .line 5186
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v2

    .line 5187
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    invoke-virtual {v2, v3, v4, v1}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/d;->x()I

    move-result v1

    .line 474
    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a(II)V

    :cond_2
    return-void
.end method

.method public setCloseAlert(I)V
    .locals 0

    .line 1214
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ad:I

    return-void
.end method

.method public setContainerViewOnNotifyListener(Lcom/tkay/expressad/video/module/a/a;)V
    .locals 0

    .line 144
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->U:Lcom/tkay/expressad/video/module/a/a;

    return-void
.end method

.method public setCover(Z)V
    .locals 1

    .line 1123
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    if-eqz v0, :cond_0

    .line 1124
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/playercommon/PlayerView;->setIsCovered(Z)V

    :cond_0
    return-void
.end method

.method public setDialogRole(I)V
    .locals 1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    .line 2086
    :goto_0
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aE:Z

    .line 2087
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aE:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    return-void
.end method

.method public setIVRewardEnable(III)V
    .locals 0

    .line 2075
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ay:I

    .line 2076
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->az:I

    .line 2077
    iput p3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aA:I

    return-void
.end method

.method public setInstallDialogState(Z)V
    .locals 1

    .line 1117
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->W:Z

    .line 1118
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/playercommon/PlayerView;->setIsCovered(Z)V

    return-void
.end method

.method public setIsIV(Z)V
    .locals 1

    .line 462
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->au:Z

    .line 463
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aL:Lcom/tkay/expressad/video/module/TkayVideoView$b;

    if-eqz v0, :cond_0

    .line 464
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a(Z)V

    :cond_0
    return-void
.end method

.method public setMiniEndCardState(Z)V
    .locals 0

    .line 1130
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->an:Z

    return-void
.end method

.method public setNotchPadding(IIII)V
    .locals 8

    .line 2121
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "NOTCH VideoView "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const-string v1, "%1s-%2s-%3s-%4s"

    const/4 v2, 0x4

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const/4 v4, 0x0

    aput-object v3, v2, v4

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v3

    const/4 v5, 0x1

    aput-object v3, v2, v5

    const/4 v3, 0x2

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v2, v3

    const/4 v3, 0x3

    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v2, v3

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 2123
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;

    .line 2124
    iget v1, v0, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 2125
    iget v2, v0, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 2126
    iget v3, v0, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 2127
    iget v0, v0, Landroid/widget/RelativeLayout$LayoutParams;->bottomMargin:I

    .line 2129
    invoke-static {p1, p2}, Ljava/lang/Math;->max(II)I

    move-result v6

    invoke-static {p3, p4}, Ljava/lang/Math;->max(II)I

    move-result v7

    invoke-static {v6, v7}, Ljava/lang/Math;->max(II)I

    move-result v6

    .line 2130
    invoke-static {v1, v2}, Ljava/lang/Math;->max(II)I

    move-result v1

    invoke-static {v3, v0}, Ljava/lang/Math;->max(II)I

    move-result v0

    invoke-static {v1, v0}, Ljava/lang/Math;->max(II)I

    move-result v0

    if-le v0, v6, :cond_0

    move v4, v5

    :cond_0
    if-nez v4, :cond_1

    .line 2133
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->H:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_1

    .line 2134
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->H:Landroid/widget/RelativeLayout;

    new-instance v7, Lcom/tkay/expressad/video/module/TkayVideoView$12;

    move-object v1, v7

    move-object v2, p0

    move v3, p1

    move v4, p3

    move v5, p2

    move v6, p4

    invoke-direct/range {v1 .. v6}, Lcom/tkay/expressad/video/module/TkayVideoView$12;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;IIII)V

    const-wide/16 p1, 0xc8

    invoke-virtual {v0, v7, p1, p2}, Landroid/widget/RelativeLayout;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 2149
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->F:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_2

    .line 2150
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->n()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-void

    :catch_0
    move-exception p1

    .line 2153
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setPlayURL(Ljava/lang/String;)V
    .locals 0

    .line 1226
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aa:Ljava/lang/String;

    return-void
.end method

.method public setScaleFitXY(I)V
    .locals 0

    .line 1107
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->at:I

    return-void
.end method

.method public setShowingAlertViewCover(Z)V
    .locals 1

    .line 1134
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/playercommon/PlayerView;->setIsCovered(Z)V

    return-void
.end method

.method public setShowingTransparent(Z)V
    .locals 0

    .line 282
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->as:Z

    return-void
.end method

.method public setSoundState(I)V
    .locals 0

    .line 479
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aw:I

    return-void
.end method

.method public setUnitId(Ljava/lang/String;)V
    .locals 1

    .line 219
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    .line 220
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aL:Lcom/tkay/expressad/video/module/TkayVideoView$b;

    if-eqz v0, :cond_0

    .line 221
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/video/module/TkayVideoView$b;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public setVideoLayout(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 345
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    .line 346
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->i:Z

    .line 348
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->i:Z

    if-eqz v0, :cond_1

    .line 3374
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/c;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/c;-><init>()V

    invoke-static {p0, p1}, Lcom/tkay/expressad/video/dynview/j/c;->a(Landroid/view/View;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/video/dynview/c;

    move-result-object p1

    .line 3375
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b;->a()Lcom/tkay/expressad/video/dynview/b;

    new-instance v0, Lcom/tkay/expressad/video/module/TkayVideoView$1;

    invoke-direct {v0, p0, p0, p1}, Lcom/tkay/expressad/video/module/TkayVideoView$1;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;Landroid/view/ViewGroup;Lcom/tkay/expressad/video/dynview/c;)V

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/dynview/b;->a(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;)V

    return-void

    :cond_1
    const-string p1, "tkay_reward_videoview_item"

    .line 4360
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->findLayout(Ljava/lang/String;)I

    move-result p1

    if-lez p1, :cond_2

    .line 4362
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->c:Landroid/view/LayoutInflater;

    invoke-virtual {v0, p1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 4363
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->b()V

    :cond_2
    const/4 p1, 0x0

    .line 4365
    sput-boolean p1, Lcom/tkay/expressad/video/module/TkayVideoView;->av:Z

    return-void
.end method

.method public setVideoSkipTime(I)V
    .locals 0

    .line 1222
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ab:I

    return-void
.end method

.method public setVisible(I)V
    .locals 0

    .line 1112
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setVisibility(I)V

    return-void
.end method

.method public showAlertView()V
    .locals 4

    .line 735
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->an:Z

    if-eqz v0, :cond_0

    return-void

    .line 739
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ag:Lcom/tkay/expressad/widget/a/c;

    if-nez v0, :cond_1

    .line 740
    new-instance v0, Lcom/tkay/expressad/video/module/TkayVideoView$9;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$9;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ag:Lcom/tkay/expressad/widget/a/c;

    .line 787
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->af:Lcom/tkay/expressad/widget/a/b;

    if-nez v0, :cond_2

    .line 788
    new-instance v0, Lcom/tkay/expressad/widget/a/b;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ag:Lcom/tkay/expressad/widget/a/c;

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/widget/a/b;-><init>(Landroid/content/Context;Lcom/tkay/expressad/widget/a/c;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->af:Lcom/tkay/expressad/widget/a/b;

    .line 794
    :cond_2
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->au:Z

    if-eqz v0, :cond_3

    .line 795
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->af:Lcom/tkay/expressad/widget/a/b;

    iget v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ay:I

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/widget/a/b;->a(ILjava/lang/String;)V

    goto :goto_0

    .line 797
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->af:Lcom/tkay/expressad/widget/a/b;

    invoke-virtual {v0}, Lcom/tkay/expressad/widget/a/b;->b()V

    .line 800
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    if-eqz v0, :cond_4

    invoke-virtual {v0}, Lcom/tkay/expressad/playercommon/PlayerView;->isComplete()Z

    move-result v0

    if-nez v0, :cond_4

    .line 801
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->af:Lcom/tkay/expressad/widget/a/b;

    invoke-virtual {v0}, Lcom/tkay/expressad/widget/a/b;->show()V

    const/4 v0, 0x1

    .line 802
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aB:Z

    .line 803
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->V:Z

    .line 804
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->setShowingAlertViewCover(Z)V

    .line 805
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ah:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    .line 806
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/d;->J()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ax:Ljava/lang/String;

    :cond_4
    return-void
.end method

.method public showBaitClickView()V
    .locals 3

    .line 2311
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-nez v0, :cond_0

    return-void

    .line 2315
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    .line 2319
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v0

    if-nez v0, :cond_2

    return-void

    .line 2323
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v0

    .line 2324
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    return-void

    :cond_3
    :try_start_0
    const-string v1, "bait_click"

    .line 2329
    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 2331
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 2332
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-eqz v0, :cond_4

    .line 2333
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aK:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    if-eqz v1, :cond_4

    .line 2334
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aK:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->setVisibility(I)V

    .line 2335
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aK:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->init(I)V

    .line 2336
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aK:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->startAnimation()V

    .line 2337
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aK:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayVideoView$4;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayVideoView$4;-><init>(Lcom/tkay/expressad/video/module/TkayVideoView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_4
    return-void

    :catch_0
    move-exception v0

    .line 2348
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public showIVRewardAlertView(Ljava/lang/String;)V
    .locals 2

    .line 2048
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x8

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method public showMoreOfferInPlayTemplate()V
    .locals 1

    .line 2279
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->T:Landroid/widget/RelativeLayout;

    if-nez v0, :cond_0

    goto :goto_0

    .line 2283
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    .line 2287
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v0

    if-nez v0, :cond_2

    return-void

    .line 2291
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v0

    .line 2292
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    :cond_3
    :goto_0
    return-void
.end method

.method public showVideoLocation(IIIIIIIII)V
    .locals 6

    .line 855
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "showVideoLocation marginTop:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " marginLeft:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " width:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "  height:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " radius:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " borderTop:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " borderLeft:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p7}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " borderWidth:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p8}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " borderHeight:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p9}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 860
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    if-eqz v0, :cond_a

    .line 861
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->H:Landroid/widget/RelativeLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1, v1, v1, v1}, Landroid/widget/RelativeLayout;->setPadding(IIII)V

    .line 862
    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayVideoView;->setVisibility(I)V

    .line 863
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->H:Landroid/widget/RelativeLayout;

    invoke-virtual {v0}, Landroid/widget/RelativeLayout;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    .line 864
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->H:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 866
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->F:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_1

    .line 867
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->n()V

    .line 6199
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/t;->f(Landroid/content/Context;)I

    move-result v0

    .line 6200
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->e(Landroid/content/Context;)I

    move-result v2

    const/4 v3, 0x1

    if-lez p3, :cond_2

    if-lez p4, :cond_2

    if-lt v0, p3, :cond_2

    if-lt v2, p4, :cond_2

    move v0, v3

    goto :goto_0

    :cond_2
    move v0, v1

    :goto_0
    if-eqz v0, :cond_9

    .line 869
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ak:Z

    if-nez v0, :cond_9

    .line 870
    sput p6, Lcom/tkay/expressad/video/module/TkayVideoView;->y:I

    .line 871
    sput p7, Lcom/tkay/expressad/video/module/TkayVideoView;->z:I

    add-int/lit8 p8, p8, 0x4

    .line 873
    sput p8, Lcom/tkay/expressad/video/module/TkayVideoView;->A:I

    add-int/lit8 p9, p9, 0x4

    .line 874
    sput p9, Lcom/tkay/expressad/video/module/TkayVideoView;->B:I

    int-to-float p6, p3

    int-to-float p7, p4

    div-float/2addr p6, p7

    const/4 p7, 0x0

    .line 878
    :try_start_0
    iget-wide p8, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->ai:D

    iget-wide v4, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aj:D
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    div-double/2addr p8, v4

    double-to-float p7, p8

    goto :goto_1

    :catchall_0
    move-exception p8

    .line 880
    invoke-virtual {p8}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :goto_1
    if-lez p5, :cond_4

    .line 883
    sput p5, Lcom/tkay/expressad/video/module/TkayVideoView;->x:I

    if-lez p5, :cond_4

    .line 6913
    new-instance p8, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {p8}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    .line 6914
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getContext()Landroid/content/Context;

    move-result-object p9

    int-to-float p5, p5

    invoke-static {p9, p5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p5

    int-to-float p5, p5

    invoke-virtual {p8, p5}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    const/4 p5, -0x1

    .line 6915
    invoke-virtual {p8, p5}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 6916
    invoke-virtual {p8, v3, v1}, Landroid/graphics/drawable/GradientDrawable;->setStroke(II)V

    .line 6917
    sget p5, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 p9, 0x10

    if-lt p5, p9, :cond_3

    .line 6918
    invoke-virtual {p0, p8}, Lcom/tkay/expressad/video/module/TkayVideoView;->setBackground(Landroid/graphics/drawable/Drawable;)V

    .line 6919
    iget-object p5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {p5, p8}, Lcom/tkay/expressad/playercommon/PlayerView;->setBackground(Landroid/graphics/drawable/Drawable;)V

    goto :goto_2

    .line 6921
    :cond_3
    invoke-virtual {p0, p8}, Lcom/tkay/expressad/video/module/TkayVideoView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 6922
    iget-object p5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {p5, p8}, Lcom/tkay/expressad/playercommon/PlayerView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 6924
    :goto_2
    sget p5, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 p8, 0x15

    if-lt p5, p8, :cond_4

    .line 6925
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->setClipToOutline(Z)V

    .line 6926
    iget-object p5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {p5, v3}, Lcom/tkay/expressad/playercommon/PlayerView;->setClipToOutline(Z)V

    :cond_4
    sub-float/2addr p6, p7

    .line 887
    invoke-static {p6}, Ljava/lang/Math;->abs(F)F

    move-result p5

    const p6, 0x3dcccccd    # 0.1f

    cmpg-float p5, p5, p6

    if-lez p5, :cond_6

    iget p5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->at:I

    if-ne p5, v3, :cond_5

    goto :goto_3

    .line 901
    :cond_5
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->l()V

    .line 902
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/video/module/TkayVideoView;->videoOperate(I)V

    return-void

    .line 888
    :cond_6
    :goto_3
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->l()V

    .line 889
    iget-boolean p5, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->as:Z

    if-eqz p5, :cond_8

    .line 890
    invoke-virtual {p0, p3, p4}, Lcom/tkay/expressad/video/module/TkayVideoView;->setLayoutCenter(II)V

    .line 891
    sget-boolean p1, Lcom/tkay/expressad/video/module/TkayVideoView;->av:Z

    const-string p2, ""

    if-eqz p1, :cond_7

    .line 892
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 p3, 0x72

    invoke-interface {p1, p3, p2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void

    .line 894
    :cond_7
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 p3, 0x74

    invoke-interface {p1, p3, p2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void

    .line 897
    :cond_8
    invoke-virtual {p0, p2, p1, p3, p4}, Lcom/tkay/expressad/video/module/TkayVideoView;->setLayoutParam(IIII)V

    return-void

    .line 906
    :cond_9
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->l()V

    :cond_a
    return-void
.end method

.method public soundOperate(II)V
    .locals 1

    const-string v0, "2"

    .line 933
    invoke-virtual {p0, p1, p2, v0}, Lcom/tkay/expressad/video/module/TkayVideoView;->soundOperate(IILjava/lang/String;)V

    return-void
.end method

.method public soundOperate(IILjava/lang/String;)V
    .locals 4

    .line 938
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    if-eqz v0, :cond_6

    .line 939
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->aw:I

    const/4 v0, 0x2

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-ne p1, v2, :cond_1

    .line 941
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->E:Lcom/tkay/expressad/video/widget/SoundImageView;

    if-eqz v3, :cond_0

    .line 942
    invoke-virtual {v3, v1}, Lcom/tkay/expressad/video/widget/SoundImageView;->setSoundStatus(Z)V

    .line 944
    :cond_0
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v3}, Lcom/tkay/expressad/playercommon/PlayerView;->closeSound()V

    goto :goto_0

    :cond_1
    if-ne p1, v0, :cond_3

    .line 953
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->E:Lcom/tkay/expressad/video/widget/SoundImageView;

    if-eqz v3, :cond_2

    .line 954
    invoke-virtual {v3, v2}, Lcom/tkay/expressad/video/widget/SoundImageView;->setSoundStatus(Z)V

    .line 956
    :cond_2
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {v3}, Lcom/tkay/expressad/playercommon/PlayerView;->openSound()V

    .line 966
    :cond_3
    :goto_0
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v3, :cond_4

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v3

    if-eqz v3, :cond_4

    .line 967
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->E:Lcom/tkay/expressad/video/widget/SoundImageView;

    if-eqz p2, :cond_6

    .line 968
    invoke-virtual {p2, v1}, Lcom/tkay/expressad/video/widget/SoundImageView;->setVisibility(I)V

    goto :goto_1

    :cond_4
    if-ne p2, v2, :cond_5

    .line 972
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->E:Lcom/tkay/expressad/video/widget/SoundImageView;

    if-eqz p2, :cond_6

    const/16 v0, 0x8

    .line 973
    invoke-virtual {p2, v0}, Lcom/tkay/expressad/video/widget/SoundImageView;->setVisibility(I)V

    goto :goto_1

    :cond_5
    if-ne p2, v0, :cond_6

    .line 976
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->E:Lcom/tkay/expressad/video/widget/SoundImageView;

    if-eqz p2, :cond_6

    .line 977
    invoke-virtual {p2, v1}, Lcom/tkay/expressad/video/widget/SoundImageView;->setVisibility(I)V

    :cond_6
    :goto_1
    if-eqz p3, :cond_7

    const-string p2, "2"

    .line 983
    invoke-virtual {p3, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_7

    .line 984
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    if-eqz p2, :cond_7

    .line 985
    iget-object p2, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/4 p3, 0x7

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {p2, p3, p1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_7
    return-void
.end method

.method public videoOperate(I)V
    .locals 2

    .line 993
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->f:Z

    if-eqz v0, :cond_4

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 995
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_4

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->isfront()Z

    move-result p1

    if-eqz p1, :cond_4

    .line 997
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->V:Z

    if-nez p1, :cond_4

    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->an:Z

    if-nez p1, :cond_4

    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->W:Z

    if-nez p1, :cond_4

    sget-boolean p1, Lcom/tkay/expressad/foundation/f/b;->c:Z

    if-nez p1, :cond_4

    .line 998
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->i()V

    return-void

    :cond_0
    const/4 v1, 0x2

    if-ne p1, v1, :cond_1

    .line 1002
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_4

    .line 1004
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->h()V

    return-void

    :cond_1
    const/4 v1, 0x3

    if-ne p1, v1, :cond_2

    .line 1007
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->am:Z

    if-nez p1, :cond_4

    .line 1008
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->D:Lcom/tkay/expressad/playercommon/PlayerView;

    invoke-virtual {p1}, Lcom/tkay/expressad/playercommon/PlayerView;->release()V

    .line 1009
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->am:Z

    return-void

    :cond_2
    const/4 v1, 0x5

    if-ne p1, v1, :cond_3

    .line 1012
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->W:Z

    .line 1013
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->am:Z

    if-nez p1, :cond_4

    .line 1014
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->h()V

    return-void

    :cond_3
    const/4 v0, 0x4

    if-ne p1, v0, :cond_4

    const/4 p1, 0x0

    .line 1017
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->W:Z

    .line 1018
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoView;->am:Z

    if-nez p1, :cond_4

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->isMiniCardShowing()Z

    move-result p1

    if-nez p1, :cond_4

    .line 1019
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayVideoView;->i()V

    :cond_4
    return-void
.end method
