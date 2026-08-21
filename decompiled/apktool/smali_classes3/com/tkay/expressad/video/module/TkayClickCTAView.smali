.class public Lcom/tkay/expressad/video/module/TkayClickCTAView;
.super Lcom/tkay/expressad/video/module/TkayBaseView;

# interfaces
.implements Lcom/tkay/expressad/video/signal/f;


# static fields
.field private static final n:Ljava/lang/String; = "tkay_reward_clickable_cta"


# instance fields
.field private o:Landroid/view/ViewGroup;

.field private p:Landroid/widget/ImageView;

.field private q:Landroid/widget/TextView;

.field private r:Landroid/widget/TextView;

.field private s:Landroid/widget/TextView;

.field private t:Ljava/lang/String;

.field private u:F

.field private v:F

.field private w:I

.field private x:Landroid/animation/ObjectAnimator;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 64
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 68
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/module/TkayClickCTAView;Landroid/widget/TextView;)Landroid/widget/TextView;
    .locals 0

    .line 35
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->r:Landroid/widget/TextView;

    return-object p1
.end method

.method private a()V
    .locals 2

    const-string v0, "tkay_reward_clickable_cta"

    .line 104
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->findLayout(Ljava/lang/String;)I

    move-result v0

    if-ltz v0, :cond_0

    .line 106
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->c:Landroid/view/LayoutInflater;

    invoke-virtual {v1, v0, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 107
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->f()Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->f:Z

    .line 108
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->c()V

    .line 1199
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->setWrapContent()V

    :cond_0
    return-void
.end method

.method private a(Landroid/view/ViewGroup;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 80
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/c;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/c;-><init>()V

    invoke-static {p1, p2}, Lcom/tkay/expressad/video/dynview/j/c;->b(Landroid/view/View;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/video/dynview/c;

    move-result-object p2

    .line 81
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b;->a()Lcom/tkay/expressad/video/dynview/b;

    new-instance v0, Lcom/tkay/expressad/video/module/TkayClickCTAView$1;

    invoke-direct {v0, p0, p1}, Lcom/tkay/expressad/video/module/TkayClickCTAView$1;-><init>(Lcom/tkay/expressad/video/module/TkayClickCTAView;Landroid/view/ViewGroup;)V

    invoke-static {p2, v0}, Lcom/tkay/expressad/video/dynview/b;->a(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/video/module/TkayClickCTAView;)Z
    .locals 0

    .line 35
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->f()Z

    move-result p0

    return p0
.end method

.method private b()V
    .locals 2

    .line 190
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->p:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    .line 191
    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/video/module/TkayClickCTAView;)V
    .locals 4

    .line 3213
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    :cond_0
    const/4 v0, 0x0

    .line 3234
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1

    .line 3235
    :try_start_1
    sget-object v0, Lcom/tkay/expressad/foundation/g/a;->ce:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-virtual {p0, v2}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->a(I)Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    goto :goto_0

    :catch_1
    move-exception v1

    move-object v3, v1

    move-object v1, v0

    move-object v0, v3

    .line 3237
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 3239
    :goto_1
    iget-object p0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v0, 0x69

    invoke-interface {p0, v0, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/video/module/TkayClickCTAView;)V
    .locals 0

    .line 35
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b()V

    return-void
.end method

.method private e()V
    .locals 0

    .line 199
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->setWrapContent()V

    return-void
.end method

.method private f()Z
    .locals 4

    const-string v0, "tkay_viewgroup_ctaroot"

    .line 203
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->o:Landroid/view/ViewGroup;

    const-string v0, "tkay_iv_appicon"

    .line 204
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->p:Landroid/widget/ImageView;

    const-string v0, "tkay_tv_title"

    .line 205
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->q:Landroid/widget/TextView;

    const-string v0, "tkay_tv_install"

    .line 206
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->s:Landroid/widget/TextView;

    const/4 v1, 0x4

    new-array v1, v1, [Landroid/view/View;

    .line 207
    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->o:Landroid/view/ViewGroup;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->p:Landroid/widget/ImageView;

    const/4 v3, 0x1

    aput-object v2, v1, v3

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->q:Landroid/widget/TextView;

    const/4 v3, 0x2

    aput-object v2, v1, v3

    const/4 v2, 0x3

    aput-object v0, v1, v2

    invoke-virtual {p0, v1}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->isNotNULL([Landroid/view/View;)Z

    move-result v0

    return v0
.end method

.method private g()V
    .locals 4

    .line 213
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    :cond_0
    const/4 v0, 0x0

    .line 234
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1

    .line 235
    :try_start_1
    sget-object v0, Lcom/tkay/expressad/foundation/g/a;->ce:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-virtual {p0, v2}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->a(I)Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    goto :goto_0

    :catch_1
    move-exception v1

    move-object v3, v1

    move-object v1, v0

    move-object v0, v3

    .line 237
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 239
    :goto_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v2, 0x69

    invoke-interface {v0, v2, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method


# virtual methods
.method protected final c()V
    .locals 2

    .line 115
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->c()V

    .line 116
    iget-boolean v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->f:Z

    if-eqz v0, :cond_1

    .line 117
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 118
    new-instance v0, Lcom/tkay/expressad/video/module/TkayClickCTAView$2;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/video/module/TkayClickCTAView$2;-><init>(Lcom/tkay/expressad/video/module/TkayClickCTAView;)V

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 125
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->s:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayClickCTAView$3;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayClickCTAView$3;-><init>(Lcom/tkay/expressad/video/module/TkayClickCTAView;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 131
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->p:Landroid/widget/ImageView;

    if-eqz v0, :cond_1

    .line 132
    new-instance v1, Lcom/tkay/expressad/video/module/TkayClickCTAView$4;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayClickCTAView$4;-><init>(Lcom/tkay/expressad/video/module/TkayClickCTAView;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_1
    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 0

    return-void
.end method

.method protected onAttachedToWindow()V
    .locals 1

    .line 252
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->onAttachedToWindow()V

    .line 253
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->x:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_0

    .line 255
    :try_start_0
    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->start()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 257
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 1

    .line 265
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->onDetachedFromWindow()V

    .line 266
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->x:Landroid/animation/ObjectAnimator;

    if-eqz v0, :cond_0

    .line 268
    :try_start_0
    invoke-virtual {v0}, Landroid/animation/ObjectAnimator;->cancel()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 270
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return-void
.end method

.method public onInterceptTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 1

    .line 245
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->u:F

    .line 246
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->v:F

    .line 247
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->onInterceptTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method

.method public onSelfConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 0

    .line 184
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 185
    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    iput p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->w:I

    return-void
.end method

.method public preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 3

    .line 145
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_4

    .line 147
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->j()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 148
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    .line 2080
    new-instance v0, Lcom/tkay/expressad/video/dynview/j/c;

    invoke-direct {v0}, Lcom/tkay/expressad/video/dynview/j/c;-><init>()V

    invoke-static {p0, p1}, Lcom/tkay/expressad/video/dynview/j/c;->b(Landroid/view/View;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/video/dynview/c;

    move-result-object p1

    .line 2081
    invoke-static {}, Lcom/tkay/expressad/video/dynview/b;->a()Lcom/tkay/expressad/video/dynview/b;

    new-instance v0, Lcom/tkay/expressad/video/module/TkayClickCTAView$1;

    invoke-direct {v0, p0, p0}, Lcom/tkay/expressad/video/module/TkayClickCTAView$1;-><init>(Lcom/tkay/expressad/video/module/TkayClickCTAView;Landroid/view/ViewGroup;)V

    invoke-static {p1, v0}, Lcom/tkay/expressad/video/dynview/b;->a(Lcom/tkay/expressad/video/dynview/c;Lcom/tkay/expressad/video/dynview/f/h;)V

    goto :goto_0

    :cond_0
    const-string p1, "tkay_reward_clickable_cta"

    .line 2104
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->findLayout(Ljava/lang/String;)I

    move-result p1

    if-ltz p1, :cond_1

    .line 2106
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->c:Landroid/view/LayoutInflater;

    invoke-virtual {v0, p1, p0}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    .line 2107
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->f()Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->f:Z

    .line 2108
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->c()V

    .line 2199
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->setWrapContent()V

    .line 152
    :cond_1
    :goto_0
    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->f:Z

    if-eqz p1, :cond_4

    .line 156
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->s:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    .line 3175
    iget-object v0, v0, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    .line 156
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 157
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 158
    new-instance p1, Lcom/tkay/expressad/video/module/TkayClickCTAView$5;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->p:Landroid/widget/ImageView;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->t:Ljava/lang/String;

    invoke-direct {p1, p0, v0, v1, v2}, Lcom/tkay/expressad/video/module/TkayClickCTAView$5;-><init>(Lcom/tkay/expressad/video/module/TkayClickCTAView;Landroid/widget/ImageView;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    .line 165
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    goto :goto_1

    .line 167
    :cond_2
    invoke-direct {p0}, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b()V

    .line 169
    :goto_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->q:Landroid/widget/TextView;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_3

    .line 170
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->q:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 173
    :cond_3
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->r:Landroid/widget/TextView;

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->bc()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_4

    .line 174
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->r:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bc()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_4
    return-void
.end method

.method public setObjectAnimator(Landroid/animation/ObjectAnimator;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->x:Landroid/animation/ObjectAnimator;

    return-void
.end method

.method public setUnitId(Ljava/lang/String;)V
    .locals 0

    .line 60
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayClickCTAView;->t:Ljava/lang/String;

    return-void
.end method
