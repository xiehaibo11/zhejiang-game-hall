.class final Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$7;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/aa$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$7;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/aa$a;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$7;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {v0, p1}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->a(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;Lcom/kwad/components/core/webview/jshandler/aa$a;)Lcom/kwad/components/core/webview/jshandler/aa$a;

    iget-object v0, p0, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f$7;->vb:Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;

    invoke-static {v0}, Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;->h(Lcom/kwad/components/ad/reward/presenter/platdetail/actionbar/f;)Lcom/kwad/sdk/core/webview/KsAdWebView;

    move-result-object v0

    iget v1, p1, Lcom/kwad/components/core/webview/jshandler/aa$a;->height:I

    iget p1, p1, Lcom/kwad/components/core/webview/jshandler/aa$a;->bottomMargin:I

    add-int/2addr v1, p1

    int-to-float p1, v1

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setTranslationY(F)V

    return-void
.end method
