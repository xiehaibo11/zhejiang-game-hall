.class public final Lcom/tkay/expressad/advanced/c/b;
.super Ljava/lang/Object;


# instance fields
.field public a:Landroid/os/Handler;

.field private b:Ljava/lang/String;

.field private c:Lcom/tkay/expressad/foundation/d/c;

.field private d:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

.field private e:Lcom/tkay/expressad/advanced/d/d;

.field private f:Lcom/tkay/expressad/a/a;

.field private g:Lcom/tkay/expressad/advanced/d/c;

.field private h:Z

.field private i:I

.field private j:Landroid/widget/ImageView;

.field private k:Ljava/lang/String;

.field private l:Ljava/lang/String;

.field private m:Z

.field private n:Landroid/view/View$OnClickListener;

.field private o:Lcom/tkay/expressad/advanced/d/a;


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 79
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-string v0, "NativeAdvancedShowManager"

    .line 52
    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->b:Ljava/lang/String;

    const/4 v0, -0x1

    .line 61
    iput v0, p0, Lcom/tkay/expressad/advanced/c/b;->i:I

    .line 70
    new-instance v0, Lcom/tkay/expressad/advanced/c/b$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/advanced/c/b$1;-><init>(Lcom/tkay/expressad/advanced/c/b;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->n:Landroid/view/View$OnClickListener;

    .line 118
    new-instance v0, Lcom/tkay/expressad/advanced/c/b$2;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/tkay/expressad/advanced/c/b$2;-><init>(Lcom/tkay/expressad/advanced/c/b;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->a:Landroid/os/Handler;

    .line 144
    new-instance v0, Lcom/tkay/expressad/advanced/c/b$3;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/advanced/c/b$3;-><init>(Lcom/tkay/expressad/advanced/c/b;)V

    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->o:Lcom/tkay/expressad/advanced/d/a;

    .line 80
    iput-object p3, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    .line 81
    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/b;->l:Ljava/lang/String;

    .line 83
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/b;->j:Landroid/widget/ImageView;

    if-nez p2, :cond_1

    .line 84
    new-instance p2, Landroid/widget/ImageView;

    invoke-direct {p2, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/b;->j:Landroid/widget/ImageView;

    const/high16 p3, 0x40000000    # 2.0f

    .line 85
    invoke-static {p1, p3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    invoke-static {p1, p3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v1

    invoke-static {p1, p3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    invoke-static {p1, p3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p1

    invoke-virtual {p2, v0, v1, v2, p1}, Landroid/widget/ImageView;->setPadding(IIII)V

    .line 1095
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    .line 1096
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/b;->j:Landroid/widget/ImageView;

    sget-object p3, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {p2, p3}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 1097
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/b;->j:Landroid/widget/ImageView;

    invoke-virtual {p2}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object p2

    check-cast p2, Landroid/widget/RelativeLayout$LayoutParams;

    if-nez p2, :cond_0

    .line 1099
    new-instance p2, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 p3, 0x41e80000    # 29.0f

    invoke-static {p1, p3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result p3

    const/high16 v0, 0x41800000    # 16.0f

    invoke-static {p1, v0}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v0

    invoke-direct {p2, p3, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 1101
    :cond_0
    iget-object p3, p0, Lcom/tkay/expressad/advanced/c/b;->j:Landroid/widget/ImageView;

    invoke-virtual {p3, p2}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 1103
    iget-object p2, p0, Lcom/tkay/expressad/advanced/c/b;->j:Landroid/widget/ImageView;

    invoke-virtual {p1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p1

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p3

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object p3

    const-string v0, "tkay_native_advanced_close_icon"

    const-string v1, "drawable"

    invoke-virtual {p1, v0, v1, p3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p2, p1}, Landroid/widget/ImageView;->setImageResource(I)V

    :cond_1
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/advanced/c/b;I)I
    .locals 0

    .line 51
    iput p1, p0, Lcom/tkay/expressad/advanced/c/b;->i:I

    return p1
.end method

.method private a(Landroid/view/View;)V
    .locals 1

    if-eqz p1, :cond_0

    .line 550
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->n:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method private static a(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V
    .locals 3

    if-eqz p0, :cond_0

    .line 582
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->e()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 583
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_0

    .line 584
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const/4 v2, 0x1

    .line 585
    invoke-static {p1, p0, p2, v1, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 590
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/tkay/expressad/advanced/c/b;)Z
    .locals 0

    .line 51
    iget-boolean p0, p0, Lcom/tkay/expressad/advanced/c/b;->h:Z

    return p0
.end method

.method static synthetic a(Lcom/tkay/expressad/advanced/c/b;Z)Z
    .locals 0

    .line 51
    iput-boolean p1, p0, Lcom/tkay/expressad/advanced/c/b;->m:Z

    return p1
.end method

.method static synthetic b(Lcom/tkay/expressad/advanced/c/b;)V
    .locals 1

    .line 5559
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->e:Lcom/tkay/expressad/advanced/d/d;

    if-eqz v0, :cond_0

    .line 5560
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/d/d;->c()V

    const/4 v0, 0x0

    .line 5561
    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->e:Lcom/tkay/expressad/advanced/d/d;

    :cond_0
    return-void
.end method

.method private b(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 11

    .line 403
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->s()Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez v0, :cond_2

    .line 405
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v10, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    .line 4605
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v3

    invoke-virtual {v3, v0}, Lcom/tkay/expressad/foundation/b/b;->b(Landroid/content/Context;)V

    .line 4606
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ag()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    .line 4627
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->ag()Ljava/lang/String;

    move-result-object v6

    const/4 v7, 0x0

    const/4 v8, 0x1

    sget v9, Lcom/tkay/expressad/a/a/a;->i:I

    move-object v3, v0

    move-object v4, p1

    move-object v5, v10

    invoke-static/range {v3 .. v9}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 4629
    :cond_0
    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v3

    if-eqz v3, :cond_1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/n;->o()[Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_1

    .line 4632
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/expressad/foundation/d/n;->o()[Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, p1, v10, v3, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    .line 406
    :cond_1
    invoke-virtual {p1, v1}, Lcom/tkay/expressad/foundation/d/c;->c(Z)V

    .line 407
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    const-string v2, "h5_native"

    invoke-static {v0, p1, v2}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    move v1, v2

    :goto_0
    if-eqz v1, :cond_3

    .line 414
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/advanced/c/b;->b(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 415
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    invoke-static {p1, v0, v1}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method private static b(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V
    .locals 8

    if-eqz p0, :cond_0

    .line 596
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->ai()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 597
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->ai()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x1

    sget v7, Lcom/tkay/expressad/a/a/a;->j:I

    move-object v1, p1

    move-object v2, p0

    move-object v3, p2

    invoke-static/range {v1 .. v7}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    .line 600
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_0
    :goto_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/foundation/d/c;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/tkay/expressad/advanced/c/b;->c:Lcom/tkay/expressad/foundation/d/c;

    return-object p0
.end method

.method private static c(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V
    .locals 8

    .line 605
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/b/b;->b(Landroid/content/Context;)V

    .line 606
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->ag()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 627
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->ag()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x0

    const/4 v6, 0x1

    sget v7, Lcom/tkay/expressad/a/a/a;->i:I

    move-object v1, p1

    move-object v2, p0

    move-object v3, p2

    invoke-static/range {v1 .. v7}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 629
    :cond_0
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->o()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 632
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->o()[Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {p1, p0, p2, v0, v1}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    :cond_1
    return-void
.end method

.method static synthetic d(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/tkay/expressad/advanced/c/b;->d:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    return-object p0
.end method

.method static synthetic e(Lcom/tkay/expressad/advanced/c/b;)Ljava/lang/String;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/tkay/expressad/advanced/c/b;->b:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic f(Lcom/tkay/expressad/advanced/c/b;)Lcom/tkay/expressad/advanced/d/d;
    .locals 0

    .line 51
    iget-object p0, p0, Lcom/tkay/expressad/advanced/c/b;->e:Lcom/tkay/expressad/advanced/d/d;

    return-object p0
.end method

.method private f()V
    .locals 5

    .line 95
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    .line 96
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->j:Landroid/widget/ImageView;

    sget-object v2, Landroid/widget/ImageView$ScaleType;->FIT_XY:Landroid/widget/ImageView$ScaleType;

    invoke-virtual {v1, v2}, Landroid/widget/ImageView;->setScaleType(Landroid/widget/ImageView$ScaleType;)V

    .line 97
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->j:Landroid/widget/ImageView;

    invoke-virtual {v1}, Landroid/widget/ImageView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v1

    check-cast v1, Landroid/widget/RelativeLayout$LayoutParams;

    if-nez v1, :cond_0

    .line 99
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    const/high16 v2, 0x41e80000    # 29.0f

    invoke-static {v0, v2}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v2

    const/high16 v3, 0x41800000    # 16.0f

    invoke-static {v0, v3}, Lcom/tkay/expressad/foundation/h/t;->b(Landroid/content/Context;F)I

    move-result v3

    invoke-direct {v1, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    .line 101
    :cond_0
    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/b;->j:Landroid/widget/ImageView;

    invoke-virtual {v2, v1}, Landroid/widget/ImageView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    .line 103
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->j:Landroid/widget/ImageView;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->a()Ljava/lang/String;

    move-result-object v2

    const-string v3, "tkay_native_advanced_close_icon"

    const-string v4, "drawable"

    invoke-virtual {v0, v3, v4, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/widget/ImageView;->setImageResource(I)V

    return-void
.end method

.method private g()V
    .locals 12

    .line 385
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->c:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->V()Z

    move-result v0

    if-nez v0, :cond_4

    .line 386
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->c:Lcom/tkay/expressad/foundation/d/c;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/c;->c(Z)V

    .line 387
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->c:Lcom/tkay/expressad/foundation/d/c;

    .line 3403
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->s()Z

    move-result v2

    const/4 v9, 0x0

    if-nez v2, :cond_2

    .line 3405
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v10

    iget-object v11, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    .line 3605
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2, v10}, Lcom/tkay/expressad/foundation/b/b;->b(Landroid/content/Context;)V

    .line 3606
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ag()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 3627
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ag()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    const/4 v7, 0x1

    sget v8, Lcom/tkay/expressad/a/a/a;->i:I

    move-object v2, v10

    move-object v3, v0

    move-object v4, v11

    invoke-static/range {v2 .. v8}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 3629
    :cond_0
    invoke-static {v11}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v2

    if-eqz v2, :cond_1

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/n;->o()[Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 3632
    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/n;->o()[Ljava/lang/String;

    move-result-object v2

    invoke-static {v10, v0, v11, v2, v9}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    .line 3406
    :cond_1
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/d/c;->c(Z)V

    .line 3407
    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    const-string v3, "h5_native"

    invoke-static {v2, v0, v3}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    goto :goto_0

    :cond_2
    move v1, v9

    :goto_0
    if-eqz v1, :cond_3

    .line 3414
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/advanced/c/b;->b(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 3415
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 390
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->e:Lcom/tkay/expressad/advanced/d/d;

    if-eqz v0, :cond_4

    .line 391
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/d/d;->a()V

    :cond_4
    return-void
.end method

.method private static h()V
    .locals 0

    return-void
.end method

.method private i()V
    .locals 1

    .line 559
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->e:Lcom/tkay/expressad/advanced/d/d;

    if-eqz v0, :cond_0

    .line 560
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/d/d;->c()V

    const/4 v0, 0x0

    .line 561
    iput-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->e:Lcom/tkay/expressad/advanced/d/d;

    :cond_0
    return-void
.end method

.method private static synthetic j()V
    .locals 0

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 112
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->c:Lcom/tkay/expressad/foundation/d/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 113
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->c:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final a(Lcom/tkay/expressad/advanced/d/c;)V
    .locals 0

    .line 91
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/b;->g:Lcom/tkay/expressad/advanced/d/c;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/advanced/d/d;)V
    .locals 0

    .line 108
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/b;->e:Lcom/tkay/expressad/advanced/d/d;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 1

    .line 535
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 542
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->e:Lcom/tkay/expressad/advanced/d/d;

    if-eqz v0, :cond_0

    .line 543
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/advanced/d/d;->a(Lcom/tkay/expressad/foundation/d/c;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;Z)V
    .locals 11

    if-nez p2, :cond_0

    return-void

    .line 231
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    new-instance v2, Lcom/tkay/expressad/advanced/c/b$4;

    invoke-direct {v2, p0, p2}, Lcom/tkay/expressad/advanced/c/b$4;-><init>(Lcom/tkay/expressad/advanced/c/b;Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/f/a;)V

    .line 287
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->H()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 289
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/f/b;->b()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 290
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/f/b;->b(Ljava/lang/String;)Lcom/tkay/expressad/widget/FeedBackButton;

    move-result-object v0

    if-eqz v0, :cond_3

    const/4 v1, 0x0

    .line 294
    :try_start_0
    invoke-virtual {v0}, Lcom/tkay/expressad/widget/FeedBackButton;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v2

    check-cast v2, Landroid/widget/RelativeLayout$LayoutParams;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    move-object v1, v2

    goto :goto_0

    :catch_0
    move-exception v2

    .line 296
    invoke-virtual {v2}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    if-nez v1, :cond_1

    .line 299
    new-instance v1, Landroid/widget/RelativeLayout$LayoutParams;

    sget v2, Lcom/tkay/expressad/foundation/f/b;->a:I

    sget v3, Lcom/tkay/expressad/foundation/f/b;->b:I

    invoke-direct {v1, v2, v3}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    :cond_1
    const/16 v2, 0xc

    .line 301
    invoke-virtual {v1, v2}, Landroid/widget/RelativeLayout$LayoutParams;->addRule(I)V

    .line 302
    invoke-virtual {v0}, Lcom/tkay/expressad/widget/FeedBackButton;->getParent()Landroid/view/ViewParent;

    move-result-object v2

    check-cast v2, Landroid/view/ViewGroup;

    if-eqz v2, :cond_2

    .line 304
    invoke-virtual {v2, v0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    .line 306
    :cond_2
    invoke-virtual {p2, v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    .line 311
    :cond_3
    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/c/b;->h:Z

    .line 1426
    iput-boolean v0, p0, Lcom/tkay/expressad/advanced/c/b;->h:Z

    .line 312
    iput-object p1, p0, Lcom/tkay/expressad/advanced/c/b;->c:Lcom/tkay/expressad/foundation/d/c;

    .line 313
    iput-object p2, p0, Lcom/tkay/expressad/advanced/c/b;->d:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    .line 314
    invoke-virtual {p2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getAdvancedNativeJSBridgeImpl()Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;

    move-result-object v0

    if-nez v0, :cond_4

    .line 316
    new-instance v0, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;

    invoke-virtual {p2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/b;->l:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V

    .line 317
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 318
    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 319
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->setCampaignList(Ljava/util/List;)V

    .line 321
    :cond_4
    iget-boolean v1, p0, Lcom/tkay/expressad/advanced/c/b;->h:Z

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->setAllowSkip(I)V

    .line 322
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->o:Lcom/tkay/expressad/advanced/d/a;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;->setNativeAdvancedBridgeListener(Lcom/tkay/expressad/advanced/d/a;)V

    .line 323
    invoke-virtual {p2, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setAdvancedNativeJSBridgeImpl(Lcom/tkay/expressad/advanced/js/NativeAdvancedJSBridgeImpl;)V

    .line 324
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->s()Z

    move-result v0

    if-nez v0, :cond_5

    .line 325
    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/c/b;->h:Z

    if-nez v0, :cond_6

    .line 326
    :cond_5
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->j:Landroid/widget/ImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    .line 329
    :cond_6
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->j:Landroid/widget/ImageView;

    if-eqz v0, :cond_7

    .line 1550
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->n:Landroid/view/View$OnClickListener;

    invoke-virtual {v0, v1}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 330
    :cond_7
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->j:Landroid/widget/ImageView;

    invoke-virtual {p2, v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setCloseView(Landroid/view/View;)V

    .line 331
    invoke-virtual {p2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getVisibility()I

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_8

    .line 332
    invoke-virtual {p2, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->setVisibility(I)V

    .line 334
    :cond_8
    invoke-virtual {p2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getAdvancedNativeWebview()Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/y;->a(Landroid/view/View;)Z

    move-result v0

    .line 335
    iget-object v2, p0, Lcom/tkay/expressad/advanced/c/b;->g:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v2, :cond_11

    if-nez v0, :cond_11

    invoke-virtual {v2}, Lcom/tkay/expressad/advanced/d/c;->c()Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    move-result-object v0

    if-eqz v0, :cond_11

    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->g:Lcom/tkay/expressad/advanced/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/d/c;->c()Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->getAlpha()F

    move-result v0

    const/high16 v2, 0x3f000000    # 0.5f

    cmpg-float v0, v0, v2

    if-ltz v0, :cond_11

    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->g:Lcom/tkay/expressad/advanced/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/d/c;->c()Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;->getVisibility()I

    move-result v0

    if-nez v0, :cond_11

    iget-boolean v0, p0, Lcom/tkay/expressad/advanced/c/b;->m:Z

    if-eqz v0, :cond_9

    goto/16 :goto_2

    .line 347
    :cond_9
    invoke-virtual {p2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->show()V

    .line 348
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object p3

    invoke-virtual {p2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p3, v0}, Lcom/tkay/expressad/foundation/b/b;->b(Landroid/content/Context;)V

    .line 349
    iget-object p3, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    invoke-virtual {p1, p3}, Lcom/tkay/expressad/foundation/d/c;->l(Ljava/lang/String;)V

    .line 350
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object p3

    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    invoke-virtual {p3, v0, p1}, Lcom/tkay/expressad/foundation/f/b;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;)V

    .line 351
    iget-object p3, p0, Lcom/tkay/expressad/advanced/c/b;->c:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p3, :cond_a

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->ay()Z

    move-result p3

    if-eqz p3, :cond_a

    if-eqz p2, :cond_a

    .line 352
    invoke-virtual {p2}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getAdvancedNativeWebview()Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    .line 358
    :try_start_1
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Lcom/tkay/expressad/advanced/a/c;->c(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p3

    .line 360
    invoke-virtual {p3}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 361
    iget-object p3, p0, Lcom/tkay/expressad/advanced/c/b;->c:Lcom/tkay/expressad/foundation/d/c;

    if-eqz p3, :cond_a

    .line 362
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    .line 363
    iget-object p3, p0, Lcom/tkay/expressad/advanced/c/b;->c:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    .line 364
    iget-object p3, p0, Lcom/tkay/expressad/advanced/c/b;->c:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    .line 2385
    :cond_a
    :goto_1
    iget-object p3, p0, Lcom/tkay/expressad/advanced/c/b;->c:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->V()Z

    move-result p3

    if-nez p3, :cond_f

    .line 2386
    iget-object p3, p0, Lcom/tkay/expressad/advanced/c/b;->c:Lcom/tkay/expressad/foundation/d/c;

    const/4 v0, 0x1

    invoke-virtual {p3, v0}, Lcom/tkay/expressad/foundation/d/c;->c(Z)V

    .line 2387
    iget-object p3, p0, Lcom/tkay/expressad/advanced/c/b;->c:Lcom/tkay/expressad/foundation/d/c;

    .line 2403
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->s()Z

    move-result v2

    if-nez v2, :cond_d

    .line 2405
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v9

    iget-object v10, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    .line 2605
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2, v9}, Lcom/tkay/expressad/foundation/b/b;->b(Landroid/content/Context;)V

    .line 2606
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->ag()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_b

    .line 2627
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->ag()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    const/4 v7, 0x1

    sget v8, Lcom/tkay/expressad/a/a/a;->i:I

    move-object v2, v9

    move-object v3, p3

    move-object v4, v10

    invoke-static/range {v2 .. v8}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;ZZI)V

    .line 2629
    :cond_b
    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_c

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v2

    if-eqz v2, :cond_c

    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/n;->o()[Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_c

    .line 2632
    invoke-virtual {p3}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/n;->o()[Ljava/lang/String;

    move-result-object v2

    invoke-static {v9, p3, v10, v2, v1}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    .line 2406
    :cond_c
    invoke-virtual {p3, v0}, Lcom/tkay/expressad/foundation/d/c;->c(Z)V

    .line 2407
    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    const-string v2, "h5_native"

    invoke-static {v1, p3, v2}, Lcom/tkay/expressad/foundation/g/a/f;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    move v1, v0

    :cond_d
    if-eqz v1, :cond_e

    .line 2414
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    invoke-static {p3, v0, v1}, Lcom/tkay/expressad/advanced/c/b;->b(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 2415
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    invoke-static {p3, v0, v1}, Lcom/tkay/expressad/advanced/c/b;->a(Lcom/tkay/expressad/foundation/d/c;Landroid/content/Context;Ljava/lang/String;)V

    .line 2390
    :cond_e
    iget-object p3, p0, Lcom/tkay/expressad/advanced/c/b;->e:Lcom/tkay/expressad/advanced/d/d;

    if-eqz p3, :cond_f

    .line 2391
    invoke-virtual {p3}, Lcom/tkay/expressad/advanced/d/d;->a()V

    .line 371
    :cond_f
    iget p3, p0, Lcom/tkay/expressad/advanced/c/b;->i:I

    const/4 v0, -0x1

    if-eq p3, v0, :cond_10

    .line 372
    invoke-virtual {p2, p3}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->changeCloseBtnState(I)V

    .line 377
    :cond_10
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->Z()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/tkay/expressad/advanced/a/c;->c(Ljava/lang/String;)V

    .line 380
    iget-object p1, p0, Lcom/tkay/expressad/advanced/c/b;->a:Landroid/os/Handler;

    const/4 p2, 0x2

    const-wide/16 v0, 0x3e8

    invoke-virtual {p1, p2, v0, v1}, Landroid/os/Handler;->sendEmptyMessageDelayed(IJ)Z

    return-void

    :cond_11
    :goto_2
    if-eqz p3, :cond_12

    .line 337
    new-instance p3, Lcom/tkay/expressad/advanced/c/b$5;

    invoke-direct {p3, p0, p1, p2}, Lcom/tkay/expressad/advanced/c/b$5;-><init>(Lcom/tkay/expressad/advanced/c/b;Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;)V

    const-wide/16 v0, 0xc8

    invoke-virtual {p2, p3, v0, v1}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_12
    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 426
    iput-boolean p1, p0, Lcom/tkay/expressad/advanced/c/b;->h:Z

    return-void
.end method

.method public final b()Lcom/tkay/expressad/advanced/d/a;
    .locals 1

    .line 224
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->o:Lcom/tkay/expressad/advanced/d/a;

    return-object v0
.end method

.method public final c()V
    .locals 2

    .line 637
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->e:Lcom/tkay/expressad/advanced/d/d;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 638
    iput-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->e:Lcom/tkay/expressad/advanced/d/d;

    .line 640
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->o:Lcom/tkay/expressad/advanced/d/a;

    if-eqz v0, :cond_1

    .line 641
    iput-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->o:Lcom/tkay/expressad/advanced/d/a;

    .line 643
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->n:Landroid/view/View$OnClickListener;

    if-eqz v0, :cond_2

    .line 644
    iput-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->n:Landroid/view/View$OnClickListener;

    .line 646
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->d:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    if-eqz v0, :cond_3

    .line 647
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->destroy()V

    .line 649
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->g:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_4

    .line 650
    iput-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->g:Lcom/tkay/expressad/advanced/d/c;

    .line 652
    :cond_4
    invoke-static {}, Lcom/tkay/expressad/foundation/f/b;->a()Lcom/tkay/expressad/foundation/f/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/advanced/c/b;->k:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/foundation/f/b;->c(Ljava/lang/String;)V

    return-void
.end method

.method public final d()V
    .locals 3

    .line 656
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->d:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    if-eqz v0, :cond_0

    sget-boolean v0, Lcom/tkay/expressad/foundation/f/b;->c:Z

    if-nez v0, :cond_0

    .line 657
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->d:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getAdvancedNativeWebview()Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 658
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->isDestroyed()Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "onViewAppeared"

    const-string v2, ""

    .line 659
    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/advanced/js/NativeAdvancedJsUtils;->sendEventToH5(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final e()V
    .locals 3

    .line 670
    iget-object v0, p0, Lcom/tkay/expressad/advanced/c/b;->d:Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;

    if-eqz v0, :cond_0

    .line 671
    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/view/TYNativeAdvancedView;->getAdvancedNativeWebview()Lcom/tkay/expressad/advanced/view/TYNativeAdvancedWebview;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 672
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->isDestroyed()Z

    move-result v1

    if-nez v1, :cond_0

    .line 673
    invoke-static {}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a()Lcom/tkay/expressad/atsignalcommon/windvane/j;

    const-string v1, "onViewDisappeared"

    const-string v2, ""

    invoke-static {v0, v1, v2}, Lcom/tkay/expressad/atsignalcommon/windvane/j;->a(Landroid/webkit/WebView;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
