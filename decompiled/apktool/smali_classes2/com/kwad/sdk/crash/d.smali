.class public final Lcom/kwad/sdk/crash/d;
.super Ljava/lang/Object;


# static fields
.field public static final azO:D

.field public static final azP:Ljava/util/regex/Pattern;

.field public static final azQ:Ljava/util/regex/Pattern;

.field public static final azR:Ljava/util/regex/Pattern;

.field public static final azS:Ljava/util/regex/Pattern;

.field public static azT:I

.field public static azU:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    invoke-static {}, Ljava/lang/Runtime;->getRuntime()Ljava/lang/Runtime;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Runtime;->maxMemory()J

    move-result-wide v0

    long-to-double v0, v0

    sput-wide v0, Lcom/kwad/sdk/crash/d;->azO:D

    const-string v0, "/data/user"

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/crash/d;->azP:Ljava/util/regex/Pattern;

    const-string v0, "/data"

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/crash/d;->azQ:Ljava/util/regex/Pattern;

    const-string v0, "/data/data/(.*)/data/.*"

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/crash/d;->azR:Ljava/util/regex/Pattern;

    const-string v0, "/data/user/.*/(.*)/data/.*"

    invoke-static {v0}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/crash/d;->azS:Ljava/util/regex/Pattern;

    const/16 v0, 0x14

    sput v0, Lcom/kwad/sdk/crash/d;->azT:I

    const-string v0, "sessionId"

    sput-object v0, Lcom/kwad/sdk/crash/d;->azU:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
