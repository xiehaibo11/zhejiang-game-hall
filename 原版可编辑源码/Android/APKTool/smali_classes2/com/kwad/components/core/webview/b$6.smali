.class final Lcom/kwad/components/core/webview/b$6;
.super Lcom/kwad/sdk/core/download/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/b;->b(Lcom/kwad/components/core/webview/a;Lcom/kwad/sdk/core/webview/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Tl:Lcom/kwad/components/core/webview/b;

.field final synthetic Tm:Lcom/kwad/components/core/webview/b/a/l;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/b;Lcom/kwad/sdk/core/response/model/AdTemplate;Lcom/kwad/components/core/webview/b/a/l;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b$6;->Tl:Lcom/kwad/components/core/webview/b;

    iput-object p3, p0, Lcom/kwad/components/core/webview/b$6;->Tm:Lcom/kwad/components/core/webview/b/a/l;

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

    iget-object p2, p0, Lcom/kwad/components/core/webview/b$6;->Tm:Lcom/kwad/components/core/webview/b/a/l;

    invoke-virtual {p2, p1}, Lcom/kwad/components/core/webview/b/a/l;->a(Lcom/kwad/components/core/webview/b/b/b;)V

    return-void
.end method
