.class public Lcom/cmic/gen/sdk/c/c/a;
.super Ljava/lang/Object;
.source "BaseRequest.java"


# static fields
.field private static a:Lcom/cmic/gen/sdk/c/c/a;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/cmic/gen/sdk/c/c/a;
    .locals 2

    .line 44
    sget-object v0, Lcom/cmic/gen/sdk/c/c/a;->a:Lcom/cmic/gen/sdk/c/c/a;

    if-nez v0, :cond_1

    .line 45
    const-class v0, Lcom/cmic/gen/sdk/c/c/a;

    monitor-enter v0

    .line 46
    :try_start_0
    sget-object v1, Lcom/cmic/gen/sdk/c/c/a;->a:Lcom/cmic/gen/sdk/c/c/a;

    if-nez v1, :cond_0

    .line 47
    new-instance v1, Lcom/cmic/gen/sdk/c/c/a;

    invoke-direct {v1}, Lcom/cmic/gen/sdk/c/c/a;-><init>()V

    sput-object v1, Lcom/cmic/gen/sdk/c/c/a;->a:Lcom/cmic/gen/sdk/c/c/a;

    .line 49
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 51
    :cond_1
    :goto_0
    sget-object v0, Lcom/cmic/gen/sdk/c/c/a;->a:Lcom/cmic/gen/sdk/c/c/a;

    return-object v0
.end method

.method private a(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/c/d;Lcom/cmic/gen/sdk/a;)V
    .locals 3

    .line 199
    new-instance v0, Lcom/cmic/gen/sdk/c/a/d;

    invoke-direct {v0}, Lcom/cmic/gen/sdk/c/a/d;-><init>()V

    .line 200
    new-instance v1, Lcom/cmic/gen/sdk/c/a/c;

    invoke-direct {v1}, Lcom/cmic/gen/sdk/c/a/c;-><init>()V

    .line 201
    new-instance v2, Lcom/cmic/gen/sdk/c/a/a;

    invoke-direct {v2}, Lcom/cmic/gen/sdk/c/a/a;-><init>()V

    .line 202
    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/c/a/d;->a(Lcom/cmic/gen/sdk/c/a/b;)V

    .line 203
    invoke-virtual {v1, v2}, Lcom/cmic/gen/sdk/c/a/c;->a(Lcom/cmic/gen/sdk/c/a/b;)V

    .line 206
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v1

    invoke-virtual {p1, v1, v2}, Lcom/cmic/gen/sdk/c/c/c;->a(J)V

    .line 209
    new-instance v1, Lcom/cmic/gen/sdk/c/c/a$1;

    invoke-direct {v1, p0, p1, p3, p2}, Lcom/cmic/gen/sdk/c/c/a$1;-><init>(Lcom/cmic/gen/sdk/c/c/a;Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/c/c/d;)V

    invoke-virtual {v0, p1, v1, p3}, Lcom/cmic/gen/sdk/c/a/d;->a(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/d/c;Lcom/cmic/gen/sdk/a;)V

    return-void
.end method


