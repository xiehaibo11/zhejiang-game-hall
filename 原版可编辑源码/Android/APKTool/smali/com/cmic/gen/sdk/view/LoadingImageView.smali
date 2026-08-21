.class public Lcom/cmic/gen/sdk/view/LoadingImageView;
.super Landroid/widget/ImageView;
.source "LoadingImageView.java"


# instance fields
.field private a:Landroid/view/animation/Animation;

.field private b:Landroid/view/animation/LinearInterpolator;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 26
    invoke-direct {p0, p1}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    .line 12
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/LoadingImageView;->a:Landroid/view/animation/Animation;

    .line 13
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/LoadingImageView;->b:Landroid/view/animation/LinearInterpolator;

    .line 27
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/LoadingImageView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    .line 21
    invoke-direct {p0, p1, p2}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p1, 0x0

    .line 12
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/LoadingImageView;->a:Landroid/view/animation/Animation;

    .line 13
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/LoadingImageView;->b:Landroid/view/animation/LinearInterpolator;

    .line 22
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/LoadingImageView;->a()V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    .line 16
    invoke-direct {p0, p1, p2, p3}, Landroid/widget/ImageView;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p1, 0x0

    .line 12
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/LoadingImageView;->a:Landroid/view/animation/Animation;

    .line 13
    iput-object p1, p0, Lcom/cmic/gen/sdk/view/LoadingImageView;->b:Landroid/view/animation/LinearInterpolator;

    .line 17
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/LoadingImageView;->a()V

    return-void
.end method


# virtual methods
.method protected a()V
    .locals 3

    .line 31
    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/LoadingImageView;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0}, Lcom/cmic/gen/sdk/view/LoadingImageView;->getContext()Landroid/content/Context;

    move-result-object v1

    const-string v2, "umcsdk_anim_loading"

    invoke-static {v1, v2}, Lcom/cmic/gen/sdk/view/c;->c(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    invoke-static {v0, v1}, Landroid/view/animation/AnimationUtils;->loadAnimation(Landroid/content/Context;I)Landroid/view/animation/Animation;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/LoadingImageView;->a:Landroid/view/animation/Animation;

    .line 32
    new-instance v0, Landroid/view/animation/LinearInterpolator;

    invoke-direct {v0}, Landroid/view/animation/LinearInterpolator;-><init>()V

    iput-object v0, p0, Lcom/cmic/gen/sdk/view/LoadingImageView;->b:Landroid/view/animation/LinearInterpolator;

    .line 33
    iget-object v1, p0, Lcom/cmic/gen/sdk/view/LoadingImageView;->a:Landroid/view/animation/Animation;

    invoke-virtual {v1, v0}, Landroid/view/animation/Animation;->setInterpolator(Landroid/view/animation/Interpolator;)V

    return-void
.end method
