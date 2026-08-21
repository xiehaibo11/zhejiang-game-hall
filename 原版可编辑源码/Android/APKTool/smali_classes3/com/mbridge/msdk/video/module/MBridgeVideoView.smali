.class public Lcom/mbridge/msdk/video/module/MBridgeVideoView;
.super Lcom/mbridge/msdk/video/module/MBridgeBaseView;
.source "MBridgeVideoView.java"

# interfaces
.implements Lcom/mbridge/msdk/video/js/i;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/video/module/MBridgeVideoView$a;,
        Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;
    }
.end annotation


# static fields
.field public static final TAG:Ljava/lang/String; = "MBridgeVideoView"

.field private static al:Z

.field private static n:I

.field private static o:I

.field private static p:I

.field private static q:I

.field private static r:I


# instance fields
.field private A:Z

.field private B:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeSegmentsProgressBar;

.field private C:Lcom/mbridge/msdk/video/dynview/e/a;

.field private D:I

.field private E:Landroid/widget/FrameLayout;

.field private F:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

.field private G:Lcom/mbridge/msdk/video/js/factory/b;

.field private H:I

.field private I:Landroid/widget/RelativeLayout;

.field private J:Z

.field private K:Lcom/mbridge/msdk/video/module/a/a;

.field private L:Z

.field private M:Z

.field private N:Z

.field private O:Ljava/lang/String;

.field private P:I

.field private Q:I

.field private R:I

.field private S:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

.field private T:Lcom/mbridge/msdk/widget/dialog/a;

.field private U:Ljava/lang/String;

.field private V:D

.field private W:D

.field private aA:Z

.field private aB:Landroid/view/animation/AlphaAnimation;

.field private aC:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

.field private aD:I

.field private aE:I

.field private aF:I

.field private aG:I

.field private aH:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters;

.field private aI:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

.field private aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

.field private aK:Z

.field private aL:Ljava/lang/Runnable;

.field private aM:Ljava/lang/Runnable;

.field private aa:Z

.field private ab:Z

.field private ac:Z

.field private ad:Z

.field private ae:Z

.field private af:Z

.field private ag:Z

.field private ah:Z

.field private ai:Z

.field private aj:I

.field private ak:Z

.field private am:I

.field private an:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

.field private ao:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

.field private ap:Ljava/lang/String;

.field private aq:I

.field private ar:I

.field private as:I

.field private at:Z

.field private au:Z

.field private av:Z

.field private aw:Z

.field private ax:Z

.field private ay:Z

.field private az:Z

.field public mCampOrderViewData:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field public mCampaignSize:I

.field public mCurrPlayNum:I

.field public mCurrentPlayProgressTime:I

.field public mMuteSwitch:I

.field private s:Lcom/mbridge/msdk/playercommon/PlayerView;

.field private t:Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;

.field private u:Landroid/widget/TextView;

.field private v:Landroid/view/View;

.field private w:Landroid/widget/RelativeLayout;

.field private x:Landroid/widget/ImageView;

.field private y:Landroid/widget/ProgressBar;

