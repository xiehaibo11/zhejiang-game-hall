.class final Lcom/tkay/expressad/foundation/h/k$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/h/k;->l(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 297
    iput-object p1, p0, Lcom/tkay/expressad/foundation/h/k$2;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    const/4 v0, 0x0

    .line 305
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    const-string v2, "network_type"

    invoke-virtual {v1, v2}, Lcom/tkay/core/common/b/m;->c(Ljava/lang/String;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    return-void

    .line 310
    :cond_0
    :try_start_1
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;)Lcom/tkay/core/common/b/p;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/p;->b()Z

    move-result v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-nez v1, :cond_1

    return-void

    .line 317
    :cond_1
    :try_start_2
    iget-object v1, p0, Lcom/tkay/expressad/foundation/h/k$2;->a:Landroid/content/Context;

    if-nez v1, :cond_2

    return-void

    .line 320
    :cond_2
    iget-object v1, p0, Lcom/tkay/expressad/foundation/h/k$2;->a:Landroid/content/Context;

    const-string v2, "connectivity"

    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/net/ConnectivityManager;

    if-nez v1, :cond_3

    return-void

    .line 326
    :cond_3
    invoke-virtual {v1}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v1

    if-nez v1, :cond_4

    .line 328
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/k;->b(I)I

    return-void

    .line 331
    :cond_4
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getType()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_5

    const/16 v1, 0x9

    .line 332
    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/k;->b(I)I

    return-void

    .line 335
    :cond_5
    iget-object v1, p0, Lcom/tkay/expressad/foundation/h/k$2;->a:Landroid/content/Context;

    const-string v2, "phone"

    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/telephony/TelephonyManager;

    if-nez v1, :cond_6

    .line 337
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/k;->b(I)I

    return-void

    .line 340
    :cond_6
    invoke-virtual {v1}, Landroid/telephony/TelephonyManager;->getNetworkType()I

    move-result v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/k;->a(I)I

    move-result v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/k;->b(I)I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catch_0
    return-void

    :catchall_0
    move-exception v1

    .line 343
    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    .line 344
    invoke-static {v0}, Lcom/tkay/expressad/foundation/h/k;->b(I)I

    return-void
.end method
