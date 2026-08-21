.class public final Lcom/kwad/components/ad/splashscreen/c/a/g;
.super Lcom/kwad/components/ad/splashscreen/c/c/a;

# interfaces
.implements Lcom/kwad/sdk/core/h/c;


# instance fields
.field private lr:Landroid/widget/FrameLayout;

.field private wH:Lcom/kwad/components/core/webview/jshandler/am;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/c/a;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/splashscreen/c/a/g;)Lcom/kwad/components/ad/splashscreen/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    return-object p0
.end method

.method private a(Lcom/kwad/sdk/core/webview/b;)Lcom/kwad/components/core/webview/jshandler/o;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mApkDownloadHelper:Lcom/kwad/components/core/e/d/c;

    new-instance v2, Lcom/kwad/components/ad/splashscreen/c/a/g$1;

    invoke-direct {v2, p0}, Lcom/kwad/components/ad/splashscreen/c/a/g$1;-><init>(Lcom/kwad/components/ad/splashscreen/c/a/g;)V

    invoke-direct {v0, p1, v1, v2}, Lcom/kwad/components/core/webview/jshandler/o;-><init>(Lcom/kwad/sdk/core/webview/b;Lcom/kwad/components/core/e/d/c;Lcom/kwad/sdk/core/webview/d/a/a;)V

    return-object v0
.end method

.method private aa(I)V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/core/report/z$a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/report/z$a;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mTimerHelper:Lcom/kwad/sdk/utils/bi;

    invoke-virtual {v1}, Lcom/kwad/sdk/utils/bi;->getTime()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/core/report/z$a;->duration:J

    :cond_0
    new-instance v1, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v1}, Lcom/kwad/sdk/core/report/j;-><init>()V

    const/4 v2, 0x6

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/report/j;->cm(I)Lcom/kwad/sdk/core/report/j;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/kwad/sdk/core/report/j;->a(Lcom/kwad/sdk/core/report/z$a;)Lcom/kwad/sdk/core/report/j;

    move-result-object v0

    const/4 v1, 0x2

    if-ne p1, v1, :cond_1

    const/16 p1, 0xe

    goto :goto_0

    :cond_1
    const/4 p1, 0x1

    :goto_0
    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/report/j;->ch(I)Lcom/kwad/sdk/core/report/j;

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object p1, p1, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v1, 0x0

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/core/report/a;->b(Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/sdk/core/report/j;Lorg/json/JSONObject;)V

    return-void
.end method

.method static synthetic b(Lcom/kwad/components/ad/splashscreen/c/a/g;)Lcom/kwad/components/ad/splashscreen/h;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    return-object p0
.end method

.method private ly()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    sget v1, Lcom/kwad/sdk/R$id;->splash_play_card_view:I

    invoke-virtual {v0, v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->findViewById(I)Landroid/view/View;

    move-result-object v0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/view/View;->setVisibility(I)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/components/ad/splashscreen/c/c/a;->a(Lcom/kwad/components/core/webview/jshandler/am;)V

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/components/ad/splashscreen/c/c/a;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V

    invoke-direct {p0, p2}, Lcom/kwad/components/ad/splashscreen/c/a/g;->a(Lcom/kwad/sdk/core/webview/b;)Lcom/kwad/components/core/webview/jshandler/o;

    move-result-object p2

    invoke-interface {p1, p2}, Lcom/kwad/sdk/components/l;->c(Lcom/kwad/sdk/core/webview/c/a;)V

    return-void
.end method

.method public final aK()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rD()V

    :cond_0
    return-void
.end method

.method public final aL()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rE()V

    :cond_0
    return-void
.end method

.method public final ah()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/c/a;->ah()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/h/a;->a(Lcom/kwad/sdk/core/h/c;)V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 2

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/a/g;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getWidth()I

    move-result v1

    int-to-float v1, v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/d/a/a;->b(Landroid/content/Context;F)I

    move-result v0

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    invoke-virtual {p0}, Lcom/kwad/components/ad/splashscreen/c/a/g;->getContext()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->mRootContainer:Lcom/kwad/sdk/core/view/AdBaseFrameLayout;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/view/AdBaseFrameLayout;->getHeight()I

    move-result v1

    int-to-float v1, v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/d/a/a;->b(Landroid/content/Context;F)I

    move-result v0

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->height:I

    return-void
.end method

.method public final b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/kwad/components/ad/splashscreen/c/c/a;->b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V

    iget v0, p1, Lcom/kwad/sdk/commercial/model/WebCloseStatus;->closeType:I

    invoke-direct {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/g;->aa(I)V

    iget p1, p1, Lcom/kwad/sdk/commercial/model/WebCloseStatus;->closeType:I

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {p1}, Lcom/kwad/components/ad/splashscreen/h;->kM()V

    return-void

    :cond_0
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    invoke-virtual {p1}, Lcom/kwad/components/ad/splashscreen/h;->kI()V

    return-void
.end method

.method public final cc()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/a/g;->ly()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->lr:Landroid/widget/FrameLayout;

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method public final eh()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    :cond_0
    invoke-direct {p0}, Lcom/kwad/components/ad/splashscreen/c/a/g;->ly()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->lr:Landroid/widget/FrameLayout;

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/widget/FrameLayout;->setVisibility(I)V

    return-void
.end method

.method public final getTKContainer()Landroid/widget/FrameLayout;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->lr:Landroid/widget/FrameLayout;

    return-object v0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-splash-end-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final onCreate()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/c/a;->onCreate()V

    sget v0, Lcom/kwad/sdk/R$id;->splash_end_card_view:I

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/splashscreen/c/a/g;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/widget/FrameLayout;

    iput-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->lr:Landroid/widget/FrameLayout;

    return-void
.end method

.method public final onUnbind()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->wH:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_0
    invoke-super {p0}, Lcom/kwad/components/ad/splashscreen/c/c/a;->onUnbind()V

    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/a/g;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v0, v0, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v0, p0}, Lcom/kwad/sdk/core/h/a;->b(Lcom/kwad/sdk/core/h/c;)V

    return-void
.end method
