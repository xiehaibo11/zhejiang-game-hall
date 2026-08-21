.class public Lcom/kwad/sdk/core/request/model/b;
.super Lcom/kwad/sdk/core/response/a/a;


# static fields
.field private static atK:Z

.field private static atL:Lorg/json/JSONArray;


# instance fields
.field public Qb:Ljava/lang/String;

.field public Uo:Ljava/lang/String;

.field public Up:I

.field public Ur:I

.field public Us:Ljava/lang/String;

.field public Uu:I

.field public Uv:I

.field public amD:Ljava/lang/String;

.field public amE:Ljava/lang/String;

.field public atM:Ljava/lang/String;

.field public atN:Ljava/lang/String;

.field public atO:Ljava/lang/String;

.field public atP:Ljava/lang/String;

.field public atQ:Ljava/lang/String;

.field public atR:Ljava/lang/String;

.field public atS:I

.field public atT:I

.field public atU:Ljava/lang/String;

.field public atV:Ljava/lang/String;

.field public atW:Ljava/lang/String;

.field public atX:I

.field public atY:Ljava/lang/String;

.field public atZ:Ljava/lang/String;

.field public aua:Ljava/lang/String;

.field public aub:Lorg/json/JSONArray;

.field public auc:Ljava/lang/String;

.field public aud:I

.field public aue:Ljava/lang/String;

.field public auf:Ljava/lang/String;

.field public aug:Ljava/lang/String;

.field public auh:J

.field public aui:Ljava/lang/String;

.field public auj:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/sdk/core/response/a/a;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/kwad/sdk/core/request/model/b;->aud:I

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/sdk/core/request/model/b;->auh:J

    return-void
.end method

