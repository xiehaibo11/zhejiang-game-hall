.class final Lcom/kwad/components/core/e/c/e$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/core/webview/jshandler/aa$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/e/c/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic JA:Lcom/kwad/components/core/e/c/e;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/e/c/e;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/e/c/e$4;->JA:Lcom/kwad/components/core/e/c/e;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/aa$a;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onAdFrameValid="

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "DownloadTipsDialogWebCardPresenter"

    invoke-static {v1, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/e/c/e$4;->JA:Lcom/kwad/components/core/e/c/e;

    invoke-static {v0}, Lcom/kwad/components/core/e/c/e;->h(Lcom/kwad/components/core/e/c/e;)Lcom/kwad/sdk/core/webview/KsAdWebView;

    move-result-object v0

    iget v1, p1, Lcom/kwad/components/core/webview/jshandler/aa$a;->height:I

    iget p1, p1, Lcom/kwad/components/core/webview/jshandler/aa$a;->bottomMargin:I

    add-int/2addr v1, p1

    int-to-float p1, v1

    invoke-virtual {v0, p1}, Lcom/kwad/sdk/core/webview/KsAdWebView;->setTranslationY(F)V

    return-void
.end method
