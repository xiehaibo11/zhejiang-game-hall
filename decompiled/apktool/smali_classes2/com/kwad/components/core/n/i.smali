.class public abstract Lcom/kwad/components/core/n/i;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/c/c;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/kwad/sdk/core/c/c<",
        "Lcom/kwad/components/core/n/c;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/kwad/components/core/n/c;)V
    .locals 0

    return-void
.end method

.method public final bridge synthetic a(Ljava/lang/Object;Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public b(Lcom/kwad/components/core/n/c;)V
    .locals 0

    return-void
.end method

.method public bridge synthetic b(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/n/c;

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/n/i;->b(Lcom/kwad/components/core/n/c;)V

    return-void
.end method

.method public synthetic c(Ljava/lang/Object;)V
    .locals 0

    check-cast p1, Lcom/kwad/components/core/n/c;

    invoke-virtual {p0, p1}, Lcom/kwad/components/core/n/i;->a(Lcom/kwad/components/core/n/c;)V

    return-void
.end method

.method public final bridge synthetic d(Ljava/lang/Object;)V
    .locals 0

    return-void
.end method

.method public final onBackToBackground()V
    .locals 0

    return-void
.end method

.method public final onBackToForeground()V
    .locals 0

    return-void
.end method
