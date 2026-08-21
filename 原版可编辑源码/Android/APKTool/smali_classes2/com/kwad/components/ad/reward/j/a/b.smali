.class public final Lcom/kwad/components/ad/reward/j/a/b;
.super Lcom/kwad/components/core/webview/b/c/d;


# static fields
.field private static xJ:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/kwad/components/ad/reward/j/a/b;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private xG:Lcom/kwad/components/ad/reward/j;

.field private xI:J


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/c/d;-><init>()V

    return-void
.end method

.method public static a(Lcom/kwad/components/ad/reward/j/a/b;Landroid/app/Activity;JLcom/kwad/components/core/webview/b/e/c;Lcom/kwad/components/core/webview/b/c/d$a;)Lcom/kwad/components/ad/reward/j/a/b;
    .locals 2

    const/4 v0, 0x0

    if-eqz p1, :cond_3

    invoke-virtual {p1}, Landroid/app/Activity;->isFinishing()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/j/a/b;->jp()Z

    move-result v1

    if-eqz v1, :cond_1

    return-object v0

    :cond_1
    iput-object p4, p0, Lcom/kwad/components/ad/reward/j/a/b;->QM:Lcom/kwad/components/core/webview/b/e/c;

    iput-object p5, p0, Lcom/kwad/components/ad/reward/j/a/b;->Xp:Lcom/kwad/components/core/webview/b/c/d$a;

    invoke-virtual {p1}, Landroid/app/Activity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object p1

    const-string p4, "tkCloseDialog"

    invoke-virtual {p0, p1, p4}, Lcom/kwad/components/ad/reward/j/a/b;->show(Landroid/app/FragmentManager;Ljava/lang/String;)V

    const-wide/16 p4, 0x0

    cmp-long p1, p2, p4

    if-lez p1, :cond_2

    invoke-direct {p0, p2, p3}, Lcom/kwad/components/ad/reward/j/a/b;->k(J)V

    :cond_2
    new-instance p1, Ljava/lang/ref/WeakReference;

    invoke-direct {p1, p0}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    sput-object p1, Lcom/kwad/components/ad/reward/j/a/b;->xJ:Ljava/lang/ref/WeakReference;

    return-object p0

    :cond_3
    :goto_0
    return-object v0
.end method

