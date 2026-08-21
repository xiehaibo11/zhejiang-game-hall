.class final Lcom/tkay/expressad/reward/a/d$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/reward/a/c$i;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/foundation/d/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic c:I

.field final synthetic d:Lcom/tkay/expressad/reward/a/d;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/reward/a/d;ZLcom/tkay/expressad/foundation/d/c;I)V
    .locals 0

    .line 2209
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    iput-boolean p2, p0, Lcom/tkay/expressad/reward/a/d$3;->a:Z

    iput-object p3, p0, Lcom/tkay/expressad/reward/a/d$3;->b:Lcom/tkay/expressad/foundation/d/c;

    iput p4, p0, Lcom/tkay/expressad/reward/a/d$3;->c:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 2219
    iget-boolean v0, p0, Lcom/tkay/expressad/reward/a/d$3;->a:Z

    const/4 v1, 0x1

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 2225
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 2226
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 2232
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/reward/a/d$3$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/reward/a/d$3$1;-><init>(Lcom/tkay/expressad/reward/a/d$3;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void

    .line 2248
    :cond_1
    iget v0, p0, Lcom/tkay/expressad/reward/a/d$3;->c:I

    if-ne v0, v1, :cond_4

    .line 2249
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_3

    .line 2250
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    const/4 v1, 0x3

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    return-void

    .line 2254
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->ar()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$3;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c;->I()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 2255
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    const/4 v1, 0x2

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    return-void

    .line 2263
    :cond_3
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v0

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 2264
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$3;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/reward/a/d$3$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/expressad/reward/a/d$3$2;-><init>(Lcom/tkay/expressad/reward/a/d$3;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_4
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    return-void
.end method
