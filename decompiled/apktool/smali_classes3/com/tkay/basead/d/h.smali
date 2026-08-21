.class public Lcom/tkay/basead/d/h;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/d/h$a;
    }
.end annotation


# instance fields
.field a:Landroid/content/Context;

.field b:Lcom/tkay/basead/e/a;

.field c:Lcom/tkay/core/common/l/a/c;

.field d:Lcom/tkay/basead/a/c;

.field e:Landroid/view/View;

.field volatile f:Z

.field g:Lcom/tkay/core/common/f/z;

.field h:Lcom/tkay/core/common/f/i;

.field i:Z

.field j:Ljava/lang/String;

.field k:Lcom/tkay/expressad/advanced/d/c;

.field l:Lcom/tkay/basead/ui/BaseMediaATView;

.field m:Landroid/view/View$OnClickListener;

.field n:I

.field o:I

.field p:Lcom/tkay/basead/a/a;

.field q:Lcom/tkay/basead/ui/OwnNativeATView;

.field private final r:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/z;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/a/g;)V
    .locals 1

    .line 187
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 49
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/d/h;->r:Ljava/lang/String;

    .line 73
    new-instance v0, Lcom/tkay/basead/d/h$1;

    invoke-direct {v0, p0}, Lcom/tkay/basead/d/h$1;-><init>(Lcom/tkay/basead/d/h;)V

    iput-object v0, p0, Lcom/tkay/basead/d/h;->m:Landroid/view/View$OnClickListener;

    .line 188
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/d/h;->a:Landroid/content/Context;

    .line 189
    iput-object p2, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    .line 190
    iput-object p3, p0, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    .line 192
    instance-of p1, p4, Lcom/tkay/expressad/advanced/d/c;

    if-eqz p1, :cond_0

    .line 193
    check-cast p4, Lcom/tkay/expressad/advanced/d/c;

    iput-object p4, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    .line 194
    new-instance p1, Lcom/tkay/basead/d/h$3;

    invoke-direct {p1, p0}, Lcom/tkay/basead/d/h$3;-><init>(Lcom/tkay/basead/d/h;)V

    invoke-virtual {p4, p1}, Lcom/tkay/expressad/advanced/d/c;->a(Lcom/tkay/expressad/out/i;)V

    :cond_0
    return-void
.end method

