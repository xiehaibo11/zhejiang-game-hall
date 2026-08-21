.class final Lcom/kwad/components/ad/h/c$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/components/ad/b/a/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/h/c;->ff()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ob:Lcom/kwad/components/ad/h/c;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/h/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/h/c$3;->ob:Lcom/kwad/components/ad/h/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final T()V
    .locals 2

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/y;->at(J)V

    invoke-static {}, Lcom/kwad/components/ad/h/e;->fn()Lcom/kwad/components/ad/h/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/h/e;->fj()V

    return-void
.end method

.method public final U()V
    .locals 2

    const-string v0, "PushAdManager"

    const-string v1, "onAdClose: "

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/components/ad/h/e;->fn()Lcom/kwad/components/ad/h/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/components/ad/h/e;->fl()V

    invoke-static {}, Lcom/kwad/components/ad/h/b;->fa()Lcom/kwad/components/ad/h/b;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/ad/h/c$3;->ob:Lcom/kwad/components/ad/h/c;

    invoke-virtual {v0, v1}, Lcom/kwad/components/ad/h/b;->a(Lcom/kwad/components/ad/h/c;)V

    return-void
.end method
