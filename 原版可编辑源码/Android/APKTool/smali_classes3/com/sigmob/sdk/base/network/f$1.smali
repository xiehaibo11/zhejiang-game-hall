.class Lcom/sigmob/sdk/base/network/f$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/base/network/f$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/common/g;Lcom/sigmob/sdk/base/models/BaseAdUnit;ZZZ)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/sigmob/sdk/base/common/g;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field final synthetic e:Z

.field final synthetic f:Z


# direct methods
.method constructor <init>(ZLcom/sigmob/sdk/base/common/g;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;ZZ)V
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/base/network/f$1;->a:Z

    iput-object p2, p0, Lcom/sigmob/sdk/base/network/f$1;->b:Lcom/sigmob/sdk/base/common/g;

    iput-object p3, p0, Lcom/sigmob/sdk/base/network/f$1;->c:Ljava/lang/String;

    iput-object p4, p0, Lcom/sigmob/sdk/base/network/f$1;->d:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iput-boolean p5, p0, Lcom/sigmob/sdk/base/network/f$1;->e:Z

    iput-boolean p6, p0, Lcom/sigmob/sdk/base/network/f$1;->f:Z

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Lcom/czhj/volley/NetworkResponse;)V
    .locals 4

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/network/f$1;->a:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/f$1;->b:Lcom/sigmob/sdk/base/common/g;

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/f$1;->c:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/network/f$1;->d:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    const/4 v3, 0x0

    invoke-static {v0, v1, v2, p1, v3}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/common/g;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/czhj/volley/NetworkResponse;Lcom/sigmob/sdk/base/common/z$a;)V

    :cond_0
    iget-boolean p1, p0, Lcom/sigmob/sdk/base/network/f$1;->e:Z

    if-eqz p1, :cond_1

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "retry Send success "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/sigmob/sdk/base/network/f;->b()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "adtracker"

    invoke-static {v0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    new-instance p1, Lcom/sigmob/sdk/base/network/f$1$1;

    invoke-direct {p1, p0}, Lcom/sigmob/sdk/base/network/f$1$1;-><init>(Lcom/sigmob/sdk/base/network/f$1;)V

    invoke-static {p1}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory;->MainThreadRun(Ljava/lang/Runnable;)V

    :cond_1
    return-void
.end method

.method public onErrorResponse(Lcom/czhj/volley/VolleyError;)V
    .locals 3

    iget-object v0, p1, Lcom/czhj/volley/VolleyError;->networkResponse:Lcom/czhj/volley/NetworkResponse;

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/network/f$1;->f:Z

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/f$1;->b:Lcom/sigmob/sdk/base/common/g;

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/common/g;->j()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    if-gtz v0, :cond_0

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/network/f$1;->e:Z

    if-eqz v0, :cond_1

    :cond_0
    new-instance v0, Lcom/sigmob/sdk/base/network/f$1$2;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/base/network/f$1$2;-><init>(Lcom/sigmob/sdk/base/network/f$1;)V

    invoke-static {v0}, Lcom/czhj/sdk/common/ThreadPool/ThreadPoolFactory;->MainThreadRun(Ljava/lang/Runnable;)V

    :cond_1
    iget-boolean v0, p0, Lcom/sigmob/sdk/base/network/f$1;->a:Z

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/sigmob/sdk/base/network/f$1;->b:Lcom/sigmob/sdk/base/common/g;

    iget-object v1, p0, Lcom/sigmob/sdk/base/network/f$1;->c:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/base/network/f$1;->d:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-static {v0, v1, v2, p1}, Lcom/sigmob/sdk/base/common/z;->a(Lcom/sigmob/sdk/base/common/g;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/czhj/volley/VolleyError;)V

    :cond_2
    invoke-virtual {p1}, Lcom/czhj/volley/VolleyError;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->e(Ljava/lang/String;)V

    return-void
.end method
