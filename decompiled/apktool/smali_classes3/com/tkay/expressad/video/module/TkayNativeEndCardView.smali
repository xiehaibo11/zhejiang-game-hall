.class public Lcom/tkay/expressad/video/module/TkayNativeEndCardView;
.super Lcom/tkay/expressad/video/module/TkayBaseView;

# interfaces
.implements Lcom/tkay/expressad/video/signal/f;


# static fields
.field private static final n:Ljava/lang/String; = "tkay_reward_endcard_native_hor"

.field private static final o:Ljava/lang/String; = "tkay_reward_endcard_native_land"

.field private static final p:Ljava/lang/String; = "tkay_reward_endcard_native_half_portrait"

.field private static final q:Ljava/lang/String; = "tkay_reward_endcard_native_half_landscape"


# instance fields
.field private A:Landroid/widget/ImageView;

.field private B:Landroid/widget/TextView;

.field private C:Landroid/widget/TextView;

.field private D:Landroid/widget/TextView;

.field private E:Landroid/widget/LinearLayout;

.field private F:Lcom/tkay/expressad/widget/FeedBackButton;

.field private G:Ljava/lang/Runnable;

.field private H:Landroid/widget/RelativeLayout;

.field private I:Lcom/tkay/expressad/video/signal/factory/b;

.field private J:Z

.field private K:Z

.field private L:I

.field private M:Z

.field private N:Z

.field private O:Z

.field private P:Landroid/view/animation/AlphaAnimation;

.field private Q:I

.field private R:I

.field private S:I

.field private T:I

.field private U:Z

.field private V:Landroid/view/View;

.field private W:Landroid/widget/TextView;

.field private aa:Z

.field private ab:Ljava/lang/String;

.field private ac:Lcom/tkay/expressad/foundation/d/d;

.field private ad:Lcom/tkay/expressad/shake/MBShakeView;

.field private ae:Lcom/tkay/expressad/shake/b;

.field private af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

.field private ag:I

.field private r:Landroid/view/ViewGroup;

.field private s:Landroid/view/ViewGroup;

.field private t:Landroid/widget/RelativeLayout;

.field private u:Landroid/widget/RelativeLayout;

.field private v:Landroid/widget/ImageView;

.field private w:Landroid/widget/ImageView;

.field private x:Landroid/widget/ImageView;

.field private y:Landroid/widget/ImageView;

.field private z:Landroid/widget/ImageView;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 140
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 102
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->J:Z

    .line 103
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->K:Z

    .line 104
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->L:I

    .line 105
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->M:Z

    .line 106
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->N:Z

    .line 107
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->O:Z

    .line 111
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const/4 p1, 0x1

    .line 133
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ag:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 144
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 102
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->J:Z

    .line 103
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->K:Z

    .line 104
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->L:I

    .line 105
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->M:Z

    .line 106
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->N:Z

    .line 107
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->O:Z

    .line 111
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const/4 p1, 0x1

    .line 133
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ag:I

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;ZIZII)V
    .locals 0

    .line 148
    invoke-direct/range {p0 .. p7}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;ZIZII)V

    const/4 p1, 0x0

    .line 102
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->J:Z

    .line 103
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->K:Z

    .line 104
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->L:I

    .line 105
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->M:Z

    .line 106
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->N:Z

    .line 107
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->O:Z

    .line 111
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const/4 p1, 0x1

    .line 133
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ag:I

    return-void
.end method

.method private a()V
    .locals 3

    .line 206
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/c;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/c;-><init>()V

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    iget v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->j:I

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/video/dynview/j/c;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;I)Lcom/tkay/expressad/video/dynview/c;

    move-result-object v0

    .line 207
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b;->a()Lcom/tkay/expressad/video/dynview/b;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$9;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$9;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/dynview/b;->a(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;)V

    return-void
.end method

