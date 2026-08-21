.class public final Lcom/kwad/sdk/collector/model/c;
.super Ljava/lang/Object;


# direct methods
.method private static a(Ljava/lang/String;Lcom/kwad/sdk/collector/AppStatusRules$Strategy;)Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;
    .locals 3

    if-nez p1, :cond_0

    const-wide/16 v0, -0x1

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->getHistoryGranularity()J

    move-result-wide v0

    :goto_0
    :try_start_0
    new-instance p1, Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;

    const-string v2, ""

    invoke-direct {p1, v0, v1, v2, p0}, Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;-><init>(JLjava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p0

    invoke-static {p0}, Lcom/kwad/sdk/core/e/c;->printStackTraceOnly(Ljava/lang/Throwable;)V

    const/4 p0, 0x0

    return-object p0
.end method

.method public static a(Lcom/kwad/sdk/collector/model/b;)Ljava/lang/String;
    .locals 1

    instance-of v0, p0, Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;

    if-eqz v0, :cond_0

    check-cast p0, Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;

    invoke-static {p0}, Lcom/kwad/sdk/collector/AppStatusNative;->appRunningInfoGetName(Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static a(Lcom/kwad/sdk/collector/model/d;)Ljava/lang/String;
    .locals 1

    instance-of v0, p0, Lcom/kwad/sdk/collector/model/jni/RulesTargetNative;

    if-eqz v0, :cond_0

    check-cast p0, Lcom/kwad/sdk/collector/model/jni/RulesTargetNative;

    invoke-static {p0}, Lcom/kwad/sdk/collector/AppStatusNative;->rulesTargetGetPackageName(Lcom/kwad/sdk/collector/model/jni/RulesTargetNative;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static a(Lcom/kwad/sdk/collector/AppStatusRules$Strategy;Ljava/util/List;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/collector/AppStatusRules$Strategy;",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/collector/model/a;",
            ">;)V"
        }
    .end annotation

    invoke-virtual {p0}, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->getTarget()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_0

    goto :goto_1

    :cond_0
    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_1
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/collector/model/d;

    invoke-static {v1}, Lcom/kwad/sdk/collector/model/c;->b(Lcom/kwad/sdk/collector/model/d;)Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_1

    invoke-static {v1}, Lcom/kwad/sdk/collector/model/c;->b(Lcom/kwad/sdk/collector/model/d;)Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-eqz v2, :cond_1

    invoke-static {v1}, Lcom/kwad/sdk/collector/model/c;->a(Lcom/kwad/sdk/collector/model/d;)Ljava/lang/String;

    move-result-object v2

    new-instance v3, Ljava/util/HashSet;

    invoke-static {v1}, Lcom/kwad/sdk/collector/model/c;->b(Lcom/kwad/sdk/collector/model/d;)Ljava/util/List;

    move-result-object v1

    invoke-direct {v3, v1}, Ljava/util/HashSet;-><init>(Ljava/util/Collection;)V

    invoke-virtual {p0}, Lcom/kwad/sdk/collector/AppStatusRules$Strategy;->getStartTimeWithMS()J

    move-result-wide v4

    invoke-static {v2, p0}, Lcom/kwad/sdk/collector/model/c;->a(Ljava/lang/String;Lcom/kwad/sdk/collector/AppStatusRules$Strategy;)Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;

    move-result-object v1

    if-eqz v1, :cond_1

    new-instance v2, Lcom/kwad/sdk/collector/model/jni/AnalyseTaskNative;

    invoke-direct {v2, v1, v3, v4, v5}, Lcom/kwad/sdk/collector/model/jni/AnalyseTaskNative;-><init>(Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;Ljava/util/Set;J)V

    invoke-interface {p1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_2
    :goto_1
    return-void
.end method

.method public static a(Lcom/kwad/sdk/collector/model/b;J)V
    .locals 0

    check-cast p0, Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;

    invoke-static {p0, p1, p2}, Lcom/kwad/sdk/collector/AppStatusNative;->appRunningInfoSetLastRunningTime(Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;J)V

    return-void
.end method

.method public static b(Lcom/kwad/sdk/collector/model/b;)Ljava/lang/String;
    .locals 1

    instance-of v0, p0, Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;

    if-eqz v0, :cond_0

    check-cast p0, Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;

    invoke-static {p0}, Lcom/kwad/sdk/collector/AppStatusNative;->appRunningInfoGetPackageName(Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static b(Lcom/kwad/sdk/collector/model/d;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/collector/model/d;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    instance-of v0, p0, Lcom/kwad/sdk/collector/model/jni/RulesTargetNative;

    if-eqz v0, :cond_0

    check-cast p0, Lcom/kwad/sdk/collector/model/jni/RulesTargetNative;

    invoke-static {p0}, Lcom/kwad/sdk/collector/AppStatusNative;->rulesTargetGetPaths(Lcom/kwad/sdk/collector/model/jni/RulesTargetNative;)[Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Ljava/util/Arrays;->asList([Ljava/lang/Object;)Ljava/util/List;

    move-result-object p0

    return-object p0

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static c(Lcom/kwad/sdk/collector/model/b;)J
    .locals 2

    instance-of v0, p0, Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;

    if-eqz v0, :cond_0

    check-cast p0, Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;

    invoke-static {p0}, Lcom/kwad/sdk/collector/AppStatusNative;->appRunningInfoGetLastRunningTime(Lcom/kwad/sdk/collector/model/jni/AppRunningInfoNative;)J

    move-result-wide v0

    return-wide v0

    :cond_0
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method public static d(Lorg/json/JSONArray;)Ljava/util/ArrayList;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lorg/json/JSONArray;",
            ")",
            "Ljava/util/ArrayList<",
            "Lcom/kwad/sdk/collector/model/d;",
            ">;"
        }
    .end annotation

    if-nez p0, :cond_0

    const/4 p0, 0x0

    return-object p0

    :cond_0
    invoke-static {p0}, Lcom/kwad/sdk/collector/model/c;->e(Lorg/json/JSONArray;)Ljava/util/ArrayList;

    move-result-object p0

    return-object p0
.end method

.method private static e(Lorg/json/JSONArray;)Ljava/util/ArrayList;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lorg/json/JSONArray;",
            ")",
            "Ljava/util/ArrayList<",
            "Lcom/kwad/sdk/collector/model/d;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    const/4 v3, 0x0

    :try_start_0
    invoke-virtual {p0, v2}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v3
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    if-eqz v3, :cond_0

    new-instance v4, Lcom/kwad/sdk/collector/model/jni/RulesTargetNative;

    invoke-direct {v4}, Lcom/kwad/sdk/collector/model/jni/RulesTargetNative;-><init>()V

    invoke-virtual {v4, v3}, Lcom/kwad/sdk/collector/model/jni/RulesTargetNative;->parseJson(Lorg/json/JSONObject;)V

    invoke-virtual {v0, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_1
    return-object v0
.end method