.method private static a(I)I
    .locals 5

    .line 174
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

    .line 178
    invoke-virtual {v0, v1}, Ljava/util/Random;->nextInt(I)I

    move-result v0

    add-int/2addr v0, p0

    return v0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private a(Landroid/view/View;Landroid/view/View$OnClickListener;)V
    .locals 2

    .line 555
    instance-of v0, p1, Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    .line 556
    check-cast p1, Landroid/view/ViewGroup;

    const/4 v0, 0x0

    .line 557
    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v1

    if-ge v0, v1, :cond_0

    .line 558
    invoke-virtual {p1, v0}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v1

    .line 559
    invoke-direct {p0, v1, p2}, Lcom/tkay/basead/d/h;->a(Landroid/view/View;Landroid/view/View$OnClickListener;)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    return-void

    .line 562
    :cond_1
    invoke-virtual {p1, p2}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method private a(Landroid/view/View;[Landroid/view/View;)V
    .locals 3

    .line 672
    instance-of v0, p1, Landroid/view/ViewGroup;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    .line 673
    check-cast p1, Landroid/view/ViewGroup;

    .line 674
    :goto_0
    invoke-virtual {p1}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v0

    if-ge v1, v0, :cond_0

    .line 675
    invoke-virtual {p1, v1}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    .line 676
    invoke-direct {p0, v0, p2}, Lcom/tkay/basead/d/h;->a(Landroid/view/View;[Landroid/view/View;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-void

    .line 679
    :cond_1
    instance-of v0, p1, Landroid/widget/Button;

    if-nez v0, :cond_2

    instance-of v0, p1, Landroid/widget/TextView;

    if-eqz v0, :cond_3

    .line 680
    :cond_2
    move-object v0, p1

    check-cast v0, Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getText()Ljava/lang/CharSequence;

    move-result-object v0

    invoke-interface {v0}, Ljava/lang/CharSequence;->toString()Ljava/lang/String;

    move-result-object v0

    .line 681
    iget-object v2, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/z;->w()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 682
    aput-object p1, p2, v1

    :cond_3
    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/d/h;)V
    .locals 0

    .line 48
    invoke-direct {p0}, Lcom/tkay/basead/d/h;->o()V

    return-void
.end method

.method private a([Lcom/tkay/basead/ui/OwnNativeATView;Landroid/view/View;)V
    .locals 2

    .line 542
    instance-of v0, p2, Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    .line 543
    instance-of v0, p2, Lcom/tkay/basead/ui/OwnNativeATView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 544
    move-object v0, p2

    check-cast v0, Lcom/tkay/basead/ui/OwnNativeATView;

    aput-object v0, p1, v1

    .line 546
    :cond_0
    check-cast p2, Landroid/view/ViewGroup;

    .line 547
    :goto_0
    invoke-virtual {p2}, Landroid/view/ViewGroup;->getChildCount()I

    move-result v0

    if-ge v1, v0, :cond_1

    .line 548
    invoke-virtual {p2, v1}, Landroid/view/ViewGroup;->getChildAt(I)Landroid/view/View;

    move-result-object v0

    .line 549
    invoke-direct {p0, p1, v0}, Lcom/tkay/basead/d/h;->a([Lcom/tkay/basead/ui/OwnNativeATView;Landroid/view/View;)V

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method private b(Landroid/content/Context;ZZLcom/tkay/basead/ui/BaseMediaATView$a;)Landroid/view/View;
    .locals 7

    .line 387
    new-instance v5, Lcom/tkay/basead/d/h$a;

    invoke-direct {v5, p4}, Lcom/tkay/basead/d/h$a;-><init>(Lcom/tkay/basead/ui/BaseMediaATView$a;)V

    .line 389
    new-instance p4, Lcom/tkay/basead/ui/OwnNativeATView;

    iget-object v0, p0, Lcom/tkay/basead/d/h;->a:Landroid/content/Context;

    invoke-direct {p4, v0}, Lcom/tkay/basead/ui/OwnNativeATView;-><init>(Landroid/content/Context;)V

    if-eqz p2, :cond_0

    .line 392
    iput-object p4, p0, Lcom/tkay/basead/d/h;->q:Lcom/tkay/basead/ui/OwnNativeATView;

    .line 394
    new-instance v6, Lcom/tkay/basead/ui/MraidMediaView;

    iget-object v2, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    iget-object v3, p0, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    move-object v0, v6

    move-object v1, p1

    move v4, p3

    invoke-direct/range {v0 .. v5}, Lcom/tkay/basead/ui/MraidMediaView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;ZLcom/tkay/basead/ui/BaseMediaATView$a;)V

    iput-object v6, p0, Lcom/tkay/basead/d/h;->l:Lcom/tkay/basead/ui/BaseMediaATView;

    .line 395
    check-cast v6, Lcom/tkay/basead/ui/MraidMediaView;

    new-instance p1, Lcom/tkay/basead/d/h$4;

    invoke-direct {p1, p0}, Lcom/tkay/basead/d/h$4;-><init>(Lcom/tkay/basead/d/h;)V

    invoke-virtual {v6, p1}, Lcom/tkay/basead/ui/MraidMediaView;->setMraidWebViewListener(Lcom/tkay/basead/ui/MraidMediaView$a;)V

    goto :goto_0

    .line 423
    :cond_0
    new-instance v6, Lcom/tkay/basead/ui/MediaATView;

    iget-object v2, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    iget-object v3, p0, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    move-object v0, v6

    move-object v1, p1

    move v4, p3

    invoke-direct/range {v0 .. v5}, Lcom/tkay/basead/ui/MediaATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;ZLcom/tkay/basead/ui/BaseMediaATView$a;)V

    iput-object v6, p0, Lcom/tkay/basead/d/h;->l:Lcom/tkay/basead/ui/BaseMediaATView;

    .line 425
    :goto_0
    iget-object p1, p0, Lcom/tkay/basead/d/h;->l:Lcom/tkay/basead/ui/BaseMediaATView;

    iget p3, p0, Lcom/tkay/basead/d/h;->n:I

    iget v0, p0, Lcom/tkay/basead/d/h;->o:I

    invoke-virtual {p1, p3, v0}, Lcom/tkay/basead/ui/BaseMediaATView;->init(II)V

    .line 427
    iget-object p1, p0, Lcom/tkay/basead/d/h;->l:Lcom/tkay/basead/ui/BaseMediaATView;

    new-instance p3, Landroid/widget/FrameLayout$LayoutParams;

    iget-object v0, p0, Lcom/tkay/basead/d/h;->l:Lcom/tkay/basead/ui/BaseMediaATView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseMediaATView;->getMediaViewWidth()I

    move-result v0

    iget-object v1, p0, Lcom/tkay/basead/d/h;->l:Lcom/tkay/basead/ui/BaseMediaATView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/BaseMediaATView;->getMediaViewHeight()I

    move-result v1

    invoke-direct {p3, v0, v1}, Landroid/widget/FrameLayout$LayoutParams;-><init>(II)V

    invoke-virtual {p4, p1, p3}, Lcom/tkay/basead/ui/OwnNativeATView;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    if-eqz p2, :cond_1

    .line 431
    invoke-direct {p0}, Lcom/tkay/basead/d/h;->q()V

    goto :goto_1

    .line 433
    :cond_1
    iget-object p1, p0, Lcom/tkay/basead/d/h;->l:Lcom/tkay/basead/ui/BaseMediaATView;

    invoke-virtual {p1}, Lcom/tkay/basead/ui/BaseMediaATView;->getClickViews()Ljava/util/List;

    move-result-object p1

    invoke-virtual {p0, p4, p1}, Lcom/tkay/basead/d/h;->a(Landroid/view/View;Ljava/util/List;)V

    :goto_1
    return-object p4
.end method

.method private static c(Landroid/view/View;)Lcom/tkay/basead/c/a;
    .locals 8

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    const/4 v0, 0x2

    new-array v0, v0, [I

    .line 152
    invoke-virtual {p0, v0}, Landroid/view/View;->getLocationInWindow([I)V

    const/4 v1, 0x0

    .line 153
    aget v1, v0, v1

    const/4 v2, 0x1

    .line 154
    aget v0, v0, v2

    .line 155
    invoke-virtual {p0}, Landroid/view/View;->getWidth()I

    move-result v2

    .line 156
    invoke-virtual {p0}, Landroid/view/View;->getHeight()I

    move-result p0

    .line 157
    invoke-static {v2}, Lcom/tkay/basead/d/h;->a(I)I

    move-result v2

    .line 158
    invoke-static {p0}, Lcom/tkay/basead/d/h;->a(I)I

    move-result p0

    .line 160
    new-instance v3, Lcom/tkay/basead/c/a;

    invoke-direct {v3}, Lcom/tkay/basead/c/a;-><init>()V

    add-int v4, v1, v2

    .line 161
    iput v4, v3, Lcom/tkay/basead/c/a;->a:I

    add-int v4, v0, p0

    .line 162
    iput v4, v3, Lcom/tkay/basead/c/a;->b:I

    .line 163
    iput v2, v3, Lcom/tkay/basead/c/a;->e:I

    .line 164
    iput p0, v3, Lcom/tkay/basead/c/a;->f:I

    .line 166
    iget p0, v3, Lcom/tkay/basead/c/a;->a:I

    invoke-static {}, Ljava/lang/Math;->random()D

    move-result-wide v4

    const-wide/high16 v6, 0x402e000000000000L    # 15.0

    mul-double/2addr v4, v6

    double-to-int v2, v4

    add-int/2addr p0, v2

    iput p0, v3, Lcom/tkay/basead/c/a;->c:I

    .line 167
    iget p0, v3, Lcom/tkay/basead/c/a;->b:I

    invoke-static {}, Ljava/lang/Math;->random()D

    move-result-wide v4

    mul-double/2addr v4, v6

    double-to-int v2, v4

    add-int/2addr p0, v2

    iput p0, v3, Lcom/tkay/basead/c/a;->d:I

    .line 168
    iget p0, v3, Lcom/tkay/basead/c/a;->c:I

    sub-int/2addr p0, v1

    iput p0, v3, Lcom/tkay/basead/c/a;->g:I

    .line 169
    iget p0, v3, Lcom/tkay/basead/c/a;->d:I

    sub-int/2addr p0, v0

    iput p0, v3, Lcom/tkay/basead/c/a;->h:I

    return-object v3
.end method

.method private d(Landroid/view/View;)Z
    .locals 4

    const/4 v0, 0x1

    new-array v1, v0, [Lcom/tkay/basead/ui/OwnNativeATView;

    .line 511
    invoke-direct {p0, v1, p1}, Lcom/tkay/basead/d/h;->a([Lcom/tkay/basead/ui/OwnNativeATView;Landroid/view/View;)V

    const/4 p1, 0x0

    .line 512
    aget-object v2, v1, p1

    const-string v3, "tkay"

    if-nez v2, :cond_0

    const-string v0, "Register View don\'t contain OwnNativeAdView."

    .line 513
    invoke-static {v3, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return p1

    .line 517
    :cond_0
    aget-object v2, v1, p1

    invoke-virtual {v2}, Lcom/tkay/basead/ui/OwnNativeATView;->getChildCount()I

    move-result v2

    if-nez v2, :cond_1

    const-string v0, "OwnNativeAdView View don\'t contain any child views."

    .line 518
    invoke-static {v3, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    return p1

    .line 522
    :cond_1
    aget-object p1, v1, p1

    iput-object p1, p0, Lcom/tkay/basead/d/h;->q:Lcom/tkay/basead/ui/OwnNativeATView;

    .line 535
    invoke-direct {p0}, Lcom/tkay/basead/d/h;->q()V

    return v0
.end method

.method private m()V
    .locals 1

    .line 287
    iget-object v0, p0, Lcom/tkay/basead/d/h;->p:Lcom/tkay/basead/a/a;

    if-eqz v0, :cond_0

    .line 288
    invoke-virtual {v0}, Lcom/tkay/basead/a/a;->a()V

    :cond_0
    return-void
.end method

.method private n()V
    .locals 1

    .line 300
    iget-object v0, p0, Lcom/tkay/basead/d/h;->p:Lcom/tkay/basead/a/a;

    if-eqz v0, :cond_0

    .line 301
    invoke-virtual {v0}, Lcom/tkay/basead/a/a;->b()V

    const/4 v0, 0x0

    .line 302
    iput-object v0, p0, Lcom/tkay/basead/d/h;->p:Lcom/tkay/basead/a/a;

    :cond_0
    return-void
.end method

.method private o()V
    .locals 5

    .line 608
    iget-boolean v0, p0, Lcom/tkay/basead/d/h;->f:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 612
    iput-boolean v0, p0, Lcom/tkay/basead/d/h;->f:Z

    .line 621
    iget-boolean v0, p0, Lcom/tkay/basead/d/h;->i:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->g()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/d/h;->l:Lcom/tkay/basead/ui/BaseMediaATView;

    instance-of v1, v0, Lcom/tkay/basead/ui/MraidMediaView;

    if-eqz v1, :cond_1

    .line 622
    check-cast v0, Lcom/tkay/basead/ui/MraidMediaView;

    iget-boolean v1, p0, Lcom/tkay/basead/d/h;->i:Z

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MraidMediaView;->fireAudioVolumeChange(Z)V

    .line 625
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    instance-of v0, v0, Lcom/tkay/core/common/f/y;

    if-eqz v0, :cond_2

    .line 626
    invoke-static {}, Lcom/tkay/basead/d/c/c;->a()Lcom/tkay/basead/d/c/c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/d/h;->a:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    iget-object v3, v3, Lcom/tkay/core/common/f/i;->c:Ljava/lang/String;

    invoke-static {v2, v3}, Lcom/tkay/basead/d/c/c;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    iget-object v4, p0, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    iget-object v4, v4, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/basead/d/c/c;->a(Landroid/content/Context;Ljava/lang/String;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/j;)V

    .line 628
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Lcom/tkay/expressad/advanced/d/c;->c()Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    move-result-object v0

    goto :goto_0

    :cond_3
    iget-object v0, p0, Lcom/tkay/basead/d/h;->q:Lcom/tkay/basead/ui/OwnNativeATView;

    .line 630
    :goto_0
    iget-object v1, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/z;->g()Z

    move-result v1

    if-eqz v1, :cond_4

    .line 631
    iget-object v0, p0, Lcom/tkay/basead/d/h;->l:Lcom/tkay/basead/ui/BaseMediaATView;

    :cond_4
    if-eqz v0, :cond_5

    .line 635
    new-instance v1, Lcom/tkay/basead/c/i;

    iget-object v2, p0, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v3, ""

    invoke-direct {v1, v2, v3}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 636
    invoke-virtual {v0}, Landroid/view/View;->getHeight()I

    move-result v2

    iput v2, v1, Lcom/tkay/basead/c/i;->f:I

    .line 637
    invoke-virtual {v0}, Landroid/view/View;->getWidth()I

    move-result v0

    iput v0, v1, Lcom/tkay/basead/c/i;->e:I

    const/16 v0, 0x8

    .line 638
    iget-object v2, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    invoke-static {v0, v2, v1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 639
    iget-object v0, p0, Lcom/tkay/basead/d/h;->b:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_5

    .line 640
    invoke-interface {v0}, Lcom/tkay/basead/e/a;->onAdShow()V

    .line 648
    :cond_5
    invoke-direct {p0}, Lcom/tkay/basead/d/h;->m()V

    return-void
.end method

.method private p()Landroid/view/View;
    .locals 3

    .line 654
    iget-object v0, p0, Lcom/tkay/basead/d/h;->l:Lcom/tkay/basead/ui/BaseMediaATView;

    if-eqz v0, :cond_0

    .line 655
    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseMediaATView;->getMonitorClickView()Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    const/4 v0, 0x1

    new-array v0, v0, [Landroid/view/View;

    .line 662
    iget-object v1, p0, Lcom/tkay/basead/d/h;->q:Lcom/tkay/basead/ui/OwnNativeATView;

    invoke-direct {p0, v1, v0}, Lcom/tkay/basead/d/h;->a(Landroid/view/View;[Landroid/view/View;)V

    const/4 v1, 0x0

    .line 663
    aget-object v2, v0, v1

    if-eqz v2, :cond_1

    .line 664
    aget-object v0, v0, v1

    return-object v0

    .line 667
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/d/h;->q:Lcom/tkay/basead/ui/OwnNativeATView;

    return-object v0
.end method

.method private q()V
    .locals 4

    .line 739
    iget-object v0, p0, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    if-eqz v0, :cond_1

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    if-nez v0, :cond_0

    goto :goto_0

    .line 741
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->F()I

    move-result v0

    const/4 v1, 0x2

    if-ne v0, v1, :cond_1

    .line 745
    invoke-direct {p0}, Lcom/tkay/basead/d/h;->p()Landroid/view/View;

    move-result-object v0

    .line 746
    new-instance v1, Lcom/tkay/basead/a/a;

    iget-object v2, p0, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    new-instance v3, Lcom/tkay/basead/d/h$6;

    invoke-direct {v3, p0, v0}, Lcom/tkay/basead/d/h$6;-><init>(Lcom/tkay/basead/d/h;Landroid/view/View;)V

    invoke-direct {v1, v0, v2, v3}, Lcom/tkay/basead/a/a;-><init>(Landroid/view/View;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/a/a$a;)V

    iput-object v1, p0, Lcom/tkay/basead/d/h;->p:Lcom/tkay/basead/a/a;

    :cond_1
    :goto_0
    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Context;ZZLcom/tkay/basead/ui/BaseMediaATView$a;)Landroid/view/View;
    .locals 2

    .line 363
    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    if-eqz p2, :cond_0

    const/4 p2, 0x1

    .line 364
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/d/h;->b(Landroid/content/Context;ZZLcom/tkay/basead/ui/BaseMediaATView$a;)Landroid/view/View;

    move-result-object p1

    return-object p1

    .line 366
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_1

    .line 367
    invoke-virtual {v0, p3}, Lcom/tkay/expressad/advanced/d/c;->a(I)V

    .line 368
    iget-object p1, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    invoke-virtual {p1}, Lcom/tkay/expressad/advanced/d/c;->c()Lcom/tkay/expressad/advanced/view/ATOutNativeAdvancedViewGroup;

    move-result-object p1

    return-object p1

    .line 371
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    const/4 v1, 0x0

    if-nez v0, :cond_2

    return-object v1

    .line 375
    :cond_2
    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->u()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_3

    return-object v1

    :cond_3
    if-eqz p2, :cond_4

    .line 379
    iget-object p2, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    instance-of p2, p2, Lcom/tkay/core/common/f/f;

    if-eqz p2, :cond_4

    const/4 p2, 0x0

    .line 380
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/d/h;->b(Landroid/content/Context;ZZLcom/tkay/basead/ui/BaseMediaATView$a;)Landroid/view/View;

    move-result-object p1

    return-object p1

    :cond_4
    return-object v1
.end method

.method public final a()Lcom/tkay/core/common/f/h;
    .locals 1

    .line 316
    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    return-object v0
.end method

.method public final a(II)V
    .locals 1

    .line 307
    iput p1, p0, Lcom/tkay/basead/d/h;->n:I

    .line 308
    iput p2, p0, Lcom/tkay/basead/d/h;->o:I

    .line 309
    iget-object v0, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_0

    .line 310
    invoke-virtual {v0, p2, p1}, Lcom/tkay/expressad/advanced/d/c;->a(II)V

    :cond_0
    return-void
.end method

.method public final a(Landroid/view/View;)V
    .locals 1

    .line 496
    invoke-direct {p0, p1}, Lcom/tkay/basead/d/h;->d(Landroid/view/View;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 499
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->g()Z

    move-result v0

    if-nez v0, :cond_1

    .line 500
    invoke-virtual {p0, p1}, Lcom/tkay/basead/d/h;->b(Landroid/view/View;)V

    .line 503
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/d/h;->m:Landroid/view/View$OnClickListener;

    invoke-direct {p0, p1, v0}, Lcom/tkay/basead/d/h;->a(Landroid/view/View;Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method final a(Landroid/view/View;I)V
    .locals 8

    .line 89
    iget-object v0, p0, Lcom/tkay/basead/d/h;->q:Lcom/tkay/basead/ui/OwnNativeATView;

    if-eqz v0, :cond_4

    .line 90
    invoke-direct {p0}, Lcom/tkay/basead/d/h;->n()V

    .line 92
    invoke-direct {p0}, Lcom/tkay/basead/d/h;->o()V

    .line 93
    iget-object v0, p0, Lcom/tkay/basead/d/h;->d:Lcom/tkay/basead/a/c;

    if-nez v0, :cond_0

    .line 94
    new-instance v0, Lcom/tkay/basead/a/c;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    iget-object v3, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/basead/a/c;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)V

    iput-object v0, p0, Lcom/tkay/basead/d/h;->d:Lcom/tkay/basead/a/c;

    .line 96
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/h;->d:Lcom/tkay/basead/a/c;

    invoke-virtual {v0}, Lcom/tkay/basead/a/c;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    return-void

    .line 103
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/d/h;->d:Lcom/tkay/basead/a/c;

    new-instance v1, Lcom/tkay/basead/d/h$2;

    invoke-direct {v1, p0, p2}, Lcom/tkay/basead/d/h$2;-><init>(Lcom/tkay/basead/d/h;I)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/a/c$b;)V

    .line 131
    new-instance v0, Lcom/tkay/basead/c/i;

    iget-object v1, p0, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v2, ""

    invoke-direct {v0, v1, v2}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 132
    iget-object v1, p0, Lcom/tkay/basead/d/h;->q:Lcom/tkay/basead/ui/OwnNativeATView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/OwnNativeATView;->getHeight()I

    move-result v1

    iput v1, v0, Lcom/tkay/basead/c/i;->f:I

    .line 133
    iget-object v1, p0, Lcom/tkay/basead/d/h;->q:Lcom/tkay/basead/ui/OwnNativeATView;

    invoke-virtual {v1}, Lcom/tkay/basead/ui/OwnNativeATView;->getWidth()I

    move-result v1

    iput v1, v0, Lcom/tkay/basead/c/i;->e:I

    const/4 v1, 0x2

    if-ne p2, v1, :cond_3

    if-nez p1, :cond_2

    const/4 p1, 0x0

    goto :goto_0

    :cond_2
    new-array p2, v1, [I

    .line 1152
    invoke-virtual {p1, p2}, Landroid/view/View;->getLocationInWindow([I)V

    const/4 v1, 0x0

    .line 1153
    aget v1, p2, v1

    const/4 v2, 0x1

    .line 1154
    aget p2, p2, v2

    .line 1155
    invoke-virtual {p1}, Landroid/view/View;->getWidth()I

    move-result v2

    .line 1156
    invoke-virtual {p1}, Landroid/view/View;->getHeight()I

    move-result p1

    .line 1157
    invoke-static {v2}, Lcom/tkay/basead/d/h;->a(I)I

    move-result v2

    .line 1158
    invoke-static {p1}, Lcom/tkay/basead/d/h;->a(I)I

    move-result p1

    .line 1160
    new-instance v3, Lcom/tkay/basead/c/a;

    invoke-direct {v3}, Lcom/tkay/basead/c/a;-><init>()V

    add-int v4, v1, v2

    .line 1161
    iput v4, v3, Lcom/tkay/basead/c/a;->a:I

    add-int v4, p2, p1

    .line 1162
    iput v4, v3, Lcom/tkay/basead/c/a;->b:I

    .line 1163
    iput v2, v3, Lcom/tkay/basead/c/a;->e:I

    .line 1164
    iput p1, v3, Lcom/tkay/basead/c/a;->f:I

    .line 1166
    iget p1, v3, Lcom/tkay/basead/c/a;->a:I

    invoke-static {}, Ljava/lang/Math;->random()D

    move-result-wide v4

    const-wide/high16 v6, 0x402e000000000000L    # 15.0

    mul-double/2addr v4, v6

    double-to-int v2, v4

    add-int/2addr p1, v2

    iput p1, v3, Lcom/tkay/basead/c/a;->c:I

    .line 1167
    iget p1, v3, Lcom/tkay/basead/c/a;->b:I

    invoke-static {}, Ljava/lang/Math;->random()D

    move-result-wide v4

    mul-double/2addr v4, v6

    double-to-int v2, v4

    add-int/2addr p1, v2

    iput p1, v3, Lcom/tkay/basead/c/a;->d:I

    .line 1168
    iget p1, v3, Lcom/tkay/basead/c/a;->c:I

    sub-int/2addr p1, v1

    iput p1, v3, Lcom/tkay/basead/c/a;->g:I

    .line 1169
    iget p1, v3, Lcom/tkay/basead/c/a;->d:I

    sub-int/2addr p1, p2

    iput p1, v3, Lcom/tkay/basead/c/a;->h:I

    move-object p1, v3

    goto :goto_0

    .line 134
    :cond_3
    iget-object p1, p0, Lcom/tkay/basead/d/h;->q:Lcom/tkay/basead/ui/OwnNativeATView;

    invoke-virtual {p1}, Lcom/tkay/basead/ui/OwnNativeATView;->getAdClickRecord()Lcom/tkay/basead/c/a;

    move-result-object p1

    :goto_0
    iput-object p1, v0, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    .line 142
    iget-object p1, p0, Lcom/tkay/basead/d/h;->d:Lcom/tkay/basead/a/c;

    invoke-virtual {p1, v0}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/c/i;)V

    :cond_4
    return-void
.end method

.method public final a(Landroid/view/View;Ljava/util/List;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;)V"
        }
    .end annotation

    .line 478
    invoke-direct {p0, p1}, Lcom/tkay/basead/d/h;->d(Landroid/view/View;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 481
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->g()Z

    move-result v0

    if-nez v0, :cond_1

    .line 482
    invoke-virtual {p0, p1}, Lcom/tkay/basead/d/h;->b(Landroid/view/View;)V

    :cond_1
    if-eqz p2, :cond_4

    .line 485
    invoke-interface {p2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_2
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result p2

    if-eqz p2, :cond_3

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/view/View;

    if-eqz p2, :cond_2

    .line 487
    iget-object v0, p0, Lcom/tkay/basead/d/h;->m:Landroid/view/View$OnClickListener;

    invoke-virtual {p2, v0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    goto :goto_0

    :cond_3
    return-void

    .line 491
    :cond_4
    iget-object p2, p0, Lcom/tkay/basead/d/h;->m:Landroid/view/View$OnClickListener;

    invoke-virtual {p1, p2}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public final a(Lcom/tkay/basead/e/a;)V
    .locals 0

    .line 444
    iput-object p1, p0, Lcom/tkay/basead/d/h;->b:Lcom/tkay/basead/e/a;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 5

    .line 455
    iput-object p1, p0, Lcom/tkay/basead/d/h;->j:Ljava/lang/String;

    .line 456
    iget-object v0, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_5

    .line 457
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const/4 v0, 0x3

    if-nez p1, :cond_4

    .line 458
    iget-object p1, p0, Lcom/tkay/basead/d/h;->j:Ljava/lang/String;

    const/4 v1, -0x1

    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v2

    const/4 v3, 0x2

    const/4 v4, 0x1

    packed-switch v2, :pswitch_data_0

    goto :goto_0

    :pswitch_0
    const-string v2, "3"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    move v1, v3

    goto :goto_0

    :pswitch_1
    const-string v2, "2"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    move v1, v4

    goto :goto_0

    :pswitch_2
    const-string v2, "1"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 v1, 0x0

    :cond_0
    :goto_0
    if-eqz v1, :cond_3

    if-eq v1, v4, :cond_2

    if-eq v1, v3, :cond_1

    goto :goto_1

    .line 466
    :cond_1
    iget-object p1, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    invoke-virtual {p1, v3}, Lcom/tkay/expressad/advanced/d/c;->c(I)V

    :goto_1
    return-void

    .line 463
    :cond_2
    iget-object p1, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    invoke-virtual {p1, v4}, Lcom/tkay/expressad/advanced/d/c;->c(I)V

    return-void

    .line 460
    :cond_3
    iget-object p1, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/advanced/d/c;->c(I)V

    return-void

    .line 470
    :cond_4
    iget-object p1, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    invoke-virtual {p1, v0}, Lcom/tkay/expressad/advanced/d/c;->c(I)V

    :cond_5
    return-void

    :pswitch_data_0
    .packed-switch 0x31
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public final a(Z)V
    .locals 1

    .line 448
    iput-boolean p1, p0, Lcom/tkay/basead/d/h;->i:Z

    .line 449
    iget-object v0, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x2

    .line 450
    :goto_0
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/advanced/d/c;->b(I)V

    :cond_1
    return-void
.end method

.method public final a(ZZ)Z
    .locals 2

    .line 719
    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->n()I

    move-result v0

    const/16 v1, 0x43

    if-eq v0, v1, :cond_0

    const/4 p1, 0x0

    return p1

    .line 722
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    invoke-virtual {v0, p1, p2}, Lcom/tkay/core/common/f/z;->a(ZZ)Z

    move-result p1

    return p1
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 320
    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_0

    .line 321
    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->r()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final b(Landroid/view/View;)V
    .locals 3

    .line 573
    iput-object p1, p0, Lcom/tkay/basead/d/h;->e:Landroid/view/View;

    .line 574
    new-instance v0, Lcom/tkay/basead/d/h$5;

    invoke-direct {v0, p0}, Lcom/tkay/basead/d/h$5;-><init>(Lcom/tkay/basead/d/h;)V

    .line 581
    iget-object v1, p0, Lcom/tkay/basead/d/h;->c:Lcom/tkay/core/common/l/a/c;

    if-nez v1, :cond_1

    .line 582
    new-instance v1, Lcom/tkay/core/common/l/a/c;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/j;->R()I

    move-result v2

    if-gtz v2, :cond_0

    const/16 v2, 0x64

    goto :goto_0

    :cond_0
    iget-object v2, p0, Lcom/tkay/basead/d/h;->h:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/j;->R()I

    move-result v2

    :goto_0
    invoke-direct {v1, v2}, Lcom/tkay/core/common/l/a/c;-><init>(I)V

    iput-object v1, p0, Lcom/tkay/basead/d/h;->c:Lcom/tkay/core/common/l/a/c;

    .line 587
    :cond_1
    iget-object v1, p0, Lcom/tkay/basead/d/h;->c:Lcom/tkay/core/common/l/a/c;

    invoke-virtual {v1, p1, v0}, Lcom/tkay/core/common/l/a/c;->a(Landroid/view/View;Lcom/tkay/core/common/l/a/b;)V

    return-void
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 327
    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_0

    .line 328
    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->s()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    .line 334
    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_0

    .line 335
    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->w()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 341
    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_0

    .line 342
    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->t()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final f()Ljava/lang/String;
    .locals 1

    .line 348
    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_0

    .line 349
    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->u()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final g()Ljava/lang/String;
    .locals 1

    .line 355
    iget-object v0, p0, Lcom/tkay/basead/d/h;->g:Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_0

    .line 356
    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->v()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final h()Z
    .locals 1

    .line 440
    iget-object v0, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public final i()V
    .locals 1

    .line 567
    iget-object v0, p0, Lcom/tkay/basead/d/h;->c:Lcom/tkay/core/common/l/a/c;

    if-eqz v0, :cond_0

    .line 568
    invoke-virtual {v0}, Lcom/tkay/core/common/l/a/c;->a()V

    :cond_0
    return-void
.end method

.method public final j()V
    .locals 2

    .line 689
    invoke-virtual {p0}, Lcom/tkay/basead/d/h;->i()V

    .line 690
    invoke-direct {p0}, Lcom/tkay/basead/d/h;->n()V

    const/4 v0, 0x0

    .line 691
    iput-object v0, p0, Lcom/tkay/basead/d/h;->e:Landroid/view/View;

    .line 692
    iput-object v0, p0, Lcom/tkay/basead/d/h;->q:Lcom/tkay/basead/ui/OwnNativeATView;

    .line 693
    iput-object v0, p0, Lcom/tkay/basead/d/h;->b:Lcom/tkay/basead/e/a;

    .line 696
    :try_start_0
    iget-object v1, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v1, :cond_0

    .line 697
    iget-object v1, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/advanced/d/c;->e()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    .line 700
    invoke-virtual {v1}, Ljava/lang/Throwable;->printStackTrace()V

    .line 704
    :cond_0
    :goto_0
    iget-object v1, p0, Lcom/tkay/basead/d/h;->d:Lcom/tkay/basead/a/c;

    if-eqz v1, :cond_1

    .line 705
    invoke-virtual {v1}, Lcom/tkay/basead/a/c;->d()V

    .line 706
    iput-object v0, p0, Lcom/tkay/basead/d/h;->d:Lcom/tkay/basead/a/c;

    .line 708
    :cond_1
    iget-object v1, p0, Lcom/tkay/basead/d/h;->c:Lcom/tkay/core/common/l/a/c;

    if-eqz v1, :cond_2

    .line 709
    invoke-virtual {v1}, Lcom/tkay/core/common/l/a/c;->b()V

    .line 710
    iput-object v0, p0, Lcom/tkay/basead/d/h;->c:Lcom/tkay/core/common/l/a/c;

    .line 712
    :cond_2
    iget-object v0, p0, Lcom/tkay/basead/d/h;->l:Lcom/tkay/basead/ui/BaseMediaATView;

    if-eqz v0, :cond_3

    .line 713
    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseMediaATView;->destroy()V

    :cond_3
    return-void
.end method

.method public final k()V
    .locals 2

    .line 726
    iget-object v0, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_0

    const/4 v1, 0x3

    .line 728
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/d/c;->d(I)V

    :cond_0
    return-void
.end method

.method public final l()V
    .locals 2

    .line 733
    iget-object v0, p0, Lcom/tkay/basead/d/h;->k:Lcom/tkay/expressad/advanced/d/c;

    if-eqz v0, :cond_0

    const/4 v1, 0x3

    .line 734
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/advanced/d/c;->e(I)V

    :cond_0
    return-void
.end method
