.class public Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;
.super Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;
.source "MBRewardVideoActivity.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$c;,
        Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$b;,
        Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$a;
    }
.end annotation


# static fields
.field public static INTENT_EXTRADATA:Ljava/lang/String; = "extraData"

.field public static INTENT_ISBID:Ljava/lang/String; = "isBid"

.field public static INTENT_ISBIG_OFFER:Ljava/lang/String; = "isBigOffer"

.field public static INTENT_ISIV:Ljava/lang/String; = "isIV"

.field public static INTENT_IVREWARD_MODETYPE:Ljava/lang/String; = "ivRewardMode"

.field public static INTENT_IVREWARD_VALUE:Ljava/lang/String; = "ivRewardValue"

.field public static INTENT_IVREWARD_VALUETYPE:Ljava/lang/String; = "ivRewardValueType"

.field public static INTENT_MUTE:Ljava/lang/String; = "mute"

.field public static INTENT_REWARD:Ljava/lang/String; = "reward"

.field public static INTENT_UNITID:Ljava/lang/String; = "unitId"

.field public static INTENT_USERID:Ljava/lang/String; = "userId"

.field public static SAVE_STATE_KEY_REPORT:Ljava/lang/String; = "hasRelease"


# instance fields
.field private A:Z

.field private B:I

.field private C:I

.field private D:I

.field private E:I

.field private F:I

.field private G:I

.field private H:I

.field private I:Lcom/mbridge/msdk/video/dynview/e/a;

.field private J:Lcom/mbridge/msdk/video/dynview/e/d;

.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Lcom/mbridge/msdk/videocommon/b/d;

.field private e:I

.field private f:Z

.field private g:Z

.field private h:I

.field private i:I

.field private j:I

.field private k:Z

.field private l:Z

.field private m:Lcom/mbridge/msdk/video/bt/module/b/h;

.field private n:Lcom/mbridge/msdk/videocommon/d/c;

.field private o:Z

.field private p:Z

.field private q:Lcom/mbridge/msdk/videocommon/download/a;

.field private r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private s:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/videocommon/download/a;",
            ">;"
        }
    .end annotation
.end field

.field private t:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;"
        }
    .end annotation
.end field

.field private u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

.field private v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

.field private w:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

.field private x:Lcom/mbridge/msdk/video/bt/module/a/a;

.field private y:Ljava/lang/String;

.field private z:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 61
    invoke-direct {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;-><init>()V

    const/4 v0, 0x2

    .line 84
    iput v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->e:I

    const/4 v0, 0x0

    .line 85
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->f:Z

    .line 86
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->g:Z

    .line 90
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->k:Z

    .line 91
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->l:Z

    .line 95
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->o:Z

    .line 96
    iput-boolean v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->p:Z

    const/4 v1, 0x1

    .line 112
    iput v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->B:I

    .line 113
    iput v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->C:I

    .line 115
    iput v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->D:I

    iput v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->E:I

    iput v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->F:I

    iput v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->G:I

    iput v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->H:I

    .line 116
    new-instance v0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$1;-><init>(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)V

    iput-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->I:Lcom/mbridge/msdk/video/dynview/e/a;

    .line 143
    new-instance v0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$2;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$2;-><init>(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)V

    iput-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->J:Lcom/mbridge/msdk/video/dynview/e/d;

    return-void
.end method

.method private a(II)I
    .locals 5

    .line 624
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    if-nez v0, :cond_0

    return p1

    .line 627
    :cond_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_1

    return p1

    :cond_1
    const/4 v0, 0x0

    move v1, v0

    move v2, v1

    move v3, v2

    .line 633
    :goto_0
    iget-object v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v4}, Ljava/util/List;->size()I

    move-result v4

    if-ge v1, v4, :cond_4

    .line 634
    iget-object v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v4, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_3

    if-nez v1, :cond_2

    .line 636
    iget-object v3, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCompleteTime()I

    move-result v3

    .line 638
    :cond_2
    iget-object v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v4, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoLength()I

    move-result v4

    add-int/2addr v2, v4

    :cond_3
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_4
    const/16 v1, 0x2d

    const/4 v4, 0x1

    if-ne p2, v4, :cond_7

    if-nez p1, :cond_5

    if-lt v2, v1, :cond_6

    move p1, v1

    goto :goto_2

    :cond_5
    if-le v2, p1, :cond_6

    if-le p1, v1, :cond_b

    return v1

    :cond_6
    move p1, v2

    goto :goto_2

    :cond_7
    move p1, v0

    move v1, p1

    :goto_1
    add-int/lit8 v2, p2, -0x1

    if-ge p1, v2, :cond_9

    .line 661
    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_8

    .line 662
    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoLength()I

    move-result v2

    add-int/2addr v1, v2

    :cond_8
    add-int/lit8 p1, p1, 0x1

    goto :goto_1

    :cond_9
    if-le v3, v1, :cond_a

    sub-int p1, v3, v1

    goto :goto_2

    :cond_a
    move p1, v0

    :cond_b
    :goto_2
    return p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;I)I
    .locals 0

    .line 61
    iput p1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->e:I

    return p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;II)I
    .locals 0

    .line 61
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(II)I

    move-result p0

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 0

    .line 61
    iput-object p1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object p1
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)Ljava/util/List;
    .locals 0

    .line 61
    iget-object p0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    return-object p0
.end method

