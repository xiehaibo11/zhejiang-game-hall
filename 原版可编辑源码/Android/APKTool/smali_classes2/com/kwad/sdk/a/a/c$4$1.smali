.class final Lcom/kwad/sdk/a/a/c$4$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/a/a/c$4;->gB()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic ahL:Lcom/kwad/sdk/a/a/c$4;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/a/a/c$4;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/a/a/c$4$1;->ahL:Lcom/kwad/sdk/a/a/c$4;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/a/a/c$4$1;->ahL:Lcom/kwad/sdk/a/a/c$4;

    iget-object v0, v0, Lcom/kwad/sdk/a/a/c$4;->ahI:Lcom/kwad/sdk/a/a/c;

    invoke-static {v0}, Lcom/kwad/sdk/a/a/c;->a(Lcom/kwad/sdk/a/a/c;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/a/a/c$4$1;->ahL:Lcom/kwad/sdk/a/a/c$4;

    iget-object v0, v0, Lcom/kwad/sdk/a/a/c$4;->ahI:Lcom/kwad/sdk/a/a/c;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/kwad/sdk/a/a/c;->ahH:Z

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/a/a/c$4$1;->ahL:Lcom/kwad/sdk/a/a/c$4;

    iget-object v0, v0, Lcom/kwad/sdk/a/a/c$4;->ahI:Lcom/kwad/sdk/a/a/c;

    invoke-static {v0}, Lcom/kwad/sdk/a/a/c;->b(Lcom/kwad/sdk/a/a/c;)V

    return-void
.end method
