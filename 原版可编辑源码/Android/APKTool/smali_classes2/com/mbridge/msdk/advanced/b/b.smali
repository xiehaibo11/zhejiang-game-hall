.class public final Lcom/mbridge/msdk/advanced/b/b;
.super Ljava/lang/Object;
.source "NativeAdvancedShowManager.java"


# instance fields
.field public a:Landroid/os/Handler;

.field private b:Ljava/lang/String;

.field private c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

.field private e:Lcom/mbridge/msdk/advanced/c/d;

.field private f:Lcom/mbridge/msdk/click/b;

.field private g:Lcom/mbridge/msdk/advanced/c/c;

.field private h:Z

.field private i:I

.field private j:Landroid/widget/ImageView;

.field private k:Ljava/lang/String;

.field private l:Ljava/lang/String;

.field private m:Lcom/mbridge/msdk/out/MBridgeIds;

.field private n:Z

.field private o:Landroid/view/View$OnClickListener;

.field private p:Lcom/mbridge/msdk/advanced/c/a;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 97
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "NativeAdvancedShowManager"

    .line 70
    iput-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->b:Ljava/lang/String;

    const/4 v0, -0x1

    .line 79
    iput v0, p0, Lcom/mbridge/msdk/advanced/b/b;->i:I

    .line 88
    new-instance v0, Lcom/mbridge/msdk/advanced/b/b$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/advanced/b/b$1;-><init>(Lcom/mbridge/msdk/advanced/b/b;)V

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->o:Landroid/view/View$OnClickListener;

    .line 136
    new-instance v0, Lcom/mbridge/msdk/advanced/b/b$2;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/mbridge/msdk/advanced/b/b$2;-><init>(Lcom/mbridge/msdk/advanced/b/b;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->a:Landroid/os/Handler;

    .line 168
    new-instance v0, Lcom/mbridge/msdk/advanced/b/b$3;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/advanced/b/b$3;-><init>(Lcom/mbridge/msdk/advanced/b/b;)V

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->p:Lcom/mbridge/msdk/advanced/c/a;

    .line 98
    iput-object p3, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    .line 99
    iput-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->l:Ljava/lang/String;

    .line 100
    new-instance v0, Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-direct {v0, p2, p3}, Lcom/mbridge/msdk/out/MBridgeIds;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->m:Lcom/mbridge/msdk/out/MBridgeIds;

    .line 101
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->j:Landroid/widget/ImageView;

    if-nez p2, :cond_1

    .line 102
    new-instance p2, Landroid/widget/ImageView;

    invoke-direct {p2, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->j:Landroid/widget/ImageView;

    const/high16 p3, 0x40000000    # 2.0f

    .line 103
    invoke-static {p1, p3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v0

    invoke-static {p1, p3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-static {p1, p3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-static {p1, p3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result p1

    invoke-virtual {p2, v0, v1, v2, p1}, Landroid/widget/ImageView;->setPadding(IIII)V

    .line 1113
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    .line 1114
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->j:Landroid/widget/ImageView;

    sget-object p3, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p2, p3}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 1115
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->j:Landroid/widget/ImageView;

    invoke-virtual {p2}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    check-cast p2, Landroid/widget/RelativeLayout$LayoutParams;

    if-nez p2, :cond_0

    .line 1117
    new-instance p2, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 p3, 0x41e80000    # 29.0f

    invoke-static {p1, p3}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result p3

    const/high16 v0, 0x41800000    # 16.0f

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/ae;->b(Landroid/content/Context;F)I

    move-result v0

    invoke-direct {p2, p3, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1119
    :cond_0
    iget-object p3, p0, Lcom/mbridge/msdk/advanced/b/b;->j:Landroid/widget/ImageView;

    invoke-virtual {p3, p2}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1121
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->j:Landroid/widget/ImageView;

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p3

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object p3

    const-string v0, "mbridge_native_advanced_close_icon"

    const-string v1, "drawable"

    invoke-virtual {p1, v0, v1, p3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageResource(I)V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/b/b;I)V
    .locals 11

    .line 4598
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->e:Lcom/mbridge/msdk/advanced/c/d;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 4599
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b;->m:Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/advanced/c/d;->c(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 4600
    iput-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->e:Lcom/mbridge/msdk/advanced/c/d;

    .line 4601
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v2, :cond_0

    .line 5108
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v3

    if-eqz v3, :cond_0

    .line 5109
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v9

    .line 5110
    new-instance v10, Lcom/mbridge/msdk/foundation/entity/p;

    .line 5111
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v7

    const-string v4, "2000061"

    move-object v3, v10

    move-object v8, v0

    invoke-direct/range {v3 .. v9}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    .line 5112
    sget v2, Lcom/mbridge/msdk/foundation/entity/p;->a:I

    invoke-virtual {v10, v2}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    .line 5113
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v10, v2, v0}, Lcom/mbridge/msdk/foundation/same/report/c;->b(Lcom/mbridge/msdk/foundation/entity/p;Landroid/content/Context;Ljava/lang/String;)V

    .line 4604
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_1

    .line 4605
    invoke-static {}, Lcom/mbridge/msdk/advanced/common/c;->a()Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/advanced/common/c;->b(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/advanced/common/c;->d(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/advanced/common/c;->g(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/advanced/common/c;->c(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getCreativeId()J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, ""

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/advanced/common/c;->e(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isBidCampaign()Z

    move-result v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/advanced/common/c;->a(Z)Lcom/mbridge/msdk/advanced/common/c;

    move-result-object v0

    goto :goto_0

    :cond_1
    move-object v0, v1

    .line 4608
    :goto_0
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    if-eqz v0, :cond_3

    const-string v3, "2000069"

    .line 5212
    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/advanced/common/c;->a(Ljava/lang/String;)Lcom/mbridge/msdk/advanced/common/c;

    .line 5213
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/advanced/common/c;->a(I)V

    .line 5214
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result p1

    if-eqz p1, :cond_2

    .line 5215
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object p1

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/common/c;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    goto :goto_1

    .line 5217
    :cond_2
    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/common/c;->b()Ljava/lang/String;

    move-result-object p1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {p1, v0, v2}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    .line 4609
    :cond_3
    :goto_1
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    if-eqz p1, :cond_4

    const/16 v0, 0x8

    .line 4610
    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setVisibility(I)V

    .line 4611
    invoke-virtual {p0}, Lcom/mbridge/msdk/advanced/b/b;->e()V

    .line 4612
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-virtual {p1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getAdvancedNativeWebview()Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 4614
    invoke-virtual {p1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->finishAdSession()V

    .line 4617
    :cond_4
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/b/b;->a:Landroid/os/Handler;

    if-eqz p0, :cond_5

    .line 4618
    invoke-virtual {p0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    :cond_5
    return-void
.end method

.method private a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V
    .locals 8

    if-eqz p1, :cond_0

    .line 625
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPv_urls()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 626
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 627
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

    .line 628
    invoke-static/range {v2 .. v7}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 633
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->b:Ljava/lang/String;

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/b/b;)Z
    .locals 0

    .line 69
    iget-boolean p0, p0, Lcom/mbridge/msdk/advanced/b/b;->h:Z

    return p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/advanced/b/b;Z)Z
    .locals 0

    .line 69
    iput-boolean p1, p0, Lcom/mbridge/msdk/advanced/b/b;->n:Z

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/advanced/b/b;I)I
    .locals 0

    .line 69
    iput p1, p0, Lcom/mbridge/msdk/advanced/b/b;->i:I

    return p1
.end method

.method static synthetic b(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object p0
.end method

.method static synthetic c(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/b/b;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    return-object p0
.end method

.method static synthetic d(Lcom/mbridge/msdk/advanced/b/b;)Ljava/lang/String;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic e(Lcom/mbridge/msdk/advanced/b/b;)Ljava/lang/String;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/b/b;->b:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic f(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/c/d;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/b/b;->e:Lcom/mbridge/msdk/advanced/c/d;

    return-object p0
.end method

.method static synthetic g(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/out/MBridgeIds;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/b/b;->m:Lcom/mbridge/msdk/out/MBridgeIds;

    return-object p0
.end method

.method static synthetic h(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/click/b;
    .locals 0

    .line 69
    iget-object p0, p0, Lcom/mbridge/msdk/advanced/b/b;->f:Lcom/mbridge/msdk/click/b;

    return-object p0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 130
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 131
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final a(Lcom/mbridge/msdk/advanced/c/c;)V
    .locals 0

    .line 109
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/b;->g:Lcom/mbridge/msdk/advanced/c/c;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/advanced/c/d;)V
    .locals 0

    .line 126
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/b;->e:Lcom/mbridge/msdk/advanced/c/d;

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;Z)V
    .locals 10

    const-string v0, "OMSDK"

    if-nez p2, :cond_0

    return-void

    .line 255
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    new-instance v3, Lcom/mbridge/msdk/advanced/b/b$4;

    invoke-direct {v3, p0, p2}, Lcom/mbridge/msdk/advanced/b/b$4;-><init>(Lcom/mbridge/msdk/advanced/b/b;Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;)V

    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/b/a;)V

    .line 311
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 313
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/b/b;->b()Z

    move-result v1

    if-eqz v1, :cond_3

    .line 314
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/b/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/widget/FeedBackButton;

    move-result-object v1

    if-eqz v1, :cond_3

    const/4 v2, 0x0

    .line 318
    :try_start_0
    invoke-virtual {v1}, Lcom/mbridge/msdk/widget/FeedBackButton;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v3

    check-cast v3, Landroid/widget/RelativeLayout$LayoutParams;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v2, v3

    goto :goto_0

    :catch_0
    move-exception v3

    .line 320
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    if-nez v2, :cond_1

    .line 323
    new-instance v2, Landroid/widget/RelativeLayout$LayoutParams;

    sget v3, Lcom/mbridge/msdk/foundation/b/b;->a:I

    sget v4, Lcom/mbridge/msdk/foundation/b/b;->b:I

    invoke-direct {v2, v3, v4}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    :cond_1
    const/16 v3, 0xc

    .line 325
    invoke-virtual {v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 326
    invoke-virtual {v1}, Lcom/mbridge/msdk/widget/FeedBackButton;->getParent()Landroid/view/ViewParent;

    move-result-object v3

    check-cast v3, Landroid/view/ViewGroup;

    if-eqz v3, :cond_2

    .line 328
    invoke-virtual {v3, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 330
    :cond_2
    invoke-virtual {p2, v1, v2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 335
    :cond_3
    iget-boolean v1, p0, Lcom/mbridge/msdk/advanced/b/b;->h:Z

    .line 1453
    iput-boolean v1, p0, Lcom/mbridge/msdk/advanced/b/b;->h:Z

    .line 336
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 337
    iput-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    .line 338
    invoke-virtual {p2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getAdvancedNativeJSBridgeImpl()Lcom/mbridge/msdk/advanced/js/a;

    move-result-object v1

    if-nez v1, :cond_4

    .line 340
    new-instance v1, Lcom/mbridge/msdk/advanced/js/a;

    invoke-virtual {p2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/mbridge/msdk/advanced/b/b;->l:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    invoke-direct {v1, v2, v3, v4}, Lcom/mbridge/msdk/advanced/js/a;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 341
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 342
    invoke-interface {v2, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 343
    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/advanced/js/a;->a(Ljava/util/List;)V

    .line 345
    :cond_4
    iget-boolean v2, p0, Lcom/mbridge/msdk/advanced/b/b;->h:Z

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/advanced/js/a;->a(I)V

    .line 346
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b;->p:Lcom/mbridge/msdk/advanced/c/a;

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/advanced/js/a;->a(Lcom/mbridge/msdk/advanced/c/a;)V

    .line 347
    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setAdvancedNativeJSBridgeImpl(Lcom/mbridge/msdk/advanced/js/a;)V

    .line 348
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isHasMBTplMark()Z

    move-result v1

    if-nez v1, :cond_5

    .line 349
    iget-boolean v1, p0, Lcom/mbridge/msdk/advanced/b/b;->h:Z

    if-nez v1, :cond_6

    .line 350
    :cond_5
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->j:Landroid/widget/ImageView;

    const/16 v2, 0x8

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 353
    :cond_6
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->j:Landroid/widget/ImageView;

    if-eqz v1, :cond_7

    .line 1589
    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b;->o:Landroid/view/View$OnClickListener;

    invoke-virtual {v1, v2}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 354
    :cond_7
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->j:Landroid/widget/ImageView;

    invoke-virtual {p2, v1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setCloseView(Landroid/view/View;)V

    .line 355
    invoke-virtual {p2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getVisibility()I

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_8

    .line 356
    invoke-virtual {p2, v2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setVisibility(I)V

    .line 358
    :cond_8
    invoke-virtual {p2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getAdvancedNativeWebview()Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/am;->a(Landroid/view/View;)Z

    move-result v1

    .line 359
    iget-object v3, p0, Lcom/mbridge/msdk/advanced/b/b;->g:Lcom/mbridge/msdk/advanced/c/c;

    if-eqz v3, :cond_14

    if-nez v1, :cond_14

    invoke-virtual {v3}, Lcom/mbridge/msdk/advanced/c/c;->b()Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    move-result-object v1

    if-eqz v1, :cond_14

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->g:Lcom/mbridge/msdk/advanced/c/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/advanced/c/c;->b()Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;->getAlpha()F

    move-result v1

    const/high16 v3, 0x3f000000    # 0.5f

    cmpg-float v1, v1, v3

    if-ltz v1, :cond_14

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->g:Lcom/mbridge/msdk/advanced/c/c;

    invoke-virtual {v1}, Lcom/mbridge/msdk/advanced/c/c;->b()Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/advanced/view/MBOutNativeAdvancedViewGroup;->getVisibility()I

    move-result v1

    if-nez v1, :cond_14

    iget-boolean v1, p0, Lcom/mbridge/msdk/advanced/b/b;->n:Z

    if-eqz v1, :cond_9

    goto/16 :goto_5

    .line 371
    :cond_9
    invoke-virtual {p2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->show()V

    .line 372
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p3

    invoke-virtual {p2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {p3, v1}, Lcom/mbridge/msdk/foundation/controller/a;->a(Landroid/content/Context;)V

    .line 373
    iget-object p3, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    invoke-virtual {p1, p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 374
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object p3

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    invoke-virtual {p3, v1, p1}, Lcom/mbridge/msdk/foundation/b/b;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 375
    iget-object p3, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz p3, :cond_a

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isActiveOm()Z

    move-result p3

    if-eqz p3, :cond_a

    if-eqz p2, :cond_a

    .line 376
    invoke-virtual {p2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getAdvancedNativeWebview()Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    move-result-object p3

    if-eqz p3, :cond_a

    .line 379
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {p3}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->getUrl()Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-static {v1, p3, v3, v4}, Lcom/mbridge/msdk/a/b;->a(Landroid/content/Context;Landroid/webkit/WebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lcom/iab/omid/library/mmadbridge/adsession/AdSession;

    move-result-object v1

    if-eqz v1, :cond_a

    .line 381
    invoke-virtual {p3, v1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;->setAdSession(Lcom/iab/omid/library/mmadbridge/adsession/AdSession;)V

    .line 383
    invoke-virtual {v1, p3}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->registerAdView(Landroid/view/View;)V

    .line 384
    invoke-virtual {v1}, Lcom/iab/omid/library/mmadbridge/adsession/AdSession;->start()V

    const-string p3, "adSession.start()"

    .line 385
    invoke-static {v0, p3}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p3

    .line 390
    invoke-virtual {p3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 391
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v0, :cond_a

    .line 392
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v4

    .line 393
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v5

    .line 394
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v6

    .line 395
    new-instance v3, Lcom/mbridge/msdk/foundation/same/report/d;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-direct {v3, v0}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    iget-object v7, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "fetch OM failed, exception"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-virtual/range {v3 .. v8}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 2413
    :cond_a
    :goto_1
    iget-object p3, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReport()Z

    move-result p3

    if-nez p3, :cond_12

    .line 2414
    iget-object p3, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 2430
    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isHasMBTplMark()Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_d

    .line 2432
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    .line 2648
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3, v0}, Lcom/mbridge/msdk/foundation/controller/a;->a(Landroid/content/Context;)V

    .line 2649
    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_b

    .line 2651
    new-instance v3, Ljava/lang/Thread;

    new-instance v4, Lcom/mbridge/msdk/advanced/b/b$8;

    invoke-direct {v4, p0, v0, p3}, Lcom/mbridge/msdk/advanced/b/b$8;-><init>(Lcom/mbridge/msdk/advanced/b/b;Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    invoke-direct {v3, v4}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 2663
    invoke-virtual {v3}, Ljava/lang/Thread;->start()V

    const/4 v7, 0x0

    const/4 v8, 0x1

    .line 2669
    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImpressionURL()Ljava/lang/String;

    move-result-object v6

    sget v9, Lcom/mbridge/msdk/click/a/a;->g:I

    move-object v3, v0

    move-object v4, p3

    move-object v5, v2

    invoke-static/range {v3 .. v9}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 2671
    :cond_b
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_c

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v3

    if-eqz v3, :cond_c

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/l;->l()[Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_c

    const/4 v7, 0x0

    const/4 v8, 0x0

    .line 2674
    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getNativeVideoTracking()Lcom/mbridge/msdk/foundation/entity/l;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/l;->l()[Ljava/lang/String;

    move-result-object v6

    move-object v3, v0

    move-object v4, p3

    move-object v5, v2

    invoke-static/range {v3 .. v8}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;[Ljava/lang/String;ZZ)V

    .line 2433
    :cond_c
    invoke-virtual {p3, v1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReport(Z)V

    .line 2434
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    const-string v2, "h5_native"

    invoke-static {v0, p3, v2}, Lcom/mbridge/msdk/foundation/same/a/d;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;)V

    move v2, v1

    :cond_d
    if-eqz v2, :cond_f

    .line 2441
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    iget-object v5, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    if-eqz p3, :cond_e

    .line 3639
    :try_start_2
    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_e

    .line 3640
    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOnlyImpressionURL()Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x0

    const/4 v8, 0x1

    sget v9, Lcom/mbridge/msdk/click/a/a;->h:I

    move-object v4, p3

    invoke-static/range {v3 .. v9}, Lcom/mbridge/msdk/click/b;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ZZI)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_2

    :catchall_1
    move-exception v0

    .line 3643
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->b:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 2442
    :cond_e
    :goto_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    invoke-direct {p0, p3, v0, v1}, Lcom/mbridge/msdk/advanced/b/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    .line 2415
    :cond_f
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p3

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p3

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    if-eqz v0, :cond_11

    .line 4056
    :try_start_3
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v2

    if-eqz v2, :cond_11

    .line 4057
    new-instance v2, Lcom/mbridge/msdk/foundation/entity/p;

    invoke-direct {v2}, Lcom/mbridge/msdk/foundation/entity/p;-><init>()V

    .line 4058
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 4059
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 4060
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 4061
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v0

    if-eqz v0, :cond_10

    sget v0, Lcom/mbridge/msdk/foundation/entity/p;->a:I

    goto :goto_3

    :cond_10
    sget v0, Lcom/mbridge/msdk/foundation/entity/p;->b:I

    :goto_3
    invoke-virtual {v2, v0}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    .line 4063
    invoke-virtual {p3}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p3

    invoke-static {v2, p3, v1}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/p;Landroid/content/Context;Ljava/lang/String;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_4

    :catch_1
    move-exception p3

    .line 4066
    invoke-virtual {p3}, Ljava/lang/Exception;->printStackTrace()V

    .line 2417
    :cond_11
    :goto_4
    iget-object p3, p0, Lcom/mbridge/msdk/advanced/b/b;->e:Lcom/mbridge/msdk/advanced/c/d;

    if-eqz p3, :cond_12

    .line 2418
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->m:Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-virtual {p3, v0}, Lcom/mbridge/msdk/advanced/c/d;->a(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 401
    :cond_12
    iget p3, p0, Lcom/mbridge/msdk/advanced/b/b;->i:I

    const/4 v0, -0x1

    if-eq p3, v0, :cond_13

    .line 402
    invoke-virtual {p2, p3}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->changeCloseBtnState(I)V

    .line 405
    :cond_13
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    invoke-static {p2}, Lcom/mbridge/msdk/advanced/b/c;->a(Ljava/lang/String;)V

    .line 406
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object p3, p0, Lcom/mbridge/msdk/advanced/b/b;->l:Ljava/lang/String;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p3, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/common/b;->b(Ljava/lang/String;)V

    .line 408
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b;->a:Landroid/os/Handler;

    const/4 p2, 0x2

    const-wide/16 v0, 0x3e8

    invoke-virtual {p1, p2, v0, v1}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    return-void

    :cond_14
    :goto_5
    if-eqz p3, :cond_15

    .line 361
    new-instance p3, Lcom/mbridge/msdk/advanced/b/b$5;

    invoke-direct {p3, p0, p1, p2}, Lcom/mbridge/msdk/advanced/b/b$5;-><init>(Lcom/mbridge/msdk/advanced/b/b;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;)V

    const-wide/16 v0, 0xc8

    invoke-virtual {p2, p3, v0, v1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_15
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
    .locals 7

    .line 458
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->f:Lcom/mbridge/msdk/click/b;

    if-nez v0, :cond_0

    .line 459
    new-instance v0, Lcom/mbridge/msdk/click/b;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->f:Lcom/mbridge/msdk/click/b;

    .line 461
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->f:Lcom/mbridge/msdk/click/b;

    new-instance v1, Lcom/mbridge/msdk/advanced/b/b$6;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/advanced/b/b$6;-><init>(Lcom/mbridge/msdk/advanced/b/b;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    if-eqz p1, :cond_3

    .line 527
    :try_start_0
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 528
    new-instance v6, Lcom/mbridge/msdk/advanced/b/b$7;

    invoke-direct {v6, p0, p2, p3, p1}, Lcom/mbridge/msdk/advanced/b/b$7;-><init>(Lcom/mbridge/msdk/advanced/b/b;ZLjava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 555
    invoke-static {p1}, Lcom/mbridge/msdk/click/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-eqz v0, :cond_3

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->needShowIDialog()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 556
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->f:Lcom/mbridge/msdk/click/b;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 557
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v1

    const-string v2, ""

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v4

    iget-object v5, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    move-object v3, p1

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/widget/dialog/a;)V

    goto :goto_0

    .line 559
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/mbridge/msdk/advanced/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 560
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->e:Lcom/mbridge/msdk/advanced/c/d;

    if-eqz v0, :cond_2

    .line 561
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->e:Lcom/mbridge/msdk/advanced/c/d;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->m:Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/advanced/c/d;->b(Lcom/mbridge/msdk/out/MBridgeIds;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    :goto_0
    return-void

    :catchall_0
    :cond_3
    if-eqz p2, :cond_4

    .line 571
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_4

    .line 572
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    invoke-static {p1, p2, p3}, Lcom/mbridge/msdk/advanced/d/a;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V

    .line 574
    :cond_4
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setCampaignUnitId(Ljava/lang/String;)V

    .line 575
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->f:Lcom/mbridge/msdk/click/b;

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 577
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isReportClick()Z

    move-result p2

    if-nez p2, :cond_5

    .line 578
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->c:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 p3, 0x1

    invoke-virtual {p2, p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setReportClick(Z)V

    .line 579
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2, p1}, Lcom/mbridge/msdk/advanced/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    .line 581
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b;->e:Lcom/mbridge/msdk/advanced/c/d;

    if-eqz p1, :cond_6

    .line 582
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b;->m:Lcom/mbridge/msdk/out/MBridgeIds;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/advanced/c/d;->b(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_6
    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 453
    iput-boolean p1, p0, Lcom/mbridge/msdk/advanced/b/b;->h:Z

    return-void
.end method

.method public final b()Lcom/mbridge/msdk/advanced/c/a;
    .locals 1

    .line 248
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->p:Lcom/mbridge/msdk/advanced/c/a;

    return-object v0
.end method

.method public final c()V
    .locals 2

    .line 679
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->e:Lcom/mbridge/msdk/advanced/c/d;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 680
    iput-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->e:Lcom/mbridge/msdk/advanced/c/d;

    .line 682
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->p:Lcom/mbridge/msdk/advanced/c/a;

    if-eqz v0, :cond_1

    .line 683
    iput-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->p:Lcom/mbridge/msdk/advanced/c/a;

    .line 685
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->o:Landroid/view/View$OnClickListener;

    if-eqz v0, :cond_2

    .line 686
    iput-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->o:Landroid/view/View$OnClickListener;

    .line 688
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    if-eqz v0, :cond_3

    .line 689
    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->destroy()V

    .line 691
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->g:Lcom/mbridge/msdk/advanced/c/c;

    if-eqz v0, :cond_4

    .line 692
    iput-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->g:Lcom/mbridge/msdk/advanced/c/c;

    .line 694
    :cond_4
    invoke-static {}, Lcom/mbridge/msdk/foundation/b/b;->a()Lcom/mbridge/msdk/foundation/b/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b;->k:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/b/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method public final d()V
    .locals 3

    .line 698
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    if-eqz v0, :cond_0

    sget-boolean v0, Lcom/mbridge/msdk/foundation/b/b;->c:Z

    if-nez v0, :cond_0

    .line 699
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getAdvancedNativeWebview()Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 700
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "onViewAppeared"

    const-string v2, ""

    .line 701
    invoke-static {v0, v1, v2}, Lcom/mbridge/msdk/advanced/js/b;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final e()V
    .locals 4

    .line 712
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b;->d:Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    if-eqz v0, :cond_0

    .line 713
    invoke-virtual {v0}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->getAdvancedNativeWebview()Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedWebview;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 714
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->isDestoryed()Z

    move-result v1

    if-nez v1, :cond_0

    .line 715
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object v1

    const-string v2, "onViewDisappeared"

    const-string v3, ""

    invoke-virtual {v1, v0, v2, v3}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