.method private a()V
    .locals 10

    const-string v0, "mbridge_temp_container"

    .line 435
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->findID(Ljava/lang/String;)I

    move-result v0

    if-gez v0, :cond_0

    const-string v1, "no id mbridge_bt_container in mbridge_more_offer_activity layout"

    .line 437
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    .line 439
    :cond_0
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iput-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    if-nez v0, :cond_1

    const-string v0, "env error"

    .line 441
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    .line 443
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 444
    new-instance v0, Lcom/mbridge/msdk/video/dynview/h/b;

    invoke-direct {v0}, Lcom/mbridge/msdk/video/dynview/h/b;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    const-wide/16 v3, 0x1f4

    invoke-virtual {v0, v2, v3, v4}, Lcom/mbridge/msdk/video/dynview/h/b;->c(Landroid/view/View;J)V

    goto :goto_0

    .line 446
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setVisibility(I)V

    :goto_0
    const/4 v0, -0x1

    .line 449
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->changeHalfScreenPadding(I)V

    .line 451
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setActivity(Landroid/app/Activity;)V

    .line 452
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-boolean v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->g:Z

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setBidCampaign(Z)V

    .line 453
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-boolean v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->k:Z

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setBigOffer(Z)V

    .line 454
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setUnitId(Ljava/lang/String;)V

    .line 455
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setCampaign(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 456
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v0

    const/4 v2, 0x5

    const/4 v3, 0x1

    if-ne v0, v2, :cond_4

    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    if-eqz v0, :cond_4

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-le v0, v3, :cond_4

    const-string v0, "mbridge_reward_root_container"

    .line 457
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_3

    const/high16 v2, -0x1000000

    .line 459
    invoke-virtual {v0, v2}, Landroid/view/View;->setBackgroundColor(I)V

    .line 462
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->removeAllViews()V

    .line 463
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    iget v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->C:I

    invoke-virtual {v0, v2, v4}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setCampOrderViewData(Ljava/util/List;I)V

    .line 464
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->I:Lcom/mbridge/msdk/video/dynview/e/a;

    iget v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->B:I

    invoke-virtual {v0, v2, v4}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setCamPlayOrderCallback(Lcom/mbridge/msdk/video/dynview/e/a;I)V

    .line 467
    :cond_4
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setCampaignDownLoadTask(Lcom/mbridge/msdk/videocommon/download/a;)V

    .line 468
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-boolean v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->f:Z

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setIV(Z)V

    .line 469
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_5

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v0

    const/4 v2, 0x2

    if-ne v0, v2, :cond_5

    .line 470
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0, v1, v1, v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setIVRewardEnable(III)V

    goto :goto_1

    .line 472
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->h:I

    iget v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->i:I

    iget v5, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->j:I

    invoke-virtual {v0, v2, v4, v5}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setIVRewardEnable(III)V

    .line 474
    :goto_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->e:I

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setMute(I)V

    .line 475
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->z:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setDeveloperExtraData(Ljava/lang/String;)V

    .line 477
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_6

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardPlus()Lcom/mbridge/msdk/foundation/entity/RewardPlus;

    move-result-object v0

    if-nez v0, :cond_7

    :cond_6
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    if-eqz v0, :cond_9

    .line 478
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_9

    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_9

    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardPlus()Lcom/mbridge/msdk/foundation/entity/RewardPlus;

    move-result-object v0

    if-eqz v0, :cond_9

    .line 479
    :cond_7
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/RewardPlus;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_9

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/RewardPlus;->getAmount()I

    move-result v1

    if-lez v1, :cond_9

    .line 480
    new-instance v1, Lcom/mbridge/msdk/videocommon/b/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/RewardPlus;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/RewardPlus;->getAmount()I

    move-result v0

    invoke-direct {v1, v2, v0}, Lcom/mbridge/msdk/videocommon/b/d;-><init>(Ljava/lang/String;I)V

    .line 481
    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/b/d;->b()I

    move-result v0

    if-gez v0, :cond_8

    .line 482
    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/videocommon/b/d;->a(I)V

    .line 484
    :cond_8
    iput-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->d:Lcom/mbridge/msdk/videocommon/b/d;

    .line 487
    :cond_9
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->d:Lcom/mbridge/msdk/videocommon/b/d;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setReward(Lcom/mbridge/msdk/videocommon/b/d;)V

    .line 488
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->n:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setRewardUnitSetting(Lcom/mbridge/msdk/videocommon/d/c;)V

    .line 490
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->b:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setPlacementId(Ljava/lang/String;)V

    .line 491
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setUserId(Ljava/lang/String;)V

    .line 492
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->m:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setShowRewardListener(Lcom/mbridge/msdk/video/bt/module/b/h;)V

    .line 493
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->init(Landroid/content/Context;)V

    .line 494
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onCreate()V

    .line 496
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    const-string v3, "showBTOld"

    iget-object v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    iget-boolean v5, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->g:Z

    const-string v6, ""

    const-string v7, ""

    const-wide/16 v8, 0x0

    invoke-static/range {v1 .. v9}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 500
    :catch_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 6

    .line 387
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 388
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v1, :cond_0

    .line 390
    invoke-virtual {v1}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 392
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v3

    invoke-static {v2, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 393
    iput-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    goto :goto_0

    :cond_1
    const/4 p1, 0x1

    .line 399
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->k:Z

    .line 400
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a()V

    .line 401
    iget-object p1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    if-eqz p1, :cond_2

    .line 402
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    iget v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->H:I

    iget v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->D:I

    iget v3, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->F:I

    iget v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->E:I

    iget v5, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->G:I

    invoke-virtual/range {v0 .. v5}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setNotchPadding(IIIII)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    .line 405
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MBRewardVideoActivity"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "more offer to one offer exception"

    .line 406
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    :cond_2
    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;Ljava/lang/String;)V
    .locals 0

    .line 61
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 1

    const-string v0, "MBRewardVideoActivity"

    .line 420
    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 422
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->m:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-eqz v0, :cond_0

    .line 423
    invoke-interface {v0, p1}, Lcom/mbridge/msdk/video/bt/module/b/h;->a(Ljava/lang/String;)V

    .line 425
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->finish()V

    return-void
.end method

.method private a(Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    const-string v0, "no available campaign"

    if-nez p1, :cond_0

    .line 342
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    return-void

    .line 345
    :cond_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_1

    .line 346
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    return-void

    :cond_1
    const/4 v0, 0x0

    .line 351
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 352
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getDynamicTempCode()I

    move-result v1

    goto :goto_0

    :cond_2
    move v1, v0

    :goto_0
    const/4 v2, 0x5

    if-eq v1, v2, :cond_3

    .line 364
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->b()V

    goto :goto_2

    .line 356
    :cond_3
    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :cond_4
    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_5

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v2, :cond_4

    .line 358
    iget v3, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->C:I

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoLength()I

    move-result v2

    add-int/2addr v3, v2

    iput v3, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->C:I

    goto :goto_1

    .line 361
    :cond_5
    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_6

    .line 2370
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getVideoCompleteTime()I

    move-result v0

    iget v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->B:I

    invoke-direct {p0, v0, v1}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(II)I

    move-result v0

    .line 2371
    iput-object p1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v1, 0x1

    .line 2372
    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignIsFiltered(Z)V

    .line 2373
    iput v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->B:I

    .line 2374
    iget-object p1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setVideoCompleteTime(I)V

    .line 2375
    iget-object p1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_2

    :cond_6
    const-string p1, "campaign is less"

    .line 2377
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    :goto_2
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;Z)Z
    .locals 0

    .line 61
    iput-boolean p1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->k:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)I
    .locals 2

    .line 61
    iget v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->B:I

    add-int/lit8 v1, v0, 0x1

    iput v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->B:I

    return v0
