.class public final Lcom/kwad/components/ad/h/d;
.super Lcom/kwad/sdk/widget/KSFrameLayout;

# interfaces
.implements Lcom/kwad/components/core/webview/b/i;
.implements Lcom/kwad/sdk/core/h/c;


# static fields
.field public static oc:Ljava/lang/String; = "PUSH_VIEW_TAG"


# instance fields
.field private final bG:Lcom/kwad/components/core/widget/a/b;

.field private cG:Lcom/kwad/components/core/webview/jshandler/am;

.field private lp:Lcom/kwad/components/core/webview/b/h;

.field private od:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private oe:Lcom/kwad/components/ad/b/a/b;

.field private of:Z

.field private og:Landroid/view/ViewGroup;

.field private oh:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    .locals 2

    invoke-direct {p0, p1}, Lcom/kwad/sdk/widget/KSFrameLayout;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/kwad/components/ad/h/d;->of:Z

    sget-object p1, Lcom/kwad/components/ad/h/d;->oc:Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/kwad/components/ad/h/d;->setTag(Ljava/lang/Object;)V

    iput-object p2, p0, Lcom/kwad/components/ad/h/d;->od:Lcom/kwad/sdk/core/response/model/AdTemplate;

    new-instance p1, Lcom/kwad/components/core/widget/a/b;

    const/16 p2, 0x64

    invoke-direct {p1, p0, p2}, Lcom/kwad/components/core/widget/a/b;-><init>(Landroid/view/View;I)V

    iput-object p1, p0, Lcom/kwad/components/ad/h/d;->bG:Lcom/kwad/components/core/widget/a/b;

    new-instance p1, Lcom/kwad/components/ad/h/d$1;

    invoke-virtual {p0}, Lcom/kwad/components/ad/h/d;->getContext()Landroid/content/Context;

    move-result-object p2

    const-wide/16 v0, -0x1

    invoke-direct {p1, p0, v0, v1, p2}, Lcom/kwad/components/ad/h/d$1;-><init>(Lcom/kwad/components/ad/h/d;JLandroid/content/Context;)V

    iput-object p1, p0, Lcom/kwad/components/ad/h/d;->lp:Lcom/kwad/components/core/webview/b/h;

    iget-object p2, p0, Lcom/kwad/components/ad/h/d;->od:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const/4 v0, 0x0

    invoke-virtual {p1, v0, p2, p0}, Lcom/kwad/components/core/webview/b/h;->a(Landroid/app/Activity;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/i;)V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/ad/h/d;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/h/d;->fi()V

    return-void
.end method

.method private destroy()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/h/d;->lp:Lcom/kwad/components/core/webview/b/h;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/b/h;->jv()V

    iget-object v0, p0, Lcom/kwad/components/ad/h/d;->og:Landroid/view/ViewGroup;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/components/ad/h/d;->getParent()Landroid/view/ViewParent;

    move-result-object v0

    instance-of v1, v0, Landroid/view/ViewGroup;

    if-eqz v1, :cond_1

    check-cast v0, Landroid/view/ViewGroup;

    invoke-virtual {v0, p0}, Landroid/view/ViewGroup;->removeView(Landroid/view/View;)V

    :cond_1
    return-void
.end method

.method private fi()V
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/h/d;->oh:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/h/d;->oh:Z

    invoke-direct {p0}, Lcom/kwad/components/ad/h/d;->fl()V

    invoke-direct {p0}, Lcom/kwad/components/ad/h/d;->destroy()V

    return-void
.end method

.method private fj()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/h/d;->oe:Lcom/kwad/components/ad/b/a/b;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/ad/b/a/b;->T()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/h/d;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rz()V

    iget-object v0, p0, Lcom/kwad/components/ad/h/d;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rA()V

    :cond_1
    return-void
.end method

.method private fl()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/ad/h/d;->oe:Lcom/kwad/components/ad/b/a/b;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Lcom/kwad/components/ad/b/a/b;->U()V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/h/d;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rB()V

    iget-object v0, p0, Lcom/kwad/components/ad/h/d;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rC()V

    :cond_1
    return-void
.end method

