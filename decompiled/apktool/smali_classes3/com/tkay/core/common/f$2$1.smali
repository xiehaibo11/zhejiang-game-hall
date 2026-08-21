.class final Lcom/tkay/core/common/f$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/c/e$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/f$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/d;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Ljava/lang/String;

.field final synthetic e:Lcom/tkay/core/common/f$2;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/f$2;Lcom/tkay/core/common/f/d;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 430
    iput-object p1, p0, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iput-object p2, p0, Lcom/tkay/core/common/f$2$1;->a:Lcom/tkay/core/common/f/d;

    iput-object p3, p0, Lcom/tkay/core/common/f$2$1;->b:Landroid/content/Context;

    iput-object p4, p0, Lcom/tkay/core/common/f$2$1;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/tkay/core/common/f$2$1;->d:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/core/api/AdError;)V
    .locals 7

    .line 467
    sget-object v0, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v1, v1, Lcom/tkay/core/common/f$2;->b:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v2, v2, Lcom/tkay/core/common/f$2;->f:Ljava/lang/String;

    invoke-static {v2}, Lcom/tkay/core/common/l/g;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->printStackTrace()Ljava/lang/String;

    move-result-object v3

    .line 1095
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v4

    if-eqz v4, :cond_0

    .line 1097
    :try_start_0
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4}, Lorg/json/JSONObject;-><init>()V

    const-string v5, "action"

    .line 1098
    sget-object v6, Lcom/tkay/core/common/b/f$i;->C:Ljava/lang/String;

    invoke-virtual {v4, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "result"

    .line 1099
    invoke-virtual {v4, v5, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "placementId"

    .line 1100
    invoke-virtual {v4, v5, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "adtype"

    .line 1101
    invoke-virtual {v4, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "errorMsg"

    .line 1102
    invoke-virtual {v4, v1, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "tkay_network"

    .line 1103
    invoke-virtual {v4}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    sget-object v3, Lcom/tkay/core/common/b/f$i;->m:Ljava/lang/String;

    invoke-static {v3, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    invoke-static {v1, v2, v0}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 469
    :catchall_0
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getPlatformCode()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/core/api/AdError;->getPlatformMSG()Ljava/lang/String;

    move-result-object p1

    const-string v1, "3001"

    invoke-static {v1, v0, p1}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p1

    .line 471
    iget-object v0, p0, Lcom/tkay/core/common/f$2$1;->a:Lcom/tkay/core/common/f/d;

    const/4 v1, 0x5

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/f/d;->z(I)V

    .line 473
    iget-object v0, p0, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v0, v0, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    iget-object v1, p0, Lcom/tkay/core/common/f$2$1;->a:Lcom/tkay/core/common/f/d;

    invoke-static {v0, v1, p1}, Lcom/tkay/core/common/f;->a(Lcom/tkay/core/common/f;Lcom/tkay/core/common/f/d;Lcom/tkay/core/api/AdError;)V

    return-void
.end method

.method public final a(Lcom/tkay/core/c/d;)V
    .locals 2

    .line 434
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/f$2$1$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/core/common/f$2$1$1;-><init>(Lcom/tkay/core/common/f$2$1;Lcom/tkay/core/c/d;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final b(Lcom/tkay/core/c/d;)V
    .locals 2

    .line 478
    iget-object v0, p0, Lcom/tkay/core/common/f$2$1;->d:Ljava/lang/String;

    invoke-virtual {p1}, Lcom/tkay/core/c/d;->V()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 479
    iget-object v0, p0, Lcom/tkay/core/common/f$2$1;->e:Lcom/tkay/core/common/f$2;

    iget-object v0, v0, Lcom/tkay/core/common/f$2;->h:Lcom/tkay/core/common/f;

    const/4 v1, 0x0

    iput v1, v0, Lcom/tkay/core/common/f;->e:I

    .line 482
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/core/common/f$2$1$2;

    invoke-direct {v1, p0, p1}, Lcom/tkay/core/common/f$2$1$2;-><init>(Lcom/tkay/core/common/f$2$1;Lcom/tkay/core/c/d;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
