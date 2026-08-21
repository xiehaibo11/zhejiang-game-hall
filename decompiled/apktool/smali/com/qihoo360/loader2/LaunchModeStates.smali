.class Lcom/qihoo360/loader2/LaunchModeStates;
.super Ljava/lang/Object;
.source "LaunchModeStates.java"


# static fields
.field public static final TAG:Ljava/lang/String; = "launchMode"


# instance fields
.field private mStates:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/loader2/PluginContainers$ActivityState;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>()V
    .locals 1

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 55
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/LaunchModeStates;->mStates:Ljava/util/Map;

    return-void
.end method

.method private static getInfix(IZ)Ljava/lang/String;
    .locals 0

    .line 103
    invoke-static {p0}, Lcom/qihoo360/loader2/LaunchModeStates;->getLaunchModeInfix(I)Ljava/lang/String;

    move-result-object p0

    if-eqz p1, :cond_0

    .line 104
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "TS"

    goto :goto_0

    :cond_0
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "NTS"

    :goto_0
    invoke-virtual {p1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static getLaunchModeInfix(I)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x1

    if-eq p0, v0, :cond_2

    const/4 v0, 0x2

    if-eq p0, v0, :cond_1

    const/4 v0, 0x3

    if-eq p0, v0, :cond_0

    const-string p0, "NR"

    return-object p0

    :cond_0
    const-string p0, "SI"

    return-object p0

    :cond_1
    const-string p0, "ST"

    return-object p0

    :cond_2
    const-string p0, "STP"

    return-object p0
.end method

.method public static isTranslucentTheme(I)Z
    .locals 1

    const v0, 0x103000f

    if-eq p0, v0, :cond_1

    const v0, 0x103000b

    if-eq p0, v0, :cond_1

    const v0, 0x1030010

    if-eq p0, v0, :cond_1

    const v0, 0x1030011

    if-ne p0, v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p0, 0x1

    :goto_1
    return p0
.end method


# virtual methods
.method addStates(Ljava/util/Map;Ljava/util/HashSet;Ljava/lang/String;IZI)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/loader2/PluginContainers$ActivityState;",
            ">;",
            "Ljava/util/HashSet<",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            "IZI)V"
        }
    .end annotation

    .line 67
    invoke-static {p4, p5}, Lcom/qihoo360/loader2/LaunchModeStates;->getInfix(IZ)Ljava/lang/String;

    move-result-object p4

    .line 68
    iget-object p5, p0, Lcom/qihoo360/loader2/LaunchModeStates;->mStates:Ljava/util/Map;

    invoke-interface {p5, p4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p5

    check-cast p5, Ljava/util/HashMap;

    if-nez p5, :cond_0

    .line 70
    new-instance p5, Ljava/util/HashMap;

    invoke-direct {p5}, Ljava/util/HashMap;-><init>()V

    .line 71
    iget-object v0, p0, Lcom/qihoo360/loader2/LaunchModeStates;->mStates:Ljava/util/Map;

    invoke-interface {v0, p4, p5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-ge v0, p6, :cond_2

    .line 75
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 78
    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v2

    invoke-virtual {v2}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result v2

    if-eqz v2, :cond_1

    .line 79
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "LaunchModeStates.add("

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ")"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v3, "launchMode"

    invoke-static {v3, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 82
    :cond_1
    new-instance v2, Lcom/qihoo360/loader2/PluginContainers$ActivityState;

    invoke-direct {v2, v1}, Lcom/qihoo360/loader2/PluginContainers$ActivityState;-><init>(Ljava/lang/String;)V

    .line 83
    invoke-virtual {p5, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 84
    invoke-interface {p1, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 85
    invoke-virtual {p2, v1}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_2
    return-void
.end method

.method getStates(II)Ljava/util/HashMap;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(II)",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/qihoo360/loader2/PluginContainers$ActivityState;",
            ">;"
        }
    .end annotation

    .line 93
    invoke-static {p2}, Lcom/qihoo360/loader2/LaunchModeStates;->isTranslucentTheme(I)Z

    move-result p2

    invoke-static {p1, p2}, Lcom/qihoo360/loader2/LaunchModeStates;->getInfix(IZ)Ljava/lang/String;

    move-result-object p1

    .line 94
    iget-object p2, p0, Lcom/qihoo360/loader2/LaunchModeStates;->mStates:Ljava/util/Map;

    invoke-interface {p2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/HashMap;

    return-object p1
.end method
