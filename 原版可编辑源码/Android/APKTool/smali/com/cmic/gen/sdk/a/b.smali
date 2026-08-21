.class public Lcom/cmic/gen/sdk/a/b;
.super Ljava/lang/Object;
.source "UmcConfigHandle.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/cmic/gen/sdk/a/b$a;
    }
.end annotation


# static fields
.field private static c:Lcom/cmic/gen/sdk/a/b;


# instance fields
.field private a:Lcom/cmic/gen/sdk/a/a;

.field private final b:Lcom/cmic/gen/sdk/a/a;

.field private volatile d:Z

.field private e:Lcom/cmic/gen/sdk/a/b$a;


# direct methods
.method private constructor <init>(Z)V
    .locals 1

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 28
    iput-boolean v0, p0, Lcom/cmic/gen/sdk/a/b;->d:Z

    .line 41
    new-instance v0, Lcom/cmic/gen/sdk/a/a$a;

    invoke-direct {v0}, Lcom/cmic/gen/sdk/a/a$a;-><init>()V

    invoke-virtual {v0}, Lcom/cmic/gen/sdk/a/a$a;->a()Lcom/cmic/gen/sdk/a/a;

    move-result-object v0

    iput-object v0, p0, Lcom/cmic/gen/sdk/a/b;->b:Lcom/cmic/gen/sdk/a/a;

    if-nez p1, :cond_0

    .line 43
    invoke-direct {p0}, Lcom/cmic/gen/sdk/a/b;->d()Lcom/cmic/gen/sdk/a/a;

    move-result-object p1

    iput-object p1, p0, Lcom/cmic/gen/sdk/a/b;->a:Lcom/cmic/gen/sdk/a/a;

    goto :goto_0

    .line 45
    :cond_0
    iput-object v0, p0, Lcom/cmic/gen/sdk/a/b;->a:Lcom/cmic/gen/sdk/a/a;

    :goto_0
    return-void
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/a/b;)Lcom/cmic/gen/sdk/a/a;
    .locals 0

    .line 22
    invoke-direct {p0}, Lcom/cmic/gen/sdk/a/b;->d()Lcom/cmic/gen/sdk/a/a;

    move-result-object p0

    return-object p0
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/a/b;Lcom/cmic/gen/sdk/a/a;)Lcom/cmic/gen/sdk/a/a;
    .locals 0

    .line 22
    iput-object p1, p0, Lcom/cmic/gen/sdk/a/b;->a:Lcom/cmic/gen/sdk/a/a;

    return-object p1
.end method

.method public static a(Z)Lcom/cmic/gen/sdk/a/b;
    .locals 2

    .line 50
    sget-object v0, Lcom/cmic/gen/sdk/a/b;->c:Lcom/cmic/gen/sdk/a/b;

    if-nez v0, :cond_1

    .line 51
    const-class v0, Lcom/cmic/gen/sdk/a/b;

    monitor-enter v0

    .line 52
    :try_start_0
    sget-object v1, Lcom/cmic/gen/sdk/a/b;->c:Lcom/cmic/gen/sdk/a/b;

    if-nez v1, :cond_0

    .line 53
    new-instance v1, Lcom/cmic/gen/sdk/a/b;

    invoke-direct {v1, p0}, Lcom/cmic/gen/sdk/a/b;-><init>(Z)V

    sput-object v1, Lcom/cmic/gen/sdk/a/b;->c:Lcom/cmic/gen/sdk/a/b;

    .line 55
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 57
    :cond_1
    :goto_0
    sget-object p0, Lcom/cmic/gen/sdk/a/b;->c:Lcom/cmic/gen/sdk/a/b;

    return-object p0
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const-string v0, "&"

    .line 210
    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    .line 211
    array-length v0, p1

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_1

    aget-object v2, p1, v1

    .line 212
    invoke-virtual {v2, p2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_0

    goto :goto_1

    :cond_0
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_1
    const-string v2, ""

    .line 217
    :goto_1
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    const-string p1, "="

    .line 218
    invoke-virtual {v2, p1}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result p1

    add-int/lit8 p1, p1, 0x1

    invoke-virtual {v2, p1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v2

    :cond_2
    return-object v2
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/a/b;Lcom/cmic/gen/sdk/a;)V
    .locals 0

    .line 22
    invoke-direct {p0, p1}, Lcom/cmic/gen/sdk/a/b;->b(Lcom/cmic/gen/sdk/a;)V

    return-void
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/a/b;Lorg/json/JSONObject;)V
    .locals 0

    .line 22
    invoke-direct {p0, p1}, Lcom/cmic/gen/sdk/a/b;->a(Lorg/json/JSONObject;)V

    return-void