.method public static a(Lcom/kwad/components/ad/reward/j;Landroid/app/Activity;JLandroid/content/DialogInterface$OnDismissListener;Lcom/kwad/components/core/webview/b/e/c;)Lcom/kwad/components/ad/reward/j/a/b;
    .locals 2

    const/4 v0, 0x0

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Landroid/app/Activity;->isFinishing()Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/kwad/components/ad/reward/j/a/b;->jp()Z

    move-result v1

    if-eqz v1, :cond_1

    return-object v0

    :cond_1
    new-instance v0, Lcom/kwad/components/core/webview/b/c/d$b;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/b/c/d$b;-><init>()V

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/c/d$b;->setAdTemplate(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    const-string v1, "ksad-video-secondclick-card"

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/webview/b/c/d$b;->aO(Ljava/lang/String;)V

    invoke-static {p0, v0}, Lcom/kwad/components/ad/reward/j/a/b;->a(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/core/webview/b/c/d$b;)Lcom/kwad/components/ad/reward/j/a/b;

    move-result-object p0

    iput-object p5, p0, Lcom/kwad/components/ad/reward/j/a/b;->QM:Lcom/kwad/components/core/webview/b/e/c;

    invoke-virtual {p0, p4}, Lcom/kwad/components/ad/reward/j/a/b;->d(Landroid/content/DialogInterface$OnDismissListener;)V

    invoke-direct {p0, p2, p3}, Lcom/kwad/components/ad/reward/j/a/b;->k(J)V

    invoke-virtual {p1}, Landroid/app/Activity;->getFragmentManager()Landroid/app/FragmentManager;

    move-result-object p1

    const-string p2, "tkExtraReward"

    invoke-virtual {p0, p1, p2}, Lcom/kwad/components/ad/reward/j/a/b;->show(Landroid/app/FragmentManager;Ljava/lang/String;)V

    new-instance p1, Ljava/lang/ref/WeakReference;

    invoke-direct {p1, p0}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    sput-object p1, Lcom/kwad/components/ad/reward/j/a/b;->xJ:Ljava/lang/ref/WeakReference;

    return-object p0

    :cond_2
    :goto_0
    return-object v0
.end method

.method public static a(Lcom/kwad/components/ad/reward/j;Lcom/kwad/components/core/webview/b/c/d$b;)Lcom/kwad/components/ad/reward/j/a/b;
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/reward/j/a/b;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/j/a/b;-><init>()V

    iput-object p0, v0, Lcom/kwad/components/ad/reward/j/a/b;->xG:Lcom/kwad/components/ad/reward/j;

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b/c/d$b;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/components/ad/reward/j/a/b;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b/c/d$b;->getTemplateId()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/components/ad/reward/j/a/b;->xD:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b/c/d$b;->rZ()Z

    move-result p0

    iput-boolean p0, v0, Lcom/kwad/components/ad/reward/j/a/b;->Xo:Z

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b/c/d$b;->sa()Z

    move-result p0

    iput-boolean p0, v0, Lcom/kwad/components/ad/reward/j/a/b;->Xw:Z

    new-instance p0, Landroid/os/Bundle;

    invoke-direct {p0}, Landroid/os/Bundle;-><init>()V

    invoke-virtual {p1}, Lcom/kwad/components/core/webview/b/c/d$b;->getTemplateId()Ljava/lang/String;

    move-result-object p1

    const-string v1, "templateId"

    invoke-virtual {p0, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Lcom/kwad/components/ad/reward/j/a/b;->setArguments(Landroid/os/Bundle;)V

    return-object v0
.end method

.method private static jp()Z
    .locals 1

    sget-object v0, Lcom/kwad/components/ad/reward/j/a/b;->xJ:Ljava/lang/ref/WeakReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method private k(J)V
    .locals 1

    iput-wide p1, p0, Lcom/kwad/components/ad/reward/j/a/b;->xI:J

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/a/b;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/a/b;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iput-wide p1, v0, Lcom/kwad/components/core/webview/b/c/b;->xI:J

    :cond_0
    return-void
.end method


# virtual methods
.method public final jq()Lcom/kwad/components/core/webview/b/c/b;
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/reward/j/a/a;

    iget-object v1, p0, Lcom/kwad/components/ad/reward/j/a/b;->xG:Lcom/kwad/components/ad/reward/j;

    invoke-direct {v0, v1}, Lcom/kwad/components/ad/reward/j/a/a;-><init>(Lcom/kwad/components/ad/reward/j;)V

    return-object v0
.end method

.method public final jr()Lcom/kwad/components/core/webview/b/c/c;
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/j/a/c;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/j/a/c;-><init>()V

    return-object v0
.end method

.method public final js()V
    .locals 3

    invoke-super {p0}, Lcom/kwad/components/core/webview/b/c/d;->js()V

    iget-object v0, p0, Lcom/kwad/components/ad/reward/j/a/b;->Xl:Lcom/kwad/components/core/webview/b/c/b;

    iget-wide v1, p0, Lcom/kwad/components/ad/reward/j/a/b;->xI:J

    iput-wide v1, v0, Lcom/kwad/components/core/webview/b/c/b;->xI:J

    return-void
.end method

.method public final onDestroy()V
    .locals 1

    invoke-super {p0}, Lcom/kwad/components/core/webview/b/c/d;->onDestroy()V

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/ad/reward/j/a/b;->xG:Lcom/kwad/components/ad/reward/j;

    sput-object v0, Lcom/kwad/components/ad/reward/j/a/b;->xJ:Ljava/lang/ref/WeakReference;

    return-void
.end method
