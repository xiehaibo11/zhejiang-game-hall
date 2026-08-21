.class final Lcom/kwad/components/core/webview/b/h$9;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/d/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Wk:Lcom/kwad/components/core/webview/b/h;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/h;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$9;->Wk:Lcom/kwad/components/core/webview/b/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b/h$9;->Wk:Lcom/kwad/components/core/webview/b/h;

    iget-object v0, v0, Lcom/kwad/components/core/webview/b/h;->VQ:Lcom/kwad/components/core/webview/b/i;

    invoke-interface {v0, p1}, Lcom/kwad/components/core/webview/b/i;->b(Lcom/kwad/sdk/commercial/model/WebCloseStatus;)V

    return-void
.end method
