.class public final Lcom/mbridge/msdk/foundation/same/net/g/e;
.super Ljava/lang/Object;
.source "CommonRequestParamsForAdd.java"


# static fields
.field private static a:Ljava/lang/String; = ""

.field private static b:Ljava/lang/String; = ""


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static a(Lcom/mbridge/msdk/foundation/same/net/g/d;)V
    .locals 2

    .line 88
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->f:Ljava/lang/String;

    const-string v1, "api_version"

    invoke-virtual {p0, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static a(Lcom/mbridge/msdk/foundation/same/net/g/d;Landroid/content/Context;)V
    .locals 5

    .line 37
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x1

    const-string v2, ""

    if-eqz v0, :cond_1

    .line 38
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->O()I

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "withGP"

    invoke-virtual {p0, v3, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 39
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/v;->r(Landroid/content/Context;)I

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "has_wx"

    invoke-virtual {p0, v3, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 40
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->v()I

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "integrated_wx"

    invoke-virtual {p0, v3, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 41
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->w()I

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "opensdk_ver"

    invoke-virtual {p0, v3, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 42
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->m()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/foundation/tools/v;->g(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "wx_api_ver"

    invoke-virtual {p0, v3, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 43
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    .line 1413
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v0

    const/4 v3, 0x0

    const-string v4, "authority_dnt"

    invoke-virtual {v0, v4, v3}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v1, :cond_0

    const-string v0, "dnt"

    const-string v3, "1"

    .line 44
    invoke-virtual {p0, v0, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 46
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->h:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->f()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v0, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 47
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->u()Ljava/lang/String;

    move-result-object v0

    const-string v3, "emu"

    invoke-virtual {p0, v3, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 50
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v3, "authority_other"

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 51
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->f:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ac;->b()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v0, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 52
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->g:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/ac;->a()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v0, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 53
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/b;->a()I

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "power_rate"

    invoke-virtual {p0, v3, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 54
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/b;->b()I

    move-result v3

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v3, "charging"

    invoke-virtual {p0, v3, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 55
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->d:Ljava/lang/String;

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->J()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v0, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 58
    :cond_2
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->A(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/v;->a(Ljava/lang/String;Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "pkg_source"

    invoke-virtual {p0, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 59
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->o()Lorg/json/JSONObject;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 60
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->o()Lorg/json/JSONObject;

    move-result-object p1

    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "web_env"

    invoke-virtual {p0, v0, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 63
    :cond_3
    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v0, 0x12

    if-le p1, v0, :cond_4

    const-string p1, "http_req"

    const-string v0, "2"

    .line 64
    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2121
    :cond_4
    invoke-static {p0, v1}, Lcom/mbridge/msdk/foundation/same/net/g/e;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Z)V

    .line 2122
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/same/net/g/e;->g(Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    .line 2123
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/same/net/g/e;->e(Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    .line 3074
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object p1

    if-nez p1, :cond_5

    .line 3076
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object p1

    .line 3078
    :cond_5
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->aY()I

    move-result v0

    const-string v3, "gdpr_consent"

    if-ne v0, v1, :cond_6

    .line 3079
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->g()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v3, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 3081
    :cond_6
    invoke-virtual {p1}, Lcom/mbridge/msdk/c/a;->aT()Z

    move-result p1

    if-eqz p1, :cond_7

    .line 3082
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->g()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v3, p1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 2125
    :cond_7
    :goto_0
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/same/net/g/e;->h(Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    return-void
.end method

.method private static a(Lcom/mbridge/msdk/foundation/same/net/g/d;Z)V
    .locals 8

    const-string v0, ""

    .line 169
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    .line 170
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v2

    .line 171
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v3

    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v3

    .line 170
    invoke-virtual {v2, v3}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v2

    if-eqz v2, :cond_8

    .line 175
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->o()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_0

    if-eqz p1, :cond_0

    .line 176
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->o()Ljava/lang/String;

    move-result-object v3

    const-string v4, "a_stid"

    invoke-virtual {p0, v4, v3}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 178
    :cond_0
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    .line 180
    :try_start_0
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->Z()I

    move-result v4

    const/4 v5, 0x1

    if-ne v4, v5, :cond_3

    .line 181
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v6, "authority_imei_mac"

    if-eqz v4, :cond_1

    .line 182
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v4

    invoke-virtual {v4, v6}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_1

    const-string v4, "imei"

    .line 183
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v4, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 186
    :cond_1
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->i(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_2

    .line 187
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v4

    invoke-virtual {v4, v6}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_2

    const-string v4, "mac"

    .line 188
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->i(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v3, v4, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 191
    :cond_2
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    if-eqz v4, :cond_3

    if-eqz p1, :cond_3

    .line 192
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object p1

    invoke-virtual {p1, v6}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_3

    const-string p1, "imsi"

    .line 193
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, p1, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 198
    :cond_3
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->G()I

    move-result p1

    if-ne p1, v5, :cond_4

    .line 199
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_4

    .line 200
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object p1

    const-string v4, "authority_device_id"

    invoke-virtual {p1, v4}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_4

    const-string p1, "oaid"

    .line 201
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, p1, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 206
    :cond_4
    invoke-virtual {v2}, Lcom/mbridge/msdk/c/a;->aa()I

    move-result p1

    if-ne p1, v5, :cond_5

    .line 207
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 208
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object p1

    const-string v2, "authority_android_id"

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_5

    const-string p1, "android_id"

    .line 209
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/v;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 214
    :cond_5
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object p1

    const-string v1, "authority_general_data"

    invoke-virtual {p1, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_6

    const-string p1, "cid"

    .line 215
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->a()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v3, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "dmt"

    .line 216
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->L()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "dmf"

    .line 217
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->K()I

    move-result v0

    invoke-virtual {v3, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "ct"

    .line 218
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->s()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 220
    :cond_6
    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    .line 221
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_8

    .line 222
    sget-object p1, Lcom/mbridge/msdk/foundation/same/net/g/e;->a:Ljava/lang/String;

    invoke-virtual {v3, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_7

    .line 224
    invoke-virtual {v3}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    .line 223
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/t;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    sput-object p1, Lcom/mbridge/msdk/foundation/same/net/g/e;->b:Ljava/lang/String;

    .line 226
    :cond_7
    sget-object p1, Lcom/mbridge/msdk/foundation/same/net/g/e;->b:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_8

    const-string p1, "dvi"

    .line 227
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/e;->b:Ljava/lang/String;

    invoke-virtual {p0, p1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 232
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string p1, "CommonRequestParamsForAdd"

    invoke-static {p1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    :goto_0
    return-void
.end method

.method public static b(Lcom/mbridge/msdk/foundation/same/net/g/d;)V
    .locals 2

    .line 92
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->g:Ljava/lang/String;

    const-string v1, "dyview_type"

    invoke-virtual {p0, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static c(Lcom/mbridge/msdk/foundation/same/net/g/d;)V
    .locals 2

    .line 97
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->P()I

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 100
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->P()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "tun"

    invoke-virtual {p0, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static d(Lcom/mbridge/msdk/foundation/same/net/g/d;)V
    .locals 3

    .line 104
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 105
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->O()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "withGP"

    invoke-virtual {p0, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 106
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->r(Landroid/content/Context;)I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "has_wx"

    invoke-virtual {p0, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 107
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->v()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "integrated_wx"

    invoke-virtual {p0, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 108
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->w()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v2, "opensdk_ver"

    invoke-virtual {p0, v2, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 109
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->m()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/tools/v;->g(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "wx_api_ver"

    invoke-virtual {p0, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 111
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_other"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 112
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->d:Ljava/lang/String;

    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->J()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v0, v1}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    const/4 v0, 0x0

    .line 114
    invoke-static {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/e;->a(Lcom/mbridge/msdk/foundation/same/net/g/d;Z)V

    .line 115
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/same/net/g/e;->g(Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    .line 116
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/same/net/g/e;->e(Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    .line 117
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/same/net/g/e;->h(Lcom/mbridge/msdk/foundation/same/net/g/d;)V

    return-void
.end method

.method public static e(Lcom/mbridge/msdk/foundation/same/net/g/d;)V
    .locals 2

    .line 130
    :try_start_0
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v1, "b"

    if-eqz v0, :cond_0

    .line 131
    :try_start_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    .line 133
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 134
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->t:Ljava/lang/String;

    invoke-virtual {p0, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 136
    :cond_1
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    const-string v1, "c"

    if-eqz v0, :cond_2

    .line 137
    :try_start_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object v0

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/a/a/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    .line 139
    :cond_2
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 140
    sget-object v0, Lcom/mbridge/msdk/foundation/same/a;->u:Ljava/lang/String;

    invoke-virtual {p0, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 143
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    const-string v0, "CommonRequestParamsForAdd"

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    :goto_0
    return-void
.end method

.method public static f(Lcom/mbridge/msdk/foundation/same/net/g/d;)V
    .locals 2

    if-eqz p0, :cond_2

    .line 240
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_general_data"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "model"

    .line 241
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "brand"

    .line 242
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "screen_size"

    .line 243
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "sub_ip"

    .line 244
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "network_type"

    .line 245
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "useragent"

    .line 246
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "ua"

    .line 247
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "language"

    .line 248
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "network_str"

    .line 249
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "mnc"

    .line 250
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "mcc"

    .line 251
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "os_version"

    .line 252
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "gp_version"

    .line 253
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "country_code"

    .line 254
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    .line 257
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_other"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 258
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->f:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    .line 259
    sget-object v0, Lcom/mbridge/msdk/foundation/same/net/g/d;->g:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "power_rate"

    .line 260
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "charging"

    .line 261
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "timezone"

    .line 262
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    .line 265
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a()Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;

    move-result-object v0

    const-string v1, "authority_device_id"

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/controller/authoritycontroller/a;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "gaid"

    .line 266
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "gaid2"

    .line 267
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    const-string v0, "oaid"

    .line 268
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method private static g(Lcom/mbridge/msdk/foundation/same/net/g/d;)V
    .locals 2

    .line 149
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->M()I

    move-result v0

    const/4 v1, -0x1

    if-eq v0, v1, :cond_0

    .line 152
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v0, ""

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "unknown_source"

    invoke-virtual {p0, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method private static h(Lcom/mbridge/msdk/foundation/same/net/g/d;)V
    .locals 2

    .line 157
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->N()Ljava/lang/String;

    move-result-object v0

    .line 158
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "android"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "hm_info"

    .line 159
    invoke-virtual {p0, v1, v0}, Lcom/mbridge/msdk/foundation/same/net/g/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method
