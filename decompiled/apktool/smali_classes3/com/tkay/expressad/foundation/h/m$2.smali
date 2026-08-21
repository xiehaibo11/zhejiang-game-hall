.class final Lcom/tkay/expressad/foundation/h/m$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/h/m;->b()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 345
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    .line 349
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    invoke-static {}, Lcom/tkay/expressad/d/b;->b()Lcom/tkay/expressad/d/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 351
    invoke-static {}, Lcom/tkay/expressad/d/b;->a()Lcom/tkay/expressad/d/b;

    invoke-static {}, Lcom/tkay/expressad/d/b;->c()Lcom/tkay/expressad/d/a;

    move-result-object v0

    .line 353
    :cond_0
    sget-object v1, Lcom/tkay/expressad/foundation/g/c/c;->l:Lcom/tkay/expressad/foundation/g/c/c;

    invoke-static {v1}, Lcom/tkay/expressad/foundation/g/c/f;->b(Lcom/tkay/expressad/foundation/g/c/c;)Ljava/lang/String;

    move-result-object v1

    .line 354
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->b()I

    move-result v2

    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/m;->a(Ljava/lang/String;I)V

    .line 355
    invoke-virtual {v0}, Lcom/tkay/expressad/d/a;->n()I

    move-result v0

    .line 356
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v3, v0

    sub-long/2addr v1, v3

    .line 357
    invoke-static {v1, v2}, Lcom/tkay/expressad/foundation/h/m;->a(J)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 359
    sget-boolean v1, Lcom/tkay/expressad/b;->a:Z

    if-eqz v1, :cond_1

    .line 360
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method
