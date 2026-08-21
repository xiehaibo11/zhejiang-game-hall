.class final Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;
.super Ljava/lang/Object;
.source "SensitiveDataUtil.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/optimize/SensitiveDataUtil;->getFormNewThread(Landroid/content/Context;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Landroid/content/Context;


# direct methods
.method constructor <init>(Ljava/lang/String;Landroid/content/Context;)V
    .locals 0

    .line 348
    iput-object p1, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->b:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 351
    new-instance v0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1$1;-><init>(Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;)V

    .line 362
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->a:Ljava/lang/String;

    const-string v2, "ASUS"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 363
    new-instance v1, Lcom/mbridge/msdk/optimize/a/a/a;

    iget-object v2, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->b:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/optimize/a/a/a;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/optimize/a/a/a;->a(Lcom/mbridge/msdk/optimize/a/b;)V

    goto/16 :goto_3

    .line 364
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->a:Ljava/lang/String;

    const-string v2, "OPPO"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 365
    new-instance v1, Lcom/mbridge/msdk/optimize/a/a/f;

    iget-object v2, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->b:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/optimize/a/a/f;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/optimize/a/a/f;->a(Lcom/mbridge/msdk/optimize/a/b;)Ljava/lang/String;

    goto/16 :goto_3

    .line 366
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->a:Ljava/lang/String;

    const-string v2, "ONEPLUS"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 367
    new-instance v1, Lcom/mbridge/msdk/optimize/a/a/e;

    iget-object v2, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->b:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/optimize/a/a/e;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/optimize/a/a/e;->a(Lcom/mbridge/msdk/optimize/a/b;)Ljava/lang/String;

    goto/16 :goto_3

    .line 368
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->a:Ljava/lang/String;

    const-string v2, "ZTE"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_9

    iget-object v1, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->a:Ljava/lang/String;

    const-string v2, "FERRMEOS"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_9

    iget-object v1, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->a:Ljava/lang/String;

    const-string v2, "SSUI"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    goto :goto_2

    .line 370
    :cond_3
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->a:Ljava/lang/String;

    const-string v2, "HUAWEI"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_8

    iget-object v1, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->a:Ljava/lang/String;

    const-string v2, "HONOR"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_4

    goto :goto_1

    .line 372
    :cond_4
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->a:Ljava/lang/String;

    const-string v2, "SAMSUNG"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_5

    .line 373
    new-instance v1, Lcom/mbridge/msdk/optimize/a/a/g;

    iget-object v2, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->b:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/optimize/a/a/g;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/optimize/a/a/g;->a(Lcom/mbridge/msdk/optimize/a/b;)V

    goto :goto_3

    .line 374
    :cond_5
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->a:Ljava/lang/String;

    const-string v2, "LENOVO"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_7

    iget-object v1, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->a:Ljava/lang/String;

    const-string v2, "MOTOLORA"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_6

    goto :goto_0

    .line 376
    :cond_6
    iget-object v1, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->a:Ljava/lang/String;

    const-string v2, "MEIZU"

    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_a

    .line 377
    new-instance v1, Lcom/mbridge/msdk/optimize/a/a/c;

    iget-object v2, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->b:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/optimize/a/a/c;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/optimize/a/a/c;->a(Lcom/mbridge/msdk/optimize/a/b;)V

    goto :goto_3

    .line 375
    :cond_7
    :goto_0
    new-instance v1, Lcom/mbridge/msdk/optimize/a/a/b;

    iget-object v2, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->b:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/optimize/a/a/b;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/optimize/a/a/b;->a(Lcom/mbridge/msdk/optimize/a/b;)V

    goto :goto_3

    .line 371
    :cond_8
    :goto_1
    new-instance v1, Lcom/mbridge/msdk/optimize/a/a;

    iget-object v2, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->b:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/optimize/a/a;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/optimize/a/a;->a(Lcom/mbridge/msdk/optimize/a/b;)V

    goto :goto_3

    .line 369
    :cond_9
    :goto_2
    new-instance v1, Lcom/mbridge/msdk/optimize/a/a/i;

    iget-object v2, p0, Lcom/mbridge/msdk/optimize/SensitiveDataUtil$1;->b:Landroid/content/Context;

    invoke-direct {v1, v2}, Lcom/mbridge/msdk/optimize/a/a/i;-><init>(Landroid/content/Context;)V

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/optimize/a/a/i;->a(Lcom/mbridge/msdk/optimize/a/b;)V

    :cond_a
    :goto_3
    return-void
.end method
