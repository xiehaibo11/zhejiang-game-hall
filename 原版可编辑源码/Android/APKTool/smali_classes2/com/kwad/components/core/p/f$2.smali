.class final Lcom/kwad/components/core/p/f$2;
.super Lcom/kwad/sdk/utils/aw;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/p/f;->a(Landroid/content/Context;Lcom/kwad/components/core/p/f$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/utils/aw;-><init>()V

    return-void
.end method


# virtual methods
.method public final doTask()V
    .locals 2

    invoke-static {}, Lcom/kwad/components/core/p/f;->pG()Landroid/content/Context;

    move-result-object v0

    invoke-static {}, Lcom/kwad/components/core/p/f;->pG()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/y;->ca(Landroid/content/Context;)I

    move-result v1

    add-int/lit8 v1, v1, 0x1

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/y;->j(Landroid/content/Context;I)V

    invoke-static {}, Lcom/kwad/components/core/p/f;->pG()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->aQ(Landroid/content/Context;)V

    invoke-static {}, Lcom/kwad/components/core/p/f;->aR()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/components/core/p/f$a;

    if-eqz v1, :cond_0

    invoke-interface {v1}, Lcom/kwad/components/core/p/f$a;->on()V

    goto :goto_0

    :cond_1
    invoke-static {}, Lcom/kwad/components/core/p/f;->pF()V

    return-void
.end method
