.class final Lcom/tkay/expressad/reward/a/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/b/g$d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/reward/a/c;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/reward/a/c$i;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Lcom/tkay/expressad/reward/a/c$i;

.field final synthetic e:Lcom/tkay/expressad/reward/a/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/reward/a/c;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/tkay/expressad/reward/a/c$i;)V
    .locals 0

    .line 284
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/c$2;->e:Lcom/tkay/expressad/reward/a/c;

    iput-object p2, p0, Lcom/tkay/expressad/reward/a/c$2;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/expressad/reward/a/c$2;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/tkay/expressad/reward/a/c$2;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/tkay/expressad/reward/a/c$2;->d:Lcom/tkay/expressad/reward/a/c$i;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 7

    const-string v0, "url"

    const-string v1, "request_id"

    const-string v2, "unit_id"

    .line 289
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v3

    const/4 v4, 0x1

    invoke-virtual {v3, p1, v4}, Lcom/tkay/expressad/videocommon/b/j;->b(Ljava/lang/String;Z)V

    .line 290
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v3

    const/16 v4, 0x69

    .line 291
    iput v4, v3, Landroid/os/Message;->what:I

    .line 292
    new-instance v4, Landroid/os/Bundle;

    invoke-direct {v4}, Landroid/os/Bundle;-><init>()V

    .line 293
    iget-object v5, p0, Lcom/tkay/expressad/reward/a/c$2;->a:Ljava/lang/String;

    invoke-virtual {v4, v2, v5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 294
    sget-object v5, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$2;->b:Ljava/lang/String;

    invoke-virtual {v4, v5, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 295
    iget-object v5, p0, Lcom/tkay/expressad/reward/a/c$2;->c:Ljava/lang/String;

    invoke-virtual {v4, v1, v5}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 296
    invoke-virtual {v4, v0, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 297
    invoke-virtual {v3, v4}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 298
    iget-object v4, p0, Lcom/tkay/expressad/reward/a/c$2;->e:Lcom/tkay/expressad/reward/a/c;

    invoke-static {v4}, Lcom/tkay/expressad/reward/a/c;->a(Lcom/tkay/expressad/reward/a/c;)Lcom/tkay/expressad/reward/a/c$h;

    move-result-object v4

    invoke-virtual {v4, v3}, Lcom/tkay/expressad/reward/a/c$h;->sendMessage(Landroid/os/Message;)Z

    .line 299
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$2;->d:Lcom/tkay/expressad/reward/a/c$i;

    if-eqz v3, :cond_0

    .line 300
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$2;->d:Lcom/tkay/expressad/reward/a/c$i;

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/c$2;->b:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/c$2;->a:Ljava/lang/String;

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$2;->c:Ljava/lang/String;

    invoke-interface {v3, v4, v5, v6}, Lcom/tkay/expressad/reward/a/c$i;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception v3

    .line 321
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v4

    const/4 v5, 0x0

    invoke-virtual {v4, p1, v5}, Lcom/tkay/expressad/videocommon/b/j;->b(Ljava/lang/String;Z)V

    .line 322
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v4

    const/16 v5, 0xcd

    .line 323
    iput v5, v4, Landroid/os/Message;->what:I

    .line 324
    new-instance v5, Landroid/os/Bundle;

    invoke-direct {v5}, Landroid/os/Bundle;-><init>()V

    .line 325
    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$2;->a:Ljava/lang/String;

    invoke-virtual {v5, v2, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 326
    sget-object v2, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$2;->b:Ljava/lang/String;

    invoke-virtual {v5, v2, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 327
    iget-object v2, p0, Lcom/tkay/expressad/reward/a/c$2;->c:Ljava/lang/String;

    invoke-virtual {v5, v1, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 328
    invoke-virtual {v5, v0, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 329
    invoke-virtual {v4, v5}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 330
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$2;->e:Lcom/tkay/expressad/reward/a/c;

    invoke-static {p1}, Lcom/tkay/expressad/reward/a/c;->a(Lcom/tkay/expressad/reward/a/c;)Lcom/tkay/expressad/reward/a/c$h;

    move-result-object p1

    invoke-virtual {p1, v4}, Lcom/tkay/expressad/reward/a/c$h;->sendMessage(Landroid/os/Message;)Z

    .line 331
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$2;->d:Lcom/tkay/expressad/reward/a/c$i;

    if-eqz p1, :cond_1

    .line 332
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$2;->a:Ljava/lang/String;

    invoke-virtual {v3}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    invoke-interface {p1, v0}, Lcom/tkay/expressad/reward/a/c$i;->a(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 9

    const-string v0, "message"

    const-string v1, "url"

    const-string v2, "request_id"

    const-string v3, "unit_id"

    const/4 v4, 0x0

    .line 361
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v5

    invoke-virtual {v5, p2, v4}, Lcom/tkay/expressad/videocommon/b/j;->b(Ljava/lang/String;Z)V

    .line 362
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v5

    const/16 v6, 0xcd

    .line 363
    iput v6, v5, Landroid/os/Message;->what:I

    .line 364
    new-instance v6, Landroid/os/Bundle;

    invoke-direct {v6}, Landroid/os/Bundle;-><init>()V

    .line 365
    iget-object v7, p0, Lcom/tkay/expressad/reward/a/c$2;->a:Ljava/lang/String;

    invoke-virtual {v6, v3, v7}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 366
    sget-object v7, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v8, p0, Lcom/tkay/expressad/reward/a/c$2;->b:Ljava/lang/String;

    invoke-virtual {v6, v7, v8}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 367
    iget-object v7, p0, Lcom/tkay/expressad/reward/a/c$2;->c:Ljava/lang/String;

    invoke-virtual {v6, v2, v7}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 368
    invoke-virtual {v6, v1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 369
    invoke-virtual {v6, v0, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 370
    invoke-virtual {v5, v6}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 371
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$2;->e:Lcom/tkay/expressad/reward/a/c;

    invoke-static {p1}, Lcom/tkay/expressad/reward/a/c;->a(Lcom/tkay/expressad/reward/a/c;)Lcom/tkay/expressad/reward/a/c$h;

    move-result-object p1

    invoke-virtual {p1, v5}, Lcom/tkay/expressad/reward/a/c$h;->sendMessage(Landroid/os/Message;)Z

    .line 373
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$2;->d:Lcom/tkay/expressad/reward/a/c$i;

    if-eqz p1, :cond_0

    .line 374
    iget-object p1, p0, Lcom/tkay/expressad/reward/a/c$2;->d:Lcom/tkay/expressad/reward/a/c$i;

    iget-object v5, p0, Lcom/tkay/expressad/reward/a/c$2;->a:Ljava/lang/String;

    invoke-interface {p1, v5}, Lcom/tkay/expressad/reward/a/c$i;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_0
    return-void

    :catch_0
    move-exception p1

    .line 393
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/j;->a()Lcom/tkay/expressad/videocommon/b/j;

    move-result-object v5

    invoke-virtual {v5, p2, v4}, Lcom/tkay/expressad/videocommon/b/j;->b(Ljava/lang/String;Z)V

    .line 394
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v4

    const/16 v5, 0x69

    .line 395
    iput v5, v4, Landroid/os/Message;->what:I

    .line 396
    new-instance v5, Landroid/os/Bundle;

    invoke-direct {v5}, Landroid/os/Bundle;-><init>()V

    .line 397
    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$2;->a:Ljava/lang/String;

    invoke-virtual {v5, v3, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 398
    sget-object v3, Lcom/tkay/expressad/b;->y:Ljava/lang/String;

    iget-object v6, p0, Lcom/tkay/expressad/reward/a/c$2;->b:Ljava/lang/String;

    invoke-virtual {v5, v3, v6}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 399
    iget-object v3, p0, Lcom/tkay/expressad/reward/a/c$2;->c:Ljava/lang/String;

    invoke-virtual {v5, v2, v3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 400
    invoke-virtual {v5, v1, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 401
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v5, v0, p2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 402
    invoke-virtual {v4, v5}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    .line 403
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$2;->e:Lcom/tkay/expressad/reward/a/c;

    invoke-static {p2}, Lcom/tkay/expressad/reward/a/c;->a(Lcom/tkay/expressad/reward/a/c;)Lcom/tkay/expressad/reward/a/c$h;

    move-result-object p2

    invoke-virtual {p2, v4}, Lcom/tkay/expressad/reward/a/c$h;->sendMessage(Landroid/os/Message;)Z

    .line 405
    iget-object p2, p0, Lcom/tkay/expressad/reward/a/c$2;->d:Lcom/tkay/expressad/reward/a/c$i;

    if-eqz p2, :cond_1

    .line 406
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/c$2;->a:Ljava/lang/String;

    invoke-interface {p2, v0}, Lcom/tkay/expressad/reward/a/c$i;->a(Ljava/lang/String;)V

    .line 408
    :cond_1
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_2

    .line 409
    invoke-virtual {p1}, Ljava/lang/Exception;->getLocalizedMessage()Ljava/lang/String;

    :cond_2
    return-void
.end method