.method private fm()Z
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->getCurrentActivity()Landroid/app/Activity;

    move-result-object v1

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Landroid/app/Activity;->isFinishing()Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {v1}, Landroid/app/Activity;->getWindow()Landroid/view/Window;

    move-result-object v2

    invoke-virtual {v2}, Landroid/view/Window;->getDecorView()Landroid/view/View;

    move-result-object v2

    const v3, 0x1020002

    invoke-virtual {v2, v3}, Landroid/view/View;->findViewById(I)Landroid/view/View;

    move-result-object v2

    instance-of v3, v2, Landroid/view/ViewGroup;

    if-nez v3, :cond_1

    return v0

    :cond_1
    check-cast v2, Landroid/view/ViewGroup;

    iput-object v2, p0, Lcom/kwad/components/ad/h/d;->og:Landroid/view/ViewGroup;

    new-instance v2, Landroid/view/ViewGroup$LayoutParams;

    const/4 v3, -0x1

    invoke-direct {v2, v3, v3}, Landroid/view/ViewGroup$LayoutParams;-><init>(II)V

    iget-object v3, p0, Lcom/kwad/components/ad/h/d;->og:Landroid/view/ViewGroup;

    invoke-virtual {v3, p0, v2}, Landroid/view/ViewGroup;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    new-instance v2, Lcom/kwad/components/ad/h/d$2;

    invoke-direct {v2, p0, v1}, Lcom/kwad/components/ad/h/d$2;-><init>(Lcom/kwad/components/ad/h/d;Landroid/app/Activity;)V

    invoke-static {v2}, Lcom/kwad/sdk/core/c/b;->a(Lcom/kwad/sdk/core/c/c;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v0, 0x1

    :cond_2
    :goto_0
    return v0

    :catchall_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return v0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/b/a/o;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/b/a/p;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/b/b/t;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/components/core/webview/jshandler/am;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/h/d;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 1

    const-string p1, "PushAdView"

    const-string v0, "onAdClicked"

    invoke-static {p1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final aK()V
    .locals 2

    const-string v0, "PushAdView"

    const-string v1, "onPageVisible: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/h/d;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rD()V

    :cond_0
    return-void
.end method

.method public final aL()V
    .locals 2

    const-string v0, "PushAdView"

    const-string v1, "onPageInvisible: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/ad/h/d;->cG:Lcom/kwad/components/core/webview/jshandler/am;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/components/core/webview/jshandler/am;->rE()V

    :cond_0
    return-void
.end method

.method public final aa()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->aa()V

    iget-object v0, p0, Lcom/kwad/components/ad/h/d;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0, p0}, Lcom/kwad/components/core/widget/a/b;->a(Lcom/kwad/sdk/core/h/c;)V

    iget-object v0, p0, Lcom/kwad/components/ad/h/d;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->sy()V

    return-void
.end method

.method public final ab()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/sdk/widget/KSFrameLayout;->ab()V

    iget-object v0, p0, Lcom/kwad/components/ad/h/d;->bG:Lcom/kwad/components/core/widget/a/b;

    invoke-virtual {v0}, Lcom/kwad/components/core/widget/a/b;->release()V

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/b/b/m;)V
    .locals 0

    return-void
.end method

.method public final b(Lcom/kwad/components/core/webview/jshandler/t$a;)V
    .locals 4

    invoke-virtual {p0}, Lcom/kwad/components/ad/h/d;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/d/a/a;->aH(Landroid/content/Context;)F

    move-result v0

    invoke-virtual {p0}, Lcom/kwad/components/ad/h/d;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/d/a/a;->getScreenHeight(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    invoke-virtual {p0}, Lcom/kwad/components/ad/h/d;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/d/a/a;->getScreenWidth(Landroid/content/Context;)I

    move-result v2

    int-to-float v2, v2

    div-float/2addr v2, v0

    const/high16 v3, 0x3f000000    # 0.5f

    add-float/2addr v2, v3

    float-to-int v2, v2

    iput v2, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    div-float/2addr v1, v0

    add-float/2addr v1, v3

    float-to-int v0, v1

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->height:I

    return-void
.end method

.method public final b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/ad/h/d;->fi()V

    return-void
.end method

.method public final c(Lcom/kwad/components/ad/b/a/b;)Z
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/h/d;->oe:Lcom/kwad/components/ad/b/a/b;

    iget-boolean p1, p0, Lcom/kwad/components/ad/h/d;->of:Z

    if-eqz p1, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/h/d;->fm()Z

    move-result p1

    if-eqz p1, :cond_0

    invoke-direct {p0}, Lcom/kwad/components/ad/h/d;->fj()V

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public final cc()V
    .locals 2

    const-string v0, "PushAdView"

    const-string v1, "onTkLoadFailed"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/kwad/components/ad/h/d;->of:Z

    return-void
.end method

.method public final eh()V
    .locals 2

    const-string v0, "PushAdView"

    const-string v1, "onTkLoadSuccess"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/components/ad/h/d;->of:Z

    return-void
.end method

.method public final em()V
    .locals 0

    return-void
.end method

.method public final fk()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/components/ad/h/d;->of:Z

    return v0
.end method

.method public final getTKContainer()Landroid/widget/FrameLayout;
    .locals 0

    return-object p0
.end method

.method public final getTkTemplateId()Ljava/lang/String;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/h/d;->od:Lcom/kwad/sdk/core/response/model/AdTemplate;

    const-string v1, "ksad-push-card"

    invoke-static {v1, v0}, Lcom/kwad/components/core/webview/b/j;->b(Ljava/lang/String;Lcom/kwad/sdk/core/response/model/AdTemplate;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final getTouchCoordsView()Lcom/kwad/sdk/widget/e;
    .locals 0

    return-object p0
.end method
