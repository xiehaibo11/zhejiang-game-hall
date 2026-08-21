.class public Lcom/tkay/expressad/foundation/a/a/a;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String;

.field private static volatile c:Lcom/tkay/expressad/foundation/a/a/a;


# instance fields
.field b:Landroid/content/SharedPreferences;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 18
    const-class v0, Lcom/tkay/expressad/foundation/a/a/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/a/a/a;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/expressad/foundation/a/a/a;
    .locals 2

    .line 27
    sget-object v0, Lcom/tkay/expressad/foundation/a/a/a;->c:Lcom/tkay/expressad/foundation/a/a/a;

    if-nez v0, :cond_1

    .line 28
    const-class v0, Lcom/tkay/expressad/foundation/a/a/a;

    monitor-enter v0

    .line 29
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/foundation/a/a/a;->c:Lcom/tkay/expressad/foundation/a/a/a;

    if-nez v1, :cond_0

    .line 30
    new-instance v1, Lcom/tkay/expressad/foundation/a/a/a;

    invoke-direct {v1}, Lcom/tkay/expressad/foundation/a/a/a;-><init>()V

    sput-object v1, Lcom/tkay/expressad/foundation/a/a/a;->c:Lcom/tkay/expressad/foundation/a/a/a;

    .line 31
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 33
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/expressad/foundation/a/a/a;->c:Lcom/tkay/expressad/foundation/a/a/a;

    return-object v0
.end method

.method private a(Ljava/lang/String;I)V
    .locals 3

    .line 55
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 59
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    if-nez v1, :cond_1

    if-eqz v0, :cond_1

    const-string v1, "tkay_expressad"

    const/4 v2, 0x0

    .line 60
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    .line 62
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 63
    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putInt(Ljava/lang/String;I)Landroid/content/SharedPreferences$Editor;

    .line 64
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 66
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private a(Ljava/lang/String;J)V
    .locals 3

    .line 89
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 94
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    if-nez v1, :cond_1

    if-eqz v0, :cond_1

    const-string v1, "tkay_expressad"

    const/4 v2, 0x0

    .line 95
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    .line 97
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 98
    invoke-interface {v0, p1, p2, p3}, Landroid/content/SharedPreferences$Editor;->putLong(Ljava/lang/String;J)Landroid/content/SharedPreferences$Editor;

    .line 99
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 101
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private b(Ljava/lang/String;I)I
    .locals 3

    .line 126
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    return p2

    .line 130
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    if-nez v1, :cond_1

    const-string v1, "tkay_expressad"

    const/4 v2, 0x0

    .line 131
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    .line 134
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 136
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return p2
.end method

.method private b()Ljava/util/List;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 159
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 160
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v1

    if-nez v1, :cond_0

    const/4 v0, 0x0

    return-object v0

    .line 164
    :cond_0
    iget-object v2, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    if-nez v2, :cond_1

    if-eqz v1, :cond_1

    const/4 v2, 0x0

    const-string v3, "tkay_expressad"

    .line 165
    invoke-virtual {v1, v3, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    .line 168
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    invoke-interface {v1}, Landroid/content/SharedPreferences;->getAll()Ljava/util/Map;

    move-result-object v1

    .line 169
    invoke-interface {v1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Map$Entry;

    .line 170
    invoke-interface {v2}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_2
    return-object v0
.end method

.method private c(Ljava/lang/String;)I
    .locals 3

    const/4 v0, 0x0

    .line 72
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v1

    if-nez v1, :cond_0

    return v0

    .line 76
    :cond_0
    iget-object v2, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    if-nez v2, :cond_1

    if-eqz v1, :cond_1

    const-string v2, "tkay_expressad"

    .line 77
    invoke-virtual {v1, v2, v0}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    .line 80
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    invoke-interface {v1, p1, v0}, Landroid/content/SharedPreferences;->getInt(Ljava/lang/String;I)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    move-exception p1

    .line 82
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return v0
.end method

.method private d(Ljava/lang/String;)Ljava/lang/Long;
    .locals 5

    const-wide/16 v0, 0x0

    .line 107
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v2

    if-nez v2, :cond_0

    .line 110
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    return-object p1

    .line 112
    :cond_0
    iget-object v3, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    if-nez v3, :cond_1

    if-eqz v2, :cond_1

    const-string v3, "tkay_expressad"

    const/4 v4, 0x0

    .line 113
    invoke-virtual {v2, v3, v4}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v2

    iput-object v2, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    .line 116
    :cond_1
    iget-object v2, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    invoke-interface {v2, p1, v0, v1}, Landroid/content/SharedPreferences;->getLong(Ljava/lang/String;J)J

    move-result-wide v2

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 118
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    .line 120
    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    return-object p1
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    const/4 v0, 0x0

    .line 143
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v1

    if-nez v1, :cond_0

    return-object v0

    .line 147
    :cond_0
    iget-object v2, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    if-nez v2, :cond_1

    if-eqz v1, :cond_1

    const-string v2, "tkay_expressad"

    const/4 v3, 0x0

    .line 148
    invoke-virtual {v1, v2, v3}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v1

    iput-object v1, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    .line 151
    :cond_1
    iget-object v1, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    const-string v2, ""

    invoke-interface {v1, p1, v2}, Landroid/content/SharedPreferences;->getString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    .line 153
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-object v0
.end method

.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 38
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 42
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    if-nez v1, :cond_1

    if-eqz v0, :cond_1

    const-string v1, "tkay_expressad"

    const/4 v2, 0x0

    .line 43
    invoke-virtual {v0, v1, v2}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    .line 45
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    .line 46
    invoke-interface {v0, p1, p2}, Landroid/content/SharedPreferences$Editor;->putString(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    .line 47
    invoke-interface {v0}, Landroid/content/SharedPreferences$Editor;->apply()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p1

    .line 49
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 3

    .line 176
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    return-void

    .line 181
    :cond_0
    iget-object v1, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    if-nez v1, :cond_1

    if-eqz v0, :cond_1

    const/4 v1, 0x0

    const-string v2, "tkay_expressad"

    .line 182
    invoke-virtual {v0, v2, v1}, Landroid/content/Context;->getSharedPreferences(Ljava/lang/String;I)Landroid/content/SharedPreferences;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    .line 185
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/foundation/a/a/a;->b:Landroid/content/SharedPreferences;

    invoke-interface {v0}, Landroid/content/SharedPreferences;->edit()Landroid/content/SharedPreferences$Editor;

    move-result-object v0

    invoke-interface {v0, p1}, Landroid/content/SharedPreferences$Editor;->remove(Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    invoke-interface {p1}, Landroid/content/SharedPreferences$Editor;->apply()V

    return-void
.end method