.method public static Ct()Lcom/kwad/sdk/core/request/model/b;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/request/model/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/request/model/b;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/utils/au;->getOaid()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/core/request/model/b;->amE:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/au;->getDeviceId()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/core/request/model/b;->atV:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JJ()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/core/request/model/b;->atY:Ljava/lang/String;

    const/4 v1, 0x1

    iput v1, v0, Lcom/kwad/sdk/core/request/model/b;->Up:I

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JV()I

    move-result v1

    iput v1, v0, Lcom/kwad/sdk/core/request/model/b;->Ur:I

    invoke-static {}, Lcom/kwad/sdk/utils/be;->getOsVersion()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/core/request/model/b;->atR:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/y;->Iz()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/core/request/model/b;->aua:Ljava/lang/String;

    const-class v1, Lcom/kwad/sdk/components/f;

    invoke-static {v1}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/components/f;

    if-eqz v1, :cond_0

    invoke-interface {v1}, Lcom/kwad/sdk/components/f;->nQ()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/core/request/model/b;->atZ:Ljava/lang/String;

    :cond_0
    const-class v1, Lcom/kwad/sdk/service/a/e;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/e;

    if-eqz v1, :cond_1

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/au;->cu(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/core/request/model/b;->amD:Ljava/lang/String;

    :cond_1
    return-object v0
.end method

.method private static declared-synchronized bf(Landroid/content/Context;)Lorg/json/JSONArray;
    .locals 2

    const-class v0, Lcom/kwad/sdk/core/request/model/b;

    monitor-enter v0

    :try_start_0
    sget-boolean v1, Lcom/kwad/sdk/core/request/model/b;->atK:Z

    if-nez v1, :cond_0

    const/4 v1, 0x1

    sput-boolean v1, Lcom/kwad/sdk/core/request/model/b;->atK:Z

    new-instance v1, Lcom/kwad/sdk/core/request/model/b$1;

    invoke-direct {v1}, Lcom/kwad/sdk/core/request/model/b$1;-><init>()V

    invoke-static {p0, v1}, Lcom/kwad/sdk/utils/InstalledAppInfoManager;->a(Landroid/content/Context;Lcom/kwad/sdk/g/a;)V

    :cond_0
    sget-object p0, Lcom/kwad/sdk/core/request/model/b;->atL:Lorg/json/JSONArray;

    const/4 v1, 0x0

    if-eqz p0, :cond_1

    sput-object v1, Lcom/kwad/sdk/core/request/model/b;->atL:Lorg/json/JSONArray;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-object p0

    :cond_1
    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method static synthetic f(Lorg/json/JSONArray;)Lorg/json/JSONArray;
    .locals 0

    sput-object p0, Lcom/kwad/sdk/core/request/model/b;->atL:Lorg/json/JSONArray;

    return-object p0
.end method

.method public static g(ZI)Lcom/kwad/sdk/core/request/model/b;
    .locals 5

    new-instance v0, Lcom/kwad/sdk/core/request/model/b;

    invoke-direct {v0}, Lcom/kwad/sdk/core/request/model/b;-><init>()V

    const-class v1, Lcom/kwad/sdk/service/a/e;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/kwad/sdk/utils/au;->cu(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/sdk/core/request/model/b;->amD:Ljava/lang/String;

    invoke-static {v2}, Lcom/kwad/sdk/utils/au;->cx(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/sdk/core/request/model/b;->atM:Ljava/lang/String;

    invoke-static {v2}, Lcom/kwad/sdk/utils/au;->cy(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/sdk/core/request/model/b;->atN:Ljava/lang/String;

    invoke-static {v2}, Lcom/kwad/sdk/utils/be;->dc(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/sdk/core/request/model/b;->atO:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/au;->getOaid()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/sdk/core/request/model/b;->amE:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JJ()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/sdk/core/request/model/b;->atY:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JL()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/sdk/core/request/model/b;->Uo:Ljava/lang/String;

    const/4 v3, 0x1

    iput v3, v0, Lcom/kwad/sdk/core/request/model/b;->Up:I

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JV()I

    move-result v3

    iput v3, v0, Lcom/kwad/sdk/core/request/model/b;->Ur:I

    invoke-static {}, Lcom/kwad/sdk/utils/be;->getOsVersion()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/sdk/core/request/model/b;->atR:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/k;->getLanguage()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/sdk/core/request/model/b;->Us:Ljava/lang/String;

    invoke-static {v2}, Lcom/kwad/sdk/utils/k;->getScreenHeight(Landroid/content/Context;)I

    move-result v3

    iput v3, v0, Lcom/kwad/sdk/core/request/model/b;->Uv:I

    invoke-static {v2}, Lcom/kwad/sdk/utils/k;->getScreenWidth(Landroid/content/Context;)I

    move-result v3

    iput v3, v0, Lcom/kwad/sdk/core/request/model/b;->Uu:I

    invoke-static {v2}, Lcom/kwad/sdk/utils/k;->bS(Landroid/content/Context;)I

    move-result v3

    iput v3, v0, Lcom/kwad/sdk/core/request/model/b;->atS:I

    invoke-static {v2}, Lcom/kwad/sdk/utils/k;->bT(Landroid/content/Context;)I

    move-result v3

    iput v3, v0, Lcom/kwad/sdk/core/request/model/b;->atT:I

    invoke-static {v2}, Lcom/kwad/sdk/utils/au;->cv(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/kwad/sdk/core/request/model/b;->atU:Ljava/lang/String;

    if-eqz p0, :cond_0

    invoke-static {v2}, Lcom/kwad/sdk/core/request/model/b;->bf(Landroid/content/Context;)Lorg/json/JSONArray;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/request/model/b;->aub:Lorg/json/JSONArray;

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/utils/au;->getDeviceId()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/request/model/b;->atV:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JK()J

    move-result-wide v3

    iput-wide v3, v0, Lcom/kwad/sdk/core/request/model/b;->auh:J

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JS()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/request/model/b;->atW:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/y;->Iz()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/request/model/b;->aua:Ljava/lang/String;

    const-class p0, Lcom/kwad/sdk/components/f;

    invoke-static {p0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/components/f;

    if-eqz p0, :cond_1

    invoke-interface {p0}, Lcom/kwad/sdk/components/f;->nQ()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/request/model/b;->atZ:Ljava/lang/String;

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/utils/be;->JT()I

    move-result p0

    iput p0, v0, Lcom/kwad/sdk/core/request/model/b;->atX:I

    new-instance p0, Ljava/lang/StringBuilder;

    const-string v3, "DeviceInfo i="

    invoke-direct {p0, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getAppId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ",n="

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getAppName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ",external:"

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getIsExternal()Z

    move-result v3

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, ",v1:"

    invoke-virtual {p0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v1}, Lcom/kwad/sdk/service/a/e;->getApiVersion()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",v2:3.3.42"

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",d:"

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v0, Lcom/kwad/sdk/core/request/model/b;->atV:Ljava/lang/String;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",dh:"

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v0, Lcom/kwad/sdk/core/request/model/b;->atV:Ljava/lang/String;

    if-eqz v1, :cond_2

    invoke-virtual {v1}, Ljava/lang/String;->hashCode()I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    goto :goto_0

    :cond_2
    const-string v1, ""

    :goto_0
    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, ",o:"

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, v0, Lcom/kwad/sdk/core/request/model/b;->amE:Ljava/lang/String;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",b:471"

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, ",p:"

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v2}, Lcom/kwad/sdk/utils/ap;->isInMainProcess(Landroid/content/Context;)Z

    move-result v1

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v1, ",dy:"

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/kwad/framework/a/a;->aae:Ljava/lang/Boolean;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->cW(Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JU()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/request/model/b;->auc:Ljava/lang/String;

    iput p1, v0, Lcom/kwad/sdk/core/request/model/b;->aud:I

    invoke-static {}, Lcom/kwad/sdk/core/request/model/b;->xB()Z

    move-result p0

    if-eqz p0, :cond_3

    invoke-static {}, Lcom/kwad/sdk/b/b;->yB()Lcom/kwad/sdk/b/b;

    move-result-object p0

    const-string p1, "com.smile.gifmaker"

    invoke-virtual {p0, v2, p1}, Lcom/kwad/sdk/b/b;->getVersion(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/request/model/b;->aue:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/b/b;->yB()Lcom/kwad/sdk/b/b;

    move-result-object p0

    const-string p1, "com.kuaishou.nebula"

    invoke-virtual {p0, v2, p1}, Lcom/kwad/sdk/b/b;->getVersion(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/request/model/b;->auf:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/b/b;->yB()Lcom/kwad/sdk/b/b;

    move-result-object p0

    const-string p1, "com.tencent.mm"

    invoke-virtual {p0, v2, p1}, Lcom/kwad/sdk/b/b;->getVersion(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/request/model/b;->aug:Ljava/lang/String;

    :cond_3
    invoke-static {}, Lcom/kwad/sdk/utils/be;->JQ()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/request/model/b;->Qb:Ljava/lang/String;

    invoke-static {v2}, Lcom/kwad/sdk/utils/ae;->ch(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/request/model/b;->atQ:Ljava/lang/String;

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JZ()Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/request/model/b;->aui:Ljava/lang/String;

    const-string p0, "/data/data"

    invoke-static {p0}, Lcom/kwad/sdk/utils/be;->fP(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    iput-object p0, v0, Lcom/kwad/sdk/core/request/model/b;->auj:Ljava/lang/String;

    return-object v0
.end method

.method private static xB()Z
    .locals 1

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/f;->xB()Z

    move-result v0

    return v0
.end method