.end method

.method static synthetic b(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;I)I
    .locals 0

    .line 61
    iput p1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->C:I

    return p1
.end method

.method private b()V
    .locals 11

    const-string v0, "mbridge_bt_container"

    .line 504
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->findID(Ljava/lang/String;)I

    move-result v0

    if-gez v0, :cond_0

    const-string v1, "no mbridge_webview_framelayout in mbridge_more_offer_activity layout"

    .line 506
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    .line 508
    :cond_0
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iput-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-nez v0, :cond_1

    const-string v0, "env error"

    .line 510
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    .line 512
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setVisibility(I)V

    .line 513
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->c()Lcom/mbridge/msdk/video/bt/module/a/a;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->x:Lcom/mbridge/msdk/video/bt/module/a/a;

    .line 514
    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    invoke-virtual {v2, v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setBTContainerCallback(Lcom/mbridge/msdk/video/bt/module/a/a;)V

    .line 515
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->m:Lcom/mbridge/msdk/video/bt/module/b/h;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setShowRewardVideoListener(Lcom/mbridge/msdk/video/bt/module/b/h;)V

    .line 516
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->J:Lcom/mbridge/msdk/video/dynview/e/d;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setChoiceOneCallback(Lcom/mbridge/msdk/video/dynview/e/d;)V

    .line 517
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setCampaigns(Ljava/util/List;)V

    .line 518
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setCampaignDownLoadTasks(Ljava/util/List;)V

    .line 519
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->n:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setRewardUnitSetting(Lcom/mbridge/msdk/videocommon/d/c;)V

    .line 520
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setUnitId(Ljava/lang/String;)V

    .line 521
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->b:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setPlacementId(Ljava/lang/String;)V

    .line 522
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->c:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setUserId(Ljava/lang/String;)V

    .line 523
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setActivity(Landroid/app/Activity;)V

    .line 524
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->z:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setDeveloperExtraData(Ljava/lang/String;)V

    .line 526
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardPlus()Lcom/mbridge/msdk/foundation/entity/RewardPlus;

    move-result-object v0

    if-nez v0, :cond_3

    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_5

    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardPlus()Lcom/mbridge/msdk/foundation/entity/RewardPlus;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 527
    :cond_3
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/RewardPlus;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_5

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/RewardPlus;->getAmount()I

    move-result v2

    if-lez v2, :cond_5

    .line 528
    new-instance v2, Lcom/mbridge/msdk/videocommon/b/d;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/RewardPlus;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/RewardPlus;->getAmount()I

    move-result v0

    invoke-direct {v2, v3, v0}, Lcom/mbridge/msdk/videocommon/b/d;-><init>(Ljava/lang/String;I)V

    .line 529
    invoke-virtual {v2}, Lcom/mbridge/msdk/videocommon/b/d;->b()I

    move-result v0

    if-gez v0, :cond_4

    const/4 v0, 0x1

    .line 530
    invoke-virtual {v2, v0}, Lcom/mbridge/msdk/videocommon/b/d;->a(I)V

    .line 532
    :cond_4
    iput-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->d:Lcom/mbridge/msdk/videocommon/b/d;

    .line 535
    :cond_5
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->d:Lcom/mbridge/msdk/videocommon/b/d;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setReward(Lcom/mbridge/msdk/videocommon/b/d;)V

    .line 536
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iget v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->h:I

    iget v3, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->i:I

    iget v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->j:I

    invoke-virtual {v0, v2, v3, v4}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setIVRewardEnable(III)V

    .line 537
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iget-boolean v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->f:Z

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setIV(Z)V

    .line 538
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iget v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->e:I

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setMute(I)V

    .line 539
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->jsFactory:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    check-cast v2, Lcom/mbridge/msdk/video/js/factory/b;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setJSFactory(Lcom/mbridge/msdk/video/js/factory/b;)V

    .line 540
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->init(Landroid/content/Context;)V

    .line 541
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->onCreate()V

    .line 543
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    if-eqz v0, :cond_6

    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_6

    .line 544
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v2

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    const-string v4, "showMoreOffer"

    iget-object v5, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    iget-boolean v6, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->g:Z

    const-string v7, ""

    const-string v8, ""

    const-wide/16 v9, 0x0

    invoke-static/range {v2 .. v10}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 549
    :catch_0
    :cond_6
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    if-eqz v0, :cond_7

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_7

    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_7

    .line 550
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :cond_7
    return-void
.end method

.method private b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 7

    .line 429
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->n:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v0, :cond_0

    .line 2621
    sget-object v0, Lcom/mbridge/msdk/videocommon/d/c;->a:Ljava/lang/String;

    .line 429
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 430
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v1

    .line 3621
    sget-object v2, Lcom/mbridge/msdk/videocommon/d/c;->a:Ljava/lang/String;

    .line 430
    iget-object v5, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    const/4 v6, 0x0

    move-object v3, p1

    move-object v4, p0

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 61
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)I
    .locals 0

    .line 61
    iget p0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->C:I

    return p0
