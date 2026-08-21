.class public Lcom/mbridge/msdk/foundation/tools/l;
.super Ljava/lang/Object;
.source "InstallAppManager.java"


# static fields
.field private static b:Lcom/mbridge/msdk/foundation/tools/l;


# instance fields
.field private a:Landroid/content/Context;

.field private c:Landroid/content/SharedPreferences;

.field private d:Z

.field private e:Lcom/mbridge/msdk/foundation/tools/FastKV;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 48
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 34
    iput-boolean v0, p0, Lcom/mbridge/msdk/foundation/tools/l;->d:Z

    const/4 v0, 0x0

    .line 35
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/l;->e:Lcom/mbridge/msdk/foundation/tools/FastKV;

    .line 49
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/tools/l;->a:Landroid/content/Context;

    .line 50
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/b;->a()Lcom/mbridge/msdk/foundation/controller/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/b;->d()Z

    move-result p1

    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/tools/l;->d:Z

    return-void
.end method

.method public static a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/tools/l;
    .locals 2

    .line 38
    sget-object v0, Lcom/mbridge/msdk/foundation/tools/l;->b:Lcom/mbridge/msdk/foundation/tools/l;

    if-nez v0, :cond_1

    .line 39
    const-class v0, Lcom/mbridge/msdk/foundation/tools/l;

    monitor-enter v0

    .line 40
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/foundation/tools/l;->b:Lcom/mbridge/msdk/foundation/tools/l;

    if-nez v1, :cond_0

    .line 41
    new-instance v1, Lcom/mbridge/msdk/foundation/tools/l;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/foundation/tools/l;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/mbridge/msdk/foundation/tools/l;->b:Lcom/mbridge/msdk/foundation/tools/l;

    .line 43
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0

    .line 45
    :cond_1
    :goto_0
    sget-object p0, Lcom/mbridge/msdk/foundation/tools/l;->b:Lcom/mbridge/msdk/foundation/tools/l;

    return-object p0
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Ljava/util/concurrent/CopyOnWriteArraySet;
    .locals 10
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/concurrent/CopyOnWriteArraySet<",
            "Lcom/mbridge/msdk/foundation/entity/i;",
            ">;"
        }
    .end annotation

    .line 56
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArraySet;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArraySet;-><init>()V

    .line 57
    iget-boolean v1, p0, Lcom/mbridge/msdk/foundation/tools/l;->d:Z

    const/4 v2, 0x0

    const-string v3, "installed"

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/l;->e:Lcom/mbridge/msdk/foundation/tools/FastKV;

    if-nez v1, :cond_0

    .line 59
    :try_start_0
    new-instance v1, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;

    sget-object v4, Lcom/mbridge/msdk/foundation/same/b/c;->m:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v4

    invoke-direct {v1, v4, v3}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;->build()Lcom/mbridge/msdk/foundation/tools/FastKV;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/foundation/tools/l;->e:Lcom/mbridge/msdk/foundation/tools/FastKV;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 61
    :catch_0
    iput-object v2, p0, Lcom/mbridge/msdk/foundation/tools/l;->e:Lcom/mbridge/msdk/foundation/tools/FastKV;

    .line 65
    :cond_0
    :goto_0
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/l;->e:Lcom/mbridge/msdk/foundation/tools/FastKV;

    const-string v4, "packageName"

    const-string v5, "campaignId"

    const-string v6, ""

    const-string v7, "_"

    const/4 v8, 0x0

    if-eqz v1, :cond_1

    .line 68
    :try_start_1
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v9, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1, v6}, Lcom/mbridge/msdk/foundation/tools/FastKV;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    goto :goto_3

    .line 72
    :catch_2
    :goto_1
    :try_start_2
    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_2

    .line 73
    new-instance p1, Lorg/json/JSONArray;

    invoke-direct {p1, v2}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 74
    :goto_2
    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result v1

    if-ge v8, v1, :cond_2

    .line 75
    new-instance v1, Lcom/mbridge/msdk/foundation/entity/i;

    invoke-direct {v1}, Lcom/mbridge/msdk/foundation/entity/i;-><init>()V

    .line 76
    invoke-virtual {p1, v8}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v2

    .line 77
    invoke-virtual {v2, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/mbridge/msdk/foundation/entity/i;->a(Ljava/lang/String;)V

    .line 78
    invoke-virtual {v2, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/mbridge/msdk/foundation/entity/i;->b(Ljava/lang/String;)V

    .line 79
    invoke-virtual {v0, v1}, Ljava/util/concurrent/CopyOnWriteArraySet;->add(Ljava/lang/Object;)Z
    :try_end_2
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1

    add-int/lit8 v8, v8, 0x1

    goto :goto_2

    .line 83
    :goto_3
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    goto :goto_5

    .line 86
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/foundation/tools/l;->a:Landroid/content/Context;

    if-eqz v1, :cond_2

    .line 88
    :try_start_3
    invoke-virtual {v1, v3, v8}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    iput-object v1, p0, Lcom/mbridge/msdk/foundation/tools/l;->c:Landroid/content/SharedPreferences;

    if-eqz v1, :cond_2

    .line 90
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v1, p1, v6}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 91
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 92
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1, p1}, Lorg/json/JSONArray;-><init>(Ljava/lang/String;)V

    .line 93
    :goto_4
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result p1

    if-ge v8, p1, :cond_2

    .line 94
    new-instance p1, Lcom/mbridge/msdk/foundation/entity/i;

    invoke-direct {p1}, Lcom/mbridge/msdk/foundation/entity/i;-><init>()V

    .line 95
    invoke-virtual {v1, v8}, Lorg/json/JSONArray;->getJSONObject(I)Lorg/json/JSONObject;

    move-result-object v2

    .line 96
    invoke-virtual {v2, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1, v3}, Lcom/mbridge/msdk/foundation/entity/i;->a(Ljava/lang/String;)V

    .line 97
    invoke-virtual {v2, v4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v2}, Lcom/mbridge/msdk/foundation/entity/i;->b(Ljava/lang/String;)V

    .line 98
    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArraySet;->add(Ljava/lang/Object;)Z
    :try_end_3
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_3

    add-int/lit8 v8, v8, 0x1

    goto :goto_4

    :catch_3
    move-exception p1

    .line 104
    invoke-virtual {p1}, Lorg/json/JSONException;->printStackTrace()V

    :cond_2
    :goto_5
    return-object v0
