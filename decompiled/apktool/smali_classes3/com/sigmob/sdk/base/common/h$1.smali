.class Lcom/sigmob/sdk/base/common/h$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/views/q$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/common/h;->l()Z
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/base/common/h;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/base/common/h;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->a(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->a(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->dismiss()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->a(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->c()V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    const/4 v2, 0x0

    invoke-static {v0, v2}, Lcom/sigmob/sdk/base/common/h;->a(Lcom/sigmob/sdk/base/common/h;Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q;

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0, v1}, Lcom/sigmob/sdk/base/common/h;->a(Lcom/sigmob/sdk/base/common/h;Z)Z

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSessionManager()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    if-eqz v0, :cond_2

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->g:Lcom/sigmob/sdk/base/common/a;

    invoke-interface {v0, v2, v1}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_2
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->c(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/views/q$b;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->c(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/views/q$b;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/base/views/q$b;->a()V

    :cond_3
    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/common/h;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->c(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/views/q$b;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->c(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/views/q$b;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/sigmob/sdk/base/views/q$b;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public b()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSessionManager()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    if-eqz v0, :cond_1

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->f:Lcom/sigmob/sdk/base/common/a;

    const/4 v2, 0x0

    invoke-interface {v0, v1, v2}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_1
    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->c(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/views/q$b;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/base/common/h$1;->a:Lcom/sigmob/sdk/base/common/h;

    invoke-static {v0}, Lcom/sigmob/sdk/base/common/h;->c(Lcom/sigmob/sdk/base/common/h;)Lcom/sigmob/sdk/base/views/q$b;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/base/views/q$b;->b()V

    :cond_2
    return-void
.end method
