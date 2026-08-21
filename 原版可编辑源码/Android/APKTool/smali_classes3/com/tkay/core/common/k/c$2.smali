.class final Lcom/tkay/core/common/k/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IZLjava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Ljava/lang/String;

.field final synthetic f:I

.field final synthetic g:Z

.field final synthetic h:Ljava/lang/String;

.field final synthetic i:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IZLjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 1011
    iput-object p1, p0, Lcom/tkay/core/common/k/c$2;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/tkay/core/common/k/c$2;->b:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/core/common/k/c$2;->c:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/core/common/k/c$2;->d:Ljava/lang/String;

    iput-object p5, p0, Lcom/tkay/core/common/k/c$2;->e:Ljava/lang/String;

    iput p6, p0, Lcom/tkay/core/common/k/c$2;->f:I

    iput-boolean p7, p0, Lcom/tkay/core/common/k/c$2;->g:Z

    iput-object p8, p0, Lcom/tkay/core/common/k/c$2;->h:Ljava/lang/String;

    iput-object p9, p0, Lcom/tkay/core/common/k/c$2;->i:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 6

    .line 1014
    new-instance v0, Lcom/tkay/core/common/f/g;

    iget-object v1, p0, Lcom/tkay/core/common/k/c$2;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/core/common/k/c$2;->b:Ljava/lang/String;

    invoke-direct {v0, v1, v2}, Lcom/tkay/core/common/f/g;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "1004680"

    .line 1015
    iput-object v1, v0, Lcom/tkay/core/common/f/g;->a:Ljava/lang/String;

    .line 1016
    iget-object v1, p0, Lcom/tkay/core/common/k/c$2;->c:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->b:Ljava/lang/String;

    .line 1017
    iget-object v1, p0, Lcom/tkay/core/common/k/c$2;->d:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->d:Ljava/lang/String;

    .line 1018
    iget-object v1, p0, Lcom/tkay/core/common/k/c$2;->e:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->m:Ljava/lang/String;

    .line 1019
    iget v1, p0, Lcom/tkay/core/common/k/c$2;->f:I

    invoke-static {v1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->n:Ljava/lang/String;

    .line 1020
    iget-boolean v1, p0, Lcom/tkay/core/common/k/c$2;->g:Z

    const-string v2, "1"

    const-string v3, "0"

    if-eqz v1, :cond_0

    move-object v1, v2

    goto :goto_0

    :cond_0
    move-object v1, v3

    :goto_0
    iput-object v1, v0, Lcom/tkay/core/common/f/g;->o:Ljava/lang/String;

    const/4 v1, 0x1

    .line 1023
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    const-string v5, "power"

    invoke-virtual {v4, v5}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/os/PowerManager;

    .line 1024
    invoke-virtual {v4}, Landroid/os/PowerManager;->isScreenOn()Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    if-eqz v1, :cond_1

    move-object v1, v2

    goto :goto_1

    :cond_1
    move-object v1, v3

    .line 1028
    :goto_1
    iput-object v1, v0, Lcom/tkay/core/common/f/g;->p:Ljava/lang/String;

    .line 1029
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;)Z

    move-result v1

    if-eqz v1, :cond_2

    goto :goto_2

    :cond_2
    move-object v2, v3

    .line 1030
    :goto_2
    iput-object v2, v0, Lcom/tkay/core/common/f/g;->q:Ljava/lang/String;

    .line 1031
    iget-object v1, p0, Lcom/tkay/core/common/k/c$2;->h:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->r:Ljava/lang/String;

    .line 1032
    iget-object v1, p0, Lcom/tkay/core/common/k/c$2;->i:Ljava/lang/String;

    iput-object v1, v0, Lcom/tkay/core/common/f/g;->s:Ljava/lang/String;

    .line 1034
    invoke-static {v0}, Lcom/tkay/core/common/k/c;->a(Lcom/tkay/core/common/f/g;)V

    return-void
.end method
