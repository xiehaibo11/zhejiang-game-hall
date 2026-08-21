.class public Lcom/cmic/gen/sdk/auth/a;
.super Ljava/lang/Object;
.source "AuthnBusiness.java"


# static fields
.field private static c:Lcom/cmic/gen/sdk/auth/a;


# instance fields
.field private final a:Lcom/cmic/gen/sdk/c/c/a;

.field private final b:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 37
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 38
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/cmic/gen/sdk/auth/a;->b:Landroid/content/Context;

    .line 39
    invoke-static {}, Lcom/cmic/gen/sdk/c/c/a;->a()Lcom/cmic/gen/sdk/c/c/a;

    move-result-object p1

    iput-object p1, p0, Lcom/cmic/gen/sdk/auth/a;->a:Lcom/cmic/gen/sdk/c/c/a;

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/cmic/gen/sdk/auth/a;
    .locals 2

    .line 49
    sget-object v0, Lcom/cmic/gen/sdk/auth/a;->c:Lcom/cmic/gen/sdk/auth/a;

    if-nez v0, :cond_1

    .line 50
    const-class v0, Lcom/cmic/gen/sdk/auth/a;

    monitor-enter v0

    .line 51
    :try_start_0
    sget-object v1, Lcom/cmic/gen/sdk/auth/a;->c:Lcom/cmic/gen/sdk/auth/a;

    if-nez v1, :cond_0

    .line 52
    new-instance v1, Lcom/cmic/gen/sdk/auth/a;

    invoke-direct {v1, p0}, Lcom/cmic/gen/sdk/auth/a;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/cmic/gen/sdk/auth/a;->c:Lcom/cmic/gen/sdk/auth/a;

    .line 54
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 56
    :cond_1
    :goto_0
    sget-object p0, Lcom/cmic/gen/sdk/auth/a;->c:Lcom/cmic/gen/sdk/auth/a;

    return-object p0
.end method

