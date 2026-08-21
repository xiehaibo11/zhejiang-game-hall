.class public final Lcom/alipay/sdk/data/a;
.super Ljava/lang/Object;
.source "SourceFile"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/alipay/sdk/data/a$a;
    }
.end annotation


# static fields
.field public static final a:I = 0xdac

.field public static final b:Ljava/lang/String; = "https://h5.m.taobao.com/mlapp/olist.html"

.field public static final c:I = 0xa

.field public static final d:Z = true

.field public static final e:Z = true

.field public static final f:I = 0x3e8

.field public static final g:I = 0x4e20

.field public static final h:Ljava/lang/String; = "alipay_cashier_dynamic_config"

.field public static final i:Ljava/lang/String; = "timeout"

.field public static final j:Ljava/lang/String; = "st_sdk_config"

.field public static final k:Ljava/lang/String; = "tbreturl"

.field public static final l:Ljava/lang/String; = "launchAppSwitch"

.field public static final m:Ljava/lang/String; = "configQueryInterval"

.field public static final n:Ljava/lang/String; = "scheme_pay"

.field public static final o:Ljava/lang/String; = "intercept_batch"

.field private static w:Lcom/alipay/sdk/data/a;


# instance fields
.field public p:Z

.field private q:I

.field private r:Ljava/lang/String;

.field private s:I

.field private t:Z

.field private u:Z

.field private v:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/alipay/sdk/data/a$a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/16 v0, 0xdac

    .line 53
    iput v0, p0, Lcom/alipay/sdk/data/a;->q:I

    const-string v0, "https://h5.m.taobao.com/mlapp/olist.html"

    .line 55
    iput-object v0, p0, Lcom/alipay/sdk/data/a;->r:Ljava/lang/String;

    const/16 v0, 0xa

    .line 57
    iput v0, p0, Lcom/alipay/sdk/data/a;->s:I

    const/4 v0, 0x1

    .line 62
    iput-boolean v0, p0, Lcom/alipay/sdk/data/a;->t:Z

    .line 67
    iput-boolean v0, p0, Lcom/alipay/sdk/data/a;->u:Z

    const/4 v0, 0x0

    .line 74
    iput-boolean v0, p0, Lcom/alipay/sdk/data/a;->p:Z

    const/4 v0, 0x0

    .line 80
    iput-object v0, p0, Lcom/alipay/sdk/data/a;->v:Ljava/util/List;

    return-void
.end method

.method static synthetic a(Lcom/alipay/sdk/data/a;)V
    .locals 0

    .line 31
    invoke-direct {p0}, Lcom/alipay/sdk/data/a;->i()V

    return-void
.end method

