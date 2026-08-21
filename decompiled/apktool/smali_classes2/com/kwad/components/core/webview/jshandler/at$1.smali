.class final Lcom/kwad/components/core/webview/jshandler/at$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/at;->rF()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic VC:Lcom/kwad/components/core/webview/jshandler/at;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/at;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/at$1;->VC:Lcom/kwad/components/core/webview/jshandler/at;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/at$1;->VC:Lcom/kwad/components/core/webview/jshandler/at;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/at;->a(Lcom/kwad/components/core/webview/jshandler/at;)Lcom/kwad/components/core/webview/jshandler/at$a;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/at$1;->VC:Lcom/kwad/components/core/webview/jshandler/at;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/at;->a(Lcom/kwad/components/core/webview/jshandler/at;)Lcom/kwad/components/core/webview/jshandler/at$a;

    move-result-object v0

    invoke-interface {v0}, Lcom/kwad/components/core/webview/jshandler/at$a;->rp()V

    :cond_0
    return-void
.end method
