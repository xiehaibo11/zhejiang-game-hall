.class final Lcom/kwad/components/core/r/c$1;
.super Lcom/kwad/components/core/webview/b/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/r/c;->qa()Lcom/kwad/components/core/webview/b/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic QN:Lcom/kwad/components/core/r/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/r/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/r/c$1;->QN:Lcom/kwad/components/core/r/c;

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    invoke-super {p0, p1, p2}, Lcom/kwad/components/core/webview/b/d;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V

    new-instance p1, Lcom/kwad/components/core/webview/b/b/w;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/w;-><init>()V

    invoke-static {}, Lcom/kwad/components/core/r/a;->pS()Lcom/kwad/components/core/r/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/core/r/a;->pZ()I

    move-result v0

    add-int/lit8 v0, v0, 0x1

    iput v0, p1, Lcom/kwad/components/core/webview/b/b/w;->Xi:I

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method
