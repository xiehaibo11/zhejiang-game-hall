.class public final Lcom/kwad/sdk/core/report/x;
.super Ljava/lang/Object;


# static fields
.field private static PG:Landroid/content/Context;

.field private static asD:Ljava/lang/String;

.field private static asE:J


# direct methods
.method static constructor <clinit>()V
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/core/report/x;->Co()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/core/report/x;->asD:Ljava/lang/String;

    const-wide/16 v0, 0x0

    sput-wide v0, Lcom/kwad/sdk/core/report/x;->asE:J

    return-void
.end method

.method public static Ck()Ljava/lang/String;
    .locals 2

    const-string v0, "ReportIdManager"

    const-string v1, ">> updateSessionId"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/core/report/x;->Co()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/core/report/x;->asD:Ljava/lang/String;

    return-object v0
.end method

.method public static Cl()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/report/x;->asD:Ljava/lang/String;

    return-object v0
.end method

.method public static Cm()J
    .locals 5

    sget-object v0, Lcom/kwad/sdk/core/report/x;->PG:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/core/report/x;->be(Landroid/content/Context;)J

    move-result-wide v0

    sget-object v2, Lcom/kwad/sdk/core/report/x;->PG:Landroid/content/Context;

    const-wide/16 v3, 0x1

    add-long/2addr v3, v0

    invoke-static {v2, v3, v4}, Lcom/kwad/sdk/core/report/x;->b(Landroid/content/Context;J)Z

    return-wide v0
.end method

.method public static Cn()J
    .locals 2

    sget-wide v0, Lcom/kwad/sdk/core/report/x;->asE:J

    return-wide v0
.end method

.method private static Co()Ljava/lang/String;
    .locals 1

    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private static b(Landroid/content/Context;J)Z
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_0

    const-string v1, "ksadsdk_seq"

    invoke-virtual {p0, v1, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    invoke-interface {p0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object p0

    const-string v0, "seq"

    invoke-interface {p0, v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    invoke-interface {p0}, Landroid/content/SharedPreferences$Editor;->commit()Z

    move-result p0

    return p0

    :cond_0
    return v0
.end method

.method private static be(Landroid/content/Context;)J
    .locals 3

    if-eqz p0, :cond_0

    const/4 v0, 0x0

    const-string v1, "ksadsdk_seq"

    invoke-virtual {p0, v1, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object p0

    if-eqz p0, :cond_0

    const-wide/16 v0, 0x1

    const-string v2, "seq"

    invoke-interface {p0, v2, v0, v1}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v0

    goto :goto_0

    :cond_0
    const-wide/16 v0, 0x0

    :goto_0
    return-wide v0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 0

    sput-object p0, Lcom/kwad/sdk/core/report/x;->PG:Landroid/content/Context;

    return-void
.end method
