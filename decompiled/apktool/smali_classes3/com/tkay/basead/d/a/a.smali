.class public Lcom/tkay/basead/d/a/a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/d/a/a$a;
    }
.end annotation


# static fields
.field private static volatile d:Lcom/tkay/basead/d/a/a;


# instance fields
.field a:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/Boolean;",
            ">;"
        }
    .end annotation
.end field

.field b:Ljava/util/concurrent/ConcurrentHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentHashMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/common/a/g;",
            ">;"
        }
    .end annotation
.end field

.field private c:Landroid/content/Context;


# direct methods
.method private constructor <init>(Landroid/content/Context;)V
    .locals 1

    .line 52
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 53
    invoke-virtual {p1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/d/a/a;->c:Landroid/content/Context;

    .line 54
    new-instance p1, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v0, 0x3

    invoke-direct {p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/basead/d/a/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    .line 55
    new-instance p1, Ljava/util/concurrent/ConcurrentHashMap;

    const/4 v0, 0x2

    invoke-direct {p1, v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/basead/d/a/a;->b:Ljava/util/concurrent/ConcurrentHashMap;

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/d/a/a;)Landroid/content/Context;
    .locals 0

    .line 42
    iget-object p0, p0, Lcom/tkay/basead/d/a/a;->c:Landroid/content/Context;

    return-object p0
.end method

.method public static a(Landroid/content/Context;)Lcom/tkay/basead/d/a/a;
    .locals 2

    .line 59
    sget-object v0, Lcom/tkay/basead/d/a/a;->d:Lcom/tkay/basead/d/a/a;

    if-nez v0, :cond_1

    .line 60
    const-class v0, Lcom/tkay/basead/d/a/a;

    monitor-enter v0

    .line 61
    :try_start_0
    sget-object v1, Lcom/tkay/basead/d/a/a;->d:Lcom/tkay/basead/d/a/a;

    if-nez v1, :cond_0

    .line 62
    new-instance v1, Lcom/tkay/basead/d/a/a;

    invoke-direct {v1, p0}, Lcom/tkay/basead/d/a/a;-><init>(Landroid/content/Context;)V

    sput-object v1, Lcom/tkay/basead/d/a/a;->d:Lcom/tkay/basead/d/a/a;

    .line 63
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0

    .line 65
    :cond_1
    :goto_0
    sget-object p0, Lcom/tkay/basead/d/a/a;->d:Lcom/tkay/basead/d/a/a;

    return-object p0
.end method

.method static synthetic a(Lcom/tkay/basead/d/a/a;Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;)Lcom/tkay/expressad/foundation/d/d;
    .locals 0

    .line 42
    invoke-direct {p0, p1, p2}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;)Lcom/tkay/expressad/foundation/d/d;

    move-result-object p0

    return-object p0
.end method

.method private declared-synchronized a(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;)Lcom/tkay/expressad/foundation/d/d;
    .locals 3

    monitor-enter p0

    .line 180
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    .line 181
    monitor-exit p0

    return-object p1

    .line 183
    :cond_0
    :try_start_1
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/expressad/foundation/d/d;->a(Ljava/lang/String;)Lcom/tkay/expressad/foundation/d/d;

    move-result-object v0

    .line 1374
    iget-object v1, v0, Lcom/tkay/expressad/foundation/d/d;->J:Ljava/util/ArrayList;

    const/4 v2, 0x0

    .line 185
    invoke-interface {v1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/tkay/expressad/foundation/d/c;

    .line 187
    invoke-static {p1, v2}, Lcom/tkay/basead/d/a/b;->a(Lcom/tkay/core/common/f/f;Lcom/tkay/expressad/foundation/d/c;)V

    .line 189
    invoke-static {p1, v1}, Lcom/tkay/basead/d/a/b;->a(Lcom/tkay/core/common/f/f;Ljava/util/List;)V

    .line 191
    invoke-static {p2, v1}, Lcom/tkay/basead/d/a/b;->a(Lcom/tkay/core/common/f/i;Ljava/util/List;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 192
    monitor-exit p0

    return-object v0

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method

.method static synthetic a(Lcom/tkay/basead/d/a/a;Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/a$a;)V
    .locals 0

    .line 42
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/a$a;)V

    return-void
.end method

.method static synthetic a(Lcom/tkay/basead/d/a/a;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;)V
    .locals 5

    .line 2090
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/core/common/f/i;)Lcom/tkay/core/common/f/f;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const/4 v0, 0x0

    :goto_0
    if-nez v0, :cond_0

    .line 2096
    new-instance v0, Lcom/tkay/basead/g/a;

    invoke-direct {v0, p1}, Lcom/tkay/basead/g/a;-><init>(Lcom/tkay/core/common/f/i;)V

    const/4 v1, 0x0

    .line 2097
    new-instance v2, Lcom/tkay/basead/d/a/a$2;

    invoke-direct {v2, p0, p1, p2}, Lcom/tkay/basead/d/a/a$2;-><init>(Lcom/tkay/basead/d/a/a;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/g/a;->a(ILcom/tkay/core/common/h/k;)V

    return-void

    .line 2159
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/a/a;->a()Lcom/tkay/core/common/a/a;

    iget-object v1, p0, Lcom/tkay/basead/d/a/a;->c:Landroid/content/Context;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/tkay/core/common/a/a;->d(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    const/16 v1, 0xa

    .line 2160
    new-instance v2, Lcom/tkay/basead/c/i;

    iget-object v3, p1, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v4, ""

    invoke-direct {v2, v3, v4}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v1, v0, v2}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 2162
    invoke-static {}, Lcom/tkay/core/common/a/a;->a()Lcom/tkay/core/common/a/a;

    iget-object v1, p0, Lcom/tkay/basead/d/a/a;->c:Landroid/content/Context;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/tkay/core/common/a/a;->c(Landroid/content/Context;Ljava/lang/String;)V

    .line 2164
    :cond_1
    invoke-direct {p0, v0, p1}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;)Lcom/tkay/expressad/foundation/d/d;

    move-result-object v1

    if-eqz p2, :cond_2

    .line 2167
    invoke-interface {p2, v0}, Lcom/tkay/basead/d/a/a$a;->a(Lcom/tkay/core/common/f/f;)V

    .line 2169
    :cond_2
    invoke-direct {p0, v0, p1, v1, p2}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/a$a;)V

    return-void
