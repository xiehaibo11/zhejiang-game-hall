.class public Lcom/tkay/expressad/videocommon/e/c;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String; = "reward"

.field private static final c:Ljava/lang/String; = "RewardSettingManager"

.field private static e:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/e/d;",
            ">;"
        }
    .end annotation
.end field

.field private static volatile f:Lcom/tkay/expressad/videocommon/e/c;


# instance fields
.field public b:Lcom/tkay/expressad/videocommon/e/a;

.field private d:Ljava/lang/Object;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 31
    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x3

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    sput-object v0, Lcom/tkay/expressad/videocommon/e/c;->e:Ljava/util/Map;

    return-void
.end method

.method private constructor <init>()V
    .locals 1

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 25
    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/e/c;->d:Ljava/lang/Object;

    const/4 v0, 0x0

    .line 33
    iput-object v0, p0, Lcom/tkay/expressad/videocommon/e/c;->b:Lcom/tkay/expressad/videocommon/e/a;

    .line 28
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->c()Lcom/tkay/expressad/videocommon/e/a;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/e/c;->b:Lcom/tkay/expressad/videocommon/e/a;

    return-void
.end method

.method public static a()Lcom/tkay/expressad/videocommon/e/c;
    .locals 2

    .line 38
    sget-object v0, Lcom/tkay/expressad/videocommon/e/c;->f:Lcom/tkay/expressad/videocommon/e/c;

    if-nez v0, :cond_1

    .line 39
    const-class v0, Lcom/tkay/expressad/videocommon/e/c;

    monitor-enter v0

    .line 40
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/videocommon/e/c;->f:Lcom/tkay/expressad/videocommon/e/c;

    if-nez v1, :cond_0

    .line 41
    new-instance v1, Lcom/tkay/expressad/videocommon/e/c;

    invoke-direct {v1}, Lcom/tkay/expressad/videocommon/e/c;-><init>()V

    sput-object v1, Lcom/tkay/expressad/videocommon/e/c;->f:Lcom/tkay/expressad/videocommon/e/c;

    .line 42
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 44
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/expressad/videocommon/e/c;->f:Lcom/tkay/expressad/videocommon/e/c;

    return-object v0
.end method

