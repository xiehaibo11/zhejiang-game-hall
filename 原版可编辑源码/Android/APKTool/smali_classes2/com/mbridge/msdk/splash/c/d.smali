.class public final Lcom/mbridge/msdk/splash/c/d;
.super Ljava/lang/Object;
.source "SplashShowManager.java"


# instance fields
.field public a:Landroid/os/Handler;

.field private b:Ljava/lang/String;

.field private c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private d:Lcom/mbridge/msdk/splash/view/MBSplashView;

.field private e:Lcom/mbridge/msdk/splash/d/d;

.field private f:Lcom/mbridge/msdk/click/b;

.field private g:Z

.field private h:Landroid/widget/TextView;

.field private i:Landroid/view/View;

.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:Lcom/mbridge/msdk/out/MBridgeIds;

.field private m:I

.field private n:Ljava/lang/String;

.field private o:Ljava/lang/String;

.field private p:Ljava/lang/String;

.field private q:Ljava/lang/String;

.field private r:Z

.field private s:Z

.field private t:Landroid/content/Context;

.field private u:Landroid/view/View$OnClickListener;

.field private v:Lcom/mbridge/msdk/splash/d/a;

.field private w:Lcom/mbridge/msdk/click/h;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 4

    .line 102
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "SplashShowManager"

    .line 69
    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->b:Ljava/lang/String;

    const/4 v0, 0x5

    .line 84
    iput v0, p0, Lcom/mbridge/msdk/splash/c/d;->m:I

    const-string v0, "\u70b9\u51fb\u8df3\u8fc7|"

    .line 85
    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->n:Ljava/lang/String;

    .line 86
    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->o:Ljava/lang/String;

    const-string v0, "\u79d2"

    .line 87
    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->p:Ljava/lang/String;

    const-string v0, "\u79d2\u540e\u81ea\u52a8\u5173\u95ed"

    .line 88
    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->q:Ljava/lang/String;

    .line 92
    new-instance v0, Lcom/mbridge/msdk/splash/c/d$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/splash/c/d$1;-><init>(Lcom/mbridge/msdk/splash/c/d;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->u:Landroid/view/View$OnClickListener;

    .line 152
    new-instance v0, Lcom/mbridge/msdk/splash/c/d$2;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/splash/c/d$2;-><init>(Lcom/mbridge/msdk/splash/c/d;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    .line 197
    new-instance v0, Lcom/mbridge/msdk/splash/c/d$3;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/splash/c/d$3;-><init>(Lcom/mbridge/msdk/splash/c/d;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->v:Lcom/mbridge/msdk/splash/d/a;

    .line 525
    new-instance v0, Lcom/mbridge/msdk/splash/c/d$5;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/splash/c/d$5;-><init>(Lcom/mbridge/msdk/splash/c/d;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->w:Lcom/mbridge/msdk/click/h;

    .line 103
    iput-object p3, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    .line 104
    iput-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->k:Ljava/lang/String;

    .line 105
    new-instance p2, Lcom/mbridge/msdk/out/MBridgeIds;

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->k:Ljava/lang/String;

    invoke-direct {p2, v0, p3}, Lcom/mbridge/msdk/out/MBridgeIds;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->l:Lcom/mbridge/msdk/out/MBridgeIds;

    .line 106
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->t:Landroid/content/Context;

    .line 107
    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->h:Landroid/widget/TextView;

    if-nez p2, :cond_1

    .line 108
    new-instance p2, Landroid/widget/TextView;

    invoke-direct {p2, p1}, Landroid/widget/TextView;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->h:Landroid/widget/TextView;

    const/4 p3, 0x1

    .line 109
    invoke-virtual {p2, p3}, Landroid/widget/TextView;->setGravity(I)V

    .line 110
    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->h:Landroid/widget/TextView;

    const/4 p3, 0x0

    invoke-virtual {p2, p3}, Landroid/widget/TextView;->setTextIsSelectable(Z)V

    .line 111
    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->h:Landroid/widget/TextView;

    const/high16 p3, 0x40a00000    # 5.0f

    invoke-static {p1, p3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v0

    invoke-static {p1, p3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-static {p1, p3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-static {p1, p3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result p3

    invoke-virtual {p2, v0, v1, v2, p3}, Landroid/widget/TextView;->setPadding(IIII)V

    .line 112
    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->h:Landroid/widget/TextView;

    invoke-virtual {p2}, Landroid/widget/TextView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    check-cast p2, Landroid/widget/RelativeLayout$LayoutParams;

    if-nez p2, :cond_0

    .line 114
    new-instance p2, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 p3, 0x42c80000    # 100.0f

    invoke-static {p1, p3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result p3

    const/high16 v0, 0x42480000    # 50.0f

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result p1

    invoke-direct {p2, p3, p1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 116
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->h:Landroid/widget/TextView;

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1122
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 1124
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object p2

    .line 1125
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    const-string v0, "string"

    const-string v1, "mbridge_splash_count_time_can_skip"

    invoke-virtual {p3, v1, v0, p2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p3

    .line 1126
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const-string v2, "mbridge_splash_count_time_can_skip_not"

    invoke-virtual {v1, v2, v0, p2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    .line 1127
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    const-string v3, "mbridge_splash_count_time_can_skip_s"

    invoke-virtual {v2, v3, v0, p2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 1128
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {v2, p3}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/mbridge/msdk/splash/c/d;->o:Ljava/lang/String;

    .line 1129
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    invoke-virtual {p3, v1}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/mbridge/msdk/splash/c/d;->q:Ljava/lang/String;

    iput-object p3, p0, Lcom/mbridge/msdk/splash/c/d;->n:Ljava/lang/String;

    .line 1130
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    invoke-virtual {p3, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p3

    iput-object p3, p0, Lcom/mbridge/msdk/splash/c/d;->p:Ljava/lang/String;

    .line 1131
    iget-object p3, p0, Lcom/mbridge/msdk/splash/c/d;->h:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v1

    const-string v2, "mbridge_splash_close_bg"

    const-string v3, "drawable"

    invoke-virtual {v0, v2, v3, v1}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p3, v0}, Landroid/widget/TextView;->setBackgroundResource(I)V

    .line 1132
    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p3

    const-string v0, "mbridge_splash_count_time_skip_text_color"

    const-string v1, "color"

    invoke-virtual {p3, v0, v1, p2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    .line 1133
    iget-object p3, p0, Lcom/mbridge/msdk/splash/c/d;->h:Landroid/widget/TextView;

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-virtual {p1, p2}, Landroid/content/res/Resources;->getColor(I)I

    move-result p1

    invoke-virtual {p3, p1}, Landroid/widget/TextView;->setTextColor(I)V

    :cond_1
    return-void
.end method

.method private a(Landroid/view/View;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 667
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->u:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V
    .locals 8

    if-eqz p1, :cond_0

    .line 703
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPv_urls()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 704
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 705
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v5, v1

    check-cast v5, Ljava/lang/String;

    const/4 v6, 0x0

    const/4 v7, 0x1

    move-object v2, p2

    move-object v3, p1

    move-object v4, p3

    .line 706
    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 711
    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->b:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/c/d;I)V
    .locals 0

    .line 68
    invoke-direct {p0, p1}, Lcom/mbridge/msdk/splash/c/d;->b(I)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/c/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
    .locals 0

    .line 68
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/splash/c/d;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/splash/c/d;)Z
    .locals 0

    .line 68
    iget-boolean p0, p0, Lcom/mbridge/msdk/splash/c/d;->g:Z

    return p0
.end method

.method private b(I)V
    .locals 5

    .line 676
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->e:Lcom/mbridge/msdk/splash/d/d;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 677
    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->l:Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-virtual {v0, v2, p1}, Lcom/mbridge/msdk/splash/d/d;->a(Lcom/mbridge/msdk/out/MBridgeIds;I)V

    .line 678
    iput-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->e:Lcom/mbridge/msdk/splash/d/d;

    .line 679
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v0, v2}, Lcom/mbridge/msdk/splash/e/a;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :cond_0
    const/4 v0, 0x0

    .line 681
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/c/d;->s:Z

    .line 683
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    .line 684
    invoke-static {}, Lcom/mbridge/msdk/splash/a/b;->a()Lcom/mbridge/msdk/splash/a/b;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/splash/a/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/splash/a/b;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/splash/a/b;->d(Ljava/lang/String;)Lcom/mbridge/msdk/splash/a/b;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/splash/a/b;->g(Ljava/lang/String;)Lcom/mbridge/msdk/splash/a/b;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/splash/a/b;->c(Ljava/lang/String;)Lcom/mbridge/msdk/splash/a/b;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCreativeId()J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/splash/a/b;->e(Ljava/lang/String;)Lcom/mbridge/msdk/splash/a/b;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/splash/a/b;->a(Z)Lcom/mbridge/msdk/splash/a/b;

    move-result-object v0

    goto :goto_0

    :cond_1
    move-object v0, v1

    .line 687
    :goto_0
    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-static {v0, v2, p1}, Lcom/mbridge/msdk/splash/e/a;->a(Lcom/mbridge/msdk/splash/a/b;Ljava/lang/String;I)V

    .line 688
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz p1, :cond_2

    .line 689
    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashWebview()Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    move-result-object p1

    if-eqz p1, :cond_2

    .line 691
    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->finishAdSession()V

    .line 694
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    if-eqz p1, :cond_3

    .line 695
    invoke-virtual {p1, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    :cond_3
    return-void
.end method

.method private b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V
    .locals 8

    if-eqz p1, :cond_0

    .line 717
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 718
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x1

    sget v7, Lcom/mbridge/msdk/click/a/a;->h:I

    move-object v1, p2

    move-object v2, p1

    move-object v3, p3

    invoke-static/range {v1 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 721
    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->b:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method private b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
    .locals 3

    .line 614
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->f:Lcom/mbridge/msdk/click/b;

    if-nez v0, :cond_0

    .line 615
    new-instance v0, Lcom/mbridge/msdk/click/b;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->f:Lcom/mbridge/msdk/click/b;

    .line 616
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->w:Lcom/mbridge/msdk/click/h;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/h;)V

    .line 618
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 619
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->f:Lcom/mbridge/msdk/click/b;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 621
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReportClick()Z

    move-result v0

    if-nez v0, :cond_1

    .line 622
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReportClick(Z)V

    .line 623
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/mbridge/msdk/splash/e/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 625
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->e:Lcom/mbridge/msdk/splash/d/d;

    if-eqz v0, :cond_2

    .line 626
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->l:Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/splash/d/d;->b(Lcom/mbridge/msdk/out/MBridgeIds;)V

    const/4 v0, 0x3

    .line 628
    invoke-direct {p0, v0}, Lcom/mbridge/msdk/splash/c/d;->b(I)V

    :cond_2
    if-eqz p2, :cond_3

    .line 630
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_3

    .line 631
    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-static {p1, p2, p3}, Lcom/mbridge/msdk/splash/e/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/splash/c/d;I)V
    .locals 4

    .line 3636
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz v0, :cond_0

    .line 3637
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->updateCountdown(I)V

    .line 3638
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 3639
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/splash/js/b;->c(I)V

    :cond_0
    if-gez p1, :cond_1

    .line 3643
    iput p1, p0, Lcom/mbridge/msdk/splash/c/d;->m:I

    goto :goto_0

    .line 3646
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->e:Lcom/mbridge/msdk/splash/d/d;

    if-eqz v0, :cond_2

    .line 3647
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->l:Lcom/mbridge/msdk/out/MBridgeIds;

    mul-int/lit16 p1, p1, 0x3e8

    int-to-long v2, p1

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/splash/d/d;->a(Lcom/mbridge/msdk/out/MBridgeIds;J)V

    .line 3650
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->i:Landroid/view/View;

    if-nez p1, :cond_3

    .line 3651
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/c/d;->h()V

    :cond_3
    :goto_0
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/splash/c/d;)Z
    .locals 0

    .line 68
    iget-boolean p0, p0, Lcom/mbridge/msdk/splash/c/d;->s:Z

    return p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/splash/c/d;I)I
    .locals 0

    .line 68
    iput p1, p0, Lcom/mbridge/msdk/splash/c/d;->m:I

    return p1
.end method

.method private c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V
    .locals 9

    .line 726
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/foundation/controller/a;->a(Landroid/content/Context;)V

    .line 727
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 729
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/mbridge/msdk/splash/c/d$8;

    invoke-direct {v1, p0, p2, p1}, Lcom/mbridge/msdk/splash/c/d$8;-><init>(Lcom/mbridge/msdk/splash/c/d;Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 741
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    const/4 v6, 0x0

    const/4 v7, 0x1

    .line 747
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v5

    sget v8, Lcom/mbridge/msdk/click/a/a;->g:I

    move-object v2, p2

    move-object v3, p1

    move-object v4, p3

    invoke-static/range {v2 .. v8}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 749
    :cond_0
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/l;->l()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    const/4 v5, 0x0

    const/4 v6, 0x0

    .line 752
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/l;->l()[Ljava/lang/String;

    move-result-object v4

    move-object v1, p2

    move-object v2, p1

    move-object v3, p3

    invoke-static/range {v1 .. v6}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V

    :cond_1
    return-void
.end method

.method static synthetic c(Lcom/mbridge/msdk/splash/c/d;)V
    .locals 0

    .line 68
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/c/d;->g()V

    return-void
.end method

.method static synthetic d(Lcom/mbridge/msdk/splash/c/d;)I
    .locals 0

    .line 68
    iget p0, p0, Lcom/mbridge/msdk/splash/c/d;->m:I

    return p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/splash/c/d;)I
    .locals 2

    .line 68
    iget v0, p0, Lcom/mbridge/msdk/splash/c/d;->m:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/mbridge/msdk/splash/c/d;->m:I

    return v0
.end method

.method static synthetic f(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 0

    .line 68
    iget-object p0, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/splash/view/MBSplashView;
    .locals 0

    .line 68
    iget-object p0, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    return-object p0
.end method

.method private declared-synchronized g()V
    .locals 5

    monitor-enter p0

    .line 360
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v0, :cond_0

    .line 361
    monitor-exit p0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 363
    :try_start_1
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/c/d;->s:Z

    .line 365
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->e:Lcom/mbridge/msdk/splash/d/d;

    if-eqz v1, :cond_3

    .line 366
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz v1, :cond_3

    .line 367
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->t:Landroid/content/Context;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->t:Landroid/content/Context;

    instance-of v1, v1, Landroid/app/Activity;

    if-eqz v1, :cond_1

    .line 368
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->t:Landroid/content/Context;

    check-cast v1, Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->isFinishing()Z

    move-result v1

    if-eqz v1, :cond_1

    .line 369
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->e:Lcom/mbridge/msdk/splash/d/d;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->l:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string v2, "Activity is finishing"

    invoke-virtual {v0, v1, v2}, Lcom/mbridge/msdk/splash/d/d;->a(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 370
    monitor-exit p0

    return-void

    .line 374
    :cond_1
    :try_start_2
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->isShown()Z

    move-result v1

    if-eqz v1, :cond_2

    .line 375
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->e:Lcom/mbridge/msdk/splash/d/d;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->l:Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/splash/d/d;->a(Lcom/mbridge/msdk/out/MBridgeIds;)V

    goto :goto_0

    .line 377
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->e:Lcom/mbridge/msdk/splash/d/d;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->l:Lcom/mbridge/msdk/out/MBridgeIds;

    const-string v3, "SplashView or container is not visibility"

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/splash/d/d;->a(Lcom/mbridge/msdk/out/MBridgeIds;Ljava/lang/String;)V

    .line 382
    :cond_3
    :goto_0
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReport()Z

    move-result v1

    if-nez v1, :cond_8

    .line 383
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->isDynamicView()Z

    move-result v1

    if-nez v1, :cond_5

    .line 384
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 v2, 0x0

    .line 1486
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isHasMBTplMark()Z

    move-result v3

    if-nez v3, :cond_4

    .line 1488
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-direct {p0, v1, v2, v3}, Lcom/mbridge/msdk/splash/c/d;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 1489
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReport(Z)V

    .line 1490
    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    const-string v3, "splash"

    invoke-static {v2, v1, v3}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    goto :goto_1

    :cond_4
    move v0, v2

    :goto_1
    if-eqz v0, :cond_6

    .line 1497
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-direct {p0, v1, v0, v2}, Lcom/mbridge/msdk/splash/c/d;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 1498
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-direct {p0, v1, v0, v2}, Lcom/mbridge/msdk/splash/c/d;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    goto :goto_2

    .line 386
    :cond_5
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 1503
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-direct {p0, v1, v2, v3}, Lcom/mbridge/msdk/splash/c/d;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 1504
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-direct {p0, v1, v2, v3}, Lcom/mbridge/msdk/splash/c/d;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 1505
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-direct {p0, v1, v2, v3}, Lcom/mbridge/msdk/splash/c/d;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 1506
    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReport(Z)V

    .line 1507
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    const-string v2, "splash"

    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    .line 388
    :cond_6
    :goto_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-eqz v1, :cond_8

    .line 2056
    :try_start_3
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v3

    if-eqz v3, :cond_8

    .line 2057
    new-instance v3, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v3}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    .line 2058
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 2059
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 2060
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 2061
    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v1

    if-eqz v1, :cond_7

    sget v1, Lcom/mbridge/msdk/foundation/entity/p;->a:I

    goto :goto_3

    :cond_7
    sget v1, Lcom/mbridge/msdk/foundation/entity/p;->b:I

    :goto_3
    invoke-virtual {v3, v1}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    .line 2063
    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v3, v0, v2}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/p;Landroid/content/Context;Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    goto :goto_4

    :catch_0
    move-exception v0

    .line 2066
    :try_start_4
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 390
    :cond_8
    :goto_4
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method static synthetic h(Lcom/mbridge/msdk/splash/c/d;)Ljava/lang/String;
    .locals 0

    .line 68
    iget-object p0, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    return-object p0
.end method

.method private h()V
    .locals 2

    .line 657
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/c/d;->g:Z

    if-eqz v0, :cond_0

    .line 658
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->o:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/mbridge/msdk/splash/c/d;->m:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->p:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 660
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget v1, p0, Lcom/mbridge/msdk/splash/c/d;->m:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->q:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 662
    :goto_0
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->h:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method static synthetic i(Lcom/mbridge/msdk/splash/c/d;)Ljava/lang/String;
    .locals 0

    .line 68
    iget-object p0, p0, Lcom/mbridge/msdk/splash/c/d;->b:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic j(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/splash/d/d;
    .locals 0

    .line 68
    iget-object p0, p0, Lcom/mbridge/msdk/splash/c/d;->e:Lcom/mbridge/msdk/splash/d/d;

    return-object p0
.end method

.method static synthetic k(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/out/MBridgeIds;
    .locals 0

    .line 68
    iget-object p0, p0, Lcom/mbridge/msdk/splash/c/d;->l:Lcom/mbridge/msdk/out/MBridgeIds;

    return-object p0
.end method

.method static synthetic l(Lcom/mbridge/msdk/splash/c/d;)Lcom/mbridge/msdk/click/b;
    .locals 0

    .line 68
    iget-object p0, p0, Lcom/mbridge/msdk/splash/c/d;->f:Lcom/mbridge/msdk/click/b;

    return-object p0
.end method

.method static synthetic m(Lcom/mbridge/msdk/splash/c/d;)Landroid/content/Context;
    .locals 0

    .line 68
    iget-object p0, p0, Lcom/mbridge/msdk/splash/c/d;->t:Landroid/content/Context;

    return-object p0
.end method


# virtual methods
.method public final a()Lcom/mbridge/msdk/splash/d/a;
    .locals 1

    .line 285
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->v:Lcom/mbridge/msdk/splash/d/a;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    .line 142
    iput p1, p0, Lcom/mbridge/msdk/splash/c/d;->m:I

    return-void
.end method

.method public final a(Landroid/view/ViewGroup;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 147
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->u:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 149
    :cond_0
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->i:Landroid/view/View;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/splash/view/MBSplashView;)V
    .locals 7

    const-string v0, "OMSDK"

    .line 289
    iget-boolean v1, p0, Lcom/mbridge/msdk/splash/c/d;->g:Z

    invoke-virtual {p0, v1}, Lcom/mbridge/msdk/splash/c/d;->a(Z)V

    .line 290
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 291
    iput-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    .line 292
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashJSBridgeImpl()Lcom/mbridge/msdk/splash/js/b;

    move-result-object v1

    if-nez v1, :cond_0

    .line 294
    new-instance v1, Lcom/mbridge/msdk/splash/js/b;

    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/d;->k:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-direct {v1, v2, v3, v4}, Lcom/mbridge/msdk/splash/js/b;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 295
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 296
    invoke-interface {v2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 297
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/splash/js/b;->a(Ljava/util/List;)V

    .line 299
    :cond_0
    iget v2, p0, Lcom/mbridge/msdk/splash/c/d;->m:I

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/splash/js/b;->b(I)V

    .line 300
    iget-boolean v2, p0, Lcom/mbridge/msdk/splash/c/d;->g:Z

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/splash/js/b;->a(I)V

    .line 301
    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->v:Lcom/mbridge/msdk/splash/d/a;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/splash/js/b;->a(Lcom/mbridge/msdk/splash/d/a;)V

    .line 302
    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setSplashJSBridgeImpl(Lcom/mbridge/msdk/splash/js/b;)V

    .line 303
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isHasMBTplMark()Z

    move-result p1

    .line 304
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->i:Landroid/view/View;

    const/16 v2, 0x8

    if-nez v1, :cond_2

    if-eqz p1, :cond_1

    .line 306
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->h:Landroid/widget/TextView;

    invoke-virtual {p1, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 308
    :cond_1
    invoke-direct {p0}, Lcom/mbridge/msdk/splash/c/d;->h()V

    .line 309
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->h:Landroid/widget/TextView;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/splash/c/d;->a(Landroid/view/View;)V

    .line 310
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->h:Landroid/widget/TextView;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setCloseView(Landroid/view/View;)V

    goto :goto_0

    :cond_2
    if-eqz p1, :cond_3

    .line 314
    invoke-virtual {v1, v2}, Landroid/view/View;->setVisibility(I)V

    .line 316
    :cond_3
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->i:Landroid/view/View;

    invoke-direct {p0, p1}, Lcom/mbridge/msdk/splash/c/d;->a(Landroid/view/View;)V

    .line 317
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->i:Landroid/view/View;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->setCloseView(Landroid/view/View;)V

    .line 319
    :goto_0
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/view/MBSplashView;->show()V

    .line 320
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p1, :cond_4

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isActiveOm()Z

    move-result p1

    if-eqz p1, :cond_4

    if-eqz p2, :cond_4

    .line 321
    invoke-virtual {p2}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashWebview()Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 324
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->getUrl()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {p2, p1, v1, v2}, Lcom/mbridge/msdk/a/b;->a(Landroid/content/Context;Landroid/webkit/WebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object p2

    if-eqz p2, :cond_4

    .line 326
    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->setAdSession(Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)V

    .line 327
    invoke-virtual {p2, p1}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->registerAdView(Landroid/view/View;)V

    .line 328
    invoke-virtual {p2}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->start()V

    const-string p2, "adSession.start()"

    .line 329
    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p2

    .line 333
    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 334
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_4

    .line 335
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    .line 336
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v3

    .line 337
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v4

    .line 338
    new-instance v1, Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashWebview;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {v1, p1}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    iget-object v5, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "fetch OM failed, exception"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 344
    :cond_4
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/c/b;->a(Ljava/lang/String;)V

    .line 345
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/splash/c/b;->b(Ljava/lang/String;)V

    .line 346
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    const/4 p2, 0x1

    invoke-virtual {p1, p2}, Landroid/os/Handler;->removeMessages(I)V

    .line 347
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    const-wide/16 v0, 0x3e8

    invoke-virtual {p1, p2, v0, v1}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 348
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    const/4 p2, 0x2

    invoke-virtual {p1, p2, v0, v1}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 1393
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/b/b;->b()Z

    move-result p1

    if-nez p1, :cond_5

    goto/16 :goto_3

    .line 1397
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->isDynamicView()Z

    move-result p1

    if-eqz p1, :cond_6

    goto :goto_3

    .line 1401
    :cond_6
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    new-instance v0, Lcom/mbridge/msdk/splash/c/d$4;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/splash/c/d$4;-><init>(Lcom/mbridge/msdk/splash/c/d;)V

    invoke-virtual {p1, p2, v0}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/b/a;)V

    .line 1456
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/b/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/widget/FeedBackButton;

    move-result-object p1

    if-eqz p1, :cond_9

    const/4 p2, 0x0

    .line 1461
    :try_start_1
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/FeedBackButton;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout$LayoutParams;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    move-object p2, v0

    goto :goto_2

    :catch_0
    move-exception v0

    .line 1463
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    if-nez p2, :cond_7

    .line 1466
    new-instance p2, Landroid/widget/RelativeLayout$LayoutParams;

    sget v0, Lcom/mbridge/msdk/foundation/b/b;->a:I

    sget v1, Lcom/mbridge/msdk/foundation/b/b;->b:I

    invoke-direct {p2, v0, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1468
    :cond_7
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x41200000    # 10.0f

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v0

    iput v0, p2, Landroid/widget/RelativeLayout$LayoutParams;->topMargin:I

    .line 1469
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v0

    iput v0, p2, Landroid/widget/RelativeLayout$LayoutParams;->leftMargin:I

    .line 1470
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/FeedBackButton;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    if-eqz v0, :cond_8

    .line 1472
    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 1474
    :cond_8
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/splash/view/MBSplashView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 1476
    :cond_9
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 1477
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p1, p2, v0}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :goto_3
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
    .locals 4

    if-eqz p1, :cond_3

    .line 556
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 557
    new-instance v0, Lcom/mbridge/msdk/splash/c/d$6;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/mbridge/msdk/splash/c/d$6;-><init>(Lcom/mbridge/msdk/splash/c/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V

    .line 573
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz v1, :cond_3

    invoke-static {p1}, Lcom/mbridge/msdk/click/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v1

    if-eqz v1, :cond_3

    iget-boolean v1, p0, Lcom/mbridge/msdk/splash/c/d;->r:Z

    if-nez v1, :cond_3

    .line 574
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->f:Lcom/mbridge/msdk/click/b;

    if-nez v1, :cond_0

    .line 575
    new-instance v1, Lcom/mbridge/msdk/click/b;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-direct {v1, v2, v3}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->f:Lcom/mbridge/msdk/click/b;

    .line 576
    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->w:Lcom/mbridge/msdk/click/h;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/click/h;)V

    .line 578
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v1}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getContext()Landroid/content/Context;

    move-result-object v1

    .line 579
    iget-object v2, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    new-instance v3, Lcom/mbridge/msdk/splash/c/d$7;

    invoke-direct {v3, p0, p1, v1, v0}, Lcom/mbridge/msdk/splash/c/d$7;-><init>(Lcom/mbridge/msdk/splash/c/d;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Lcom/mbridge/msdk/widget/dialog/a;)V

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/splash/view/MBSplashView;->post(Ljava/lang/Runnable;)Z

    const/4 v0, 0x1

    .line 2824
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/c/d;->r:Z

    .line 2825
    iget v1, p0, Lcom/mbridge/msdk/splash/c/d;->m:I

    if-lez v1, :cond_1

    .line 2826
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    if-eqz v1, :cond_1

    .line 2827
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    invoke-virtual {v1, v0}, Landroid/os/Handler;->removeMessages(I)V

    .line 2830
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz v0, :cond_2

    .line 2831
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashWebview()Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 2832
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "onInstallAlertShow"

    const-string v2, ""

    .line 2833
    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/splash/js/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception v0

    .line 605
    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->b:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    if-eqz p1, :cond_4

    .line 609
    invoke-direct {p0, p1, p2, p3}, Lcom/mbridge/msdk/splash/c/d;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V

    :cond_4
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/splash/d/d;)V
    .locals 0

    .line 138
    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->e:Lcom/mbridge/msdk/splash/d/d;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 517
    iput-boolean p1, p0, Lcom/mbridge/msdk/splash/c/d;->g:Z

    if-eqz p1, :cond_0

    .line 519
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->o:Ljava/lang/String;

    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->n:Ljava/lang/String;

    goto :goto_0

    .line 521
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->q:Ljava/lang/String;

    iput-object p1, p0, Lcom/mbridge/msdk/splash/c/d;->n:Ljava/lang/String;

    :goto_0
    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 353
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 354
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final c()V
    .locals 2

    .line 757
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->e:Lcom/mbridge/msdk/splash/d/d;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 758
    iput-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->e:Lcom/mbridge/msdk/splash/d/d;

    .line 760
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->v:Lcom/mbridge/msdk/splash/d/a;

    if-eqz v0, :cond_1

    .line 761
    iput-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->v:Lcom/mbridge/msdk/splash/d/a;

    .line 763
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->u:Landroid/view/View$OnClickListener;

    if-eqz v0, :cond_2

    .line 764
    iput-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->u:Landroid/view/View$OnClickListener;

    .line 766
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz v0, :cond_3

    .line 767
    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->destroy()V

    .line 769
    :cond_3
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/splash/c/d;->j:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/b/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method public final d()V
    .locals 4

    .line 773
    iget-boolean v0, p0, Lcom/mbridge/msdk/splash/c/d;->r:Z

    if-nez v0, :cond_1

    sget-boolean v0, Lcom/mbridge/msdk/foundation/b/b;->c:Z

    if-nez v0, :cond_1

    .line 774
    iget v0, p0, Lcom/mbridge/msdk/splash/c/d;->m:I

    if-lez v0, :cond_0

    .line 775
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 776
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 777
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 781
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz v0, :cond_1

    .line 782
    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->onResume()V

    .line 783
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashWebview()Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 784
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "onSystemResume"

    const-string v2, ""

    .line 785
    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/splash/js/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final e()V
    .locals 3

    .line 792
    iget v0, p0, Lcom/mbridge/msdk/splash/c/d;->m:I

    if-lez v0, :cond_0

    .line 793
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 794
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 797
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz v0, :cond_1

    .line 798
    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->onPause()V

    .line 799
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashWebview()Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 800
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "onSystemPause"

    const-string v2, ""

    .line 801
    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/splash/js/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final f()V
    .locals 4

    const/4 v0, 0x0

    .line 807
    iput-boolean v0, p0, Lcom/mbridge/msdk/splash/c/d;->r:Z

    .line 808
    iget v0, p0, Lcom/mbridge/msdk/splash/c/d;->m:I

    if-lez v0, :cond_0

    .line 809
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/4 v1, 0x1

    .line 810
    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 811
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->a:Landroid/os/Handler;

    const-wide/16 v2, 0x3e8

    invoke-virtual {v0, v1, v2, v3}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    .line 815
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/splash/c/d;->d:Lcom/mbridge/msdk/splash/view/MBSplashView;

    if-eqz v0, :cond_1

    .line 816
    invoke-virtual {v0}, Lcom/mbridge/msdk/splash/view/MBSplashView;->getSplashWebview()Lcom/mbridge/msdk/splash/view/MBSplashWebview;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 817
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "onInstallAlertHide"

    const-string v2, ""

    .line 818
    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/splash/js/c;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method