.method static synthetic a(Lcom/alipay/sdk/data/a;Ljava/lang/String;)V
    .locals 0

    .line 31
    invoke-direct {p0, p1}, Lcom/alipay/sdk/data/a;->b(Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 2

    .line 139
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 144
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "timeout"

    const/16 v1, 0xdac

    .line 145
    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    iput p1, p0, Lcom/alipay/sdk/data/a;->q:I

    const-string p1, "tbreturl"

    const-string v1, "https://h5.m.taobao.com/mlapp/olist.html"

    .line 146
    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/alipay/sdk/data/a;->r:Ljava/lang/String;

    const-string p1, "configQueryInterval"

    const/16 v1, 0xa

    .line 147
    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result p1

    iput p1, p0, Lcom/alipay/sdk/data/a;->s:I

    const-string p1, "launchAppSwitch"

    .line 148
    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p1

    invoke-static {p1}, Lcom/alipay/sdk/data/a$a;->a(Lorg/json/JSONArray;)Ljava/util/List;

    move-result-object p1

    iput-object p1, p0, Lcom/alipay/sdk/data/a;->v:Ljava/util/List;

    const-string p1, "scheme_pay"

    const/4 v1, 0x1

    .line 149
    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result p1

    iput-boolean p1, p0, Lcom/alipay/sdk/data/a;->t:Z

    const-string p1, "intercept_batch"

    .line 150
    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result p1

    iput-boolean p1, p0, Lcom/alipay/sdk/data/a;->u:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 152
    invoke-static {p1}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 2

    .line 176
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 181
    :cond_0
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "st_sdk_config"

    .line 182
    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optJSONObject(Ljava/lang/String;)Lorg/json/JSONObject;

    move-result-object p1

    if-eqz p1, :cond_1

    const-string v0, "timeout"

    const/16 v1, 0xdac

    .line 184
    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/alipay/sdk/data/a;->q:I

    const-string v0, "tbreturl"

    const-string v1, "https://h5.m.taobao.com/mlapp/olist.html"

    .line 185
    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/alipay/sdk/data/a;->r:Ljava/lang/String;

    const-string v0, "configQueryInterval"

    const/16 v1, 0xa

    .line 186
    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    iput v0, p0, Lcom/alipay/sdk/data/a;->s:I

    const-string v0, "launchAppSwitch"

    .line 187
    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    invoke-static {v0}, Lcom/alipay/sdk/data/a$a;->a(Lorg/json/JSONArray;)Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/alipay/sdk/data/a;->v:Ljava/util/List;

    const-string v0, "scheme_pay"

    const/4 v1, 0x1

    .line 188
    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v0

    iput-boolean v0, p0, Lcom/alipay/sdk/data/a;->t:Z

    const-string v0, "intercept_batch"

    .line 189
    invoke-virtual {p1, v0, v1}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result p1

    iput-boolean p1, p0, Lcom/alipay/sdk/data/a;->u:Z

    goto :goto_0

    :cond_1
    const-string p1, "msp"

    const-string v0, "config is null"

    .line 191
    invoke-static {p1, v0}, Lcom/alipay/sdk/util/c;->d(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    .line 194
    invoke-static {p1}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method

.method public static g()Lcom/alipay/sdk/data/a;
    .locals 1

    .line 125
    sget-object v0, Lcom/alipay/sdk/data/a;->w:Lcom/alipay/sdk/data/a;

    if-nez v0, :cond_0

    .line 126
    new-instance v0, Lcom/alipay/sdk/data/a;

    invoke-direct {v0}, Lcom/alipay/sdk/data/a;-><init>()V

    sput-object v0, Lcom/alipay/sdk/data/a;->w:Lcom/alipay/sdk/data/a;

    .line 127
    sget-object v0, Lcom/alipay/sdk/data/a;->w:Lcom/alipay/sdk/data/a;

    invoke-direct {v0}, Lcom/alipay/sdk/data/a;->h()V

    .line 129
    :cond_0
    sget-object v0, Lcom/alipay/sdk/data/a;->w:Lcom/alipay/sdk/data/a;

    return-object v0
.end method

.method private h()V
    .locals 3

    .line 133
    invoke-static {}, Lcom/alipay/sdk/sys/b;->a()Lcom/alipay/sdk/sys/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/alipay/sdk/sys/b;->b()Landroid/content/Context;

    move-result-object v0

    const-string v1, "alipay_cashier_dynamic_config"

    const/4 v2, 0x0

    .line 134
    invoke-static {v0, v1, v2}, Lcom/alipay/sdk/util/j;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 135
    invoke-direct {p0, v0}, Lcom/alipay/sdk/data/a;->a(Ljava/lang/String;)V

    return-void
.end method

.method private i()V
    .locals 3

    .line 159
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "timeout"

    .line 160
    invoke-virtual {p0}, Lcom/alipay/sdk/data/a;->a()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "tbreturl"

    .line 161
    invoke-virtual {p0}, Lcom/alipay/sdk/data/a;->d()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "configQueryInterval"

    .line 162
    invoke-virtual {p0}, Lcom/alipay/sdk/data/a;->e()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "launchAppSwitch"

    .line 163
    invoke-virtual {p0}, Lcom/alipay/sdk/data/a;->f()Ljava/util/List;

    move-result-object v2

    invoke-static {v2}, Lcom/alipay/sdk/data/a$a;->a(Ljava/util/List;)Lorg/json/JSONArray;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "scheme_pay"

    .line 164
    invoke-virtual {p0}, Lcom/alipay/sdk/data/a;->b()Z

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string v1, "intercept_batch"

    .line 165
    invoke-virtual {p0}, Lcom/alipay/sdk/data/a;->c()Z

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    .line 168
    invoke-static {}, Lcom/alipay/sdk/sys/b;->a()Lcom/alipay/sdk/sys/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/alipay/sdk/sys/b;->b()Landroid/content/Context;

    move-result-object v1

    const-string v2, "alipay_cashier_dynamic_config"

    .line 169
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v2, v0}, Lcom/alipay/sdk/util/j;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 171
    invoke-static {v0}, Lcom/alipay/sdk/util/c;->a(Ljava/lang/Throwable;)V

    :goto_0
    return-void
.end method


# virtual methods
.method public a()I
    .locals 3

    .line 84
    iget v0, p0, Lcom/alipay/sdk/data/a;->q:I

    const-string v1, ""

    const/16 v2, 0x3e8

    if-lt v0, v2, :cond_1

    const/16 v2, 0x4e20

    if-le v0, v2, :cond_0

    goto :goto_0

    .line 88
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "DynamicConfig::getJumpTimeout >"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v2, p0, Lcom/alipay/sdk/data/a;->q:I

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 89
    iget v0, p0, Lcom/alipay/sdk/data/a;->q:I

    return v0

    :cond_1
    :goto_0
    const-string v0, "DynamicConfig::getJumpTimeout(default) >3500"

    .line 85
    invoke-static {v1, v0}, Lcom/alipay/sdk/util/c;->b(Ljava/lang/String;Ljava/lang/String;)V

    const/16 v0, 0xdac

    return v0
.end method

.method public a(Landroid/content/Context;)V
    .locals 2

    .line 199
    new-instance v0, Ljava/lang/Thread;

    new-instance v1, Lcom/alipay/sdk/data/b;

    invoke-direct {v1, p0, p1}, Lcom/alipay/sdk/data/b;-><init>(Lcom/alipay/sdk/data/a;Landroid/content/Context;)V

    invoke-direct {v0, v1}, Ljava/lang/Thread;-><init>(Ljava/lang/Runnable;)V

    .line 214
    invoke-virtual {v0}, Ljava/lang/Thread;->start()V

    return-void
.end method

.method public a(Z)V
    .locals 0

    .line 118
    iput-boolean p1, p0, Lcom/alipay/sdk/data/a;->p:Z

    return-void
.end method

.method public b()Z
    .locals 1

    .line 93
    iget-boolean v0, p0, Lcom/alipay/sdk/data/a;->t:Z

    return v0
.end method

.method public c()Z
    .locals 1

    .line 97
    iget-boolean v0, p0, Lcom/alipay/sdk/data/a;->u:Z

    return v0
.end method

.method public d()Ljava/lang/String;
    .locals 1

    .line 101
    iget-object v0, p0, Lcom/alipay/sdk/data/a;->r:Ljava/lang/String;

    return-object v0
.end method

.method public e()I
    .locals 1

    .line 105
    iget v0, p0, Lcom/alipay/sdk/data/a;->s:I

    return v0
.end method

.method public f()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/alipay/sdk/data/a$a;",
            ">;"
        }
    .end annotation

    .line 114
    iget-object v0, p0, Lcom/alipay/sdk/data/a;->v:Ljava/util/List;

    return-object v0
.end method
