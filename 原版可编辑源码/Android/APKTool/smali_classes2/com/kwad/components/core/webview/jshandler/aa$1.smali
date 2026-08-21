.class final Lcom/kwad/components/core/webview/jshandler/aa$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/aa;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic UL:Lcom/kwad/components/core/webview/jshandler/aa$a;

.field final synthetic UM:Lcom/kwad/components/core/webview/jshandler/aa;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/aa;Lcom/kwad/components/core/webview/jshandler/aa$a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aa$1;->UM:Lcom/kwad/components/core/webview/jshandler/aa;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/aa$1;->UL:Lcom/kwad/components/core/webview/jshandler/aa$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aa$1;->UM:Lcom/kwad/components/core/webview/jshandler/aa;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/aa;->a(Lcom/kwad/components/core/webview/jshandler/aa;)Landroid/webkit/WebView;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aa$1;->UM:Lcom/kwad/components/core/webview/jshandler/aa;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/aa;->b(Lcom/kwad/components/core/webview/jshandler/aa;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aa$1;->UM:Lcom/kwad/components/core/webview/jshandler/aa;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/aa;->a(Lcom/kwad/components/core/webview/jshandler/aa;)Landroid/webkit/WebView;

    move-result-object v0

    invoke-virtual {v0}, Landroid/webkit/WebView;->getLayoutParams()Landroid/view/ViewGroup$LayoutParams;

    move-result-object v0

    check-cast v0, Landroid/view/ViewGroup$MarginLayoutParams;

    const/4 v1, -0x1

    iput v1, v0, Landroid/view/ViewGroup$MarginLayoutParams;->width:I

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/aa$1;->UL:Lcom/kwad/components/core/webview/jshandler/aa$a;

    iget v1, v1, Lcom/kwad/components/core/webview/jshandler/aa$a;->height:I

    iput v1, v0, Landroid/view/ViewGroup$MarginLayoutParams;->height:I

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/aa$1;->UL:Lcom/kwad/components/core/webview/jshandler/aa$a;

    iget v1, v1, Lcom/kwad/components/core/webview/jshandler/aa$a;->leftMargin:I

    iput v1, v0, Landroid/view/ViewGroup$MarginLayoutParams;->leftMargin:I

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/aa$1;->UL:Lcom/kwad/components/core/webview/jshandler/aa$a;

    iget v1, v1, Lcom/kwad/components/core/webview/jshandler/aa$a;->rightMargin:I

    iput v1, v0, Landroid/view/ViewGroup$MarginLayoutParams;->rightMargin:I

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/aa$1;->UL:Lcom/kwad/components/core/webview/jshandler/aa$a;

    iget v1, v1, Lcom/kwad/components/core/webview/jshandler/aa$a;->bottomMargin:I

    iput v1, v0, Landroid/view/ViewGroup$MarginLayoutParams;->bottomMargin:I

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/aa$1;->UM:Lcom/kwad/components/core/webview/jshandler/aa;

    invoke-static {v1}, Lcom/kwad/components/core/webview/jshandler/aa;->a(Lcom/kwad/components/core/webview/jshandler/aa;)Landroid/webkit/WebView;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/webkit/WebView;->setLayoutParams(Landroid/view/ViewGroup$LayoutParams;)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aa$1;->UM:Lcom/kwad/components/core/webview/jshandler/aa;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/aa;->c(Lcom/kwad/components/core/webview/jshandler/aa;)Lcom/kwad/components/core/webview/jshandler/aa$b;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aa$1;->UM:Lcom/kwad/components/core/webview/jshandler/aa;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/aa;->c(Lcom/kwad/components/core/webview/jshandler/aa;)Lcom/kwad/components/core/webview/jshandler/aa$b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/aa$1;->UL:Lcom/kwad/components/core/webview/jshandler/aa$a;

    invoke-interface {v0, v1}, Lcom/kwad/components/core/webview/jshandler/aa$b;->a(Lcom/kwad/components/core/webview/jshandler/aa$a;)V

    :cond_1
    return-void
.end method
