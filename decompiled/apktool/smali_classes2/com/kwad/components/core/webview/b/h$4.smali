.class final Lcom/kwad/components/core/webview/b/h$4;
.super Lcom/kwad/sdk/core/download/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b/h;->a(Lcom/kwad/sdk/components/l;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Tm:Lcom/kwad/components/core/webview/b/a/l;

.field final synthetic Wk:Lcom/kwad/components/core/webview/b/h;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b/h;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/a/l;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/h$4;->Wk:Lcom/kwad/components/core/webview/b/h;

    iput-object p3, p0, Lcom/kwad/components/core/webview/b/h$4;->Tm:Lcom/kwad/components/core/webview/b/a/l;

    invoke-direct {p0, p2}, Lcom/kwad/sdk/core/download/e;-><init>(Lcom/kwad/sdk/core/response/model/AdTemplate;)V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;ILcom/kwad/sdk/core/download/f;)V
    .locals 0

    invoke-super {p0, p1, p2, p3}, Lcom/kwad/sdk/core/download/e;->a(Ljava/lang/String;ILcom/kwad/sdk/core/download/f;)V

    new-instance p1, Lcom/kwad/components/core/webview/b/b/b;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/b;-><init>()V

    const/4 p2, 0x1

    iput p2, p1, Lcom/kwad/components/core/webview/b/b/b;->WR:I

    iget-object p2, p0, Lcom/kwad/components/core/webview/b/h$4;->Tm:Lcom/kwad/components/core/webview/b/a/l;

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/webview/b/a/l;->a(Lcom/kwad/components/core/webview/b/b/b;)V

    return-void
.end method
