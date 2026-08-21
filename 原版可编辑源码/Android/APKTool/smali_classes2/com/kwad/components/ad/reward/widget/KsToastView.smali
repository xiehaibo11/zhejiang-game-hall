.class public Lcom/kwad/components/ad/reward/widget/KsToastView;
.super Landroid/widget/LinearLayout;


# instance fields
.field AY:Landroid/widget/TextView;

.field private AZ:Ljava/lang/String;

.field private Ba:Ljava/lang/Runnable;

.field private countDown:I


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const/4 v0, 0x3

    iput v0, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->countDown:I

    const-string v0, "%ss\u540e\u81ea\u52a8\u8fdb\u5165"

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->AZ:Ljava/lang/String;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->Ba:Ljava/lang/Runnable;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/widget/KsToastView;->init(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const/4 p2, 0x3

    iput p2, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->countDown:I

    const-string p2, "%ss\u540e\u81ea\u52a8\u8fdb\u5165"

    iput-object p2, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->AZ:Ljava/lang/String;

    const/4 p2, 0x0

    iput-object p2, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->Ba:Ljava/lang/Runnable;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/widget/KsToastView;->init(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const/4 p2, 0x3

    iput p2, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->countDown:I

    const-string p2, "%ss\u540e\u81ea\u52a8\u8fdb\u5165"

    iput-object p2, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->AZ:Ljava/lang/String;

    const/4 p2, 0x0

    iput-object p2, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->Ba:Ljava/lang/Runnable;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/widget/KsToastView;->init(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Z)V
    .locals 0

    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const/4 p2, 0x3

    iput p2, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->countDown:I

    const-string p2, "%ss\u540e\u81ea\u52a8\u8fdb\u5165"

    iput-object p2, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->AZ:Ljava/lang/String;

    const/4 p2, 0x0

    iput-object p2, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->Ba:Ljava/lang/Runnable;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/widget/KsToastView;->init(Landroid/content/Context;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/widget/KsToastView;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->countDown:I

    return p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/widget/KsToastView;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/reward/widget/KsToastView;->w(I)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/widget/KsToastView;)I
    .locals 2

    iget v0, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->countDown:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->countDown:I

    return v0
.end method

.method private init(Landroid/content/Context;)V
    .locals 1

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_interstitial_toast_layout:I

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_total_count_down_text:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/widget/KsToastView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->AY:Landroid/widget/TextView;

    return-void
.end method

.method private w(I)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->AY:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->AZ:Ljava/lang/String;

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    const/4 v3, 0x0

    aput-object p1, v2, v3

    invoke-static {v1, v2}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method


# virtual methods
.method public final V(I)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->Ba:Ljava/lang/Runnable;

    if-nez p1, :cond_0

    new-instance p1, Lcom/kwad/components/ad/reward/widget/KsToastView$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/reward/widget/KsToastView$1;-><init>(Lcom/kwad/components/ad/reward/widget/KsToastView;)V

    iput-object p1, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->Ba:Ljava/lang/Runnable;

    :cond_0
    const/4 p1, 0x3

    iput p1, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->countDown:I

    iget-object p1, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->Ba:Ljava/lang/Runnable;

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/reward/widget/KsToastView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method protected onDetachedFromWindow()V
    .locals 1

    invoke-super {p0}, Landroid/widget/LinearLayout;->onDetachedFromWindow()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/widget/KsToastView;->Ba:Ljava/lang/Runnable;

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/widget/KsToastView;->removeCallbacks(Ljava/lang/Runnable;)Z

    return-void
.end method
