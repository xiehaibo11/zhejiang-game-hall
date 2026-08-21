.class public final Lcom/tkay/expressad/foundation/d/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/e/a;
.implements Ljava/io/Serializable;


# static fields
.field private static final a:Ljava/lang/String; = "https://img.toponad.com/sdk/app-permissions.html?key="

.field private static b:Ljava/lang/String; = "app_name"

.field private static c:Ljava/lang/String; = "perm_desc"

.field private static d:Ljava/lang/String; = "ori_perm_desc"

.field private static e:Ljava/lang/String; = "ori_perm_all"

.field private static f:Ljava/lang/String; = "pri_url"

.field private static g:Ljava/lang/String; = "upd_time"

.field private static h:Ljava/lang/String; = "app_ver"

.field private static i:Ljava/lang/String; = "dev_name"


# instance fields
.field private j:Ljava/lang/String;

.field private k:Ljava/lang/String;

.field private l:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private m:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private n:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private o:Ljava/lang/String;

.field private p:Ljava/lang/String;

.field private q:Ljava/lang/String;

.field private r:Ljava/lang/String;

.field private s:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 35
    new-instance v0, Ljava/util/ArrayList;

    const/4 v1, 0x3

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/d/a;->l:Ljava/util/ArrayList;

    .line 36
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/d/a;->m:Ljava/util/ArrayList;

    .line 37
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/expressad/foundation/d/a;->n:Ljava/util/ArrayList;

    return-void
.end method

.method private static a(Lcom/tkay/expressad/foundation/d/a;)Lcom/tkay/expressad/foundation/d/a;
    .locals 0

    if-nez p0, :cond_0

    .line 133
    new-instance p0, Lcom/tkay/expressad/foundation/d/a;

    invoke-direct {p0}, Lcom/tkay/expressad/foundation/d/a;-><init>()V

    :cond_0
    return-object p0
.end method

