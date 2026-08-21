.class public final Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Lcom/kwad/sdk/utils/bn$a;


# static fields
.field private static final vg:[Ljava/lang/String;


# instance fields
.field private gt:Lcom/kwad/components/core/webview/b/e/e;

.field private gv:Landroid/widget/TextView;

.field private gx:Lcom/kwad/sdk/utils/bn;

.field private gy:Z

.field private gz:J

.field private mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private final mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

.field private final mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

.field private vc:Landroid/widget/TextView;

.field private vd:Landroid/widget/ImageView;

.field private ve:Landroid/view/View;

.field private vf:Z

.field private vh:Z


# direct methods
.method static constructor <clinit>()V
    .locals 3

    const-string v0, "%ss\u540e\u83b7\u5f97\u5956\u52b11"

    const-string v1, "\u5df2\u83b7\u5f97\u5956\u52b11/2"

    const-string v2, "\u5df2\u83b7\u5f97\u5168\u90e8\u5956\u52b1"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vg:[Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vf:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vh:Z

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$1;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gt:Lcom/kwad/components/core/webview/b/e/e;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$2;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$3;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$3;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gz:J

    return-wide p1
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method private a(JJJ)V
    .locals 2

    const-wide/16 v0, 0x320

    sub-long v0, p3, v0

    sub-long/2addr v0, p5

    cmp-long p5, p1, v0

    if-gez p5, :cond_1

    sub-long/2addr p3, p1

    long-to-float p1, p3

    const/high16 p2, 0x447a0000    # 1000.0f

    div-float/2addr p1, p2

    const/high16 p2, 0x3f000000    # 0.5f

    add-float/2addr p1, p2

    float-to-int p1, p1

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->w(I)V

    iget-object p2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p2, p2, Lcom/kwad/components/ad/reward/j;->pt:Lcom/kwad/components/ad/reward/m/p;

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p2, p2, Lcom/kwad/components/ad/reward/j;->pt:Lcom/kwad/components/ad/reward/m/p;

    invoke-virtual {p2, p1}, Lcom/kwad/components/ad/reward/m/p;->U(I)V

    :cond_0
    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 p2, 0x1

    iput-boolean p2, p1, Lcom/kwad/components/ad/reward/j;->pp:Z

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/j;->t(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result p1

    if-eqz p1, :cond_4

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/j;->r(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result p1

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/k/b/a;->jH()Z

    move-result p1

    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->pA:Lcom/kwad/components/ad/reward/k/b/a;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/k/b/a;->jG()V

    goto :goto_0

    :cond_2
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/components/ad/reward/j;->s(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result p1

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->pB:Lcom/kwad/components/ad/reward/k/a/a;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->pB:Lcom/kwad/components/ad/reward/k/a/a;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/k/a/a;->jH()Z

    move-result p1

    if-nez p1, :cond_3

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->pB:Lcom/kwad/components/ad/reward/k/a/a;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/k/a/a;->jG()V

    :cond_3
    :goto_0
    iget-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vh:Z

    if-nez p1, :cond_5

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vc:Landroid/widget/TextView;

    sget-object p3, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vg:[Ljava/lang/String;

    aget-object p2, p3, p2

    invoke-virtual {p1, p2}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->is()V

    return-void

    :cond_4
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->notifyRewardVerify()V

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->ir()V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->pt:Lcom/kwad/components/ad/reward/m/p;

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->pt:Lcom/kwad/components/ad/reward/m/p;

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/kwad/components/ad/reward/m/p;->U(I)V

    :cond_5
    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;Z)Z
    .locals 0

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vh:Z

    return p1
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->bU()V

    return-void
.end method

.method private bU()V
    .locals 7

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->H(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0, v1, v2}, Lcom/kwad/components/ad/reward/j;->a(JLcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    const-wide/16 v2, 0x3e8

    div-long/2addr v0, v2

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v2}, Lcom/kwad/components/ad/reward/j;->t(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v2

    const/16 v3, 0x8

    const/4 v4, 0x0

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->ve:Landroid/view/View;

    invoke-virtual {v2, v4}, Landroid/view/View;->setVisibility(I)V

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->ve:Landroid/view/View;

    invoke-virtual {v2, p0}, Landroid/view/View;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vc:Landroid/widget/TextView;

    sget-object v5, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vg:[Ljava/lang/String;

    aget-object v5, v5, v4

    const/4 v6, 0x1

    new-array v6, v6, [Ljava/lang/Object;

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    aput-object v0, v6, v4

    invoke-static {v5, v6}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gv:Landroid/widget/TextView;

    invoke-virtual {v0, v3}, Landroid/widget/TextView;->setVisibility(I)V

    goto :goto_0

    :cond_0
    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->ve:Landroid/view/View;

    invoke-virtual {v2, v3}, Landroid/view/View;->setVisibility(I)V

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gv:Landroid/widget/TextView;

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gv:Landroid/widget/TextView;

    invoke-virtual {v0, v4}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gv:Landroid/widget/TextView;

    const/high16 v1, 0x3f800000    # 1.0f

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setAlpha(F)V

    :goto_0
    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->a(Lcom/kwad/components/ad/reward/e/j;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)Lcom/kwad/sdk/core/response/model/AdInfo;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gy:Z

    return p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)Lcom/kwad/sdk/utils/bn;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gx:Lcom/kwad/sdk/utils/bn;

    return-object p0
.end method

.method static synthetic f(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vc:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic g(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gv:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic h(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)Landroid/widget/ImageView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vd:Landroid/widget/ImageView;

    return-object p0
.end method

.method static synthetic i(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->notifyAdClick()V

    return-void
.end method

.method private ir()V
    .locals 2

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vf:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vf:Z

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vd:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setAlpha(F)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vd:Landroid/widget/ImageView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vd:Landroid/widget/ImageView;

    invoke-virtual {v0, p0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    const/4 v0, 0x2

    new-array v0, v0, [F

    fill-array-data v0, :array_0

    invoke-static {v0}, Landroid/animation/ValueAnimator;->ofFloat([F)Landroid/animation/ValueAnimator;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$4;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$4;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addListener(Landroid/animation/Animator$AnimatorListener;)V

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$5;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$5;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)V

    invoke-virtual {v0, v1}, Landroid/animation/ValueAnimator;->addUpdateListener(Landroid/animation/ValueAnimator$AnimatorUpdateListener;)V

    invoke-virtual {v0}, Landroid/animation/ValueAnimator;->start()V

    return-void

    nop

    :array_0
    .array-data 4
        0x0
        0x3f800000    # 1.0f
    .end array-data
.end method

.method private is()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdRewardStepListener:Lcom/kwad/components/ad/reward/e/d;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdRewardStepListener:Lcom/kwad/components/ad/reward/e/d;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/d;->fy()V

    :cond_0
    return-void
.end method

.method static synthetic it()[Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vg:[Ljava/lang/String;

    return-object v0
.end method

.method private notifyAdClick()V
    .locals 5

    new-instance v0, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/j;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v1, v1, Lcom/kwad/components/ad/reward/j;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getTouchCoords()Lcom/kwad/sdk/utils/ac$a;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->c(Lcom/kwad/sdk/utils/ac$a;)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    const/16 v1, 0x29

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/j;->cg(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v2, v2, Lcom/kwad/components/ad/reward/j;->mReportExtData:Lorg/json/JSONObject;

    const-string v3, "native_id"

    const-string v4, "playTopBar-style1"

    invoke-static {v1, v3, v4, v0, v2}, Lcom/kwad/components/ad/reward/i/b;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Ljava/lang/String;Ljava/lang/String;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/b;->bE()V

    return-void
.end method

.method private notifyRewardVerify()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdOpenInteractionListener:Lcom/kwad/components/ad/reward/e/b;

    invoke-interface {v0}, Lcom/kwad/components/ad/reward/e/b;->onRewardVerify()V

    return-void
.end method

.method private w(I)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iput p1, v0, Lcom/kwad/components/ad/reward/j;->pC:I

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->t(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vh:Z

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vc:Landroid/widget/TextView;

    sget-object v1, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vg:[Ljava/lang/String;

    const/4 v2, 0x0

    aget-object v1, v1, v2

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    aput-object p1, v3, v2

    invoke-static {v1, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gv:Landroid/widget/TextView;

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_1
    return-void
.end method


# virtual methods
.method public final a(JJ)V
    .locals 10

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aG(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/r/a;->pT()I

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    move v0, v1

    :goto_0
    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aE(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    goto :goto_1

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->aC(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result v0

    :goto_1
    iget-object v2, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-boolean v2, v2, Lcom/kwad/components/ad/reward/j;->pm:Z

    if-eqz v2, :cond_2

    const/16 v1, 0x3e8

    :cond_2
    mul-int/2addr v0, v1

    int-to-long v8, v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    move-wide v2, p3

    move-wide v4, p1

    move-wide v6, v8

    invoke-static/range {v1 .. v7}, Lcom/kwad/components/ad/reward/n;->a(Lcom/kwad/components/ad/reward/j;JJJ)V

    move-object v1, p0

    invoke-direct/range {v1 .. v7}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->a(JJJ)V

    return-void
.end method

.method public final a(Landroid/os/Message;)V
    .locals 7

    iget p1, p1, Landroid/os/Message;->what:I

    const/4 v0, 0x1

    if-ne p1, v0, :cond_2

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j;->gb()Z

    move-result p1

    const-wide/16 v1, 0x1f4

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/j;->ga()Z

    move-result p1

    if-eqz p1, :cond_0

    goto :goto_0

    :cond_0
    iget-wide v3, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gz:J

    add-long/2addr v3, v1

    iput-wide v3, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gz:J

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->Y(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v3

    iget-wide v5, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gz:J

    invoke-virtual {p0, v3, v4, v5, v6}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->a(JJ)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gx:Lcom/kwad/sdk/utils/bn;

    invoke-virtual {p1, v0, v1, v2}, Lcom/kwad/sdk/utils/bn;->sendEmptyMessageDelayed(IJ)Z

    goto :goto_1

    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gx:Lcom/kwad/sdk/utils/bn;

    invoke-virtual {p1, v0, v1, v2}, Lcom/kwad/sdk/utils/bn;->sendEmptyMessageDelayed(IJ)Z

    :cond_2
    :goto_1
    return-void
.end method

.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    new-instance v0, Lcom/kwad/sdk/utils/bn;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/utils/bn;-><init>(Lcom/kwad/sdk/utils/bn$a;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gx:Lcom/kwad/sdk/utils/bn;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->bU()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->jR()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdInfo:Lcom/kwad/sdk/core/response/model/AdInfo;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->Y(Lcom/kwad/sdk/core/response/model/AdInfo;)J

    move-result-wide v0

    long-to-float v0, v0

    const/high16 v1, 0x447a0000    # 1000.0f

    div-float/2addr v0, v1

    float-to-int v0, v0

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->w(I)V

    :cond_1
    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vd:Landroid/widget/ImageView;

    if-eq p1, v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->ve:Landroid/view/View;

    if-ne p1, v0, :cond_1

    :cond_0
    new-instance v0, Lcom/kwad/components/core/e/d/a$a;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    invoke-direct {v0, p1}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, p1}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    const/4 v0, 0x2

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {v0}, Lcom/kwad/components/ad/reward/l/d;->getPlayDuration()J

    move-result-wide v0

    invoke-virtual {p1, v0, v1}, Lcom/kwad/components/core/e/d/a$a;->s(J)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$6;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a$6;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;)V

    invoke-virtual {p1, v0}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    :cond_1
    return-void
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_video_count_down:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gv:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_detail_reward_icon:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/ImageView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vd:Landroid/widget/ImageView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_reward_deep_task_count_down:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vc:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_detail_reward_deep_task_view:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->findViewById(I)Landroid/view/View;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->ve:Landroid/view/View;

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/ad/reward/c;->ft()Lcom/kwad/components/ad/reward/c;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mRewardVerifyListener:Lcom/kwad/components/ad/reward/e/j;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/c;->b(Lcom/kwad/components/ad/reward/e/j;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vd:Landroid/widget/ImageView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/ImageView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->ve:Landroid/view/View;

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vf:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->vh:Z

    iput-boolean v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/a;->gy:Z

    return-void
.end method
