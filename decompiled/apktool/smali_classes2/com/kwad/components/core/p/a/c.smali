.class public final Lcom/kwad/components/core/p/a/c;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/b;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/p/a/c$a;
    }
.end annotation


# instance fields
.field private PQ:I

.field private PR:Ljava/lang/String;

.field private PS:I

.field private PT:Ljava/lang/Long;

.field private PU:Ljava/lang/Long;

.field private PV:Ljava/lang/Long;

.field private PW:Ljava/lang/Long;

.field private PX:Ljava/lang/String;

.field private PY:Ljava/lang/String;

.field private PZ:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/utils/bq$a;",
            ">;"
        }
    .end annotation
.end field

.field private Qa:J

.field private Qb:Ljava/lang/String;

.field private Qc:Ljava/lang/String;

.field private Qd:J

.field private Qe:I

.field private Qf:Ljava/lang/String;

.field private Qg:Ljava/lang/String;

.field private Qh:Z

.field private Qi:I

.field private Qj:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/p/a/c$a;",
            ">;"
        }
    .end annotation
.end field

.field private Qk:Lcom/kwad/sdk/k/a/f;

.field private Ql:Lcom/kwad/sdk/k/a/d;

.field private Qm:Lcom/kwad/sdk/k/a/b;

.field private Qn:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/sdk/k/a/e;",
            ">;"
        }
    .end annotation
.end field

.field private screenBrightness:F


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/p/a/c;->PZ:Ljava/util/List;

    const/4 v0, -0x1

    iput v0, p0, Lcom/kwad/components/core/p/a/c;->Qe:I

    const/high16 v1, -0x40800000    # -1.0f

    iput v1, p0, Lcom/kwad/components/core/p/a/c;->screenBrightness:F

    iput v0, p0, Lcom/kwad/components/core/p/a/c;->Qi:I

    return-void
.end method

.method private aj(Landroid/content/Context;)V
    .locals 6

    const-wide/16 v0, 0x200

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/config/d;->R(J)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Landroid/content/IntentFilter;

    invoke-direct {v0}, Landroid/content/IntentFilter;-><init>()V

    const-string v1, "android.intent.action.ACTION_POWER_CONNECTED"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "android.intent.action.ACTION_POWER_DISCONNECTED"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const-string v1, "android.intent.action.BATTERY_CHANGED"

    invoke-virtual {v0, v1}, Landroid/content/IntentFilter;->addAction(Ljava/lang/String;)V

    const/4 v1, 0x0

    invoke-virtual {p1, v1, v0}, Landroid/content/Context;->registerReceiver(Landroid/content/BroadcastReceiver;Landroid/content/IntentFilter;)Landroid/content/Intent;

    move-result-object p1

    if-eqz p1, :cond_6

    const/4 v0, -0x1

    const-string v1, "status"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result v1

    const/4 v2, 0x0

    const/4 v3, 0x1

    const/4 v4, 0x2

    if-eq v1, v4, :cond_2

    const/4 v5, 0x5

    if-ne v1, v5, :cond_1

    goto :goto_0

    :cond_1
    move v1, v2

    goto :goto_1

    :cond_2
    :goto_0
    move v1, v3

    :goto_1
    iput-boolean v1, p0, Lcom/kwad/components/core/p/a/c;->Qh:Z

    const-string v1, "plugged"

    invoke-virtual {p1, v1, v0}, Landroid/content/Intent;->getIntExtra(Ljava/lang/String;I)I

    move-result p1

    if-ne p1, v4, :cond_3

    iput v3, p0, Lcom/kwad/components/core/p/a/c;->Qi:I

    return-void

    :cond_3
    if-ne p1, v3, :cond_4

    iput v4, p0, Lcom/kwad/components/core/p/a/c;->Qi:I

    return-void

    :cond_4
    const/4 v0, 0x4

    if-ne p1, v0, :cond_5

    const/4 p1, 0x3

    iput p1, p0, Lcom/kwad/components/core/p/a/c;->Qi:I

    return-void

    :cond_5
    if-nez p1, :cond_6

    iput v2, p0, Lcom/kwad/components/core/p/a/c;->Qi:I

    :cond_6
    return-void
.end method

.method private static getContext()Landroid/content/Context;
    .locals 1

    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v0

    return-object v0
.end method