.method private a(Landroid/view/View;)V
    .locals 1

    if-nez p1, :cond_0

    .line 431
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->setLayout()V

    .line 432
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->I:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    goto :goto_0

    .line 434
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 435
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, p1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 437
    :cond_1
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->addView(Landroid/view/View;)V

    .line 438
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b(Landroid/view/View;)Z

    .line 439
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->c()V

    .line 442
    :goto_0
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->h()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;I)V
    .locals 2

    const/4 v0, 0x0

    .line 14536
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1

    .line 14537
    :try_start_1
    sget-object v0, Lcom/tkay/expressad/foundation/g/a;->ce:Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a(I)Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {v1, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 14539
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result p1

    const/4 v0, 0x5

    if-ne p1, v0, :cond_0

    const-string p1, "camp_position"

    const/4 v0, 0x0

    .line 14540
    invoke-virtual {v1, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    move-object v0, v1

    goto :goto_0

    :catch_1
    move-exception p1

    .line 14543
    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    move-object v1, v0

    .line 14545
    :cond_0
    :goto_1
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 p1, 0x69

    invoke-interface {p0, p1, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Z
    .locals 1

    const/4 v0, 0x1

    .line 66
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->K:Z

    return v0
.end method

.method static synthetic a(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;Landroid/view/View;)Z
    .locals 0

    .line 66
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b(Landroid/view/View;)Z

    move-result p0

    return p0
.end method

.method static synthetic a(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;Z)Z
    .locals 0

    .line 66
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    return p1
.end method

.method static synthetic b(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/view/View;
    .locals 0

    .line 66
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->V:Landroid/view/View;

    return-object p0
.end method

.method private b()V
    .locals 6

    .line 5589
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ag:I

    const-string v1, "tkay_reward_endcard_native_half_landscape"

    const-string v2, "tkay_reward_endcard_native_land"

    const-string v3, "tkay_reward_endcard_native_half_portrait"

    const-string v4, "tkay_reward_endcard_native_hor"

    if-nez v0, :cond_1

    .line 5590
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->aa:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    move-object v3, v4

    .line 5591
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->isLandscape()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 5592
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->aa:Z

    if-eqz v0, :cond_4

    goto :goto_2

    :cond_1
    const/4 v5, 0x1

    if-ne v0, v5, :cond_3

    .line 5596
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->aa:Z

    if-eqz v0, :cond_2

    goto :goto_1

    :cond_2
    move-object v3, v4

    goto :goto_1

    :cond_3
    const-string v0, ""

    move-object v3, v0

    .line 5598
    :goto_1
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ag:I

    const/4 v4, 0x2

    if-ne v0, v4, :cond_5

    .line 5599
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->aa:Z

    if-eqz v0, :cond_4

    goto :goto_2

    :cond_4
    move-object v1, v2

    :goto_2
    move-object v3, v1

    .line 5602
    :cond_5
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->findLayout(Ljava/lang/String;)I

    move-result v0

    if-lez v0, :cond_7

    .line 6446
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->isLandscape()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_6

    .line 6447
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->c:Landroid/view/LayoutInflater;

    invoke-virtual {v1, v0, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->s:Landroid/view/ViewGroup;

    .line 6448
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->addView(Landroid/view/View;)V

    .line 6449
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->s:Landroid/view/ViewGroup;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b(Landroid/view/View;)Z

    move-result v0

    goto :goto_3

    .line 6451
    :cond_6
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->c:Landroid/view/LayoutInflater;

    invoke-virtual {v1, v0, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->r:Landroid/view/ViewGroup;

    .line 6452
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->addView(Landroid/view/View;)V

    .line 6453
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->r:Landroid/view/ViewGroup;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b(Landroid/view/View;)Z

    move-result v0

    .line 231
    :goto_3
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->f:Z

    .line 232
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->e()V

    :cond_7
    return-void
.end method

.method private b(I)Z
    .locals 2

    .line 446
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->isLandscape()Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 447
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->c:Landroid/view/LayoutInflater;

    invoke-virtual {v0, p1, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->s:Landroid/view/ViewGroup;

    .line 448
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->addView(Landroid/view/View;)V

    .line 449
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->s:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b(Landroid/view/View;)Z

    move-result p1

    return p1

    .line 451
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->c:Landroid/view/LayoutInflater;

    invoke-virtual {v0, p1, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->r:Landroid/view/ViewGroup;

    .line 452
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->addView(Landroid/view/View;)V

    .line 453
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->r:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b(Landroid/view/View;)Z

    move-result p1

    return p1
.end method

.method private b(Landroid/view/View;)Z
    .locals 9

    const/4 v0, 0x0

    .line 550
    :try_start_0
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v2, "tkay_native_ec_layout"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->t:Landroid/widget/RelativeLayout;

    .line 551
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v2, "tkay_native_ec_layer_layout"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->u:Landroid/widget/RelativeLayout;

    .line 552
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v2, "tkay_iv_adbanner"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->w:Landroid/widget/ImageView;

    .line 553
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v2, "tkay_iv_icon"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->x:Landroid/widget/ImageView;

    .line 554
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v2, "tkay_iv_flag"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->y:Landroid/widget/ImageView;

    .line 555
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v2, "tkay_iv_link"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->z:Landroid/widget/ImageView;

    .line 556
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v2, "tkay_tv_apptitle"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->B:Landroid/widget/TextView;

    .line 557
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v2, "tkay_sv_starlevel"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/LinearLayout;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->E:Landroid/widget/LinearLayout;

    .line 559
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v2, "tkay_iv_close"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->V:Landroid/view/View;

    .line 560
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v2, "tkay_tv_cta"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 561
    instance-of v2, v1, Landroid/widget/TextView;

    if-eqz v2, :cond_0

    .line 562
    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->W:Landroid/widget/TextView;

    .line 564
    :cond_0
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v2, "tkay_native_endcard_feed_btn"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/widget/FeedBackButton;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->F:Lcom/tkay/expressad/widget/FeedBackButton;

    .line 565
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v2, "tkay_native_ec_controller"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->H:Landroid/widget/RelativeLayout;

    .line 566
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v2, "tkay_iv_adbanner_bg"

    invoke-virtual {p0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/ImageView;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->v:Landroid/widget/ImageView;

    .line 567
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->i:Z

    const/4 v2, 0x5

    const/4 v3, 0x4

    const/4 v4, 0x3

    const/4 v5, 0x2

    const/4 v6, 0x1

    const/4 v7, 0x6

    if-eqz v1, :cond_3

    .line 568
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->w:Landroid/widget/ImageView;

    const/16 v1, 0xa

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->w:Landroid/widget/ImageView;

    instance-of p1, p1, Lcom/tkay/expressad/videocommon/view/RoundImageView;

    if-eqz p1, :cond_1

    .line 569
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->w:Landroid/widget/ImageView;

    check-cast p1, Lcom/tkay/expressad/videocommon/view/RoundImageView;

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->setBorderRadius(I)V

    .line 571
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->x:Landroid/widget/ImageView;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->x:Landroid/widget/ImageView;

    instance-of p1, p1, Lcom/tkay/expressad/videocommon/view/RoundImageView;

    if-eqz p1, :cond_2

    .line 572
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->x:Landroid/widget/ImageView;

    check-cast p1, Lcom/tkay/expressad/videocommon/view/RoundImageView;

    invoke-virtual {p1, v1}, Lcom/tkay/expressad/videocommon/view/RoundImageView;->setBorderRadius(I)V

    :cond_2
    new-array p1, v7, [Landroid/view/View;

    .line 574
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->v:Landroid/widget/ImageView;

    aput-object v1, p1, v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->w:Landroid/widget/ImageView;

    aput-object v1, p1, v6

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->x:Landroid/widget/ImageView;

    aput-object v1, p1, v5

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->B:Landroid/widget/TextView;

    aput-object v1, p1, v4

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->E:Landroid/widget/LinearLayout;

    aput-object v1, p1, v3

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->V:Landroid/view/View;

    aput-object v1, p1, v2

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->isNotNULL([Landroid/view/View;)Z

    move-result p1

    return p1

    .line 576
    :cond_3
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v8, "tkay_tv_appdesc"

    invoke-virtual {p0, v1, v8}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v1

    check-cast v1, Landroid/widget/TextView;

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->C:Landroid/widget/TextView;

    .line 577
    iget-boolean v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    const-string v8, "tkay_tv_number"

    invoke-virtual {p0, v1, v8}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->filterFindViewId(ZLjava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->D:Landroid/widget/TextView;

    const/16 v1, 0x9

    new-array v1, v1, [Landroid/view/View;

    .line 578
    iget-object v8, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->v:Landroid/widget/ImageView;

    aput-object v8, v1, v0

    iget-object v8, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->w:Landroid/widget/ImageView;

    aput-object v8, v1, v6

    iget-object v6, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->x:Landroid/widget/ImageView;

    aput-object v6, v1, v5

    iget-object v5, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->B:Landroid/widget/TextView;

    aput-object v5, v1, v4

    iget-object v4, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->C:Landroid/widget/TextView;

    aput-object v4, v1, v3

    aput-object p1, v1, v2

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->E:Landroid/widget/LinearLayout;

    aput-object p1, v1, v7

    const/4 p1, 0x7

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->V:Landroid/view/View;

    aput-object v2, v1, p1

    const/16 p1, 0x8

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->W:Landroid/widget/TextView;

    aput-object v2, v1, p1

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->isNotNULL([Landroid/view/View;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    .line 582
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return v0
.end method

.method static synthetic b(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;Z)Z
    .locals 0

    .line 66
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->O:Z

    return p1
.end method

.method private c(I)V
    .locals 2

    const/4 v0, 0x0

    .line 536
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1

    .line 537
    :try_start_1
    sget-object v0, Lcom/tkay/expressad/foundation/g/a;->ce:Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a(I)Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {v1, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 539
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result p1

    const/4 v0, 0x5

    if-ne p1, v0, :cond_0

    const-string p1, "camp_position"

    const/4 v0, 0x0

    .line 540
    invoke-virtual {v1, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception p1

    move-object v0, v1

    goto :goto_0

    :catch_1
    move-exception p1

    .line 543
    :goto_0
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    move-object v1, v0

    .line 545
    :cond_0
    :goto_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x69

    invoke-interface {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V
    .locals 0

    .line 66
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->e()V

    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;
    .locals 0

    .line 66
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->w:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;
    .locals 0

    .line 66
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->v:Landroid/widget/ImageView;

    return-object p0
.end method

.method private e()V
    .locals 3

    .line 253
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->c()V

    .line 254
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->f:Z

    if-nez v0, :cond_0

    .line 255
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0x68

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    .line 257
    :cond_0
    new-instance v0, Landroid/view/animation/AlphaAnimation;

    const/4 v1, 0x0

    const/high16 v2, 0x42c80000    # 100.0f

    invoke-direct {v0, v1, v2}, Landroid/view/animation/AlphaAnimation;-><init>(FF)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->P:Landroid/view/animation/AlphaAnimation;

    const-wide/16 v1, 0xc8

    .line 258
    invoke-virtual {v0, v1, v2}, Landroid/view/animation/AlphaAnimation;->setDuration(J)V

    return-void
.end method

.method static synthetic f(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/ImageView;
    .locals 0

    .line 66
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->y:Landroid/widget/ImageView;

    return-object p0
.end method

.method private f()V
    .locals 4

    .line 265
    new-instance v0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    .line 298
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2, v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 299
    new-instance v0, Lcom/tkay/expressad/video/module/a/a/j;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->x:Landroid/widget/ImageView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41000000    # 8.0f

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a/j;-><init>(Landroid/widget/ImageView;I)V

    .line 300
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2, v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 301
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->B:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 303
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->W:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    .line 304
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    .line 9175
    iget-object v1, v1, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    .line 304
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 306
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->C:Landroid/widget/TextView;

    if-eqz v0, :cond_1

    .line 307
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bc()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 309
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->D:Landroid/widget/TextView;

    if-eqz v0, :cond_2

    .line 310
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->aY()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, ")"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 312
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->E:Landroid/widget/LinearLayout;

    invoke-virtual {v0}, Landroid/widget/LinearLayout;->removeAllViews()V

    .line 313
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aX()D

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmpg-double v2, v0, v2

    if-gtz v2, :cond_3

    const-wide/high16 v0, 0x4014000000000000L    # 5.0

    .line 317
    :cond_3
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->E:Landroid/widget/LinearLayout;

    instance-of v3, v2, Lcom/tkay/expressad/videocommon/view/StarLevelView;

    if-eqz v3, :cond_4

    .line 318
    check-cast v2, Lcom/tkay/expressad/videocommon/view/StarLevelView;

    invoke-virtual {v2, v0, v1}, Lcom/tkay/expressad/videocommon/view/StarLevelView;->initScore(D)V

    .line 320
    :cond_4
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->E:Landroid/widget/LinearLayout;

    instance-of v3, v2, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    if-eqz v3, :cond_5

    .line 321
    check-cast v2, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/c;->aY()I

    move-result v3

    invoke-virtual {v2, v0, v1, v3}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->setRatingAndUser(DI)V

    .line 331
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_6

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    const-string v1, "alecfc=1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_6

    const/4 v0, 0x1

    .line 332
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->J:Z

    .line 342
    :cond_6
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aE()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_7

    const-string v0, "https://mores.toponad.com/image/default/mintegral_logo.png"

    goto :goto_0

    :cond_7
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aE()Ljava/lang/String;

    move-result-object v0

    .line 344
    :goto_0
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v1

    new-instance v2, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$11;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$11;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-virtual {v1, v0, v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 370
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    .line 371
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object v0

    const/16 v1, 0x8

    if-eqz v0, :cond_9

    .line 373
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->J()Ljava/lang/String;

    move-result-object v0

    .line 374
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_8

    .line 375
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->z:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 377
    :cond_8
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->z:Landroid/widget/ImageView;

    new-instance v3, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$12;

    invoke-direct {v3, p0, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$12;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;Ljava/lang/String;)V

    invoke-virtual {v2, v3}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_1

    .line 384
    :cond_9
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->z:Landroid/widget/ImageView;

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 386
    :goto_1
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->K:Z

    if-nez v0, :cond_a

    .line 387
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->V:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    .line 390
    :cond_a
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x11

    if-ge v0, v2, :cond_b

    .line 391
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->v:Landroid/widget/ImageView;

    if-eqz v0, :cond_b

    .line 392
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_b
    return-void
.end method

.method private g()I
    .locals 6

    .line 589
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ag:I

    const-string v1, "tkay_reward_endcard_native_half_landscape"

    const-string v2, "tkay_reward_endcard_native_land"

    const-string v3, "tkay_reward_endcard_native_half_portrait"

    const-string v4, "tkay_reward_endcard_native_hor"

    if-nez v0, :cond_1

    .line 590
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->aa:Z

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    move-object v3, v4

    .line 591
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->isLandscape()Z

    move-result v0

    if-eqz v0, :cond_5

    .line 592
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->aa:Z

    if-eqz v0, :cond_4

    goto :goto_2

    :cond_1
    const/4 v5, 0x1

    if-ne v0, v5, :cond_3

    .line 596
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->aa:Z

    if-eqz v0, :cond_2

    goto :goto_1

    :cond_2
    move-object v3, v4

    goto :goto_1

    :cond_3
    const-string v0, ""

    move-object v3, v0

    .line 598
    :goto_1
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ag:I

    const/4 v4, 0x2

    if-ne v0, v4, :cond_5

    .line 599
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->aa:Z

    if-eqz v0, :cond_4

    goto :goto_2

    :cond_4
    move-object v1, v2

    :goto_2
    move-object v3, v1

    .line 602
    :cond_5
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->findLayout(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method static synthetic g(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Z
    .locals 0

    .line 66
    iget-boolean p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->J:Z

    return p0
.end method

.method static synthetic h(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)I
    .locals 0

    .line 66
    iget p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->Q:I

    return p0
.end method

.method private h()V
    .locals 4

    .line 651
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->f:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->H:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_0

    .line 652
    new-instance v1, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$3;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    const-wide/16 v2, 0xc8

    invoke-virtual {v0, v1, v2, v3}, Landroid/widget/RelativeLayout;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_0
    return-void
.end method

.method static synthetic i(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)I
    .locals 0

    .line 66
    iget p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->S:I

    return p0
.end method

.method private i()V
    .locals 4

    .line 670
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 671
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ab:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 673
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ab:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_2"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v3, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$4;

    invoke-direct {v3, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$4;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-virtual {v0, v1, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    .line 690
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ab:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    .line 691
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ab:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_1"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/f/b;->c(Ljava/lang/String;)V

    .line 692
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ab:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->F:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0, v1, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/widget/FeedBackButton;)V

    .line 693
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->F:Lcom/tkay/expressad/widget/FeedBackButton;

    if-eqz v0, :cond_1

    .line 694
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ab:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->F:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/widget/FeedBackButton;)V

    return-void

    .line 697
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->F:Lcom/tkay/expressad/widget/FeedBackButton;

    if-eqz v0, :cond_1

    const/16 v1, 0x8

    .line 698
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method static synthetic j(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)I
    .locals 0

    .line 66
    iget p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->R:I

    return p0
.end method

.method private j()V
    .locals 6

    .line 773
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_c

    .line 774
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 777
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    .line 778
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 779
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v0

    :cond_1
    const-string v1, "shake_show"

    .line 781
    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "shake_strength"

    .line 782
    invoke-static {v0, v2}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "shake_time"

    .line 783
    invoke-static {v0, v3}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 784
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_c

    const-string v3, "1"

    invoke-virtual {v1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_c

    .line 785
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ad:Lcom/tkay/expressad/shake/MBShakeView;

    if-eqz v1, :cond_2

    return-void

    .line 788
    :cond_2
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    if-eqz v1, :cond_3

    .line 789
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    const/16 v3, 0x8

    invoke-virtual {v1, v3}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->setVisibility(I)V

    .line 791
    :cond_3
    new-instance v1, Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v1, v3}, Lcom/tkay/expressad/shake/MBShakeView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ad:Lcom/tkay/expressad/shake/MBShakeView;

    .line 792
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    .line 14175
    iget-object v3, v3, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    const/4 v4, 0x1

    .line 792
    invoke-virtual {v1, v3, v4}, Lcom/tkay/expressad/shake/MBShakeView;->initView(Ljava/lang/String;Z)V

    .line 794
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v3, -0x2

    invoke-direct {v1, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 796
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->isLandscape()Z

    move-result v3

    if-nez v3, :cond_4

    const-string v3, "tkay_iv_logo"

    .line 797
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->findID(Ljava/lang/String;)I

    move-result v3

    const/4 v4, 0x2

    .line 798
    invoke-virtual {v1, v4, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 v3, 0xe

    .line 799
    invoke-virtual {v1, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 800
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ad:Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->getContext()Landroid/content/Context;

    move-result-object v4

    const/high16 v5, 0x41a00000    # 20.0f

    invoke-static {v4, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v4

    const/4 v5, 0x0

    invoke-virtual {v3, v5, v5, v5, v4}, Lcom/tkay/expressad/shake/MBShakeView;->setPadding(IIII)V

    goto :goto_0

    :cond_4
    const/16 v3, 0xd

    .line 802
    invoke-virtual {v1, v3}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 805
    :goto_0
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ad:Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {v3, v1}, Lcom/tkay/expressad/shake/MBShakeView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 807
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->t:Landroid/widget/RelativeLayout;

    if-nez v1, :cond_5

    return-void

    .line 811
    :cond_5
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->t:Landroid/widget/RelativeLayout;

    invoke-virtual {v1}, Landroid/widget/RelativeLayout;->isShown()Z

    move-result v1

    if-nez v1, :cond_6

    return-void

    .line 815
    :cond_6
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->W:Landroid/widget/TextView;

    if-eqz v1, :cond_7

    .line 816
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->t:Landroid/widget/RelativeLayout;

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ad:Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {v1, v3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 819
    :cond_7
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->W:Landroid/widget/TextView;

    const/4 v3, 0x4

    invoke-virtual {v1, v3}, Landroid/widget/TextView;->setVisibility(I)V

    .line 821
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ad:Lcom/tkay/expressad/shake/MBShakeView;

    new-instance v3, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$5;

    invoke-direct {v3, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$5;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-virtual {v1, v3}, Lcom/tkay/expressad/shake/MBShakeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 829
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/16 v3, 0xa

    if-nez v1, :cond_9

    .line 830
    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    if-gez v1, :cond_8

    goto :goto_1

    :cond_8
    move v3, v1

    .line 835
    :cond_9
    :goto_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/16 v2, 0x1388

    if-nez v1, :cond_b

    .line 836
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-gtz v0, :cond_a

    goto :goto_2

    :cond_a
    mul-int/lit16 v0, v0, 0x3e8

    move v2, v0

    .line 840
    :cond_b
    :goto_2
    new-instance v0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$6;

    invoke-direct {v0, p0, v3, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$6;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;II)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ae:Lcom/tkay/expressad/shake/b;

    .line 862
    invoke-static {}, Lcom/tkay/expressad/shake/a;->a()Lcom/tkay/expressad/shake/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ae:Lcom/tkay/expressad/shake/b;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/shake/a;->a(Landroid/hardware/SensorEventListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_c
    return-void

    :catchall_0
    move-exception v0

    .line 866
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic k(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)I
    .locals 0

    .line 66
    iget p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->T:I

    return p0
.end method

.method private k()V
    .locals 3

    .line 872
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_3

    .line 873
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 877
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    .line 878
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 879
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v0

    :cond_1
    const-string v1, "bait_click"

    .line 882
    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v1, 0x1

    .line 885
    :try_start_1
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    .line 887
    :try_start_2
    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 890
    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    if-eqz v1, :cond_3

    .line 891
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    if-eqz v0, :cond_2

    return-void

    .line 894
    :cond_2
    new-instance v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v0, v2}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    const/high16 v2, 0x50000000

    .line 895
    invoke-virtual {v0, v2, v1}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->init(II)V

    .line 897
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 898
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-virtual {v1, v0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 900
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->u:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_3

    .line 901
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->u:Landroid/widget/RelativeLayout;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 902
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->startAnimation()V

    .line 907
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$7;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$7;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    nop

    :cond_3
    return-void

    :catchall_1
    move-exception v0

    .line 916
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic l(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/widget/RelativeLayout;
    .locals 0

    .line 66
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->H:Landroid/widget/RelativeLayout;

    return-object p0
.end method

.method private l()V
    .locals 3

    .line 922
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_2

    .line 923
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 926
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    .line 927
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 928
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v0

    :cond_1
    const-string v1, "alac"

    .line 930
    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 931
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "1"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 933
    new-instance v0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$8;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$8;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    const-wide/16 v1, 0x3e8

    invoke-virtual {p0, v0, v1, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    return-void

    :catchall_0
    move-exception v0

    .line 942
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method static synthetic m(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Landroid/view/animation/AlphaAnimation;
    .locals 0

    .line 66
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->P:Landroid/view/animation/AlphaAnimation;

    return-object p0
.end method

.method static synthetic n(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Z
    .locals 0

    .line 66
    iget-boolean p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->K:Z

    return p0
.end method

.method static synthetic o(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V
    .locals 4

    .line 14670
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 14671
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ab:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 14673
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ab:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_2"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v3, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$4;

    invoke-direct {v3, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$4;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-virtual {v0, v1, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    .line 14690
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ab:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0, v1, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    .line 14691
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ab:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_1"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/f/b;->c(Ljava/lang/String;)V

    .line 14692
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ab:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->F:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0, v1, v3}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/widget/FeedBackButton;)V

    .line 14693
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->F:Lcom/tkay/expressad/widget/FeedBackButton;

    if-eqz v0, :cond_1

    .line 14694
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ab:Ljava/lang/String;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->F:Lcom/tkay/expressad/widget/FeedBackButton;

    invoke-virtual {v0, v1, p0}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/widget/FeedBackButton;)V

    return-void

    .line 14697
    :cond_0
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->F:Lcom/tkay/expressad/widget/FeedBackButton;

    if-eqz p0, :cond_1

    const/16 v0, 0x8

    .line 14698
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/widget/FeedBackButton;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method static synthetic p(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Z
    .locals 0

    .line 66
    iget-boolean p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->O:Z

    return p0
.end method

.method static synthetic q(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)Z
    .locals 0

    .line 66
    iget-boolean p0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->N:Z

    return p0
.end method


# virtual methods
.method public blurBitmap(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;
    .locals 5

    .line 609
    :try_start_0
    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getWidth()I

    move-result v0

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->getHeight()I

    move-result v1

    sget-object v2, Landroid/graphics/Bitmap$Config;->ARGB_4444:Landroid/graphics/Bitmap$Config;

    invoke-static {v0, v1, v2}, Landroid/graphics/Bitmap;->createBitmap(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;

    move-result-object v0

    .line 612
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Landroid/renderscript/RenderScript;->create(Landroid/content/Context;)Landroid/renderscript/RenderScript;

    move-result-object v1

    .line 615
    invoke-static {v1}, Landroid/renderscript/Element;->U8_4(Landroid/renderscript/RenderScript;)Landroid/renderscript/Element;

    move-result-object v2

    invoke-static {v1, v2}, Landroid/renderscript/ScriptIntrinsicBlur;->create(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicBlur;

    move-result-object v2

    .line 618
    invoke-static {v1, p1}, Landroid/renderscript/Allocation;->createFromBitmap(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;

    move-result-object p1

    .line 619
    invoke-static {v1, v0}, Landroid/renderscript/Allocation;->createFromBitmap(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;

    move-result-object v3

    const/high16 v4, 0x41c80000    # 25.0f

    .line 622
    invoke-virtual {v2, v4}, Landroid/renderscript/ScriptIntrinsicBlur;->setRadius(F)V

    .line 625
    invoke-virtual {v2, p1}, Landroid/renderscript/ScriptIntrinsicBlur;->setInput(Landroid/renderscript/Allocation;)V

    .line 626
    invoke-virtual {v2, v3}, Landroid/renderscript/ScriptIntrinsicBlur;->forEach(Landroid/renderscript/Allocation;)V

    .line 629
    invoke-virtual {v3, v0}, Landroid/renderscript/Allocation;->copyTo(Landroid/graphics/Bitmap;)V

    .line 632
    invoke-virtual {v1}, Landroid/renderscript/RenderScript;->destroy()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    const/4 p1, 0x0

    return-object p1
.end method

.method protected final c()V
    .locals 2

    .line 459
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->f:Z

    if-eqz v0, :cond_1

    .line 460
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->t:Landroid/widget/RelativeLayout;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$13;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$13;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 468
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->V:Landroid/view/View;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$14;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$14;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 487
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->W:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    .line 488
    new-instance v1, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$15;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$15;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 495
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->x:Landroid/widget/ImageView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$16;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$16;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 501
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->w:Landroid/widget/ImageView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$2;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_1
    return-void
.end method

.method public canBackPress()Z
    .locals 1

    .line 422
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->V:Landroid/view/View;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public clearMoreOfferBitmap()V
    .locals 3

    .line 715
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 716
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ac:Lcom/tkay/expressad/foundation/d/d;

    if-eqz v0, :cond_1

    .line 11374
    iget-object v0, v0, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz v0, :cond_1

    .line 716
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ac:Lcom/tkay/expressad/foundation/d/d;

    .line 12374
    iget-object v0, v0, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 716
    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 717
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ac:Lcom/tkay/expressad/foundation/d/d;

    .line 13374
    iget-object v0, v0, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 717
    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/tkay/expressad/foundation/d/c;

    .line 718
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 719
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v2

    .line 720
    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/foundation/g/d/b;->c(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method public isDyXmlSuccess()Z
    .locals 1

    .line 947
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->U:Z

    return v0
.end method

.method public notifyShowListener()V
    .locals 3

    .line 426
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v1, 0x6e

    const-string v2, ""

    invoke-interface {v0, v1, v2}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 6

    .line 153
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->onAttachedToWindow()V

    .line 154
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->G:Ljava/lang/Runnable;

    if-nez v0, :cond_0

    .line 155
    new-instance v0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$1;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->G:Ljava/lang/Runnable;

    .line 165
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->G:Ljava/lang/Runnable;

    const-string v1, "1"

    const/4 v2, 0x1

    if-eqz v0, :cond_4

    .line 166
    iget v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->L:I

    mul-int/lit16 v3, v3, 0x3e8

    int-to-long v3, v3

    invoke-virtual {p0, v0, v3, v4}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 168
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->N:Z

    if-nez v0, :cond_1

    .line 169
    iput-boolean v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->N:Z

    .line 1922
    :cond_1
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_4

    .line 1923
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_2

    goto :goto_0

    .line 1926
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    .line 1927
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_3

    .line 1928
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v0

    :cond_3
    const-string v3, "alac"

    .line 1930
    invoke-static {v0, v3}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1931
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_4

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 1933
    new-instance v0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$8;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$8;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    const-wide/16 v3, 0x3e8

    invoke-virtual {p0, v0, v3, v4}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->postDelayed(Ljava/lang/Runnable;J)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 1942
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 2872
    :cond_4
    :goto_0
    :try_start_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_8

    .line 2873
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_5

    goto :goto_2

    .line 2877
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    .line 2878
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_6

    .line 2879
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v0

    :cond_6
    const-string v3, "bait_click"

    .line 2882
    invoke-static {v0, v3}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    .line 2885
    :try_start_2
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_1

    :catchall_1
    move-exception v3

    .line 2887
    :try_start_3
    invoke-virtual {v3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move v3, v2

    .line 2890
    :goto_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_8

    if-eqz v3, :cond_8

    .line 2891
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    if-eqz v0, :cond_7

    goto :goto_2

    .line 2894
    :cond_7
    new-instance v0, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v0, v4}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    const/high16 v4, 0x50000000

    .line 2895
    invoke-virtual {v0, v4, v3}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->init(II)V

    .line 2897
    new-instance v0, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v0, v3, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 2898
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-virtual {v3, v0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 2900
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->u:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_8

    .line 2901
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->u:Landroid/widget/RelativeLayout;

    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-virtual {v0, v3}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 2902
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    invoke-virtual {v0}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->startAnimation()V

    .line 2907
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    new-instance v3, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$7;

    invoke-direct {v3, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$7;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-virtual {v0, v3}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->setOnClickListener(Landroid/view/View$OnClickListener;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    goto :goto_2

    :catchall_2
    move-exception v0

    .line 2916
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 3773
    :cond_8
    :goto_2
    :try_start_4
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_15

    .line 3774
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-nez v0, :cond_9

    return-void

    .line 3777
    :cond_9
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v0

    .line 3778
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_a

    .line 3779
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->P()Ljava/lang/String;

    move-result-object v0

    :cond_a
    const-string v3, "shake_show"

    .line 3781
    invoke-static {v0, v3}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    const-string v4, "shake_strength"

    .line 3782
    invoke-static {v0, v4}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    const-string v5, "shake_time"

    .line 3783
    invoke-static {v0, v5}, Lcom/tkay/expressad/foundation/h/x;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 3784
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_15

    invoke-virtual {v3, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_15

    .line 3785
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ad:Lcom/tkay/expressad/shake/MBShakeView;

    if-eqz v1, :cond_b

    return-void

    .line 3788
    :cond_b
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    if-eqz v1, :cond_c

    .line 3789
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->af:Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;

    const/16 v3, 0x8

    invoke-virtual {v1, v3}, Lcom/tkay/expressad/video/dynview/widget/TkayBaitClickView;->setVisibility(I)V

    .line 3791
    :cond_c
    new-instance v1, Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-direct {v1, v3}, Lcom/tkay/expressad/shake/MBShakeView;-><init>(Landroid/content/Context;)V

    iput-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ad:Lcom/tkay/expressad/shake/MBShakeView;

    .line 3792
    iget-object v3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    .line 4175
    iget-object v3, v3, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    .line 3792
    invoke-virtual {v1, v3, v2}, Lcom/tkay/expressad/shake/MBShakeView;->initView(Ljava/lang/String;Z)V

    .line 3794
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 v2, -0x2

    invoke-direct {v1, v2, v2}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 3796
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->isLandscape()Z

    move-result v2

    if-nez v2, :cond_d

    const-string v2, "tkay_iv_logo"

    .line 3797
    invoke-virtual {p0, v2}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->findID(Ljava/lang/String;)I

    move-result v2

    const/4 v3, 0x2

    .line 3798
    invoke-virtual {v1, v3, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(II)V

    const/16 v2, 0xe

    .line 3799
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 3800
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ad:Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->getContext()Landroid/content/Context;

    move-result-object v3

    const/high16 v5, 0x41a00000    # 20.0f

    invoke-static {v3, v5}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    const/4 v5, 0x0

    invoke-virtual {v2, v5, v5, v5, v3}, Lcom/tkay/expressad/shake/MBShakeView;->setPadding(IIII)V

    goto :goto_3

    :cond_d
    const/16 v2, 0xd

    .line 3802
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 3805
    :goto_3
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ad:Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {v2, v1}, Lcom/tkay/expressad/shake/MBShakeView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 3807
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->t:Landroid/widget/RelativeLayout;

    if-nez v1, :cond_e

    return-void

    .line 3811
    :cond_e
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->t:Landroid/widget/RelativeLayout;

    invoke-virtual {v1}, Landroid/widget/RelativeLayout;->isShown()Z

    move-result v1

    if-nez v1, :cond_f

    return-void

    .line 3815
    :cond_f
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->W:Landroid/widget/TextView;

    if-eqz v1, :cond_10

    .line 3816
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->t:Landroid/widget/RelativeLayout;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ad:Lcom/tkay/expressad/shake/MBShakeView;

    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout;->addView(Landroid/view/View;)V

    .line 3819
    :cond_10
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->W:Landroid/widget/TextView;

    const/4 v2, 0x4

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setVisibility(I)V

    .line 3821
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ad:Lcom/tkay/expressad/shake/MBShakeView;

    new-instance v2, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$5;

    invoke-direct {v2, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$5;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-virtual {v1, v2}, Lcom/tkay/expressad/shake/MBShakeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 3829
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/16 v2, 0xa

    if-nez v1, :cond_12

    .line 3830
    invoke-static {v4}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    if-gez v1, :cond_11

    goto :goto_4

    :cond_11
    move v2, v1

    .line 3835
    :cond_12
    :goto_4
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/16 v3, 0x1388

    if-nez v1, :cond_14

    .line 3836
    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    if-gtz v0, :cond_13

    goto :goto_5

    :cond_13
    mul-int/lit16 v0, v0, 0x3e8

    move v3, v0

    .line 3840
    :cond_14
    :goto_5
    new-instance v0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$6;

    invoke-direct {v0, p0, v2, v3}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$6;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;II)V

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ae:Lcom/tkay/expressad/shake/b;

    .line 3862
    invoke-static {}, Lcom/tkay/expressad/shake/a;->a()Lcom/tkay/expressad/shake/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ae:Lcom/tkay/expressad/shake/b;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/shake/a;->a(Landroid/hardware/SensorEventListener;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    :cond_15
    return-void

    :catchall_3
    move-exception v0

    .line 3866
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 2

    .line 180
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->onDetachedFromWindow()V

    .line 181
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->G:Ljava/lang/Runnable;

    if-eqz v0, :cond_0

    .line 182
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->removeCallbacks(Ljava/lang/Runnable;)Z

    .line 184
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ae:Lcom/tkay/expressad/shake/b;

    if-eqz v0, :cond_1

    .line 185
    invoke-static {}, Lcom/tkay/expressad/shake/a;->a()Lcom/tkay/expressad/shake/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ae:Lcom/tkay/expressad/shake/b;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/shake/a;->b(Landroid/hardware/SensorEventListener;)V

    const/4 v0, 0x0

    .line 186
    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ae:Lcom/tkay/expressad/shake/b;

    :cond_1
    return-void
.end method

.method public onSelfConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 2

    .line 400
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 401
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    .line 402
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 406
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->H:Landroid/widget/RelativeLayout;

    if-eqz v0, :cond_1

    const/4 v1, 0x4

    .line 407
    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setVisibility(I)V

    .line 409
    :cond_1
    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    iput p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->d:I

    .line 410
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, " native onSelfConfigurationChanged:"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->d:I

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    .line 412
    iget p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->d:I

    const/4 v0, 0x2

    if-ne p1, v0, :cond_2

    .line 413
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->r:Landroid/view/ViewGroup;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->removeView(Landroid/view/View;)V

    .line 414
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->s:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a(Landroid/view/View;)V

    return-void

    .line 416
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->s:Landroid/view/ViewGroup;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->removeView(Landroid/view/View;)V

    .line 417
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->r:Landroid/view/ViewGroup;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a(Landroid/view/View;)V

    return-void
.end method

.method public preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 4

    .line 238
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->I:Lcom/tkay/expressad/video/signal/factory/b;

    .line 240
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_b

    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->f:Z

    if-eqz p1, :cond_b

    .line 7265
    new-instance p1, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;

    invoke-direct {p1, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$10;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    .line 7298
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->be()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 7299
    new-instance p1, Lcom/tkay/expressad/video/module/a/a/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->x:Landroid/widget/ImageView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41000000    # 8.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-direct {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a/j;-><init>(Landroid/widget/ImageView;I)V

    .line 7300
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 7301
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->B:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 7303
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->W:Landroid/widget/TextView;

    if-eqz p1, :cond_0

    .line 7304
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->W:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    .line 8175
    iget-object v0, v0, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    .line 7304
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 7306
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->C:Landroid/widget/TextView;

    if-eqz p1, :cond_1

    .line 7307
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->C:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bc()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 7309
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->D:Landroid/widget/TextView;

    if-eqz p1, :cond_2

    .line 7310
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->D:Landroid/widget/TextView;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->aY()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ")"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 7312
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->E:Landroid/widget/LinearLayout;

    invoke-virtual {p1}, Landroid/widget/LinearLayout;->removeAllViews()V

    .line 7313
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aX()D

    move-result-wide v0

    const-wide/16 v2, 0x0

    cmpg-double p1, v0, v2

    if-gtz p1, :cond_3

    const-wide/high16 v0, 0x4014000000000000L    # 5.0

    .line 7317
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->E:Landroid/widget/LinearLayout;

    instance-of p1, p1, Lcom/tkay/expressad/videocommon/view/StarLevelView;

    if-eqz p1, :cond_4

    .line 7318
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->E:Landroid/widget/LinearLayout;

    check-cast p1, Lcom/tkay/expressad/videocommon/view/StarLevelView;

    invoke-virtual {p1, v0, v1}, Lcom/tkay/expressad/videocommon/view/StarLevelView;->initScore(D)V

    .line 7320
    :cond_4
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->E:Landroid/widget/LinearLayout;

    instance-of p1, p1, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    if-eqz p1, :cond_5

    .line 7321
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->E:Landroid/widget/LinearLayout;

    check-cast p1, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->aY()I

    move-result v2

    invoke-virtual {p1, v0, v1, v2}, Lcom/tkay/expressad/video/dynview/widget/TYLevelLayoutView;->setRatingAndUser(DI)V

    .line 7331
    :cond_5
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_6

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object p1

    const-string v0, "alecfc=1"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_6

    const/4 p1, 0x1

    .line 7332
    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->J:Z

    .line 7342
    :cond_6
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aE()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_7

    const-string p1, "https://mores.toponad.com/image/default/mintegral_logo.png"

    goto :goto_0

    :cond_7
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aE()Ljava/lang/String;

    move-result-object p1

    .line 7344
    :goto_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$11;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$11;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 7370
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    .line 7371
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object p1

    const/16 v0, 0x8

    if-eqz p1, :cond_9

    .line 7373
    invoke-virtual {p1}, Lcom/tkay/expressad/d/a;->J()Ljava/lang/String;

    move-result-object p1

    .line 7374
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_8

    .line 7375
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->z:Landroid/widget/ImageView;

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 7377
    :cond_8
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->z:Landroid/widget/ImageView;

    new-instance v2, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$12;

    invoke-direct {v2, p0, p1}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$12;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;Ljava/lang/String;)V

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_1

    .line 7384
    :cond_9
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->z:Landroid/widget/ImageView;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 7386
    :goto_1
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->K:Z

    if-nez p1, :cond_a

    .line 7387
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->V:Landroid/view/View;

    invoke-virtual {p1, v0}, Landroid/view/View;->setVisibility(I)V

    .line 7390
    :cond_a
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x11

    if-ge p1, v1, :cond_b

    .line 7391
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->v:Landroid/widget/ImageView;

    if-eqz p1, :cond_b

    .line 7392
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->v:Landroid/widget/ImageView;

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setVisibility(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_b
    return-void

    :catchall_0
    move-exception p1

    .line 244
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public release()V
    .locals 1

    .line 729
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->removeAllViews()V

    .line 730
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->P:Landroid/view/animation/AlphaAnimation;

    if-eqz v0, :cond_0

    .line 731
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->P:Landroid/view/animation/AlphaAnimation;

    invoke-virtual {v0}, Landroid/view/animation/AlphaAnimation;->cancel()V

    :cond_0
    const/4 v0, 0x0

    .line 733
    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ae:Lcom/tkay/expressad/shake/b;

    .line 734
    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->G:Ljava/lang/Runnable;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 736
    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public setCloseBtnDelay(I)V
    .locals 0

    .line 114
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->L:I

    return-void
.end method

.method public setLayout()V
    .locals 6

    .line 195
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->i:Z

    if-eqz v0, :cond_0

    .line 4206
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/c;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/c;-><init>()V

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    iget v2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->j:I

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/video/dynview/j/c;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;I)Lcom/tkay/expressad/video/dynview/c;

    move-result-object v0

    .line 4207
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b;->a()Lcom/tkay/expressad/video/dynview/b;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$9;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView$9;-><init>(Lcom/tkay/expressad/video/module/TkayNativeEndCardView;)V

    invoke-static {v0, v1}, Lcom/tkay/expressad/video/dynview/b;->a(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;)V

    return-void

    .line 4589
    :cond_0
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ag:I

    const-string v1, "tkay_reward_endcard_native_half_landscape"

    const-string v2, "tkay_reward_endcard_native_land"

    const-string v3, "tkay_reward_endcard_native_half_portrait"

    const-string v4, "tkay_reward_endcard_native_hor"

    if-nez v0, :cond_2

    .line 4590
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->aa:Z

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    move-object v3, v4

    .line 4591
    :goto_0
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->isLandscape()Z

    move-result v0

    if-eqz v0, :cond_6

    .line 4592
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->aa:Z

    if-eqz v0, :cond_5

    goto :goto_2

    :cond_2
    const/4 v5, 0x1

    if-ne v0, v5, :cond_4

    .line 4596
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->aa:Z

    if-eqz v0, :cond_3

    goto :goto_1

    :cond_3
    move-object v3, v4

    goto :goto_1

    :cond_4
    const-string v0, ""

    move-object v3, v0

    .line 4598
    :goto_1
    iget v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ag:I

    const/4 v4, 0x2

    if-ne v0, v4, :cond_6

    .line 4599
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->aa:Z

    if-eqz v0, :cond_5

    goto :goto_2

    :cond_5
    move-object v1, v2

    :goto_2
    move-object v3, v1

    .line 4602
    :cond_6
    invoke-virtual {p0, v3}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->findLayout(Ljava/lang/String;)I

    move-result v0

    if-lez v0, :cond_8

    .line 5446
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->isLandscape()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_7

    .line 5447
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->c:Landroid/view/LayoutInflater;

    invoke-virtual {v1, v0, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->s:Landroid/view/ViewGroup;

    .line 5448
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->addView(Landroid/view/View;)V

    .line 5449
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->s:Landroid/view/ViewGroup;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b(Landroid/view/View;)Z

    move-result v0

    goto :goto_3

    .line 5451
    :cond_7
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->c:Landroid/view/LayoutInflater;

    invoke-virtual {v1, v0, v2}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->r:Landroid/view/ViewGroup;

    .line 5452
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->addView(Landroid/view/View;)V

    .line 5453
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->r:Landroid/view/ViewGroup;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b(Landroid/view/View;)Z

    move-result v0

    .line 4231
    :goto_3
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->f:Z

    .line 4232
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->e()V

    :cond_8
    return-void
.end method

.method public setMoreOfferCampaignUnit(Lcom/tkay/expressad/foundation/d/d;)V
    .locals 2

    .line 704
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 705
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ac:Lcom/tkay/expressad/foundation/d/d;

    if-eqz p1, :cond_0

    .line 9374
    iget-object p1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    if-eqz p1, :cond_0

    .line 706
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ac:Lcom/tkay/expressad/foundation/d/d;

    .line 10374
    iget-object p1, p1, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    .line 706
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result p1

    const/4 v0, 0x5

    if-le p1, v0, :cond_0

    .line 707
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ad:Lcom/tkay/expressad/shake/MBShakeView;

    if-eqz p1, :cond_0

    .line 708
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x40a00000    # 5.0f

    invoke-static {v0, v1}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    const/4 v1, 0x0

    invoke-virtual {p1, v1, v1, v1, v0}, Lcom/tkay/expressad/shake/MBShakeView;->setPadding(IIII)V

    :cond_0
    return-void
.end method

.method public setNotchPadding(IIII)V
    .locals 4

    .line 641
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "NOTCH NativeEndCard "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    const/4 v1, 0x4

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x0

    aput-object v2, v1, v3

    invoke-static {p2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x1

    aput-object v2, v1, v3

    invoke-static {p3}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x2

    aput-object v2, v1, v3

    invoke-static {p4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const/4 v3, 0x3

    aput-object v2, v1, v3

    const-string v2, "%1s-%2s-%3s-%4s"

    invoke-static {v2, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 642
    iput p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->Q:I

    .line 643
    iput p2, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->R:I

    .line 644
    iput p3, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->S:I

    .line 645
    iput p4, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->T:I

    .line 647
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->h()V

    return-void
.end method

.method public setOnPause()V
    .locals 1

    const/4 v0, 0x0

    .line 768
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->N:Z

    return-void
.end method

.method public setOnResume()V
    .locals 1

    const/4 v0, 0x1

    .line 764
    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->N:Z

    return-void
.end method

.method public setUnitId(Ljava/lang/String;)V
    .locals 0

    .line 136
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayNativeEndCardView;->ab:Ljava/lang/String;

    return-void
.end method
