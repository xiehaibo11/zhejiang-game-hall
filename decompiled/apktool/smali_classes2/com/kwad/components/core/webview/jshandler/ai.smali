.class public final Lcom/kwad/components/core/webview/jshandler/ai;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/jshandler/ai$a;
    }
.end annotation


# instance fields
.field private Tv:Lcom/kwad/sdk/core/webview/c/c;

.field private Vj:Lcom/kwad/components/core/webview/jshandler/ai$a;


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/ai$a;

    invoke-direct {v0, p0}, Lcom/kwad/components/core/webview/jshandler/ai$a;-><init>(Lcom/kwad/components/core/webview/jshandler/ai;)V

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ai;->Vj:Lcom/kwad/components/core/webview/jshandler/ai$a;

    return-void
.end method

.method private p(II)V
    .locals 0

    iget-object p2, p0, Lcom/kwad/components/core/webview/jshandler/ai;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    if-eqz p2, :cond_0

    iget-object p2, p0, Lcom/kwad/components/core/webview/jshandler/ai;->Vj:Lcom/kwad/components/core/webview/jshandler/ai$a;

    iput p1, p2, Lcom/kwad/components/core/webview/jshandler/ai$a;->id:I

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ai;->Vj:Lcom/kwad/components/core/webview/jshandler/ai$a;

    const/4 p2, 0x2

    iput p2, p1, Lcom/kwad/components/core/webview/jshandler/ai$a;->status:I

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/ai;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    iget-object p2, p0, Lcom/kwad/components/core/webview/jshandler/ai;->Vj:Lcom/kwad/components/core/webview/jshandler/ai$a;

    invoke-interface {p1, p2}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/ai;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    return-void
.end method

.method public final aN(I)V
    .locals 1

    const/4 p1, 0x1

    const/4 v0, 0x2

    invoke-direct {p0, p1, v0}, Lcom/kwad/components/core/webview/jshandler/ai;->p(II)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "registerAnimationListener"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/ai;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    return-void
.end method
