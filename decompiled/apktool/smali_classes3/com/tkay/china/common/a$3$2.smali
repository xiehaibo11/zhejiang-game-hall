.class final Lcom/tkay/china/common/a$3$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/common/a$3;->a(Lcom/tkay/china/common/a/e;J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/china/common/a/e;

.field final synthetic b:J

.field final synthetic c:Lcom/tkay/china/common/a$3;


# direct methods
.method constructor <init>(Lcom/tkay/china/common/a$3;Lcom/tkay/china/common/a/e;J)V
    .locals 0

    .line 331
    iput-object p1, p0, Lcom/tkay/china/common/a$3$2;->c:Lcom/tkay/china/common/a$3;

    iput-object p2, p0, Lcom/tkay/china/common/a$3$2;->a:Lcom/tkay/china/common/a/e;

    iput-wide p3, p0, Lcom/tkay/china/common/a$3$2;->b:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 10

    .line 334
    iget-object v0, p0, Lcom/tkay/china/common/a$3$2;->c:Lcom/tkay/china/common/a$3;

    iget-object v0, v0, Lcom/tkay/china/common/a$3;->a:Lcom/tkay/china/common/a;

    invoke-static {v0}, Lcom/tkay/china/common/a;->c(Lcom/tkay/china/common/a;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/china/common/a$3$2;->a:Lcom/tkay/china/common/a/e;

    iget-object v1, v1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 335
    iget-object v0, p0, Lcom/tkay/china/common/a$3$2;->c:Lcom/tkay/china/common/a$3;

    iget-object v0, v0, Lcom/tkay/china/common/a$3;->a:Lcom/tkay/china/common/a;

    invoke-static {v0}, Lcom/tkay/china/common/a;->d(Lcom/tkay/china/common/a;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/china/common/a$3$2;->a:Lcom/tkay/china/common/a/e;

    iget-object v1, v1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 336
    iget-object v0, p0, Lcom/tkay/china/common/a$3$2;->c:Lcom/tkay/china/common/a$3;

    iget-object v0, v0, Lcom/tkay/china/common/a$3;->a:Lcom/tkay/china/common/a;

    invoke-static {v0}, Lcom/tkay/china/common/a;->e(Lcom/tkay/china/common/a;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    if-nez v0, :cond_0

    .line 337
    iget-object v0, p0, Lcom/tkay/china/common/a$3$2;->c:Lcom/tkay/china/common/a$3;

    iget-object v0, v0, Lcom/tkay/china/common/a$3;->a:Lcom/tkay/china/common/a;

    new-instance v1, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v1}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    invoke-static {v0, v1}, Lcom/tkay/china/common/a;->a(Lcom/tkay/china/common/a;Ljava/util/concurrent/ConcurrentHashMap;)Ljava/util/concurrent/ConcurrentHashMap;

    .line 339
    :cond_0
    iget-object v0, p0, Lcom/tkay/china/common/a$3$2;->c:Lcom/tkay/china/common/a$3;

    iget-object v0, v0, Lcom/tkay/china/common/a$3;->a:Lcom/tkay/china/common/a;

    invoke-static {v0}, Lcom/tkay/china/common/a;->e(Lcom/tkay/china/common/a;)Ljava/util/concurrent/ConcurrentHashMap;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/china/common/a$3$2;->a:Lcom/tkay/china/common/a/e;

    iget-object v1, v1, Lcom/tkay/china/common/a/e;->n:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/china/common/a$3$2;->a:Lcom/tkay/china/common/a/e;

    invoke-virtual {v0, v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 341
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "action_offer_download_end"

    .line 342
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 343
    iget-object v1, p0, Lcom/tkay/china/common/a$3$2;->c:Lcom/tkay/china/common/a$3;

    iget-object v1, v1, Lcom/tkay/china/common/a$3;->a:Lcom/tkay/china/common/a;

    invoke-static {v1}, Lcom/tkay/china/common/a;->b(Lcom/tkay/china/common/a;)Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/content/Intent;->setPackage(Ljava/lang/String;)Landroid/content/Intent;

    .line 344
    iget-object v1, p0, Lcom/tkay/china/common/a$3$2;->a:Lcom/tkay/china/common/a/e;

    iget-object v1, v1, Lcom/tkay/china/common/a/e;->f:Ljava/lang/String;

    const-string v2, "receiver_extra_offer_id"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 345
    iget-object v1, p0, Lcom/tkay/china/common/a$3$2;->a:Lcom/tkay/china/common/a/e;

    iget-object v1, v1, Lcom/tkay/china/common/a/e;->m:Ljava/lang/String;

    const-string v2, "receiver_extra_click_id"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    .line 346
    iget-object v1, p0, Lcom/tkay/china/common/a$3$2;->c:Lcom/tkay/china/common/a$3;

    iget-object v1, v1, Lcom/tkay/china/common/a$3;->a:Lcom/tkay/china/common/a;

    invoke-static {v1}, Lcom/tkay/china/common/a;->b(Lcom/tkay/china/common/a;)Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/m;->a(Landroid/content/Context;)Lcom/tkay/core/common/m;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/tkay/core/common/m;->a(Landroid/content/Intent;)Z

    .line 349
    iget-object v0, p0, Lcom/tkay/china/common/a$3$2;->c:Lcom/tkay/china/common/a$3;

    iget-object v0, v0, Lcom/tkay/china/common/a$3;->a:Lcom/tkay/china/common/a;

    iget-object v1, p0, Lcom/tkay/china/common/a$3$2;->a:Lcom/tkay/china/common/a/e;

    invoke-virtual {v0, v1}, Lcom/tkay/china/common/a;->b(Lcom/tkay/china/common/a/e;)V

    .line 350
    iget-object v0, p0, Lcom/tkay/china/common/a$3$2;->c:Lcom/tkay/china/common/a$3;

    iget-object v0, v0, Lcom/tkay/china/common/a$3;->a:Lcom/tkay/china/common/a;

    invoke-static {v0}, Lcom/tkay/china/common/a;->b(Lcom/tkay/china/common/a;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/china/common/a$3$2;->a:Lcom/tkay/china/common/a/e;

    invoke-virtual {v0, v1}, Lcom/tkay/china/common/b/a;->c(Lcom/tkay/china/common/a/e;)V

    .line 351
    iget-object v0, p0, Lcom/tkay/china/common/a$3$2;->c:Lcom/tkay/china/common/a$3;

    iget-object v0, v0, Lcom/tkay/china/common/a$3;->a:Lcom/tkay/china/common/a;

    invoke-static {v0}, Lcom/tkay/china/common/a;->b(Lcom/tkay/china/common/a;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/china/common/b/a;->a(Landroid/content/Context;)Lcom/tkay/china/common/b/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/china/common/a$3$2;->a:Lcom/tkay/china/common/a/e;

    invoke-virtual {v0, v1}, Lcom/tkay/china/common/b/a;->a(Lcom/tkay/china/common/a/e;)V

    .line 354
    iget-object v0, p0, Lcom/tkay/china/common/a$3$2;->a:Lcom/tkay/china/common/a/e;

    iget-object v1, v0, Lcom/tkay/china/common/a/e;->a:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/china/common/a$3$2;->a:Lcom/tkay/china/common/a/e;

    iget-object v2, v0, Lcom/tkay/china/common/a/e;->f:Ljava/lang/String;

    iget-object v0, p0, Lcom/tkay/china/common/a$3$2;->a:Lcom/tkay/china/common/a/e;

    iget-object v3, v0, Lcom/tkay/china/common/a/e;->b:Ljava/lang/String;

    const/4 v4, 0x2

    const/4 v5, 0x0

    iget-wide v6, p0, Lcom/tkay/china/common/a$3$2;->b:J

    iget-object v0, p0, Lcom/tkay/china/common/a$3$2;->a:Lcom/tkay/china/common/a/e;

    iget-wide v8, v0, Lcom/tkay/china/common/a/e;->h:J

    invoke-static/range {v1 .. v9}, Lcom/tkay/core/common/k/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;JJ)V

    .line 357
    iget-object v0, p0, Lcom/tkay/china/common/a$3$2;->c:Lcom/tkay/china/common/a$3;

    iget-object v0, v0, Lcom/tkay/china/common/a$3;->a:Lcom/tkay/china/common/a;

    invoke-virtual {v0}, Lcom/tkay/china/common/a;->b()V

    return-void
.end method
