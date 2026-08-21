.class final Lcom/kwad/components/ad/splashscreen/c/p$9;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/g/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/splashscreen/c/p;->bs()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic DO:Lcom/kwad/components/ad/splashscreen/c/p;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/splashscreen/c/p;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$9;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(D)V
    .locals 2

    invoke-static {}, Lcom/kwad/components/core/e/c/b;->mZ()Z

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/ad/splashscreen/c/p$9;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/c/p;->CM:Lcom/kwad/components/ad/splashscreen/h;

    iget-object v1, v1, Lcom/kwad/components/ad/splashscreen/h;->Ce:Lcom/kwad/sdk/core/h/a;

    invoke-interface {v1}, Lcom/kwad/sdk/core/h/a;->sB()Z

    move-result v1

    if-eqz v1, :cond_2

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/splashscreen/c/p$9;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {v0, p1, p2}, Lcom/kwad/components/ad/splashscreen/c/p;->a(Lcom/kwad/components/ad/splashscreen/c/p;D)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$9;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/p;->j(Lcom/kwad/components/ad/splashscreen/c/p;)V

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$9;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/p;->k(Lcom/kwad/components/ad/splashscreen/c/p;)Landroid/os/Vibrator;

    move-result-object p1

    if-nez p1, :cond_1

    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$9;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/p;->l(Lcom/kwad/components/ad/splashscreen/c/p;)Landroid/content/Context;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/kwad/components/ad/splashscreen/c/p;->a(Lcom/kwad/components/ad/splashscreen/c/p;Landroid/content/Context;)Landroid/os/Vibrator;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/kwad/components/ad/splashscreen/c/p;->a(Lcom/kwad/components/ad/splashscreen/c/p;Landroid/os/Vibrator;)Landroid/os/Vibrator;

    :cond_1
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$9;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/p;->m(Lcom/kwad/components/ad/splashscreen/c/p;)Landroid/content/Context;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/splashscreen/c/p$9;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p2}, Lcom/kwad/components/ad/splashscreen/c/p;->k(Lcom/kwad/components/ad/splashscreen/c/p;)Landroid/os/Vibrator;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/kwad/sdk/utils/bj;->a(Landroid/content/Context;Landroid/os/Vibrator;)V

    return-void

    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/kwad/components/ad/splashscreen/c/p$9;->DO:Lcom/kwad/components/ad/splashscreen/c/p;

    invoke-static {p1}, Lcom/kwad/components/ad/splashscreen/c/p;->j(Lcom/kwad/components/ad/splashscreen/c/p;)V

    return-void
.end method

.method public final aT()V
    .locals 0

    return-void
.end method
