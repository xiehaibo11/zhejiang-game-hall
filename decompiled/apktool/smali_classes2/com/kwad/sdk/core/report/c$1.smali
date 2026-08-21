.class final Lcom/kwad/sdk/core/report/c$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/report/c;->a(Lcom/kwad/sdk/core/report/n;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic aqJ:Lcom/kwad/sdk/core/report/n;

.field final synthetic aqK:Lcom/kwad/sdk/core/report/c;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/report/c;Lcom/kwad/sdk/core/report/n;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/report/c$1;->aqK:Lcom/kwad/sdk/core/report/c;

    iput-object p2, p0, Lcom/kwad/sdk/core/report/c$1;->aqJ:Lcom/kwad/sdk/core/report/n;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/core/report/c;->vW()Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/core/report/c;->vW()Landroid/os/Handler;

    move-result-object v0

    const v1, 0x1010111

    invoke-virtual {v0, v1}, Landroid/os/Handler;->hasMessages(I)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/report/c$1;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/c;->a(Lcom/kwad/sdk/core/report/c;)J

    move-result-wide v1

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/core/report/c;->a(Lcom/kwad/sdk/core/report/c;J)V

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/report/c$1;->aqJ:Lcom/kwad/sdk/core/report/n;

    invoke-interface {v0}, Lcom/kwad/sdk/core/report/n;->BU()Lcom/kwad/sdk/core/report/g;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v1, p0, Lcom/kwad/sdk/core/report/c$1;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-static {v1}, Lcom/kwad/sdk/core/report/c;->b(Lcom/kwad/sdk/core/report/c;)Lcom/kwad/sdk/core/report/o;

    move-result-object v1

    invoke-interface {v1, v0}, Lcom/kwad/sdk/core/report/o;->j(Ljava/lang/Object;)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/report/c$1;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/c;->c(Lcom/kwad/sdk/core/report/c;)Z

    move-result v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/report/c$1;->aqK:Lcom/kwad/sdk/core/report/c;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/report/c;->BR()V

    :cond_2
    return-void
.end method
