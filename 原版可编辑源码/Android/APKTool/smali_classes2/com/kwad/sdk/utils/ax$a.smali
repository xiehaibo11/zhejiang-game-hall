.class final Lcom/kwad/sdk/utils/ax$a;
.super Lcom/kwad/sdk/utils/j;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/utils/ax;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/kwad/sdk/utils/j<",
        "Lcom/kwad/sdk/k/a/b;",
        ">;"
    }
.end annotation


# static fields
.field private static aJk:Lcom/kwad/sdk/k/a/b;


# direct methods
.method public constructor <init>(Z)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/utils/j;-><init>(Z)V

    return-void
.end method

.method private static a(Landroid/telephony/CellInfo;)I
    .locals 3

    const/4 v0, -0x1

    if-nez p0, :cond_0

    return v0

    :cond_0
    :try_start_0
    const-string v1, "getCellSignalStrength"

    const/4 v2, 0x0

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {p0, v1, v2}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Landroid/telephony/CellSignalStrength;

    invoke-virtual {p0}, Landroid/telephony/CellSignalStrength;->getLevel()I

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    return v0
.end method

.method private cP(Landroid/content/Context;)Lcom/kwad/sdk/k/a/b;
    .locals 6

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IW()Z

    move-result v0

    if-nez v0, :cond_b

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    const-wide/16 v1, 0x40

    invoke-interface {v0, v1, v2}, Lcom/kwad/sdk/service/a/f;->R(J)Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_1

    :cond_0
    sget-object v0, Lcom/kwad/sdk/utils/ax$a;->aJk:Lcom/kwad/sdk/k/a/b;

    if-eqz v0, :cond_1

    return-object v0

    :cond_1
    const/4 v0, 0x0

    if-nez p1, :cond_2

    return-object v0

    :cond_2
    invoke-static {}, Lcom/kwad/sdk/utils/at;->IW()Z

    move-result v1

    if-eqz v1, :cond_3

    return-object v0

    :cond_3
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x17

    const-string v3, "android.permission.ACCESS_FINE_LOCATION"

    const/4 v4, -0x1

    if-lt v1, v2, :cond_4

    invoke-static {p1, v3}, Landroid/support/v4/content/ContextCompat;->checkSelfPermission(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    if-ne v1, v4, :cond_4

    return-object v0

    :cond_4
    invoke-static {p1, v3}, Lcom/kwad/sdk/utils/be;->checkSelfPermission(Landroid/content/Context;Ljava/lang/String;)I

    move-result v1

    if-nez v1, :cond_a

    const-string v1, "phone"

    invoke-virtual {p1, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/telephony/TelephonyManager;

    invoke-virtual {p1}, Landroid/telephony/TelephonyManager;->getCellLocation()Landroid/telephony/CellLocation;

    move-result-object v1

    instance-of v2, v1, Landroid/telephony/cdma/CdmaCellLocation;

    if-eqz v2, :cond_5

    check-cast v1, Landroid/telephony/cdma/CdmaCellLocation;

    invoke-virtual {v1}, Landroid/telephony/cdma/CdmaCellLocation;->getBaseStationId()I

    move-result v2

    invoke-virtual {v1}, Landroid/telephony/cdma/CdmaCellLocation;->getNetworkId()I

    move-result v1

    goto :goto_0

    :cond_5
    instance-of v2, v1, Landroid/telephony/gsm/GsmCellLocation;

    if-eqz v2, :cond_6

    check-cast v1, Landroid/telephony/gsm/GsmCellLocation;

    invoke-virtual {v1}, Landroid/telephony/gsm/GsmCellLocation;->getCid()I

    move-result v2

    invoke-virtual {v1}, Landroid/telephony/gsm/GsmCellLocation;->getLac()I

    move-result v1

    goto :goto_0

    :cond_6
    move v1, v4

    move v2, v1

    :goto_0
    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0x11

    if-lt v3, v5, :cond_9

    invoke-virtual {p1}, Landroid/telephony/TelephonyManager;->getAllCellInfo()Ljava/util/List;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_7
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_8

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/telephony/CellInfo;

    if-eqz v3, :cond_7

    invoke-virtual {v3}, Landroid/telephony/CellInfo;->isRegistered()Z

    move-result v5

    if-eqz v5, :cond_7

    move-object v0, v3

    :cond_8
    if-eqz v0, :cond_9

    invoke-static {v0}, Lcom/kwad/sdk/utils/ax$a;->a(Landroid/telephony/CellInfo;)I

    move-result v4

    :cond_9
    new-instance p1, Lcom/kwad/sdk/k/a/b;

    invoke-direct {p1, v2, v1, v4}, Lcom/kwad/sdk/k/a/b;-><init>(III)V

    sput-object p1, Lcom/kwad/sdk/utils/ax$a;->aJk:Lcom/kwad/sdk/k/a/b;

    :cond_a
    sget-object p1, Lcom/kwad/sdk/utils/ax$a;->aJk:Lcom/kwad/sdk/k/a/b;

    return-object p1

    :cond_b
    :goto_1
    sget-object p1, Lcom/kwad/sdk/utils/ax$a;->aJk:Lcom/kwad/sdk/k/a/b;

    return-object p1
.end method


# virtual methods
.method public final synthetic bP(Landroid/content/Context;)Ljava/lang/Object;
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/utils/ax$a;->cP(Landroid/content/Context;)Lcom/kwad/sdk/k/a/b;

    move-result-object p1

    return-object p1
.end method
