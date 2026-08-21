.class public final Lcom/kwad/components/ad/splashscreen/c/m;
.super Lcom/kwad/components/ad/splashscreen/c/e;

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Lcom/kwad/components/ad/splashscreen/g;
.implements Lcom/kwad/sdk/core/g/b;
.implements Lcom/kwad/sdk/widget/c;


# static fields
.field private static jM:J = 0x190L


# instance fields
.field private CC:Z

.field private CY:Lcom/kwad/components/ad/splashscreen/f/a;

.field private Dl:Lcom/kwad/components/ad/splashscreen/d;

.field private Dp:Landroid/view/ViewGroup;

.field private Dq:Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;

.field private Dr:Landroid/widget/TextView;

.field private dO:Lcom/kwad/sdk/core/g/d;

.field private dP:Landroid/os/Vibrator;

.field private mStartTime:J


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/e;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/m;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->mStartTime:J

    return-wide v0
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/c/m;)Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dq:Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;

    return-object p0
.end method

.method static synthetic c(Lcom/kwad/components/ad/splashscreen/c/m;)Landroid/widget/TextView;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dr:Landroid/widget/TextView;

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/components/ad/splashscreen/c/m;)Lcom/kwad/sdk/core/g/d;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->dO:Lcom/kwad/sdk/core/g/d;

    return-object p0
.end method

.method static synthetic e(Lcom/kwad/components/ad/splashscreen/c/m;)Landroid/content/Context;
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/m;->getContext()Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method private lf()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CY:Lcom/kwad/components/ad/splashscreen/f/a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/m$3;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/m;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-direct {v0, p0, v1, v2}, Lcom/kwad/components/ad/splashscreen/c/m$3;-><init>(Lcom/kwad/components/ad/splashscreen/c/m;Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CY:Lcom/kwad/components/ad/splashscreen/f/a;

    goto :goto_0

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/f/a;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    :goto_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CY:Lcom/kwad/components/ad/splashscreen/f/a;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/c;->b(Lcom/kwad/sdk/api/KsAppDownloadListener;)V

    :cond_1
    return-void
.end method

.method private ll()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dr:Landroid/widget/TextView;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dl:Lcom/kwad/components/ad/splashscreen/d;

    invoke-virtual {v1}, Lcom/kwad/components/ad/splashscreen/d;->kx()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dq:Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dl:Lcom/kwad/components/ad/splashscreen/d;

    invoke-virtual {v1}, Lcom/kwad/components/ad/splashscreen/d;->ky()I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;->ae(I)V

    :cond_1
    return-void
.end method

.method private lm()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dp:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dp:Landroid/view/ViewGroup;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x0

    const/16 v2, 0xb9

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;ILorg/json/JSONObject;)V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/a;->sb()Lcom/kwad/components/core/webview/b/d/a;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/kwad/components/core/webview/b/d/a;->aR(I)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final X(I)V
    .locals 0

    return-void
.end method

.method public final a(D)V
    .locals 2

    invoke-static {}, Lcom/kwad/components/core/e/c/b;->mZ()Z

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v1}, Lcom/kwad/sdk/core/h/a;->sB()Z

    move-result v1

    if-eqz v1, :cond_1

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dq:Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/m$5;

    invoke-direct {v1, p0, p1, p2}, Lcom/kwad/components/ad/splashscreen/c/m$5;-><init>(Lcom/kwad/components/ad/splashscreen/c/m;D)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;->b(Landroid/animation/AnimatorListenerAdapter;)V

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/m;->getContext()Landroid/content/Context;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/m;->dP:Landroid/os/Vibrator;

    invoke-static {p1, p2}, Lcom/kwad/sdk/utils/bj;->a(Landroid/content/Context;Landroid/os/Vibrator;)V

    return-void

    :cond_1
    :goto_0
    new-instance p1, Lcom/kwad/components/ad/splashscreen/c/m$4;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/splashscreen/c/m$4;-><init>(Lcom/kwad/components/ad/splashscreen/c/m;)V

    const/4 p2, 0x0

    const-wide/16 v0, 0x1f4

    invoke-static {p1, p2, v0, v1}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    return-void
.end method

