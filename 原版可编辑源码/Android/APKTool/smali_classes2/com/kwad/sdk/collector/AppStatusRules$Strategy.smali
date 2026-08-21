.class public Lcom/kwad/sdk/collector/AppStatusRules$Strategy;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/b;
.implements Ljava/io/Serializable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/sdk/collector/AppStatusRules;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "Strategy"
.end annotation


# static fields
.field public static LOCAL_DEFAULT:Lcom/kwad/sdk/collector/AppStatusRules$Strategy; = null

.field private static final serialVersionUID:J = -0x134162919dae3595L


# instance fields
.field private historyGranularity:J

.field private minLaunchInterval:J

.field private name:Ljava/lang/String;

.field private needLaunch:Z

.field private needSaveLaunchTime:J

.field private scanInterval:J

.field private startTime:J

.field private targetMap:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/kwad/sdk/collector/model/d;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 3

    new-instance v0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;

    invoke-direct {v0}, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;-><init>()V

    sput-object v0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->LOCAL_DEFAULT:Lcom/kwad/sdk/collector/AppStatusRules$Strategy;

    const-wide/32 v1, 0x5265c00

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->setStartTime(J)V

    sget-object v0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->LOCAL_DEFAULT:Lcom/kwad/sdk/collector/AppStatusRules$Strategy;

    const-wide/32 v1, 0xea60

    invoke-virtual {v0, v1, v2}, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->setHistoryGranularity(J)V

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/32 v0, 0x5265c00

    iput-wide v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->startTime:J

    const-wide/32 v0, 0xea60

    iput-wide v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->historyGranularity:J

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->name:Ljava/lang/String;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->targetMap:Ljava/util/HashMap;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->needLaunch:Z

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->needSaveLaunchTime:J

    return-void
.end method

.method public static createFromJSONArray(Lorg/json/JSONArray;)Ljava/util/ArrayList;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lorg/json/JSONArray;",
            ")",
            "Ljava/util/ArrayList<",
            "Lcom/kwad/sdk/collector/AppStatusRules$Strategy;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    if-eqz p0, :cond_2

    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_1

    :cond_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_2

    const/4 v3, 0x0

    :try_start_0
    invoke-virtual {p0, v2}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v3
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    if-eqz v3, :cond_1

    new-instance v4, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;

    invoke-direct {v4}, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;-><init>()V

    invoke-virtual {v4, v3}, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->parseJson(Lorg/json/JSONObject;)V

    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_1
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_2
    :goto_1
    return-object v0
.end method


# virtual methods
.method public getHistoryGranularity()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->historyGranularity:J

    return-wide v0
.end method

.method public getMinLaunchIntervalWithMS()J
    .locals 4

    iget-wide v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->minLaunchInterval:J

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    return-wide v0
.end method

.method public getName()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->name:Ljava/lang/String;

    return-object v0
.end method

.method public getNeedSaveLaunchTime()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->needSaveLaunchTime:J

    return-wide v0
.end method

.method public getScanInterval()J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->scanInterval:J

    return-wide v0
.end method

.method public getStartTimeWithMS()J
    .locals 4

    iget-wide v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->startTime:J

    const-wide/16 v2, 0x3e8

    mul-long/2addr v0, v2

    return-wide v0
.end method

.method public getTarget()Ljava/util/ArrayList;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Lcom/kwad/sdk/collector/model/d;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    iget-object v1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->targetMap:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(Ljava/util/Collection;)V

    return-object v0
.end method

.method public getTargetPackages()Ljava/util/Set;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Set<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->targetMap:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    new-instance v1, Ljava/util/HashSet;

    invoke-direct {v1}, Ljava/util/HashSet;-><init>()V

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/collector/model/d;

    invoke-static {v2}, Lcom/kwad/sdk/collector/model/c;->a(Lcom/kwad/sdk/collector/model/d;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_0
    return-object v1
.end method

.method public isNeedLaunch()Z
    .locals 1

    iget-boolean v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->needLaunch:Z

    return v0
.end method

.method public parseJson(Lorg/json/JSONObject;)V
    .locals 2

    if-nez p1, :cond_0

    return-void

    :cond_0
    :try_start_0
    const-string v0, "startTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->startTime:J

    const-string v0, "scanInterval"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->scanInterval:J

    const-string v0, "historyGranularity"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    if-lez v0, :cond_1

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v0, v0

    iput-wide v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->historyGranularity:J

    :cond_1
    const-string v0, "name"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->name:Ljava/lang/String;

    const-string v0, "minLaunchInterval"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->minLaunchInterval:J

    const-string v0, "needSaveLaunchTime"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->needSaveLaunchTime:J

    const-string v0, "needLaunch"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v0

    iput-boolean v0, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->needLaunch:Z

    const-string v0, "target"

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/collector/model/c;->d(Lorg/json/JSONArray;)Ljava/util/ArrayList;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->setTarget(Ljava/util/ArrayList;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    invoke-static {p1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    return-void
.end method

.method public removeTargetsByPackage(Ljava/util/Collection;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Collection<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    invoke-interface {p1}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->targetMap:Ljava/util/HashMap;

    invoke-virtual {v1, v0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void
.end method

.method public setHistoryGranularity(J)V
    .locals 0

    iput-wide p1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->historyGranularity:J

    return-void
.end method

.method public setNeedLaunch(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->needLaunch:Z

    return-void
.end method

.method public setNeedSaveLaunchTime(J)V
    .locals 0

    iput-wide p1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->needSaveLaunchTime:J

    return-void
.end method

.method public setScanInterval(J)V
    .locals 0

    iput-wide p1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->scanInterval:J

    return-void
.end method

.method public setStartTime(J)V
    .locals 0

    iput-wide p1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->startTime:J

    return-void
.end method

.method public setTarget(Ljava/util/ArrayList;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/kwad/sdk/collector/model/d;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_1

    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/collector/model/d;

    iget-object v1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->targetMap:Ljava/util/HashMap;

    invoke-static {v0}, Lcom/kwad/sdk/collector/model/c;->a(Lcom/kwad/sdk/collector/model/d;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_0
    return-void

    :cond_1
    iget-object p1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->targetMap:Ljava/util/HashMap;

    invoke-virtual {p1}, Ljava/util/HashMap;->clear()V

    return-void
.end method

.method public toJson()Lorg/json/JSONObject;
    .locals 5

    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    iget-wide v1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->startTime:J

    const-string v3, "startTime"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-wide v1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->scanInterval:J

    const-string v3, "scanInterval"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-wide v1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->historyGranularity:J

    const-wide/16 v3, 0x3e8

    div-long/2addr v1, v3

    const-string v3, "historyGranularity"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-object v1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->name:Ljava/lang/String;

    const-string v2, "name"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->getTarget()Ljava/util/ArrayList;

    move-result-object v1

    const-string v2, "target"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Ljava/util/List;)V

    iget-wide v1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->minLaunchInterval:J

    const-string v3, "minLaunchInterval"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-wide v1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->needSaveLaunchTime:J

    const-string v3, "needSaveLaunchTime"

    invoke-static {v0, v3, v1, v2}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;J)V

    iget-boolean v1, p0, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->needLaunch:Z

    const-string v2, "needLaunch"

    invoke-static {v0, v2, v1}, Lcom/kwad/sdk/utils/t;->putValue(Lorg/json/JSONObject;Ljava/lang/String;Z)V

    return-object v0
.end method
