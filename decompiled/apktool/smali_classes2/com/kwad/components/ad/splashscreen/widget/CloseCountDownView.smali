.class public Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;
.super Landroid/widget/LinearLayout;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$a;
    }
.end annotation


# instance fields
.field private Ep:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$a;

.field private Fc:Ljava/lang/String;

.field private Fd:I

.field private Fe:Landroid/widget/TextView;

.field private Ff:Landroid/widget/TextView;

.field private Fg:Landroid/widget/ImageView;

.field private Fh:Ljava/lang/Runnable;

.field private nL:Z


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 1

    invoke-direct {p0, p1}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;)V

    const-string v0, "%ss"

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fc:Ljava/lang/String;

    const/4 v0, 0x5

    iput v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fd:I

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->nL:Z

    new-instance v0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$1;-><init>(Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fh:Ljava/lang/Runnable;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Z(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;)V

    const-string p2, "%ss"

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fc:Ljava/lang/String;

    const/4 p2, 0x5

    iput p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fd:I

    const/4 p2, 0x0

    iput-boolean p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->nL:Z

    new-instance p2, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$1;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$1;-><init>(Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;)V

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fh:Ljava/lang/Runnable;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Z(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;I)V

    const-string p2, "%ss"

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fc:Ljava/lang/String;

    const/4 p2, 0x5

    iput p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fd:I

    const/4 p2, 0x0

    iput-boolean p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->nL:Z

    new-instance p2, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$1;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$1;-><init>(Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;)V

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fh:Ljava/lang/Runnable;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Z(Landroid/content/Context;)V

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V
    .locals 0

    invoke-direct {p0, p1, p2, p3, p4}, Landroid/widget/LinearLayout;-><init>(Landroid/content/Context;Landroid/util/AttributeSet;II)V

    const-string p2, "%ss"

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fc:Ljava/lang/String;

    const/4 p2, 0x5

    iput p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fd:I

    const/4 p2, 0x0

    iput-boolean p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->nL:Z

    new-instance p2, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$1;

    invoke-direct {p2, p0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$1;-><init>(Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;)V

    iput-object p2, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fh:Ljava/lang/Runnable;

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Z(Landroid/content/Context;)V

    return-void
.end method

.method private Z(Landroid/content/Context;)V
    .locals 1

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->setOrientation(I)V

    sget v0, Lcom/kwad/sdk/R$layout;->ksad_endcard_close_view:I

    invoke-static {p1, v0, p0}, Lcom/kwad/sdk/m/l;->inflate(Landroid/content/Context;ILandroid/view/ViewGroup;)Landroid/view/View;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_ad_endcard_second:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fe:Landroid/widget/TextView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_ad_endcard_line:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Ff:Landroid/widget/TextView;

    sget p1, Lcom/kwad/sdk/R$id;->ksad_splash_endcard_close_img:I

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/ImageView;

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fg:Landroid/widget/ImageView;

    new-instance v0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$2;-><init>(Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;)V

    invoke-virtual {p1, v0}, Landroid/widget/ImageView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->ad(I)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->nL:Z

    return p0
.end method

.method private ad(I)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fe:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fc:Ljava/lang/String;

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

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;)I
    .locals 0

    iget p0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fd:I

    return p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;)Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$a;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Ep:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$a;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;)I
    .locals 2

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fd:I

    add-int/lit8 v1, v0, -0x1

    iput v1, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fd:I

    return v0
.end method

.method private eX()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fh:Ljava/lang/Runnable;

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private eY()V
    .locals 1

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->nL:Z

    return-void
.end method

.method private eZ()V
    .locals 1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->nL:Z

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/core/response/model/AdInfo;)V
    .locals 3

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bV(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/a;->bU(Lcom/kwad/sdk/core/response/model/AdInfo;)I

    move-result p1

    iput p1, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fd:I

    const/4 p1, 0x0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fe:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Ff:Landroid/widget/TextView;

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setVisibility(I)V

    iget v0, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Fd:I

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->ad(I)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x41400000    # 12.0f

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->getContext()Landroid/content/Context;

    move-result-object v0

    const/high16 v1, 0x40800000    # 4.0f

    :goto_0
    invoke-static {v0, v1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2, v1}, Lcom/kwad/sdk/d/a/a;->a(Landroid/content/Context;F)I

    move-result v1

    invoke-virtual {p0, v0, p1, v1, p1}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->setPadding(IIII)V

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->eX()V

    return-void
.end method

.method public final aK()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->eZ()V

    return-void
.end method

.method public final aL()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->eY()V

    return-void
.end method

.method public final bd()V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->getHandler()Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->getHandler()Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public setOnViewClickListener(Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView;->Ep:Lcom/kwad/components/ad/splashscreen/widget/CloseCountDownView$a;

    return-void
.end method