.end method

.method private a(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/a$a;)V
    .locals 2

    .line 197
    invoke-virtual {p1}, Lcom/tkay/core/common/f/f;->a()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 198
    invoke-static {}, Lcom/tkay/basead/d/a/b;->a()Lcom/tkay/basead/d/a/b;

    move-result-object v0

    new-instance v1, Lcom/tkay/basead/d/a/a$3;

    invoke-direct {v1, p0, p2, p4, p1}, Lcom/tkay/basead/d/a/a$3;-><init>(Lcom/tkay/basead/d/a/a;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;Lcom/tkay/core/common/f/f;)V

    invoke-virtual {v0, p1, p2, p3, v1}, Lcom/tkay/basead/d/a/b;->a(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/b$a;)V

    return-void

    .line 217
    :cond_0
    invoke-static {}, Lcom/tkay/basead/a/f;->a()Lcom/tkay/basead/a/f;

    iget-object p3, p2, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    new-instance v0, Lcom/tkay/basead/d/a/a$4;

    invoke-direct {v0, p0, p2, p4, p1}, Lcom/tkay/basead/d/a/a$4;-><init>(Lcom/tkay/basead/d/a/a;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;Lcom/tkay/core/common/f/f;)V

    invoke-static {p3, p1, p2, v0}, Lcom/tkay/basead/a/f;->a(Ljava/lang/String;Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/a/b/b$b;)V

    return-void
.end method

