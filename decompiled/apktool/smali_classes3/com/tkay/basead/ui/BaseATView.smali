.class public abstract Lcom/tkay/basead/ui/BaseATView;
.super Landroid/widget/RelativeLayout;


# instance fields
.field private a:Lcom/tkay/basead/a/a;

.field b:Ljava/lang/String;

.field c:Lcom/tkay/core/common/f/i;

.field d:Lcom/tkay/core/common/f/h;

.field e:Lcom/tkay/core/common/l/a/c;

.field f:Lcom/tkay/basead/a/c;

.field volatile g:Z

.field h:Z

.field i:I

.field j:I

.field k:I

.field l:I

.field m:I

.field n:I

.field o:I

.field p:I

.field q:Ljava/lang/String;

.field r:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;"
        }
    .end annotation
.end field

.field s:Landroid/view/View;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 106
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const-string p1, "BaseATView"

    .line 39
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseATView;->b:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)V
    .locals 1

    const-string v0, ""

    .line 102
    invoke-direct {p0, p1, p2, p3, v0}, Lcom/tkay/basead/ui/BaseATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;)V
    .locals 0

    .line 72
    invoke-direct {p0, p1}, Landroid/widget/RelativeLayout;-><init>(Landroid/content/Context;)V

    const-string p1, "BaseATView"

    .line 39
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseATView;->b:Ljava/lang/String;

    .line 74
    iput-object p2, p0, Lcom/tkay/basead/ui/BaseATView;->c:Lcom/tkay/core/common/f/i;

    .line 75
    iput-object p3, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    .line 76
    iput-object p4, p0, Lcom/tkay/basead/ui/BaseATView;->q:Ljava/lang/String;

    .line 78
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseATView;->r:Ljava/util/List;

    .line 80
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->L()Z

    move-result p1

    const/4 p2, 0x1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/tkay/basead/ui/BaseATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/j;->F()I

    move-result p1

    if-eq p1, p2, :cond_0

    .line 81
    new-instance p1, Lcom/tkay/basead/a/a;

    iget-object p3, p0, Lcom/tkay/basead/ui/BaseATView;->c:Lcom/tkay/core/common/f/i;

    new-instance p4, Lcom/tkay/basead/ui/BaseATView$1;

    invoke-direct {p4, p0}, Lcom/tkay/basead/ui/BaseATView$1;-><init>(Lcom/tkay/basead/ui/BaseATView;)V

    invoke-direct {p1, p0, p3, p4}, Lcom/tkay/basead/a/a;-><init>(Landroid/view/View;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/a/a$a;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseATView;->a:Lcom/tkay/basead/a/a;

    .line 94
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->d()V

    .line 95
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->a()V

    .line 97
    invoke-virtual {p0, p2}, Lcom/tkay/basead/ui/BaseATView;->setFocusable(Z)V

    .line 98
    invoke-virtual {p0, p2}, Lcom/tkay/basead/ui/BaseATView;->setClickable(Z)V

    return-void
.end method

.method private b()V
    .locals 6

    .line 224
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseATView;->g:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 227
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseATView;->g:Z

    .line 229
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v2, v1, Lcom/tkay/core/common/f/r;

    if-eqz v2, :cond_1

    .line 230
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/basead/f/a/b;->a(Landroid/content/Context;)Lcom/tkay/basead/f/a/b;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v2, Lcom/tkay/core/common/f/r;

    invoke-virtual {v1, v2}, Lcom/tkay/basead/f/a/b;->a(Lcom/tkay/core/common/f/r;)V

    goto :goto_0

    .line 231
    :cond_1
    instance-of v1, v1, Lcom/tkay/core/common/f/z;

    if-eqz v1, :cond_2

    .line 232
    invoke-static {}, Lcom/tkay/basead/d/c/c;->a()Lcom/tkay/basead/d/c/c;

    move-result-object v1

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/basead/ui/BaseATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v4, v4, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    invoke-static {v3, v4}, Lcom/tkay/basead/d/c/c;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    iget-object v5, p0, Lcom/tkay/basead/ui/BaseATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v5, v5, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1, v2, v3, v4, v5}, Lcom/tkay/basead/d/c/c;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/j;)V

    .line 235
    :cond_2
    :goto_0
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v1, v1, Lcom/tkay/core/common/f/z;

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATView;->c:Lcom/tkay/core/common/f/i;

    iget v1, v1, Lcom/tkay/core/common/f/i;->f:I

    const/16 v2, 0x43

    if-ne v1, v2, :cond_4

    .line 236
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/z;

    invoke-virtual {v1, v0, v0}, Lcom/tkay/core/common/f/z;->a(ZZ)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_3

    .line 237
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/d/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/c;

    move-result-object v1

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3, v2, v0}, Lcom/tkay/core/common/d/c;->a(Ljava/lang/String;II)V

    .line 240
    :cond_3
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v1, Lcom/tkay/core/common/f/z;

    invoke-virtual {v1, v2, v0}, Lcom/tkay/core/common/f/z;->a(ZZ)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 241
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/d/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/a;

    move-result-object v1

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->q()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3, v2, v0}, Lcom/tkay/core/common/d/a;->a(Ljava/lang/String;II)V

    .line 245
    :cond_4
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->e()V

    .line 247
    invoke-direct {p0}, Lcom/tkay/basead/ui/BaseATView;->o()V

    return-void
