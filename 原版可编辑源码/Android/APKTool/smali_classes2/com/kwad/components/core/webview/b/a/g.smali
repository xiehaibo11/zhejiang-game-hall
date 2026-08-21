.class public final Lcom/kwad/components/core/webview/b/a/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# instance fields
.field private Wx:Lcom/kwad/components/core/webview/b/b/k;


# direct methods
.method public constructor <init>(Lcom/kwad/components/core/webview/b/b/k;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/components/core/webview/b/a/g;->Wx:Lcom/kwad/components/core/webview/b/b/k;

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 0

    iget-object p1, p0, Lcom/kwad/components/core/webview/b/a/g;->Wx:Lcom/kwad/components/core/webview/b/b/k;

    if-eqz p1, :cond_0

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    :cond_0
    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "getKsAdExtraData"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 0

    return-void
.end method
