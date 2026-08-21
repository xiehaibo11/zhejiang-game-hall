.class public Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;
.super Lcom/tkay/expressad/video/module/TkayBaseView;

# interfaces
.implements Lcom/tkay/expressad/video/signal/f;


# instance fields
.field private final n:Ljava/lang/String;

.field private o:Landroid/view/View;

.field private p:Landroid/widget/ImageView;

.field private q:Landroid/widget/ImageView;

.field private r:Landroid/widget/TextView;

.field private s:Landroid/widget/TextView;

.field private t:Landroid/widget/TextView;

.field private u:Lcom/tkay/expressad/video/signal/factory/b;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 40
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;)V

    const-string p1, "TkayVideoEndCoverView"

    .line 28
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->n:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 44
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/video/module/TkayBaseView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const-string p1, "TkayVideoEndCoverView"

    .line 28
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->n:Ljava/lang/String;

    return-void
.end method

.method private a(Landroid/view/View;)Z
    .locals 1

    if-eqz p1, :cond_0

    :try_start_0
    const-string v0, "tkay_vec_iv_icon"

    .line 104
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->p:Landroid/widget/ImageView;

    const-string v0, "tkay_vec_iv_close"

    .line 105
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->q:Landroid/widget/ImageView;

    const-string v0, "tkay_vec_tv_title"

    .line 106
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->r:Landroid/widget/TextView;

    const-string v0, "tkay_vec_tv_desc"

    .line 107
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->s:Landroid/widget/TextView;

    const-string v0, "tkay_vec_btn"

    .line 108
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->findID(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p1, v0}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->t:Landroid/widget/TextView;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 111
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    const/4 p1, 0x0

    return p1

    :cond_0
    :goto_0
    const/4 p1, 0x1

    return p1
.end method

