.class public Lcom/qihoo360/loader2/PluginManager;
.super Ljava/lang/Object;
.source "PluginManager.java"


# static fields
.field public static final COUNTER_MAX:I = 0xa

.field public static final PROCESS_AUTO:I = -0x80000000

.field private static final PROCESS_NAME_PATTERN:Ljava/util/regex/Pattern;

.field static sPluginProcessIndex:I
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field

.field static sUid:I
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const-string v0, "^(.*):loader([0-1])$"

    .line 40
    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/qihoo360/loader2/PluginManager;->PROCESS_NAME_PATTERN:Ljava/util/regex/Pattern;

    const/4 v0, -0x1

    .line 56
    sput v0, Lcom/qihoo360/loader2/PluginManager;->sPluginProcessIndex:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static final evalPluginProcess(Ljava/lang/String;)I
    .locals 6

    const-string v0, "ws001"

    const/high16 v1, -0x80000000

    .line 101
    :try_start_0
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2, p0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 102
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    const-string p0, "plugin process checker: default, index=0"

    .line 103
    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 p0, -0x1

    return p0

    .line 108
    :cond_1
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_2

    const-string v2, ":p"

    .line 109
    invoke-virtual {p0, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_2

    .line 110
    invoke-static {p0}, Lcom/qihoo360/replugin/component/process/PluginProcessHost;->processTail(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 111
    sget-object v2, Lcom/qihoo360/replugin/component/process/PluginProcessHost;->PROCESS_INT_MAP:Ljava/util/Map;

    invoke-interface {v2, p0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    return p0

    .line 115
    :cond_2
    sget-object v2, Lcom/qihoo360/loader2/PluginManager;->PROCESS_NAME_PATTERN:Ljava/util/regex/Pattern;

    invoke-virtual {v2, p0}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v2

    if-eqz v2, :cond_9

    .line 116
    invoke-virtual {v2}, Ljava/util/regex/Matcher;->matches()Z

    move-result v3

    if-nez v3, :cond_3

    goto :goto_1

    .line 123
    :cond_3
    invoke-virtual {v2}, Ljava/util/regex/Matcher;->toMatchResult()Ljava/util/regex/MatchResult;

    move-result-object v2

    if-eqz v2, :cond_7

    .line 124
    invoke-interface {v2}, Ljava/util/regex/MatchResult;->groupCount()I

    move-result v3

    const/4 v4, 0x2

    if-eq v3, v4, :cond_4

    goto :goto_0

    :cond_4
    const/4 v3, 0x1

    .line 131
    invoke-interface {v2, v3}, Ljava/util/regex/MatchResult;->group(I)Ljava/lang/String;

    move-result-object v3

    .line 132
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getPackageName()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5, v3}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_6

    .line 133
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_5

    .line 134
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "plugin process checker: package name not match in="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_5
    return v1

    .line 139
    :cond_6
    invoke-interface {v2, v4}, Ljava/util/regex/MatchResult;->group(I)Ljava/lang/String;

    move-result-object p0

    .line 140
    invoke-static {p0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 141
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_b

    .line 142
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "plugin process checker: index="

    invoke-virtual {p0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_2

    .line 125
    :cond_7
    :goto_0
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_8

    .line 126
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "plugin process checker: no group in="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_8
    return v1

    .line 117
    :cond_9
    :goto_1
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_a

    .line 118
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "plugin process checker: non plugin process in="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_a
    return v1

    :catchall_0
    move-exception p0

    .line 145
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_b

    .line 146
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_b
    :goto_2
    return v1
.end method

.method static final getPluginProcessIndex()I
    .locals 1

    .line 80
    sget v0, Lcom/qihoo360/loader2/PluginManager;->sPluginProcessIndex:I

    return v0
.end method

.method static final init(Landroid/content/Context;)V
    .locals 0
    .annotation runtime Ljava/lang/Deprecated;
    .end annotation

    .line 89
    invoke-static {}, Lcom/qihoo360/mobilesafe/api/Tasks;->init()V

    .line 91
    invoke-static {}, Landroid/os/Process;->myUid()I

    move-result p0

    sput p0, Lcom/qihoo360/loader2/PluginManager;->sUid:I

    .line 94
    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->getCurrentProcessName()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/qihoo360/loader2/PluginManager;->evalPluginProcess(Ljava/lang/String;)I

    move-result p0

    sput p0, Lcom/qihoo360/loader2/PluginManager;->sPluginProcessIndex:I

    return-void
.end method

.method public static final isPluginProcess()Z
    .locals 2

    .line 62
    sget v0, Lcom/qihoo360/loader2/PluginManager;->sPluginProcessIndex:I

    if-ltz v0, :cond_0

    const/4 v1, 0x2

    if-ge v0, v1, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method static final isPluginProcess(I)Z
    .locals 1

    if-ltz p0, :cond_0

    const/4 v0, 0x2

    if-ge p0, v0, :cond_0

    const/4 p0, 0x1

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    return p0
.end method

.method public static final isValidActivityProcess(I)Z
    .locals 1

    const/4 v0, -0x1

    if-eq p0, v0, :cond_1

    const/high16 v0, -0x80000000

    if-eq p0, v0, :cond_1

    .line 66
    invoke-static {p0}, Lcom/qihoo360/loader2/PluginManager;->isPluginProcess(I)Z

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    :goto_0
    const/4 p0, 0x1

    return p0
.end method
