.class public final Lcom/kwad/sdk/collector/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/collector/c$a;
    }
.end annotation


# direct methods
.method public static a(Landroid/content/Context;Lcom/kwad/sdk/collector/c$a;)V
    .locals 1

    if-nez p0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/kwad/sdk/collector/c$1;

    invoke-direct {v0, p0, p1}, Lcom/kwad/sdk/collector/c$1;-><init>(Landroid/content/Context;Lcom/kwad/sdk/collector/c$a;)V

    invoke-static {p0, v0}, Lcom/kwad/sdk/collector/d;->a(Landroid/content/Context;Lcom/kwad/sdk/collector/d$a;)V

    return-void
.end method

.method public static b(Landroid/content/Context;Lcom/kwad/sdk/collector/c$a;)V
    .locals 1

    new-instance v0, Lcom/kwad/sdk/collector/c$2;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/collector/c$2;-><init>(Landroid/content/Context;)V

    new-instance p0, Lcom/kwad/sdk/collector/c$3;

    invoke-direct {p0, p1}, Lcom/kwad/sdk/collector/c$3;-><init>(Lcom/kwad/sdk/collector/c$a;)V

    invoke-virtual {v0, p0}, Lcom/kwad/sdk/core/network/m;->request(Lcom/kwad/sdk/core/network/h;)V

    return-void
.end method
