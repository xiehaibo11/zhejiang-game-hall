.class final Lcom/mbridge/msdk/foundation/tools/v$3;
.super Ljava/lang/Object;
.source "SameDiTool.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/foundation/tools/v;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;


# direct methods
.method constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 494
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/tools/v$3;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    const/4 v0, 0x0

    .line 499
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/v$3;->a:Landroid/content/Context;

    const-string v2, "connectivity"

    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/net/ConnectivityManager;

    if-nez v1, :cond_0

    return-void

    .line 503
    :cond_0
    sget-boolean v2, Lcom/mbridge/msdk/foundation/same/a;->h:Z

    if-eqz v2, :cond_4

    .line 505
    invoke-virtual {v1}, Landroid/net/ConnectivityManager;->getActiveNetworkInfo()Landroid/net/NetworkInfo;

    move-result-object v1

    if-nez v1, :cond_1

    .line 507
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->c(I)I

    return-void

    .line 510
    :cond_1
    invoke-virtual {v1}, Landroid/net/NetworkInfo;->getType()I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_2

    const/16 v1, 0x9

    .line 511
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->c(I)I

    return-void

    .line 514
    :cond_2
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/v$3;->a:Landroid/content/Context;

    const-string v2, "phone"

    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/telephony/TelephonyManager;

    if-nez v1, :cond_3

    .line 516
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->c(I)I

    return-void

    .line 519
    :cond_3
    invoke-virtual {v1}, Landroid/telephony/TelephonyManager;->getNetworkType()I

    move-result v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->a(I)I

    move-result v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->c(I)I
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 522
    invoke-virtual {v1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v2

    const-string v3, "SameDiTool"

    invoke-static {v3, v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    .line 523
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->c(I)I

    :cond_4
    :goto_0
    return-void
.end method
