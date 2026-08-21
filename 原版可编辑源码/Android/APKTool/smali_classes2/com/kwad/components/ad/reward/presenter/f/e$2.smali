.class final Lcom/kwad/components/ad/reward/presenter/f/e$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/i;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/reward/presenter/f/e;->a(Lcom/kwad/sdk/components/l;Lcom/kwad/sdk/core/webview/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic wF:Lcom/kwad/components/ad/reward/presenter/f/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/f/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/f/e$2;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/e;Ljava/lang/String;)V
    .locals 1

    const-string v0, "autoCallApp"

    invoke-static {p2, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_1

    iget-object p2, p0, Lcom/kwad/components/ad/reward/presenter/f/e$2;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-static {p2}, Lcom/kwad/components/ad/reward/presenter/f/e;->b(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/ad/reward/j;

    move-result-object p2

    iget-object p2, p2, Lcom/kwad/components/ad/reward/j;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    invoke-static {p2}, Lcom/kwad/sdk/core/response/b/d;->cg(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/response/model/AdInfo;

    move-result-object p2

    invoke-static {p2}, Lcom/kwad/components/ad/reward/j;->g(Lcom/kwad/sdk/core/response/model/AdInfo;)Z

    move-result p2

    if-eqz p2, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/d/a;->AX()Z

    move-result p2

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/kwad/components/ad/reward/presenter/f/e$2;->wF:Lcom/kwad/components/ad/reward/presenter/f/e;

    invoke-static {p2}, Lcom/kwad/components/ad/reward/presenter/f/e;->c(Lcom/kwad/components/ad/reward/presenter/f/e;)Lcom/kwad/components/ad/reward/j;

    move-result-object p2

    iget p2, p2, Lcom/kwad/components/ad/reward/j;->mScreenOrientation:I

    if-nez p2, :cond_0

    const/4 p2, 0x1

    goto :goto_0

    :cond_0
    const/4 p2, 0x0

    :goto_0
    invoke-virtual {p1, p2}, Lcom/kwad/components/core/webview/jshandler/e;->aM(Z)V

    :cond_1
    return-void
.end method