.end method

.method private b(Landroid/view/View;)V
    .locals 0

    .line 355
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseATView;->s:Landroid/view/View;

    return-void
.end method

.method private static c(I)I
    .locals 5

    .line 379
    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    if-lez p0, :cond_0

    int-to-double v1, p0

    const-wide v3, 0x3fb999999999999aL    # 0.1

    mul-double/2addr v3, v1

    double-to-int p0, v3

    const-wide v3, 0x3feccccccccccccdL    # 0.9

    mul-double/2addr v1, v3

    double-to-int v1, v1

    sub-int/2addr v1, p0

    add-int/lit8 v1, v1, 0x1

    .line 383
    invoke-virtual {v0, v1}, Ljava/util/Random;->nextInt(I)I

    move-result v0

    add-int/2addr v0, p0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private c()V
    .locals 4

    .line 251
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v0, v0, Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->c:Lcom/tkay/core/common/f/i;

    iget v0, v0, Lcom/tkay/core/common/f/i;->f:I

    const/16 v1, 0x43

    if-ne v0, v1, :cond_1

    .line 252
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v0, Lcom/tkay/core/common/f/z;

    const/4 v1, 0x1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/f/z;->a(ZZ)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 253
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/d/c;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/c;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3, v1, v2}, Lcom/tkay/core/common/d/c;->a(Ljava/lang/String;II)V

    .line 255
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v0, Lcom/tkay/core/common/f/z;

    invoke-virtual {v0, v2, v2}, Lcom/tkay/core/common/f/z;->a(ZZ)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 256
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/d/b;->a(Landroid/content/Context;)Lcom/tkay/core/common/d/a;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/h;->q()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v3, v1, v2}, Lcom/tkay/core/common/d/a;->a(Ljava/lang/String;II)V

    :cond_1
    return-void
.end method

.method private o()V
    .locals 1

    .line 336
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->a:Lcom/tkay/basead/a/a;

    if-eqz v0, :cond_0

    .line 337
    invoke-virtual {v0}, Lcom/tkay/basead/a/a;->a()V

    :cond_0
    return-void
.end method


# virtual methods
.method protected a(Lcom/tkay/basead/ui/a;I)F
    .locals 2

    const/high16 v0, 0x3f800000    # 1.0f

    if-eqz p1, :cond_3

    const/4 v1, 0x2

    if-eq p2, v1, :cond_2

    const/4 v1, 0x3

    if-eq p2, v1, :cond_1

    const/4 v1, 0x4

    if-eq p2, v1, :cond_0

    goto :goto_1

    :cond_0
    const/high16 p2, 0x3f000000    # 0.5f

    goto :goto_0

    :cond_1
    const/high16 p2, 0x3f400000    # 0.75f

    goto :goto_0

    :cond_2
    const/high16 p2, 0x3fc00000    # 1.5f

    :goto_0
    move v0, p2

    .line 410
    :goto_1
    invoke-interface {p1, v0}, Lcom/tkay/basead/ui/a;->setClickAreaScaleFactor(F)V

    :cond_3
    return v0
.end method

.method protected abstract a()V
.end method

.method protected abstract a(I)V
.end method

.method protected final a(ILjava/lang/Runnable;)V
    .locals 2

    if-lez p1, :cond_0

    .line 198
    new-instance v0, Lcom/tkay/core/common/l/a/c;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->getContext()Landroid/content/Context;

    invoke-direct {v0, p1}, Lcom/tkay/core/common/l/a/c;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->e:Lcom/tkay/core/common/l/a/c;

    goto :goto_0

    .line 200
    :cond_0
    new-instance v0, Lcom/tkay/core/common/l/a/c;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->getContext()Landroid/content/Context;

    invoke-direct {v0}, Lcom/tkay/core/common/l/a/c;-><init>()V

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->e:Lcom/tkay/core/common/l/a/c;

    .line 203
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->e:Lcom/tkay/core/common/l/a/c;

    new-instance v1, Lcom/tkay/basead/ui/BaseATView$3;

    invoke-direct {v1, p0, p2, p1}, Lcom/tkay/basead/ui/BaseATView$3;-><init>(Lcom/tkay/basead/ui/BaseATView;Ljava/lang/Runnable;I)V

    invoke-virtual {v0, p0, v1}, Lcom/tkay/core/common/l/a/c;->a(Landroid/view/View;Lcom/tkay/core/common/l/a/b;)V

    return-void