.end method

.method private a(Lorg/json/JSONObject;)V
    .locals 18

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    const-string v2, "LOGS_CONTROL"

    const-string v3, "M009"

    const-string v4, "M008"

    const-string v5, "M007"

    const-string v6, "CHANGE_HOST"

    const-string v7, "Configlist"

    const-string v8, "UmcConfigHandle"

    const-string v9, "client_valid"

    const-string v10, "0"

    const-string v11, "sso_config_xf"

    .line 95
    invoke-static {v11}, Lcom/cmic/gen/sdk/e/k;->b(Ljava/lang/String;)Lcom/cmic/gen/sdk/e/k$a;

    move-result-object v11

    .line 98
    :try_start_0
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v12

    if-eqz v12, :cond_0

    .line 99
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    invoke-static {v12}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v12

    int-to-long v12, v12

    .line 100
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v14

    const-wide/16 v16, 0x3c

    mul-long v12, v12, v16

    mul-long v12, v12, v16

    const-wide/16 v16, 0x3e8

    mul-long v12, v12, v16

    add-long/2addr v14, v12

    invoke-virtual {v11, v9, v14, v15}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;J)V

    .line 103
    :cond_0
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v9

    if-eqz v9, :cond_6

    .line 104
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->getJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object v0

    .line 105
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v7
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1

    const-string v9, "config_host"

    const-string v12, "https_get_phone_scrip_host"

    const-string v13, "logHost"

    if-eqz v7, :cond_3

    .line 107
    :try_start_1
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 136
    invoke-virtual {v6, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_1

    .line 138
    invoke-direct {v1, v6, v5}, Lcom/cmic/gen/sdk/a/b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 139
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_1

    .line 140
    invoke-virtual {v11, v13, v5}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 145
    :cond_1
    invoke-virtual {v6, v4}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v5

    if-eqz v5, :cond_2

    .line 146
    invoke-direct {v1, v6, v4}, Lcom/cmic/gen/sdk/a/b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    .line 147
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    .line 148
    invoke-virtual {v11, v12, v4}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 152
    :cond_2
    invoke-virtual {v6, v3}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_4

    .line 153
    invoke-direct {v1, v6, v3}, Lcom/cmic/gen/sdk/a/b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 154
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_4

    .line 155
    invoke-virtual {v11, v9, v3}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    .line 161
    :cond_3
    invoke-virtual {v11, v13}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;)V

    .line 162
    invoke-virtual {v11, v12}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;)V

    .line 163
    invoke-virtual {v11, v9}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;)V

    :cond_4
    :goto_0
    const-string v3, "CLOSE_FRIEND_WAPKS"

    .line 168
    invoke-direct {v1, v0, v3, v10, v11}, Lcom/cmic/gen/sdk/a/b;->a(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/e/k$a;)V

    const-string v3, "CLOSE_LOGS_VERSION"

    .line 169
    invoke-direct {v1, v0, v3, v10, v11}, Lcom/cmic/gen/sdk/a/b;->a(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/e/k$a;)V

    const-string v3, "CLOSE_IPV4_LIST"

    .line 170
    invoke-direct {v1, v0, v3, v10, v11}, Lcom/cmic/gen/sdk/a/b;->a(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/e/k$a;)V

    const-string v3, "CLOSE_IPV6_LIST"

    .line 171
    invoke-direct {v1, v0, v3, v10, v11}, Lcom/cmic/gen/sdk/a/b;->a(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/e/k$a;)V

    const-string v3, "CLOSE_M008_SDKVERSION_LIST"

    .line 172
    invoke-direct {v1, v0, v3, v10, v11}, Lcom/cmic/gen/sdk/a/b;->a(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/e/k$a;)V

    const-string v3, "CLOSE_M008_APPID_LIST"

    .line 173
    invoke-direct {v1, v0, v3, v10, v11}, Lcom/cmic/gen/sdk/a/b;->a(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/e/k$a;)V

    .line 175
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    const-string v4, "pauseTime"

    const-string v5, "maxFailedLogTimes"

    if-eqz v3, :cond_5

    .line 177
    :try_start_2
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "h"

    const-string v3, ""

    .line 178
    invoke-virtual {v0, v2, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    const-string v2, "&"

    .line 179
    invoke-virtual {v0, v2}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    .line 180
    array-length v2, v0

    const/4 v3, 0x2

    if-ne v2, v3, :cond_6

    const/4 v2, 0x0

    .line 182
    aget-object v3, v0, v2

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_6

    const/4 v3, 0x1

    aget-object v6, v0, v3

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    if-nez v6, :cond_6

    .line 184
    :try_start_3
    aget-object v2, v0, v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    .line 185
    aget-object v0, v0, v3

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0

    .line 186
    invoke-virtual {v11, v5, v2}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;I)V

    .line 187
    invoke-virtual {v11, v4, v0}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;I)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    goto :goto_1

    :catch_0
    :try_start_4
    const-string v0, "\u89e3\u6790\u65e5\u5fd7\u4e0a\u62a5\u9650\u5236\u65f6\u95f4\u6b21\u6570\u5f02\u5e38"

    .line 189
    invoke-static {v8, v0}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 195
    :cond_5
    invoke-virtual {v11, v5}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;)V

    .line 196
    invoke-virtual {v11, v4}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;)V

    .line 200
    :cond_6
    :goto_1
    invoke-virtual {v11}, Lcom/cmic/gen/sdk/e/k$a;->b()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1

    goto :goto_2

    :catch_1
    move-exception v0

    const-string v2, "\u914d\u7f6e\u9879\u5f02\u5e38\uff0c\u914d\u7f6e\u5931\u6548"

    .line 202
    invoke-static {v8, v2}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 203
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    return-void
.end method

