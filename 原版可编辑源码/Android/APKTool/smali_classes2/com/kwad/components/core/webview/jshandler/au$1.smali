.class final Lcom/kwad/components/core/webview/jshandler/au$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/au;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic VJ:Lcom/kwad/components/core/webview/jshandler/au;

.field final synthetic eu:I


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/au;I)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/au$1;->VJ:Lcom/kwad/components/core/webview/jshandler/au;

    iput p2, p0, Lcom/kwad/components/core/webview/jshandler/au$1;->eu:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/au$1;->VJ:Lcom/kwad/components/core/webview/jshandler/au;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/au;->a(Lcom/kwad/components/core/webview/jshandler/au;)Lcom/kwad/components/core/webview/jshandler/au$b;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/au$1;->VJ:Lcom/kwad/components/core/webview/jshandler/au;

    invoke-static {v0}, Lcom/kwad/components/core/webview/jshandler/au;->a(Lcom/kwad/components/core/webview/jshandler/au;)Lcom/kwad/components/core/webview/jshandler/au$b;

    move-result-object v0

    iget v1, p0, Lcom/kwad/components/core/webview/jshandler/au$1;->eu:I

    invoke-interface {v0, v1}, Lcom/kwad/components/core/webview/jshandler/au$b;->P(I)V

    :cond_0
    return-void
.end method
