.class public final Lcom/kwad/sdk/core/network/b/d;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/kwad/sdk/core/network/b/b;


# static fields
.field private static apZ:Z = true

.field public static aqa:D = 1.0

.field private static volatile aqe:Z = false

.field private static aqf:Ljava/lang/String; = ""


# instance fields
.field private aqb:J

.field private aqc:J

.field private aqd:J

.field private aqg:Lcom/kwad/sdk/core/network/k;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqb:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqc:J

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqd:J

    new-instance v0, Lcom/kwad/sdk/core/network/k;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/k;-><init>()V

    iput-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    invoke-virtual {v0}, Ljava/util/Random;->nextDouble()D

    move-result-wide v0

    sput-wide v0, Lcom/kwad/sdk/core/network/b/d;->aqa:D

    return-void
.end method

.method private static BB()Ljava/lang/String;
    .locals 2

    sget-boolean v0, Lcom/kwad/sdk/core/network/b/d;->aqe:Z

    if-eqz v0, :cond_0

    sget-object v0, Lcom/kwad/sdk/core/network/b/d;->aqf:Ljava/lang/String;

    return-object v0

    :cond_0
    :try_start_0
    invoke-static {}, Lokhttp3/internal/Version;->userAgent()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/core/network/b/d;->aqf:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    :try_start_1
    const-class v0, Lokhttp3/internal/Version;

    const-string v1, "userAgent"

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/s;->c(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    sput-object v0, Lcom/kwad/sdk/core/network/b/d;->aqf:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    :catch_0
    :goto_0
    const/4 v0, 0x1

    sput-boolean v0, Lcom/kwad/sdk/core/network/b/d;->aqe:Z

    sget-object v0, Lcom/kwad/sdk/core/network/b/d;->aqf:Ljava/lang/String;

    return-object v0
.end method

.method private BC()Lcom/kwad/sdk/core/network/b/d;
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iput-wide v1, v0, Lcom/kwad/sdk/core/network/k;->apr:J

    return-object p0
.end method

.method private BD()Lcom/kwad/sdk/core/network/b/d;
    .locals 3

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqc:J

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "this.responseReceiveTime:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-wide v1, p0, Lcom/kwad/sdk/core/network/b/d;->aqc:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    return-object p0
.end method

.method private BE()Lcom/kwad/sdk/core/network/b/d;
    .locals 5

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqb:J

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/network/b/d;->Z(J)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqc:J

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/network/b/d;->Z(J)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v1, p0, Lcom/kwad/sdk/core/network/b/d;->aqc:J

    iget-wide v3, p0, Lcom/kwad/sdk/core/network/b/d;->aqb:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/kwad/sdk/core/network/k;->apy:J

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "info.waiting_response_cost:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v1, v1, Lcom/kwad/sdk/core/network/k;->apy:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    :cond_0
    return-object p0
.end method

.method private BF()Lcom/kwad/sdk/core/network/b/d;
    .locals 5

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v0, v0, Lcom/kwad/sdk/core/network/k;->apr:J

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/network/b/d;->Z(J)Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqb:J

    iget-object v2, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v3, v2, Lcom/kwad/sdk/core/network/k;->apr:J

    sub-long/2addr v0, v3

    iput-wide v0, v2, Lcom/kwad/sdk/core/network/k;->apl:J

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v0, v0, Lcom/kwad/sdk/core/network/k;->apj:J

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/network/b/d;->Z(J)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v1, v0, Lcom/kwad/sdk/core/network/k;->apl:J

    iget-object v3, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v3, v3, Lcom/kwad/sdk/core/network/k;->apj:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/kwad/sdk/core/network/k;->apk:J

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "info.request_create_cost:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v1, v1, Lcom/kwad/sdk/core/network/k;->apl:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "info.requestAddParamsCost:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v1, v1, Lcom/kwad/sdk/core/network/k;->apk:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    :cond_1
    return-object p0
.end method

.method private BG()Lcom/kwad/sdk/core/network/b/d;
    .locals 5

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqc:J

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/network/b/d;->Z(J)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqd:J

    iget-object v2, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v3, p0, Lcom/kwad/sdk/core/network/b/d;->aqc:J

    sub-long/2addr v0, v3

    iput-wide v0, v2, Lcom/kwad/sdk/core/network/k;->apw:J

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "info.response_parse_cost:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v1, v1, Lcom/kwad/sdk/core/network/k;->apw:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    :cond_0
    return-object p0
.end method

.method private BH()Lcom/kwad/sdk/core/network/b/d;
    .locals 5

    iget-wide v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqd:J

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/network/b/d;->Z(J)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/kwad/sdk/core/network/b/d;->aqd:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/kwad/sdk/core/network/k;->apD:J

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/b/d;->BI()V

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "info.response_done_cost:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v1, v1, Lcom/kwad/sdk/core/network/k;->apD:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    :cond_0
    return-object p0
.end method

.method private BI()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    if-eqz v0, :cond_0

    iget v0, v0, Lcom/kwad/sdk/core/network/k;->apC:I

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v0, v0, Lcom/kwad/sdk/core/network/k;->apD:J

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/network/b/d;->ac(J)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    const-wide/16 v1, -0x1

    iput-wide v1, v0, Lcom/kwad/sdk/core/network/k;->apD:J

    :cond_0
    return-void
.end method

.method private BJ()Lcom/kwad/sdk/core/network/b/d;
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    invoke-static {}, Lcom/kwad/sdk/ip/direct/a;->FH()F

    move-result v1

    float-to-int v1, v1

    iput v1, v0, Lcom/kwad/sdk/core/network/k;->apG:I

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    invoke-static {}, Lcom/kwad/sdk/ip/direct/a;->FI()F

    move-result v1

    float-to-int v1, v1

    iput v1, v0, Lcom/kwad/sdk/core/network/k;->apH:I

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    invoke-static {}, Lcom/kwad/sdk/ip/direct/a;->FJ()F

    move-result v1

    float-to-int v1, v1

    iput v1, v0, Lcom/kwad/sdk/core/network/k;->apI:I

    return-object p0
.end method

.method private BK()V
    .locals 3

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    invoke-static {v0}, Lcom/kwad/sdk/core/network/b/d;->b(Lcom/kwad/sdk/core/network/k;)Lcom/kwad/sdk/core/network/j;

    move-result-object v0

    const-class v1, Lcom/kwad/sdk/core/network/l;

    invoke-static {v1}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/kwad/sdk/core/network/l;

    if-eqz v1, :cond_0

    invoke-interface {v1, v0}, Lcom/kwad/sdk/core/network/l;->a(Lcom/kwad/sdk/core/network/j;)V

    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "reportError"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/kwad/sdk/core/network/j;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    return-void
.end method

.method private static Z(J)Z
    .locals 2

    const-wide/16 v0, -0x1

    cmp-long p0, p0, v0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private aa(J)Lcom/kwad/sdk/core/network/b/d;
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iput-wide p1, v0, Lcom/kwad/sdk/core/network/k;->apx:J

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "responseSize:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    return-object p0
.end method

.method private ab(J)Lcom/kwad/sdk/core/network/b/d;
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iput-wide p1, v0, Lcom/kwad/sdk/core/network/k;->apz:J

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "totalCost:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1, p2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    return-object p0
.end method

.method private static ac(J)Z
    .locals 2

    const-wide/16 v0, 0x32

    cmp-long p0, p0, v0

    if-ltz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method private static b(Lcom/kwad/sdk/core/network/k;)Lcom/kwad/sdk/core/network/j;
    .locals 2

    new-instance v0, Lcom/kwad/sdk/core/network/j;

    invoke-direct {v0}, Lcom/kwad/sdk/core/network/j;-><init>()V

    iget-object v1, p0, Lcom/kwad/sdk/core/network/k;->errorMsg:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/core/network/j;->errorMsg:Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/sdk/core/network/k;->host:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/core/network/j;->host:Ljava/lang/String;

    iget v1, p0, Lcom/kwad/sdk/core/network/k;->httpCode:I

    iput v1, v0, Lcom/kwad/sdk/core/network/j;->httpCode:I

    iget-object v1, p0, Lcom/kwad/sdk/core/network/k;->apg:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/core/network/j;->apg:Ljava/lang/String;

    iget-object v1, p0, Lcom/kwad/sdk/core/network/k;->url:Ljava/lang/String;

    iput-object v1, v0, Lcom/kwad/sdk/core/network/j;->url:Ljava/lang/String;

    iget v1, p0, Lcom/kwad/sdk/core/network/k;->aph:I

    iput v1, v0, Lcom/kwad/sdk/core/network/j;->aph:I

    iget-object p0, p0, Lcom/kwad/sdk/core/network/k;->api:Ljava/lang/String;

    iput-object p0, v0, Lcom/kwad/sdk/core/network/j;->api:Ljava/lang/String;

    return-object v0
.end method

.method private static b(Lcom/kwad/sdk/core/network/j;)Z
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/network/j;->url:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    return v1

    :cond_0
    iget-object p0, p0, Lcom/kwad/sdk/core/network/j;->url:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p0

    const-string v0, "beta"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "test"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "staging"

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_1

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    return p0

    :cond_2
    :goto_0
    return v1
.end method

.method private cd(I)Lcom/kwad/sdk/core/network/b/d;
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iput p1, v0, Lcom/kwad/sdk/core/network/k;->httpCode:I

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "http_code:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    return-object p0
.end method

.method private ce(I)Lcom/kwad/sdk/core/network/b/d;
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iput p1, v0, Lcom/kwad/sdk/core/network/k;->apC:I

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "hasData:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    return-object p0
.end method

.method private cf(I)Lcom/kwad/sdk/core/network/b/d;
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iput p1, v0, Lcom/kwad/sdk/core/network/k;->result:I

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "result:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    return-object p0
.end method

.method private static dk(Ljava/lang/String;)V
    .locals 1

    sget-boolean v0, Lcom/kwad/sdk/core/network/b/d;->apZ:Z

    if-eqz v0, :cond_0

    const-string v0, "NetworkMonitorRecorder"

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private dl(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/d;
    .locals 2

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-object p0

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iput-object p1, v0, Lcom/kwad/sdk/core/network/k;->url:Ljava/lang/String;

    const-string v0, "?"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "\\?"

    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    array-length v1, v0

    if-lez v1, :cond_1

    const/4 p1, 0x0

    aget-object p1, v0, p1

    :cond_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "url:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    :cond_2
    return-object p0
.end method

.method private dm(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/d;
    .locals 1

    :try_start_0
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    invoke-virtual {p1}, Landroid/net/Uri;->getHost()Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/kwad/sdk/core/network/k;->host:Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v0, "host:"

    invoke-direct {p1, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-object v0, v0, Lcom/kwad/sdk/core/network/k;->host:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "NetworkMonitorRecorder"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-object p0
.end method

.method private dn(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/d;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iput-object p1, v0, Lcom/kwad/sdk/core/network/k;->errorMsg:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    return-object p0
.end method

.method private do(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/d;
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iput-object p1, v0, Lcom/kwad/sdk/core/network/k;->apg:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "reqType:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/ip/direct/a;->FG()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/network/b/d;->dq(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/d;

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/b/d;->BJ()Lcom/kwad/sdk/core/network/b/d;

    return-object p0
.end method

.method private dp(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/d;
    .locals 2

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iput-object p1, v0, Lcom/kwad/sdk/core/network/k;->apB:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "requestId:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    return-object p0
.end method

.method private dq(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/d;
    .locals 1

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iput-object p1, v0, Lcom/kwad/sdk/core/network/k;->apE:Ljava/lang/String;

    return-object p0
.end method


# virtual methods
.method public final synthetic Bt()Lcom/kwad/sdk/core/network/b/b;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/b/d;->BC()Lcom/kwad/sdk/core/network/b/d;

    move-result-object v0

    return-object v0
.end method

.method public final synthetic Bu()Lcom/kwad/sdk/core/network/b/b;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/b/d;->BD()Lcom/kwad/sdk/core/network/b/d;

    move-result-object v0

    return-object v0
.end method

.method public final synthetic Bv()Lcom/kwad/sdk/core/network/b/b;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/b/d;->BE()Lcom/kwad/sdk/core/network/b/d;

    move-result-object v0

    return-object v0
.end method

.method public final synthetic Bw()Lcom/kwad/sdk/core/network/b/b;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/b/d;->BF()Lcom/kwad/sdk/core/network/b/d;

    move-result-object v0

    return-object v0
.end method

.method public final Bx()Lcom/kwad/sdk/core/network/b/b;
    .locals 5

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v0, v0, Lcom/kwad/sdk/core/network/k;->apr:J

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/network/b/d;->Z(J)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    iget-object v3, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v3, v3, Lcom/kwad/sdk/core/network/k;->apr:J

    sub-long/2addr v1, v3

    iput-wide v1, v0, Lcom/kwad/sdk/core/network/k;->apj:J

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "info.request_prepare_cost:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v1, v1, Lcom/kwad/sdk/core/network/k;->apj:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    :cond_0
    return-object p0
.end method

.method public final synthetic By()Lcom/kwad/sdk/core/network/b/b;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/b/d;->BG()Lcom/kwad/sdk/core/network/b/d;

    move-result-object v0

    return-object v0
.end method

.method public final synthetic Bz()Lcom/kwad/sdk/core/network/b/b;
    .locals 1

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/b/d;->BH()Lcom/kwad/sdk/core/network/b/d;

    move-result-object v0

    return-object v0
.end method

.method public final synthetic Y(J)Lcom/kwad/sdk/core/network/b/b;
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/sdk/core/network/b/d;->aa(J)Lcom/kwad/sdk/core/network/b/d;

    move-result-object p1

    return-object p1
.end method

.method public final synthetic bZ(I)Lcom/kwad/sdk/core/network/b/b;
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/network/b/d;->cd(I)Lcom/kwad/sdk/core/network/b/d;

    move-result-object p1

    return-object p1
.end method

.method public final synthetic ca(I)Lcom/kwad/sdk/core/network/b/b;
    .locals 0

    const/4 p1, 0x1

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/network/b/d;->ce(I)Lcom/kwad/sdk/core/network/b/d;

    move-result-object p1

    return-object p1
.end method

.method public final synthetic cb(I)Lcom/kwad/sdk/core/network/b/b;
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/network/b/d;->cf(I)Lcom/kwad/sdk/core/network/b/d;

    move-result-object p1

    return-object p1
.end method

.method public final cc(I)Lcom/kwad/sdk/core/network/b/b;
    .locals 4

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iput p1, v0, Lcom/kwad/sdk/core/network/k;->apF:I

    int-to-long v0, p1

    const-wide/16 v2, 0x0

    cmp-long p1, v0, v2

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    const/4 v0, 0x1

    iput v0, p1, Lcom/kwad/sdk/core/network/k;->aph:I

    :cond_0
    return-object p0
.end method

.method public final synthetic df(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/network/b/d;->dl(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/d;

    move-result-object p1

    return-object p1
.end method

.method public final synthetic dg(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/network/b/d;->dm(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/d;

    move-result-object p1

    return-object p1
.end method

.method public final synthetic dh(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/network/b/d;->dn(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/d;

    move-result-object p1

    return-object p1
.end method

.method public final synthetic di(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/network/b/d;->do(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/d;

    move-result-object p1

    return-object p1
.end method

.method public final synthetic dj(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/b;
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/sdk/core/network/b/d;->dp(Ljava/lang/String;)Lcom/kwad/sdk/core/network/b/d;

    move-result-object p1

    return-object p1
.end method

.method public final report()V
    .locals 7

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    invoke-static {v0}, Lcom/kwad/sdk/core/network/b/d;->b(Lcom/kwad/sdk/core/network/j;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    invoke-static {}, Lcom/kwad/sdk/core/network/b/d;->BB()Ljava/lang/String;

    move-result-object v1

    iput-object v1, v0, Lcom/kwad/sdk/core/network/k;->api:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget v0, v0, Lcom/kwad/sdk/core/network/k;->httpCode:I

    const/16 v1, 0xc8

    if-eq v0, v1, :cond_1

    invoke-direct {p0}, Lcom/kwad/sdk/core/network/b/d;->BK()V

    return-void

    :cond_1
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    iget-object v2, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v2, v2, Lcom/kwad/sdk/core/network/k;->apr:J

    invoke-static {v2, v3}, Lcom/kwad/sdk/core/network/b/d;->Z(J)Z

    move-result v2

    const-wide/16 v3, -0x1

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    iget-wide v5, v2, Lcom/kwad/sdk/core/network/k;->apr:J

    sub-long/2addr v0, v5

    goto :goto_0

    :cond_2
    move-wide v0, v3

    :goto_0
    invoke-direct {p0, v0, v1}, Lcom/kwad/sdk/core/network/b/d;->ab(J)Lcom/kwad/sdk/core/network/b/d;

    const-wide/16 v5, 0x7530

    cmp-long v2, v0, v5

    if-gtz v2, :cond_5

    cmp-long v0, v0, v3

    if-gtz v0, :cond_3

    goto :goto_1

    :cond_3
    const-class v0, Lcom/kwad/sdk/core/network/l;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/network/l;

    if-eqz v0, :cond_4

    iget-object v1, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    invoke-interface {v0, v1}, Lcom/kwad/sdk/core/network/l;->a(Lcom/kwad/sdk/core/network/k;)V

    :cond_4
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "report normal"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/network/b/d;->aqg:Lcom/kwad/sdk/core/network/k;

    invoke-virtual {v1}, Lcom/kwad/sdk/core/network/k;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/core/network/b/d;->dk(Ljava/lang/String;)V

    :cond_5
    :goto_1
    return-void
.end method
