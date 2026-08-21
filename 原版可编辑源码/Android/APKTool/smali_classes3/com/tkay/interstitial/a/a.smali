.class public Lcom/tkay/interstitial/a/a;
.super Lcom/tkay/core/common/f;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/core/common/f<",
        "Lcom/tkay/interstitial/a/e;",
        ">;"
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String;


# instance fields
.field m:Ljava/lang/Runnable;

.field private n:Landroid/view/View;

.field private o:Ljava/util/concurrent/atomic/AtomicBoolean;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 78
    const-class v0, Lcom/tkay/interstitial/a/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/interstitial/a/a;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    .line 95
    invoke-direct {p0, p1, p2}, Lcom/tkay/core/common/f;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 81
    new-instance p1, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 p2, 0x0

    invoke-direct {p1, p2}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object p1, p0, Lcom/tkay/interstitial/a/a;->o:Ljava/util/concurrent/atomic/AtomicBoolean;

    .line 336
    new-instance p1, Lcom/tkay/interstitial/a/a$4;

    invoke-direct {p1, p0}, Lcom/tkay/interstitial/a/a$4;-><init>(Lcom/tkay/interstitial/a/a;)V

    iput-object p1, p0, Lcom/tkay/interstitial/a/a;->m:Ljava/lang/Runnable;

    return-void
.end method

.method private static a(Lcom/tkay/interstitial/a/e;)Lcom/tkay/core/common/h;
    .locals 2

    .line 313
    new-instance v0, Lcom/tkay/interstitial/a/f;

    invoke-virtual {p0}, Lcom/tkay/interstitial/a/e;->a()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/interstitial/a/f;-><init>(Landroid/content/Context;)V

    .line 315
    iget p0, p0, Lcom/tkay/interstitial/a/e;->d:I

    invoke-virtual {v0, p0}, Lcom/tkay/interstitial/a/f;->a(I)V

    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Lcom/tkay/interstitial/a/a;
    .locals 3

    .line 85
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    const-string v1, "3"

    invoke-virtual {v0, p1, v1}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/common/f;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 86
    instance-of v2, v0, Lcom/tkay/interstitial/a/a;

    if-nez v2, :cond_1

    .line 87
    :cond_0
    new-instance v0, Lcom/tkay/interstitial/a/a;

    invoke-direct {v0, p0, p1}, Lcom/tkay/interstitial/a/a;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    .line 88
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object p0

    invoke-virtual {p0, p1, v1, v0}, Lcom/tkay/core/common/v;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/f;)V

    .line 90
    :cond_1
    check-cast v0, Lcom/tkay/interstitial/a/a;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/interstitial/a/a;)Ljava/lang/String;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/interstitial/a/a;->g:Ljava/lang/String;

    return-object p0
.end method

