.class public final Lcom/kwad/sdk/utils/au;
.super Ljava/lang/Object;


# static fields
.field public static aJe:Ljava/lang/String; = ""


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static Hl()Lcom/kwad/sdk/k/a/b;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/k/a/b;->Hl()Lcom/kwad/sdk/k/a/b;

    move-result-object v0

    return-object v0
.end method

.method public static Hm()Lcom/kwad/sdk/k/a/f;
    .locals 1

    invoke-static {}, Lcom/kwad/sdk/k/a/f;->Hm()Lcom/kwad/sdk/k/a/f;

    move-result-object v0

    return-object v0
.end method

.method private static Jk()Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/k/a/f;->Hm()Lcom/kwad/sdk/k/a/f;

    move-result-object v0

    if-eqz v0, :cond_0

    iget v0, v0, Lcom/kwad/sdk/k/a/f;->aGx:I

    goto :goto_0

    :cond_0
    const/4 v0, -0x1

    :goto_0
    const/4 v1, 0x0

    if-ltz v0, :cond_1

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    const-class v2, Lcom/kwad/sdk/service/a/f;

    invoke-static {v2}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/kwad/sdk/service/a/f;

    invoke-interface {v2}, Lcom/kwad/sdk/service/a/f;->xu()Z

    move-result v2

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    if-nez v2, :cond_2

    const/4 v2, 0x1

    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_2
    const/4 v2, 0x2

    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private static Jl()Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/kwad/sdk/k/a/b;->Hl()Lcom/kwad/sdk/k/a/b;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/kwad/sdk/k/a/b;->toJson()Lorg/json/JSONObject;

    move-result-object v0

    invoke-static {v1, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/f;->xw()Z

    move-result v0

    const-string v2, ""

    if-nez v0, :cond_1

    const/4 v0, 0x1

    invoke-static {v1, v2, v0}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_1
    const/4 v0, 0x2

    invoke-static {v1, v2, v0}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static Jm()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/k/a/e;",
            ">;"
        }
    .end annotation

    invoke-static {}, Lcom/kwad/sdk/utils/ax;->Jm()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method private static Jn()Ljava/lang/String;
    .locals 2

    const/4 v0, 0x0

    const-string v1, "1"

    invoke-static {v0, v1, v0}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private static Jo()Ljava/lang/String;
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/utils/au;->getSdkVersion()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v1, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private static Jp()Ljava/lang/String;
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/utils/au;->getAppId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    invoke-static {v1, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private static bF(Z)Ljava/lang/String;
    .locals 5

    invoke-static {p0}, Lcom/kwad/sdk/utils/be;->bQ(Z)Ljava/lang/String;

    move-result-object v0

    if-nez p0, :cond_1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    return-object v0

    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez p0, :cond_3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Je()Z

    move-result p0

    if-eqz p0, :cond_2

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jf()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_2

    goto :goto_0

    :cond_2
    move v1, v2

    :goto_0
    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_3
    invoke-static {}, Lcom/kwad/sdk/utils/at;->Je()Z

    move-result p0

    if-nez p0, :cond_5

    const-class p0, Lcom/kwad/sdk/service/a/f;

    invoke-static {p0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/service/a/f;

    const-wide/16 v3, 0x800

    invoke-interface {p0, v3, v4}, Lcom/kwad/sdk/service/a/f;->R(J)Z

    move-result p0

    if-eqz p0, :cond_4

    goto :goto_1

    :cond_4
    const/4 p0, 0x5

    invoke-static {v2, v0, p0}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_5
    :goto_1
    invoke-static {v2, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static bG(Z)Ljava/lang/String;
    .locals 3

    sget-object v0, Lcom/kwad/framework/a/a;->ml:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/utils/bf;->getDeviceId()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/utils/bf;->getDeviceId()Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/utils/be;->getDeviceId()Ljava/lang/String;

    move-result-object v0

    if-nez p0, :cond_2

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_1

    const-string p0, ""

    return-object p0

    :cond_1
    return-object v0

    :cond_2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez p0, :cond_4

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result p0

    if-eqz p0, :cond_3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jb()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_3

    goto :goto_0

    :cond_3
    move v1, v2

    :goto_0
    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_4
    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result p0

    if-nez p0, :cond_6

    invoke-static {}, Lcom/kwad/sdk/utils/o;->HX()Z

    move-result p0

    if-nez p0, :cond_5

    goto :goto_1

    :cond_5
    const/4 p0, 0x5

    invoke-static {v2, v0, p0}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_6
    :goto_1
    invoke-static {v2, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static bH(Z)Ljava/lang/String;
    .locals 4

    invoke-static {}, Lcom/kwad/sdk/utils/be;->JW()Ljava/lang/String;

    move-result-object v0

    if-nez p0, :cond_1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    return-object v0

    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    const/4 v1, 0x0

    if-nez p0, :cond_2

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jg()Z

    move-result p0

    invoke-static {p0, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jg()Z

    move-result p0

    if-nez p0, :cond_4

    const-class p0, Lcom/kwad/sdk/service/a/f;

    invoke-static {p0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/kwad/sdk/service/a/f;

    const-wide/16 v2, 0x8

    invoke-interface {p0, v2, v3}, Lcom/kwad/sdk/service/a/f;->R(J)Z

    move-result p0

    if-eqz p0, :cond_3

    goto :goto_0

    :cond_3
    const/4 p0, 0x2

    invoke-static {v1, v0, p0}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_4
    :goto_0
    const/4 p0, 0x1

    invoke-static {v1, v0, p0}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic bI(Z)Ljava/lang/String;
    .locals 0

    const/4 p0, 0x1

    invoke-static {p0}, Lcom/kwad/sdk/utils/au;->bF(Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic bJ(Z)Ljava/lang/String;
    .locals 0

    invoke-static {}, Lcom/kwad/sdk/utils/au;->Jk()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic bK(Z)Ljava/lang/String;
    .locals 0

    invoke-static {}, Lcom/kwad/sdk/utils/au;->Jl()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic bL(Z)Ljava/lang/String;
    .locals 0

    const/4 p0, 0x1

    invoke-static {p0}, Lcom/kwad/sdk/utils/au;->bG(Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic bM(Z)Ljava/lang/String;
    .locals 0

    const/4 p0, 0x1

    invoke-static {p0}, Lcom/kwad/sdk/utils/au;->bH(Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic bN(Z)Ljava/lang/String;
    .locals 0

    invoke-static {}, Lcom/kwad/sdk/utils/au;->Jn()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic bO(Z)Ljava/lang/String;
    .locals 0

    invoke-static {}, Lcom/kwad/sdk/utils/au;->Jo()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic bP(Z)Ljava/lang/String;
    .locals 0

    invoke-static {}, Lcom/kwad/sdk/utils/au;->Jp()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static bU(Landroid/content/Context;)Landroid/location/Location;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/r;->bU(Landroid/content/Context;)Landroid/location/Location;

    move-result-object p0

    return-object p0
.end method

.method private static c(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 4

    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/be;->u(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object v0

    if-nez p1, :cond_1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    return-object v0

    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez p1, :cond_3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result p0

    if-eqz p0, :cond_2

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IZ()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_2

    goto :goto_0

    :cond_2
    move v1, v2

    :goto_0
    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_3
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1d

    if-lt p1, v3, :cond_4

    const/4 p0, 0x4

    invoke-static {v2, v0, p0}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_4
    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result p1

    if-nez p1, :cond_7

    invoke-static {}, Lcom/kwad/sdk/utils/o;->Ic()Z

    move-result p1

    if-nez p1, :cond_5

    goto :goto_1

    :cond_5
    invoke-static {p0}, Lcom/kwad/sdk/utils/SystemUtil;->cX(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_6

    const/4 v1, 0x3

    :cond_6
    invoke-static {v2, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_7
    :goto_1
    invoke-static {v2, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cA(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/au;->i(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cB(Landroid/content/Context;)I
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/be;->de(Landroid/content/Context;)I

    move-result p0

    return p0
.end method

.method private static cC(Landroid/content/Context;)Ljava/lang/String;
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/utils/be;->de(Landroid/content/Context;)I

    move-result p0

    const/4 v0, 0x0

    if-lez p0, :cond_0

    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0, v0}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x17

    invoke-static {p0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object p0

    if-ge v1, v2, :cond_1

    const/4 v1, 0x1

    invoke-static {v0, p0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    const/4 v1, 0x3

    invoke-static {v0, p0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cD(Landroid/content/Context;)I
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/be;->df(Landroid/content/Context;)I

    move-result p0

    return p0
.end method

.method private static cE(Landroid/content/Context;)Ljava/lang/String;
    .locals 6

    const/16 v0, 0xf

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/au;->m(Landroid/content/Context;I)Ljava/util/List;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v2

    if-lez v2, :cond_0

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jg()Z

    move-result p0

    invoke-static {v0}, Lcom/kwad/sdk/utils/t;->I(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v0

    invoke-static {p0, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_0
    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jg()Z

    move-result v0

    const/4 v2, 0x1

    const-string v3, ""

    if-nez v0, :cond_3

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    const-wide/16 v4, 0x20

    invoke-interface {v0, v4, v5}, Lcom/kwad/sdk/service/a/f;->R(J)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_1

    :cond_1
    invoke-static {p0}, Lcom/kwad/sdk/utils/bq;->dm(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_2

    goto :goto_0

    :cond_2
    const/4 v2, 0x3

    :goto_0
    invoke-static {v1, v3, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_3
    :goto_1
    invoke-static {v1, v3, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static cF(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/utils/InstalledAppInfoManager;->bV(Landroid/content/Context;)Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v1

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-lez v1, :cond_1

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Ji()Z

    move-result p0

    if-eqz p0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jj()Ljava/util/List;

    move-result-object p0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    move v2, v3

    :goto_0
    invoke-static {v0}, Lcom/kwad/sdk/utils/InstalledAppInfoManager;->f(Ljava/util/Map;)Lorg/json/JSONArray;

    move-result-object p0

    invoke-static {v2, p0, v3}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/utils/at;->Ji()Z

    move-result v0

    const-string v1, ""

    if-nez v0, :cond_4

    invoke-static {}, Lcom/kwad/sdk/utils/o;->Ia()Z

    move-result v0

    if-nez v0, :cond_2

    goto :goto_1

    :cond_2
    invoke-static {p0}, Lcom/kwad/sdk/utils/be;->dl(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_3

    const/4 v2, 0x3

    :cond_3
    invoke-static {v3, v1, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_4
    :goto_1
    invoke-static {v3, v1, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static cG(Landroid/content/Context;)Ljava/lang/String;
    .locals 6

    invoke-static {p0}, Lcom/kwad/sdk/utils/r;->bU(Landroid/content/Context;)Landroid/location/Location;

    move-result-object v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    new-instance p0, Ljava/util/HashMap;

    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    invoke-virtual {v0}, Landroid/location/Location;->getLatitude()D

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v3

    const-string v4, "latitude"

    invoke-virtual {p0, v4, v3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {v0}, Landroid/location/Location;->getLongitude()D

    move-result-wide v3

    invoke-static {v3, v4}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v0

    const-string v3, "longitude"

    invoke-virtual {p0, v3, v0}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IW()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IX()Landroid/location/Location;

    move-result-object v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    invoke-static {p0}, Lcom/kwad/sdk/utils/t;->parseMap2JSON(Ljava/util/Map;)Lorg/json/JSONObject;

    move-result-object p0

    invoke-static {v1, p0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_1
    invoke-static {}, Lcom/kwad/sdk/utils/at;->IW()Z

    move-result v0

    const-string v3, ""

    if-nez v0, :cond_5

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    const-wide/16 v4, 0x40

    invoke-interface {v0, v4, v5}, Lcom/kwad/sdk/service/a/f;->R(J)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_2

    :cond_2
    const-string v0, "android.permission.ACCESS_FINE_LOCATION"

    invoke-static {p0, v0}, Landroid/support/v4/content/ContextCompat;->checkSelfPermission(Landroid/content/Context;Ljava/lang/String;)I

    move-result p0

    if-nez p0, :cond_3

    move p0, v1

    goto :goto_1

    :cond_3
    move p0, v2

    :goto_1
    if-eqz p0, :cond_4

    const/4 v1, 0x3

    :cond_4
    invoke-static {v2, v3, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_5
    :goto_2
    invoke-static {v2, v3, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static cH(Landroid/content/Context;)Lcom/kwad/sdk/f/c;
    .locals 1

    new-instance v0, Lcom/kwad/sdk/utils/au$1;

    invoke-direct {v0, p0}, Lcom/kwad/sdk/utils/au$1;-><init>(Landroid/content/Context;)V

    return-object v0
.end method

.method public static cu(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/au;->c(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cv(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/au;->d(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cw(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/au;->e(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cx(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/au;->f(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cy(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/au;->g(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static cz(Landroid/content/Context;)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    invoke-static {p0, v0}, Lcom/kwad/sdk/utils/au;->h(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static d(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/utils/be;->cv(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    if-nez p1, :cond_1

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    const-string p0, ""

    :cond_0
    return-object p0

    :cond_1
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const/4 v0, 0x1

    const/4 v1, 0x0

    if-nez p1, :cond_3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result p1

    if-eqz p1, :cond_2

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jb()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    goto :goto_0

    :cond_2
    move v0, v1

    :goto_0
    invoke-static {v0, p0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_3
    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result p1

    if-nez p1, :cond_5

    invoke-static {}, Lcom/kwad/sdk/utils/o;->HX()Z

    move-result p1

    if-nez p1, :cond_4

    goto :goto_1

    :cond_4
    const/4 p1, 0x5

    invoke-static {v1, p0, p1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_5
    :goto_1
    invoke-static {v1, p0, v0}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static e(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/utils/be;->dj(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    if-nez p1, :cond_1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    return-object v0

    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-nez p1, :cond_3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jc()Z

    move-result p0

    if-eqz p0, :cond_2

    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jd()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_2

    goto :goto_0

    :cond_2
    move v1, v2

    :goto_0
    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p0

    invoke-static {v1, p0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_3
    invoke-static {}, Lcom/kwad/sdk/utils/at;->Jc()Z

    move-result p1

    if-nez p1, :cond_6

    invoke-static {}, Lcom/kwad/sdk/utils/o;->HY()Z

    move-result p1

    if-nez p1, :cond_4

    goto :goto_1

    :cond_4
    const-string p1, "android.permission.ACCESS_WIFI_STATE"

    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/al;->ao(Landroid/content/Context;Ljava/lang/String;)I

    move-result p0

    if-nez p0, :cond_5

    const/4 v1, 0x3

    :cond_5
    invoke-static {v2, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_6
    :goto_1
    invoke-static {v2, v0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static f(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/utils/be;->dd(Landroid/content/Context;)[Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    array-length v2, v0

    if-lez v2, :cond_0

    aget-object v0, v0, v1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-nez p1, :cond_2

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_1

    const-string p0, ""

    return-object p0

    :cond_1
    return-object v0

    :cond_2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const/4 v2, 0x1

    if-nez p1, :cond_4

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result p0

    if-eqz p0, :cond_3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IZ()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_3

    goto :goto_1

    :cond_3
    move v2, v1

    :goto_1
    invoke-static {v2, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_4
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1d

    if-lt p1, v3, :cond_5

    const/4 p0, 0x4

    invoke-static {v1, v0, p0}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_5
    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result p1

    if-nez p1, :cond_8

    invoke-static {}, Lcom/kwad/sdk/utils/o;->Ic()Z

    move-result p1

    if-nez p1, :cond_6

    goto :goto_2

    :cond_6
    invoke-static {p0}, Lcom/kwad/sdk/utils/SystemUtil;->cX(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_7

    const/4 v2, 0x3

    :cond_7
    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_8
    :goto_2
    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static g(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 4

    invoke-static {p0}, Lcom/kwad/sdk/utils/be;->dd(Landroid/content/Context;)[Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    array-length v2, v0

    if-le v2, v1, :cond_0

    aget-object v0, v0, v1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    if-nez p1, :cond_2

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_1

    const-string p0, ""

    return-object p0

    :cond_1
    return-object v0

    :cond_2
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const/4 v2, 0x0

    if-nez p1, :cond_4

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result p0

    if-eqz p0, :cond_3

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IZ()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-nez p0, :cond_3

    goto :goto_1

    :cond_3
    move v1, v2

    :goto_1
    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_4
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x1d

    if-lt p1, v3, :cond_5

    const/4 p0, 0x4

    invoke-static {v2, v0, p0}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_5
    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result p1

    if-nez p1, :cond_8

    invoke-static {}, Lcom/kwad/sdk/utils/o;->Ic()Z

    move-result p1

    if-nez p1, :cond_6

    goto :goto_2

    :cond_6
    invoke-static {p0}, Lcom/kwad/sdk/utils/SystemUtil;->cX(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_7

    const/4 v1, 0x3

    :cond_7
    invoke-static {v2, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_8
    :goto_2
    invoke-static {v2, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static getAppId()Ljava/lang/String;
    .locals 1

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/f;->getAppId()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getDeviceId()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/kwad/sdk/utils/au;->bG(Z)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getOaid()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x0

    invoke-static {v0}, Lcom/kwad/sdk/utils/au;->bF(Z)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method private static getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "3.3.42"

    return-object v0
.end method

.method private static h(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/utils/be;->cz(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    if-nez p1, :cond_1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    return-object v0

    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const/4 v1, 0x0

    if-nez p1, :cond_2

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result p0

    invoke-static {p0, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1d

    if-lt p1, v2, :cond_3

    const/4 p0, 0x4

    invoke-static {v1, v0, p0}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_3
    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result p1

    const/4 v2, 0x1

    if-nez p1, :cond_6

    invoke-static {}, Lcom/kwad/sdk/utils/o;->Id()Z

    move-result p1

    if-nez p1, :cond_4

    goto :goto_0

    :cond_4
    invoke-static {p0}, Lcom/kwad/sdk/utils/SystemUtil;->cX(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_5

    const/4 v2, 0x3

    :cond_5
    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_6
    :goto_0
    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static i(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/utils/be;->dg(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    if-nez p1, :cond_1

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    return-object v0

    :cond_1
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    const/4 v1, 0x0

    if-nez p1, :cond_2

    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result p0

    invoke-static {p0, v0, v1}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_2
    invoke-static {}, Lcom/kwad/sdk/utils/at;->IY()Z

    move-result p1

    const/4 v2, 0x1

    if-nez p1, :cond_5

    invoke-static {}, Lcom/kwad/sdk/utils/o;->Ie()Z

    move-result p1

    if-nez p1, :cond_3

    goto :goto_0

    :cond_3
    invoke-static {p0}, Lcom/kwad/sdk/utils/SystemUtil;->cX(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_4

    const/4 v2, 0x3

    :cond_4
    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0

    :cond_5
    :goto_0
    invoke-static {v1, v0, v2}, Lcom/kwad/sdk/f/b;->a(ZLjava/lang/Object;I)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static init(Landroid/content/Context;)V
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/au;->cH(Landroid/content/Context;)Lcom/kwad/sdk/f/c;

    move-result-object p0

    invoke-static {p0}, Lcom/kwad/sdk/f/b;->a(Lcom/kwad/sdk/f/c;)V

    return-void
.end method

.method static synthetic j(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x1

    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/au;->c(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic k(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x1

    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/au;->d(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic l(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x1

    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/au;->e(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic m(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x1

    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/au;->f(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static m(Landroid/content/Context;I)Ljava/util/List;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "I)",
            "Ljava/util/List<",
            "Lcom/kwad/sdk/utils/bq$a;",
            ">;"
        }
    .end annotation

    const/16 p1, 0xf

    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/bq;->m(Landroid/content/Context;I)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method static synthetic n(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x1

    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/au;->g(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic o(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x1

    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/au;->h(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic p(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 0

    const/4 p1, 0x1

    invoke-static {p0, p1}, Lcom/kwad/sdk/utils/au;->i(Landroid/content/Context;Z)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic q(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/au;->cC(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic r(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/au;->cE(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic s(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/au;->cG(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method static synthetic t(Landroid/content/Context;Z)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/kwad/sdk/utils/au;->cF(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method
