.class public abstract Lcom/tkay/basead/ui/BaseScreenATView;
.super Lcom/tkay/basead/ui/BaseATView;


# static fields
.field public static final FORMAT_INTERSTITIAL:I = 0x3

.field public static final FORMAT_REWARD_VIDEO:I = 0x1

.field public static final TAG:Ljava/lang/String;

.field public static final TYPE_FULL_SCREEN:I = 0x0

.field public static final TYPE_HALF_SCREEN:I = 0x1


# instance fields
.field protected A:Lcom/tkay/basead/ui/b;

.field B:I

.field protected C:I

.field protected D:I

.field protected E:Lcom/tkay/basead/e/b$b;

.field protected F:Z

.field protected G:I

.field protected H:Lcom/tkay/basead/ui/CountDownView;

.field protected I:Lcom/tkay/basead/ui/CloseImageView;

.field protected J:Landroid/view/ViewGroup;

.field protected K:Lcom/tkay/basead/ui/MuteImageView;

.field protected L:I

.field protected M:Z

.field protected N:F

.field protected O:I

.field protected P:I

.field protected Q:I

.field protected R:Lcom/tkay/basead/ui/BaseShakeView;

.field protected S:Lcom/tkay/basead/ui/BaseShakeView;

.field final T:J

.field final U:J

.field V:Ljava/lang/Runnable;

.field W:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/Integer;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field protected a:I

.field protected aa:I

.field protected ab:I

.field protected ac:I

.field protected ad:I

.field private ae:Z

.field private af:Z

.field private ag:J

.field private ah:J

.field private ai:J

.field private aj:J

.field private ak:Lcom/tkay/basead/c;

.field private al:Z

.field private am:Z

.field private an:Z

.field protected t:I

.field protected u:Z

.field protected v:Z

.field protected w:Landroid/widget/RelativeLayout;

.field protected x:Lcom/tkay/basead/ui/PlayerView;

.field protected y:Lcom/tkay/basead/ui/PanelView;

.field protected z:Lcom/tkay/basead/ui/BaseEndCardView;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 49
    const-class v0, Lcom/tkay/basead/ui/BaseScreenATView;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/ui/BaseScreenATView;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 115
    invoke-direct {p0, p1}, Lcom/tkay/basead/ui/BaseATView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 86
    iput p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->G:I

    .line 107
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->al:Z

    const-wide/16 v0, 0xbb8

    .line 108
    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->T:J

    const-wide/16 v0, 0x1f4

    .line 109
    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->U:J

    .line 110
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->am:Z

    .line 112
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->an:Z

    .line 305
    new-instance p1, Lcom/tkay/basead/ui/BaseScreenATView$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/ui/BaseScreenATView$1;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    iput-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->V:Ljava/lang/Runnable;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;II)V
    .locals 2

    .line 119
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/ui/BaseATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;)V

    const/4 p1, 0x0

    .line 86
    iput p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->G:I

    .line 107
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->al:Z

    const-wide/16 p2, 0xbb8

    .line 108
    iput-wide p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->T:J

    const-wide/16 p2, 0x1f4

    .line 109
    iput-wide p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->U:J

    .line 110
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->am:Z

    .line 112
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->an:Z

    .line 305
    new-instance p2, Lcom/tkay/basead/ui/BaseScreenATView$1;

    invoke-direct {p2, p0}, Lcom/tkay/basead/ui/BaseScreenATView$1;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    iput-object p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->V:Ljava/lang/Runnable;

    .line 121
    iput p5, p0, Lcom/tkay/basead/ui/BaseScreenATView;->a:I

    .line 122
    iput p6, p0, Lcom/tkay/basead/ui/BaseScreenATView;->t:I

    .line 124
    iget-object p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->v()I

    move-result p2

    if-lez p2, :cond_0

    .line 125
    iget-object p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->v()I

    move-result p2

    mul-int/lit16 p2, p2, 0x3e8

    goto :goto_0

    :cond_0
    iget-object p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->v()I

    move-result p2

    :goto_0
    int-to-long p2, p2

    iput-wide p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ag:J

    .line 127
    iget-object p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->w()I

    move-result p2

    if-lez p2, :cond_1

    .line 128
    iget-object p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->w()I

    move-result p2

    mul-int/lit16 p2, p2, 0x3e8

    goto :goto_1

    :cond_1
    iget-object p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->w()I

    move-result p2

    :goto_1
    int-to-long p2, p2

    iput-wide p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ah:J

    const-wide/16 p4, 0x0

    cmp-long p6, p2, p4

    if-lez p6, :cond_2

    .line 130
    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ag:J

    cmp-long p4, v0, p4

    if-ltz p4, :cond_2

    add-long/2addr v0, p2

    .line 131
    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ai:J

    goto :goto_2

    .line 133
    :cond_2
    iget-wide p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ah:J

    iput-wide p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ai:J

    .line 136
    :goto_2
    iget-object p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->z()I

    move-result p2

    mul-int/lit16 p2, p2, 0x3e8

    iput p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->L:I

    .line 137
    iget-object p2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object p2, p2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {p2}, Lcom/tkay/core/common/f/j;->y()I

    move-result p2

    if-nez p2, :cond_3

    const/4 p1, 0x1

    :cond_3
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->M:Z

    return-void
.end method