.method private a(Landroid/app/Activity;)V
    .locals 8

    if-nez p1, :cond_0

    return-void

    .line 206
    :cond_0
    iget-object v0, p0, Lcom/tkay/interstitial/a/a;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    .line 207
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->n()Ljava/lang/String;

    move-result-object v1

    .line 208
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->m()Ljava/lang/String;

    move-result-object v0

    .line 211
    iget-object v2, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    if-nez v2, :cond_1

    .line 212
    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v2

    const-string v3, "interstitial_loading_layout"

    const-string v4, "layout"

    invoke-static {p1, v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    const/4 v4, 0x0

    invoke-virtual {v2, v3, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    .line 214
    :cond_1
    iget-object v2, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    new-instance v3, Lcom/tkay/interstitial/a/a$2;

    invoke-direct {v3, p0}, Lcom/tkay/interstitial/a/a$2;-><init>(Lcom/tkay/interstitial/a/a;)V

    invoke-virtual {v2, v3}, Landroid/view/View;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    .line 224
    iget-object v2, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    const-string v3, "id"

    const-string v4, "interstitial_iv_loading"

    invoke-static {p1, v4, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v2, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/ImageView;

    .line 225
    iget-object v4, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    const-string v5, "interstitial_tv_loading"

    invoke-static {p1, v5, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v4, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    const/high16 v4, 0x41f00000    # 30.0f

    .line 228
    invoke-static {p1, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v4

    .line 229
    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setMinimumWidth(I)V

    .line 230
    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setMinimumHeight(I)V

    const/high16 v4, 0x42b40000    # 90.0f

    .line 232
    invoke-static {p1, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v4

    .line 233
    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setMaxWidth(I)V

    .line 234
    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setMaxHeight(I)V

    .line 237
    sget-object v4, Landroid/widget/ImageView$ScaleType;->CENTER_INSIDE:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    const-string v4, "interstitial_loading_default"

    const-string v5, "drawable"

    .line 239
    invoke-static {p1, v4, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    .line 240
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 242
    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setImageResource(I)V

    goto :goto_0

    .line 245
    :cond_2
    new-instance v5, Ljava/lang/ref/WeakReference;

    invoke-direct {v5, v2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    .line 247
    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v2

    new-instance v6, Lcom/tkay/core/common/res/e;

    const/4 v7, 0x3

    invoke-direct {v6, v7, v1}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v7, Lcom/tkay/interstitial/a/a$3;

    invoke-direct {v7, p0, v5, v1, v4}, Lcom/tkay/interstitial/a/a$3;-><init>(Lcom/tkay/interstitial/a/a;Ljava/lang/ref/WeakReference;Ljava/lang/String;I)V

    invoke-virtual {v2, v6, v7}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    .line 268
    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    .line 269
    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    :cond_3
    const-string v0, "interstitial_text_loading_default"

    const-string v1, "string"

    .line 271
    invoke-static {p1, v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setText(I)V

    .line 274
    :goto_1
    iget-object v0, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    if-eqz v0, :cond_4

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 275
    iget-object v0, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 278
    :cond_4
    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    .line 279
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    .line 280
    iget-object v1, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    invoke-virtual {p1, v1, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    return-void
.end method

.method private a(Landroid/app/Activity;Lcom/tkay/interstitial/a/d;Lcom/tkay/core/api/BaseAd;Lcom/tkay/core/common/f/d;Ljava/lang/String;)V
    .locals 4

    if-eqz p3, :cond_0

    .line 383
    instance-of v0, p3, Lcom/tkay/core/common/f/a/e;

    if-eqz v0, :cond_0

    .line 384
    new-instance v0, Lcom/tkay/core/common/f/a/b;

    move-object v1, p3

    check-cast v1, Lcom/tkay/core/common/f/a/e;

    invoke-direct {v0, v1}, Lcom/tkay/core/common/f/a/b;-><init>(Lcom/tkay/core/common/f/a/e;)V

    .line 385
    new-instance v1, Lcom/tkay/core/common/f/a/c;

    move-object v2, p3

    check-cast v2, Lcom/tkay/core/common/f/a/a;

    const-string v3, "3"

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    invoke-direct {v1, v2, p4, v3}, Lcom/tkay/core/common/f/a/c;-><init>(Lcom/tkay/core/common/f/a/a;Lcom/tkay/core/common/f/d;I)V

    .line 386
    invoke-static {v1}, Lcom/tkay/interstitial/a/a;->a(Lcom/tkay/core/common/f/i;)Ljava/lang/String;

    move-result-object p4

    .line 388
    invoke-static {}, Lcom/tkay/basead/e/b;->a()Lcom/tkay/basead/e/b;

    move-result-object v2

    new-instance v3, Lcom/tkay/interstitial/a/a$5;

    invoke-direct {v3, p0, p2, p4}, Lcom/tkay/interstitial/a/a$5;-><init>(Lcom/tkay/interstitial/a/a;Lcom/tkay/interstitial/a/d;Ljava/lang/String;)V

    invoke-virtual {v2, p4, v3}, Lcom/tkay/basead/e/b;->a(Ljava/lang/String;Lcom/tkay/basead/e/b$b;)V

    .line 441
    invoke-static {}, Lcom/tkay/basead/d/i;->a()Lcom/tkay/basead/d/i;

    move-result-object p2

    invoke-virtual {p2, p4, p3}, Lcom/tkay/basead/d/i;->a(Ljava/lang/String;Lcom/tkay/core/api/BaseAd;)V

    .line 443
    new-instance p2, Lcom/tkay/core/basead/b/a;

    invoke-direct {p2}, Lcom/tkay/core/basead/b/a;-><init>()V

    .line 444
    iput-object v0, p2, Lcom/tkay/core/basead/b/a;->c:Lcom/tkay/core/common/f/h;

    .line 445
    iput-object p4, p2, Lcom/tkay/core/basead/b/a;->d:Ljava/lang/String;

    const/4 p3, 0x3

    .line 446
    iput p3, p2, Lcom/tkay/core/basead/b/a;->a:I

    .line 447
    iput-object v1, p2, Lcom/tkay/core/basead/b/a;->h:Lcom/tkay/core/common/f/i;

    .line 448
    invoke-static {p1}, Lcom/tkay/core/common/l/d;->g(Landroid/content/Context;)I

    move-result p3

    iput p3, p2, Lcom/tkay/core/basead/b/a;->e:I

    .line 449
    iput-object p5, p2, Lcom/tkay/core/basead/b/a;->b:Ljava/lang/String;

    .line 451
    invoke-static {p1, p2}, Lcom/tkay/basead/ui/BaseATActivity;->a(Landroid/app/Activity;Lcom/tkay/core/basead/b/a;)V

    return-void

    :cond_0
    const-string p1, "tkay"

    const-string p3, "showThirdPartyNativeSplash fail,AdCache return illegal type adObject"

    .line 453
    invoke-static {p1, p3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    if-eqz p2, :cond_1

    const-string p1, ""

    const-string p3, "showThirdPartyNativeInterstitial fail,AdCache return illegal type adObject"

    .line 455
    invoke-virtual {p2, p1, p3}, Lcom/tkay/interstitial/a/d;->onInterstitialAdVideoError(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/interstitial/a/a;Landroid/app/Activity;)V
    .locals 8

    if-eqz p1, :cond_4

    .line 4206
    iget-object v0, p0, Lcom/tkay/interstitial/a/a;->b:Landroid/content/Context;

    invoke-static {v0}, Lcom/tkay/core/c/b;->a(Landroid/content/Context;)Lcom/tkay/core/c/b;

    move-result-object v0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->o()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/core/c/b;->b(Ljava/lang/String;)Lcom/tkay/core/c/a;

    move-result-object v0

    .line 4207
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->n()Ljava/lang/String;

    move-result-object v1

    .line 4208
    invoke-virtual {v0}, Lcom/tkay/core/c/a;->m()Ljava/lang/String;

    move-result-object v0

    .line 4211
    iget-object v2, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    if-nez v2, :cond_0

    .line 4212
    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Landroid/view/LayoutInflater;->from(Landroid/content/Context;)Landroid/view/LayoutInflater;

    move-result-object v2

    const-string v3, "interstitial_loading_layout"

    const-string v4, "layout"

    invoke-static {p1, v3, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    const/4 v4, 0x0

    invoke-virtual {v2, v3, v4}, Landroid/view/LayoutInflater;->inflate(ILandroid/view/ViewGroup;)Landroid/view/View;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    .line 4214
    :cond_0
    iget-object v2, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    new-instance v3, Lcom/tkay/interstitial/a/a$2;

    invoke-direct {v3, p0}, Lcom/tkay/interstitial/a/a$2;-><init>(Lcom/tkay/interstitial/a/a;)V

    invoke-virtual {v2, v3}, Landroid/view/View;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    .line 4224
    iget-object v2, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    const-string v3, "id"

    const-string v4, "interstitial_iv_loading"

    invoke-static {p1, v4, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v2, v4}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    check-cast v2, Landroid/widget/ImageView;

    .line 4225
    iget-object v4, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    const-string v5, "interstitial_tv_loading"

    invoke-static {p1, v5, v3}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v4, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v3

    check-cast v3, Landroid/widget/TextView;

    const/high16 v4, 0x41f00000    # 30.0f

    .line 4228
    invoke-static {p1, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v4

    .line 4229
    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setMinimumWidth(I)V

    .line 4230
    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setMinimumHeight(I)V

    const/high16 v4, 0x42b40000    # 90.0f

    .line 4232
    invoke-static {p1, v4}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;F)I

    move-result v4

    .line 4233
    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setMaxWidth(I)V

    .line 4234
    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setMaxHeight(I)V

    .line 4237
    sget-object v4, Landroid/widget/ImageView$ScaleType;->CENTER_INSIDE:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    const-string v4, "interstitial_loading_default"

    const-string v5, "drawable"

    .line 4239
    invoke-static {p1, v4, v5}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v4

    .line 4240
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_1

    .line 4242
    invoke-virtual {v2, v4}, Landroid/widget/ImageView;->setImageResource(I)V

    goto :goto_0

    .line 4245
    :cond_1
    new-instance v5, Ljava/lang/ref/WeakReference;

    invoke-direct {v5, v2}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    .line 4247
    invoke-virtual {p1}, Landroid/app/Activity;->getApplicationContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/res/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/b;

    move-result-object v2

    new-instance v6, Lcom/tkay/core/common/res/e;

    const/4 v7, 0x3

    invoke-direct {v6, v7, v1}, Lcom/tkay/core/common/res/e;-><init>(ILjava/lang/String;)V

    new-instance v7, Lcom/tkay/interstitial/a/a$3;

    invoke-direct {v7, p0, v5, v1, v4}, Lcom/tkay/interstitial/a/a$3;-><init>(Lcom/tkay/interstitial/a/a;Ljava/lang/ref/WeakReference;Ljava/lang/String;I)V

    invoke-virtual {v2, v6, v7}, Lcom/tkay/core/common/res/b;->a(Lcom/tkay/core/common/res/e;Lcom/tkay/core/common/res/b$a;)V

    .line 4268
    :goto_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 4269
    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    goto :goto_1

    :cond_2
    const-string v0, "interstitial_text_loading_default"

    const-string v1, "string"

    .line 4271
    invoke-static {p1, v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Landroid/widget/TextView;->setText(I)V

    .line 4274
    :goto_1
    iget-object v0, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 4275
    iget-object v0, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    invoke-virtual {v0}, Landroid/view/View;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iget-object v1, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 4278
    :cond_3
    new-instance v0, Landroid/widget/FrameLayout$LayoutParams;

    const/4 v1, -0x1

    invoke-direct {v0, v1, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    .line 4279
    invoke-virtual {p1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object p1

    invoke-virtual {p1}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/view/ViewGroup;

    .line 4280
    iget-object p0, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    invoke-virtual {p1, p0, v0}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    :cond_4
    return-void
.end method

.method static synthetic a(Lcom/tkay/interstitial/a/a;Landroid/app/Activity;Lcom/tkay/interstitial/a/d;Lcom/tkay/core/api/BaseAd;Lcom/tkay/core/common/f/d;Ljava/lang/String;)V
    .locals 4

    if-eqz p3, :cond_0

    .line 4383
    instance-of v0, p3, Lcom/tkay/core/common/f/a/e;

    if-eqz v0, :cond_0

    .line 4384
    new-instance v0, Lcom/tkay/core/common/f/a/b;

    move-object v1, p3

    check-cast v1, Lcom/tkay/core/common/f/a/e;

    invoke-direct {v0, v1}, Lcom/tkay/core/common/f/a/b;-><init>(Lcom/tkay/core/common/f/a/e;)V

    .line 4385
    new-instance v1, Lcom/tkay/core/common/f/a/c;

    move-object v2, p3

    check-cast v2, Lcom/tkay/core/common/f/a/a;

    const-string v3, "3"

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    invoke-direct {v1, v2, p4, v3}, Lcom/tkay/core/common/f/a/c;-><init>(Lcom/tkay/core/common/f/a/a;Lcom/tkay/core/common/f/d;I)V

    .line 4386
    invoke-static {v1}, Lcom/tkay/interstitial/a/a;->a(Lcom/tkay/core/common/f/i;)Ljava/lang/String;

    move-result-object p4

    .line 4388
    invoke-static {}, Lcom/tkay/basead/e/b;->a()Lcom/tkay/basead/e/b;

    move-result-object v2

    new-instance v3, Lcom/tkay/interstitial/a/a$5;

    invoke-direct {v3, p0, p2, p4}, Lcom/tkay/interstitial/a/a$5;-><init>(Lcom/tkay/interstitial/a/a;Lcom/tkay/interstitial/a/d;Ljava/lang/String;)V

    invoke-virtual {v2, p4, v3}, Lcom/tkay/basead/e/b;->a(Ljava/lang/String;Lcom/tkay/basead/e/b$b;)V

    .line 4441
    invoke-static {}, Lcom/tkay/basead/d/i;->a()Lcom/tkay/basead/d/i;

    move-result-object p0

    invoke-virtual {p0, p4, p3}, Lcom/tkay/basead/d/i;->a(Ljava/lang/String;Lcom/tkay/core/api/BaseAd;)V

    .line 4443
    new-instance p0, Lcom/tkay/core/basead/b/a;

    invoke-direct {p0}, Lcom/tkay/core/basead/b/a;-><init>()V

    .line 4444
    iput-object v0, p0, Lcom/tkay/core/basead/b/a;->c:Lcom/tkay/core/common/f/h;

    .line 4445
    iput-object p4, p0, Lcom/tkay/core/basead/b/a;->d:Ljava/lang/String;

    const/4 p2, 0x3

    .line 4446
    iput p2, p0, Lcom/tkay/core/basead/b/a;->a:I

    .line 4447
    iput-object v1, p0, Lcom/tkay/core/basead/b/a;->h:Lcom/tkay/core/common/f/i;

    .line 4448
    invoke-static {p1}, Lcom/tkay/core/common/l/d;->g(Landroid/content/Context;)I

    move-result p2

    iput p2, p0, Lcom/tkay/core/basead/b/a;->e:I

    .line 4449
    iput-object p5, p0, Lcom/tkay/core/basead/b/a;->b:Ljava/lang/String;

    .line 4451
    invoke-static {p1, p0}, Lcom/tkay/basead/ui/BaseATActivity;->a(Landroid/app/Activity;Lcom/tkay/core/basead/b/a;)V

    return-void

    :cond_0
    const-string p0, "tkay"

    const-string p1, "showThirdPartyNativeSplash fail,AdCache return illegal type adObject"

    .line 4453
    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    const-string p0, ""

    const-string p1, "showThirdPartyNativeInterstitial fail,AdCache return illegal type adObject"

    .line 4455
    invoke-virtual {p2, p0, p1}, Lcom/tkay/interstitial/a/d;->onInterstitialAdVideoError(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/tkay/interstitial/a/a;)Landroid/content/Context;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/interstitial/a/a;->b:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic c(Lcom/tkay/interstitial/a/a;)Landroid/content/Context;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/interstitial/a/a;->b:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic d(Lcom/tkay/interstitial/a/a;)Landroid/content/Context;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/interstitial/a/a;->b:Landroid/content/Context;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/interstitial/a/a;)Ljava/util/concurrent/atomic/AtomicBoolean;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/interstitial/a/a;->o:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/interstitial/a/a;)Landroid/view/View;
    .locals 0

    .line 75
    iget-object p0, p0, Lcom/tkay/interstitial/a/a;->n:Landroid/view/View;

    return-object p0
.end method

.method private static m()V
    .locals 0

    return-void
.end method

.method private static n()V
    .locals 0

    return-void
.end method

.method private static o()V
    .locals 0

    return-void
.end method

.method private p()V
    .locals 6

    .line 346
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/interstitial/a/a;->m:Ljava/lang/Runnable;

    iget v2, p0, Lcom/tkay/interstitial/a/a;->h:I

    int-to-double v2, v2

    const-wide/high16 v4, 0x4000000000000000L    # 2.0

    invoke-static {v4, v5, v2, v3}, Ljava/lang/Math;->pow(DD)D

    move-result-wide v2

    double-to-long v2, v2

    const-wide/16 v4, 0x3e8

    mul-long/2addr v2, v4

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Context;Ljava/util/Map;)Lcom/tkay/core/api/TYAdStatusInfo;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)",
            "Lcom/tkay/core/api/TYAdStatusInfo;"
        }
    .end annotation

    .line 321
    invoke-super {p0, p1, p2}, Lcom/tkay/core/common/f;->a(Landroid/content/Context;Ljava/util/Map;)Lcom/tkay/core/api/TYAdStatusInfo;

    move-result-object v0

    .line 322
    invoke-virtual {p0}, Lcom/tkay/interstitial/a/a;->c()Z

    move-result v1

    if-nez v1, :cond_0

    invoke-virtual {p0, v0}, Lcom/tkay/interstitial/a/a;->a(Lcom/tkay/core/api/TYAdStatusInfo;)Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v4, 0x5

    const/4 v5, 0x0

    const/4 v6, 0x0

    move-object v2, p0

    move-object v3, p1

    move-object v7, p2

    .line 323
    invoke-virtual/range {v2 .. v7}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V

    :cond_0
    return-object v0
.end method

.method public final synthetic a(Lcom/tkay/core/common/j;)Lcom/tkay/core/common/h;
    .locals 2

    .line 75
    check-cast p1, Lcom/tkay/interstitial/a/e;

    .line 3313
    new-instance v0, Lcom/tkay/interstitial/a/f;

    invoke-virtual {p1}, Lcom/tkay/interstitial/a/e;->a()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/tkay/interstitial/a/f;-><init>(Landroid/content/Context;)V

    .line 3315
    iget p1, p1, Lcom/tkay/interstitial/a/e;->d:I

    invoke-virtual {v0, p1}, Lcom/tkay/interstitial/a/f;->a(I)V

    return-object v0
.end method

.method protected final a()Ljava/lang/String;
    .locals 1

    const-string v0, "3"

    return-object v0
.end method

.method public final declared-synchronized a(Landroid/app/Activity;Ljava/lang/String;Lcom/tkay/interstitial/api/TYInterstitialListener;Lcom/tkay/core/api/TYEventInterface;Ljava/util/Map;)V
    .locals 12
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/lang/String;",
            "Lcom/tkay/interstitial/api/TYInterstitialListener;",
            "Lcom/tkay/core/api/TYEventInterface;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    move-object v10, p0

    monitor-enter p0

    .line 102
    :try_start_0
    iget-object v0, v10, Lcom/tkay/interstitial/a/a;->o:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 103
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "The placementId("

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, v10, Lcom/tkay/interstitial/a/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ") is already in the process of being delayed."

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 104
    monitor-exit p0

    return-void

    :cond_0
    const/4 v0, 0x0

    const/4 v1, 0x1

    move-object v4, p1

    move-object/from16 v6, p5

    .line 107
    :try_start_1
    invoke-virtual {p0, p1, v0, v1, v6}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;ZZLjava/util/Map;)Lcom/tkay/core/common/f/a;

    move-result-object v3

    if-eqz v3, :cond_2

    .line 109
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    instance-of v0, v0, Lcom/tkay/interstitial/unitgroup/api/CustomInterstitialAdapter;

    if-eqz v0, :cond_2

    .line 110
    invoke-virtual {p0, v3}, Lcom/tkay/interstitial/a/a;->a(Lcom/tkay/core/common/f/a;)V

    .line 114
    invoke-virtual {p0}, Lcom/tkay/interstitial/a/a;->f()V

    .line 117
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->d()I

    move-result v0

    add-int/2addr v0, v1

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/a;->a(I)V

    .line 120
    invoke-virtual {v3}, Lcom/tkay/core/common/f/a;->e()Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->ad()I

    move-result v7

    if-lez v7, :cond_1

    .line 123
    iget-object v0, v10, Lcom/tkay/interstitial/a/a;->o:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    .line 126
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v11, Lcom/tkay/interstitial/a/a$1;

    move-object v1, v11

    move-object v2, p0

    move-object v4, p1

    move-object v5, p2

    move-object/from16 v6, p5

    move-object/from16 v8, p4

    move-object v9, p3

    invoke-direct/range {v1 .. v9}, Lcom/tkay/interstitial/a/a$1;-><init>(Lcom/tkay/interstitial/a/a;Lcom/tkay/core/common/f/a;Landroid/app/Activity;Ljava/lang/String;Ljava/util/Map;ILcom/tkay/core/api/TYEventInterface;Lcom/tkay/interstitial/api/TYInterstitialListener;)V

    invoke-virtual {v0, v11}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 192
    monitor-exit p0

    return-void

    :cond_2
    const/4 v0, 0x0

    :try_start_2
    invoke-virtual {p0, v0}, Lcom/tkay/interstitial/a/a;->a(Lcom/tkay/core/api/TYAdStatusInfo;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 196
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->D()Landroid/content/Context;

    move-result-object v2

    const/4 v3, 0x7

    const/4 v4, 0x0

    const/4 v5, 0x0

    move-object v1, p0

    move-object/from16 v6, p5

    invoke-virtual/range {v1 .. v6}, Lcom/tkay/interstitial/a/a;->a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 199
    :cond_3
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final a(Landroid/content/Context;ILcom/tkay/core/common/b/a;Lcom/tkay/core/common/b/b;Ljava/util/Map;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "I",
            "Lcom/tkay/core/common/b/a;",
            "Lcom/tkay/core/common/b/b;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    .line 300
    new-instance v4, Lcom/tkay/interstitial/a/e;

    invoke-direct {v4}, Lcom/tkay/interstitial/a/e;-><init>()V

    .line 301
    invoke-virtual {v4, p1}, Lcom/tkay/interstitial/a/e;->a(Landroid/content/Context;)V

    .line 303
    iput p2, v4, Lcom/tkay/interstitial/a/e;->d:I

    .line 304
    iput-object p4, v4, Lcom/tkay/interstitial/a/e;->e:Lcom/tkay/core/common/b/b;

    .line 305
    iput-object p5, v4, Lcom/tkay/interstitial/a/e;->g:Ljava/util/Map;

    .line 307
    iget-object v1, p0, Lcom/tkay/interstitial/a/a;->b:Landroid/content/Context;

    iget-object v3, p0, Lcom/tkay/interstitial/a/a;->c:Ljava/lang/String;

    const-string v2, "3"

    move-object v0, p0

    move-object v5, p3

    invoke-super/range {v0 .. v5}, Lcom/tkay/core/common/f;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/core/common/j;Lcom/tkay/core/common/b/a;)V

    return-void
.end method

.method protected final b(Lcom/tkay/core/api/AdError;)V
    .locals 6

    .line 351
    invoke-super {p0, p1}, Lcom/tkay/core/common/f;->b(Lcom/tkay/core/api/AdError;)V

    .line 352
    invoke-virtual {p0}, Lcom/tkay/interstitial/a/a;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1346
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/interstitial/a/a;->m:Ljava/lang/Runnable;

    const-wide/high16 v2, 0x4000000000000000L    # 2.0

    iget v4, p0, Lcom/tkay/interstitial/a/a;->h:I

    int-to-double v4, v4

    invoke-static {v2, v3, v4, v5}, Ljava/lang/Math;->pow(DD)D

    move-result-wide v2

    double-to-long v2, v2

    const-wide/16 v4, 0x3e8

    mul-long/2addr v2, v4

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V

    .line 356
    invoke-static {}, Lcom/tkay/interstitial/a/b;->a()Lcom/tkay/interstitial/a/b;

    move-result-object v0

    .line 2206
    iget-object v0, v0, Lcom/tkay/interstitial/a/b;->b:Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;

    if-eqz v0, :cond_0

    .line 358
    iget-object v1, p0, Lcom/tkay/interstitial/a/a;->c:Ljava/lang/String;

    invoke-interface {v0, v1, p1}, Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;->onInterstitialAutoLoadFail(Ljava/lang/String;Lcom/tkay/core/api/AdError;)V

    :cond_0
    return-void
.end method

.method protected final j()Z
    .locals 2

    .line 330
    invoke-static {}, Lcom/tkay/core/common/v;->a()Lcom/tkay/core/common/v;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/interstitial/a/a;->c:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/v;->e(Ljava/lang/String;)Z

    move-result v0

    return v0
.end method

.method protected final k()V
    .locals 2

    .line 378
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/interstitial/a/a;->m:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    return-void
.end method

.method protected final l()V
    .locals 2

    .line 366
    invoke-super {p0}, Lcom/tkay/core/common/f;->l()V

    .line 367
    invoke-virtual {p0}, Lcom/tkay/interstitial/a/a;->j()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 368
    invoke-static {}, Lcom/tkay/interstitial/a/b;->a()Lcom/tkay/interstitial/a/b;

    move-result-object v0

    .line 3206
    iget-object v0, v0, Lcom/tkay/interstitial/a/b;->b:Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;

    if-eqz v0, :cond_0

    .line 370
    iget-object v1, p0, Lcom/tkay/interstitial/a/a;->c:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/tkay/interstitial/api/TYInterstitialAutoLoadListener;->onInterstitialAutoLoaded(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
