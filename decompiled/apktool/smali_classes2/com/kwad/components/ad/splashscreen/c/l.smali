.class public final Lcom/kwad/components/ad/splashscreen/c/l;
.super Lcom/kwad/components/ad/splashscreen/c/i;

# interfaces
.implements Lcom/kwad/components/ad/splashscreen/g;
.implements Lcom/kwad/sdk/core/g/a;


# instance fields
.field private Dg:Landroid/view/View;

.field private Dh:Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;

.field private Di:Landroid/widget/TextView;

.field private Dj:Landroid/widget/TextView;

.field private Dk:Lcom/kwad/sdk/core/g/c;

.field private Dl:Lcom/kwad/components/ad/splashscreen/d;

.field private Dm:Ljava/lang/Runnable;

.field private mStartTime:J


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/i;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/l$4;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/l$4;-><init>(Lcom/kwad/components/ad/splashscreen/c/l;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dm:Ljava/lang/Runnable;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/l;)Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dh:Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;

    return-object p0
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/c/l;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->mStartTime:J

    return-wide v0
.end method

.method static synthetic c(Lcom/kwad/components/ad/splashscreen/c/l;)Lcom/kwad/sdk/core/g/c;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dk:Lcom/kwad/sdk/core/g/c;

    return-object p0
.end method


# virtual methods
.method public final X(I)V
    .locals 0

    return-void
.end method

.method protected final Z(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dj:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    return-void
.end method

.method public final ab(Ljava/lang/String;)V
    .locals 9

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v0}, Lcom/kwad/sdk/core/h/a;->sB()Z

    move-result v0

    invoke-static {}, Lcom/kwad/components/core/e/c/b;->mZ()Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v0, :cond_2

    if-eqz v1, :cond_0

    goto :goto_1

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dh:Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->lG()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz v0, :cond_1

    iget-object v3, p0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    const/4 v4, 0x1

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/l;->getContext()Landroid/content/Context;

    move-result-object v5

    const/16 v6, 0xa1

    const/4 v7, 0x2

    new-instance v8, Lcom/kwad/components/ad/splashscreen/c/l$3;

    invoke-direct {v8, p0, p1}, Lcom/kwad/components/ad/splashscreen/c/l$3;-><init>(Lcom/kwad/components/ad/splashscreen/c/l;Ljava/lang/String;)V

    invoke-virtual/range {v3 .. v8}, Lcom/kwad/components/ad/splashscreen/h;->a(ILandroid/content/Context;IILcom/kwad/components/ad/splashscreen/h$a;)V

    :cond_1
    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/l;->lg()V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dm:Ljava/lang/Runnable;

    const-wide/16 v0, 0x7d0

    :goto_0
    invoke-static {p1, v2, v0, v1}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    return-void

    :cond_2
    :goto_1
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dm:Ljava/lang/Runnable;

    const-wide/16 v0, 0x708

    goto :goto_0
.end method

.method public final ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/i;->ah()V

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/l$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/l$2;-><init>(Lcom/kwad/components/ad/splashscreen/c/l;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/splashscreen/h;->a(Lcom/kwad/components/ad/splashscreen/g;)V

    :cond_0
    return-void
.end method

.method protected final initView()V
    .locals 2

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->mStartTime:J

    sget v0, Lcom/kwad/sdk/R$id;->ksad_rotate_layout:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/l;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewStub;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Landroid/view/ViewStub;->inflate()Landroid/view/View;

    move-result-object v0

    goto :goto_0

    :cond_0
    sget v0, Lcom/kwad/sdk/R$id;->ksad_rotate_root:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/l;->findViewById(I)Landroid/view/View;

    move-result-object v0

    :goto_0
    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dg:Landroid/view/View;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_rotate_text:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/l;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Di:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_rotate_action:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/l;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dj:Landroid/widget/TextView;

    sget v0, Lcom/kwad/sdk/R$id;->ksad_rotate_view:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/l;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dh:Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;

    return-void
.end method

.method public final kD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dk:Lcom/kwad/sdk/core/g/c;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/l;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/c;->bh(Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method protected final la()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/l;->getContext()Landroid/content/Context;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    const/4 v3, 0x1

    invoke-static {v1, v0, v2, v3}, Lcom/kwad/components/ad/splashscreen/d;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/core/e/d/c;I)Lcom/kwad/components/ad/splashscreen/d;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dl:Lcom/kwad/components/ad/splashscreen/d;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Di:Landroid/widget/TextView;

    if-eqz v1, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/d;->getTitle()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dj:Landroid/widget/TextView;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dl:Lcom/kwad/components/ad/splashscreen/d;

    invoke-virtual {v1}, Lcom/kwad/components/ad/splashscreen/d;->kx()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_1
    return-void
.end method

.method protected final lb()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dg:Landroid/view/View;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dg:Landroid/view/View;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x0

    const/16 v2, 0xb8

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILorg/json/JSONObject;)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/a;->sb()Lcom/kwad/components/core/webview/b/d/a;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/webview/b/d/a;->aR(I)V

    :cond_0
    return-void
.end method

.method protected final lc()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/b;->bE(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dk:Lcom/kwad/sdk/core/g/c;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/sdk/core/g/c;

    invoke-direct {v1, v0}, Lcom/kwad/sdk/core/g/c;-><init>(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;)V

    iput-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dk:Lcom/kwad/sdk/core/g/c;

    invoke-virtual {v1, p0}, Lcom/kwad/sdk/core/g/c;->a(Lcom/kwad/sdk/core/g/a;)V

    return-void

    :cond_0
    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/g/c;->a(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;)V

    return-void
.end method

.method protected final ld()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dk:Lcom/kwad/sdk/core/g/c;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/l;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/c;->bg(Landroid/content/Context;)V

    return-void
.end method

.method protected final le()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dh:Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/l$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/splashscreen/c/l$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/l;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/widget/KsRotateView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final lk()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/a;->aC(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/i;->onUnbind()V

    const-string v0, "SplashRotatePresenter"

    const-string v1, "onUnbind"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->Dk:Lcom/kwad/sdk/core/g/c;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/l;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/c;->bh(Landroid/content/Context;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/l;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/splashscreen/h;->b(Lcom/kwad/components/ad/splashscreen/g;)V

    :cond_1
    return-void
.end method
