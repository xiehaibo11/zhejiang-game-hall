.class public final Lcom/kwad/components/ad/reward/j/m;
.super Lcom/kwad/components/core/webview/b/a/v;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/ad/reward/j/m$a;
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/webview/b/a/v;-><init>()V

    return-void
.end method


# virtual methods
.method public final getKey()Ljava/lang/String;
    .locals 1

    const-string v0, "registerBackPressedListener"

    return-object v0
.end method

.method public final jm()V
    .locals 1

    new-instance v0, Lcom/kwad/components/ad/reward/j/m$a;

    invoke-direct {v0}, Lcom/kwad/components/ad/reward/j/m$a;-><init>()V

    invoke-virtual {p0, v0}, Lcom/kwad/components/ad/reward/j/m;->b(Lcom/kwad/sdk/core/b;)V

    return-void
.end method
