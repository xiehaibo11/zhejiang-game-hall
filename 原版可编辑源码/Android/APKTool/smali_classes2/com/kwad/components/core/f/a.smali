.class public final Lcom/kwad/components/core/f/a;
.super Lcom/kwad/sdk/components/d;

# interfaces
.implements Lcom/kwad/sdk/components/f;


# instance fields
.field private Kj:Ljava/lang/String;

.field private Kk:J

.field private Kl:Ljava/lang/String;

.field private mContext:Landroid/content/Context;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/components/d;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/f/a;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/core/f/a;->nP()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/f/a;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/kwad/components/core/f/a;->ao(Ljava/lang/String;)V

    return-void
.end method

.method private ab(Landroid/content/Context;)V
    .locals 3

    const-string v0, "EncryptComponentsImpl"

    const-string v1, "initGId"

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->i(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x0

    :try_start_0
    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result v1

    if-eqz v1, :cond_0

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v2, "64"

    invoke-virtual {v1, v2, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    invoke-static {v1}, Lcom/yxcorp/kuaishou/addfp/KWEGIDDFP;->handlePolicy(Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    :cond_0
    :goto_0
    invoke-static {}, Lcom/yxcorp/kuaishou/addfp/KWEGIDDFP;->instance()Lcom/yxcorp/kuaishou/addfp/KWEGIDDFP;

    move-result-object v1

    new-instance v2, Lcom/kwad/components/core/f/a$1;

    invoke-direct {v2, p0}, Lcom/kwad/components/core/f/a$1;-><init>(Lcom/kwad/components/core/f/a;)V

    invoke-virtual {v1, p1, v0, v2}, Lcom/yxcorp/kuaishou/addfp/KWEGIDDFP;->getEGidByCallback(Landroid/content/Context;ZLcom/yxcorp/kuaishou/addfp/ResponseDfpCallback;)V

    return-void
.end method

.method private ao(Ljava/lang/String;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    if-eqz v0, :cond_1

    invoke-static {p1}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/core/f/a;->nU()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/kwad/sdk/utils/bc;->isEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    iput-object p1, p0, Lcom/kwad/components/core/f/a;->Kl:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    invoke-static {v0, p1}, Lcom/kwad/sdk/utils/y;->ac(Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private nP()V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/y;->cb(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JJ()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/y;->U(Landroid/content/Context;Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-static {v0, v1}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, ""

    iput-object v0, p0, Lcom/kwad/components/core/f/a;->Kj:Ljava/lang/String;

    const-wide/16 v2, 0x0

    iput-wide v2, p0, Lcom/kwad/components/core/f/a;->Kk:J

    iput-object v0, p0, Lcom/kwad/components/core/f/a;->Kl:Ljava/lang/String;

    iget-object v2, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    invoke-static {v2, v0}, Lcom/kwad/sdk/utils/y;->T(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    iget-wide v2, p0, Lcom/kwad/components/core/f/a;->Kk:J

    invoke-static {v0, v2, v3}, Lcom/kwad/sdk/utils/y;->d(Landroid/content/Context;J)V

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    iget-object v2, p0, Lcom/kwad/components/core/f/a;->Kl:Ljava/lang/String;

    invoke-static {v0, v2}, Lcom/kwad/sdk/utils/y;->ac(Landroid/content/Context;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/y;->U(Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method private nS()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->Kj:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/y;->bY(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/f/a;->Kj:Ljava/lang/String;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/f/a;->Kj:Ljava/lang/String;

    return-object v0
.end method

.method private nT()J
    .locals 4

    iget-wide v0, p0, Lcom/kwad/components/core/f/a;->Kk:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/y;->bZ(Landroid/content/Context;)J

    move-result-wide v0

    iput-wide v0, p0, Lcom/kwad/components/core/f/a;->Kk:J

    :cond_0
    iget-wide v0, p0, Lcom/kwad/components/core/f/a;->Kk:J

    return-wide v0
.end method

.method private nU()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->Kl:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    invoke-static {v0}, Lcom/kwad/sdk/utils/y;->ce(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/kwad/components/core/f/a;->Kl:Ljava/lang/String;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/f/a;->Kl:Ljava/lang/String;

    return-object v0
.end method


# virtual methods
.method public final ap(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    if-eqz v0, :cond_1

    invoke-static {p1}, Lcom/kwad/sdk/utils/bc;->isNullString(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/core/f/a;->nS()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/kwad/sdk/utils/bc;->isEquals(Ljava/lang/String;Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    :try_start_0
    iput-object p1, p0, Lcom/kwad/components/core/f/a;->Kj:Ljava/lang/String;

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    invoke-static {v0, p1}, Lcom/kwad/sdk/utils/y;->T(Landroid/content/Context;Ljava/lang/String;)V

    invoke-static {}, Lcom/yxcorp/kuaishou/addfp/KWEGIDDFP;->instance()Lcom/yxcorp/kuaishou/addfp/KWEGIDDFP;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    invoke-virtual {v0, v1, p1}, Lcom/yxcorp/kuaishou/addfp/KWEGIDDFP;->setEgid(Landroid/content/Context;Ljava/lang/String;)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "setEGid error : "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "EncryptComponentsImpl"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final getComponentsType()Ljava/lang/Class;
    .locals 1

    const-class v0, Lcom/kwad/sdk/components/f;

    return-object v0
.end method

.method public final init(Landroid/content/Context;)V
    .locals 2

    :try_start_0
    iput-object p1, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    invoke-direct {p0, p1}, Lcom/kwad/components/core/f/a;->ab(Landroid/content/Context;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "initGId error : "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "EncryptComponentsImpl"

    invoke-static {v0, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final nQ()Ljava/lang/String;
    .locals 4

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zs()Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-direct {p0}, Lcom/kwad/components/core/f/a;->nT()J

    move-result-wide v2

    cmp-long v0, v0, v2

    if-gez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/core/f/a;->nS()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, ""

    return-object v0

    :cond_1
    :goto_0
    invoke-direct {p0}, Lcom/kwad/components/core/f/a;->nU()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final nR()Lcom/kwad/sdk/core/a/f;
    .locals 1

    new-instance v0, Lcom/kwad/sdk/core/a/a;

    invoke-direct {v0}, Lcom/kwad/sdk/core/a/a;-><init>()V

    return-object v0
.end method

.method public final priority()I
    .locals 1

    const/16 v0, -0xc8

    return v0
.end method

.method public final t(J)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    if-eqz v0, :cond_1

    const-wide/16 v0, 0x0

    cmp-long v0, p1, v0

    if-lez v0, :cond_1

    invoke-direct {p0}, Lcom/kwad/components/core/f/a;->nT()J

    move-result-wide v0

    cmp-long v0, p1, v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    iput-wide p1, p0, Lcom/kwad/components/core/f/a;->Kk:J

    iget-object v0, p0, Lcom/kwad/components/core/f/a;->mContext:Landroid/content/Context;

    invoke-static {v0, p1, p2}, Lcom/kwad/sdk/utils/y;->d(Landroid/content/Context;J)V

    :cond_1
    :goto_0
    return-void
.end method