.method private b()V
    .locals 2

    .line 88
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->o:Landroid/view/View;

    if-nez v0, :cond_0

    .line 89
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->a:Landroid/content/Context;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->init(Landroid/content/Context;)V

    .line 90
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->u:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    return-void

    .line 92
    :cond_0
    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 93
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->o:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->o:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 95
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->o:Landroid/view/View;

    invoke-virtual {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->addView(Landroid/view/View;)V

    .line 96
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->o:Landroid/view/View;

    invoke-direct {p0, v0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->a(Landroid/view/View;)Z

    .line 97
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->c()V

    return-void
.end method

.method private e()V
    .locals 4

    .line 118
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_3

    .line 119
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->p:Landroid/widget/ImageView;

    if-eqz v0, :cond_0

    .line 120
    new-instance v1, Lcom/tkay/expressad/video/module/a/a/j;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const/high16 v3, 0x41000000    # 8.0f

    invoke-static {v2, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-direct {v1, v0, v2}, Lcom/tkay/expressad/video/module/a/a/j;-><init>(Landroid/widget/ImageView;I)V

    .line 121
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    iget-object v2, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2, v1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 124
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->r:Landroid/widget/TextView;

    if-eqz v0, :cond_1

    .line 125
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 127
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->t:Landroid/widget/TextView;

    if-eqz v0, :cond_2

    .line 128
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->b:Lcom/tkay/expressad/foundation/d/c;

    .line 2175
    iget-object v1, v1, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    .line 128
    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 130
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->s:Landroid/widget/TextView;

    if-eqz v0, :cond_3

    .line 131
    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bc()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_3
    return-void
.end method


# virtual methods
.method protected final a()V
    .locals 6

    const/4 v0, 0x0

    .line 165
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_4

    .line 167
    :try_start_1
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_2

    .line 168
    :try_start_2
    sget-object v1, Lcom/tkay/expressad/foundation/g/a;->cc:Ljava/lang/String;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    iget v4, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->g:F

    invoke-static {v3, v4}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;F)I

    move-result v3

    invoke-virtual {v2, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 169
    sget-object v1, Lcom/tkay/expressad/foundation/g/a;->cd:Ljava/lang/String;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v3

    iget v4, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->h:F

    invoke-static {v3, v4}, Lcom/tkay/expressad/foundation/h/t;->a(Landroid/content/Context;F)I

    move-result v3

    invoke-virtual {v2, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 170
    sget-object v1, Lcom/tkay/expressad/foundation/g/a;->cf:Ljava/lang/String;

    const/4 v3, 0x0

    invoke-virtual {v2, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1

    .line 172
    :try_start_3
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getConfiguration()Landroid/content/res/Configuration;

    move-result-object v1

    iget v1, v1, Landroid/content/res/Configuration;->orientation:I

    iput v1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->d:I
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_0

    :catch_0
    move-exception v1

    .line 174
    :try_start_4
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 176
    :goto_0
    sget-object v1, Lcom/tkay/expressad/foundation/g/a;->cg:Ljava/lang/String;

    iget v3, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->d:I

    invoke-virtual {v2, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 177
    sget-object v1, Lcom/tkay/expressad/foundation/g/a;->ch:Ljava/lang/String;

    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->getContext()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/expressad/foundation/h/t;->c(Landroid/content/Context;)F

    move-result v3

    float-to-double v3, v3

    invoke-virtual {v2, v1, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;
    :try_end_4
    .catch Lorg/json/JSONException; {:try_start_4 .. :try_end_4} :catch_1

    goto :goto_2

    :catch_1
    move-exception v1

    goto :goto_1

    :catch_2
    move-exception v2

    move-object v5, v2

    move-object v2, v1

    move-object v1, v5

    .line 179
    :goto_1
    :try_start_5
    invoke-virtual {v1}, Lorg/json/JSONException;->getMessage()Ljava/lang/String;

    .line 182
    :goto_2
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V
    :try_end_5
    .catch Lorg/json/JSONException; {:try_start_5 .. :try_end_5} :catch_4

    .line 183
    :try_start_6
    sget-object v0, Lcom/tkay/expressad/foundation/g/a;->ce:Ljava/lang/String;

    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_6
    .catch Lorg/json/JSONException; {:try_start_6 .. :try_end_6} :catch_3

    goto :goto_4

    :catch_3
    move-exception v0

    goto :goto_3

    :catch_4
    move-exception v1

    move-object v5, v1

    move-object v1, v0

    move-object v0, v5

    .line 185
    :goto_3
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 187
    :goto_4
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->e:Lcom/tkay/expressad/video/module/a/a;

    const/16 v2, 0x69

    invoke-interface {v0, v2, v1}, Lcom/tkay/expressad/video/module/a/a;->a(ILjava/lang/Object;)V

    return-void
.end method

.method protected final c()V
    .locals 2

    .line 138
    invoke-super {p0}, Lcom/tkay/expressad/video/module/TkayBaseView;->c()V

    .line 140
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->q:Landroid/widget/ImageView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView$1;-><init>(Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 147
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->p:Landroid/widget/ImageView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView$2;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView$2;-><init>(Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;)V

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 154
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->t:Landroid/widget/TextView;

    new-instance v1, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView$3;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView$3;-><init>(Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public init(Landroid/content/Context;)V
    .locals 2

    const-string p1, "tkay_reward_videoend_cover"

    .line 49
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->findLayout(Ljava/lang/String;)I

    move-result p1

    if-ltz p1, :cond_0

    .line 51
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->c:Landroid/view/LayoutInflater;

    const/4 v1, 0x0

    invoke-virtual {v0, p1, v1}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->o:Landroid/view/View;

    if-eqz p1, :cond_0

    .line 53
    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->a(Landroid/view/View;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->f:Z

    .line 54
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->o:Landroid/view/View;

    const/4 v0, -0x1

    invoke-virtual {p0, p1, v0, v0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->addView(Landroid/view/View;II)V

    .line 55
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->c()V

    :cond_0
    return-void
.end method

.method public onInterceptTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 1

    .line 74
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->g:F

    .line 75
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v0

    iput v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->h:F

    .line 76
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->onInterceptTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method

.method public onSelfConfigurationChanged(Landroid/content/res/Configuration;)V
    .locals 1

    .line 81
    invoke-super {p0, p1}, Lcom/tkay/expressad/video/module/TkayBaseView;->onSelfConfigurationChanged(Landroid/content/res/Configuration;)V

    .line 82
    iget p1, p1, Landroid/content/res/Configuration;->orientation:I

    iput p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->d:I

    .line 83
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->o:Landroid/view/View;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->removeView(Landroid/view/View;)V

    .line 2088
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->o:Landroid/view/View;

    if-nez p1, :cond_0

    .line 2089
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->a:Landroid/content/Context;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->init(Landroid/content/Context;)V

    .line 2090
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->u:Lcom/tkay/expressad/video/signal/factory/b;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V

    return-void

    .line 2092
    :cond_0
    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    if-eqz p1, :cond_1

    .line 2093
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->o:Landroid/view/View;

    invoke-virtual {p1}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->o:Landroid/view/View;

    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 2095
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->o:Landroid/view/View;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->addView(Landroid/view/View;)V

    .line 2096
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->o:Landroid/view/View;

    invoke-direct {p0, p1}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->a(Landroid/view/View;)Z

    .line 2097
    invoke-virtual {p0}, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->c()V

    return-void
.end method

.method public preLoadData(Lcom/tkay/expressad/video/signal/factory/b;)V
    .locals 3

    .line 62
    iput-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->u:Lcom/tkay/expressad/video/signal/factory/b;

    .line 64
    :try_start_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_3

    iget-boolean p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->f:Z

    if-eqz p1, :cond_3

    .line 1118
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->b:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p1, :cond_3

    .line 1119
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->p:Landroid/widget/ImageView;

    if-eqz p1, :cond_0

    .line 1120
    new-instance p1, Lcom/tkay/expressad/video/module/a/a/j;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->p:Landroid/widget/ImageView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const/high16 v2, 0x41000000    # 8.0f

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-direct {p1, v0, v1}, Lcom/tkay/expressad/video/module/a/a/j;-><init>(Landroid/widget/ImageView;I)V

    .line 1121
    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/g/d/b;->a(Landroid/content/Context;)Lcom/tkay/expressad/foundation/g/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->bd()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/d/c;)V

    .line 1124
    :cond_0
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->r:Landroid/widget/TextView;

    if-eqz p1, :cond_1

    .line 1125
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->r:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bb()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1127
    :cond_1
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->t:Landroid/widget/TextView;

    if-eqz p1, :cond_2

    .line 1128
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->t:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->b:Lcom/tkay/expressad/foundation/d/c;

    .line 1175
    iget-object v0, v0, Lcom/tkay/expressad/out/d;->cU:Ljava/lang/String;

    .line 1128
    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 1130
    :cond_2
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->s:Landroid/widget/TextView;

    if-eqz p1, :cond_3

    .line 1131
    iget-object p1, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->s:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/tkay/expressad/video/module/TkayVideoEndCoverView;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->bc()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_3
    return-void

    :catchall_0
    move-exception p1

    .line 68
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method
