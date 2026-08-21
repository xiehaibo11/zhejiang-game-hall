.class final Lcom/kwad/components/ad/fullscreen/c/c/b$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/g/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/ad/fullscreen/c/c/b;->bs()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic hn:Lcom/kwad/components/ad/fullscreen/c/c/b;


# direct methods
.method constructor <init>(Lcom/kwad/components/ad/fullscreen/c/c/b;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$3;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(D)V
    .locals 13

    invoke-static {}, Lcom/kwad/components/core/e/c/b;->mZ()Z

    move-result v0

    const-wide/16 v1, 0x1f4

    const/4 v3, 0x0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$3;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-virtual {v0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->iS()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$3;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {v0}, Lcom/kwad/components/ad/fullscreen/c/c/b;->f(Lcom/kwad/components/ad/fullscreen/c/c/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v0

    if-eqz v0, :cond_1

    new-instance v12, Lcom/kwad/sdk/core/report/j;

    invoke-direct {v12}, Lcom/kwad/sdk/core/report/j;-><init>()V

    invoke-virtual {v12, p1, p2}, Lcom/kwad/sdk/core/report/j;->i(D)Lcom/kwad/sdk/core/report/j;

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$3;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {p1}, Lcom/kwad/components/ad/fullscreen/c/c/b;->h(Lcom/kwad/components/ad/fullscreen/c/c/b;)Lcom/kwad/components/ad/reward/j;

    move-result-object v4

    const/4 v5, 0x1

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$3;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {p1}, Lcom/kwad/components/ad/fullscreen/c/c/b;->g(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/content/Context;

    move-result-object v6

    const/16 v7, 0x9d

    const/4 v8, 0x1

    const-wide/16 v9, 0x0

    const/4 v11, 0x0

    invoke-virtual/range {v4 .. v12}, Lcom/kwad/components/ad/reward/j;->a(ILandroid/content/Context;IIJZLcom/kwad/sdk/core/report/j;)V

    :cond_1
    new-instance p1, Lcom/kwad/components/ad/fullscreen/c/c/b$3$2;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/fullscreen/c/c/b$3$2;-><init>(Lcom/kwad/components/ad/fullscreen/c/c/b$3;)V

    invoke-static {p1, v3, v1, v2}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    iget-object p1, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$3;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {p1}, Lcom/kwad/components/ad/fullscreen/c/c/b;->i(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/content/Context;

    move-result-object p1

    iget-object p2, p0, Lcom/kwad/components/ad/fullscreen/c/c/b$3;->hn:Lcom/kwad/components/ad/fullscreen/c/c/b;

    invoke-static {p2}, Lcom/kwad/components/ad/fullscreen/c/c/b;->j(Lcom/kwad/components/ad/fullscreen/c/c/b;)Landroid/os/Vibrator;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/kwad/sdk/utils/bj;->a(Landroid/content/Context;Landroid/os/Vibrator;)V

    return-void

    :cond_2
    :goto_0
    new-instance p1, Lcom/kwad/components/ad/fullscreen/c/c/b$3$1;

    invoke-direct {p1, p0}, Lcom/kwad/components/ad/fullscreen/c/c/b$3$1;-><init>(Lcom/kwad/components/ad/fullscreen/c/c/b$3;)V

    invoke-static {p1, v3, v1, v2}, Lcom/kwad/sdk/utils/bj;->a(Ljava/lang/Runnable;Ljava/lang/Object;J)V

    return-void
.end method

.method public final aT()V
    .locals 0

    return-void
.end method
