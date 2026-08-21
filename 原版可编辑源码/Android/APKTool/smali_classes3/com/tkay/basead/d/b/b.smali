.class public final Lcom/tkay/basead/d/b/b;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String; = "sdk_updatetime"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static final a(Lcom/tkay/core/common/f/i;Lorg/json/JSONObject;)Lcom/tkay/core/common/f/y;
    .locals 5

    const/4 v0, 0x0

    .line 27
    :try_start_0
    sget-object v1, Lcom/tkay/core/common/b/f$c;->d:Ljava/lang/String;

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v1

    if-nez v1, :cond_0

    return-object v0

    :cond_0
    const-string v2, "offers"

    .line 33
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v1

    const/4 v2, 0x0

    .line 34
    invoke-virtual {v1, v2}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v1

    .line 37
    new-instance v2, Lcom/tkay/core/common/f/y;

    invoke-direct {v2}, Lcom/tkay/core/common/f/y;-><init>()V

    .line 38
    iget p0, p0, Lcom/tkay/core/common/f/i;->f:I

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->a(I)V

    const-string p0, "oid"

    .line 39
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->j(Ljava/lang/String;)V

    const-string p0, "c_id"

    .line 40
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->k(Ljava/lang/String;)V

    const-string p0, "pkg"

    .line 41
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->w(Ljava/lang/String;)V

    const-string p0, "title"

    .line 42
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->l(Ljava/lang/String;)V

    const-string p0, "desc"

    .line 43
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->m(Ljava/lang/String;)V

    const-string p0, "rating"

    .line 44
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->f(I)V

    const-string p0, "icon_u"

    .line 45
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->n(Ljava/lang/String;)V

    const-string p0, "full_u"

    .line 46
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->p(Ljava/lang/String;)V

    const-string p0, "unit_type"

    .line 47
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->d(I)V

    const-string p0, "tp_logo_u"

    .line 48
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->q(Ljava/lang/String;)V

    const-string p0, "cta"

    .line 49
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->r(Ljava/lang/String;)V

    const-string p0, "video_u"

    .line 50
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->s(Ljava/lang/String;)V

    const-string p0, "video_l"

    .line 51
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    int-to-long v3, p0

    invoke-virtual {v2, v3, v4}, Lcom/tkay/core/common/f/y;->d(J)V

    const-string p0, "video_r"

    .line 52
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->J(Ljava/lang/String;)V

    const-string p0, "ec_u"

    .line 53
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->K(Ljava/lang/String;)V

    const-string p0, "store_u"

    .line 54
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->t(Ljava/lang/String;)V

    const-string p0, "link_type"

    .line 55
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->e(I)V

    const-string p0, "click_u"

    .line 56
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->v(Ljava/lang/String;)V

    const-string p0, "deeplink"

    .line 57
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->u(Ljava/lang/String;)V

    const-string p0, "r_target"

    .line 58
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->g(I)V

    const-string p0, "expire"

    .line 59
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    invoke-virtual {v2, v3, v4}, Lcom/tkay/core/common/f/y;->a(J)V

    const-string p0, "ad_logo_title"

    .line 60
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->x(Ljava/lang/String;)V

    const-string p0, "crt_type"

    const/4 v3, 0x1

    .line 62
    invoke-virtual {v1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->j(I)V

    const-string p0, "img_list"

    .line 63
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->L(Ljava/lang/String;)V

    const-string p0, "banner_xhtml"

    .line 64
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->M(Ljava/lang/String;)V

    const-string p0, "sdk_updatetime"

    .line 65
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide p0

    invoke-virtual {v2, p0, p1}, Lcom/tkay/core/common/f/y;->b(J)V

    const-string p0, "offer_firm_id"

    .line 68
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->c(I)V

    const-string p0, "jump_url"

    .line 69
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->i(Ljava/lang/String;)V

    const-string p0, "app_name"

    .line 73
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->N(Ljava/lang/String;)V

    const-string p0, "publisher"

    .line 74
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->y(Ljava/lang/String;)V

    const-string p0, "app_version"

    .line 75
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->z(Ljava/lang/String;)V

    const-string p0, "privacy"

    .line 76
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->A(Ljava/lang/String;)V

    const-string p0, "permission"

    .line 77
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->B(Ljava/lang/String;)V

    const-string p0, "wv_ctrl"

    .line 80
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->C(Ljava/lang/String;)V

    const-string p0, "ctrl"

    .line 82
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/core/common/f/aa;->c(Ljava/lang/String;)Lcom/tkay/core/common/f/aa;

    move-result-object p0

    .line 83
    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->a(Lcom/tkay/core/common/f/j;)V

    const-string p0, "tk"

    .line 85
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/core/common/f/ab;->a(Ljava/lang/String;)Lcom/tkay/core/common/f/ab;

    move-result-object p0

    .line 86
    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->a(Lcom/tkay/core/common/f/ab;)V

    const-string p0, "adp_type"

    .line 89
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->b(I)V

    const-string p0, "offer_html"

    .line 90
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->e(Ljava/lang/String;)V

    const-string p0, "offer_url"

    .line 91
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->f(Ljava/lang/String;)V

    const-string p0, "wx_username"

    .line 93
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->c(Ljava/lang/String;)V

    const-string p0, "wx_path"

    .line 94
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/y;->d(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v2

    :catchall_0
    return-object v0
.end method
