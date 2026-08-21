.class final Lcom/kwad/sdk/a/a/c$6;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/a/a/c;->yf()V
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

    iput-object p1, p0, Lcom/kwad/sdk/a/a/c$6;->ahI:Lcom/kwad/sdk/a/a/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/a/a/b;->xY()Lcom/kwad/sdk/a/a/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/a/a/b;->xZ()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zm()I

    move-result v1

    if-nez v1, :cond_1

    return-void

    :cond_1
    iget-object v1, p0, Lcom/kwad/sdk/a/a/c$6;->ahI:Lcom/kwad/sdk/a/a/c;

    const/4 v2, 0x1

    iput-boolean v2, v1, Lcom/kwad/sdk/a/a/c;->ahG:Z

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->AU()Lcom/kwad/sdk/core/c/b;

    invoke-static {}, Lcom/kwad/sdk/core/c/b;->getCurrentActivity()Landroid/app/Activity;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/a/a/a/b;->J(Landroid/content/Context;)V

    iget-object v1, p0, Lcom/kwad/sdk/a/a/c$6;->ahI:Lcom/kwad/sdk/a/a/c;

    invoke-static {v1, v0}, Lcom/kwad/sdk/a/a/c;->a(Lcom/kwad/sdk/a/a/c;Lcom/kwad/sdk/core/response/model/AdTemplate;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    invoke-static {v0}, Lcom/kwad/components/core/d/a;->b(Ljava/lang/Throwable;)V

    return-void
.end method
