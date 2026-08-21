.class final Lcom/kwad/components/core/n/h$5;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/n/h;->c(Lcom/kwad/sdk/g/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic Pn:Lcom/kwad/components/core/n/h;

.field final synthetic Po:Lcom/kwad/sdk/g/a;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/n/h;Lcom/kwad/sdk/g/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/n/h$5;->Pn:Lcom/kwad/components/core/n/h;

    iput-object p2, p0, Lcom/kwad/components/core/n/h$5;->Po:Lcom/kwad/sdk/g/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/components/core/n/h$5;->Pn:Lcom/kwad/components/core/n/h;

    invoke-static {v0}, Lcom/kwad/components/core/n/h;->a(Lcom/kwad/components/core/n/h;)Ljava/util/List;

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

    check-cast v1, Lcom/kwad/components/core/n/i;

    if-eqz v1, :cond_0

    :try_start_0
    iget-object v2, p0, Lcom/kwad/components/core/n/h$5;->Po:Lcom/kwad/sdk/g/a;

    invoke-interface {v2, v1}, Lcom/kwad/sdk/g/a;->accept(Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    goto :goto_0

    :cond_1
    return-void
.end method