.method public final a(Landroid/view/View;)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onSingleTap: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "SplashShakePresenter"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->dp(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/m;->getContext()Landroid/content/Context;

    move-result-object v0

    const/16 v1, 0x9e

    const/4 v2, 0x1

    invoke-virtual {p1, v2, v0, v1, v2}, Lcom/kwad/components/ad/splashscreen/h;->c(ILandroid/content/Context;II)V

    :cond_1
    return-void
.end method

.method public final aT()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/a;->aC(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method

.method public final ah()V
    .locals 4

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-nez v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/components/ad/splashscreen/c/m$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/splashscreen/c/m$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/m;)V

    invoke-static {v0}, Lcom/kwad/sdk/utils/bj;->postOnUiThread(Ljava/lang/Runnable;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/m;->getContext()Landroid/content/Context;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v2, v2, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    const/4 v3, 0x2

    invoke-static {v1, v0, v2, v3}, Lcom/kwad/components/ad/splashscreen/d;->a(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/response/model/AdInfo;Lcom/kwad/components/core/e/d/c;I)Lcom/kwad/components/ad/splashscreen/d;

    move-result-object v1

    iput-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dl:Lcom/kwad/components/ad/splashscreen/d;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v1}, Lcom/kwad/sdk/core/response/b/b;->bD(Lcom/kwad/sdk/core/response/model/AdTemplate;)F

    move-result v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/m;->dO:Lcom/kwad/sdk/core/g/d;

    if-nez v2, :cond_1

    new-instance v2, Lcom/kwad/sdk/core/g/d;

    invoke-direct {v2, v1}, Lcom/kwad/sdk/core/g/d;-><init>(F)V

    iput-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/m;->dO:Lcom/kwad/sdk/core/g/d;

    invoke-virtual {v2, p0}, Lcom/kwad/sdk/core/g/d;->a(Lcom/kwad/sdk/core/g/b;)V

    goto :goto_0

    :cond_1
    invoke-virtual {v2, v1}, Lcom/kwad/sdk/core/g/d;->e(F)V

    :goto_0
    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/m;->ll()V

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/a;->ax(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/m;->lf()V

    :cond_2
    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/m;->lm()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->dO:Lcom/kwad/sdk/core/g/d;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/m;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/d;->bg(Landroid/content/Context;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dq:Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;

    new-instance v1, Lcom/kwad/components/ad/splashscreen/c/m$2;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/splashscreen/c/m$2;-><init>(Lcom/kwad/components/ad/splashscreen/c/m;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;->post(Ljava/lang/Runnable;)Z

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/c;->bV(Lcom/kwad/sdk/core/response/model/AdTemplate;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CC:Z

    new-instance v0, Lcom/kwad/sdk/widget/f;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dq:Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;

    invoke-virtual {v1}, Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;->getContext()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dq:Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;

    invoke-direct {v0, v1, v2, p0}, Lcom/kwad/sdk/widget/f;-><init>(Landroid/content/Context;Landroid/view/View;Lcom/kwad/sdk/widget/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/splashscreen/h;->a(Lcom/kwad/components/ad/splashscreen/g;)V

    return-void
.end method

.method public final b(Landroid/view/View;)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onSlide: enableSlickClick: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-boolean v1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CC:Z

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SplashShakePresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CC:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p1

    const/16 v1, 0x99

    const/4 v2, 0x1

    invoke-virtual {v0, v2, p1, v1, v2}, Lcom/kwad/components/ad/splashscreen/h;->c(ILandroid/content/Context;II)V

    :cond_1
    return-void
.end method

.method public final kD()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->dO:Lcom/kwad/sdk/core/g/d;

    if-eqz v0, :cond_0

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/m;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/d;->bh(Landroid/content/Context;)V

    :cond_0
    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onClick: "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SplashShakePresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dq:Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;

    invoke-virtual {p1, v0}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/response/b/b;->dp(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/m;->getContext()Landroid/content/Context;

    move-result-object v0

    const/16 v1, 0x9e

    const/4 v2, 0x1

    invoke-virtual {p1, v2, v0, v1, v2}, Lcom/kwad/components/ad/splashscreen/h;->c(ILandroid/content/Context;II)V

    :cond_0
    return-void
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onCreate()V

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->mStartTime:J

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/m;->getContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    const-string v1, "vibrator"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/os/Vibrator;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->dP:Landroid/os/Vibrator;

    :cond_0
    sget v0, Lcom/kwad/sdk/R$id;->ksad_shake_layout:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/m;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/view/ViewStub;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/view/ViewStub;->inflate()Landroid/view/View;

    move-result-object v0

    goto :goto_0

    :cond_1
    sget v0, Lcom/kwad/sdk/R$id;->ksad_shake_root:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/m;->findViewById(I)Landroid/view/View;

    move-result-object v0

    :goto_0
    check-cast v0, Landroid/view/ViewGroup;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dp:Landroid/view/ViewGroup;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dp:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_shake_action:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dr:Landroid/widget/TextView;

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dp:Landroid/view/ViewGroup;

    sget v1, Lcom/kwad/sdk/R$id;->ksad_shake_view:I

    invoke-virtual {v0, v1}, Landroid/view/ViewGroup;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dq:Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/e;->onUnbind()V

    const-string v0, "SplashShakePresenter"

    const-string v1, "onUnbind"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/splashscreen/h;->b(Lcom/kwad/components/ad/splashscreen/g;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->dO:Lcom/kwad/sdk/core/g/d;

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/m;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/g/d;->bh(Landroid/content/Context;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/m;->Dq:Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/kwad/components/ad/splashscreen/widget/KsShakeView;->lI()V

    :cond_2
    return-void
.end method
