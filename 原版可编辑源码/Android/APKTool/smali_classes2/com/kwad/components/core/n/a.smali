.class public Lcom/kwad/components/core/n/a;
.super Lcom/kwad/sdk/api/proxy/IActivityProxy;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/api/proxy/IActivityProxy;-><init>()V

    return-void
.end method


# virtual methods
.method public onCreate(Landroid/os/Bundle;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/kwad/sdk/api/proxy/IActivityProxy;->onCreate(Landroid/os/Bundle;)V

    invoke-virtual {p0}, Lcom/kwad/components/core/n/a;->finish()V

    return-void
.end method