.end method

.method protected final a(Landroid/view/View;)V
    .locals 8

    const/4 v0, 0x2

    new-array v0, v0, [I

    .line 360
    invoke-virtual {p1, v0}, Landroid/view/View;->getLocationInWindow([I)V

    const/4 v1, 0x0

    .line 361
    aget v1, v0, v1

    const/4 v2, 0x1

    .line 362
    aget v0, v0, v2

    .line 363
    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result v2

    .line 364
    invoke-virtual {p1}, Landroid/view/View;->getHeight()I

    move-result p1

    .line 365
    invoke-static {v2}, Lcom/tkay/basead/ui/BaseATView;->c(I)I

    move-result v2

    .line 366
    invoke-static {p1}, Lcom/tkay/basead/ui/BaseATView;->c(I)I

    move-result p1

    add-int v3, v1, v2

    .line 368
    iput v3, p0, Lcom/tkay/basead/ui/BaseATView;->i:I

    add-int v4, v0, p1

    .line 369
    iput v4, p0, Lcom/tkay/basead/ui/BaseATView;->j:I

    .line 370
    iput v2, p0, Lcom/tkay/basead/ui/BaseATView;->m:I

    .line 371
    iput p1, p0, Lcom/tkay/basead/ui/BaseATView;->n:I

    .line 372
    invoke-static {}, Ljava/lang/Math;->random()D

    move-result-wide v4

    const-wide/high16 v6, 0x402e000000000000L    # 15.0

    mul-double/2addr v4, v6

    double-to-int p1, v4

    add-int/2addr v3, p1

    iput v3, p0, Lcom/tkay/basead/ui/BaseATView;->k:I

    add-int/2addr v2, v0

    .line 373
    invoke-static {}, Ljava/lang/Math;->random()D

    move-result-wide v3

    mul-double/2addr v3, v6

    double-to-int p1, v3

    add-int/2addr v2, p1

    iput v2, p0, Lcom/tkay/basead/ui/BaseATView;->l:I

    .line 374
    iget p1, p0, Lcom/tkay/basead/ui/BaseATView;->k:I

    sub-int/2addr p1, v1

    iput p1, p0, Lcom/tkay/basead/ui/BaseATView;->o:I

    sub-int/2addr v2, v0

    .line 375
    iput v2, p0, Lcom/tkay/basead/ui/BaseATView;->p:I

    return-void
.end method

.method protected abstract a(Z)V
.end method

.method protected b(I)V
    .locals 4

    .line 133
    invoke-direct {p0}, Lcom/tkay/basead/ui/BaseATView;->b()V

    .line 135
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->k()V

    .line 137
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->f:Lcom/tkay/basead/a/c;

    if-nez v0, :cond_0

    .line 138
    new-instance v0, Lcom/tkay/basead/a/c;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/basead/a/c;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->f:Lcom/tkay/basead/a/c;

    .line 141
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->f:Lcom/tkay/basead/a/c;

    invoke-virtual {v0}, Lcom/tkay/basead/a/c;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 145
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->f:Lcom/tkay/basead/a/c;

    new-instance v1, Lcom/tkay/basead/ui/BaseATView$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/basead/ui/BaseATView$2;-><init>(Lcom/tkay/basead/ui/BaseATView;I)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/a/c$b;)V

    .line 167
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->i()Lcom/tkay/basead/c/i;

    move-result-object p1

    .line 168
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->j()Lcom/tkay/basead/c/a;

    move-result-object v0

    iput-object v0, p1, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    .line 170
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->f:Lcom/tkay/basead/a/c;

    invoke-virtual {v0, p1}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/c/i;)V

    return-void
.end method

.method protected d()V
    .locals 0

    return-void
.end method

.method protected destroy()V
    .locals 1

    .line 274
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->k()V

    .line 276
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->f:Lcom/tkay/basead/a/c;

    if-eqz v0, :cond_0

    .line 277
    invoke-virtual {v0}, Lcom/tkay/basead/a/c;->d()V

    .line 281
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->e:Lcom/tkay/core/common/l/a/c;

    if-eqz v0, :cond_1

    .line 282
    invoke-virtual {v0}, Lcom/tkay/core/common/l/a/c;->b()V

    :cond_1
    return-void
.end method