.method private b(Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;)V
    .locals 5

    .line 90
    :try_start_0
    invoke-virtual {p0, p1}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/core/common/f/i;)Lcom/tkay/core/common/f/f;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const/4 v0, 0x0

    :goto_0
    if-nez v0, :cond_0

    .line 96
    new-instance v0, Lcom/tkay/basead/g/a;

    invoke-direct {v0, p1}, Lcom/tkay/basead/g/a;-><init>(Lcom/tkay/core/common/f/i;)V

    const/4 v1, 0x0

    .line 97
    new-instance v2, Lcom/tkay/basead/d/a/a$2;

    invoke-direct {v2, p0, p1, p2}, Lcom/tkay/basead/d/a/a$2;-><init>(Lcom/tkay/basead/d/a/a;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;)V

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/g/a;->a(ILcom/tkay/core/common/h/k;)V

    return-void

    .line 159
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/a/a;->a()Lcom/tkay/core/common/a/a;

    iget-object v1, p0, Lcom/tkay/basead/d/a/a;->c:Landroid/content/Context;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/tkay/core/common/a/a;->d(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    const/16 v1, 0xa

    .line 160
    new-instance v2, Lcom/tkay/basead/c/i;

    iget-object v3, p1, Lcom/tkay/core/common/f/i;->d:Ljava/lang/String;

    const-string v4, ""

    invoke-direct {v2, v3, v4}, Lcom/tkay/basead/c/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {v1, v0, v2}, Lcom/tkay/basead/a/b;->a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V

    .line 162
    invoke-static {}, Lcom/tkay/core/common/a/a;->a()Lcom/tkay/core/common/a/a;

    iget-object v1, p0, Lcom/tkay/basead/d/a/a;->c:Landroid/content/Context;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/f;->b()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/tkay/core/common/a/a;->c(Landroid/content/Context;Ljava/lang/String;)V

    .line 164
    :cond_1
    invoke-direct {p0, v0, p1}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;)Lcom/tkay/expressad/foundation/d/d;

    move-result-object v1

    if-eqz p2, :cond_2

    .line 167
    invoke-interface {p2, v0}, Lcom/tkay/basead/d/a/a$a;->a(Lcom/tkay/core/common/f/f;)V

    .line 169
    :cond_2
    invoke-direct {p0, v0, p1, v1, p2}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/core/common/f/f;Lcom/tkay/core/common/f/i;Lcom/tkay/expressad/foundation/d/d;Lcom/tkay/basead/d/a/a$a;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/core/common/f/i;)Lcom/tkay/core/common/f/f;
    .locals 4

    .line 242
    invoke-static {}, Lcom/tkay/core/common/a/a;->a()Lcom/tkay/core/common/a/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/d/a/a;->c:Landroid/content/Context;

    iget-object v2, p1, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/a/a;->a(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 243
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return-object v2

    .line 247
    :cond_0
    :try_start_0
    iget-object v1, p1, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3, v0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iget v0, p1, Lcom/tkay/core/common/f/i;->f:I

    invoke-static {v1, v3, v0}, Lcom/tkay/core/common/a/c;->a(Ljava/lang/String;Lorg/json/JSONObject;I)Lcom/tkay/core/common/f/f;

    move-result-object v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    if-eqz v2, :cond_1

    .line 252
    invoke-static {v2}, Lcom/tkay/basead/d/c/b;->a(Lcom/tkay/core/common/f/h;)V

    .line 254
    invoke-static {p1, v2}, Lcom/tkay/basead/d/c/a;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/z;)V

    .line 256
    invoke-static {p1, v2}, Lcom/tkay/basead/d/c/d;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/z;)V

    :cond_1
    return-object v2
.end method

.method public final a(Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;)V
    .locals 3

    .line 70
    iget-object v0, p0, Lcom/tkay/basead/d/a/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p1, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p1, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/d/a/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p1, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p1, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/ConcurrentHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    const-string v0, "20005"

    const-string v1, "Offer data is loading."

    .line 72
    invoke-static {v0, v1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object v0

    invoke-interface {p2, p1, v0}, Lcom/tkay/basead/d/a/a$a;->a(Lcom/tkay/core/common/f/f;Lcom/tkay/basead/c/e;)V

    return-void

    .line 77
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/a/a;->a:Ljava/util/concurrent/ConcurrentHashMap;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p1, Lcom/tkay/core/common/f/i;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p1, Lcom/tkay/core/common/f/i;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    sget-object v2, Ljava/lang/Boolean;->TRUE:Ljava/lang/Boolean;

    invoke-virtual {v0, v1, v2}, Ljava/util/concurrent/ConcurrentHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 79
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/basead/d/a/a$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/basead/d/a/a$1;-><init>(Lcom/tkay/basead/d/a/a;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->b(Ljava/lang/Runnable;)V

    return-void
.end method
