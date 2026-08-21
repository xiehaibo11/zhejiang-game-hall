.class public final Lcom/kwad/sdk/core/f/a/i;
.super Ljava/lang/Object;


# instance fields
.field private mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>(Landroid/content/Context;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/kwad/sdk/core/f/a/i;->mContext:Landroid/content/Context;

    return-void
.end method


# virtual methods
.method public final getOAID()Ljava/lang/String;
    .locals 5

    :try_start_0
    const-string v0, "com.android.id.impl.IdProviderImpl"

    const/4 v1, 0x0

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {v0, v2}, Lcom/kwad/sdk/utils/s;->g(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    const-string v2, "getOAID"

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    iget-object v4, p0, Lcom/kwad/sdk/core/f/a/i;->mContext:Landroid/content/Context;

    aput-object v4, v3, v1

    invoke-static {v0, v2, v3}, Lcom/kwad/sdk/utils/s;->f(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :try_start_1
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "getOAID oaid:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_0
    const-string v0, ""

    :catch_1
    :goto_0
    return-object v0
.end method
