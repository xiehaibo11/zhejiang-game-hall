.class final Lcom/kwad/sdk/core/network/idc/a$1;
.super Lcom/kwad/sdk/utils/aw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/core/network/idc/a;->init(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic apW:Lcom/kwad/sdk/core/network/idc/a;

.field final synthetic jz:Landroid/content/Context;


# direct methods
.method constructor <init>(Lcom/kwad/sdk/core/network/idc/a;Landroid/content/Context;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/network/idc/a$1;->apW:Lcom/kwad/sdk/core/network/idc/a;

    iput-object p2, p0, Lcom/kwad/sdk/core/network/idc/a$1;->jz:Landroid/content/Context;

    invoke-direct {p0}, Lcom/kwad/sdk/utils/aw;-><init>()V

    return-void
.end method


# virtual methods
.method public final doTask()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/core/network/idc/a$1;->apW:Lcom/kwad/sdk/core/network/idc/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/network/idc/a;->a(Lcom/kwad/sdk/core/network/idc/a;)Ljava/util/Map;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/sdk/core/network/idc/a$1;->jz:Landroid/content/Context;

    invoke-static {v1}, Lcom/kwad/sdk/core/network/idc/b;->aZ(Landroid/content/Context;)Ljava/util/Map;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/network/idc/a$1;->apW:Lcom/kwad/sdk/core/network/idc/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/network/idc/a;->b(Lcom/kwad/sdk/core/network/idc/a;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/network/idc/a$1;->apW:Lcom/kwad/sdk/core/network/idc/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/network/idc/a;->c(Lcom/kwad/sdk/core/network/idc/a;)Lcom/kwad/sdk/core/network/idc/a/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/network/idc/a/a;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/network/idc/a$1;->apW:Lcom/kwad/sdk/core/network/idc/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/network/idc/a;->c(Lcom/kwad/sdk/core/network/idc/a;)Lcom/kwad/sdk/core/network/idc/a/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/core/network/idc/a/a;->Bs()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    iget-object v2, p0, Lcom/kwad/sdk/core/network/idc/a$1;->apW:Lcom/kwad/sdk/core/network/idc/a;

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/network/idc/a;->a(Lcom/kwad/sdk/core/network/idc/a;Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    return-void
.end method