.field private z:Lcom/mbridge/msdk/widget/FeedBackButton;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 355
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 141
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mMuteSwitch:I

    .line 144
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->D:I

    const/4 v0, 0x1

    .line 145
    iput v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampaignSize:I

    .line 146
    iput v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCurrPlayNum:I

    .line 147
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCurrentPlayProgressTime:I

    .line 154
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->J:Z

    .line 209
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->L:Z

    .line 210
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->M:Z

    .line 211
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->N:Z

    const-string v1, ""

    .line 236
    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    .line 258
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aa:Z

    .line 263
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ab:Z

    .line 268
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ac:Z

    .line 277
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ad:Z

    .line 282
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ae:Z

    .line 286
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->af:Z

    .line 290
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ag:Z

    .line 295
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ah:Z

    .line 306
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ai:Z

    .line 315
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ak:Z

    const/4 v1, 0x2

    .line 319
    iput v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->am:I

    .line 329
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->at:Z

    .line 330
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->au:Z

    .line 331
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->av:Z

    .line 332
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aw:Z

    .line 333
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ax:Z

    .line 334
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ay:Z

    .line 335
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->az:Z

    .line 336
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    .line 342
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aD:I

    const/4 v0, 0x5

    .line 343
    iput v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aE:I

    .line 344
    iput v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aF:I

    .line 345
    iput v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aG:I

    .line 352
    new-instance v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    .line 1400
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aK:Z

    .line 2287
    new-instance p1, Lcom/mbridge/msdk/video/module/MBridgeVideoView$2;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$2;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aL:Ljava/lang/Runnable;

    .line 2618
    new-instance p1, Lcom/mbridge/msdk/video/module/MBridgeVideoView$5;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$5;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aM:Ljava/lang/Runnable;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 1

    .line 359
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 141
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mMuteSwitch:I

    .line 144
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->D:I

    const/4 p2, 0x1

    .line 145
    iput p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampaignSize:I

    .line 146
    iput p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCurrPlayNum:I

    .line 147
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCurrentPlayProgressTime:I

    .line 154
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->J:Z

    .line 209
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->L:Z

    .line 210
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->M:Z

    .line 211
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->N:Z

    const-string v0, ""

    .line 236
    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    .line 258
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aa:Z

    .line 263
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ab:Z

    .line 268
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ac:Z

    .line 277
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ad:Z

    .line 282
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ae:Z

    .line 286
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->af:Z

    .line 290
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ag:Z

    .line 295
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ah:Z

    .line 306
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ai:Z

    .line 315
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ak:Z

    const/4 v0, 0x2

    .line 319
    iput v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->am:I

    .line 329
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->at:Z

    .line 330
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->au:Z

    .line 331
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->av:Z

    .line 332
    iput-boolean p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aw:Z

    .line 333
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ax:Z

    .line 334
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ay:Z

    .line 335
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->az:Z

    .line 336
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    .line 342
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aD:I

    const/4 p2, 0x5

    .line 343
    iput p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aE:I

    .line 344
    iput p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aF:I

    .line 345
    iput p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aG:I

    .line 352
    new-instance p2, Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    invoke-direct {p2, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    iput-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    .line 1400
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aK:Z

    .line 2287
    new-instance p1, Lcom/mbridge/msdk/video/module/MBridgeVideoView$2;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$2;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aL:Ljava/lang/Runnable;

    .line 2618
    new-instance p1, Lcom/mbridge/msdk/video/module/MBridgeVideoView$5;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$5;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aM:Ljava/lang/Runnable;

    return-void
.end method

.method static synthetic A(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)I
    .locals 0

    .line 91
    iget p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aG:I

    return p0
.end method

.method static synthetic B(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aI:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

    return-object p0
.end method

.method static synthetic C(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Z
    .locals 0

    .line 91
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->N:Z

    return p0
.end method

.method static synthetic D(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Landroid/view/animation/AlphaAnimation;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aB:Landroid/view/animation/AlphaAnimation;

    return-object p0
.end method

.method static synthetic E(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Landroid/widget/ImageView;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->x:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic F(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Landroid/widget/FrameLayout;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->E:Landroid/widget/FrameLayout;

    return-object p0
.end method

.method static synthetic G(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)I
    .locals 0

    .line 91
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->k()I

    move-result p0

    return p0
.end method

.method static synthetic H(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)I
    .locals 0

    .line 91
    iget p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aD:I

    return p0
.end method

.method static synthetic I(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Lcom/mbridge/msdk/video/module/a/a;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->K:Lcom/mbridge/msdk/video/module/a/a;

    return-object p0
.end method

.method static synthetic J(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)I
    .locals 0

    .line 91
    iget p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aE:I

    return p0
.end method

.method static synthetic K(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Ljava/lang/Runnable;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aM:Ljava/lang/Runnable;

    return-object p0
.end method

.method static synthetic L(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)I
    .locals 2

    .line 91
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aE:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aE:I

    return v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeVideoView;I)I
    .locals 0

    .line 91
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->H:I

    return p1
.end method

.method private a(II)Ljava/lang/String;
    .locals 3

    const-string v0, ""

    if-eqz p2, :cond_0

    int-to-float p1, p1

    int-to-float v1, p2

    div-float/2addr p1, v1

    float-to-double v1, p1

    .line 1187
    :try_start_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {v1, v2}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/Double;)D

    move-result-wide v1

    invoke-virtual {p1, v1, v2}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    .line 1189
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 1192
    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method private a()V
    .locals 3

    .line 433
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e()Z

    move-result v0

    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f:Z

    .line 434
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f:Z

    if-nez v0, :cond_0

    const-string v0, "MBridgeVideoView"

    const-string v1, "MBridgeVideoView init fail"

    .line 435
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 437
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->c()V

    .line 438
    new-instance v0, Landroid/view/animation/AlphaAnimation;

    const/4 v1, 0x0

    const/high16 v2, 0x42c80000    # 100.0f

    invoke-direct {v0, v1, v2}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aB:Landroid/view/animation/AlphaAnimation;

    const-wide/16 v1, 0xc8

    .line 439
    invoke-virtual {v0, v1, v2}, Landroid/view/animation/AlphaAnimation;->setDuration(J)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V
    .locals 0

    .line 91
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a()V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Ljava/lang/String;)V
    .locals 9

    .line 10368
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->K:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_2

    .line 10369
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    .line 10371
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, ""

    if-eqz v0, :cond_0

    .line 10374
    :try_start_1
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->b()I

    move-result v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    :cond_0
    move-object v7, v1

    .line 10376
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a:Landroid/content/Context;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 10378
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCampaignUnitId()Ljava/lang/String;

    move-result-object v2

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 10379
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v3

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 10380
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v4

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 10381
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v5

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 10382
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v6

    move-object v1, p1

    .line 10376
    invoke-static/range {v0 .. v7}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 10385
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    const/4 p1, 0x0

    .line 10391
    :try_start_2
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_2

    .line 10392
    :try_start_3
    sget-object p1, Lcom/mbridge/msdk/foundation/same/a;->p:Ljava/lang/String;

    const/4 v1, 0x0

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a(I)Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_3
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_2

    :catch_1
    move-exception p1

    goto :goto_1

    :catch_2
    move-exception v0

    move-object v8, v0

    move-object v0, p1

    move-object p1, v8

    .line 10394
    :goto_1
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    .line 10396
    :goto_2
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->K:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v1, 0x69

    invoke-interface {p1, v1, v0}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 10397
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 10399
    :try_start_4
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {p1, p0}, Lcom/mbridge/msdk/video/module/b/b;->d(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_3

    goto :goto_3

    :catch_3
    move-exception p0

    .line 10401
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string p1, "MBridgeVideoView"

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_3
    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 2

    .line 2210
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView$13;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$13;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/same/c/c;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Z)Z
    .locals 0

    .line 91
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    return p1
.end method

.method static synthetic a(Z)Z
    .locals 0

    .line 91
    sput-boolean p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->al:Z

    return p0
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Lcom/mbridge/msdk/playercommon/PlayerView;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    return-object p0
.end method

.method private b(Z)Ljava/lang/String;
    .locals 4

    .line 2109
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ak:Z

    const-string v1, ""

    if-nez v0, :cond_0

    return-object v1

    .line 2113
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 2114
    iget-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->at:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, "Alert_window_status"

    if-nez v2, :cond_1

    .line 2115
    :try_start_1
    sget v2, Lcom/mbridge/msdk/foundation/same/a;->A:I

    invoke-virtual {v0, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2118
    :cond_1
    iget-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->av:Z

    if-eqz v2, :cond_2

    .line 2119
    sget v2, Lcom/mbridge/msdk/foundation/same/a;->C:I

    invoke-virtual {v0, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2122
    :cond_2
    iget-boolean v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->au:Z

    if-eqz v2, :cond_3

    .line 2123
    sget v2, Lcom/mbridge/msdk/foundation/same/a;->B:I

    invoke-virtual {v0, v3, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_3
    const-string v2, "complete_info"

    if-eqz p1, :cond_4

    const/4 p1, 0x1

    goto :goto_0

    :cond_4
    const/4 p1, 0x2

    .line 2126
    :goto_0
    invoke-virtual {v0, v2, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 2128
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object p1

    :catch_0
    const-string p1, "MBridgeVideoView"

    const-string v0, "getIVRewardStatusString ERROR"

    .line 2131
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-object v1
.end method

.method private b()V
    .locals 9

    .line 554
    :try_start_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ak:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const/16 v1, 0x8

    const-string v2, ""

    const/4 v3, 0x2

    if-eqz v0, :cond_e

    :try_start_1
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aq:I

    sget v4, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-eq v0, v4, :cond_0

    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aq:I

    sget v4, Lcom/mbridge/msdk/foundation/same/a;->x:I

    if-ne v0, v4, :cond_e

    .line 555
    :cond_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->at:Z

    if-eqz v0, :cond_2

    .line 556
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aq:I

    sget v1, Lcom/mbridge/msdk/foundation/same/a;->x:I

    if-ne v0, v1, :cond_1

    .line 558
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_1

    .line 559
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ax:Z

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b(Z)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v3, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_1
    return-void

    .line 564
    :cond_2
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aq:I

    sget v4, Lcom/mbridge/msdk/foundation/same/a;->x:I

    if-ne v0, v4, :cond_4

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->az:Z

    if-eqz v0, :cond_4

    .line 565
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_3

    .line 566
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ax:Z

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b(Z)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v3, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_3
    return-void

    .line 572
    :cond_4
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aw:Z

    if-eqz v0, :cond_d

    .line 573
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/PlayerView;->getCurPosition()I

    move-result v0

    div-int/lit16 v0, v0, 0x3e8

    .line 574
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v4}, Lcom/mbridge/msdk/playercommon/PlayerView;->getDuration()I

    move-result v4

    if-nez v4, :cond_5

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoLength()I

    move-result v4

    goto :goto_0

    :cond_5
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v4}, Lcom/mbridge/msdk/playercommon/PlayerView;->getDuration()I

    move-result v4

    :goto_0
    int-to-float v5, v0

    int-to-float v4, v4

    div-float/2addr v5, v4

    const/high16 v4, 0x42c80000    # 100.0f

    mul-float/2addr v5, v4

    float-to-int v4, v5

    .line 578
    iget v5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aq:I

    sget v6, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-ne v5, v6, :cond_a

    .line 579
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f()V

    .line 582
    iget v5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ar:I

    sget v6, Lcom/mbridge/msdk/foundation/same/a;->y:I

    if-ne v5, v6, :cond_7

    iget v5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->as:I

    if-lt v4, v5, :cond_7

    .line 583
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_6

    .line 584
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ax:Z

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b(Z)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v3, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_6
    return-void

    .line 590
    :cond_7
    iget v5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ar:I

    sget v6, Lcom/mbridge/msdk/foundation/same/a;->z:I

    if-ne v5, v6, :cond_9

    iget v5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->as:I

    if-lt v0, v5, :cond_9

    .line 591
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_8

    .line 592
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ax:Z

    invoke-direct {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b(Z)Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v3, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_8
    return-void

    .line 596
    :cond_9
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v3, :cond_a

    .line 597
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-interface {v3, v1, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 602
    :cond_a
    iget v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aq:I

    sget v5, Lcom/mbridge/msdk/foundation/same/a;->x:I

    if-ne v3, v5, :cond_d

    .line 604
    iget v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ar:I

    sget v5, Lcom/mbridge/msdk/foundation/same/a;->y:I

    if-ne v3, v5, :cond_c

    iget v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->as:I

    if-lt v4, v3, :cond_c

    .line 605
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f()V

    .line 606
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_b

    .line 607
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_b
    return-void

    .line 613
    :cond_c
    iget v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ar:I

    sget v4, Lcom/mbridge/msdk/foundation/same/a;->z:I

    if-ne v3, v4, :cond_d

    iget v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->as:I

    if-lt v0, v3, :cond_d

    .line 614
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f()V

    .line 615
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_d

    .line 616
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_d
    return-void

    .line 629
    :cond_e
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_15

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v0

    if-eq v0, v3, :cond_15

    .line 630
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->k()I

    move-result v0

    .line 631
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v4}, Lcom/mbridge/msdk/playercommon/PlayerView;->getCurPosition()I

    move-result v4

    div-int/lit16 v4, v4, 0x3e8

    .line 634
    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v5

    const/4 v6, 0x5

    const/4 v7, 0x0

    const/4 v8, 0x1

    if-ne v5, v6, :cond_11

    iget v5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCurrPlayNum:I

    if-le v5, v8, :cond_11

    if-nez v0, :cond_f

    goto :goto_2

    :cond_f
    if-lez v0, :cond_13

    if-ge v4, v0, :cond_13

    :cond_10
    :goto_1
    move v7, v8

    goto :goto_2

    :cond_11
    if-lez v0, :cond_12

    if-lt v4, v0, :cond_10

    :cond_12
    if-nez v0, :cond_13

    goto :goto_1

    :cond_13
    :goto_2
    if-eqz v7, :cond_14

    .line 643
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->R:I

    if-ne v0, v8, :cond_14

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ai:Z

    if-nez v0, :cond_14

    .line 644
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f()V

    .line 645
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_16

    .line 646
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    goto :goto_3

    .line 649
    :cond_14
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_16

    .line 650
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-interface {v0, v3, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    goto :goto_3

    .line 654
    :cond_15
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_16

    .line 655
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-interface {v0, v3, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_3

    :catch_0
    move-exception v0

    .line 659
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeVideoView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_16
    :goto_3
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Z)Z
    .locals 0

    .line 91
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->az:Z

    return p1
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ao:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Z)Z
    .locals 0

    .line 91
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->L:Z

    return p1
.end method

.method static synthetic d(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Z
    .locals 0

    .line 91
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ak:Z

    return p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Z)Z
    .locals 0

    .line 91
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->au:Z

    return p1
.end method

.method private e()Z
    .locals 4

    const/4 v0, 0x0

    .line 1234
    :try_start_0
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    const-string v2, "mbridge_vfpv"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/playercommon/PlayerView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    .line 1235
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    const-string v2, "mbridge_sound_switch"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->t:Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;

    .line 1236
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    const-string v2, "mbridge_tv_count"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->u:Landroid/widget/TextView;

    .line 1237
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    const-string v2, "mbridge_rl_playing_close"

    invoke-virtual {p0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->v:Landroid/view/View;

    const/4 v2, 0x4

    if-eqz v1, :cond_0

    .line 1239
    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 1241
    :cond_0
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    const-string v3, "mbridge_top_control"

    invoke-virtual {p0, v1, v3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->w:Landroid/widget/RelativeLayout;

    .line 1242
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    const-string v3, "mbridge_videoview_bg"

    invoke-virtual {p0, v1, v3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->x:Landroid/widget/ImageView;

    .line 1243
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    const-string v3, "mbridge_video_progress_bar"

    invoke-virtual {p0, v1, v3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ProgressBar;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->y:Landroid/widget/ProgressBar;

    .line 1244
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    const-string v3, "mbridge_native_endcard_feed_btn"

    invoke-virtual {p0, v1, v3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/widget/FeedBackButton;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->z:Lcom/mbridge/msdk/widget/FeedBackButton;

    .line 1246
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    const-string v3, "mbridge_reward_segment_progressbar"

    invoke-virtual {p0, v1, v3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeSegmentsProgressBar;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->B:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeSegmentsProgressBar;

    .line 1247
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    const-string v3, "mbridge_reward_cta_layout"

    invoke-virtual {p0, v1, v3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/FrameLayout;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->E:Landroid/widget/FrameLayout;

    .line 1248
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    const-string v3, "mbridge_animation_click_view"

    invoke-virtual {p0, v1, v3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aC:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    .line 1249
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    const-string v3, "mbridge_reward_moreoffer_layout"

    invoke-virtual {p0, v1, v3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->I:Landroid/widget/RelativeLayout;

    .line 1250
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aA:Z

    const-string v3, "mbridge_reward_popview"

    invoke-virtual {p0, v1, v3}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

    iput-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aI:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

    new-array v1, v2, [Landroid/view/View;

    .line 1251
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    aput-object v2, v1, v0

    const/4 v2, 0x1

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->t:Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;

    aput-object v3, v1, v2

    const/4 v2, 0x2

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->u:Landroid/widget/TextView;

    aput-object v3, v1, v2

    const/4 v2, 0x3

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->v:Landroid/view/View;

    aput-object v3, v1, v2

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->isNotNULL([Landroid/view/View;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return v0

    :catchall_0
    move-exception v1

    .line 1253
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    const-string v3, "MBridgeVideoView"

    invoke-static {v3, v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    return v0
.end method

.method static synthetic e(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Z
    .locals 0

    .line 91
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aw:Z

    return p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Z)Z
    .locals 0

    .line 91
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ay:Z

    return p1
.end method

.method private f()V
    .locals 7

    .line 1301
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    if-eqz v0, :cond_4

    .line 1302
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-boolean v0, v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isRewardPopViewShowed:Z

    if-nez v0, :cond_0

    .line 1303
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aM:Ljava/lang/Runnable;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->removeCallbacks(Ljava/lang/Runnable;)Z

    .line 1305
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->M:Z

    const/4 v2, 0x1

    if-nez v1, :cond_2

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->L:Z

    if-nez v1, :cond_2

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->N:Z

    if-eqz v1, :cond_1

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    goto :goto_1

    :cond_2
    :goto_0
    move v1, v2

    :goto_1
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/playercommon/PlayerView;->setIsCovered(Z)V

    .line 1306
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/PlayerView;->onPause()V

    .line 1308
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isHasReportAdTrackPause()Z

    move-result v0

    if-nez v0, :cond_3

    .line 1309
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setHasReportAdTrackPause(Z)V

    .line 1310
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/l;->i()[Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x0

    invoke-static/range {v1 .. v6}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V

    .line 1312
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ao:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v0, :cond_4

    .line 1313
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ao:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    invoke-virtual {v0}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->pause()V

    const-string v0, "omsdk"

    const-string v1, "play:  videoEvents.pause()"

    .line 1314
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    .line 1318
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MBridgeVideoView"

    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_4
    :goto_2
    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V
    .locals 0

    .line 91
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b()V

    return-void
.end method

.method static synthetic f(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Z)Z
    .locals 0

    .line 91
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->av:Z

    return p1
.end method

.method static synthetic g(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Z)Ljava/lang/String;
    .locals 0

    .line 91
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b(Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private g()V
    .locals 7

    const-string v0, "MBridgeVideoView"

    .line 1324
    :try_start_0
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ab:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    const-string v2, "omsdk"

    if-nez v1, :cond_4

    const/4 v1, 0x2

    .line 1326
    :try_start_1
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ao:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v3, :cond_2

    .line 1327
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v3}, Lcom/mbridge/msdk/playercommon/PlayerView;->getDuration()I

    move-result v3

    int-to-float v3, v3

    const/4 v4, 0x0

    cmpl-float v5, v3, v4

    if-nez v5, :cond_0

    .line 1328
    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v5, :cond_0

    .line 1329
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoLength()I

    move-result v3

    int-to-float v3, v3

    .line 1331
    :cond_0
    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ao:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getMute()I

    move-result v6

    if-ne v6, v1, :cond_1

    const/high16 v4, 0x3f800000    # 1.0f

    :cond_1
    invoke-virtual {v5, v3, v4}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->start(FF)V

    const-string v3, "play: videoEvents.start()"

    .line 1332
    invoke-static {v2, v3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/IllegalArgumentException; {:try_start_1 .. :try_end_1} :catch_0
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2

    goto :goto_0

    :catch_0
    move-exception v2

    .line 1335
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/IllegalArgumentException;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1337
    :cond_2
    :goto_0
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v2}, Lcom/mbridge/msdk/playercommon/PlayerView;->playVideo()Z

    move-result v2

    .line 1345
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v3, :cond_3

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPlayable_ads_without_video()I

    move-result v3

    if-eq v3, v1, :cond_3

    if-nez v2, :cond_3

    const-string v1, "MediaPlayer"

    const-string v2, "\u64ad\u653e\u5931\u8d25"

    .line 1347
    invoke-static {v1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1348
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    if-eqz v1, :cond_3

    .line 1349
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    const-string v2, "play video failed"

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;->onPlayError(Ljava/lang/String;)V

    :cond_3
    const/4 v1, 0x1

    .line 1353
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ab:Z

    goto :goto_1

    .line 1355
    :cond_4
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aI:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

    if-eqz v1, :cond_5

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->N:Z

    if-eqz v1, :cond_5

    .line 1356
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aI:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;->onResume()V

    .line 1358
    :cond_5
    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->M:Z

    if-nez v1, :cond_7

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->L:Z

    if-nez v1, :cond_7

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->N:Z

    if-nez v1, :cond_7

    .line 1359
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    const/4 v3, 0x0

    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/playercommon/PlayerView;->setIsCovered(Z)V

    .line 1360
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/playercommon/PlayerView;->onResume()V

    .line 1361
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_6

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-boolean v1, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isRewardPopViewShowed:Z

    if-nez v1, :cond_6

    .line 1362
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aM:Ljava/lang/Runnable;

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->post(Ljava/lang/Runnable;)Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    .line 1365
    :cond_6
    :try_start_3
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ao:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v1, :cond_7

    .line 1366
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ao:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    invoke-virtual {v1}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->resume()V

    const-string v1, "play:  videoEvents.resume()"

    .line 1367
    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/IllegalArgumentException; {:try_start_3 .. :try_end_3} :catch_1
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    goto :goto_1

    :catch_1
    move-exception v1

    .line 1370
    :try_start_4
    invoke-virtual {v1}, Ljava/lang/IllegalArgumentException;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2

    goto :goto_1

    :catch_2
    move-exception v1

    .line 1375
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :cond_7
    :goto_1
    return-void
.end method

.method static synthetic g(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Z
    .locals 0

    .line 91
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->L:Z

    return p0
.end method

.method static synthetic h(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)I
    .locals 0

    .line 91
    iget p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aq:I

    return p0
.end method

.method private h()V
    .locals 16

    move-object/from16 v1, p0

    .line 1422
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->h(Landroid/content/Context;)I

    move-result v0

    int-to-float v0, v0

    .line 1423
    iget-object v2, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Landroid/content/Context;)I

    move-result v2

    int-to-float v2, v2

    .line 1425
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v4, 0x42680000    # 58.0f

    invoke-static {v3, v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v3

    .line 1426
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getContext()Landroid/content/Context;

    move-result-object v4

    const/high16 v5, 0x42d00000    # 104.0f

    invoke-static {v4, v5}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v4

    .line 1428
    iget-object v5, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v6, 0x1

    if-eqz v5, :cond_3

    iget-object v5, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v5

    const/4 v7, 0x2

    if-ne v5, v7, :cond_3

    .line 1429
    iget-object v5, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v5

    invoke-virtual {v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->c()I

    move-result v5

    if-ne v5, v6, :cond_0

    mul-int/lit8 v8, v3, 0x2

    int-to-float v8, v8

    sub-float/2addr v0, v8

    mul-int/lit8 v8, v4, 0x2

    int-to-float v8, v8

    sub-float/2addr v2, v8

    :cond_0
    if-ne v5, v7, :cond_1

    mul-int/lit8 v8, v4, 0x2

    int-to-float v8, v8

    sub-float/2addr v0, v8

    mul-int/lit8 v8, v3, 0x2

    int-to-float v8, v8

    sub-float/2addr v2, v8

    :cond_1
    if-nez v5, :cond_3

    .line 1441
    iget v5, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->d:I

    if-ne v5, v6, :cond_2

    mul-int/2addr v3, v7

    int-to-float v3, v3

    sub-float/2addr v0, v3

    mul-int/2addr v4, v7

    int-to-float v3, v4

    goto :goto_0

    :cond_2
    mul-int/2addr v4, v7

    int-to-float v4, v4

    sub-float/2addr v0, v4

    mul-int/2addr v3, v7

    int-to-float v3, v3

    :goto_0
    sub-float/2addr v2, v3

    .line 1451
    :cond_3
    iget-wide v3, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->V:D

    const-wide/16 v7, 0x0

    cmpg-double v5, v3, v7

    if-lez v5, :cond_e

    iget-wide v9, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->W:D

    cmpg-double v5, v9, v7

    if-lez v5, :cond_e

    const/4 v5, 0x0

    cmpg-float v7, v0, v5

    if-lez v7, :cond_e

    cmpg-float v5, v2, v5

    if-gtz v5, :cond_4

    goto/16 :goto_4

    :cond_4
    div-double/2addr v3, v9

    div-float v5, v0, v2

    float-to-double v7, v5

    .line 1458
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "videoWHDivide:"

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v3, v4}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v9, "  screenWHDivide:"

    invoke-virtual {v5, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7, v8}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const-string v9, "MBridgeVideoView"

    invoke-static {v9, v5}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1459
    invoke-static {v3, v4}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v5

    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/Double;)D

    move-result-wide v10

    .line 1460
    invoke-static {v7, v8}, Ljava/lang/Double;->valueOf(D)Ljava/lang/Double;

    move-result-object v5

    invoke-static {v5}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/Double;)D

    move-result-wide v7

    .line 1461
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v12, "videoWHDivideFinal:"

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v10, v11}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v12, "  screenWHDivideFinal:"

    invoke-virtual {v5, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v7, v8}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v9, v5}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1463
    iget-object v5, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v5}, Lcom/mbridge/msdk/playercommon/PlayerView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v5

    check-cast v5, Landroid/widget/FrameLayout$LayoutParams;

    cmpl-double v12, v10, v7

    const/16 v13, 0x11

    const/4 v14, -0x1

    if-lez v12, :cond_5

    float-to-double v7, v0

    .line 1465
    iget-wide v10, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->W:D

    mul-double/2addr v7, v10

    iget-wide v10, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->V:D

    div-double/2addr v7, v10

    .line 1466
    iput v14, v5, Landroid/widget/FrameLayout$LayoutParams;->width:I

    double-to-int v7, v7

    .line 1467
    iput v7, v5, Landroid/widget/FrameLayout$LayoutParams;->height:I

    .line 1468
    iput v13, v5, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    goto :goto_1

    :cond_5
    cmpg-double v7, v10, v7

    if-gez v7, :cond_6

    float-to-double v7, v2

    mul-double/2addr v7, v3

    double-to-int v7, v7

    .line 1472
    iput v7, v5, Landroid/widget/FrameLayout$LayoutParams;->width:I

    .line 1473
    iput v14, v5, Landroid/widget/FrameLayout$LayoutParams;->height:I

    .line 1474
    iput v13, v5, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    goto :goto_1

    .line 1477
    :cond_6
    iput v14, v5, Landroid/widget/FrameLayout$LayoutParams;->width:I

    .line 1478
    iput v14, v5, Landroid/widget/FrameLayout$LayoutParams;->height:I

    .line 1481
    :goto_1
    :try_start_0
    iget-object v7, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v7, :cond_d

    iget-object v7, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v7

    if-eqz v7, :cond_d

    .line 1482
    iget-object v7, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v7

    invoke-virtual {v7}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->b()I

    move-result v7

    .line 1483
    iget-object v8, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v8

    invoke-virtual {v8}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->c()I

    move-result v8

    const/16 v10, 0x66

    const/16 v11, 0xca

    if-eq v7, v10, :cond_7

    if-ne v7, v11, :cond_9

    :cond_7
    if-ne v8, v6, :cond_8

    .line 1488
    iput v14, v5, Landroid/widget/FrameLayout$LayoutParams;->width:I

    .line 1489
    iput v13, v5, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    .line 1490
    iget-wide v2, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->W:D

    iget-wide v12, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->V:D

    float-to-double v14, v0

    div-double/2addr v12, v14

    div-double/2addr v2, v12

    double-to-int v2, v2

    iput v2, v5, Landroid/widget/FrameLayout$LayoutParams;->height:I

    goto :goto_2

    :cond_8
    move v6, v14

    .line 1493
    iput v6, v5, Landroid/widget/FrameLayout$LayoutParams;->height:I

    .line 1494
    iput v13, v5, Landroid/widget/FrameLayout$LayoutParams;->gravity:I

    float-to-double v12, v2

    mul-double/2addr v12, v3

    double-to-int v2, v12

    .line 1495
    iput v2, v5, Landroid/widget/FrameLayout$LayoutParams;->width:I

    :cond_9
    :goto_2
    if-ne v7, v11, :cond_a

    .line 1499
    iget-object v2, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_a

    .line 1500
    iget-object v2, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a(Ljava/lang/String;)V

    :cond_a
    const/16 v2, 0x12e

    if-eq v7, v2, :cond_b

    const/16 v2, 0x322

    if-ne v7, v2, :cond_d

    .line 1504
    :cond_b
    iget-wide v2, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->V:D

    iget-wide v7, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->W:D

    div-double/2addr v2, v7

    const-wide/high16 v7, 0x3ff0000000000000L    # 1.0

    cmpl-double v2, v2, v7

    if-lez v2, :cond_c

    const/4 v2, -0x1

    .line 1505
    iput v2, v5, Landroid/widget/FrameLayout$LayoutParams;->width:I

    .line 1506
    iget-wide v2, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->W:D

    float-to-double v6, v0

    mul-double/2addr v2, v6

    iget-wide v6, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->V:D

    div-double/2addr v2, v6

    double-to-int v0, v2

    iput v0, v5, Landroid/widget/FrameLayout$LayoutParams;->height:I

    goto :goto_3

    .line 1508
    :cond_c
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v2, 0x435c0000    # 220.0f

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v0

    .line 1509
    iget-wide v2, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->V:D

    int-to-double v6, v0

    mul-double/2addr v2, v6

    iget-wide v6, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->W:D

    div-double/2addr v2, v6

    double-to-int v2, v2

    iput v2, v5, Landroid/widget/FrameLayout$LayoutParams;->width:I

    .line 1510
    iput v0, v5, Landroid/widget/FrameLayout$LayoutParams;->height:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_3

    :catchall_0
    move-exception v0

    .line 1515
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v9, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 1518
    :cond_d
    :goto_3
    iget-object v0, v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/playercommon/PlayerView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1519
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setMatchParent()V

    goto :goto_5

    .line 1452
    :cond_e
    :goto_4
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->i()V

    :goto_5
    return-void
.end method

.method static synthetic h(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Z)Z
    .locals 0

    .line 91
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ah:Z

    return p1
.end method

.method private i()V
    .locals 3

    const/4 v0, 0x0

    const/4 v1, -0x1

    .line 1525
    :try_start_0
    invoke-virtual {p0, v0, v0, v1, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setLayoutParam(IIII)V

    .line 1527
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->isLandscape()Z

    move-result v0

    if-nez v0, :cond_0

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f:Z

    if-eqz v0, :cond_0

    .line 1528
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/PlayerView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    .line 1530
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a:Landroid/content/Context;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->h(Landroid/content/Context;)I

    move-result v2

    .line 1531
    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->width:I

    mul-int/lit8 v2, v2, 0x9

    .line 1532
    div-int/lit8 v2, v2, 0x10

    iput v2, v0, Landroid/widget/FrameLayout$LayoutParams;->height:I

    const/16 v1, 0x11

    .line 1533
    iput v1, v0, Landroid/widget/FrameLayout$LayoutParams;->gravity:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 1537
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic i(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V
    .locals 0

    .line 91
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->g()V

    return-void
.end method

.method static synthetic i(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Z)Z
    .locals 0

    .line 91
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->A:Z

    return p1
.end method

.method static synthetic j(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Ljava/lang/String;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ap:Ljava/lang/String;

    return-object p0
.end method

.method private j()V
    .locals 5

    .line 2175
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/b/b;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2176
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 2177
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x1

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1, v4}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 2178
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->z:Lcom/mbridge/msdk/widget/FeedBackButton;

    if-eqz v0, :cond_1

    .line 2179
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->z:Lcom/mbridge/msdk/widget/FeedBackButton;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/widget/FeedBackButton;)V

    goto :goto_0

    .line 2182
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->z:Lcom/mbridge/msdk/widget/FeedBackButton;

    if-eqz v0, :cond_1

    const/16 v1, 0x8

    .line 2183
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/FeedBackButton;->setVisibility(I)V

    :cond_1
    :goto_0
    return-void
.end method

.method static synthetic j(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Z)Z
    .locals 0

    .line 91
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ax:Z

    return p1
.end method

.method private k()I
    .locals 4

    const/4 v0, 0x0

    .line 2583
    :try_start_0
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->l()I

    move-result v1

    .line 2584
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v2, :cond_0

    return v1

    .line 2588
    :cond_0
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCompleteTime()I

    move-result v0

    .line 2589
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v3, 0x5

    if-eq v2, v3, :cond_1

    if-le v0, v1, :cond_1

    move v0, v1

    :cond_1
    if-gtz v0, :cond_2

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 2598
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MBridgeVideoView"

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    move v1, v0

    :goto_0
    return v1
.end method

.method static synthetic k(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Ljava/lang/String;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic k(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Z)Z
    .locals 0

    .line 91
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->N:Z

    return p1
.end method

.method private l()I
    .locals 3

    const/4 v0, 0x0

    .line 2606
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    if-eqz v1, :cond_0

    .line 2607
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    invoke-virtual {v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;->b()I

    move-result v0

    :cond_0
    if-nez v0, :cond_1

    .line 2610
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoLength()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 2613
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MBridgeVideoView"

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return v0
.end method

.method static synthetic l(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Z
    .locals 0

    .line 91
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ax:Z

    return p0
.end method

.method static synthetic m(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Landroid/widget/ProgressBar;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->y:Landroid/widget/ProgressBar;

    return-object p0
.end method

.method static synthetic n(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Landroid/widget/RelativeLayout;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->w:Landroid/widget/RelativeLayout;

    return-object p0
.end method

.method static synthetic o(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Landroid/widget/TextView;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->u:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic p(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V
    .locals 0

    .line 91
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->j()V

    return-void
.end method

.method static synthetic q(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)I
    .locals 0

    .line 91
    iget p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->H:I

    return p0
.end method

.method static synthetic r(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V
    .locals 7

    .line 10408
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v0, :cond_0

    goto/16 :goto_1

    .line 10412
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-nez v0, :cond_1

    goto/16 :goto_1

    .line 10416
    :cond_1
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->J:Z

    if-eqz v0, :cond_2

    goto/16 :goto_1

    .line 10421
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMof_template_url()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 10422
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMof_template_url()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 10424
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v0

    if-nez v0, :cond_4

    goto/16 :goto_1

    .line 10427
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v0

    .line 10429
    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_5

    goto/16 :goto_1

    :cond_5
    :try_start_0
    const-string v1, "guideShow"

    .line 10434
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "guideDelay"

    .line 10435
    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "guideTime"

    .line 10436
    invoke-static {v0, v3}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "guideRewardTime"

    .line 10437
    invoke-static {v0, v4}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 10439
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_6

    .line 10440
    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aD:I

    .line 10442
    :cond_6
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v4, 0x3

    const/16 v5, 0xa

    const/4 v6, 0x5

    if-nez v1, :cond_8

    .line 10443
    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aE:I

    if-gt v1, v5, :cond_7

    if-ge v1, v4, :cond_8

    .line 10445
    :cond_7
    iput v6, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aE:I

    .line 10448
    :cond_8
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_a

    .line 10449
    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    iput v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aF:I

    if-gt v1, v5, :cond_9

    if-ge v1, v4, :cond_a

    .line 10451
    :cond_9
    iput v6, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aF:I

    .line 10454
    :cond_a
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_c

    .line 10455
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aG:I

    if-gt v0, v5, :cond_b

    if-ge v0, v6, :cond_c

    .line 10457
    :cond_b
    iput v6, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aG:I

    .line 10461
    :cond_c
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aD:I

    if-lez v0, :cond_13

    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aD:I

    const/4 v1, 0x2

    if-le v0, v1, :cond_d

    goto/16 :goto_1

    .line 10464
    :cond_d
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->k()I

    move-result v0

    if-eqz v0, :cond_e

    .line 10465
    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aE:I

    if-gt v0, v1, :cond_e

    goto/16 :goto_1

    .line 10468
    :cond_e
    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aE:I

    sub-int/2addr v0, v1

    if-ltz v0, :cond_f

    .line 10469
    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aG:I

    if-le v1, v0, :cond_f

    .line 10470
    iput v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aG:I

    .line 10472
    :cond_f
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->l()I

    move-result v0

    .line 10473
    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aG:I

    if-lt v1, v0, :cond_10

    .line 10474
    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aE:I

    sub-int v1, v0, v1

    iput v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aG:I

    .line 10476
    :cond_10
    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aE:I

    if-lt v1, v0, :cond_11

    goto :goto_1

    .line 10480
    :cond_11
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 10481
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAppName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const-string v1, "US"

    .line 10483
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/c/b;->g(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v2

    if-eqz v2, :cond_12

    .line 10485
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->ah()Ljava/lang/String;

    move-result-object v1

    .line 10487
    :cond_12
    new-instance v2, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters$Builder;

    const-string v3, ""

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    iget v5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aD:I

    invoke-direct {v2, v3, v4, v5, v1}, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters$Builder;-><init>(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V

    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aF:I

    .line 10488
    invoke-virtual {v2, v1}, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters$Builder;->setAutoDismissTime(I)Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters$Builder;

    move-result-object v1

    iget v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aG:I

    .line 10489
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters$Builder;->setReduceTime(I)Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters$Builder;

    move-result-object v1

    new-instance v2, Lcom/mbridge/msdk/video/module/MBridgeVideoView$4;

    invoke-direct {v2, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$4;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    .line 10490
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters$Builder;->setBehaviourListener(Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewBehaviourListener;)Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters$Builder;

    move-result-object v1

    .line 10518
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters$Builder;->setRightAnswerList(Ljava/util/ArrayList;)Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters$Builder;

    move-result-object v0

    .line 10519
    invoke-virtual {v0}, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters$Builder;->build()Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aH:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters;

    .line 10521
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aM:Ljava/lang/Runnable;

    const-wide/16 v1, 0x3e8

    invoke-virtual {p0, v0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p0

    .line 10523
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "MBridgeVideoView"

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_13
    :goto_1
    return-void
.end method

.method static synthetic s(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Landroid/view/View;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->v:Landroid/view/View;

    return-object p0
.end method

.method static synthetic t(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Lcom/mbridge/msdk/widget/FeedBackButton;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->z:Lcom/mbridge/msdk/widget/FeedBackButton;

    return-object p0
.end method

.method static synthetic u(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->t:Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;

    return-object p0
.end method

.method static synthetic v(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Lcom/mbridge/msdk/video/dynview/e/a;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->C:Lcom/mbridge/msdk/video/dynview/e/a;

    return-object p0
.end method

.method static synthetic w(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)I
    .locals 0

    .line 91
    iget p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->D:I

    return p0
.end method

.method static synthetic x(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Z
    .locals 0

    .line 91
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ay:Z

    return p0
.end method

.method static synthetic y(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Z
    .locals 0

    .line 91
    iget-boolean p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->at:Z

    return p0
.end method

.method static synthetic z(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeSegmentsProgressBar;
    .locals 0

    .line 91
    iget-object p0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->B:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeSegmentsProgressBar;

    return-object p0
.end method


# virtual methods
.method public alertWebViewShowed()V
    .locals 1

    const/4 v0, 0x1

    .line 713
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->L:Z

    .line 714
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setShowingAlertViewCover(Z)V

    return-void
.end method

.method protected final c()V
    .locals 2

    .line 465
    invoke-super {p0}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->c()V

    .line 466
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f:Z

    if-eqz v0, :cond_4

    .line 468
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->i:Z

    if-eqz v0, :cond_1

    .line 469
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0}, Lcom/mbridge/msdk/video/dynview/i/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0}, Lcom/mbridge/msdk/video/dynview/i/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)I

    move-result v0

    const/16 v1, 0x64

    if-ne v0, v1, :cond_2

    .line 470
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView$6;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$6;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/playercommon/PlayerView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_0

    .line 491
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView$7;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$7;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/playercommon/PlayerView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 506
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->t:Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;

    if-eqz v0, :cond_3

    .line 507
    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView$8;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$8;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 527
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->v:Landroid/view/View;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView$9;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$9;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_4
    return-void
.end method

.method public closeVideoOperate(II)V
    .locals 1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 1025
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->az:Z

    .line 1027
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_0

    .line 1028
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b()V

    :cond_0
    if-ne p2, v0, :cond_1

    .line 1032
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->gonePlayingCloseView()V

    goto :goto_0

    :cond_1
    const/4 p1, 0x2

    if-ne p2, p1, :cond_5

    .line 1034
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ay:Z

    if-eqz p1, :cond_2

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getVisibility()I

    move-result p1

    if-eqz p1, :cond_5

    .line 9380
    :cond_2
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f:Z

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->v:Landroid/view/View;

    invoke-virtual {p1}, Landroid/view/View;->getVisibility()I

    move-result p1

    if-eqz p1, :cond_5

    .line 9381
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->i:Z

    if-eqz p1, :cond_3

    .line 9382
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->A:Z

    if-eqz p1, :cond_4

    .line 9386
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->v:Landroid/view/View;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Landroid/view/View;->setVisibility(I)V

    .line 9388
    :cond_4
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ae:Z

    :cond_5
    :goto_0
    return-void
.end method

.method public defaultShow()V
    .locals 12

    .line 836
    invoke-super {p0}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->defaultShow()V

    const/4 v0, 0x1

    .line 837
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aa:Z

    .line 839
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->h(Landroid/content/Context;)I

    move-result v5

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a:Landroid/content/Context;

    .line 840
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Landroid/content/Context;)I

    move-result v6

    const/4 v3, 0x0

    const/4 v4, 0x0

    const/4 v7, 0x0

    const/4 v8, 0x0

    const/4 v9, 0x0

    const/4 v10, 0x0

    const/4 v11, 0x0

    move-object v2, p0

    .line 839
    invoke-virtual/range {v2 .. v11}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->showVideoLocation(IIIIIIIII)V

    .line 841
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->videoOperate(I)V

    .line 842
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->P:I

    if-nez v0, :cond_0

    const/4 v0, -0x1

    const/4 v1, 0x2

    .line 843
    invoke-virtual {p0, v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->closeVideoOperate(II)V

    :cond_0
    return-void
.end method

.method public dismissAllAlert()V
    .locals 3

    .line 719
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->S:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    if-eqz v0, :cond_0

    .line 720
    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->dismiss()V

    .line 722
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_1

    .line 723
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v1, 0x7d

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_1
    return-void
.end method

.method public getBorderViewHeight()I
    .locals 1

    .line 1148
    sget v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->r:I

    return v0
.end method

.method public getBorderViewLeft()I
    .locals 1

    .line 1158
    sget v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->p:I

    return v0
.end method

.method public getBorderViewRadius()I
    .locals 1

    .line 1168
    sget v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->n:I

    return v0
.end method

.method public getBorderViewTop()I
    .locals 1

    .line 1163
    sget v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->o:I

    return v0
.end method

.method public getBorderViewWidth()I
    .locals 1

    .line 1153
    sget v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->q:I

    return v0
.end method

.method public getCloseAlert()I
    .locals 1

    .line 1209
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->R:I

    return v0
.end method

.method public getCurrentProgress()Ljava/lang/String;
    .locals 5

    .line 1082
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;->a()I

    move-result v0

    const/4 v1, 0x0

    .line 1084
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v2, :cond_0

    .line 1085
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoLength()I

    move-result v1

    .line 1087
    :cond_0
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "progress"

    .line 1089
    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a(II)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "time"

    .line 1090
    invoke-virtual {v2, v3, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "duration"

    .line 1091
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v0, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 1092
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception v0

    .line 1094
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "MBridgeVideoView"

    invoke-static {v2, v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    const-string v0, "{}"

    return-object v0
.end method

.method public getMute()I
    .locals 1

    .line 2083
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->am:I

    return v0
.end method

.method public getUnitId()Ljava/lang/String;
    .locals 1

    .line 246
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    return-object v0
.end method

.method public getVideoSkipTime()I
    .locals 1

    .line 1217
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->P:I

    return v0
.end method

.method public gonePlayingCloseView()V
    .locals 4

    .line 1393
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->v:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    const/16 v1, 0x8

    if-eq v0, v1, :cond_0

    .line 1394
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->v:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    const/4 v0, 0x0

    .line 1395
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ae:Z

    .line 9403
    :cond_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aK:Z

    if-nez v0, :cond_4

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ah:Z

    if-nez v0, :cond_4

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->af:Z

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    const/4 v0, 0x1

    .line 9406
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aK:Z

    .line 9407
    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->P:I

    if-gez v1, :cond_2

    goto :goto_0

    :cond_2
    if-nez v1, :cond_3

    .line 9409
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ah:Z

    goto :goto_0

    .line 9411
    :cond_3
    new-instance v0, Landroid/os/Handler;

    invoke-direct {v0}, Landroid/os/Handler;-><init>()V

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView$11;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$11;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    iget v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->P:I

    mul-int/lit16 v2, v2, 0x3e8

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_4
    :goto_0
    return-void
.end method

.method public hideAlertView(I)V
    .locals 12

    .line 669
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->L:Z

    if-eqz v0, :cond_6

    const/4 v0, 0x0

    .line 670
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->L:Z

    const/4 v1, 0x1

    .line 671
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->at:Z

    .line 672
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setShowingAlertViewCover(Z)V

    .line 673
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v2

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    invoke-virtual {v2, v3, v4, v0}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    .line 5621
    sget-object v7, Lcom/mbridge/msdk/videocommon/d/c;->a:Ljava/lang/String;

    .line 675
    iget-object v5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a:Landroid/content/Context;

    iget-object v6, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v8, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    const/4 v9, 0x1

    const/4 v11, 0x1

    move v10, p1

    invoke-static/range {v5 .. v11}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;III)V

    const-string v0, ""

    if-nez p1, :cond_2

    .line 677
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->g()V

    .line 679
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ak:Z

    if-eqz p1, :cond_6

    iget p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aq:I

    sget v2, Lcom/mbridge/msdk/foundation/same/a;->x:I

    if-eq p1, v2, :cond_0

    iget p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aq:I

    sget v2, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-ne p1, v2, :cond_6

    .line 681
    :cond_0
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->au:Z

    .line 682
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz p1, :cond_1

    .line 683
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v2, 0x7c

    invoke-interface {p1, v2, v0}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 685
    :cond_1
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ay:Z

    .line 686
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->gonePlayingCloseView()V

    goto :goto_0

    .line 690
    :cond_2
    iput-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->av:Z

    .line 692
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ak:Z

    if-eqz p1, :cond_3

    iget p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aq:I

    sget v1, Lcom/mbridge/msdk/foundation/same/a;->x:I

    if-ne p1, v1, :cond_3

    .line 694
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->g()V

    return-void

    .line 698
    :cond_3
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ak:Z

    const/4 v1, 0x2

    if-eqz p1, :cond_5

    iget p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aq:I

    sget v2, Lcom/mbridge/msdk/foundation/same/a;->w:I

    if-ne p1, v2, :cond_5

    .line 699
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz p1, :cond_4

    .line 700
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ax:Z

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b(Z)Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v1, v0}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_4
    return-void

    .line 704
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz p1, :cond_6

    .line 705
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    invoke-interface {p1, v1, v0}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_6
    :goto_0
    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public isH5Canvas()Z
    .locals 2

    .line 1139
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    iget v0, v0, Landroid/view/ViewGroup$LayoutParams;->height:I

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Landroid/content/Context;)I

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

    .line 199
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->M:Z

    return v0
.end method

.method public isMiniCardShowing()Z
    .locals 1

    .line 271
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ad:Z

    return v0
.end method

.method public isRewardPopViewShowing()Z
    .locals 1

    .line 203
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->N:Z

    return v0
.end method

.method public isShowingAlertView()Z
    .locals 1

    .line 195
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->L:Z

    return v0
.end method

.method public isShowingTransparent()Z
    .locals 1

    .line 298
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ai:Z

    return v0
.end method

.method public isfront()Z
    .locals 7

    .line 1283
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 1285
    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->indexOfChild(Landroid/view/View;)I

    move-result v2

    .line 1286
    invoke-virtual {v0}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v3

    const/4 v4, 0x1

    add-int/2addr v2, v4

    move v5, v1

    :goto_0
    add-int/lit8 v6, v3, -0x1

    if-gt v2, v6, :cond_1

    .line 1289
    invoke-virtual {v0, v2}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v5

    invoke-virtual {v5}, Landroid/view/View;->getVisibility()I

    move-result v5

    if-nez v5, :cond_0

    iget-boolean v5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ad:Z

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

    .line 2057
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->af:Z

    const/4 p1, 0x0

    .line 2058
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ah:Z

    goto :goto_0

    :cond_0
    if-ne p1, v0, :cond_1

    .line 2060
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ag:Z

    :cond_1
    :goto_0
    return-void
.end method

.method public notifyVideoClose()V
    .locals 3

    .line 2070
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/4 v1, 0x2

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method public onActivityPause()V
    .locals 2

    .line 2562
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aI:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

    if-eqz v0, :cond_0

    .line 2563
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aI:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;->onPause()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 2566
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeVideoView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public onActivityResume()V
    .locals 2

    .line 2552
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aI:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

    if-eqz v0, :cond_0

    .line 2553
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aI:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;->onResume()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 2556
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeVideoView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public onActivityStop()V
    .locals 2

    .line 2572
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aI:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

    if-eqz v0, :cond_0

    .line 2573
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aI:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;->onStop()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 2576
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeVideoView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public onBackPress()V
    .locals 1

    .line 2033
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ad:Z

    if-nez v0, :cond_4

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->L:Z

    if-eqz v0, :cond_0

    goto :goto_0

    .line 2037
    :cond_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->au:Z

    if-eqz v0, :cond_1

    return-void

    .line 2040
    :cond_1
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ae:Z

    if-eqz v0, :cond_2

    .line 2041
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b()V

    return-void

    .line 2045
    :cond_2
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->af:Z

    if-eqz v0, :cond_3

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ag:Z

    if-eqz v0, :cond_3

    .line 2046
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b()V

    return-void

    .line 2049
    :cond_3
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->af:Z

    if-nez v0, :cond_4

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ah:Z

    if-eqz v0, :cond_4

    .line 2050
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b()V

    :cond_4
    :goto_0
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 1173
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 1174
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result p1

    if-eqz p1, :cond_0

    return-void

    .line 1178
    :cond_0
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f:Z

    if-eqz p1, :cond_1

    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aa:Z

    if-eqz p1, :cond_1

    .line 1179
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->h()V

    :cond_1
    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 2

    .line 2633
    invoke-super {p0}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->onDetachedFromWindow()V

    .line 2635
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aL:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 2636
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getHandler()Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aL:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    .line 2638
    :cond_0
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aD:I

    if-eqz v0, :cond_1

    .line 2639
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aM:Ljava/lang/Runnable;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->removeCallbacks(Ljava/lang/Runnable;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 2642
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeVideoView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V
    .locals 9

    .line 806
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->G:Lcom/mbridge/msdk/video/js/factory/b;

    .line 807
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f:Z

    const/4 v0, 0x0

    if-eqz p1, :cond_7

    .line 808
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->O:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_8

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_8

    .line 809
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->an:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    const/4 v1, 0x0

    if-eqz p1, :cond_1

    .line 810
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {p1, v2}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->registerAdView(Landroid/view/View;)V

    .line 811
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->t:Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;

    if-eqz p1, :cond_0

    .line 812
    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->an:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    sget-object v3, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->OTHER:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    invoke-virtual {v2, p1, v3, v1}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V

    .line 814
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->an:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->u:Landroid/widget/TextView;

    sget-object v3, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->OTHER:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    invoke-virtual {p1, v2, v3, v1}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V

    .line 815
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->an:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->v:Landroid/view/View;

    sget-object v3, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->CLOSE_AD:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    invoke-virtual {p1, v2, v3, v1}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V

    const-string p1, "OMSDK"

    const-string v2, "RV registerView"

    .line 816
    invoke-static {p1, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 7259
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_6

    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoResolution()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->b(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_6

    .line 7260
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoResolution()Ljava/lang/String;

    move-result-object p1

    .line 7261
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "MBridgeBaseView videoResolution:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "MBridgeVideoView"

    invoke-static {v3, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "x"

    .line 7262
    invoke-virtual {p1, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 7263
    array-length v2, p1

    const/4 v4, 0x2

    const-wide/16 v5, 0x0

    if-ne v2, v4, :cond_4

    .line 7264
    aget-object v2, p1, v0

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Ljava/lang/String;)D

    move-result-wide v7

    cmpl-double v2, v7, v5

    if-lez v2, :cond_2

    .line 7265
    aget-object v2, p1, v0

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Ljava/lang/String;)D

    move-result-wide v7

    iput-wide v7, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->V:D

    :cond_2
    const/4 v2, 0x1

    .line 7267
    aget-object v4, p1, v2

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Ljava/lang/String;)D

    move-result-wide v7

    cmpl-double v4, v7, v5

    if-lez v4, :cond_3

    .line 7268
    aget-object p1, p1, v2

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Ljava/lang/String;)D

    move-result-wide v7

    iput-wide v7, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->W:D

    .line 7270
    :cond_3
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "MBridgeBaseView mVideoW:"

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v7, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->V:D

    invoke-virtual {p1, v7, v8}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v2, "  mVideoH:"

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v7, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->W:D

    invoke-virtual {p1, v7, v8}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v3, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 7272
    :cond_4
    iget-wide v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->V:D

    cmpg-double p1, v2, v5

    if-gtz p1, :cond_5

    const-wide/high16 v2, 0x4094000000000000L    # 1280.0

    .line 7273
    iput-wide v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->V:D

    .line 7275
    :cond_5
    iget-wide v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->W:D

    cmpg-double p1, v2, v5

    if-gtz p1, :cond_6

    const-wide v2, 0x4086800000000000L    # 720.0

    .line 7276
    iput-wide v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->W:D

    .line 821
    :cond_6
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    iget v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->Q:I

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/playercommon/PlayerView;->initBufferIngParam(I)V

    .line 822
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->O:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoUrlEncode()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    invoke-virtual {p1, v2, v3, v4}, Lcom/mbridge/msdk/playercommon/PlayerView;->initVFPData(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/playercommon/VideoPlayerStatusListener;)Z

    .line 824
    iget p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->am:I

    const/4 v2, -0x1

    invoke-virtual {p0, p1, v2, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->soundOperate(IILjava/lang/String;)V

    goto :goto_0

    .line 827
    :cond_7
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz p1, :cond_8

    .line 828
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v1, 0xc

    const-string v2, "MBridgeVideoView initSuccess false"

    invoke-interface {p1, v1, v2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 831
    :cond_8
    :goto_0
    sput-boolean v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->al:Z

    return-void
.end method

.method public progressBarOperate(I)V
    .locals 1

    .line 1042
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f:Z

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 1044
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->y:Landroid/widget/ProgressBar;

    if-eqz p1, :cond_1

    const/16 v0, 0x8

    .line 1045
    invoke-virtual {p1, v0}, Landroid/widget/ProgressBar;->setVisibility(I)V

    goto :goto_0

    :cond_0
    const/4 v0, 0x2

    if-ne p1, v0, :cond_1

    .line 1048
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->y:Landroid/widget/ProgressBar;

    if-eqz p1, :cond_1

    const/4 v0, 0x0

    .line 1049
    invoke-virtual {p1, v0}, Landroid/widget/ProgressBar;->setVisibility(I)V

    :cond_1
    :goto_0
    return-void
.end method

.method public progressOperate(II)V
    .locals 4

    .line 1056
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f:Z

    if-eqz v0, :cond_4

    .line 1057
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "progressOperate progress:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "MBridgeVideoView"

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1059
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v3, 0x0

    if-eqz v0, :cond_0

    .line 1060
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoLength()I

    move-result v0

    goto :goto_0

    :cond_0
    move v0, v3

    :goto_0
    if-lez p1, :cond_1

    if-gt p1, v0, :cond_1

    .line 1063
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    if-eqz v0, :cond_1

    .line 1064
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 1065
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    mul-int/lit16 p1, p1, 0x3e8

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/playercommon/PlayerView;->seekTo(I)V

    :cond_1
    const/4 p1, 0x1

    if-ne p2, p1, :cond_2

    .line 1069
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->u:Landroid/widget/TextView;

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setVisibility(I)V

    goto :goto_1

    :cond_2
    const/4 p1, 0x2

    if-ne p2, p1, :cond_3

    .line 1071
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->u:Landroid/widget/TextView;

    invoke-virtual {p1, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 1073
    :cond_3
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->u:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_4

    .line 1074
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->j()V

    :cond_4
    return-void
.end method

.method public releasePlayer()V
    .locals 2

    .line 2648
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ac:Z

    if-nez v0, :cond_0

    .line 2649
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/PlayerView;->release()V

    .line 2652
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    if-eqz v0, :cond_1

    .line 2653
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;->c()V

    .line 2656
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->K:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_2

    const/4 v0, 0x0

    .line 2657
    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->K:Lcom/mbridge/msdk/video/module/a/a;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 2661
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeVideoView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public setAdSession(Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)V
    .locals 0

    .line 2073
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->an:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    return-void
.end method

.method public setBufferTimeout(I)V
    .locals 0

    .line 1229
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->Q:I

    return-void
.end method

.method public setCTALayoutVisibleOrGone()V
    .locals 4

    .line 2251
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v0, :cond_0

    return-void

    .line 2255
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    .line 2259
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->E:Landroid/widget/FrameLayout;

    if-nez v0, :cond_2

    return-void

    .line 2263
    :cond_2
    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->H:I

    const/4 v2, -0x1

    if-ge v1, v2, :cond_3

    return-void

    .line 2267
    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->F:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    if-nez v1, :cond_7

    if-nez v0, :cond_4

    goto :goto_0

    :cond_4
    if-nez v1, :cond_6

    .line 10238
    new-instance v0, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->F:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    .line 10239
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 10240
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->F:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;->setUnitId(Ljava/lang/String;)V

    .line 10241
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->K:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz v0, :cond_5

    .line 10242
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->F:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    new-instance v3, Lcom/mbridge/msdk/video/module/a/a/h;

    invoke-direct {v3, v0}, Lcom/mbridge/msdk/video/module/a/a/h;-><init>(Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;->setNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V

    .line 10244
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->F:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->G:Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;->preLoadData(Lcom/mbridge/msdk/video/js/factory/b;)V

    .line 10247
    :cond_6
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->E:Landroid/widget/FrameLayout;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->F:Lcom/mbridge/msdk/video/module/MBridgeClickCTAView;

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->addView(Landroid/view/View;)V

    .line 2271
    :cond_7
    :goto_0
    iget v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->H:I

    const/4 v1, 0x0

    if-ltz v0, :cond_8

    .line 2272
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->E:Landroid/widget/FrameLayout;

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void

    :cond_8
    if-ne v0, v2, :cond_a

    .line 2277
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->E:Landroid/widget/FrameLayout;

    invoke-virtual {v0}, Landroid/widget/FrameLayout;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_9

    .line 2278
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->E:Landroid/widget/FrameLayout;

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    .line 2279
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aL:Ljava/lang/Runnable;

    const-wide/16 v1, 0xbb8

    invoke-virtual {p0, v0, v1, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->postDelayed(Ljava/lang/Runnable;J)Z

    goto :goto_1

    .line 2281
    :cond_9
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->E:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    .line 2282
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getHandler()Landroid/os/Handler;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aL:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    :cond_a
    :goto_1
    return-void
.end method

.method public setCamPlayOrderCallback(Lcom/mbridge/msdk/video/dynview/e/a;Ljava/util/List;II)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/video/dynview/e/a;",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;II)V"
        }
    .end annotation

    .line 162
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->C:Lcom/mbridge/msdk/video/dynview/e/a;

    .line 163
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p1

    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampaignSize:I

    .line 164
    iput p3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCurrPlayNum:I

    .line 165
    iput p4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->D:I

    .line 166
    iput-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampOrderViewData:Ljava/util/List;

    .line 168
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez p1, :cond_0

    return-void

    .line 171
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result p1

    const/4 p2, 0x5

    if-ne p1, p2, :cond_5

    .line 172
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->B:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeSegmentsProgressBar;

    if-eqz p1, :cond_5

    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampOrderViewData:Ljava/util/List;

    if-nez p2, :cond_1

    goto :goto_1

    .line 176
    :cond_1
    iget p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampaignSize:I

    const/4 p3, 0x1

    if-le p2, p3, :cond_4

    const/4 p2, 0x0

    .line 177
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeSegmentsProgressBar;->setVisibility(I)V

    .line 178
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->B:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeSegmentsProgressBar;

    iget p4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampaignSize:I

    const/4 v0, 0x2

    invoke-virtual {p1, p4, v0}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeSegmentsProgressBar;->init(II)V

    .line 179
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-ge p2, p1, :cond_5

    .line 180
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {p1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoPlayProgress()I

    move-result p1

    if-lez p1, :cond_2

    .line 182
    iget-object p4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->B:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeSegmentsProgressBar;

    invoke-virtual {p4, p1, p2}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeSegmentsProgressBar;->setProgress(II)V

    .line 184
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->mCampOrderViewData:Ljava/util/List;

    invoke-interface {p1, p2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-boolean p1, p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isRewardPopViewShowed:Z

    if-eqz p1, :cond_3

    .line 185
    iput-boolean p3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->J:Z

    :cond_3
    add-int/lit8 p2, p2, 0x1

    goto :goto_0

    :cond_4
    const/16 p2, 0x8

    .line 189
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeSegmentsProgressBar;->setVisibility(I)V

    nop

    :cond_5
    :goto_1
    return-void
.end method

.method public setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 5

    .line 452
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeBaseView;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 453
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    if-eqz v0, :cond_2

    .line 454
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 455
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    const/4 v1, 0x0

    if-eqz p1, :cond_1

    .line 5191
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getReady_rate()I

    move-result v2

    const/4 v3, -0x1

    if-eq v2, v3, :cond_0

    .line 5192
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getReady_rate()I

    move-result p1

    goto :goto_0

    .line 5194
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object p1

    .line 5195
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    invoke-virtual {p1, v2, v3, v1}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/c;->r()I

    move-result p1

    goto :goto_0

    .line 5198
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object p1

    .line 5199
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    invoke-virtual {p1, v2, v3, v1}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/videocommon/d/c;->r()I

    move-result p1

    .line 5205
    :goto_0
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v2

    .line 5206
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    invoke-virtual {v2, v3, v4, v1}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/d/c;->s()I

    move-result v1

    .line 455
    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;->a(II)V

    :cond_2
    return-void
.end method

.method public setCloseAlert(I)V
    .locals 0

    .line 1213
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->R:I

    return-void
.end method

.method public setContainerViewOnNotifyListener(Lcom/mbridge/msdk/video/module/a/a;)V
    .locals 0

    .line 158
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->K:Lcom/mbridge/msdk/video/module/a/a;

    return-void
.end method

.method public setCover(Z)V
    .locals 1

    .line 1117
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f:Z

    if-eqz v0, :cond_0

    .line 1118
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/playercommon/PlayerView;->setIsCovered(Z)V

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

    .line 2104
    :goto_0
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aw:Z

    .line 2105
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " "

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aw:Z

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MBridgeVideoView"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public setIVRewardEnable(III)V
    .locals 0

    .line 2093
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aq:I

    .line 2094
    iput p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ar:I

    .line 2095
    iput p3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->as:I

    return-void
.end method

.method public setInstallDialogState(Z)V
    .locals 1

    .line 1111
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->M:Z

    .line 1112
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/playercommon/PlayerView;->setIsCovered(Z)V

    return-void
.end method

.method public setIsIV(Z)V
    .locals 1

    .line 443
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ak:Z

    .line 444
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    if-eqz v0, :cond_0

    .line 445
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;->a(Z)V

    :cond_0
    return-void
.end method

.method public setMiniEndCardState(Z)V
    .locals 0

    .line 1124
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ad:Z

    return-void
.end method

.method public setNotchPadding(IIII)V
    .locals 9

    const-string v0, "MBridgeVideoView"

    .line 2139
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "NOTCH VideoView "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "%1s-%2s-%3s-%4s"

    const/4 v3, 0x4

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const/4 v5, 0x0

    aput-object v4, v3, v5

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    const/4 v6, 0x1

    aput-object v4, v3, v6

    const/4 v4, 0x2

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    aput-object v7, v3, v4

    const/4 v4, 0x3

    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v7

    aput-object v7, v3, v4

    invoke-static {v2, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2141
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    .line 2142
    iget v2, v1, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 2143
    iget v3, v1, Landroid/widget/RelativeLayout$LayoutParams;->rightMargin:I

    .line 2144
    iget v4, v1, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 2145
    iget v1, v1, Landroid/widget/RelativeLayout$LayoutParams;->bottomMargin:I

    .line 2147
    invoke-static {p1, p2}, Ljava/lang/Math;->max(II)I

    move-result v7

    invoke-static {p3, p4}, Ljava/lang/Math;->max(II)I

    move-result v8

    invoke-static {v7, v8}, Ljava/lang/Math;->max(II)I

    move-result v7

    .line 2148
    invoke-static {v2, v3}, Ljava/lang/Math;->max(II)I

    move-result v2

    invoke-static {v4, v1}, Ljava/lang/Math;->max(II)I

    move-result v1

    invoke-static {v2, v1}, Ljava/lang/Math;->max(II)I

    move-result v1

    if-le v1, v7, :cond_0

    move v5, v6

    :cond_0
    if-nez v5, :cond_1

    .line 2151
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->w:Landroid/widget/RelativeLayout;

    if-eqz v1, :cond_1

    .line 2152
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->w:Landroid/widget/RelativeLayout;

    new-instance v8, Lcom/mbridge/msdk/video/module/MBridgeVideoView$12;

    move-object v2, v8

    move-object v3, p0

    move v4, p1

    move v5, p3

    move v6, p2

    move v7, p4

    invoke-direct/range {v2 .. v7}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$12;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;IIII)V

    const-wide/16 p1, 0xc8

    invoke-virtual {v1, v8, p1, p2}, Landroid/widget/RelativeLayout;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 2166
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->u:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/widget/TextView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_2

    .line 2167
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->j()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 2170
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public setPlayURL(Ljava/lang/String;)V
    .locals 0

    .line 1225
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->O:Ljava/lang/String;

    return-void
.end method

.method public setScaleFitXY(I)V
    .locals 0

    .line 1101
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aj:I

    return-void
.end method

.method public setShowingAlertViewCover(Z)V
    .locals 2

    if-eqz p1, :cond_0

    .line 1129
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aI:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

    if-eqz v0, :cond_0

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->N:Z

    if-eqz v1, :cond_0

    iget-boolean v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->L:Z

    if-eqz v1, :cond_0

    .line 1130
    invoke-virtual {v0}, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;->onPause()V

    .line 1133
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/playercommon/PlayerView;->setIsCovered(Z)V

    return-void
.end method

.method public setShowingTransparent(Z)V
    .locals 0

    .line 302
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ai:Z

    return-void
.end method

.method public setSoundState(I)V
    .locals 0

    .line 460
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->am:I

    return-void
.end method

.method public setUnitId(Ljava/lang/String;)V
    .locals 1

    .line 239
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    .line 240
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    if-eqz v0, :cond_0

    .line 241
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public setVideoEvents(Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;)V
    .locals 1

    .line 2077
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ao:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    .line 2078
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aJ:Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;

    if-eqz v0, :cond_0

    .line 2079
    invoke-static {v0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;->a(Lcom/mbridge/msdk/video/module/MBridgeVideoView$b;Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;)Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    :cond_0
    return-void
.end method

.method public setVideoLayout(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 372
    iput-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 373
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->i:Z

    .line 375
    :cond_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->i:Z

    if-eqz v0, :cond_1

    .line 3399
    new-instance v0, Lcom/mbridge/msdk/video/dynview/j/c;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/dynview/j/c;-><init>()V

    invoke-virtual {v0, p0, p1}, Lcom/mbridge/msdk/video/dynview/j/c;->a(Landroid/view/View;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/video/dynview/c;

    move-result-object p1

    .line 3400
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/b;->a()Lcom/mbridge/msdk/video/dynview/b;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView$1;

    invoke-direct {v1, p0, p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$1;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;Landroid/view/ViewGroup;Lcom/mbridge/msdk/video/dynview/c;)V

    invoke-virtual {v0, p1, v1}, Lcom/mbridge/msdk/video/dynview/b;->a(Lcom/mbridge/msdk/video/dynview/c;Lcom/mbridge/msdk/video/dynview/e/g;)V

    goto :goto_0

    :cond_1
    const-string p1, "mbridge_reward_videoview_item"

    .line 4387
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->findLayout(Ljava/lang/String;)I

    move-result p1

    if-lez p1, :cond_2

    .line 4389
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->c:Landroid/view/LayoutInflater;

    invoke-virtual {v0, p1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 4390
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a()V

    :cond_2
    const/4 p1, 0x0

    .line 4392
    sput-boolean p1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->al:Z

    :goto_0
    return-void
.end method

.method public setVideoSkipTime(I)V
    .locals 0

    .line 1221
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->P:I

    return-void
.end method

.method public setVisible(I)V
    .locals 0

    .line 1106
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setVisibility(I)V

    return-void
.end method

.method public showAlertView()V
    .locals 7

    .line 729
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ad:Z

    if-eqz v0, :cond_0

    return-void

    .line 733
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->T:Lcom/mbridge/msdk/widget/dialog/a;

    if-nez v0, :cond_1

    .line 734
    new-instance v0, Lcom/mbridge/msdk/video/module/MBridgeVideoView$10;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$10;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->T:Lcom/mbridge/msdk/widget/dialog/a;

    .line 780
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->S:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    if-nez v0, :cond_2

    .line 781
    new-instance v0, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->T:Lcom/mbridge/msdk/widget/dialog/a;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;-><init>(Landroid/content/Context;Lcom/mbridge/msdk/widget/dialog/a;)V

    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->S:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    .line 782
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->an:Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    if-eqz v1, :cond_2

    .line 783
    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    sget-object v2, Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;->NOT_VISIBLE:Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;

    const/4 v3, 0x0

    invoke-virtual {v1, v0, v2, v3}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->addFriendlyObstruction(Landroid/view/View;Lcom/iab/omid/library/mmadbridge/adsession/FriendlyObstructionPurpose;Ljava/lang/String;)V

    .line 787
    :cond_2
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ak:Z

    if-eqz v0, :cond_3

    .line 788
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->S:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    iget v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aq:I

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->makeIVAlertView(ILjava/lang/String;)V

    goto :goto_0

    .line 790
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->S:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->makeRVAlertView(Ljava/lang/String;)V

    .line 793
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    if-eqz v0, :cond_4

    invoke-virtual {v0}, Lcom/mbridge/msdk/playercommon/PlayerView;->isComplete()Z

    move-result v0

    if-nez v0, :cond_4

    .line 794
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->S:Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    invoke-virtual {v0}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->show()V

    const/4 v0, 0x1

    .line 795
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->at:Z

    .line 796
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->L:Z

    .line 797
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setShowingAlertViewCover(Z)V

    .line 798
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    .line 6621
    sget-object v0, Lcom/mbridge/msdk/videocommon/d/c;->a:Ljava/lang/String;

    .line 799
    iput-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ap:Ljava/lang/String;

    .line 800
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ap:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->U:Ljava/lang/String;

    const/4 v5, 0x1

    const/4 v6, 0x1

    invoke-static/range {v1 .. v6}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;II)V

    :cond_4
    return-void
.end method

.method public showBaitClickView()V
    .locals 3

    .line 2329
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-nez v0, :cond_0

    return-void

    .line 2333
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    .line 2337
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v0

    if-nez v0, :cond_2

    return-void

    .line 2341
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v0

    .line 2342
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    return-void

    :cond_3
    :try_start_0
    const-string v1, "bait_click"

    .line 2347
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 2348
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 2349
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-eqz v0, :cond_4

    .line 2350
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aC:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    if-eqz v1, :cond_4

    .line 2351
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aC:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    const/4 v2, 0x0

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;->setVisibility(I)V

    .line 2352
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aC:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;->init(I)V

    .line 2353
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aC:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;->startAnimation()V

    .line 2354
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aC:Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;

    new-instance v1, Lcom/mbridge/msdk/video/module/MBridgeVideoView$3;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView$3;-><init>(Lcom/mbridge/msdk/video/module/MBridgeVideoView;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/dycreator/baseview/cusview/MBridgeBaitClickView;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 2363
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeVideoView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_0
    return-void
.end method

.method public showIVRewardAlertView(Ljava/lang/String;)V
    .locals 2

    .line 2066
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 v0, 0x8

    const-string v1, ""

    invoke-interface {p1, v0, v1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method public showMoreOfferInPlayTemplate()V
    .locals 5

    .line 2298
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->I:Landroid/widget/RelativeLayout;

    if-nez v0, :cond_0

    goto :goto_0

    .line 2302
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    .line 2306
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v0

    if-nez v0, :cond_2

    return-void

    .line 2310
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->e()Ljava/lang/String;

    move-result-object v0

    .line 2311
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_3

    return-void

    :cond_3
    :try_start_0
    const-string v1, "mof"

    .line 2316
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/ak;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 2317
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    .line 2318
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_4

    .line 2320
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/moffer/a;->a()Lcom/mbridge/msdk/video/dynview/moffer/a;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    new-instance v3, Lcom/mbridge/msdk/video/module/a/a/h;

    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->K:Lcom/mbridge/msdk/video/module/a/a;

    invoke-direct {v3, v4}, Lcom/mbridge/msdk/video/module/a/a/h;-><init>(Lcom/mbridge/msdk/video/module/a/a;)V

    invoke-virtual {v0, v2, p0, v3, v1}, Lcom/mbridge/msdk/video/dynview/moffer/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/view/ViewGroup;Lcom/mbridge/msdk/video/module/a/a;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 2324
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeVideoView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_0
    return-void
.end method

.method public showRewardPopView()V
    .locals 2

    .line 2528
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aI:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

    if-nez v0, :cond_0

    return-void

    .line 2532
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aH:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters;

    if-nez v1, :cond_1

    return-void

    .line 2537
    :cond_1
    :try_start_0
    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;->init(Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/AcquireRewardPopViewParameters;)V

    .line 2538
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aI:Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/dycreator/baseview/rewardpopview/MBAcquireRewardPopView;->setVisibility(I)V

    const/4 v0, 0x1

    .line 2539
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setCover(Z)V

    .line 2540
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f()V

    .line 2541
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->N:Z

    .line 2542
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v1, :cond_2

    .line 2543
    iget-object v1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-boolean v0, v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isRewardPopViewShowed:Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 2546
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeVideoView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

.method public showVideoLocation(IIIIIIIII)V
    .locals 5

    .line 850
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "showVideoLocation marginTop:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

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

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeVideoView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 855
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f:Z

    if-eqz v0, :cond_a

    .line 856
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->w:Landroid/widget/RelativeLayout;

    const/4 v2, 0x0

    invoke-virtual {v0, v2, v2, v2, v2}, Landroid/widget/RelativeLayout;->setPadding(IIII)V

    .line 857
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setVisibility(I)V

    .line 858
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->w:Landroid/widget/RelativeLayout;

    invoke-virtual {v0}, Landroid/widget/RelativeLayout;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    .line 859
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->w:Landroid/widget/RelativeLayout;

    invoke-virtual {v0, v2}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 861
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->u:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_1

    .line 862
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->j()V

    .line 8198
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a:Landroid/content/Context;

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/ae;->h(Landroid/content/Context;)I

    move-result v0

    .line 8199
    iget-object v3, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->a:Landroid/content/Context;

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/ae;->g(Landroid/content/Context;)I

    move-result v3

    const/4 v4, 0x1

    if-lez p3, :cond_2

    if-lez p4, :cond_2

    if-lt v0, p3, :cond_2

    if-lt v3, p4, :cond_2

    move v0, v4

    goto :goto_0

    :cond_2
    move v0, v2

    :goto_0
    if-eqz v0, :cond_9

    .line 864
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aa:Z

    if-nez v0, :cond_9

    .line 865
    sput p6, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->o:I

    .line 866
    sput p7, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->p:I

    add-int/lit8 p8, p8, 0x4

    .line 868
    sput p8, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->q:I

    add-int/lit8 p9, p9, 0x4

    .line 869
    sput p9, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->r:I

    int-to-float p6, p3

    int-to-float p7, p4

    div-float/2addr p6, p7

    const/4 p7, 0x0

    .line 873
    :try_start_0
    iget-wide p8, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->V:D

    iget-wide v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->W:D
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    div-double/2addr p8, v0

    double-to-float p7, p8

    goto :goto_1

    :catchall_0
    move-exception p8

    .line 875
    invoke-virtual {p8}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p9

    invoke-static {v1, p9, p8}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_1
    if-lez p5, :cond_4

    .line 878
    sput p5, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->n:I

    if-lez p5, :cond_4

    .line 8908
    new-instance p8, Landroid/graphics/drawable/GradientDrawable;

    invoke-direct {p8}, Landroid/graphics/drawable/GradientDrawable;-><init>()V

    .line 8909
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getContext()Landroid/content/Context;

    move-result-object p9

    int-to-float p5, p5

    invoke-static {p9, p5}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result p5

    int-to-float p5, p5

    invoke-virtual {p8, p5}, Landroid/graphics/drawable/GradientDrawable;->setCornerRadius(F)V

    const/4 p5, -0x1

    .line 8910
    invoke-virtual {p8, p5}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 8911
    invoke-virtual {p8, v4, v2}, Landroid/graphics/drawable/GradientDrawable;->setStroke(II)V

    .line 8912
    sget p5, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 p9, 0x10

    if-lt p5, p9, :cond_3

    .line 8913
    invoke-virtual {p0, p8}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setBackground(Landroid/graphics/drawable/Drawable;)V

    .line 8914
    iget-object p5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {p5, p8}, Lcom/mbridge/msdk/playercommon/PlayerView;->setBackground(Landroid/graphics/drawable/Drawable;)V

    goto :goto_2

    .line 8916
    :cond_3
    invoke-virtual {p0, p8}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 8917
    iget-object p5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {p5, p8}, Lcom/mbridge/msdk/playercommon/PlayerView;->setBackgroundDrawable(Landroid/graphics/drawable/Drawable;)V

    .line 8919
    :goto_2
    sget p5, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 p8, 0x15

    if-lt p5, p8, :cond_4

    .line 8920
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setClipToOutline(Z)V

    .line 8921
    iget-object p5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {p5, v4}, Lcom/mbridge/msdk/playercommon/PlayerView;->setClipToOutline(Z)V

    :cond_4
    sub-float/2addr p6, p7

    .line 882
    invoke-static {p6}, Ljava/lang/Math;->abs(F)F

    move-result p5

    const p6, 0x3dcccccd    # 0.1f

    cmpg-float p5, p5, p6

    if-lez p5, :cond_6

    iget p5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->aj:I

    if-ne p5, v4, :cond_5

    goto :goto_3

    .line 896
    :cond_5
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->h()V

    .line 897
    invoke-virtual {p0, v4}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->videoOperate(I)V

    goto :goto_4

    .line 883
    :cond_6
    :goto_3
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->h()V

    .line 884
    iget-boolean p5, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ai:Z

    if-eqz p5, :cond_8

    .line 885
    invoke-virtual {p0, p3, p4}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setLayoutCenter(II)V

    .line 886
    sget-boolean p1, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->al:Z

    const-string p2, ""

    if-eqz p1, :cond_7

    .line 887
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 p3, 0x72

    invoke-interface {p1, p3, p2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    goto :goto_4

    .line 889
    :cond_7
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/16 p3, 0x74

    invoke-interface {p1, p3, p2}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    goto :goto_4

    .line 892
    :cond_8
    invoke-virtual {p0, p2, p1, p3, p4}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->setLayoutParam(IIII)V

    goto :goto_4

    .line 901
    :cond_9
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->h()V

    :cond_a
    :goto_4
    return-void
.end method

.method public soundOperate(II)V
    .locals 1

    const-string v0, "2"

    .line 928
    invoke-virtual {p0, p1, p2, v0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->soundOperate(IILjava/lang/String;)V

    return-void
.end method

.method public soundOperate(IILjava/lang/String;)V
    .locals 6

    .line 933
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f:Z

    if-eqz v0, :cond_6

    .line 934
    iput p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->am:I

    const-string v0, "OMSDK"

    const/4 v1, 0x2

    const/4 v2, 0x0

    const/4 v3, 0x1

    if-ne p1, v3, :cond_1

    .line 936
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->t:Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;

    if-eqz v4, :cond_0

    .line 937
    invoke-virtual {v4, v2}, Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;->setSoundStatus(Z)V

    .line 939
    :cond_0
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v4}, Lcom/mbridge/msdk/playercommon/PlayerView;->closeSound()V

    .line 941
    :try_start_0
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ao:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v4, :cond_3

    .line 942
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ao:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    const/4 v5, 0x0

    invoke-virtual {v4, v5}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->volumeChange(F)V
    :try_end_0
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v4

    .line 945
    invoke-virtual {v4}, Ljava/lang/IllegalArgumentException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    if-ne p1, v1, :cond_3

    .line 948
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->t:Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;

    if-eqz v4, :cond_2

    .line 949
    invoke-virtual {v4, v3}, Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;->setSoundStatus(Z)V

    .line 951
    :cond_2
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {v4}, Lcom/mbridge/msdk/playercommon/PlayerView;->openSound()V

    .line 953
    :try_start_1
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ao:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    if-eqz v4, :cond_3

    .line 954
    iget-object v4, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ao:Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;

    const/high16 v5, 0x3f800000    # 1.0f

    invoke-virtual {v4, v5}, Lcom/iab/omid/library/mmadbridge/adsession/media/MediaEvents;->volumeChange(F)V
    :try_end_1
    .catch Ljava/lang/IllegalArgumentException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    move-exception v4

    .line 957
    invoke-virtual {v4}, Ljava/lang/IllegalArgumentException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-static {v0, v4}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 961
    :cond_3
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->b:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_4

    .line 962
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->t:Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;

    if-eqz p2, :cond_6

    .line 963
    invoke-virtual {p2, v2}, Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;->setVisibility(I)V

    goto :goto_1

    :cond_4
    if-ne p2, v3, :cond_5

    .line 967
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->t:Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;

    if-eqz p2, :cond_6

    const/16 v0, 0x8

    .line 968
    invoke-virtual {p2, v0}, Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;->setVisibility(I)V

    goto :goto_1

    :cond_5
    if-ne p2, v1, :cond_6

    .line 971
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->t:Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;

    if-eqz p2, :cond_6

    .line 972
    invoke-virtual {p2, v2}, Lcom/mbridge/msdk/dycreator/baseview/cusview/SoundImageView;->setVisibility(I)V

    :cond_6
    :goto_1
    if-eqz p3, :cond_7

    const-string p2, "2"

    .line 978
    invoke-virtual {p3, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_7

    .line 979
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    if-eqz p2, :cond_7

    .line 980
    iget-object p2, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->e:Lcom/mbridge/msdk/video/module/a/a;

    const/4 p3, 0x7

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    invoke-interface {p2, p3, p1}, Lcom/mbridge/msdk/video/module/a/a;->a(ILjava/lang/Object;)V

    :cond_7
    return-void
.end method

.method public videoOperate(I)V
    .locals 3

    .line 987
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "VideoView videoOperate:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBridgeVideoView"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 988
    iget-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f:Z

    if-eqz v0, :cond_4

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 990
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_4

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->isfront()Z

    move-result p1

    if-eqz p1, :cond_4

    const-string p1, "VideoView videoOperate:play"

    .line 991
    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 992
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->L:Z

    if-nez p1, :cond_4

    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ad:Z

    if-nez p1, :cond_4

    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->M:Z

    if-nez p1, :cond_4

    sget-boolean p1, Lcom/mbridge/msdk/foundation/b/b;->c:Z

    if-nez p1, :cond_4

    .line 993
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->g()V

    goto :goto_0

    :cond_0
    const/4 v2, 0x2

    if-ne p1, v2, :cond_1

    .line 997
    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->getVisibility()I

    move-result p1

    if-nez p1, :cond_4

    const-string p1, "VideoView videoOperate:pause"

    .line 998
    invoke-static {v1, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 999
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f()V

    goto :goto_0

    :cond_1
    const/4 v1, 0x3

    if-ne p1, v1, :cond_2

    .line 1002
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ac:Z

    if-nez p1, :cond_4

    .line 1003
    iget-object p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->s:Lcom/mbridge/msdk/playercommon/PlayerView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/playercommon/PlayerView;->release()V

    .line 1004
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ac:Z

    goto :goto_0

    :cond_2
    const/4 v1, 0x5

    if-ne p1, v1, :cond_3

    .line 1007
    iput-boolean v0, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->M:Z

    .line 1008
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ac:Z

    if-nez p1, :cond_4

    .line 1009
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->f()V

    goto :goto_0

    :cond_3
    const/4 v0, 0x4

    if-ne p1, v0, :cond_4

    const/4 p1, 0x0

    .line 1012
    iput-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->M:Z

    .line 1013
    iget-boolean p1, p0, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->ac:Z

    if-nez p1, :cond_4

    invoke-virtual {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->isMiniCardShowing()Z

    move-result p1

    if-nez p1, :cond_4

    .line 1014
    invoke-direct {p0}, Lcom/mbridge/msdk/video/module/MBridgeVideoView;->g()V

    :cond_4
    :goto_0
    return-void
.end method