.end method

.method private c()Lcom/mbridge/msdk/video/bt/module/a/a;
    .locals 1

    .line 555
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->x:Lcom/mbridge/msdk/video/bt/module/a/a;

    if-nez v0, :cond_0

    .line 556
    new-instance v0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$3;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$3;-><init>(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)V

    iput-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->x:Lcom/mbridge/msdk/video/bt/module/a/a;

    .line 614
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->x:Lcom/mbridge/msdk/video/bt/module/a/a;

    return-object v0
.end method

.method private c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 2

    if-eqz p1, :cond_1

    .line 962
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 963
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    .line 964
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/same/c/b;->c(Ljava/lang/String;)V

    .line 966
    :cond_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 967
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/c/b;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/same/c/b;

    move-result-object v0

    .line 968
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getIconUrl()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/c/b;->c(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 0

    .line 61
    iget-object p0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)I
    .locals 0

    .line 61
    iget p0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->B:I

    return p0
.end method

.method static synthetic f(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;
    .locals 0

    .line 61
    iget-object p0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    return-object p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)V
    .locals 0

    .line 61
    invoke-direct {p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a()V

    return-void
.end method

.method static synthetic h(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)Lcom/mbridge/msdk/video/bt/module/MBTempContainer;
    .locals 0

    .line 61
    iget-object p0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    return-object p0
.end method

.method static synthetic i(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)I
    .locals 0

    .line 61
    iget p0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->H:I

    return p0
.end method

.method static synthetic j(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)I
    .locals 0

    .line 61
    iget p0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->D:I

    return p0
.end method

.method static synthetic k(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)I
    .locals 0

    .line 61
    iget p0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->F:I

    return p0
.end method

.method static synthetic l(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)I
    .locals 0

    .line 61
    iget p0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->E:I

    return p0
.end method

.method static synthetic m(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)I
    .locals 0

    .line 61
    iget p0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->G:I

    return p0
.end method

.method static synthetic n(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)Ljava/lang/String;
    .locals 0

    .line 61
    iget-object p0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic o(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)Lcom/mbridge/msdk/video/bt/module/b/h;
    .locals 0

    .line 61
    iget-object p0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->m:Lcom/mbridge/msdk/video/bt/module/b/h;

    return-object p0
.end method


# virtual methods
.method public changeHalfScreenPadding(I)V
    .locals 5

    .line 919
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_3

    .line 920
    invoke-virtual {p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->getWindow()Landroid/view/Window;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v0

    new-instance v2, Landroid/graphics/drawable/ColorDrawable;

    const/4 v3, 0x0

    invoke-direct {v2, v3}, Landroid/graphics/drawable/ColorDrawable;-><init>(I)V

    invoke-virtual {v0, v2}, Landroid/view/View;->setBackground(Landroid/graphics/drawable/Drawable;)V

    .line 921
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout$LayoutParams;

    const/high16 v2, 0x42680000    # 58.0f

    .line 922
    invoke-static {p0, v2}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    const/high16 v3, 0x42d00000    # 104.0f

    .line 923
    invoke-static {p0, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v3

    .line 924
    iget-object v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->c()I

    move-result v4

    if-nez v4, :cond_1

    if-ne p1, v1, :cond_0

    .line 926
    invoke-virtual {v0, v3, v2, v3, v2}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_0

    .line 928
    :cond_0
    invoke-virtual {v0, v2, v3, v2, v3}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_0

    .line 931
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRewardTemplateMode()Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx$c;->c()I

    move-result p1

    if-ne p1, v1, :cond_2

    .line 932
    invoke-virtual {v0, v3, v2, v3, v2}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    goto :goto_0

    .line 934
    :cond_2
    invoke-virtual {v0, v2, v3, v2, v3}, Landroid/widget/FrameLayout$LayoutParams;->setMargins(IIII)V

    .line 937
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p1

    .line 940
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MBRewardVideoActivity"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_1
    return-void
.end method

.method public findID(Ljava/lang/String;)I
    .locals 2

    .line 910
    invoke-virtual {p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public findLayout(Ljava/lang/String;)I
    .locals 2

    .line 914
    invoke-virtual {p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "layout"

    invoke-static {v0, p1, v1}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    return p1
.end method

.method public finish()V
    .locals 4

    .line 870
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->finish()V

    .line 871
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/a;->b(I)V

    .line 872
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 873
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onDestroy()V

    .line 874
    iput-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    .line 876
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-eqz v0, :cond_1

    .line 877
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->onDestroy()V

    .line 878
    iput-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    .line 880
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v3, 0x1

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/b/b;->c(Ljava/lang/String;)V

    .line 881
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v2, 0x2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/b/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method public onBackPressed()V
    .locals 1

    .line 722
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->onBackPressed()V

    .line 723
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    if-eqz v0, :cond_0

    .line 724
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onBackPressed()V

    .line 726
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-eqz v0, :cond_1

    .line 727
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->onBackPressed()V

    :cond_1
    return-void
.end method

.method public onConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 1

    .line 709
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 710
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    if-eqz v0, :cond_0

    .line 711
    iget v0, p1, Landroid/content/res/Configuration;->orientation:I

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->changeHalfScreenPadding(I)V

    .line 712
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 714
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-eqz v0, :cond_1

    .line 715
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->onConfigurationChanged(Landroid/content/res/Configuration;)V

    :cond_1
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 19

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    const-string v2, "_"

    const-string v3, ""

    const-string v4, "anim"

    .line 180
    invoke-super/range {p0 .. p1}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->onCreate(Landroid/os/Bundle;)V

    const/4 v5, 0x1

    .line 181
    sput-boolean v5, Lcom/mbridge/msdk/MBridgeConstans;->isRewardActivityShowing:Z

    .line 182
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v6

    invoke-virtual {v6, v1}, Lcom/mbridge/msdk/foundation/controller/a;->a(Landroid/content/Context;)V

    :try_start_0
    const-string v6, "mbridge_more_offer_activity"

    .line 186
    invoke-virtual {v1, v6}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->findLayout(Ljava/lang/String;)I

    move-result v6

    if-gez v6, :cond_0

    const-string v0, "no mbridge_more_offer_activity layout"

    .line 188
    invoke-direct {v1, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    return-void

    .line 191
    :cond_0
    invoke-virtual {v1, v6}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->setContentView(I)V

    .line 194
    invoke-virtual/range {p0 .. p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->getIntent()Landroid/content/Intent;

    move-result-object v6

    .line 195
    sget-object v7, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_UNITID:Ljava/lang/String;

    invoke-virtual {v6, v7}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    iput-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    .line 196
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v8, "data empty error"

    if-eqz v7, :cond_1

    .line 197
    :try_start_1
    invoke-direct {v1, v8}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    return-void

    .line 200
    :cond_1
    sget-object v7, Lcom/mbridge/msdk/reward/a/a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    iget-object v9, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v7, v9}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/mbridge/msdk/video/bt/module/b/h;

    iput-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->m:Lcom/mbridge/msdk/video/bt/module/b/h;

    .line 201
    sget-object v7, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-virtual {v6, v7}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    iput-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->b:Ljava/lang/String;

    .line 202
    sget-object v7, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_REWARD:Ljava/lang/String;

    invoke-virtual {v6, v7}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 203
    invoke-static {v7}, Lcom/mbridge/msdk/videocommon/b/d;->b(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/b/d;

    move-result-object v7

    iput-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->d:Lcom/mbridge/msdk/videocommon/b/d;

    .line 204
    sget-object v7, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_USERID:Ljava/lang/String;

    invoke-virtual {v6, v7}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    iput-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->c:Ljava/lang/String;

    .line 205
    sget-object v7, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_MUTE:Ljava/lang/String;

    const/4 v9, 0x2

    invoke-virtual {v6, v7, v9}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v7

    iput v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->e:I

    .line 206
    sget-object v7, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_ISIV:Ljava/lang/String;

    const/4 v9, 0x0

    invoke-virtual {v6, v7, v9}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v7

    iput-boolean v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->f:Z

    .line 207
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v7

    iget-boolean v10, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->f:Z

    const/16 v11, 0x11f

    const/16 v12, 0x5e

    if-eqz v10, :cond_2

    move v10, v11

    goto :goto_0

    :cond_2
    move v10, v12

    :goto_0
    invoke-virtual {v7, v10}, Lcom/mbridge/msdk/foundation/controller/a;->b(I)V

    .line 208
    sget-object v7, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_ISBID:Ljava/lang/String;

    invoke-virtual {v6, v7, v9}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v7

    iput-boolean v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->g:Z

    .line 209
    sget-object v7, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_EXTRADATA:Ljava/lang/String;

    invoke-virtual {v6, v7}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    iput-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->z:Ljava/lang/String;

    .line 210
    iget-boolean v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->f:Z

    if-eqz v7, :cond_3

    .line 211
    sget-object v7, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_IVREWARD_MODETYPE:Ljava/lang/String;

    invoke-virtual {v6, v7, v9}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v7

    iput v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->h:I

    .line 212
    sget-object v7, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_IVREWARD_VALUETYPE:Ljava/lang/String;

    invoke-virtual {v6, v7, v9}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v7

    iput v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->i:I

    .line 213
    sget-object v7, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_IVREWARD_VALUE:Ljava/lang/String;

    invoke-virtual {v6, v7, v9}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v7

    iput v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->j:I

    .line 215
    :cond_3
    new-instance v7, Lcom/mbridge/msdk/video/js/factory/b;

    invoke-direct {v7, v1}, Lcom/mbridge/msdk/video/js/factory/b;-><init>(Landroid/app/Activity;)V

    iput-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->jsFactory:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    .line 216
    iget-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->jsFactory:Lcom/mbridge/msdk/video/js/factory/IJSFactory;

    invoke-virtual {v1, v7}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->registerJsFactory(Lcom/mbridge/msdk/video/js/factory/IJSFactory;)V

    .line 218
    iget-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->m:Lcom/mbridge/msdk/video/bt/module/b/h;

    if-nez v7, :cond_4

    const-string v0, "showRewardListener is null"

    .line 219
    invoke-direct {v1, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    return-void

    .line 223
    :cond_4
    invoke-static {}, Lcom/mbridge/msdk/reward/adapter/RewardUnitCacheManager;->getInstance()Lcom/mbridge/msdk/reward/adapter/RewardUnitCacheManager;

    move-result-object v7

    iget-object v10, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->b:Ljava/lang/String;

    iget-object v13, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v7, v10, v13}, Lcom/mbridge/msdk/reward/adapter/RewardUnitCacheManager;->get(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v7

    iput-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->n:Lcom/mbridge/msdk/videocommon/d/c;

    if-nez v7, :cond_5

    .line 225
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v7

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v10

    invoke-virtual {v10}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v10

    iget-object v13, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v7, v10, v13}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v7

    iput-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->n:Lcom/mbridge/msdk/videocommon/d/c;

    if-nez v7, :cond_5

    .line 227
    invoke-static {}, Lcom/mbridge/msdk/videocommon/d/b;->a()Lcom/mbridge/msdk/videocommon/d/b;

    move-result-object v7

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v10

    invoke-virtual {v10}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v10

    iget-object v13, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    iget-boolean v14, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->f:Z

    invoke-virtual {v7, v10, v13, v14}, Lcom/mbridge/msdk/videocommon/d/b;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/mbridge/msdk/videocommon/d/c;

    move-result-object v7

    iput-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->n:Lcom/mbridge/msdk/videocommon/d/c;

    .line 230
    :cond_5
    iget-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->n:Lcom/mbridge/msdk/videocommon/d/c;

    if-eqz v7, :cond_6

    .line 231
    iget-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->d:Lcom/mbridge/msdk/videocommon/b/d;

    iget-object v10, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->n:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v10}, Lcom/mbridge/msdk/videocommon/d/c;->m()I

    move-result v10

    invoke-virtual {v7, v10}, Lcom/mbridge/msdk/videocommon/b/d;->a(I)V

    .line 232
    iget-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->d:Lcom/mbridge/msdk/videocommon/b/d;

    iget-object v10, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->n:Lcom/mbridge/msdk/videocommon/d/c;

    invoke-virtual {v10}, Lcom/mbridge/msdk/videocommon/d/c;->n()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v7, v10}, Lcom/mbridge/msdk/videocommon/b/d;->a(Ljava/lang/String;)V

    .line 234
    :cond_6
    iget-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->d:Lcom/mbridge/msdk/videocommon/b/d;

    if-eqz v7, :cond_7

    iget-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->d:Lcom/mbridge/msdk/videocommon/b/d;

    invoke-virtual {v7}, Lcom/mbridge/msdk/videocommon/b/d;->b()I

    move-result v7

    if-gtz v7, :cond_7

    .line 235
    iget-object v7, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->d:Lcom/mbridge/msdk/videocommon/b/d;

    invoke-virtual {v7, v5}, Lcom/mbridge/msdk/videocommon/b/d;->a(I)V

    :cond_7
    const-string v7, "mbridge_reward_activity_open"

    .line 238
    invoke-static {v1, v7, v4}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    const-string v10, "mbridge_reward_activity_stay"

    .line 239
    invoke-static {v1, v10, v4}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    if-le v7, v5, :cond_8

    if-le v4, v5, :cond_8

    .line 241
    invoke-virtual {v1, v7, v4}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->overridePendingTransition(II)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_8
    if-eqz v0, :cond_9

    .line 246
    :try_start_2
    sget-object v4, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->SAVE_STATE_KEY_REPORT:Ljava/lang/String;

    invoke-virtual {v0, v4}, Landroid/os/Bundle;->getBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->p:Z
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 248
    :try_start_3
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 251
    :cond_9
    :goto_1
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v0

    iget-object v4, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/videocommon/download/b;->b(Ljava/lang/String;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    .line 253
    sget-object v0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->INTENT_ISBIG_OFFER:Ljava/lang/String;

    invoke-virtual {v6, v0, v9}, Landroid/content/Intent;->getBooleanExtra(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->k:Z

    if-nez v0, :cond_e

    .line 255
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    if-eqz v0, :cond_a

    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_a

    .line 256
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    invoke-interface {v0, v9}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/videocommon/download/a;

    iput-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    .line 259
    :cond_a
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v0, :cond_b

    .line 260
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 261
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/videocommon/download/a;->a(Z)V

    .line 262
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v0, v9}, Lcom/mbridge/msdk/videocommon/download/a;->b(Z)V

    .line 264
    :cond_b
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v0, :cond_c

    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_c

    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->d:Lcom/mbridge/msdk/videocommon/b/d;

    if-nez v0, :cond_d

    .line 265
    :cond_c
    invoke-direct {v1, v8}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    .line 267
    :cond_d
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a()V

    return-void

    .line 273
    :cond_e
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v0

    iget-object v4, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v0, v4}, Lcom/mbridge/msdk/videocommon/download/b;->a(Ljava/lang/String;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    .line 275
    iput-object v3, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->y:Ljava/lang/String;

    if-eqz v0, :cond_f

    .line 276
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_f

    .line 277
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v0, v9}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 278
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCMPTEntryUrl()Ljava/lang/String;

    move-result-object v3

    .line 279
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->y:Ljava/lang/String;

    .line 281
    :cond_f
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->y:Ljava/lang/String;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 1412
    invoke-static {v0}, Lcom/mbridge/msdk/videocommon/a;->a(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/a$a;

    move-result-object v0

    const/4 v2, 0x0

    if-eqz v0, :cond_10

    .line 1414
    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/a$a;->a()Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    goto :goto_2

    :cond_10
    move-object v0, v2

    .line 281
    :goto_2
    iput-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->w:Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    if-nez v0, :cond_1d

    .line 283
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    if-nez v0, :cond_11

    .line 284
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    if-eqz v0, :cond_11

    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_11

    .line 285
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    invoke-interface {v0, v9}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/videocommon/download/a;

    iput-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    .line 288
    :cond_11
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    if-nez v0, :cond_14

    .line 289
    invoke-static {}, Lcom/mbridge/msdk/videocommon/download/b;->getInstance()Lcom/mbridge/msdk/videocommon/download/b;

    move-result-object v0

    iget-boolean v3, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->f:Z

    if-eqz v3, :cond_12

    goto :goto_3

    :cond_12
    move v11, v12

    :goto_3
    iget-object v3, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    iget-boolean v4, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->g:Z

    .line 2131
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/videocommon/download/b;->c(Ljava/lang/String;)Lcom/mbridge/msdk/videocommon/download/d;

    move-result-object v0

    if-eqz v0, :cond_13

    .line 2133
    invoke-virtual {v0, v11, v4}, Lcom/mbridge/msdk/videocommon/download/d;->b(IZ)Lcom/mbridge/msdk/videocommon/download/a;

    move-result-object v2

    .line 289
    :cond_13
    iput-object v2, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    .line 291
    :cond_14
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v0, :cond_15

    .line 292
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/videocommon/download/a;->g()Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    iput-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 293
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/videocommon/download/a;->a(Z)V

    .line 294
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    invoke-virtual {v0, v9}, Lcom/mbridge/msdk/videocommon/download/a;->b(Z)V

    .line 297
    :cond_15
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->q:Lcom/mbridge/msdk/videocommon/download/a;

    if-eqz v0, :cond_16

    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_16

    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->d:Lcom/mbridge/msdk/videocommon/b/d;

    if-nez v0, :cond_17

    .line 298
    :cond_16
    invoke-direct {v1, v8}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    .line 300
    :cond_17
    iput-boolean v9, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->k:Z
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 302
    :try_start_4
    iget-object v10, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v11

    const-string v12, "showMoreOffer showBTOld"

    iget-object v13, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    iget-boolean v14, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->g:Z

    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v15

    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v16

    const-wide/16 v17, 0x0

    invoke-static/range {v10 .. v18}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 307
    :catch_1
    :try_start_5
    invoke-static {}, Lcom/mbridge/msdk/videocommon/a/a;->a()Lcom/mbridge/msdk/videocommon/a/a;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/videocommon/a/a;->a(Ljava/util/List;)Ljava/util/List;

    move-result-object v0
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    const-string v2, "no available campaign"

    if-nez v0, :cond_18

    .line 309
    :try_start_6
    invoke-direct {v1, v2}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    return-void

    .line 312
    :cond_18
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-nez v3, :cond_19

    .line 314
    invoke-direct {v1, v2}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    return-void

    .line 317
    :cond_19
    invoke-interface {v0, v9}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_1c

    invoke-interface {v0, v9}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isDynamicView()Z

    move-result v2

    if-eqz v2, :cond_1c

    if-ne v3, v5, :cond_1b

    .line 319
    invoke-interface {v0, v9}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1a

    .line 321
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignIsFiltered(Z)V

    .line 322
    iget-object v6, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v7

    const-string v8, "no available campaign but to one offer show"

    iget-object v9, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    iget-boolean v10, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->g:Z

    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v11

    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v12

    const-wide/16 v13, 0x0

    invoke-static/range {v6 .. v14}, Lcom/mbridge/msdk/reward/b/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;ZLjava/lang/String;Ljava/lang/String;J)V

    .line 324
    :cond_1a
    iget-object v0, v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {v1, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_4

    .line 326
    :cond_1b
    invoke-direct {v1, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/util/List;)V

    goto :goto_4

    .line 329
    :cond_1c
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a()V

    goto :goto_4

    .line 332
    :cond_1d
    invoke-direct/range {p0 .. p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->b()V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    goto :goto_4

    :catchall_0
    move-exception v0

    .line 335
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onCreate error"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a(Ljava/lang/String;)V

    :goto_4
    return-void
.end method

.method public onDestroy()V
    .locals 5

    .line 745
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->onDestroy()V

    .line 3946
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 3947
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 3948
    invoke-direct {p0, v1}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_0

    .line 3952
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    .line 3953
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-direct {p0, v0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    .line 3956
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBRewardVideoActivity"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 747
    :cond_1
    :goto_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-static {v0}, Lcom/mbridge/msdk/video/module/b/b;->a(Ljava/lang/String;)V

    .line 748
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    const/4 v1, 0x0

    if-eqz v0, :cond_2

    .line 749
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onDestroy()V

    .line 750
    iput-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    .line 752
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-eqz v0, :cond_3

    .line 753
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->onDestroy()V

    .line 754
    iput-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    .line 757
    :cond_3
    iput-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->I:Lcom/mbridge/msdk/video/dynview/e/a;

    .line 758
    iput-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->J:Lcom/mbridge/msdk/video/dynview/e/d;

    .line 760
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$a;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->y:Ljava/lang/String;

    invoke-direct {v1, v2, v3, v4}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$a;-><init>(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V

    return-void
.end method

.method public onPause()V
    .locals 1

    .line 698
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->onPause()V

    .line 699
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    if-eqz v0, :cond_0

    .line 700
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onPause()V

    .line 702
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-eqz v0, :cond_1

    .line 703
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->onPause()V

    :cond_1
    return-void
.end method

.method protected onRestart()V
    .locals 1

    .line 765
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->onRestart()V

    .line 766
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    if-eqz v0, :cond_0

    .line 767
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onRestart()V

    .line 769
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-eqz v0, :cond_1

    .line 770
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->onRestart()V

    :cond_1
    return-void
.end method

.method public onResume()V
    .locals 4

    .line 676
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->onResume()V

    .line 677
    sget-boolean v0, Lcom/mbridge/msdk/foundation/b/b;->c:Z

    if-eqz v0, :cond_0

    return-void

    .line 680
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/mbridge/msdk/foundation/controller/a;->a(Landroid/content/Context;)V

    .line 683
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/f/b;->a()Ljava/util/concurrent/ThreadPoolExecutor;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$c;

    iget-object v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->s:Ljava/util/List;

    invoke-direct {v1, v2, v3}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$c;-><init>(Ljava/lang/String;Ljava/util/List;)V

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ThreadPoolExecutor;->execute(Ljava/lang/Runnable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 685
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MBRewardVideoActivity"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 688
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    if-eqz v0, :cond_1

    .line 689
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onResume()V

    .line 691
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-eqz v0, :cond_2

    .line 692
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->onResume()V

    :cond_2
    return-void
.end method

.method public onSaveInstanceState(Landroid/os/Bundle;)V
    .locals 2

    .line 886
    sget-object v0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->SAVE_STATE_KEY_REPORT:Ljava/lang/String;

    iget-boolean v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->p:Z

    invoke-virtual {p1, v0, v1}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    .line 887
    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->onSaveInstanceState(Landroid/os/Bundle;)V

    return-void
.end method

.method protected onStart()V
    .locals 6

    .line 776
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->onStart()V

    .line 778
    new-instance v0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$4;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity$4;-><init>(Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;)V

    .line 794
    sget-boolean v0, Lcom/mbridge/msdk/foundation/b/b;->c:Z

    if-eqz v0, :cond_0

    return-void

    .line 797
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    const-string v1, "_"

    const/4 v2, 0x1

    if-eqz v0, :cond_1

    .line 798
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onStart()V

    .line 799
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v3, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 800
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->r:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0, v3, v4}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 802
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-eqz v0, :cond_2

    .line 803
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->onStart()V

    .line 804
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_2

    .line 805
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->t:Ljava/util/List;

    const/4 v3, 0x0

    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 806
    iget-object v3, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 807
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v3

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4, v0}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 811
    :cond_2
    iget-boolean v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->A:Z

    if-nez v0, :cond_3

    .line 812
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3, v2}, Lcom/mbridge/msdk/foundation/b/b;->c(Ljava/lang/String;I)V

    .line 813
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->a:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/4 v1, 0x2

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/b/b;->c(Ljava/lang/String;)V

    .line 815
    iput-boolean v2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->A:Z

    :cond_3
    return-void
.end method

.method protected onStop()V
    .locals 1

    const/4 v0, 0x0

    .line 733
    sput-boolean v0, Lcom/mbridge/msdk/MBridgeConstans;->isRewardActivityShowing:Z

    .line 734
    invoke-super {p0}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->onStop()V

    .line 735
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    if-eqz v0, :cond_0

    .line 736
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->onStop()V

    .line 738
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-eqz v0, :cond_1

    .line 739
    invoke-virtual {v0}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->onStop()V

    :cond_1
    return-void
.end method

.method public setTheme(I)V
    .locals 1

    const-string p1, "mbridge_transparent_theme"

    const-string v0, "style"

    .line 975
    invoke-static {p0, p1, v0}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-super {p0, p1}, Lcom/mbridge/msdk/video/js/activity/AbstractJSActivity;->setTheme(I)V

    return-void
.end method

.method public setTopControllerPadding(IIIII)V
    .locals 7

    .line 892
    iput p2, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->D:I

    .line 893
    iput p3, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->F:I

    .line 894
    iput p4, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->E:I

    .line 895
    iput p5, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->G:I

    .line 896
    iput p1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->H:I

    .line 898
    iget-object v0, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->u:Lcom/mbridge/msdk/video/bt/module/MBTempContainer;

    if-eqz v0, :cond_0

    move v1, p1

    move v2, p2

    move v3, p3

    move v4, p4

    move v5, p5

    .line 899
    invoke-virtual/range {v0 .. v5}, Lcom/mbridge/msdk/video/bt/module/MBTempContainer;->setNotchPadding(IIIII)V

    .line 902
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/reward/player/MBRewardVideoActivity;->v:Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;

    if-eqz v1, :cond_1

    move v2, p1

    move v3, p2

    move v4, p3

    move v5, p4

    move v6, p5

    .line 903
    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/video/bt/module/MBridgeBTContainer;->setNotchPadding(IIIII)V

    .line 4011
    :cond_1
    sput p1, Lcom/mbridge/msdk/video/dynview/a/a;->e:I

    .line 4012
    sput p2, Lcom/mbridge/msdk/video/dynview/a/a;->a:I

    .line 4013
    sput p3, Lcom/mbridge/msdk/video/dynview/a/a;->b:I

    .line 4014
    sput p4, Lcom/mbridge/msdk/video/dynview/a/a;->c:I

    .line 4015
    sput p5, Lcom/mbridge/msdk/video/dynview/a/a;->d:I

    return-void
.end method
