.class public final Lcom/kwad/components/core/webview/jshandler/am;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/webview/jshandler/am$a;
    }
.end annotation


# instance fields
.field private Tv:Lcom/kwad/sdk/core/webview/c/c;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private aK(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/am;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    if-eqz v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/am$a;

    invoke-direct {v0}, Lcom/kwad/components/core/webview/jshandler/am$a;-><init>()V

    invoke-static {v0, p1}, Lcom/kwad/components/core/webview/jshandler/am$a;->a(Lcom/kwad/components/core/webview/jshandler/am$a;Ljava/lang/String;)Ljava/lang/String;

    iget-object p1, p0, Lcom/kwad/components/core/webview/jshandler/am;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    invoke-interface {p1, v0}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_0
    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/am;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "registerLifecycleListener"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 1

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/components/core/webview/jshandler/am;->Tv:Lcom/kwad/sdk/core/webview/c/c;

    return-void
.end method

.method public final rA()V
    .locals 1

    const-string v0, "showEnd"

    invoke-direct {p0, v0}, Lcom/kwad/components/core/webview/jshandler/am;->aK(Ljava/lang/String;)V

    return-void
.end method

.method public final rB()V
    .locals 1

    const-string v0, "hideStart"

    invoke-direct {p0, v0}, Lcom/kwad/components/core/webview/jshandler/am;->aK(Ljava/lang/String;)V

    return-void
.end method

.method public final rC()V
    .locals 1

    const-string v0, "hideEnd"

    invoke-direct {p0, v0}, Lcom/kwad/components/core/webview/jshandler/am;->aK(Ljava/lang/String;)V

    return-void
.end method

.method public final rD()V
    .locals 1

    const-string v0, "pageVisiable"

    invoke-direct {p0, v0}, Lcom/kwad/components/core/webview/jshandler/am;->aK(Ljava/lang/String;)V

    return-void
.end method

.method public final rE()V
    .locals 1

    const-string v0, "pageInvisiable"

    invoke-direct {p0, v0}, Lcom/kwad/components/core/webview/jshandler/am;->aK(Ljava/lang/String;)V

    return-void
.end method

.method public final rz()V
    .locals 1

    const-string v0, "showStart"

    invoke-direct {p0, v0}, Lcom/kwad/components/core/webview/jshandler/am;->aK(Ljava/lang/String;)V

    return-void
.end method
