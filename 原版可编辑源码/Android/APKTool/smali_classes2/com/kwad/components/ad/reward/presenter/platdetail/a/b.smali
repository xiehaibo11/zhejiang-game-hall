.class public final Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;
.super Lcom/kwad/components/ad/reward/presenter/a;

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private gB:Landroid/widget/TextView;

.field private gD:J

.field private gt:Lcom/kwad/components/core/webview/b/e/e;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

.field private mVideoPlayStateListener:Lcom/kwad/components/core/video/l;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/a;-><init>()V

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b$1;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b$1;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->gt:Lcom/kwad/components/core/webview/b/e/e;

    new-instance v0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b$2;

    invoke-direct {v0, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b$2;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;)V

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;)Lcom/kwad/components/ad/reward/j;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;J)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->f(J)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->bU()V

    return-void
.end method

.method private bU()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/c;->bS(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->gD:J

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->a(Lcom/kwad/components/core/video/l;)V

    return-void
.end method

.method private bV()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->gB:Landroid/widget/TextView;

    invoke-virtual {v0}, Landroid/widget/TextView;->getVisibility()I

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/c;->bT(Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_1

    sget-object v0, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->RESPONE_MONITOR:Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$ReportClient;->buildNormalApmReporter()Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    const-string v1, "response_biz_error_element_pv"

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->dx(Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->aK(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    const/4 v1, 0x0

    const-string v2, "ELEMENT_PLAY_DETAIL_CALL_IMPRESSION"

    invoke-virtual {v0, v2, v1}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->W(Ljava/lang/String;Ljava/lang/String;)Lcom/kwad/sdk/core/report/KSLoggerReporter$b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/KSLoggerReporter$b;->report()V

    return-void

    :cond_1
    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->gB:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->gB:Landroid/widget/TextView;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->gB:Landroid/widget/TextView;

    invoke-virtual {v0, p0}, Landroid/widget/TextView;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->gB:Landroid/widget/TextView;

    new-instance v1, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b$3;

    invoke-direct {v1, p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b$3;-><init>(Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;)V

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method private bW()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    const-string v1, "native_id"

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/j;->G(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic c(Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->bW()V

    return-void
.end method

.method private f(J)V
    .locals 2

    iget-wide v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->gD:J

    cmp-long p1, p1, v0

    if-ltz p1, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->bV()V

    :cond_0
    return-void
.end method


# virtual methods
.method public final ah()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/j;->b(Lcom/kwad/components/ad/reward/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->a(Lcom/kwad/components/core/webview/b/e/e;)V

    return-void

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->bU()V

    return-void
.end method

.method public final onClick(Landroid/view/View;)V
    .locals 8

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->gB:Landroid/widget/TextView;

    if-ne p1, v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    const/4 v2, 0x1

    invoke-virtual {p1}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v3

    const/16 v4, 0x28

    const/4 v5, 0x1

    iget-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object p1, p1, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    invoke-virtual {p1}, Lcom/kwad/components/ad/reward/l/d;->getPlayDuration()J

    move-result-wide v6

    invoke-virtual/range {v1 .. v7}, Lcom/kwad/components/ad/reward/j;->a(ILandroid/content/Context;IIJ)V

    :cond_0
    return-void
.end method

.method public final onCreate()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->ksad_detail_call_btn:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/TextView;

    iput-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->gB:Landroid/widget/TextView;

    const-string v1, "topBarCallLabel"

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setContentDescription(Ljava/lang/CharSequence;)V

    return-void
.end method

.method public final onUnbind()V
    .locals 2

    invoke-super {p0}, Lcom/kwad/components/ad/reward/presenter/a;->onUnbind()V

    invoke-static {}, Lcom/kwad/components/core/webview/b/d/b;->sf()Lcom/kwad/components/core/webview/b/d/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->gt:Lcom/kwad/components/core/webview/b/e/e;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/d/b;->b(Lcom/kwad/components/core/webview/b/e/e;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->qx:Lcom/kwad/components/ad/reward/j;

    iget-object v0, v0, Lcom/kwad/components/ad/reward/j;->oV:Lcom/kwad/components/ad/reward/l/d;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->mVideoPlayStateListener:Lcom/kwad/components/core/video/l;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/reward/l/d;->b(Lcom/kwad/components/core/video/l;)V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/a/b;->gB:Landroid/widget/TextView;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setVisibility(I)V

    return-void
.end method