.method private a(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/String;Lcom/cmic/gen/sdk/e/k$a;)V
    .locals 2

    .line 257
    invoke-virtual {p1, p2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 258
    invoke-virtual {p1, p2, p3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "CLOSE_FRIEND_WAPKS"

    .line 259
    invoke-virtual {v1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "0"

    .line 261
    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "1"

    invoke-virtual {v1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    return-void

    .line 265
    :cond_0
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "CU"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "CT"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "CM"

    invoke-virtual {v0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    goto :goto_0

    .line 269
    :cond_1
    invoke-virtual {p1, p2, p3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4, p2, p1}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    :cond_2
    :goto_0
    return-void

    .line 271
    :cond_3
    invoke-virtual {p4, p2}, Lcom/cmic/gen/sdk/e/k$a;->a(Ljava/lang/String;)V

    :goto_1
    return-void
.end method

.method static synthetic a(Lcom/cmic/gen/sdk/a/b;Z)Z
    .locals 0

    .line 22
    iput-boolean p1, p0, Lcom/cmic/gen/sdk/a/b;->d:Z

    return p1
.end method

.method static synthetic b(Lcom/cmic/gen/sdk/a/b;)Lcom/cmic/gen/sdk/a/b$a;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/cmic/gen/sdk/a/b;->e:Lcom/cmic/gen/sdk/a/b$a;

    return-object p0
.end method

.method private b(Lcom/cmic/gen/sdk/a;)V
    .locals 3

    .line 69
    iget-boolean v0, p0, Lcom/cmic/gen/sdk/a/b;->d:Z

    if-eqz v0, :cond_0

    const-string p1, "UmcConfigHandle"

    const-string v0, "\u6b63\u5728\u83b7\u53d6\u914d\u7f6e\u4e2d..."

    .line 70
    invoke-static {p1, v0}, Lcom/cmic/gen/sdk/e/c;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :cond_0
    const/4 v0, 0x1

    .line 73
    iput-boolean v0, p0, Lcom/cmic/gen/sdk/a/b;->d:Z

    .line 74
    invoke-static {}, Lcom/cmic/gen/sdk/c/c/a;->a()Lcom/cmic/gen/sdk/c/c/a;

    move-result-object v0

    const/4 v1, 0x0

    new-instance v2, Lcom/cmic/gen/sdk/a/b$1;

    invoke-direct {v2, p0}, Lcom/cmic/gen/sdk/a/b$1;-><init>(Lcom/cmic/gen/sdk/a/b;)V

    invoke-virtual {v0, v1, p1, v2}, Lcom/cmic/gen/sdk/c/c/a;->a(ZLcom/cmic/gen/sdk/a;Lcom/cmic/gen/sdk/c/c/d;)V

    return-void
.end method

.method static synthetic c(Lcom/cmic/gen/sdk/a/b;)Lcom/cmic/gen/sdk/a/a;
    .locals 0

    .line 22
    iget-object p0, p0, Lcom/cmic/gen/sdk/a/b;->a:Lcom/cmic/gen/sdk/a/a;

    return-object p0
.end method

.method private d()Lcom/cmic/gen/sdk/a/a;
    .locals 2

    .line 280
    new-instance v0, Lcom/cmic/gen/sdk/a/a$a;

    invoke-direct {v0}, Lcom/cmic/gen/sdk/a/a$a;-><init>()V

    iget-object v1, p0, Lcom/cmic/gen/sdk/a/b;->b:Lcom/cmic/gen/sdk/a/a;

    .line 281
    invoke-virtual {v1}, Lcom/cmic/gen/sdk/a/a;->a()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/cmic/gen/sdk/a/d;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a/a$a;->a(Ljava/lang/String;)Lcom/cmic/gen/sdk/a/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/a/b;->b:Lcom/cmic/gen/sdk/a/a;

    .line 282
    invoke-virtual {v1}, Lcom/cmic/gen/sdk/a/a;->c()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/cmic/gen/sdk/a/d;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a/a$a;->c(Ljava/lang/String;)Lcom/cmic/gen/sdk/a/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/a/b;->b:Lcom/cmic/gen/sdk/a/a;

    .line 283
    invoke-virtual {v1}, Lcom/cmic/gen/sdk/a/a;->b()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/cmic/gen/sdk/a/d;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a/a$a;->b(Ljava/lang/String;)Lcom/cmic/gen/sdk/a/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/a/b;->b:Lcom/cmic/gen/sdk/a/a;

    .line 284
    invoke-virtual {v1}, Lcom/cmic/gen/sdk/a/a;->d()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/cmic/gen/sdk/a/d;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a/a$a;->d(Ljava/lang/String;)Lcom/cmic/gen/sdk/a/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/a/b;->b:Lcom/cmic/gen/sdk/a/a;

    .line 285
    invoke-virtual {v1}, Lcom/cmic/gen/sdk/a/a;->h()Z

    move-result v1

    invoke-static {v1}, Lcom/cmic/gen/sdk/a/d;->a(Z)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a/a$a;->d(Z)Lcom/cmic/gen/sdk/a/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/a/b;->b:Lcom/cmic/gen/sdk/a/a;

    .line 286
    invoke-virtual {v1}, Lcom/cmic/gen/sdk/a/a;->i()Z

    move-result v1

    invoke-static {v1}, Lcom/cmic/gen/sdk/a/d;->b(Z)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a/a$a;->e(Z)Lcom/cmic/gen/sdk/a/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/a/b;->b:Lcom/cmic/gen/sdk/a/a;

    .line 287
    invoke-virtual {v1}, Lcom/cmic/gen/sdk/a/a;->e()Z

    move-result v1

    invoke-static {v1}, Lcom/cmic/gen/sdk/a/d;->e(Z)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a/a$a;->a(Z)Lcom/cmic/gen/sdk/a/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/a/b;->b:Lcom/cmic/gen/sdk/a/a;

    .line 288
    invoke-virtual {v1}, Lcom/cmic/gen/sdk/a/a;->f()Z

    move-result v1

    invoke-static {v1}, Lcom/cmic/gen/sdk/a/d;->d(Z)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a/a$a;->b(Z)Lcom/cmic/gen/sdk/a/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/a/b;->b:Lcom/cmic/gen/sdk/a/a;

    .line 290
    invoke-virtual {v1}, Lcom/cmic/gen/sdk/a/a;->g()Z

    move-result v1

    invoke-static {v1}, Lcom/cmic/gen/sdk/a/d;->c(Z)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a/a$a;->c(Z)Lcom/cmic/gen/sdk/a/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/a/b;->b:Lcom/cmic/gen/sdk/a/a;

    .line 291
    invoke-virtual {v1}, Lcom/cmic/gen/sdk/a/a;->j()Z

    move-result v1

    invoke-static {v1}, Lcom/cmic/gen/sdk/a/d;->f(Z)Z

    move-result v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a/a$a;->f(Z)Lcom/cmic/gen/sdk/a/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/a/b;->b:Lcom/cmic/gen/sdk/a/a;

    .line 292
    invoke-virtual {v1}, Lcom/cmic/gen/sdk/a/a;->k()I

    move-result v1

    invoke-static {v1}, Lcom/cmic/gen/sdk/a/d;->a(I)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a/a$a;->a(I)Lcom/cmic/gen/sdk/a/a$a;

    move-result-object v0

    iget-object v1, p0, Lcom/cmic/gen/sdk/a/b;->b:Lcom/cmic/gen/sdk/a/a;

    .line 293
    invoke-virtual {v1}, Lcom/cmic/gen/sdk/a/a;->l()I

    move-result v1

    invoke-static {v1}, Lcom/cmic/gen/sdk/a/d;->b(I)I

    move-result v1

    invoke-virtual {v0, v1}, Lcom/cmic/gen/sdk/a/a$a;->b(I)Lcom/cmic/gen/sdk/a/a$a;

    move-result-object v0

    .line 294
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/a/a$a;->a()Lcom/cmic/gen/sdk/a/a;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method a()Lcom/cmic/gen/sdk/a/a;
    .locals 1

    .line 61
    iget-object v0, p0, Lcom/cmic/gen/sdk/a/b;->b:Lcom/cmic/gen/sdk/a/a;

    return-object v0
.end method

.method a(Lcom/cmic/gen/sdk/a/b$a;)V
    .locals 0

    .line 37
    iput-object p1, p0, Lcom/cmic/gen/sdk/a/b;->e:Lcom/cmic/gen/sdk/a/b$a;

    return-void
.end method

.method a(Lcom/cmic/gen/sdk/a;)V
    .locals 1

    .line 303
    invoke-static {}, Lcom/cmic/gen/sdk/a/d;->a()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 304
    new-instance v0, Lcom/cmic/gen/sdk/a/b$2;

    invoke-direct {v0, p0, p1}, Lcom/cmic/gen/sdk/a/b$2;-><init>(Lcom/cmic/gen/sdk/a/b;Lcom/cmic/gen/sdk/a;)V

    invoke-static {v0}, Lcom/cmic/gen/sdk/e/n;->a(Lcom/cmic/gen/sdk/e/n$a;)V

    :cond_0
    return-void
.end method

.method b()Lcom/cmic/gen/sdk/a/a;
    .locals 1

    .line 276
    iget-object v0, p0, Lcom/cmic/gen/sdk/a/b;->a:Lcom/cmic/gen/sdk/a/a;

    return-object v0
.end method

.method c()V
    .locals 1

    const-string v0, "sso_config_xf"

    .line 315
    invoke-static {v0}, Lcom/cmic/gen/sdk/e/k;->b(Ljava/lang/String;)Lcom/cmic/gen/sdk/e/k$a;

    move-result-object v0

    .line 316
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/e/k$a;->c()V

    .line 317
    invoke-virtual {v0}, Lcom/cmic/gen/sdk/e/k$a;->b()V

    return-void
.end method
