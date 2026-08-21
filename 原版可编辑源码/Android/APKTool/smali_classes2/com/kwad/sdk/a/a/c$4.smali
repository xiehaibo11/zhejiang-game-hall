.class final Lcom/kwad/sdk/a/a/c$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/a/a/b$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/a/a/c;->yd()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ahI:Lcom/kwad/sdk/a/a/c;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/a/a/c;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/a/a/c$4;->ahI:Lcom/kwad/sdk/a/a/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final gB()V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/a/a/c$4$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/a/a/c$4$1;-><init>(Lcom/kwad/sdk/a/a/c$4;)V

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zn()J

    move-result-wide v1

    invoke-static {v0, v1, v2}, Lcom/kwad/sdk/utils/bj;->runOnUiThreadDelay(Ljava/lang/Runnable;J)V

    return-void
.end method

.method public final ya()V
    .locals 2

    const-string v0, "InstallTipsManager"

    const-string v1, "showInitDelayDialog failed"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
