.class public final Lcom/kwad/sdk/utils/bq;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/utils/bq$a;
    }
.end annotation


# static fields
.field private static aKy:Z

.field private static final aKz:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/utils/bq$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/kwad/sdk/utils/bq;->aKz:Ljava/util/List;

    return-void
.end method

.method public static dm(Landroid/content/Context;)Z
    .locals 6

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    const/4 v1, 0x1

    const-string v2, "android.permission.ACCESS_FINE_LOCATION"

    const/4 v3, 0x0

    const/16 v4, 0x1d

    const/4 v5, -0x1

    if-lt v0, v4, :cond_1

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    if-lt v0, v4, :cond_1

    invoke-static {p0, v2}, Landroid/support/v4/content/ContextCompat;->checkSelfPermission(Landroid/content/Context;Ljava/lang/String;)I

    move-result p0

    if-ne p0, v5, :cond_0

    return v1

    :cond_0
    return v3

    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x17

    if-lt v0, v4, :cond_2

    invoke-static {p0, v2}, Landroid/support/v4/content/ContextCompat;->checkSelfPermission(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    if-ne v0, v5, :cond_2

    const-string v0, "android.permission.ACCESS_COARSE_LOCATION"

    invoke-static {p0, v0}, Landroid/support/v4/content/ContextCompat;->checkSelfPermission(Landroid/content/Context;Ljava/lang/String;)I

    move-result p0

    if-ne p0, v5, :cond_2

    return v1

    :cond_2
    return v3
.end method

.method public static m(Landroid/content/Context;I)Ljava/util/List;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "I)",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/utils/bq$a;",
            ">;"
        }
    .end annotation

    const-string v0, ""

    const-string v1, "\""

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jg()Z

    move-result v2

    if-eqz v2, :cond_0

    new-instance p0, Ljava/util/ArrayList;

    invoke-direct {p0}, Ljava/util/ArrayList;-><init>()V

    return-object p0

    :cond_0
    sget-boolean v2, Lcom/kwad/sdk/utils/bq;->aKy:Z

    if-nez v2, :cond_8

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v2

    invoke-virtual {v2}, Lcom/kwad/sdk/api/SdkConfig;->canReadNearbyWifiList()Z

    move-result v2

    if-eqz v2, :cond_8

    sget-object v2, Lcom/kwad/sdk/utils/bq;->aKz:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->isEmpty()Z

    move-result v2

    if-eqz v2, :cond_8

    if-nez p0, :cond_1

    goto/16 :goto_1

    :cond_1
    const-class v2, Lcom/kwad/sdk/service/a/f;

    invoke-static {v2}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/service/a/f;

    const-wide/16 v3, 0x20

    invoke-interface {v2, v3, v4}, Lcom/kwad/sdk/service/a/f;->R(J)Z

    move-result v2

    if-eqz v2, :cond_2

    sget-object p0, Lcom/kwad/sdk/utils/bq;->aKz:Ljava/util/List;

    return-object p0

    :cond_2
    :try_start_0
    invoke-static {p0}, Lcom/kwad/sdk/utils/bq;->dm(Landroid/content/Context;)Z

    move-result v2

    if-eqz v2, :cond_3

    sget-object p0, Lcom/kwad/sdk/utils/bq;->aKz:Ljava/util/List;

    return-object p0

    :cond_3
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    const-string v2, "wifi"

    invoke-virtual {p0, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/net/wifi/WifiManager;

    if-nez p0, :cond_4

    sget-object p0, Lcom/kwad/sdk/utils/bq;->aKz:Ljava/util/List;

    return-object p0

    :cond_4
    invoke-virtual {p0}, Landroid/net/wifi/WifiManager;->getConnectionInfo()Landroid/net/wifi/WifiInfo;

    move-result-object v2

    invoke-virtual {p0}, Landroid/net/wifi/WifiManager;->getScanResults()Ljava/util/List;

    move-result-object p0

    if-eqz p0, :cond_7

    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_5
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_7

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/net/wifi/ScanResult;

    new-instance v4, Lcom/kwad/sdk/utils/bq$a;

    invoke-direct {v4}, Lcom/kwad/sdk/utils/bq$a;-><init>()V

    iget-object v5, v3, Landroid/net/wifi/ScanResult;->SSID:Ljava/lang/String;

    iput-object v5, v4, Lcom/kwad/sdk/utils/bq$a;->aKA:Ljava/lang/String;

    iget-object v5, v3, Landroid/net/wifi/ScanResult;->BSSID:Ljava/lang/String;

    iput-object v5, v4, Lcom/kwad/sdk/utils/bq$a;->aKB:Ljava/lang/String;

    iget v5, v3, Landroid/net/wifi/ScanResult;->level:I

    iput v5, v4, Lcom/kwad/sdk/utils/bq$a;->level:I

    invoke-virtual {v2}, Landroid/net/wifi/WifiInfo;->getBSSID()Ljava/lang/String;

    move-result-object v5

    if-eqz v5, :cond_6

    iget-object v5, v3, Landroid/net/wifi/ScanResult;->BSSID:Ljava/lang/String;

    if-eqz v5, :cond_6

    invoke-virtual {v2}, Landroid/net/wifi/WifiInfo;->getBSSID()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v5

    iget-object v6, v3, Landroid/net/wifi/ScanResult;->BSSID:Ljava/lang/String;

    invoke-virtual {v6, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v6

    invoke-static {v5, v6}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_6

    invoke-virtual {v2}, Landroid/net/wifi/WifiInfo;->getSSID()Ljava/lang/String;

    move-result-object v5

    if-eqz v5, :cond_6

    iget-object v5, v3, Landroid/net/wifi/ScanResult;->SSID:Ljava/lang/String;

    if-eqz v5, :cond_6

    invoke-virtual {v2}, Landroid/net/wifi/WifiInfo;->getSSID()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v5

    iget-object v3, v3, Landroid/net/wifi/ScanResult;->SSID:Ljava/lang/String;

    invoke-virtual {v3, v1, v0}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v5, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_6

    sget-object v3, Lcom/kwad/sdk/utils/bq;->aKz:Ljava/util/List;

    const/4 v5, 0x0

    invoke-interface {v3, v5, v4}, Ljava/util/List;->add(ILjava/lang/Object;)V

    goto :goto_0

    :cond_6
    sget-object v3, Lcom/kwad/sdk/utils/bq;->aKz:Ljava/util/List;

    invoke-interface {v3, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :goto_0
    sget-object v3, Lcom/kwad/sdk/utils/bq;->aKz:Ljava/util/List;

    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v3

    if-lt v3, p1, :cond_5

    sget-object p0, Lcom/kwad/sdk/utils/bq;->aKz:Ljava/util/List;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    const/4 p1, 0x1

    sput-boolean p1, Lcom/kwad/sdk/utils/bq;->aKy:Z

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    :cond_7
    sget-object p0, Lcom/kwad/sdk/utils/bq;->aKz:Ljava/util/List;

    return-object p0

    :cond_8
    :goto_1
    sget-object p0, Lcom/kwad/sdk/utils/bq;->aKz:Ljava/util/List;

    return-object p0
.end method
