.class final Lcom/kwad/components/core/webview/jshandler/u$3;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/u;->a(Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ue:Lcom/kwad/components/core/webview/jshandler/u;

.field final synthetic lx:Lcom/kwad/sdk/core/webview/c/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/u;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/u$3;->Ue:Lcom/kwad/components/core/webview/jshandler/u;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/u$3;->lx:Lcom/kwad/sdk/core/webview/c/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    new-instance v0, Lcom/kwad/components/core/webview/jshandler/u$a;

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    invoke-direct {v0, v1}, Lcom/kwad/components/core/webview/jshandler/u$a;-><init>(Ljava/util/List;)V

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/u$3;->lx:Lcom/kwad/sdk/core/webview/c/c;

    invoke-interface {v1, v0}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method
