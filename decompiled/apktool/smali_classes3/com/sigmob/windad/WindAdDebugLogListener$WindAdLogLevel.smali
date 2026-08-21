.class public final enum Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/windad/WindAdDebugLogListener;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "WindAdLogLevel"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum WindLogLevelDebug:Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

.field public static final enum WindLogLevelError:Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

.field public static final enum WindLogLevelInformation:Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

.field public static final enum WindLogLevelWarning:Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

.field private static final synthetic a:[Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;


# direct methods
.method static constructor <clinit>()V
    .locals 7

    new-instance v0, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    const/4 v1, 0x0

    const-string v2, "WindLogLevelError"

    invoke-direct {v0, v2, v1}, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;->WindLogLevelError:Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    new-instance v0, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    const/4 v2, 0x1

    const-string v3, "WindLogLevelWarning"

    invoke-direct {v0, v3, v2}, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;->WindLogLevelWarning:Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    new-instance v0, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    const/4 v3, 0x2

    const-string v4, "WindLogLevelInformation"

    invoke-direct {v0, v4, v3}, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;->WindLogLevelInformation:Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    new-instance v0, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    const/4 v4, 0x3

    const-string v5, "WindLogLevelDebug"

    invoke-direct {v0, v5, v4}, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;->WindLogLevelDebug:Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    const/4 v5, 0x4

    new-array v5, v5, [Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    sget-object v6, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;->WindLogLevelError:Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    aput-object v6, v5, v1

    sget-object v1, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;->WindLogLevelWarning:Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    aput-object v1, v5, v2

    sget-object v1, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;->WindLogLevelInformation:Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    aput-object v1, v5, v3

    aput-object v0, v5, v4

    sput-object v5, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;->a:[Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;
    .locals 1

    const-class v0, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    return-object p0
.end method

.method public static values()[Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;
    .locals 1

    sget-object v0, Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;->a:[Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    invoke-virtual {v0}, [Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/sigmob/windad/WindAdDebugLogListener$WindAdLogLevel;

    return-object v0
.end method
