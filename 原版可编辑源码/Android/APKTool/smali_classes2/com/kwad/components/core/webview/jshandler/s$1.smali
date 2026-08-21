.class final Lcom/kwad/components/core/webview/jshandler/s$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/s;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Ub:Lcom/kwad/components/core/webview/jshandler/s;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/s;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/s$1;->Ub:Lcom/kwad/components/core/webview/jshandler/s;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/s$1;->Ub:Lcom/kwad/components/core/webview/jshandler/s;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/s;->a(Lcom/kwad/components/core/webview/jshandler/s;)Lcom/kwad/components/core/webview/jshandler/s$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/core/webview/jshandler/s$a;->bz()V

    return-void
.end method