.method public dispatchTouchEvent(Landroid/view/MotionEvent;)Z
    .locals 2

    .line 293
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getAction()I

    move-result v0

    if-eqz v0, :cond_1

    const/4 v1, 0x1

    if-eq v0, v1, :cond_0

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 303
    :cond_0
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseATView;->k:I

    .line 304
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseATView;->l:I

    .line 306
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseATView;->o:I

    .line 307
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseATView;->p:I

    goto :goto_0

    .line 295
    :cond_1
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawX()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseATView;->i:I

    .line 296
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getRawY()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseATView;->j:I

    .line 298
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getX()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseATView;->m:I

    .line 299
    invoke-virtual {p1}, Landroid/view/MotionEvent;->getY()F

    move-result v0

    float-to-int v0, v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseATView;->n:I

    .line 311
    :goto_0
    invoke-super {p0, p1}, Landroid/widget/RelativeLayout;->dispatchTouchEvent(Landroid/view/MotionEvent;)Z

    move-result p1

    return p1
.end method

.method protected abstract e()V
.end method

.method protected f()V
    .locals 0

    return-void
.end method

.method protected g()V
    .locals 0

    return-void
.end method

.method protected declared-synchronized h()V
    .locals 1

    monitor-enter p0

    .line 128
    :try_start_0
    invoke-direct {p0}, Lcom/tkay/basead/ui/BaseATView;->b()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 129
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method protected i()Lcom/tkay/basead/c/i;
    .locals 3

    .line 315
    new-instance v0, Lcom/tkay/basead/c/i;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v2, ""

    invoke-direct {v0, v1, v2}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 316
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->getWidth()I

    move-result v1

    iput v1, v0, Lcom/tkay/basead/c/i;->e:I

    .line 317
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->getHeight()I

    move-result v1

    iput v1, v0, Lcom/tkay/basead/c/i;->f:I

    return-object v0
.end method

.method protected final j()Lcom/tkay/basead/c/a;
    .locals 2

    .line 322
    new-instance v0, Lcom/tkay/basead/c/a;

    invoke-direct {v0}, Lcom/tkay/basead/c/a;-><init>()V

    .line 323
    iget v1, p0, Lcom/tkay/basead/ui/BaseATView;->i:I

    iput v1, v0, Lcom/tkay/basead/c/a;->a:I

    .line 324
    iget v1, p0, Lcom/tkay/basead/ui/BaseATView;->j:I

    iput v1, v0, Lcom/tkay/basead/c/a;->b:I

    .line 325
    iget v1, p0, Lcom/tkay/basead/ui/BaseATView;->k:I

    iput v1, v0, Lcom/tkay/basead/c/a;->c:I

    .line 326
    iget v1, p0, Lcom/tkay/basead/ui/BaseATView;->l:I

    iput v1, v0, Lcom/tkay/basead/c/a;->d:I

    .line 328
    iget v1, p0, Lcom/tkay/basead/ui/BaseATView;->m:I

    iput v1, v0, Lcom/tkay/basead/c/a;->e:I

    .line 329
    iget v1, p0, Lcom/tkay/basead/ui/BaseATView;->n:I

    iput v1, v0, Lcom/tkay/basead/c/a;->f:I

    .line 330
    iget v1, p0, Lcom/tkay/basead/ui/BaseATView;->o:I

    iput v1, v0, Lcom/tkay/basead/c/a;->g:I

    .line 331
    iget v1, p0, Lcom/tkay/basead/ui/BaseATView;->p:I

    iput v1, v0, Lcom/tkay/basead/c/a;->h:I

    return-object v0
.end method

.method protected final k()V
    .locals 1

    .line 342
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->a:Lcom/tkay/basead/a/a;

    if-eqz v0, :cond_0

    .line 343
    invoke-virtual {v0}, Lcom/tkay/basead/a/a;->b()V

    const/4 v0, 0x0

    .line 344
    iput-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->a:Lcom/tkay/basead/a/a;

    :cond_0
    return-void
.end method

.method protected final l()V
    .locals 1

    .line 349
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->a:Lcom/tkay/basead/a/a;

    if-eqz v0, :cond_0

    .line 350
    invoke-virtual {v0}, Lcom/tkay/basead/a/a;->c()V

    :cond_0
    return-void
.end method

.method protected m()Z
    .locals 2

    .line 389
    invoke-static {}, Lcom/tkay/expressad/shake/a;->a()Lcom/tkay/expressad/shake/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/shake/a;->b()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->c:Lcom/tkay/core/common/f/i;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->M()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method protected final n()Z
    .locals 1

    .line 420
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->d:Lcom/tkay/core/common/f/h;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method protected onAttachedToWindow()V
    .locals 0

    .line 269
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onAttachedToWindow()V

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 0

    .line 263
    invoke-super {p0}, Landroid/widget/RelativeLayout;->onDetachedFromWindow()V

    .line 264
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseATView;->k()V

    return-void
.end method