.method private K()V
    .locals 1

    .line 294
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->n()Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->V()Z

    move-result v0

    if-nez v0, :cond_0

    .line 296
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 297
    invoke-direct {p0, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->b(Z)Lcom/tkay/basead/ui/BaseEndCardView;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    :cond_0
    return-void
.end method

.method private L()V
    .locals 2

    .line 334
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    .line 335
    iget v1, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    iput v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->C:I

    .line 336
    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    iput v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->D:I

    return-void
.end method

.method private M()V
    .locals 1

    .line 654
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    if-nez v0, :cond_0

    const/4 v0, 0x0

    .line 655
    invoke-direct {p0, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->b(Z)Lcom/tkay/basead/ui/BaseEndCardView;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    .line 658
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->H()V

    .line 659
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->I()V

    return-void
.end method

.method private N()V
    .locals 5

    .line 663
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->q()I

    move-result v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->Q:I

    .line 664
    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->c(I)Z

    move-result v0

    .line 676
    new-instance v1, Lcom/tkay/basead/ui/EndCardView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getContext()Landroid/content/Context;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    iget-object v4, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    invoke-direct {v1, v2, v3, v4}, Lcom/tkay/basead/ui/EndCardView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)V

    .line 677
    iget v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->C:I

    iget v3, p0, Lcom/tkay/basead/ui/BaseScreenATView;->D:I

    invoke-virtual {v1, v2, v3}, Lcom/tkay/basead/ui/EndCardView;->setSize(II)V

    .line 678
    new-instance v2, Lcom/tkay/basead/ui/BaseScreenATView$16;

    invoke-direct {v2, p0, v0}, Lcom/tkay/basead/ui/BaseScreenATView$16;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;Z)V

    const/4 v0, 0x0

    invoke-virtual {v1, v0, v0, v2}, Lcom/tkay/basead/ui/EndCardView;->init(ZZLcom/tkay/basead/ui/EndCardView$a;)V

    .line 696
    iput-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    .line 698
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->H()V

    .line 703
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_1

    .line 704
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->getCTAButton()Landroid/view/View;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->getCTAButton()Landroid/view/View;

    move-result-object v0

    invoke-virtual {v0}, Landroid/view/View;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    .line 705
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->getCTAButton()Landroid/view/View;

    move-result-object v0

    .line 2355
    iput-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->s:Landroid/view/View;

    goto :goto_0

    .line 707
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    .line 3355
    iput-object v0, p0, Lcom/tkay/basead/ui/BaseATView;->s:Landroid/view/View;

    .line 712
    :cond_1
    :goto_0
    invoke-virtual {v1}, Lcom/tkay/basead/ui/EndCardView;->load()V

    return-void
.end method

.method private O()V
    .locals 5

    .line 721
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->s()V

    .line 723
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ak:Lcom/tkay/basead/c;

    if-nez v0, :cond_0

    .line 724
    new-instance v0, Lcom/tkay/basead/c;

    invoke-direct {v0}, Lcom/tkay/basead/c;-><init>()V

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ak:Lcom/tkay/basead/c;

    .line 726
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ak:Lcom/tkay/basead/c;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    new-instance v4, Lcom/tkay/basead/ui/BaseScreenATView$2;

    invoke-direct {v4, p0}, Lcom/tkay/basead/ui/BaseScreenATView$2;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/basead/c;->a(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/c$a;)V

    return-void
.end method

