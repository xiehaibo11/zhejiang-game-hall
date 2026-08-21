.class public final Lcom/kwad/sdk/m;
.super Ljava/lang/Object;


# static fields
.field private static ahp:Z

.field private static ahq:J


# direct methods
.method public static a(Ljava/lang/Throwable;Ljava/lang/String;)V
    .locals 1

    sget-object v0, Lcom/kwai/adclient/kscommerciallogger/model/a;->aNm:Lcom/kwai/adclient/kscommerciallogger/model/d;

    invoke-static {v0, p1}, Lcom/kwad/sdk/l;->a(Lcom/kwai/adclient/kscommerciallogger/model/d;Ljava/lang/String;)V

    invoke-static {p0}, Lcom/kwad/components/core/d/a;->b(Ljava/lang/Throwable;)V

    const-string p0, "SDKRevertHelper"

    const-string p1, "onInitError revert"

    invoke-static {p0, p1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static k(Ljava/lang/Throwable;)V
    .locals 1

    invoke-static {p0}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0}, Lcom/kwad/sdk/m;->a(Ljava/lang/Throwable;Ljava/lang/String;)V

    return-void
.end method

.method public static xT()V
    .locals 2

    sget-boolean v0, Lcom/kwad/sdk/m;->ahp:Z

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/sdk/m;->ahp:Z

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    sput-wide v0, Lcom/kwad/sdk/m;->ahq:J

    return-void
.end method

.method public static xU()V
    .locals 4

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    sget-wide v2, Lcom/kwad/sdk/m;->ahq:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x2710

    cmp-long v0, v0, v2

    if-gez v0, :cond_0

    const-string v0, "SDKRevertHelper"

    const-string v1, "onException revert"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/m;->xV()V

    :cond_0
    return-void
.end method

.method private static xV()V
    .locals 4

    invoke-static {}, Lcom/kwad/sdk/KsAdSDKImpl;->get()Lcom/kwad/sdk/KsAdSDKImpl;

    move-result-object v0

    invoke-virtual {v0}, Lcom/kwad/sdk/KsAdSDKImpl;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "kssdk_api_pref"

    const-string v2, "curversion"

    const-string v3, ""

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/sdk/utils/y;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