.end method

.method public final a(Ljava/util/Set;)V
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Set<",
            "Lcom/mbridge/msdk/foundation/entity/i;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_2

    .line 114
    invoke-interface {p1}, Ljava/util/Set;->size()I

    move-result v0

    if-ltz v0, :cond_2

    .line 116
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/tools/l;->d:Z

    const-string v1, "installed"

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/l;->e:Lcom/mbridge/msdk/foundation/tools/FastKV;

    if-nez v0, :cond_0

    .line 118
    :try_start_0
    new-instance v0, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;

    sget-object v2, Lcom/mbridge/msdk/foundation/same/b/c;->m:Lcom/mbridge/msdk/foundation/same/b/c;

    invoke-static {v2}, Lcom/mbridge/msdk/foundation/same/b/e;->b(Lcom/mbridge/msdk/foundation/same/b/c;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v0, v2, v1}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/tools/FastKV$Builder;->build()Lcom/mbridge/msdk/foundation/tools/FastKV;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/l;->e:Lcom/mbridge/msdk/foundation/tools/FastKV;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 v0, 0x0

    .line 120
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/l;->e:Lcom/mbridge/msdk/foundation/tools/FastKV;

    .line 123
    :cond_0
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/l;->e:Lcom/mbridge/msdk/foundation/tools/FastKV;

    const-string v2, "_"

    if-eqz v0, :cond_1

    .line 125
    :try_start_1
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/entity/i;->a(Ljava/util/Set;)Ljava/lang/String;

    move-result-object p1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    .line 127
    :try_start_2
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/l;->e:Lcom/mbridge/msdk/foundation/tools/FastKV;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p1}, Lcom/mbridge/msdk/foundation/tools/FastKV;->putString(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3

    goto :goto_1

    :catch_1
    move-exception p1

    .line 132
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_1

    .line 136
    :cond_1
    :try_start_3
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/entity/i;->a(Ljava/util/Set;)Ljava/lang/String;

    move-result-object p1

    .line 137
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/l;->a:Landroid/content/Context;

    if-eqz v0, :cond_2

    .line 138
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/tools/l;->a:Landroid/content/Context;

    const/4 v3, 0x0

    invoke-virtual {v0, v1, v3}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/foundation/tools/l;->c:Landroid/content/SharedPreferences;

    if-eqz v0, :cond_2

    .line 140
    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 142
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1, p1}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 143
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2

    goto :goto_1

    :catch_2
    move-exception p1

    .line 150
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :catch_3
    :cond_2
    :goto_1
    return-void
.end method
