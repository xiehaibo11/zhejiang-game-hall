.class public final Lcom/tkay/core/common/f/t;
.super Lcom/tkay/core/common/f/j;


# instance fields
.field protected n:I


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 23
    invoke-direct {p0}, Lcom/tkay/core/common/f/j;-><init>()V

    return-void
.end method

.method private P(I)V
    .locals 0

    .line 171
    iput p1, p0, Lcom/tkay/core/common/f/t;->n:I

    return-void
.end method

.method public static c(Ljava/lang/String;)Lcom/tkay/core/common/f/t;
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

    const-string v10, "ap_pasbl"

    const-string v11, "ap_arpt"

    const-string v12, "clua"

    const-string v13, "ipua"

    const-string v14, "sh_ec"

    const-string v15, "int_cl_ti"

    move-object/from16 v16, v0

    const-string v0, "int_cl_sw"

    move-object/from16 v17, v1

    const-string v1, "at_ct_ti"

    move-object/from16 v18, v2

    const-string v2, "at_cl_sw"

    move-object/from16 v19, v3

    .line 29
    new-instance v3, Lcom/tkay/core/common/f/t;

    invoke-direct {v3}, Lcom/tkay/core/common/f/t;-><init>()V

    .line 30
    invoke-static/range {p0 .. p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v20

    if-nez v20, :cond_13

    move-object/from16 v20, v4

    .line 32
    :try_start_0
    new-instance v4, Lorg/json/JSONObject;

    move-object/from16 v21, v5

    move-object/from16 v5, p0

    invoke-direct {v4, v5}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v5, "f_t"

    .line 34
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->q(I)V

    const-string v5, "v_c"

    .line 35
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->r(I)V

    const-string v5, "s_b_t"

    .line 36
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->s(I)V

    const-string v5, "e_c_a"

    .line 37
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->u(I)V

    const-string v5, "v_m"

    .line 38
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->v(I)V

    const-string v5, "s_c_t"

    .line 39
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->w(I)V

    const-string v5, "m_t"

    .line 40
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->l(I)V

    const-string v5, "o_c_t"

    move-object/from16 v22, v6

    .line 41
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v5

    invoke-virtual {v3, v5, v6}, Lcom/tkay/core/common/f/t;->c(J)V

    const-string v5, "ak_cfm"

    .line 43
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->m(I)V

    const-string v5, "ctdown_time"

    .line 45
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v5

    invoke-virtual {v3, v5, v6}, Lcom/tkay/core/common/f/t;->b(J)V

    const-string v5, "sk_able"

    .line 46
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->n(I)V

    const-string v5, "orient"

    .line 47
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->o(I)V

    const-string v5, "size"

    .line 48
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->a(Ljava/lang/String;)V

    const-string v5, "cl_btn"

    .line 49
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->p(I)V

    const-string v5, "ec_r"

    .line 52
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->x(I)V

    const-string v5, "ec_s_t"

    .line 53
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->y(I)V

    const-string v5, "ec_l_t"

    .line 54
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->z(I)V

    const-string v5, "inter_type"

    .line 57
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->b(Ljava/lang/String;)V

    const-string v5, "spl_type"

    .line 60
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    .line 1171
    iput v5, v3, Lcom/tkay/core/common/f/t;->n:I

    const-string v5, "or_t"

    .line 63
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v5

    invoke-virtual {v3, v5, v6}, Lcom/tkay/core/common/f/t;->a(J)V

    const-string v5, "rv_fail_reward"

    .line 64
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->e(I)V

    const-string v5, "cl_sz"

    .line 65
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->f(I)V

    const-string v5, "si_fit"

    .line 66
    invoke-virtual {v4, v5}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v5

    invoke-virtual {v3, v5}, Lcom/tkay/core/common/f/t;->i(I)V

    .line 69
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_0

    .line 70
    invoke-virtual {v4, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/t;->A(I)V

    .line 72
    :cond_0
    invoke-virtual {v4, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 73
    invoke-virtual {v4, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v3, v1}, Lcom/tkay/core/common/f/t;->B(I)V

    .line 75
    :cond_1
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 76
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->C(I)V

    .line 78
    :cond_2
    invoke-virtual {v4, v15}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 79
    invoke-virtual {v4, v15}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->D(I)V

    .line 81
    :cond_3
    invoke-virtual {v4, v14}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 82
    invoke-virtual {v4, v14}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->E(I)V

    .line 86
    :cond_4
    invoke-virtual {v4, v13}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_5

    .line 87
    invoke-virtual {v4, v13}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->c(I)V

    .line 89
    :cond_5
    invoke-virtual {v4, v12}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 90
    invoke-virtual {v4, v12}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->d(I)V

    .line 94
    :cond_6
    invoke-virtual {v4, v11}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 95
    invoke-virtual {v4, v11}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->F(I)V

    .line 98
    :cond_7
    invoke-virtual {v4, v10}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 99
    invoke-virtual {v4, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->G(I)V

    .line 103
    :cond_8
    invoke-virtual {v4, v9}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 104
    invoke-virtual {v4, v9}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->H(I)V

    .line 107
    :cond_9
    invoke-virtual {v4, v8}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_a

    .line 108
    invoke-virtual {v4, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->I(I)V

    .line 111
    :cond_a
    invoke-virtual {v4, v7}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_b

    .line 112
    invoke-virtual {v4, v7}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v0

    invoke-virtual {v3, v0, v1}, Lcom/tkay/core/common/f/t;->d(J)V

    :cond_b
    move-object/from16 v0, v22

    .line 116
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_c

    .line 117
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->J(I)V

    goto :goto_0

    :cond_c
    const v0, 0x36ee80

    .line 119
    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->J(I)V

    :goto_0
    move-object/from16 v0, v21

    .line 121
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x1

    if-eqz v1, :cond_d

    .line 122
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->K(I)V

    goto :goto_1

    .line 124
    :cond_d
    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/t;->K(I)V

    :goto_1
    move-object/from16 v0, v20

    .line 127
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_e

    .line 128
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->g(I)V

    goto :goto_2

    .line 130
    :cond_e
    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/t;->g(I)V

    :goto_2
    move-object/from16 v0, v19

    .line 133
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    const/4 v2, 0x2

    if-eqz v1, :cond_f

    .line 134
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->h(I)V

    goto :goto_3

    .line 136
    :cond_f
    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/t;->h(I)V

    :goto_3
    const-string v0, "shm_t"

    const/4 v1, -0x1

    .line 139
    invoke-virtual {v4, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->L(I)V

    move-object/from16 v0, v18

    .line 142
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_10

    .line 143
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->M(I)V

    goto :goto_4

    :cond_10
    const/16 v0, 0x64

    .line 145
    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->M(I)V

    :goto_4
    move-object/from16 v0, v17

    .line 147
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_11

    .line 148
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->N(I)V

    goto :goto_5

    :cond_11
    const/4 v0, 0x0

    .line 150
    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->N(I)V

    :goto_5
    move-object/from16 v0, v16

    .line 152
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_12

    .line 153
    invoke-virtual {v4, v0}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v3, v0}, Lcom/tkay/core/common/f/t;->O(I)V

    goto :goto_6

    .line 155
    :cond_12
    invoke-virtual {v3, v2}, Lcom/tkay/core/common/f/t;->O(I)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_6

    :catch_0
    move-exception v0

    .line 159
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_13
    :goto_6
    return-object v3
.end method


# virtual methods
.method public final X()I
    .locals 1

    .line 167
    iget v0, p0, Lcom/tkay/core/common/f/t;->n:I

    return v0
.end method
