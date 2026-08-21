.class public final Lcom/tkay/core/common/f/aa;
.super Lcom/tkay/core/common/f/j;


# instance fields
.field private n:I

.field private o:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Lcom/tkay/core/common/f/j;-><init>()V

    return-void
.end method

.method private P(I)V
    .locals 0

    .line 32
    iput p1, p0, Lcom/tkay/core/common/f/aa;->o:I

    return-void
.end method

.method private Q(I)V
    .locals 0

    .line 40
    iput p1, p0, Lcom/tkay/core/common/f/aa;->n:I

    return-void
.end method

.method public static c(Ljava/lang/String;)Lcom/tkay/core/common/f/aa;
    .locals 23

    const-string v0, "video_ctn_type"

    const-string v1, "rsdl_rate"

    const-string v2, "ready_rate"

    const-string v3, "sh_cl_itp"

    const-string v4, "ft_cl_sz"

    const-string v5, "click_nt_sw"

    const-string v6, "click_cache_time"

    const-string v7, "shk_time"

    const-string v8, "shk_strength_and"

    const-string v9, "shk_sw"

    const-string v10, "inter_type"

    const-string v11, "ap_pasbl"

    const-string v12, "ap_arpt"

    const-string v13, "sh_ec"

    const-string v14, "int_cl_ti"

    const-string v15, "int_cl_sw"

    move-object/from16 v16, v0

    const-string v0, "at_ct_ti"

    move-object/from16 v17, v1

    const-string v1, "at_cl_sw"

    move-object/from16 v18, v2

    const-string v2, "s_b_d"

    .line 44
    invoke-static/range {p0 .. p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v19

    if-eqz v19, :cond_0

    const/4 v0, 0x0

    return-object v0

    :cond_0
    move-object/from16 v19, v3

    .line 47
    new-instance v3, Lcom/tkay/core/common/f/aa;

    invoke-direct {v3}, Lcom/tkay/core/common/f/aa;-><init>()V

    .line 48
    invoke-static/range {p0 .. p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v20

    if-nez v20, :cond_21

    move-object/from16 v20, v4

    .line 50
    :try_start_0
    new-instance v4, Lorg/json/JSONObject;

    move-object/from16 v21, v5

    move-object/from16 v5, p0

    invoke-direct {v4, v5}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v5, "f_t"

    .line 52
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/aa;->q(I)V

    const-string v5, "v_c"

    .line 54
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    move-object/from16 v22, v6

    const/4 v6, 0x1

    if-eq v5, v6, :cond_2

    const/4 v6, 0x2

    if-eq v5, v6, :cond_1

    goto :goto_0

    :cond_1
    const/4 v5, 0x1

    goto :goto_0

    :cond_2
    const/4 v5, 0x0

    .line 63
    :goto_0
    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/aa;->r(I)V

    const-string v5, "s_b_t"

    .line 65
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/aa;->s(I)V

    .line 68
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_3

    .line 69
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/aa;->t(I)V

    :cond_3
    const-string v2, "e_c_a"

    .line 73
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const/4 v5, 0x1

    if-eq v2, v5, :cond_6

    const/4 v5, 0x2

    if-eq v2, v5, :cond_5

    const/4 v5, 0x3

    if-eq v2, v5, :cond_4

    goto :goto_1

    :cond_4
    const/4 v2, 0x2

    goto :goto_1

    :cond_5
    const/4 v2, 0x1

    goto :goto_1

    :cond_6
    const/4 v2, 0x0

    .line 85
    :goto_1
    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/aa;->u(I)V

    const-string v2, "ak_cfm"

    .line 88
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const/4 v5, 0x1

    if-eq v2, v5, :cond_8

    const/4 v5, 0x2

    if-eq v2, v5, :cond_7

    goto :goto_2

    :cond_7
    const/4 v2, 0x1

    goto :goto_2

    :cond_8
    const/4 v2, 0x0

    .line 97
    :goto_2
    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/aa;->m(I)V

    const-string v2, "m_t"

    .line 99
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/aa;->l(I)V

    const-string v2, "cm"

    .line 108
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const/4 v5, 0x1

    if-eq v2, v5, :cond_a

    const/4 v5, 0x2

    if-eq v2, v5, :cond_9

    goto :goto_3

    :cond_9
    const/4 v2, 0x1

    goto :goto_3

    :cond_a
    const/4 v2, 0x0

    .line 1040
    :goto_3
    iput v2, v3, Lcom/tkay/core/common/f/aa;->n:I

    const-string v2, "ipua"

    .line 119
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/aa;->c(I)V

    const-string v2, "clua"

    .line 120
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/aa;->d(I)V

    const-string v2, "dp_cm"

    .line 121
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/aa;->k(I)V

    const-string v2, "l_o_num"

    .line 122
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    .line 2032
    iput v2, v3, Lcom/tkay/core/common/f/aa;->o:I

    const-string v2, "ld_t"

    .line 123
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/aa;->j(I)V

    const-string v2, "ec_r"

    .line 126
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/aa;->x(I)V

    const-string v2, "ec_s_t"

    .line 127
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/aa;->y(I)V

    const-string v2, "ec_l_t"

    .line 128
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/aa;->z(I)V

    const-string v2, "or_t"

    .line 131
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v5

    invoke-virtual {v3, v5, v6}, Lcom/tkay/core/common/f/aa;->a(J)V

    const-string v2, "rv_fail_reward"

    .line 132
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/aa;->e(I)V

    const-string v2, "cl_sz"

    .line 133
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/aa;->f(I)V

    const-string v2, "si_fit"

    .line 134
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/aa;->i(I)V

    .line 137
    invoke-virtual {v4, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_b

    .line 138
    invoke-virtual {v4, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v3, v1}, Lcom/tkay/core/common/f/aa;->A(I)V

    .line 140
    :cond_b
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_c

    .line 141
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->B(I)V

    .line 143
    :cond_c
    invoke-virtual {v4, v15}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_d

    .line 144
    invoke-virtual {v4, v15}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->C(I)V

    .line 146
    :cond_d
    invoke-virtual {v4, v14}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_e

    .line 147
    invoke-virtual {v4, v14}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->D(I)V

    .line 149
    :cond_e
    invoke-virtual {v4, v13}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_f

    .line 150
    invoke-virtual {v4, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->E(I)V

    .line 153
    :cond_f
    invoke-virtual {v4, v12}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_10

    .line 154
    invoke-virtual {v4, v12}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->F(I)V

    .line 157
    :cond_10
    invoke-virtual {v4, v11}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_11

    .line 158
    invoke-virtual {v4, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->G(I)V

    .line 162
    :cond_11
    invoke-virtual {v4, v10}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_12

    .line 163
    invoke-virtual {v4, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->b(Ljava/lang/String;)V

    .line 167
    :cond_12
    invoke-virtual {v4, v9}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_13

    .line 168
    invoke-virtual {v4, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->H(I)V

    .line 171
    :cond_13
    invoke-virtual {v4, v8}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_14

    .line 172
    invoke-virtual {v4, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->I(I)V

    .line 175
    :cond_14
    invoke-virtual {v4, v7}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_15

    .line 176
    invoke-virtual {v4, v7}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    invoke-virtual {v3, v0, v1}, Lcom/tkay/core/common/f/aa;->d(J)V

    :cond_15
    move-object/from16 v0, v22

    .line 180
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_16

    .line 181
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->J(I)V

    :cond_16
    move-object/from16 v0, v21

    .line 183
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_17

    .line 184
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->K(I)V

    :cond_17
    move-object/from16 v0, v20

    .line 187
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_18

    .line 188
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->g(I)V

    goto :goto_4

    :cond_18
    const/4 v0, 0x1

    .line 190
    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->g(I)V

    :goto_4
    move-object/from16 v0, v19

    .line 193
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_19

    .line 194
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->h(I)V

    goto :goto_5

    :cond_19
    const/4 v0, 0x2

    .line 196
    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->h(I)V

    :goto_5
    const-string v0, "shm_t"

    const/4 v1, -0x1

    .line 199
    invoke-virtual {v4, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->L(I)V

    move-object/from16 v0, v18

    .line 202
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1a

    .line 203
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->M(I)V

    goto :goto_6

    :cond_1a
    const/16 v0, 0x64

    .line 205
    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->M(I)V

    :goto_6
    move-object/from16 v0, v17

    .line 207
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1b

    .line 208
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->N(I)V

    goto :goto_7

    :cond_1b
    const/4 v0, 0x0

    .line 210
    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->N(I)V

    :goto_7
    move-object/from16 v0, v16

    .line 212
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_1c

    .line 213
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->O(I)V

    goto :goto_8

    :cond_1c
    const/4 v0, 0x2

    .line 215
    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->O(I)V

    :goto_8
    const-string v0, "preload_offer_html"

    .line 218
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1e

    const-string v0, "preload_offer_html"

    .line 219
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1d

    const/4 v0, 0x1

    goto :goto_9

    :cond_1d
    const/4 v0, 0x0

    :goto_9
    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->a(Z)V

    goto :goto_a

    :cond_1e
    const/4 v0, 0x1

    .line 221
    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->a(Z)V

    :goto_a
    const-string v0, "re_monitor"

    .line 223
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_20

    const-string v0, "re_monitor"

    .line 224
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1f

    move v6, v1

    goto :goto_b

    :cond_1f
    const/4 v6, 0x0

    :goto_b
    invoke-virtual {v3, v6}, Lcom/tkay/core/common/f/aa;->b(Z)V

    goto :goto_c

    :cond_20
    const/4 v0, 0x0

    .line 226
    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/aa;->b(Z)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_c

    :catch_0
    move-exception v0

    .line 231
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_21
    :goto_c
    return-object v3
.end method


# virtual methods
.method public final X()I
    .locals 1

    .line 28
    iget v0, p0, Lcom/tkay/core/common/f/aa;->o:I

    return v0
.end method

.method public final Y()I
    .locals 1

    .line 36
    iget v0, p0, Lcom/tkay/core/common/f/aa;->n:I

    return v0
.end method
