.class public final Lcom/tkay/core/common/a/c;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Ljava/lang/String;Lorg/json/JSONObject;I)Lcom/tkay/core/common/f/f;
    .locals 7

    const-string v0, ""

    const/4 v1, 0x0

    .line 27
    :try_start_0
    sget-object v2, Lcom/tkay/core/common/b/f$c;->d:Ljava/lang/String;

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const-string v3, "seatbid"

    if-nez v2, :cond_0

    .line 29
    :try_start_1
    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    return-object v1

    :cond_0
    move-object p1, v2

    .line 37
    :cond_1
    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p1

    const/4 v2, 0x0

    .line 38
    invoke-virtual {p1, v2}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object p1

    .line 40
    new-instance v2, Lcom/tkay/core/common/f/f;

    invoke-direct {v2}, Lcom/tkay/core/common/f/f;-><init>()V

    .line 41
    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->b(Ljava/lang/String;)V

    const-string p0, "oid"

    .line 42
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->j(Ljava/lang/String;)V

    const-string p0, "c_id"

    .line 43
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->k(Ljava/lang/String;)V

    const-string p0, "pkg"

    .line 44
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->w(Ljava/lang/String;)V

    const-string p0, "title"

    .line 45
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->l(Ljava/lang/String;)V

    const-string p0, "desc"

    .line 46
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->m(Ljava/lang/String;)V

    const-string p0, "rating"

    .line 47
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->f(I)V

    const-string p0, "icon_u"

    .line 48
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->n(Ljava/lang/String;)V

    const-string p0, "full_u"

    .line 49
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->p(Ljava/lang/String;)V

    const-string p0, "unit_type"

    .line 50
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->d(I)V

    const-string p0, "tp_logo_u"

    .line 51
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->q(Ljava/lang/String;)V

    const-string p0, "cta"

    .line 52
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->r(Ljava/lang/String;)V

    const-string p0, "video_u"

    .line 53
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->s(Ljava/lang/String;)V

    const-string p0, "video_l"

    .line 54
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    int-to-long v3, p0

    invoke-virtual {v2, v3, v4}, Lcom/tkay/core/common/f/f;->d(J)V

    const-string p0, "video_r"

    .line 55
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->J(Ljava/lang/String;)V

    const-string p0, "ec_u"

    .line 56
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->K(Ljava/lang/String;)V

    const-string p0, "store_u"

    .line 57
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->t(Ljava/lang/String;)V

    const-string p0, "link_type"

    .line 58
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->e(I)V

    const-string p0, "click_u"

    .line 59
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->v(Ljava/lang/String;)V

    const-string p0, "deeplink"

    .line 60
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->u(Ljava/lang/String;)V

    const-string p0, "crt_type"

    const/4 v3, 0x1

    .line 63
    invoke-virtual {p1, p0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->j(I)V

    const-string p0, "img_list"

    .line 64
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->L(Ljava/lang/String;)V

    const-string p0, "banner_xhtml"

    .line 65
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->M(Ljava/lang/String;)V

    const-string p0, "offer_firm_id"

    .line 68
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->c(I)V

    const-string p0, "jump_url"

    .line 69
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->i(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    :try_start_2
    const-string p0, "sdk_resp"

    .line 73
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 74
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_2

    .line 75
    new-instance v4, Lorg/json/JSONObject;

    invoke-direct {v4, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "data"

    .line 76
    invoke-virtual {v4, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    .line 77
    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->a(Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    :cond_2
    :try_start_3
    const-string p0, "app_name"

    .line 84
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->N(Ljava/lang/String;)V

    const-string p0, "publisher"

    .line 85
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->y(Ljava/lang/String;)V

    const-string p0, "app_version"

    .line 86
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->z(Ljava/lang/String;)V

    const-string p0, "privacy"

    .line 87
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->A(Ljava/lang/String;)V

    const-string p0, "permission"

    .line 88
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->B(Ljava/lang/String;)V

    const-string p0, "mtr_ver"

    .line 90
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->h(Ljava/lang/String;)V

    const-string p0, "o_im_cap_sw"

    const/4 v4, 0x2

    .line 94
    invoke-virtual {p1, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->k(I)V

    const-string p0, "o_cl_cap_sw"

    .line 95
    invoke-virtual {p1, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->l(I)V

    const-string p0, "c_im_cap_sw"

    .line 96
    invoke-virtual {p1, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->m(I)V

    const-string p0, "c_cl_cap_sw"

    .line 97
    invoke-virtual {p1, p0, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->n(I)V

    const-string p0, "expire"

    const-wide/16 v5, 0x0

    .line 98
    invoke-virtual {p1, p0, v5, v6}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v5

    invoke-virtual {v2, v5, v6}, Lcom/tkay/core/common/f/f;->a(J)V

    const/16 p0, 0x43

    if-ne p2, p0, :cond_3

    .line 101
    invoke-virtual {v2, v4}, Lcom/tkay/core/common/f/f;->a(I)V

    goto :goto_0

    .line 103
    :cond_3
    invoke-virtual {v2, v3}, Lcom/tkay/core/common/f/f;->a(I)V

    :goto_0
    const-string p0, "ctrl"

    .line 106
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/core/common/f/aa;->c(Ljava/lang/String;)Lcom/tkay/core/common/f/aa;

    move-result-object p0

    .line 107
    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->a(Lcom/tkay/core/common/f/j;)V

    const-string p0, "tk"

    .line 109
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/core/common/f/ab;->a(Ljava/lang/String;)Lcom/tkay/core/common/f/ab;

    move-result-object p0

    .line 110
    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->a(Lcom/tkay/core/common/f/ab;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    .line 113
    :try_start_4
    new-instance p0, Lorg/json/JSONObject;

    const-string p2, "nw_info"

    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-direct {p0, p2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p2, "app_id"

    .line 114
    invoke-virtual {p0, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Lcom/tkay/core/common/f/f;->E(Ljava/lang/String;)V

    const-string p2, "app_key"

    .line 115
    invoke-virtual {p0, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Lcom/tkay/core/common/f/f;->F(Ljava/lang/String;)V

    const-string p2, "unit_id"

    .line 116
    invoke-virtual {p0, p2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->G(Ljava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    :catchall_1
    :try_start_5
    const-string p0, "dsp_id"

    .line 120
    invoke-virtual {p1, p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->H(Ljava/lang/String;)V

    const-string p0, "dsp_oid"

    .line 121
    invoke-virtual {p1, p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->I(Ljava/lang/String;)V

    const-string p0, "fca"

    const/4 p2, -0x1

    .line 122
    invoke-virtual {p1, p0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->h(I)V

    const-string p0, "install_sw"

    .line 123
    invoke-virtual {p1, p0, p2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->i(I)V

    const-string p0, "wv_ctrl"

    .line 126
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->C(Ljava/lang/String;)V

    const-string p0, "adp_type"

    .line 129
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->b(I)V

    const-string p0, "offer_html"

    .line 130
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->e(Ljava/lang/String;)V

    const-string p0, "offer_url"

    .line 131
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->f(Ljava/lang/String;)V

    const-string p0, "wx_username"

    .line 133
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->c(Ljava/lang/String;)V

    const-string p0, "wx_path"

    .line 134
    invoke-virtual {p1, p0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Lcom/tkay/core/common/f/f;->d(Ljava/lang/String;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    return-object v2

    :catchall_2
    return-object v1
.end method
