.class public final Lcom/kwad/sdk/components/a/h;
.super Ljava/lang/Object;


# direct methods
.method public static yQ()V
    .locals 2

    new-instance v0, Lcom/kwad/components/ad/splashscreen/a;

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/a;-><init>()V

    invoke-interface {v0}, Lcom/kwad/sdk/components/a;->getComponentsType()Ljava/lang/Class;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/kwad/sdk/components/c;->a(Ljava/lang/Class;Lcom/kwad/sdk/components/a;)V

    new-instance v0, Lcom/kwad/components/ad/splashscreen/d/a;

    invoke-direct {v0}, Lcom/kwad/components/ad/splashscreen/d/a;-><init>()V

    invoke-interface {v0}, Lcom/kwad/sdk/components/a;->getComponentsType()Ljava/lang/Class;

    move-result-object v1

    invoke-static {v1, v0}, Lcom/kwad/sdk/components/c;->a(Ljava/lang/Class;Lcom/kwad/sdk/components/a;)V

    return-void
.end method