# virtual methods
.method public a(Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/c/c/d;)V
    .locals 16

    move-object/from16 v0, p1

    const-string v1, "networktype"

    .line 82
    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a;->c(Ljava/lang/String;)I

    move-result v1

    .line 83
    new-instance v2, Lcom/cmic/gen/sdk/c/b/h;

    invoke-direct {v2}, Lcom/cmic/gen/sdk/c/b/h;-><init>()V

    const-string v3, "1.0"

    .line 84
    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/c/b/h;->b(Ljava/lang/String;)V

    const-string v3, "quick_login_android_5.9.6"

    .line 85
    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/c/b/h;->c(Ljava/lang/String;)V

    const-string v3, "appid"

    .line 86
    invoke-virtual {v0, v3}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/c/b/h;->d(Ljava/lang/String;)V

    const-string v3, "operatortype"

    .line 87
    invoke-virtual {v0, v3}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/c/b/h;->e(Ljava/lang/String;)V

    .line 88
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, ""

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/c/b/h;->f(Ljava/lang/String;)V

    .line 89
    invoke-static {}, Lcom/cmic/gen/sdk/e/m;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/c/b/h;->g(Ljava/lang/String;)V

    .line 90
    invoke-static {}, Lcom/cmic/gen/sdk/e/m;->b()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/c/b/h;->h(Ljava/lang/String;)V

    .line 91
    invoke-static {}, Lcom/cmic/gen/sdk/e/m;->c()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/c/b/h;->i(Ljava/lang/String;)V

    const-string v3, "0"

    .line 92
    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/c/b/h;->j(Ljava/lang/String;)V

    const-string v5, "3.0"

    .line 93
    invoke-virtual {v2, v5}, Lcom/cmic/gen/sdk/c/b/h;->k(Ljava/lang/String;)V

    .line 94
    invoke-static {}, Lcom/cmic/gen/sdk/e/q;->b()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Lcom/cmic/gen/sdk/c/b/h;->l(Ljava/lang/String;)V

    .line 95
    invoke-static {}, Lcom/cmic/gen/sdk/e/o;->a()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Lcom/cmic/gen/sdk/c/b/h;->m(Ljava/lang/String;)V

    const-string v6, "apppackage"

    .line 96
    invoke-virtual {v0, v6}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Lcom/cmic/gen/sdk/c/b/h;->o(Ljava/lang/String;)V

    const-string v6, "appsign"

    .line 97
    invoke-virtual {v0, v6}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Lcom/cmic/gen/sdk/c/b/h;->p(Ljava/lang/String;)V

    const-string v6, "AID"

    .line 99
    invoke-static {v6, v4}, Lcom/cmic/gen/sdk/e/k;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Lcom/cmic/gen/sdk/c/b/h;->a(Ljava/lang/String;)V

    const-string v4, "logintype"

    .line 100
    invoke-virtual {v0, v4}, Lcom/cmic/gen/sdk/a;->c(Ljava/lang/String;)I

    move-result v6

    const/4 v7, 0x3

    const/4 v8, 0x1

    const/4 v9, 0x0

    if-eq v6, v7, :cond_2

    const-string v6, "isRisk"

    invoke-virtual {v0, v6, v9}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Z)Z

    move-result v6

    if-eqz v6, :cond_0

    goto :goto_1

    :cond_0
    const-string v6, "userCapaid"

    .line 104
    invoke-virtual {v0, v6}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v2, v6}, Lcom/cmic/gen/sdk/c/b/h;->x(Ljava/lang/String;)V

    .line 105
    invoke-virtual {v0, v4}, Lcom/cmic/gen/sdk/a;->c(Ljava/lang/String;)I

    move-result v6

    if-ne v6, v8, :cond_1

    const-string v6, "200"

    .line 106
    invoke-virtual {v2, v6}, Lcom/cmic/gen/sdk/c/b/h;->x(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    const-string v6, "50"

    .line 108
    invoke-virtual {v2, v6}, Lcom/cmic/gen/sdk/c/b/h;->x(Ljava/lang/String;)V

    :goto_0
    const-string v6, "authz"

    .line 110
    invoke-virtual {v2, v6}, Lcom/cmic/gen/sdk/c/b/h;->s(Ljava/lang/String;)V

    goto :goto_2

    :cond_2
    :goto_1
    const-string v6, "pre"

    .line 102
    invoke-virtual {v2, v6}, Lcom/cmic/gen/sdk/c/b/h;->s(Ljava/lang/String;)V

    :goto_2
    const-string v6, "scripAndTokenForHttps"

    .line 112
    invoke-static {v0, v6}, Lcom/cmic/gen/sdk/e/q;->a(Lcom/cmic/gen/sdk/a;Ljava/lang/String;)V

    .line 113
    invoke-virtual/range {p1 .. p1}, Lcom/cmic/gen/sdk/a;->b()Lcom/cmic/gen/sdk/a/a;

    move-result-object v6

    const-string v10, "isCacheScrip"

    .line 116
    invoke-virtual {v0, v10, v9}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Z)Z

    move-result v10

    const-string v11, "defendEOF"

    const-string v12, "traceId"

    const-string v13, "POST"

    const-string v14, "/unisdk/rs/scripAndTokenForHttps"

    const-string v15, "https://"

    if-nez v10, :cond_6

    invoke-virtual {v0, v4}, Lcom/cmic/gen/sdk/a;->c(Ljava/lang/String;)I

    move-result v4

    if-eq v4, v8, :cond_6

    const-string v4, "isGotScrip"

    invoke-virtual {v0, v4, v9}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Z)Z

    move-result v4

    if-eqz v4, :cond_3

    goto/16 :goto_4

    .line 124
    :cond_3
    new-instance v3, Lcom/cmic/gen/sdk/c/b/e;

    invoke-direct {v3}, Lcom/cmic/gen/sdk/c/b/e;-><init>()V

    .line 125
    sget-object v4, Lcom/cmic/gen/sdk/b$a;->a:Ljava/lang/String;

    invoke-virtual {v0, v4}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;)[B

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/cmic/gen/sdk/c/b/e;->a([B)V

    .line 126
    sget-object v4, Lcom/cmic/gen/sdk/b$a;->b:Ljava/lang/String;

    invoke-virtual {v0, v4}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;)[B

    move-result-object v4

    invoke-virtual {v3, v4}, Lcom/cmic/gen/sdk/c/b/e;->b([B)V

    .line 127
    invoke-virtual {v3, v2}, Lcom/cmic/gen/sdk/c/b/e;->a(Lcom/cmic/gen/sdk/c/b/a;)V

    .line 128
    invoke-virtual {v3, v9}, Lcom/cmic/gen/sdk/c/b/e;->a(Z)V

    .line 129
    invoke-virtual {v6}, Lcom/cmic/gen/sdk/a/a;->h()Z

    move-result v2

    const-string v4, "isCloseIpv4"

    invoke-virtual {v0, v4, v2}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Z)V

    .line 130
    invoke-virtual {v6}, Lcom/cmic/gen/sdk/a/a;->i()Z

    move-result v2

    const-string v4, "isCloseIpv6"

    invoke-virtual {v0, v4, v2}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Z)V

    .line 131
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Lcom/cmic/gen/sdk/a/a;->b()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const-string v4, "use2048PublicKey"

    .line 134
    invoke-virtual {v0, v4, v9}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Z)Z

    move-result v4

    if-eqz v4, :cond_4

    const-string v4, "BaseRequest"

    const-string v6, "\u4f7f\u75282\u5bf9\u5e94\u7684\u7f16\u7801"

    .line 135
    invoke-static {v4, v6}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v4, "2"

    .line 136
    invoke-virtual {v3, v4}, Lcom/cmic/gen/sdk/c/b/e;->b(Ljava/lang/String;)V

    .line 137
    invoke-static {}, Lcom/cmic/gen/sdk/e/i;->a()Lcom/cmic/gen/sdk/e/i;

    move-result-object v4

    sget-object v6, Lcom/cmic/gen/sdk/b$a;->a:Ljava/lang/String;

    invoke-virtual {v0, v6}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;)[B

    move-result-object v6

    invoke-virtual {v4, v6}, Lcom/cmic/gen/sdk/e/i;->b([B)Ljava/lang/String;

    move-result-object v4

    goto :goto_3

    .line 139
    :cond_4
    invoke-static {}, Lcom/cmic/gen/sdk/e/i;->a()Lcom/cmic/gen/sdk/e/i;

    move-result-object v4

    sget-object v6, Lcom/cmic/gen/sdk/b$a;->a:Ljava/lang/String;

    invoke-virtual {v0, v6}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;)[B

    move-result-object v6

    invoke-virtual {v4, v6}, Lcom/cmic/gen/sdk/e/i;->a([B)Ljava/lang/String;

    move-result-object v4

    .line 141
    :goto_3
    invoke-virtual {v3, v4}, Lcom/cmic/gen/sdk/c/b/e;->c(Ljava/lang/String;)V

    .line 143
    new-instance v4, Lcom/cmic/gen/sdk/c/c/b;

    invoke-virtual {v0, v12}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-direct {v4, v2, v3, v13, v6}, Lcom/cmic/gen/sdk/c/c/b;-><init>(Ljava/lang/String;Lcom/cmic/gen/sdk/c/b/e;Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "1"

    .line 144
    invoke-virtual {v4, v11, v2}, Lcom/cmic/gen/sdk/c/c/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string v2, "doNetworkSwitch"

    if-ne v1, v7, :cond_5

    .line 147
    invoke-virtual {v4, v8}, Lcom/cmic/gen/sdk/c/c/c;->a(Z)V

    .line 148
    invoke-virtual {v0, v2, v8}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Z)V

    goto :goto_5

    .line 150
    :cond_5
    invoke-virtual {v4, v9}, Lcom/cmic/gen/sdk/c/c/c;->a(Z)V

    .line 151
    invoke-virtual {v0, v2, v9}, Lcom/cmic/gen/sdk/a;->a(Ljava/lang/String;Z)V

    goto :goto_5

    :cond_6
    :goto_4
    const-string v1, "phonescrip"

    .line 117
    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/cmic/gen/sdk/c/b/h;->w(Ljava/lang/String;)V

    const-string v1, "appkey"

    .line 118
    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/cmic/gen/sdk/c/b/h;->v(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v2, v1}, Lcom/cmic/gen/sdk/c/b/h;->n(Ljava/lang/String;)V

    .line 119
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v15}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Lcom/cmic/gen/sdk/a/a;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 121
    new-instance v4, Lcom/cmic/gen/sdk/c/c/c;

    invoke-virtual {v0, v12}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-direct {v4, v1, v2, v13, v6}, Lcom/cmic/gen/sdk/c/c/c;-><init>(Ljava/lang/String;Lcom/cmic/gen/sdk/c/b/g;Ljava/lang/String;Ljava/lang/String;)V

    .line 122
    invoke-virtual {v4, v11, v3}, Lcom/cmic/gen/sdk/c/c/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    :goto_5
    const-string v1, "interfaceVersion"

    .line 154
    invoke-virtual {v4, v1, v5}, Lcom/cmic/gen/sdk/c/c/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    move-object/from16 v1, p0

    move-object/from16 v2, p2

    .line 155
    invoke-direct {v1, v4, v2, v0}, Lcom/cmic/gen/sdk/c/c/a;->a(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/c/d;Lcom/cmic/gen/sdk/a;)V

    return-void
.end method

.method public a(Lorg/json/JSONObject;Lcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/c/c/d;)V
    .locals 5

    .line 159
    new-instance v0, Lcom/cmic/gen/sdk/c/b/f;

    invoke-direct {v0}, Lcom/cmic/gen/sdk/c/b/f;-><init>()V

    .line 161
    new-instance v1, Lcom/cmic/gen/sdk/c/b/f$a;

    invoke-direct {v1}, Lcom/cmic/gen/sdk/c/b/f$a;-><init>()V

    .line 162
    new-instance v2, Lcom/cmic/gen/sdk/c/b/f$b;

    invoke-direct {v2}, Lcom/cmic/gen/sdk/c/b/f$b;-><init>()V

    .line 163
    invoke-static {}, Lcom/cmic/gen/sdk/e/q;->b()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/c/b/f$b;->e(Ljava/lang/String;)V

    .line 164
    invoke-static {}, Lcom/cmic/gen/sdk/e/o;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/c/b/f$b;->f(Ljava/lang/String;)V

    const-string v3, "2.0"

    .line 165
    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/c/b/f$b;->b(Ljava/lang/String;)V

    const-string v3, "appid"

    const-string v4, ""

    .line 166
    invoke-virtual {p2, v3, v4}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/c/b/f$b;->c(Ljava/lang/String;)V

    .line 167
    invoke-virtual {v2, v4}, Lcom/cmic/gen/sdk/c/b/f$b;->v(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Lcom/cmic/gen/sdk/c/b/f$b;->d(Ljava/lang/String;)V

    .line 168
    invoke-virtual {v1, p1}, Lcom/cmic/gen/sdk/c/b/f$a;->a(Lorg/json/JSONObject;)V

    .line 169
    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/c/b/f;->a(Lcom/cmic/gen/sdk/c/b/f$a;)V

    .line 170
    invoke-virtual {v0, v2}, Lcom/cmic/gen/sdk/c/b/f;->a(Lcom/cmic/gen/sdk/c/b/f$b;)V

    .line 172
    invoke-virtual {p2}, Lcom/cmic/gen/sdk/a;->b()Lcom/cmic/gen/sdk/a/a;

    move-result-object p1

    .line 173
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "https://"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/a/a;->d()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "/log/logReport"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 174
    new-instance v1, Lcom/cmic/gen/sdk/c/c/c;

    const-string v2, "traceId"

    .line 175
    invoke-virtual {p2, v2}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "POST"

    invoke-direct {v1, p1, v0, v3, v2}, Lcom/cmic/gen/sdk/c/c/c;-><init>(Ljava/lang/String;Lcom/cmic/gen/sdk/c/b/g;Ljava/lang/String;Ljava/lang/String;)V

    .line 176
    invoke-direct {p0, v1, p3, p2}, Lcom/cmic/gen/sdk/c/c/a;->a(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/c/d;Lcom/cmic/gen/sdk/a;)V

    return-void
.end method

.method public a(ZLcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/c/c/d;)V
    .locals 4

    .line 63
    new-instance v0, Lcom/cmic/gen/sdk/c/b/b;

    invoke-direct {v0}, Lcom/cmic/gen/sdk/c/b/b;-><init>()V

    const-string v1, "1.0"

    .line 64
    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/c/b/b;->b(Ljava/lang/String;)V

    const-string v1, "Android"

    .line 65
    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/c/b/b;->c(Ljava/lang/String;)V

    const-string v1, "AID"

    const-string v2, ""

    .line 66
    invoke-static {v1, v2}, Lcom/cmic/gen/sdk/e/k;->b(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/c/b/b;->d(Ljava/lang/String;)V

    if-eqz p1, :cond_0

    const-string p1, "1"

    goto :goto_0

    :cond_0
    const-string p1, "0"

    .line 67
    :goto_0
    invoke-virtual {v0, p1}, Lcom/cmic/gen/sdk/c/b/b;->e(Ljava/lang/String;)V

    const-string p1, "quick_login_android_5.9.6"

    .line 68
    invoke-virtual {v0, p1}, Lcom/cmic/gen/sdk/c/b/b;->f(Ljava/lang/String;)V

    const-string p1, "appid"

    .line 69
    invoke-virtual {p2, p1}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/cmic/gen/sdk/c/b/b;->g(Ljava/lang/String;)V

    const-string p1, "iYm0HAnkxQtpvN44"

    .line 71
    invoke-virtual {v0, p1}, Lcom/cmic/gen/sdk/c/b/b;->v(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Lcom/cmic/gen/sdk/c/b/b;->h(Ljava/lang/String;)V

    .line 72
    invoke-virtual {p2}, Lcom/cmic/gen/sdk/a;->b()Lcom/cmic/gen/sdk/a/a;

    move-result-object p1

    .line 73
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "https://"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/cmic/gen/sdk/a/a;->c()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "/client/uniConfig"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 76
    new-instance v1, Lcom/cmic/gen/sdk/c/c/c;

    const-string v2, "traceId"

    .line 77
    invoke-virtual {p2, v2}, Lcom/cmic/gen/sdk/a;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "POST"

    invoke-direct {v1, p1, v0, v3, v2}, Lcom/cmic/gen/sdk/c/c/c;-><init>(Ljava/lang/String;Lcom/cmic/gen/sdk/c/b/g;Ljava/lang/String;Ljava/lang/String;)V

    .line 78
    invoke-direct {p0, v1, p3, p2}, Lcom/cmic/gen/sdk/c/c/a;->a(Lcom/cmic/gen/sdk/c/c/c;Lcom/cmic/gen/sdk/c/c/d;Lcom/cmic/gen/sdk/a;)V

    return-void
.end method