.method private a(Lcom/cmic/gen/sdk/a;)V
    .locals 3

    .line 110
    iget-object v0, p0, Lcom/cmic/gen/sdk/auth/a;->b:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    .line 111
    iget-object v1, p0, Lcom/cmic/gen/sdk/auth/a;->b:Landroid/content/Context;

    invoke-static {v1, v0}, Lcom/cmic/gen/sdk/e/l;->a(Landroid/content/Context;Ljava/lang/String;)[B

    move-result-object v1

    .line 112
    invoke-static {v1}, Lcom/cmic/gen/sdk/e/d;->a([B)Ljava/lang/String;

    move-result-object v1

    const-string v2, "apppackage"

    .line 113
    invoke-virtual {p1, v2, v0}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "appsign"

    .line 114
    invoke-virtual {p1, v0, v1}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/auth/b;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 20

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    move-object/from16 v3, p3

    move-object/from16 v4, p4

    move-object/from16 v0, p5

    const-string v5, "openId"

    const-string v6, "phonescrip"

    const-string v7, "securityphone"

    const-string v8, "103000"

    .line 138
    invoke-virtual {v8, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v8

    const-string v9, "true"

    const/4 v10, 0x3

    const-string v11, "logintype"

    if-eqz v8, :cond_6

    const-string v8, "resultdata"

    .line 140
    invoke-virtual {v0, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 141
    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    if-eqz v12, :cond_0

    .line 142
    invoke-virtual/range {p5 .. p5}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    .line 144
    :cond_0
    sget-object v0, Lcom/cmic/gen/sdk/b$a;->a:Ljava/lang/String;

    invoke-virtual {v1, v0}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;)[B

    move-result-object v0

    sget-object v12, Lcom/cmic/gen/sdk/b$a;->b:Ljava/lang/String;

    invoke-virtual {v1, v12}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;)[B

    move-result-object v12

    invoke-static {v0, v8, v12}, Lcom/cmic/gen/sdk/e/a;->b([BLjava/lang/String;[B)Ljava/lang/String;

    move-result-object v0

    :goto_0
    const/4 v8, 0x0

    .line 151
    :try_start_0
    new-instance v12, Lorg/json/JSONObject;

    invoke-direct {v12, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_3

    .line 155
    :try_start_1
    invoke-virtual {v12, v6}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_2

    .line 156
    :try_start_2
    invoke-virtual {v12, v7}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v14
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1

    .line 157
    :try_start_3
    invoke-virtual {v12, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 158
    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    const-string v0, "pcid"

    .line 159
    invoke-virtual {v12, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    move-object v8, v0

    .line 162
    :cond_1
    invoke-static {v7, v14}, Lcom/cmic/gen/sdk/e/k;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_3

    :catch_0
    move-exception v0

    move-object/from16 v19, v12

    move-object v12, v0

    move-object v0, v8

    move-object/from16 v8, v19

    goto :goto_2

    :catch_1
    move-exception v0

    move-object v14, v8

    goto :goto_1

    :catch_2
    move-exception v0

    move-object v13, v8

    move-object v14, v13

    :goto_1
    move-object v8, v12

    move-object v12, v0

    move-object v0, v14

    goto :goto_2

    :catch_3
    move-exception v0

    move-object v12, v0

    move-object v0, v8

    move-object v13, v0

    move-object v14, v13

    .line 164
    :goto_2
    invoke-virtual {v12}, Lorg/json/JSONException;->printStackTrace()V

    move-object v12, v8

    move-object v8, v0

    :goto_3
    move-object v0, v14

    move-object v14, v13

    .line 167
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    const-string v15, "securityPhone  = "

    invoke-virtual {v13, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v13

    const-string v15, "AuthnBusiness"

    invoke-static {v15, v13}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 168
    invoke-virtual {v1, v5, v8}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 169
    invoke-virtual {v1, v6, v14}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 170
    invoke-virtual {v1, v7, v0}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v12, :cond_5

    const-string v5, "isRisk"

    const/4 v6, 0x0

    .line 172
    invoke-virtual {v1, v5, v6}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Z)Z

    move-result v7

    if-nez v7, :cond_2

    move-object/from16 v7, p0

    .line 173
    iget-object v13, v7, Lcom/cmic/gen/sdk/auth/a;->b:Landroid/content/Context;

    const-string v8, "scripExpiresIn"

    const-string v15, "0"

    invoke-virtual {v12, v8, v15}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v15

    const-string v8, "scripKey"

    const-string v6, ""

    .line 174
    invoke-virtual {v1, v8, v6}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v17

    const-string v8, "scripType"

    .line 175
    invoke-virtual {v1, v8, v6}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v18

    .line 173
    invoke-static/range {v13 .. v18}, Lcom/cmic/gen/sdk/e/h;->a(Landroid/content/Context;Ljava/lang/String;JLjava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    :cond_2
    move-object/from16 v7, p0

    .line 184
    :goto_4
    invoke-virtual {v1, v11}, Lcom/cmic/gen/sdk/a;->c(Ljava/lang/String;)I

    move-result v6

    if-ne v6, v10, :cond_3

    .line 185
    invoke-static {v0}, Lcom/cmic/gen/sdk/auth/d;->a(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    .line 186
    invoke-interface {v2, v3, v9, v1, v0}, Lcom/cmic/gen/sdk/auth/b;->a(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    goto :goto_5

    :cond_3
    const/4 v0, 0x0

    .line 189
    invoke-virtual {v1, v5, v0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Z)Z

    move-result v6

    if-eqz v6, :cond_4

    .line 191
    invoke-virtual {v1, v5, v0}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Z)V

    const/4 v0, 0x1

    const-string v3, "isGotScrip"

    .line 192
    invoke-virtual {v1, v3, v0}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Z)V

    .line 194
    invoke-virtual/range {p0 .. p2}, Lcom/cmic/gen/sdk/auth/a;->b(Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/auth/b;)V

    goto :goto_5

    .line 196
    :cond_4
    invoke-interface {v2, v3, v4, v1, v12}, Lcom/cmic/gen/sdk/auth/b;->a(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    goto :goto_5

    :cond_5
    move-object/from16 v7, p0

    const-string v0, "\u8fd4\u56de103000\uff0c\u4f46\u662f\u6570\u636e\u89e3\u6790\u51fa\u9519"

    .line 178
    invoke-static {v15, v0}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    const v0, 0x18f4f

    .line 179
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "\u6570\u636e\u89e3\u6790\u5f02\u5e38"

    invoke-static {v3, v4}, Lcom/cmic/gen/sdk/auth/d;->a(Ljava/lang/String;Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v3

    .line 180
    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-interface {v2, v0, v4, v1, v3}, Lcom/cmic/gen/sdk/auth/b;->a(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    return-void

    :cond_6
    move-object/from16 v7, p0

    .line 200
    invoke-virtual {v1, v11}, Lcom/cmic/gen/sdk/a;->c(Ljava/lang/String;)I

    move-result v5

    if-ne v5, v10, :cond_7

    .line 201
    invoke-static/range {p3 .. p4}, Lcom/cmic/gen/sdk/auth/d;->b(Ljava/lang/String;Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    .line 202
    invoke-interface {v2, v3, v9, v1, v0}, Lcom/cmic/gen/sdk/auth/b;->a(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    goto :goto_5

    .line 204
    :cond_7
    invoke-interface {v2, v3, v4, v1, v0}, Lcom/cmic/gen/sdk/auth/b;->a(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    :goto_5
    return-void
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/auth/a;Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/auth/b;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 0

    .line 25
    invoke-direct/range {p0 .. p5}, Lcom/cmic/gen/sdk/auth/a;->a(Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/auth/b;Ljava/lang/String;Ljava/lang/String;Lorg/json/JSONObject;)V

    return-void
.end method

.method private b(Lcom/cmic/gen/sdk/a;)V
    .locals 4

    const/4 v0, 0x0

    new-array v1, v0, [B

    const-string v2, "use2048PublicKey"

    .line 119
    invoke-virtual {p1, v2, v0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Z)Z

    move-result v2

    const-string v3, "AuthnBusiness"

    if-eqz v2, :cond_0

    const-string v0, "\u4f7f\u75282048\u516c\u94a5\u5bf9\u5e94\u7684\u5bf9\u79f0\u79d8\u94a5\u751f\u6210\u65b9\u5f0f"

    .line 120
    invoke-static {v3, v0}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 121
    invoke-static {}, Lcom/cmic/gen/sdk/e/a;->a()[B

    move-result-object v1

    goto :goto_0

    :cond_0
    const-string v2, "\u4f7f\u75281024\u516c\u94a5\u5bf9\u5e94\u7684\u5bf9\u79f0\u79d8\u94a5\u751f\u6210\u65b9\u5f0f"

    .line 123
    invoke-static {v3, v2}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 125
    :try_start_0
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v2

    const/16 v3, 0x10

    invoke-virtual {v2, v0, v3}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v0

    const-string v2, "utf-8"

    invoke-virtual {v0, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 127
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 130
    :goto_0
    invoke-static {}, Lcom/cmic/gen/sdk/e/a;->a()[B

    move-result-object v0

    .line 131
    sget-object v2, Lcom/cmic/gen/sdk/b$a;->a:Ljava/lang/String;

    invoke-virtual {p1, v2, v1}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;[B)V

    .line 132
    sget-object v1, Lcom/cmic/gen/sdk/b$a;->b:Ljava/lang/String;

    invoke-virtual {p1, v1, v0}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;[B)V

    const-string v0, "authType"

    const-string v1, "3"

    .line 134
    invoke-virtual {p1, v0, v1}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public a(Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/auth/b;)V
    .locals 3

    const-string v0, "AuthnBusiness"

    const-string v1, "LoginCheck method start"

    .line 64
    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v0, "logintype"

    .line 65
    invoke-virtual {p1, v0}, Lcom/cmic/gen/sdk/a;->c(Ljava/lang/String;)I

    move-result v0

    const-string v1, "isCacheScrip"

    const/4 v2, 0x0

    .line 66
    invoke-virtual {p1, v1, v2}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Z)Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "securityphone"

    const-string v2, ""

    .line 67
    invoke-virtual {p1, v1, v2}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x3

    if-ne v0, v2, :cond_0

    .line 69
    invoke-static {v1}, Lcom/cmic/gen/sdk/auth/d;->a(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    const-string v1, "103000"

    const-string v2, "true"

    .line 70
    invoke-interface {p2, v1, v2, p1, v0}, Lcom/cmic/gen/sdk/auth/b;->a(Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/a;Lorg/json/JSONObject;)V

    goto :goto_0

    .line 72
    :cond_0
    invoke-virtual {p0, p1, p2}, Lcom/cmic/gen/sdk/auth/a;->b(Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/auth/b;)V

    :goto_0
    return-void

    .line 76
    :cond_1
    invoke-virtual {p0, p1, p2}, Lcom/cmic/gen/sdk/auth/a;->b(Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/auth/b;)V

    return-void
.end method

.method public b(Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/auth/b;)V
    .locals 5

    const-string v0, "AuthnBusiness"

    const-string v1, "getScripAndToken start"

    .line 81
    invoke-static {v0, v1}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    const-string v1, "isGotScrip"

    const/4 v2, 0x0

    .line 82
    invoke-virtual {p1, v1, v2}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Z)Z

    move-result v1

    .line 83
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "isGotScrip = "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v0, v3}, Lcom/cmic/gen/sdk/e/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    if-nez v1, :cond_2

    .line 85
    invoke-direct {p0, p1}, Lcom/cmic/gen/sdk/auth/a;->a(Lcom/cmic/gen/sdk/a;)V

    const-string v0, "isCacheScrip"

    .line 86
    invoke-virtual {p1, v0, v2}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Z)Z

    move-result v0

    const/4 v1, 0x1

    const-string v2, "logintype"

    if-nez v0, :cond_0

    .line 88
    invoke-direct {p0, p1}, Lcom/cmic/gen/sdk/auth/a;->b(Lcom/cmic/gen/sdk/a;)V

    const-string v0, "networktype"

    .line 89
    invoke-virtual {p1, v0}, Lcom/cmic/gen/sdk/a;->c(Ljava/lang/String;)I

    move-result v0

    const/4 v3, 0x3

    if-ne v0, v3, :cond_0

    const-string v0, "loginMethod"

    .line 91
    invoke-virtual {p1, v0}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v4, "loginAuth"

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-virtual {p1, v2}, Lcom/cmic/gen/sdk/a;->c(Ljava/lang/String;)I

    move-result v0

    if-eq v0, v3, :cond_0

    const-string v0, "isRisk"

    .line 92
    invoke-virtual {p1, v0, v1}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Z)V

    .line 95
    :cond_0
    invoke-virtual {p1, v2}, Lcom/cmic/gen/sdk/a;->c(Ljava/lang/String;)I

    move-result v0

    const-string v3, "userCapaid"

    if-ne v0, v1, :cond_1

    const-string v0, "200"

    .line 96
    invoke-virtual {p1, v3, v0}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 97
    :cond_1
    invoke-virtual {p1, v2}, Lcom/cmic/gen/sdk/a;->c(Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "50"

    .line 98
    invoke-virtual {p1, v3, v0}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/cmic/gen/sdk/auth/a;->a:Lcom/cmic/gen/sdk/c/c/a;

    new-instance v1, Lcom/cmic/gen/sdk/auth/a$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/cmic/gen/sdk/auth/a$1;-><init>(Lcom/cmic/gen/sdk/auth/a;Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/auth/b;)V

    invoke-virtual {v0, p1, v1}, Lcom/cmic/gen/sdk/c/c/a;->a(Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/c/c/d;)V

    return-void
.end method