.method public static pK()Lcom/kwad/components/core/p/a/c;
    .locals 3

    new-instance v0, Lcom/kwad/components/core/p/a/c;

    invoke-direct {v0}, Lcom/kwad/components/core/p/a/c;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JI()I

    move-result v1

    iput v1, v0, Lcom/kwad/components/core/p/a/c;->PQ:I

    invoke-static {}, Lcom/kwad/components/core/p/a/c;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/AbiUtil;->bD(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->PR:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/components/core/p/a/c;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/be;->cZ(Landroid/content/Context;)I

    move-result v1

    iput v1, v0, Lcom/kwad/components/core/p/a/c;->PS:I

    invoke-static {}, Lcom/kwad/components/core/p/a/c;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/be;->da(Landroid/content/Context;)J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->PT:Ljava/lang/Long;

    invoke-static {}, Lcom/kwad/components/core/p/a/c;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/be;->cY(Landroid/content/Context;)J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->PU:Ljava/lang/Long;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JG()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->PV:Ljava/lang/Long;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JH()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->PW:Ljava/lang/Long;

    invoke-static {}, Lcom/kwad/components/core/p/a/c;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/au;->cz(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->PX:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/components/core/p/a/c;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/au;->cA(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->PY:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/components/core/p/a/c;->getContext()Landroid/content/Context;

    move-result-object v1

    const/16 v2, 0xf

    invoke-static {v1, v2}, Lcom/kwad/sdk/utils/au;->m(Landroid/content/Context;I)Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->PZ:Ljava/util/List;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JM()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/components/core/p/a/c;->Qa:J

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JN()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/components/core/p/a/c;->Qd:J

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JO()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->Qg:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JP()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->Qf:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JQ()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->Qb:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JR()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->Qc:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/components/core/p/a/c;->getContext()Landroid/content/Context;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-static {v1}, Lcom/kwad/sdk/utils/be;->dh(Landroid/content/Context;)I

    move-result v2

    iput v2, v0, Lcom/kwad/components/core/p/a/c;->Qe:I

    invoke-static {v1}, Lcom/kwad/components/core/p/a/c$a;->ak(Landroid/content/Context;)Ljava/util/List;

    move-result-object v2

    iput-object v2, v0, Lcom/kwad/components/core/p/a/c;->Qj:Ljava/util/List;

    invoke-direct {v0, v1}, Lcom/kwad/components/core/p/a/c;->aj(Landroid/content/Context;)V

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/utils/n;->HV()Lcom/kwad/sdk/k/a/d;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->Ql:Lcom/kwad/sdk/k/a/d;

    invoke-static {}, Lcom/kwad/sdk/utils/au;->Hl()Lcom/kwad/sdk/k/a/b;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->Qm:Lcom/kwad/sdk/k/a/b;

    invoke-static {}, Lcom/kwad/sdk/utils/au;->Jm()Ljava/util/List;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->Qn:Ljava/util/List;

    invoke-static {}, Lcom/kwad/sdk/utils/au;->Hm()Lcom/kwad/sdk/k/a/f;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/components/core/p/a/c;->Qk:Lcom/kwad/sdk/k/a/f;

    return-object v0
.end method


# virtual methods
.method public final parseJson(Lorg/json/JSONObject;)V
    .locals 0

    return-void
.end method

.method public final toJson()Lorg/json/JSONObject;
    .locals 4

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iget v1, p0, Lcom/kwad/components/core/p/a/c;->PQ:I

    const-string v2, "cpuCount"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->PR:Ljava/lang/String;

    const-string v2, "cpuAbi"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget v1, p0, Lcom/kwad/components/core/p/a/c;->PS:I

    const-string v2, "batteryPercent"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->PT:Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v1

    const-string v3, "totalMemorySize"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->PU:Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v1

    const-string v3, "availableMemorySize"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->PV:Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v1

    const-string v3, "totalDiskSize"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->PW:Ljava/lang/Long;

    invoke-virtual {v1}, Ljava/lang/Long;->longValue()J

    move-result-wide v1

    const-string v3, "availableDiskSize"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->PX:Ljava/lang/String;

    const-string v2, "imsi"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->PY:Ljava/lang/String;

    const-string v2, "iccid"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->PZ:Ljava/util/List;

    const-string v2, "wifiList"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    iget-wide v1, p0, Lcom/kwad/components/core/p/a/c;->Qa:J

    const-string v3, "bootTime"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->Qb:Ljava/lang/String;

    const-string v2, "romName"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->Qc:Ljava/lang/String;

    const-string v2, "romVersion"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-wide v1, p0, Lcom/kwad/components/core/p/a/c;->Qd:J

    const-string v3, "romBuildTimestamp"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget v1, p0, Lcom/kwad/components/core/p/a/c;->Qe:I

    const-string v2, "ringerMode"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->Qj:Ljava/util/List;

    const-string v2, "audioStreamInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->Qf:Ljava/lang/String;

    const-string v2, "baseBandVersion"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->Qg:Ljava/lang/String;

    const-string v2, "fingerPrint"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    iget v1, p0, Lcom/kwad/components/core/p/a/c;->screenBrightness:F

    const-string v2, "screenBrightness"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;F)V

    iget-boolean v1, p0, Lcom/kwad/components/core/p/a/c;->Qh:Z

    const-string v2, "isCharging"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    iget v1, p0, Lcom/kwad/components/core/p/a/c;->Qi:I

    const-string v2, "chargeType"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;I)V

    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->Qk:Lcom/kwad/sdk/k/a/f;

    if-eqz v1, :cond_0

    const-string v2, "simCardInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    :cond_0
    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->Ql:Lcom/kwad/sdk/k/a/d;

    if-eqz v1, :cond_1

    const-string v2, "environmentInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    :cond_1
    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->Qm:Lcom/kwad/sdk/k/a/b;

    if-eqz v1, :cond_2

    const-string v2, "baseStationInfo"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->a(Lorg/json/JSONObject;Ljava/lang/String;Lcom/kwad/sdk/core/b;)V

    :cond_2
    iget-object v1, p0, Lcom/kwad/components/core/p/a/c;->Qn:Ljava/util/List;

    if-eqz v1, :cond_3

    const-string v2, "sensorEventInfoList"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    :cond_3
    return-object v0
.end method