.method public static a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/d/a;
    .locals 1

    .line 170
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 171
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 172
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/a;->a(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/a;

    move-result-object p0
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 175
    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static a(Lorg/json/JSONObject;)Lcom/tkay/expressad/foundation/d/a;
    .locals 7

    .line 212
    sget-object v0, Lcom/tkay/expressad/foundation/d/a;->b:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 213
    invoke-static {v1}, Lcom/tkay/expressad/foundation/d/a;->a(Lcom/tkay/expressad/foundation/d/a;)Lcom/tkay/expressad/foundation/d/a;

    move-result-object v1

    .line 214
    sget-object v0, Lcom/tkay/expressad/foundation/d/a;->b:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 1066
    iput-object v0, v1, Lcom/tkay/expressad/foundation/d/a;->k:Ljava/lang/String;

    .line 216
    :cond_0
    sget-object v0, Lcom/tkay/expressad/foundation/d/a;->c:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    const/4 v2, 0x0

    if-eqz v0, :cond_4

    .line 217
    invoke-static {v1}, Lcom/tkay/expressad/foundation/d/a;->a(Lcom/tkay/expressad/foundation/d/a;)Lcom/tkay/expressad/foundation/d/a;

    move-result-object v1

    .line 218
    sget-object v0, Lcom/tkay/expressad/foundation/d/a;->c:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 221
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/a;->a(Lorg/json/JSONArray;)Ljava/util/ArrayList;

    move-result-object v3

    .line 1074
    iput-object v3, v1, Lcom/tkay/expressad/foundation/d/a;->l:Ljava/util/ArrayList;

    .line 1086
    iget-object v3, v1, Lcom/tkay/expressad/foundation/d/a;->n:Ljava/util/ArrayList;

    :try_start_0
    const-string v4, "https://img.toponad.com/sdk/app-permissions.html?key="

    move v5, v2

    .line 225
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v6

    if-ge v5, v6, :cond_3

    .line 226
    invoke-virtual {v0, v5}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v6

    .line 227
    instance-of v6, v6, Ljava/lang/String;

    if-eqz v6, :cond_2

    if-nez v5, :cond_1

    .line 229
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    goto :goto_1

    .line 231
    :cond_1
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ","

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    :cond_2
    :goto_1
    add-int/lit8 v5, v5, 0x1

    goto :goto_0

    .line 2058
    :cond_3
    iput-object v4, v1, Lcom/tkay/expressad/foundation/d/a;->o:Ljava/lang/String;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    .line 237
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 2090
    :goto_2
    iput-object v3, v1, Lcom/tkay/expressad/foundation/d/a;->n:Ljava/util/ArrayList;

    .line 243
    :cond_4
    sget-object v0, Lcom/tkay/expressad/foundation/d/a;->d:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_7

    .line 244
    invoke-static {v1}, Lcom/tkay/expressad/foundation/d/a;->a(Lcom/tkay/expressad/foundation/d/a;)Lcom/tkay/expressad/foundation/d/a;

    move-result-object v1

    .line 245
    sget-object v0, Lcom/tkay/expressad/foundation/d/a;->d:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object v0

    if-eqz v0, :cond_7

    .line 247
    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/a;->a(Lorg/json/JSONArray;)Ljava/util/ArrayList;

    move-result-object v3

    .line 3082
    iput-object v3, v1, Lcom/tkay/expressad/foundation/d/a;->m:Ljava/util/ArrayList;

    .line 3086
    iget-object v3, v1, Lcom/tkay/expressad/foundation/d/a;->n:Ljava/util/ArrayList;

    .line 251
    :goto_3
    :try_start_1
    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v4

    if-ge v2, v4, :cond_6

    .line 252
    invoke-virtual {v0, v2}, Lorg/json/JSONArray;->get(I)Ljava/lang/Object;

    move-result-object v4

    .line 253
    instance-of v5, v4, Ljava/lang/String;

    if-eqz v5, :cond_5

    .line 254
    check-cast v4, Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    :cond_5
    add-int/lit8 v2, v2, 0x1

    goto :goto_3

    :catch_1
    move-exception v0

    .line 258
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    .line 3090
    :cond_6
    iput-object v3, v1, Lcom/tkay/expressad/foundation/d/a;->n:Ljava/util/ArrayList;

    .line 263
    :cond_7
    sget-object v0, Lcom/tkay/expressad/foundation/d/a;->f:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_8

    .line 264
    invoke-static {v1}, Lcom/tkay/expressad/foundation/d/a;->a(Lcom/tkay/expressad/foundation/d/a;)Lcom/tkay/expressad/foundation/d/a;

    move-result-object v1

    .line 265
    sget-object v0, Lcom/tkay/expressad/foundation/d/a;->f:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 3098
    iput-object v0, v1, Lcom/tkay/expressad/foundation/d/a;->p:Ljava/lang/String;

    .line 267
    :cond_8
    sget-object v0, Lcom/tkay/expressad/foundation/d/a;->g:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_9

    .line 268
    invoke-static {v1}, Lcom/tkay/expressad/foundation/d/a;->a(Lcom/tkay/expressad/foundation/d/a;)Lcom/tkay/expressad/foundation/d/a;

    move-result-object v1

    .line 269
    sget-object v0, Lcom/tkay/expressad/foundation/d/a;->g:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 3106
    iput-object v0, v1, Lcom/tkay/expressad/foundation/d/a;->q:Ljava/lang/String;

    .line 271
    :cond_9
    sget-object v0, Lcom/tkay/expressad/foundation/d/a;->h:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_a

    .line 272
    invoke-static {v1}, Lcom/tkay/expressad/foundation/d/a;->a(Lcom/tkay/expressad/foundation/d/a;)Lcom/tkay/expressad/foundation/d/a;

    move-result-object v1

    .line 273
    sget-object v0, Lcom/tkay/expressad/foundation/d/a;->h:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 3114
    iput-object v0, v1, Lcom/tkay/expressad/foundation/d/a;->r:Ljava/lang/String;

    .line 275
    :cond_a
    sget-object v0, Lcom/tkay/expressad/foundation/d/a;->i:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_b

    .line 276
    invoke-static {v1}, Lcom/tkay/expressad/foundation/d/a;->a(Lcom/tkay/expressad/foundation/d/a;)Lcom/tkay/expressad/foundation/d/a;

    move-result-object v1

    .line 277
    sget-object v0, Lcom/tkay/expressad/foundation/d/a;->i:Ljava/lang/String;

    invoke-virtual {p0, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 3122
    iput-object v0, v1, Lcom/tkay/expressad/foundation/d/a;->s:Ljava/lang/String;

    :cond_b
    if-eqz v1, :cond_c

    .line 281
    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    .line 4050
    iput-object p0, v1, Lcom/tkay/expressad/foundation/d/a;->j:Ljava/lang/String;

    :cond_c
    return-object v1
.end method

.method private static a(Lorg/json/JSONArray;)Ljava/util/ArrayList;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lorg/json/JSONArray;",
            ")",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    if-eqz p0, :cond_1

    .line 181
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-lez v0, :cond_1

    .line 182
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    .line 183
    :goto_0
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 184
    invoke-virtual {p0, v1}, Lorg/json/JSONArray;->optString(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-object v0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method private a(Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 74
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/a;->l:Ljava/util/ArrayList;

    return-void
.end method

.method private b(Ljava/lang/String;)V
    .locals 0

    .line 50
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/a;->j:Ljava/lang/String;

    return-void
.end method

.method private b(Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 82
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/a;->m:Ljava/util/ArrayList;

    return-void
.end method

.method private c(Ljava/lang/String;)V
    .locals 0

    .line 58
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/a;->o:Ljava/lang/String;

    return-void
.end method

.method private c(Ljava/util/ArrayList;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    .line 90
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/a;->n:Ljava/util/ArrayList;

    return-void
.end method

.method private static d(Ljava/util/ArrayList;)Lorg/json/JSONArray;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;)",
            "Lorg/json/JSONArray;"
        }
    .end annotation

    if-eqz p0, :cond_1

    .line 192
    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 193
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    const/4 v1, 0x0

    .line 194
    :goto_0
    invoke-virtual {p0}, Ljava/util/ArrayList;->size()I

    move-result v2

    if-ge v1, v2, :cond_0

    .line 195
    invoke-virtual {p0, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v0, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_0
    return-object v0

    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method

.method private d(Ljava/lang/String;)V
    .locals 0

    .line 66
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/a;->k:Ljava/lang/String;

    return-void
.end method

.method private e(Ljava/lang/String;)V
    .locals 0

    .line 98
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/a;->p:Ljava/lang/String;

    return-void
.end method

.method private f(Ljava/lang/String;)V
    .locals 0

    .line 106
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/a;->q:Ljava/lang/String;

    return-void
.end method

.method private g(Ljava/lang/String;)V
    .locals 0

    .line 114
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/a;->r:Ljava/lang/String;

    return-void
.end method

.method private h()Ljava/lang/String;
    .locals 1

    .line 46
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/a;->j:Ljava/lang/String;

    return-object v0
.end method

.method private h(Ljava/lang/String;)V
    .locals 0

    .line 122
    iput-object p1, p0, Lcom/tkay/expressad/foundation/d/a;->s:Ljava/lang/String;

    return-void
.end method

.method private i()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 70
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/a;->l:Ljava/util/ArrayList;

    return-object v0
.end method

.method private j()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 78
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/a;->m:Ljava/util/ArrayList;

    return-object v0
.end method

.method private k()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 86
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/a;->n:Ljava/util/ArrayList;

    return-object v0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 54
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/a;->o:Ljava/lang/String;

    return-object v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 62
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/a;->k:Ljava/lang/String;

    return-object v0
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 94
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/a;->p:Ljava/lang/String;

    return-object v0
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    .line 102
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/a;->q:Ljava/lang/String;

    return-object v0
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    .line 110
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/a;->r:Ljava/lang/String;

    return-object v0
.end method

.method public final f()Ljava/lang/String;
    .locals 1

    .line 118
    iget-object v0, p0, Lcom/tkay/expressad/foundation/d/a;->s:Ljava/lang/String;

    return-object v0
.end method

.method public final g()Lorg/json/JSONObject;
    .locals 3

    const/4 v0, 0x0

    .line 154
    :try_start_0
    new-instance v1, Lorg/json/JSONObject;

    iget-object v2, p0, Lcom/tkay/expressad/foundation/d/a;->j:Ljava/lang/String;

    invoke-direct {v1, v2}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    .line 155
    invoke-virtual {v1}, Lorg/json/JSONObject;->length()I

    move-result v2
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    if-lez v2, :cond_0

    return-object v1

    :cond_0
    return-object v0

    :catch_0
    move-exception v1

    .line 161
    invoke-virtual {v1}, Lorg/json/JSONException;->printStackTrace()V

    return-object v0
.end method

.method public final toString()Ljava/lang/String;
    .locals 3

    .line 140
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "ApkDisplayInfo{appName=\'"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/foundation/d/a;->k:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const/16 v1, 0x27

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", permDescJArray="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/foundation/d/a;->l:Ljava/util/ArrayList;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ", permDescOriJArray="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/foundation/d/a;->m:Ljava/util/ArrayList;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ", permDescAll="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/foundation/d/a;->n:Ljava/util/ArrayList;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v2, ", priUrl=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/foundation/d/a;->p:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", updateTime=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/foundation/d/a;->q:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", appVersion=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/foundation/d/a;->r:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const-string v2, ", devName=\'"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/tkay/expressad/foundation/d/a;->s:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