.method private P()V
    .locals 2

    const/4 v0, 0x1

    .line 746
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ae:Z

    .line 748
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->J:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    .line 749
    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method private Q()V
    .locals 2

    .line 772
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->A:Lcom/tkay/basead/ui/b;

    if-nez v0, :cond_0

    .line 773
    new-instance v0, Lcom/tkay/basead/ui/b;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->w:Landroid/widget/RelativeLayout;

    invoke-direct {v0, v1}, Lcom/tkay/basead/ui/b;-><init>(Landroid/view/ViewGroup;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->A:Lcom/tkay/basead/ui/b;

    .line 775
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->A:Lcom/tkay/basead/ui/b;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/b;->b()V

    return-void
.end method

.method private R()V
    .locals 1

    .line 779
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->A:Lcom/tkay/basead/ui/b;

    if-eqz v0, :cond_0

    .line 780
    invoke-virtual {v0}, Lcom/tkay/basead/ui/b;->c()V

    :cond_0
    return-void
.end method

.method private S()V
    .locals 3

    .line 785
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v1

    const/4 v2, 0x1

    invoke-static {v2, v0, v1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 787
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_0

    .line 788
    invoke-interface {v0}, Lcom/tkay/basead/e/b$b;->b()V

    :cond_0
    return-void
.end method

.method private T()V
    .locals 2

    .line 1082
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    if-eqz v0, :cond_0

    const/4 v1, 0x4

    .line 1083
    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CountDownView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method private U()V
    .locals 2

    .line 1130
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    if-eqz v0, :cond_0

    .line 1131
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->h()I

    move-result v1

    invoke-virtual {p0, v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->a(Lcom/tkay/basead/ui/a;I)F

    move-result v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->N:F

    .line 1133
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 1134
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    new-instance v1, Lcom/tkay/basead/ui/BaseScreenATView$7;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseScreenATView$7;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CloseImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method private V()V
    .locals 2

    .line 1169
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->J:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    .line 1170
    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    .line 1171
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->J:Landroid/view/ViewGroup;

    new-instance v1, Lcom/tkay/basead/ui/BaseScreenATView$8;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseScreenATView$8;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method private W()V
    .locals 2

    .line 1207
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ae:Z

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->J:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/view/ViewGroup;->isShown()Z

    move-result v0

    if-nez v0, :cond_0

    .line 1208
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->J:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method private static a(Lcom/tkay/core/common/f/j;)I
    .locals 4

    const/4 v0, 0x0

    if-eqz p0, :cond_4

    .line 587
    invoke-virtual {p0}, Lcom/tkay/core/common/f/j;->B()I

    move-result v1

    int-to-float v1, v1

    const/high16 v2, 0x42c80000    # 100.0f

    div-float/2addr v1, v2

    float-to-int v1, v1

    if-nez v1, :cond_0

    return v0

    .line 592
    :cond_0
    new-instance v2, Ljava/util/Random;

    invoke-direct {v2}, Ljava/util/Random;-><init>()V

    const/16 v3, 0x64

    .line 593
    invoke-virtual {v2, v3}, Ljava/util/Random;->nextInt(I)I

    move-result v3

    if-le v3, v1, :cond_1

    return v0

    .line 598
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/core/common/f/j;->C()I

    move-result v1

    .line 599
    invoke-virtual {p0}, Lcom/tkay/core/common/f/j;->D()I

    move-result p0

    if-gtz p0, :cond_2

    return v0

    :cond_2
    if-ne v1, p0, :cond_3

    return v1

    :cond_3
    sub-int/2addr p0, v1

    .line 610
    :try_start_0
    invoke-virtual {v2, p0}, Ljava/util/Random;->nextInt(I)I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    add-int/2addr p0, v1

    return p0

    :catchall_0
    move-exception p0

    .line 612
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_4
    return v0
.end method

.method static synthetic a(Lcom/tkay/basead/ui/BaseScreenATView;J)J
    .locals 0

    .line 47
    iput-wide p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->aj:J

    return-wide p1
.end method

.method static synthetic a(Lcom/tkay/basead/ui/BaseScreenATView;)V
    .locals 0

    .line 47
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseATView;->h()V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/ui/BaseScreenATView;I)V
    .locals 4

    .line 4899
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v0, v0, Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_3

    .line 4900
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v0, Lcom/tkay/core/common/f/z;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->X()Lcom/tkay/core/common/f/ab;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 4904
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->y()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 4905
    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v1

    if-lez v1, :cond_3

    .line 4906
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->W:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v1, :cond_0

    .line 4907
    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->W:Ljava/util/concurrent/ConcurrentHashMap;

    .line 4909
    :cond_0
    div-int/lit16 p1, p1, 0x3e8

    .line 4910
    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    .line 4911
    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->W:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v2, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->W:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v2, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-nez v2, :cond_1

    .line 4914
    :cond_2
    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v2

    if-lt p1, v2, :cond_1

    .line 4915
    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->W:Ljava/util/concurrent/ConcurrentHashMap;

    sget-object v3, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v2, v1, v3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 4916
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v2

    .line 4917
    iget-object v3, v2, Lcom/tkay/basead/c/i;->h:Lcom/tkay/basead/c/j;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iput v1, v3, Lcom/tkay/basead/c/j;->i:I

    const/16 v1, 0x20

    .line 4918
    iget-object v3, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {v1, v3, v2}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    goto :goto_0

    :cond_3
    return-void
.end method

.method private b(Z)Lcom/tkay/basead/ui/BaseEndCardView;
    .locals 4

    .line 622
    new-instance v0, Lcom/tkay/basead/ui/MraidEndCardView;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    invoke-direct {v0, v1, v2, v3}, Lcom/tkay/basead/ui/MraidEndCardView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;)V

    .line 623
    new-instance v1, Lcom/tkay/basead/ui/BaseScreenATView$15;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseScreenATView$15;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MraidEndCardView;->setEndCardListener(Lcom/tkay/basead/ui/MraidEndCardView$a;)V

    .line 647
    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/MraidEndCardView;->init(Z)V

    return-object v0
.end method

.method static synthetic b(Lcom/tkay/basead/ui/BaseScreenATView;)V
    .locals 3

    .line 4785
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v1

    const/4 v2, 0x1

    invoke-static {v2, v0, v1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 4787
    iget-object p0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz p0, :cond_0

    .line 4788
    invoke-interface {p0}, Lcom/tkay/basead/e/b$b;->b()V

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/tkay/basead/ui/BaseScreenATView;I)V
    .locals 6

    .line 4926
    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ai:J

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    int-to-long v4, p1

    cmp-long v0, v4, v0

    if-lez v0, :cond_0

    .line 4927
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->F()V

    return-void

    .line 4928
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->F:Z

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ag:J

    cmp-long v2, v0, v2

    if-ltz v2, :cond_1

    int-to-long v2, p1

    cmp-long p1, v2, v0

    if-ltz p1, :cond_1

    .line 4929
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->E()V

    :cond_1
    return-void
.end method

.method static synthetic c(Lcom/tkay/basead/ui/BaseScreenATView;)V
    .locals 1

    const/4 v0, 0x1

    .line 5746
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ae:Z

    .line 5748
    iget-object p0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->J:Landroid/view/ViewGroup;

    if-eqz p0, :cond_0

    const/16 v0, 0x8

    .line 5749
    invoke-virtual {p0, v0}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method static synthetic c(Lcom/tkay/basead/ui/BaseScreenATView;I)V
    .locals 6

    .line 4934
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->F:Z

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ag:J

    const-wide/16 v2, -0x1

    cmp-long v0, v0, v2

    if-nez v0, :cond_1

    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ah:J

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-eqz v4, :cond_1

    int-to-long v4, p1

    .line 4935
    iput-wide v4, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ag:J

    cmp-long p1, v0, v2

    if-lez p1, :cond_0

    add-long/2addr v4, v0

    .line 4937
    iput-wide v4, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ai:J

    .line 4939
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->E()V

    :cond_1
    return-void
.end method

.method static synthetic d(Lcom/tkay/basead/ui/BaseScreenATView;)Lcom/tkay/basead/c;
    .locals 0

    .line 47
    iget-object p0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ak:Lcom/tkay/basead/c;

    return-object p0
.end method

.method private e(I)V
    .locals 4

    .line 899
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    instance-of v0, v0, Lcom/tkay/core/common/f/z;

    if-eqz v0, :cond_4

    .line 900
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    check-cast v0, Lcom/tkay/core/common/f/z;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->X()Lcom/tkay/core/common/f/ab;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 904
    :cond_0
    invoke-virtual {v0}, Lcom/tkay/core/common/f/ab;->y()Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 905
    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v1

    if-lez v1, :cond_4

    .line 906
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->W:Ljava/util/concurrent/ConcurrentHashMap;

    if-nez v1, :cond_1

    .line 907
    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->W:Ljava/util/concurrent/ConcurrentHashMap;

    .line 909
    :cond_1
    div-int/lit16 p1, p1, 0x3e8

    .line 910
    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_2
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_4

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    .line 911
    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->W:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v2, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_3

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->W:Ljava/util/concurrent/ConcurrentHashMap;

    invoke-virtual {v2, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/Boolean;

    invoke-virtual {v2}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v2

    if-nez v2, :cond_2

    .line 914
    :cond_3
    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v2

    if-lt p1, v2, :cond_2

    .line 915
    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->W:Ljava/util/concurrent/ConcurrentHashMap;

    sget-object v3, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v2, v1, v3}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 916
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v2

    .line 917
    iget-object v3, v2, Lcom/tkay/basead/c/i;->h:Lcom/tkay/basead/c/j;

    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    iput v1, v3, Lcom/tkay/basead/c/j;->i:I

    const/16 v1, 0x20

    .line 918
    iget-object v3, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {v1, v3, v2}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    goto :goto_0

    :cond_4
    return-void
.end method

.method static synthetic e(Lcom/tkay/basead/ui/BaseScreenATView;)V
    .locals 0

    .line 5779
    iget-object p0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->A:Lcom/tkay/basead/ui/b;

    if-eqz p0, :cond_0

    .line 5780
    invoke-virtual {p0}, Lcom/tkay/basead/ui/b;->c()V

    :cond_0
    return-void
.end method

.method private f(I)V
    .locals 6

    .line 926
    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ai:J

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-ltz v4, :cond_0

    int-to-long v4, p1

    cmp-long v0, v4, v0

    if-lez v0, :cond_0

    .line 927
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->F()V

    return-void

    .line 928
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->F:Z

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ag:J

    cmp-long v2, v0, v2

    if-ltz v2, :cond_1

    int-to-long v2, p1

    cmp-long p1, v2, v0

    if-ltz p1, :cond_1

    .line 929
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->E()V

    :cond_1
    return-void
.end method

.method static synthetic f(Lcom/tkay/basead/ui/BaseScreenATView;)V
    .locals 5

    .line 6721
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->s()V

    .line 6723
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ak:Lcom/tkay/basead/c;

    if-nez v0, :cond_0

    .line 6724
    new-instance v0, Lcom/tkay/basead/c;

    invoke-direct {v0}, Lcom/tkay/basead/c;-><init>()V

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ak:Lcom/tkay/basead/c;

    .line 6726
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ak:Lcom/tkay/basead/c;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    new-instance v4, Lcom/tkay/basead/ui/BaseScreenATView$2;

    invoke-direct {v4, p0}, Lcom/tkay/basead/ui/BaseScreenATView$2;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    invoke-virtual {v0, v1, v2, v3, v4}, Lcom/tkay/basead/c;->a(Landroid/content/Context;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/c$a;)V

    return-void
.end method

.method private g(I)V
    .locals 6

    .line 934
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->F:Z

    if-eqz v0, :cond_1

    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ag:J

    const-wide/16 v2, -0x1

    cmp-long v0, v0, v2

    if-nez v0, :cond_1

    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ah:J

    const-wide/16 v2, 0x0

    cmp-long v4, v0, v2

    if-eqz v4, :cond_1

    int-to-long v4, p1

    .line 935
    iput-wide v4, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ag:J

    cmp-long p1, v0, v2

    if-lez p1, :cond_0

    add-long/2addr v4, v0

    .line 937
    iput-wide v4, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ai:J

    .line 939
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->E()V

    :cond_1
    return-void
.end method


# virtual methods
.method protected abstract A()V
.end method

.method protected final B()V
    .locals 3

    .line 1146
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PlayerView;->isPlaying()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1147
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PlayerView;->stop()V

    .line 1149
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PlayerView;->removeAllViews()V

    .line 1151
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v0

    .line 1152
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->j()Lcom/tkay/basead/c/a;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    const/16 v1, 0x10

    .line 1153
    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {v1, v2, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    :cond_0
    return-void
.end method

.method protected final C()V
    .locals 3

    .line 1159
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v0

    .line 1160
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->j()Lcom/tkay/basead/c/a;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/basead/c/i;->g:Lcom/tkay/basead/c/a;

    .line 1161
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    const/4 v2, 0x7

    invoke-static {v2, v1, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 1162
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_0

    .line 1163
    invoke-interface {v0}, Lcom/tkay/basead/e/b$b;->e()V

    :cond_0
    return-void
.end method

.method protected D()V
    .locals 2

    .line 1186
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/basead/ui/CountDownView;->isShown()Z

    move-result v0

    if-nez v0, :cond_0

    .line 1187
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CountDownView;->setVisibility(I)V

    .line 1189
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/tkay/basead/ui/MuteImageView;->isShown()Z

    move-result v0

    if-nez v0, :cond_1

    .line 1190
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MuteImageView;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method protected final E()V
    .locals 2

    .line 1195
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->getVisibility()I

    move-result v0

    if-eqz v0, :cond_0

    .line 1196
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method protected F()V
    .locals 2

    .line 1201
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PanelView;->getVisibility()I

    move-result v0

    const/16 v1, 0x8

    if-eq v0, v1, :cond_0

    .line 1202
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setVisibility(I)V

    :cond_0
    return-void
.end method

.method protected G()V
    .locals 3

    .line 1213
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/basead/ui/CloseImageView;->isShown()Z

    move-result v0

    if-nez v0, :cond_0

    .line 1214
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 1217
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    iget v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->N:F

    invoke-virtual {v0, v2}, Lcom/tkay/basead/ui/CloseImageView;->setClickAreaScaleFactor(F)V

    .line 4207
    :cond_0
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ae:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->J:Landroid/view/ViewGroup;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/view/ViewGroup;->isShown()Z

    move-result v0

    if-nez v0, :cond_1

    .line 4208
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->J:Landroid/view/ViewGroup;

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    :cond_1
    return-void
.end method

.method protected abstract H()V
.end method

.method protected abstract I()V
.end method

.method protected abstract J()V
.end method

.method protected a()V
    .locals 0

    return-void
.end method

.method protected final a(I)V
    .locals 1

    .line 815
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_0

    .line 816
    invoke-interface {v0, p1}, Lcom/tkay/basead/e/b$b;->a(I)V

    :cond_0
    return-void
.end method

.method protected final a(Lcom/tkay/basead/c/e;)V
    .locals 1

    .line 793
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_0

    .line 794
    invoke-interface {v0, p1}, Lcom/tkay/basead/e/b$b;->a(Lcom/tkay/basead/c/e;)V

    .line 797
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->k()V

    return-void
.end method

.method final a(Lcom/tkay/basead/ui/BaseShakeView;Lcom/tkay/basead/ui/BaseShakeView;)V
    .locals 3

    .line 944
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->al:Z

    if-nez v0, :cond_0

    const/4 v0, 0x1

    .line 945
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->al:Z

    if-eqz p1, :cond_0

    .line 948
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->m()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x0

    .line 949
    invoke-virtual {p1, v0}, Lcom/tkay/basead/ui/BaseShakeView;->setVisibility(I)V

    .line 950
    new-instance v0, Lcom/tkay/basead/ui/BaseScreenATView$4;

    invoke-direct {v0, p0, p1, p2}, Lcom/tkay/basead/ui/BaseScreenATView$4;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;Lcom/tkay/basead/ui/BaseShakeView;Lcom/tkay/basead/ui/BaseShakeView;)V

    const-wide/16 v1, 0xbb8

    invoke-virtual {p1, v0, v1, v2}, Lcom/tkay/basead/ui/BaseShakeView;->postDelayed(Ljava/lang/Runnable;J)Z

    :cond_0
    return-void
.end method

.method protected final a(Z)V
    .locals 1

    .line 822
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_0

    .line 823
    invoke-interface {v0, p1}, Lcom/tkay/basead/e/b$b;->a(Z)V

    :cond_0
    return-void
.end method

.method protected b()V
    .locals 3

    .line 225
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "id"

    const-string v2, "myoffer_rl_root"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/RelativeLayout;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->w:Landroid/widget/RelativeLayout;

    .line 226
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "myoffer_player_view_id"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/PlayerView;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    .line 227
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "myoffer_banner_view_id"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/PanelView;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    .line 229
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "myoffer_count_down_view_id"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/CountDownView;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    .line 230
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "myoffer_btn_mute_id"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/MuteImageView;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    .line 231
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "myoffer_btn_close_id"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/tkay/basead/ui/CloseImageView;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    .line 232
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v2, "myoffer_feedback_ll_id"

    invoke-static {v0, v2, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->J:Landroid/view/ViewGroup;

    .line 2082
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    if-eqz v0, :cond_0

    const/4 v1, 0x4

    .line 2083
    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CountDownView;->setVisibility(I)V

    .line 235
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->z()V

    .line 2130
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    const/16 v1, 0x8

    if-eqz v0, :cond_1

    .line 2131
    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/j;->h()I

    move-result v2

    invoke-virtual {p0, v0, v2}, Lcom/tkay/basead/ui/BaseScreenATView;->a(Lcom/tkay/basead/ui/a;I)F

    move-result v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->N:F

    .line 2133
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/CloseImageView;->setVisibility(I)V

    .line 2134
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    new-instance v2, Lcom/tkay/basead/ui/BaseScreenATView$7;

    invoke-direct {v2, p0}, Lcom/tkay/basead/ui/BaseScreenATView$7;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    invoke-virtual {v0, v2}, Lcom/tkay/basead/ui/CloseImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 2169
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->J:Landroid/view/ViewGroup;

    if-eqz v0, :cond_2

    .line 2170
    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    .line 2171
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->J:Landroid/view/ViewGroup;

    new-instance v1, Lcom/tkay/basead/ui/BaseScreenATView$8;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseScreenATView$8;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 238
    :cond_2
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->v()V

    return-void
.end method

.method protected b(I)V
    .locals 2

    const/4 v0, 0x1

    .line 757
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->an:Z

    .line 758
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->g()I

    move-result v1

    invoke-virtual {p0, v0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->a(Lcom/tkay/basead/ui/a;I)F

    move-result v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->N:F

    .line 760
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->af:Z

    if-eqz v0, :cond_0

    return-void

    .line 764
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    if-nez v0, :cond_1

    return-void

    .line 768
    :cond_1
    invoke-super {p0, p1}, Lcom/tkay/basead/ui/BaseATView;->b(I)V

    return-void
.end method

.method protected c()V
    .locals 3

    .line 348
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    new-instance v1, Lcom/tkay/basead/ui/BaseScreenATView$9;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseScreenATView$9;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PlayerView;->setListener(Lcom/tkay/basead/ui/PlayerView$a;)V

    .line 509
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    iget-boolean v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->M:Z

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PlayerView;->initMuteStatus(Z)V

    .line 510
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    iget v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->O:I

    iget v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->P:I

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/ui/PlayerView;->setVideoSize(II)V

    .line 511
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->k()Lcom/tkay/core/common/f/j;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/f/j;->S()I

    move-result v1

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/h;->k()Lcom/tkay/core/common/f/j;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/f/j;->T()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/ui/PlayerView;->setVideoRateConfig(II)V

    .line 512
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->x()Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/ui/PlayerView;->load(Ljava/lang/String;Z)V

    return-void
.end method

.method protected abstract c(I)Z
.end method

.method protected d()V
    .locals 2

    .line 1334
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v0

    .line 1335
    iget v1, v0, Landroid/util/DisplayMetrics;->widthPixels:I

    iput v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->C:I

    .line 1336
    iget v0, v0, Landroid/util/DisplayMetrics;->heightPixels:I

    iput v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->D:I

    .line 214
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->u()V

    return-void
.end method

.method protected final d(I)V
    .locals 1

    .line 1231
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->H:Lcom/tkay/basead/ui/CountDownView;

    if-eqz v0, :cond_0

    .line 1232
    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/CountDownView;->setDuration(I)V

    :cond_0
    return-void
.end method

.method protected destroy()V
    .locals 1

    .line 1005
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseATView;->destroy()V

    const/4 v0, 0x0

    .line 1007
    iput-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    .line 1009
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    if-eqz v0, :cond_0

    .line 1010
    invoke-virtual {v0}, Lcom/tkay/basead/ui/BaseEndCardView;->a()V

    :cond_0
    return-void
.end method

.method protected final e()V
    .locals 3

    .line 803
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v1

    const/16 v2, 0x8

    invoke-static {v2, v0, v1}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 805
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_0

    .line 806
    invoke-interface {v0}, Lcom/tkay/basead/e/b$b;->a()V

    :cond_0
    return-void
.end method

.method protected final f()V
    .locals 2

    const/4 v0, 0x1

    .line 829
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->af:Z

    .line 3772
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->A:Lcom/tkay/basead/ui/b;

    if-nez v0, :cond_0

    .line 3773
    new-instance v0, Lcom/tkay/basead/ui/b;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->w:Landroid/widget/RelativeLayout;

    invoke-direct {v0, v1}, Lcom/tkay/basead/ui/b;-><init>(Landroid/view/ViewGroup;)V

    iput-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->A:Lcom/tkay/basead/ui/b;

    .line 3775
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->A:Lcom/tkay/basead/ui/b;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/b;->b()V

    return-void
.end method

.method public fillVideoEndRecord(Z)Lcom/tkay/basead/c/j;
    .locals 6

    .line 878
    new-instance v0, Lcom/tkay/basead/c/j;

    invoke-direct {v0}, Lcom/tkay/basead/c/j;-><init>()V

    .line 879
    iget v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->t:I

    const/4 v2, 0x2

    const/4 v3, 0x1

    if-ne v1, v2, :cond_0

    const/4 v1, 0x4

    goto :goto_0

    :cond_0
    move v1, v3

    :goto_0
    iput v1, v0, Lcom/tkay/basead/c/j;->l:I

    .line 880
    iput v3, v0, Lcom/tkay/basead/c/j;->r:I

    .line 881
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    const/4 v4, 0x0

    if-eqz v1, :cond_1

    invoke-virtual {v1}, Lcom/tkay/basead/ui/PlayerView;->getVideoLength()I

    move-result v1

    div-int/lit16 v1, v1, 0x3e8

    goto :goto_1

    :cond_1
    move v1, v4

    :goto_1
    iput v1, v0, Lcom/tkay/basead/c/j;->a:I

    .line 882
    iget v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->B:I

    div-int/lit16 v1, v1, 0x3e8

    iput v1, v0, Lcom/tkay/basead/c/j;->b:I

    .line 883
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Lcom/tkay/basead/ui/PlayerView;->getCurrentPosition()I

    move-result v1

    div-int/lit16 v1, v1, 0x3e8

    goto :goto_2

    :cond_2
    move v1, v4

    :goto_2
    iput v1, v0, Lcom/tkay/basead/c/j;->c:I

    .line 884
    iget v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->B:I

    if-nez v1, :cond_3

    move v1, v3

    goto :goto_3

    :cond_3
    move v1, v4

    :goto_3
    iput v1, v0, Lcom/tkay/basead/c/j;->d:I

    .line 885
    iget v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->B:I

    if-nez v1, :cond_4

    move v1, v3

    goto :goto_4

    :cond_4
    move v1, v2

    :goto_4
    iput v1, v0, Lcom/tkay/basead/c/j;->o:I

    .line 886
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    if-eqz v1, :cond_5

    invoke-virtual {v1}, Lcom/tkay/basead/ui/PlayerView;->getCurrentPosition()I

    move-result v1

    iget-object v5, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v5}, Lcom/tkay/basead/ui/PlayerView;->getVideoLength()I

    move-result v5

    if-ne v1, v5, :cond_5

    goto :goto_5

    :cond_5
    move v3, v4

    :goto_5
    iput v3, v0, Lcom/tkay/basead/c/j;->e:I

    if-eqz p1, :cond_6

    move v2, v4

    .line 887
    :cond_6
    iput v2, v0, Lcom/tkay/basead/c/j;->u:I

    .line 888
    iget-wide v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->aj:J

    iput-wide v1, v0, Lcom/tkay/basead/c/j;->f:J

    .line 889
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/tkay/basead/c/j;->g:J

    .line 890
    iget-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    if-eqz p1, :cond_7

    invoke-virtual {p1}, Lcom/tkay/basead/ui/PlayerView;->getCurrentPosition()I

    move-result v4

    :cond_7
    iput v4, v0, Lcom/tkay/basead/c/j;->h:I

    .line 892
    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, "Video End Record:"

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/tkay/basead/c/j;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-object v0
.end method

.method protected final g()V
    .locals 1

    const/4 v0, 0x0

    .line 835
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->af:Z

    .line 836
    new-instance v0, Lcom/tkay/basead/ui/BaseScreenATView$3;

    invoke-direct {v0, p0}, Lcom/tkay/basead/ui/BaseScreenATView$3;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public getCloseButtonScaleFactor()F
    .locals 1

    .line 208
    iget v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->N:F

    return v0
.end method

.method public getHasPerformClick()Z
    .locals 1

    .line 193
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->an:Z

    return v0
.end method

.method public getHideBannerTime()J
    .locals 2

    .line 185
    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ai:J

    return-wide v0
.end method

.method public getShowBannerTime()J
    .locals 2

    .line 177
    iget-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ag:J

    return-wide v0
.end method

.method protected final declared-synchronized h()V
    .locals 4

    monitor-enter p0

    .line 314
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v0, v0, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/j;->R()I

    move-result v0

    if-lez v0, :cond_0

    .line 316
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->V:Ljava/lang/Runnable;

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v2}, Lcom/tkay/core/common/f/j;->R()I

    move-result v2

    int-to-long v2, v2

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    .line 318
    :cond_0
    :try_start_1
    invoke-super {p0}, Lcom/tkay/basead/ui/BaseATView;->h()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 320
    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public hasReward()Z
    .locals 1

    .line 153
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->v:Z

    return v0
.end method

.method protected final i()Lcom/tkay/basead/c/i;
    .locals 3

    .line 324
    new-instance v0, Lcom/tkay/basead/c/i;

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v1, v1, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->q:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 325
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getWidth()I

    move-result v1

    iput v1, v0, Lcom/tkay/basead/c/i;->e:I

    .line 326
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->getHeight()I

    move-result v1

    iput v1, v0, Lcom/tkay/basead/c/i;->f:I

    .line 327
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    if-eqz v1, :cond_0

    invoke-virtual {v1}, Lcom/tkay/basead/ui/PlayerView;->hasVideo()Z

    move-result v1

    if-eqz v1, :cond_0

    const/4 v1, 0x1

    .line 328
    invoke-virtual {p0, v1}, Lcom/tkay/basead/ui/BaseScreenATView;->fillVideoEndRecord(Z)Lcom/tkay/basead/c/j;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/basead/c/i;->h:Lcom/tkay/basead/c/j;

    :cond_0
    return-object v0
.end method

.method public init()V
    .locals 3

    .line 245
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->b()V

    .line 247
    iget v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->Q:I

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->c(I)Z

    move-result v0

    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->F:Z

    .line 249
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->u:Z

    if-eqz v0, :cond_0

    .line 250
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->J()V

    .line 251
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->p()V

    return-void

    .line 256
    :cond_0
    iget v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->a:I

    const/4 v1, 0x1

    if-ne v1, v0, :cond_2

    .line 257
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->E()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 258
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->J()V

    .line 259
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->c()V

    .line 262
    invoke-direct {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->K()V

    return-void

    :cond_1
    const-string v0, "40002"

    const-string v1, "Video url no exist!"

    .line 265
    invoke-static {v0, v1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/basead/ui/BaseScreenATView;->a(Lcom/tkay/basead/c/e;)V

    .line 266
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    if-eqz v0, :cond_4

    .line 267
    invoke-interface {v0}, Lcom/tkay/basead/e/b$b;->e()V

    return-void

    :cond_2
    const/4 v2, 0x3

    if-ne v2, v0, :cond_4

    .line 271
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->C()I

    move-result v0

    if-ne v0, v1, :cond_3

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->E()Z

    move-result v0

    if-eqz v0, :cond_3

    .line 272
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->J()V

    .line 273
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->c()V

    .line 276
    invoke-direct {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->K()V

    return-void

    .line 279
    :cond_3
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->J()V

    .line 280
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->p()V

    .line 282
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->n()Z

    move-result v0

    if-nez v0, :cond_4

    .line 283
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->h()V

    :cond_4
    return-void
.end method

.method public isShowEndCard()Z
    .locals 1

    .line 145
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->u:Z

    return v0
.end method

.method public isVideoMute()Z
    .locals 1

    .line 169
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->M:Z

    return v0
.end method

.method public needHideFeedbackButton()Z
    .locals 1

    .line 165
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ae:Z

    return v0
.end method

.method protected final o()V
    .locals 3

    .line 517
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->R:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz v0, :cond_0

    .line 518
    new-instance v1, Lcom/tkay/basead/ui/BaseScreenATView$10;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseScreenATView$10;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseShakeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 525
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->R:Lcom/tkay/basead/ui/BaseShakeView;

    new-instance v1, Lcom/tkay/basead/ui/BaseScreenATView$11;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseScreenATView$11;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/ui/BaseShakeView;->setOnShakeListener(Lcom/tkay/basead/ui/BaseShakeView$a;Lcom/tkay/core/common/f/j;)V

    .line 537
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    if-eqz v0, :cond_1

    .line 538
    new-instance v1, Lcom/tkay/basead/ui/BaseScreenATView$12;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseScreenATView$12;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/BaseShakeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 545
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->S:Lcom/tkay/basead/ui/BaseShakeView;

    new-instance v1, Lcom/tkay/basead/ui/BaseScreenATView$13;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseScreenATView$13;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/ui/BaseShakeView;->setOnShakeListener(Lcom/tkay/basead/ui/BaseShakeView$a;Lcom/tkay/core/common/f/j;)V

    :cond_1
    return-void
.end method

.method protected final p()V
    .locals 4

    const/4 v0, 0x1

    .line 560
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->u:Z

    .line 562
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->n()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 563
    invoke-direct {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->M()V

    goto :goto_0

    .line 565
    :cond_0
    invoke-direct {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->N()V

    .line 568
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->z:Lcom/tkay/basead/ui/BaseEndCardView;

    if-eqz v0, :cond_1

    .line 569
    new-instance v1, Lcom/tkay/basead/ui/BaseScreenATView$14;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseScreenATView$14;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget-object v2, v2, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    .line 574
    invoke-static {v2}, Lcom/tkay/basead/ui/BaseScreenATView;->a(Lcom/tkay/core/common/f/j;)I

    move-result v2

    int-to-long v2, v2

    .line 569
    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/basead/ui/BaseEndCardView;->postDelayed(Ljava/lang/Runnable;J)Z

    .line 577
    :cond_1
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v0

    const/4 v1, 0x6

    .line 578
    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-static {v1, v2, v0}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    return-void
.end method

.method protected abstract q()I
.end method

.method protected final r()V
    .locals 3

    const/4 v0, 0x1

    .line 845
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->am:Z

    .line 847
    :try_start_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ak:Lcom/tkay/basead/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ak:Lcom/tkay/basead/c;

    invoke-virtual {v0}, Lcom/tkay/basead/c;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 851
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PlayerView;->hasVideo()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 852
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PlayerView;->isPlaying()Z

    move-result v0

    if-nez v0, :cond_1

    .line 854
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->aj:J

    .line 855
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PlayerView;->getCurrentPosition()I

    move-result v0

    iput v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->B:I

    if-eqz v0, :cond_1

    const/16 v0, 0xf

    .line 857
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 860
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PlayerView;->start()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_2
    return-void

    :catch_0
    move-exception v0

    .line 863
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method protected final s()V
    .locals 3

    const/4 v0, 0x0

    .line 868
    iput-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->am:Z

    .line 869
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    if-eqz v0, :cond_1

    .line 870
    invoke-virtual {v0}, Lcom/tkay/basead/ui/PlayerView;->isPlaying()Z

    move-result v0

    if-eqz v0, :cond_0

    const/16 v0, 0xb

    .line 871
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->i()Lcom/tkay/basead/c/i;

    move-result-object v2

    invoke-static {v0, v1, v2}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 873
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->x:Lcom/tkay/basead/ui/PlayerView;

    invoke-virtual {v0}, Lcom/tkay/basead/ui/PlayerView;->pause()V

    :cond_1
    return-void
.end method

.method public setCloseButtonScaleFactor(F)V
    .locals 1

    .line 201
    iput p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->N:F

    .line 202
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->I:Lcom/tkay/basead/ui/CloseImageView;

    if-eqz v0, :cond_0

    .line 203
    invoke-virtual {v0, p1}, Lcom/tkay/basead/ui/CloseImageView;->setClickAreaScaleFactor(F)V

    :cond_0
    return-void
.end method

.method public setHasPerformClick(Z)V
    .locals 0

    .line 197
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->an:Z

    return-void
.end method

.method public setHasReward(Z)V
    .locals 0

    .line 157
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->v:Z

    return-void
.end method

.method public setHideBannerTime(J)V
    .locals 0

    .line 189
    iput-wide p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ai:J

    return-void
.end method

.method public setHideFeedbackButton(Z)V
    .locals 0

    .line 161
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ae:Z

    return-void
.end method

.method public setIsShowEndCard(Z)V
    .locals 0

    .line 149
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->u:Z

    return-void
.end method

.method public setListener(Lcom/tkay/basead/e/b$b;)V
    .locals 0

    .line 141
    iput-object p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->E:Lcom/tkay/basead/e/b$b;

    return-void
.end method

.method public setShowBannerTime(J)V
    .locals 0

    .line 181
    iput-wide p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ag:J

    return-void
.end method

.method public setVideoMute(Z)V
    .locals 0

    .line 173
    iput-boolean p1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->M:Z

    return-void
.end method

.method protected final t()V
    .locals 2

    .line 999
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->destroy()V

    .line 1000
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->V:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/Runnable;)V

    return-void
.end method

.method protected u()V
    .locals 4

    .line 1023
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/h;->u()Ljava/lang/String;

    move-result-object v0

    .line 1024
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 1025
    invoke-static {}, Lcom/tkay/basead/a/f;->a()Lcom/tkay/basead/a/f;

    const/4 v1, 0x1

    invoke-static {v1, v0}, Lcom/tkay/basead/a/f;->a(ILjava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/b;->a(Ljava/lang/String;)[I

    move-result-object v2

    if-eqz v2, :cond_0

    const/4 v3, 0x0

    .line 1027
    aget v3, v2, v3

    iput v3, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ac:I

    .line 1028
    aget v1, v2, v1

    iput v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ad:I

    .line 1033
    :cond_0
    iget-object v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    invoke-virtual {v1}, Lcom/tkay/core/common/f/h;->x()Ljava/lang/String;

    move-result-object v1

    .line 1035
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 1036
    invoke-static {}, Lcom/tkay/basead/a/f;->a()Lcom/tkay/basead/a/f;

    const/4 v0, 0x4

    invoke-static {v0, v1}, Lcom/tkay/basead/a/f;->a(ILjava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/basead/a/b/g;->a(Ljava/lang/String;)Lcom/tkay/basead/a/b/g$a;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 1038
    iget v1, v0, Lcom/tkay/basead/a/b/g$a;->a:I

    iput v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->aa:I

    .line 1039
    iget v0, v0, Lcom/tkay/basead/a/b/g$a;->b:I

    iput v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ab:I

    goto :goto_0

    .line 1042
    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 1043
    iget v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ac:I

    iput v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->aa:I

    .line 1044
    iget v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ad:I

    iput v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ab:I

    .line 1048
    :cond_2
    :goto_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "mMaterialWidth: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->aa:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ", mMaterialHeight: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ab:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    return-void
.end method

.method protected v()V
    .locals 8

    .line 1052
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    if-eqz v0, :cond_0

    const/4 v1, 0x4

    .line 1053
    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/PanelView;->setVisibility(I)V

    .line 1054
    iget-object v2, p0, Lcom/tkay/basead/ui/BaseScreenATView;->y:Lcom/tkay/basead/ui/PanelView;

    iget-object v3, p0, Lcom/tkay/basead/ui/BaseScreenATView;->d:Lcom/tkay/core/common/f/h;

    iget-object v4, p0, Lcom/tkay/basead/ui/BaseScreenATView;->c:Lcom/tkay/core/common/f/i;

    iget v5, p0, Lcom/tkay/basead/ui/BaseScreenATView;->t:I

    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->m()Z

    move-result v6

    new-instance v7, Lcom/tkay/basead/ui/BaseScreenATView$5;

    invoke-direct {v7, p0}, Lcom/tkay/basead/ui/BaseScreenATView$5;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    invoke-virtual/range {v2 .. v7}, Lcom/tkay/basead/ui/PanelView;->init(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;IZLcom/tkay/basead/ui/PanelView$a;)V

    .line 1071
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/basead/ui/BaseScreenATView;->w()V

    return-void
.end method

.method protected abstract w()V
.end method

.method protected final x()Z
    .locals 1

    .line 1078
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->ak:Lcom/tkay/basead/c;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/tkay/basead/c;->a()Z

    move-result v0

    if-nez v0, :cond_1

    :cond_0
    iget-boolean v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->am:Z

    if-eqz v0, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    const/4 v0, 0x0

    return v0
.end method

.method protected y()V
    .locals 0

    return-void
.end method

.method protected z()V
    .locals 2

    .line 1095
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    if-nez v0, :cond_0

    return-void

    .line 1099
    :cond_0
    iget-boolean v1, p0, Lcom/tkay/basead/ui/BaseScreenATView;->M:Z

    if-eqz v1, :cond_1

    const/4 v1, 0x1

    .line 1100
    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MuteImageView;->setMute(Z)V

    goto :goto_0

    :cond_1
    const/4 v1, 0x0

    .line 1102
    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MuteImageView;->setMute(Z)V

    .line 1105
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MuteImageView;->setVisibility(I)V

    .line 1106
    iget-object v0, p0, Lcom/tkay/basead/ui/BaseScreenATView;->K:Lcom/tkay/basead/ui/MuteImageView;

    new-instance v1, Lcom/tkay/basead/ui/BaseScreenATView$6;

    invoke-direct {v1, p0}, Lcom/tkay/basead/ui/BaseScreenATView$6;-><init>(Lcom/tkay/basead/ui/BaseScreenATView;)V

    invoke-virtual {v0, v1}, Lcom/tkay/basead/ui/MuteImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method
