.class public final Lcom/kwad/components/core/webview/jshandler/t;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/jshandler/t$a;,
        Lcom/kwad/components/core/webview/jshandler/t$b;
    }
.end annotation


# instance fields
.field protected final TL:Lcom/kwad/sdk/core/webview/b;

.field protected Uc:Lcom/kwad/components/core/webview/jshandler/t$b;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/webview/b;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/t;->TL:Lcom/kwad/sdk/core/webview/b;

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/webview/jshandler/t$b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/t;->Uc:Lcom/kwad/components/core/webview/jshandler/t$b;

    return-void
.end method

.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    new-instance p1, Lcom/kwad/components/core/webview/jshandler/t$a;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/jshandler/t$a;-><init>()V

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/t;->Uc:Lcom/kwad/components/core/webview/jshandler/t$b;

    if-eqz v0, :cond_0

    invoke-interface {v0, p1}, Lcom/kwad/components/core/webview/jshandler/t$b;->a(Lcom/kwad/components/core/webview/jshandler/t$a;)V

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/t;->TL:Lcom/kwad/sdk/core/webview/b;

    iget-object v0, v0, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getWidth()I

    move-result v0

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->width:I

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/t;->TL:Lcom/kwad/sdk/core/webview/b;

    iget-object v0, v0, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    invoke-virtual {v0}, Landroid/view/ViewGroup;->getHeight()I

    move-result v0

    iput v0, p1, Lcom/kwad/components/core/webview/jshandler/t$a;->height:I

    :goto_0
    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "getContainerLimit"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 0

    return-void
.end method