.method private static a(Z)Lcom/tkay/expressad/videocommon/e/d;
    .locals 6

    .line 161
    new-instance v0, Lcom/tkay/expressad/videocommon/e/d;

    invoke-direct {v0}, Lcom/tkay/expressad/videocommon/e/d;-><init>()V

    .line 163
    :try_start_0
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 164
    new-instance v2, Lcom/tkay/expressad/videocommon/c/b;

    const/4 v3, 0x1

    const/16 v4, 0xf

    const/4 v5, 0x0

    invoke-direct {v2, v3, v4, v5}, Lcom/tkay/expressad/videocommon/c/b;-><init>(IILcom/tkay/expressad/videocommon/c/a;)V

    .line 165
    invoke-interface {v1, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 166
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/e/d;->a(Ljava/util/List;)V

    .line 167
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->B()V

    .line 168
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->z()V

    .line 169
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->C()V

    .line 170
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->H()V

    .line 171
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->E()V

    .line 172
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->G()V

    .line 173
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->t()V

    .line 174
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->u()V

    .line 175
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->w()V

    .line 176
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->y()V

    .line 177
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->s()V

    .line 178
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->i()V

    .line 179
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->T()V

    .line 180
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->g()V

    if-eqz p0, :cond_0

    const/4 p0, 0x5

    .line 182
    invoke-virtual {v0, p0}, Lcom/tkay/expressad/videocommon/e/d;->a(I)V

    goto :goto_0

    :cond_0
    const/4 p0, -0x1

    .line 184
    invoke-virtual {v0, p0}, Lcom/tkay/expressad/videocommon/e/d;->a(I)V

    .line 186
    :goto_0
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->d()V

    .line 187
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->c()V

    .line 188
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->q()V

    .line 189
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->N()V

    .line 191
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/d;->P()V

    .line 192
    new-instance p0, Ljava/util/ArrayList;

    invoke-direct {p0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x4

    .line 193
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    const/4 v1, 0x6

    .line 194
    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {p0, v1}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    .line 195
    invoke-virtual {v0, p0}, Lcom/tkay/expressad/videocommon/e/d;->a(Ljava/util/ArrayList;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 197
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    return-object v0
.end method

.method private a(Ljava/lang/String;)V
    .locals 2

    .line 119
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 123
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/videocommon/e/c$1;

    invoke-direct {v1, p0}, Lcom/tkay/expressad/videocommon/e/c$1;-><init>(Lcom/tkay/expressad/videocommon/e/c;)V

    invoke-virtual {v0, p1, v1}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    return-void
.end method

.method private static b(Ljava/lang/String;)Z
    .locals 3

    const/4 v0, 0x0

    .line 138
    :try_start_0
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 139
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "unitSetting"

    .line 140
    invoke-virtual {v1, p0}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 142
    invoke-virtual {p0, v0}, Lorg/json/JSONArray;->optJSONObject(I)Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "unitId"

    .line 144
    invoke-virtual {v1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz p0, :cond_0

    .line 145
    invoke-virtual {p0}, Lorg/json/JSONArray;->length()I

    move-result p0

    if-lez p0, :cond_0

    .line 146
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-nez p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    return v0

    :catch_0
    move-exception p0

    .line 153
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method public static c()Lcom/tkay/expressad/videocommon/e/a;
    .locals 7

    .line 89
    new-instance v0, Lcom/tkay/expressad/videocommon/e/a;

    invoke-direct {v0}, Lcom/tkay/expressad/videocommon/e/a;-><init>()V

    .line 90
    new-instance v1, Ljava/util/HashMap;

    const/4 v2, 0x5

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(I)V

    const/16 v2, 0x3e8

    .line 91
    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    const-string v3, "1"

    invoke-interface {v1, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "9"

    .line 92
    invoke-interface {v1, v4, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v4, "8"

    .line 93
    invoke-interface {v1, v4, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 94
    new-instance v2, Ljava/util/HashMap;

    const/4 v4, 0x3

    invoke-direct {v2, v4}, Ljava/util/HashMap;-><init>(I)V

    .line 95
    new-instance v4, Lcom/tkay/expressad/videocommon/c/c;

    const-string v5, "Virtual Item"

    const/4 v6, 0x1

    invoke-direct {v4, v5, v6}, Lcom/tkay/expressad/videocommon/c/c;-><init>(Ljava/lang/String;I)V

    invoke-interface {v2, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 96
    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/e/a;->a(Ljava/util/Map;)V

    .line 97
    invoke-virtual {v0, v2}, Lcom/tkay/expressad/videocommon/e/a;->b(Ljava/util/Map;)V

    .line 98
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/a;->a()V

    .line 99
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/a;->b()V

    .line 100
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/a;->d()V

    .line 101
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/a;->f()V

    .line 102
    invoke-virtual {v0}, Lcom/tkay/expressad/videocommon/e/a;->h()V

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;
    .locals 3

    .line 56
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/c;->d:Ljava/lang/Object;

    monitor-enter v0

    .line 57
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "reward_"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 58
    sget-object p2, Lcom/tkay/expressad/videocommon/e/c;->e:Ljava/util/Map;

    invoke-interface {p2, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_0

    .line 59
    sget-object p2, Lcom/tkay/expressad/videocommon/e/c;->e:Ljava/util/Map;

    invoke-interface {p2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/videocommon/e/d;

    monitor-exit v0

    return-object p1

    .line 61
    :cond_0
    invoke-static {}, Lcom/tkay/expressad/foundation/a/a/a;->a()Lcom/tkay/expressad/foundation/a/a/a;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/foundation/a/a/a;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 62
    invoke-static {p2}, Lcom/tkay/expressad/videocommon/e/d;->c(Ljava/lang/String;)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p2

    .line 63
    sget-object v1, Lcom/tkay/expressad/videocommon/e/c;->e:Ljava/util/Map;

    invoke-interface {v1, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 64
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p2

    :catchall_0
    move-exception p1

    .line 66
    monitor-exit v0

    throw p1
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;
    .locals 3

    .line 70
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/c;->d:Ljava/lang/Object;

    monitor-enter v0

    .line 71
    :try_start_0
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "reward_"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "_"

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 78
    sget-object p2, Lcom/tkay/expressad/videocommon/e/c;->e:Ljava/util/Map;

    invoke-interface {p2, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Lcom/tkay/expressad/videocommon/e/d;

    if-nez p2, :cond_0

    .line 80
    invoke-static {p3}, Lcom/tkay/expressad/videocommon/e/c;->a(Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p2

    .line 81
    sget-object p3, Lcom/tkay/expressad/videocommon/e/c;->e:Ljava/util/Map;

    invoke-interface {p3, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 83
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p2

    :catchall_0
    move-exception p1

    .line 85
    monitor-exit v0

    throw p1
.end method

.method public final a(Ljava/lang/String;Z)V
    .locals 2

    .line 107
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 108
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v0

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1, p2}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 109
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/d;->J()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    const-string p1, ""

    .line 110
    :goto_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_1

    .line 111
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_1

    .line 1119
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_1

    .line 1123
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/g;->a()Lcom/tkay/expressad/videocommon/b/g;

    move-result-object p2

    new-instance v0, Lcom/tkay/expressad/videocommon/e/c$1;

    invoke-direct {v0, p0}, Lcom/tkay/expressad/videocommon/e/c$1;-><init>(Lcom/tkay/expressad/videocommon/e/c;)V

    invoke-virtual {p2, p1, v0}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    :cond_1
    return-void
.end method

.method public final b()Lcom/tkay/expressad/videocommon/e/a;
    .locals 1

    .line 48
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/e/c;->b:Lcom/tkay/expressad/videocommon/e/a;

    if-nez v0, :cond_0

    .line 49
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->c()Lcom/tkay/expressad/videocommon/e/a;

    move-result-object v0

    :cond_0
    return-object v0
.end method
