.class final Lcom/mbridge/msdk/advanced/b/a$6;
.super Lcom/mbridge/msdk/advanced/e/c;
.source "NativeAdvancedLoadManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/advanced/b/a;->a(Landroid/content/Context;Ljava/lang/String;I)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:I

.field final synthetic c:Lcom/mbridge/msdk/advanced/b/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/b/a;ILjava/lang/String;I)V
    .locals 0

    .line 364
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$6;->c:Lcom/mbridge/msdk/advanced/b/a;

    iput-object p3, p0, Lcom/mbridge/msdk/advanced/b/a$6;->a:Ljava/lang/String;

    iput p4, p0, Lcom/mbridge/msdk/advanced/b/a$6;->b:I

    invoke-direct {p0, p2}, Lcom/mbridge/msdk/advanced/e/c;-><init>(I)V

    return-void
.end method


# virtual methods
.method public final a(ILjava/lang/String;)V
    .locals 3

    .line 391
    invoke-static {}, Lcom/mbridge/msdk/advanced/b/a;->c()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p2}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 392
    invoke-static {}, Lcom/mbridge/msdk/advanced/b/a;->c()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onLoadCompaginFailed load failed errorCode:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " msg:"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 393
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$6;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 394
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$6;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object p1

    new-instance v0, Lcom/mbridge/msdk/advanced/b/a$6$2;

    invoke-direct {v0, p0, p2}, Lcom/mbridge/msdk/advanced/b/a$6$2;-><init>(Lcom/mbridge/msdk/advanced/b/a$6;Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    .line 401
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$6;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/a;->f(Lcom/mbridge/msdk/advanced/b/a;)V

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignUnit;I)V
    .locals 3

    .line 370
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/advanced/b/a;->c()Ljava/lang/String;

    move-result-object v0

    const-string v1, "onLoadCompaginSuccess \u6570\u636e\u521a\u8bf7\u6c42\u56de\u6765"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 372
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$6;->c:Lcom/mbridge/msdk/advanced/b/a;

    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/a$6;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {v1}, Lcom/mbridge/msdk/advanced/b/a;->d(Lcom/mbridge/msdk/advanced/b/a;)Ljava/lang/String;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/advanced/b/a$6;->a:Ljava/lang/String;

    invoke-static {v0, p1, p2, v1, v2}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;Lcom/mbridge/msdk/foundation/entity/CampaignUnit;ILjava/lang/String;Ljava/lang/String;)V

    .line 373
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/a$6;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignUnit;->getRequestId()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/advanced/b/a;->a(Lcom/mbridge/msdk/advanced/b/a;Ljava/lang/String;)Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 375
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 376
    invoke-static {}, Lcom/mbridge/msdk/advanced/b/a;->c()Ljava/lang/String;

    move-result-object p1

    const-string v0, "onLoadCompaginSuccess \u6570\u636e\u521a\u8bf7\u6c42\u5931\u8d25"

    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 377
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$6;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 378
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$6;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/a;->e(Lcom/mbridge/msdk/advanced/b/a;)Landroid/os/Handler;

    move-result-object p1

    new-instance v0, Lcom/mbridge/msdk/advanced/b/a$6$1;

    invoke-direct {v0, p0, p2}, Lcom/mbridge/msdk/advanced/b/a$6$1;-><init>(Lcom/mbridge/msdk/advanced/b/a$6;I)V

    invoke-virtual {p1, v0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    .line 385
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/a$6;->c:Lcom/mbridge/msdk/advanced/b/a;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/a;->f(Lcom/mbridge/msdk/advanced/b/a;)V

    :goto_0
    return-void
.end method
