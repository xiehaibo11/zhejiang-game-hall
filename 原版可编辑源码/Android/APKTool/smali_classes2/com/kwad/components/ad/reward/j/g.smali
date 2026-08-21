.class public final Lcom/kwad/components/ad/reward/j/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/webview/c/a;


# instance fields
.field private xz:I


# direct methods
.method public constructor <init>(I)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput p1, p0, Lcom/kwad/components/ad/reward/j/g;->xz:I

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
    .locals 1

    new-instance p1, Lcom/kwad/components/core/webview/b/b/f;

    invoke-direct {p1}, Lcom/kwad/components/core/webview/b/b/f;-><init>()V

    iget v0, p0, Lcom/kwad/components/ad/reward/j/g;->xz:I

    iput v0, p1, Lcom/kwad/components/core/webview/b/b/f;->WU:I

    invoke-interface {p2, p1}, Lcom/kwad/sdk/core/webview/c/c;->a(Lcom/kwad/sdk/core/b;)V

    return-void
.end method

.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "getCloseDelaySeconds"

    return-object v0
.end method

.method public final onDestroy()V
    .locals 0

    return-void
.end method
