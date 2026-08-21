.class public final Lcom/kwad/components/core/webview/jshandler/aq;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/jshandler/aq$a;
    }
.end annotation


# instance fields
.field private Tv:Lcom/kwad/sdk/core/webview/c/c;

.field private Vw:Lcom/kwad/components/core/webview/jshandler/aq$a;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/aq$a;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/aq$a;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aq;->Vw:Lcom/kwad/components/core/webview/jshandler/aq$a;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/aq;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    return-void
.end method

.method public final aO(I)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aq;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aq;->Vw:Lcom/kwad/components/core/webview/jshandler/aq$a;

    iput p1, v0, Lcom/kwad/components/core/webview/jshandler/aq$a;->status:I

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/aq;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aq;->Vw:Lcom/kwad/components/core/webview/jshandler/aq$a;

    invoke-interface {p1, v0}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_0
    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "registerVideoListener"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/aq;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    return-void
.end method
