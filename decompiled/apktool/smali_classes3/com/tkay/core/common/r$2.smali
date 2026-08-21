.class final Lcom/tkay/core/common/r$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/r;->a(Lcom/tkay/core/c/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/c/a;

.field final synthetic b:Lcom/tkay/core/common/r;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/r;Lcom/tkay/core/c/a;)V
    .locals 0

    .line 121
    iput-object p1, p0, Lcom/tkay/core/common/r$2;->b:Lcom/tkay/core/common/r;

    iput-object p2, p0, Lcom/tkay/core/common/r$2;->a:Lcom/tkay/core/c/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 125
    :try_start_0
    iget-object v0, p0, Lcom/tkay/core/common/r$2;->b:Lcom/tkay/core/common/r;

    invoke-static {v0}, Lcom/tkay/core/common/r;->a(Lcom/tkay/core/common/r;)Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 128
    :cond_0
    iget-object v0, p0, Lcom/tkay/core/common/r$2;->b:Lcom/tkay/core/common/r;

    invoke-static {v0}, Lcom/tkay/core/common/r;->a(Lcom/tkay/core/common/r;)Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    const-string v1, ""

    const/4 v2, 0x0

    :goto_0
    const/4 v3, 0x2

    if-ge v2, v3, :cond_1

    .line 131
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 133
    :cond_1
    invoke-static {v1}, Lcom/tkay/core/common/l/f;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 135
    new-instance v2, Landroid/content/Intent;

    invoke-direct {v2, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 136
    iget-object v3, p0, Lcom/tkay/core/common/r$2;->a:Lcom/tkay/core/c/a;

    invoke-virtual {v3}, Lcom/tkay/core/c/a;->H()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v1, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "data"

    .line 137
    invoke-static {}, Lcom/tkay/core/common/l/m;->a()Lorg/json/JSONObject;

    move-result-object v3

    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v1, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string v1, "denied"

    .line 138
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v3

    invoke-virtual {v3}, Lcom/tkay/core/common/b/m;->e()[Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v1, v3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;[Ljava/lang/String;)Landroid/content/Intent;

    .line 141
    invoke-virtual {v2, v0}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 142
    iget-object v0, p0, Lcom/tkay/core/common/r$2;->b:Lcom/tkay/core/common/r;

    invoke-static {v0}, Lcom/tkay/core/common/r;->a(Lcom/tkay/core/common/r;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/j;

    move-result-object v0

    invoke-virtual {v0, v2}, Lcom/tkay/core/common/b/j;->a(Landroid/content/Intent;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
