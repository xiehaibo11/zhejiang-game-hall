.class public Lcom/tkay/expressad/videocommon/b/g;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/videocommon/b/g$c;,
        Lcom/tkay/expressad/videocommon/b/g$b;,
        Lcom/tkay/expressad/videocommon/b/g$d;,
        Lcom/tkay/expressad/videocommon/b/g$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String; = "ending_page_source"

.field public static final b:Ljava/lang/String; = "ending_page_save_time"

.field private static final c:Ljava/lang/String; = "H5DownLoadManager"

.field private static volatile f:Lcom/tkay/expressad/videocommon/b/g;


# instance fields
.field private d:Ljava/util/concurrent/CopyOnWriteArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/CopyOnWriteArrayList<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private e:Ljava/util/concurrent/ConcurrentMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/concurrent/ConcurrentMap<",
            "Ljava/lang/String;",
            "Lcom/tkay/expressad/videocommon/b/b;",
            ">;"
        }
    .end annotation
.end field

.field private g:Lcom/tkay/expressad/videocommon/b/k;

.field private h:Lcom/tkay/expressad/videocommon/b/h;

.field private i:Z


# direct methods
.method private constructor <init>()V
    .locals 1

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    .line 33
    iput-boolean v0, p0, Lcom/tkay/expressad/videocommon/b/g;->i:Z

    .line 38
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/b/k;->a()Lcom/tkay/expressad/videocommon/b/k;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->g:Lcom/tkay/expressad/videocommon/b/k;

    .line 1030
    sget-object v0, Lcom/tkay/expressad/videocommon/b/h$a;->a:Lcom/tkay/expressad/videocommon/b/h;

    .line 39
    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->h:Lcom/tkay/expressad/videocommon/b/h;

    .line 40
    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->d:Ljava/util/concurrent/CopyOnWriteArrayList;

    .line 41
    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->e:Ljava/util/concurrent/ConcurrentMap;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    .line 49
    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    return-void
.end method

.method public static a()Lcom/tkay/expressad/videocommon/b/g;
    .locals 2

    .line 54
    sget-object v0, Lcom/tkay/expressad/videocommon/b/g;->f:Lcom/tkay/expressad/videocommon/b/g;

    if-nez v0, :cond_1

    .line 55
    const-class v0, Lcom/tkay/expressad/videocommon/b/g;

    monitor-enter v0

    .line 56
    :try_start_0
    sget-object v1, Lcom/tkay/expressad/videocommon/b/g;->f:Lcom/tkay/expressad/videocommon/b/g;

    if-nez v1, :cond_0

    .line 57
    new-instance v1, Lcom/tkay/expressad/videocommon/b/g;

    invoke-direct {v1}, Lcom/tkay/expressad/videocommon/b/g;-><init>()V

    sput-object v1, Lcom/tkay/expressad/videocommon/b/g;->f:Lcom/tkay/expressad/videocommon/b/g;

    .line 58
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1

    .line 60
    :cond_1
    :goto_0
    sget-object v0, Lcom/tkay/expressad/videocommon/b/g;->f:Lcom/tkay/expressad/videocommon/b/g;

    return-object v0
.end method

.method static synthetic a(Lcom/tkay/expressad/videocommon/b/g;)Lcom/tkay/expressad/videocommon/b/h;
    .locals 0

    .line 21
    iget-object p0, p0, Lcom/tkay/expressad/videocommon/b/g;->h:Lcom/tkay/expressad/videocommon/b/h;

    return-object p0
.end method

.method private a(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$d;)V
    .locals 3

    .line 1083
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->g:Lcom/tkay/expressad/videocommon/b/k;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/videocommon/b/k;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1084
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->e:Ljava/util/concurrent/ConcurrentMap;

    invoke-interface {v0, p1}, Ljava/util/concurrent/ConcurrentMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1085
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->e:Ljava/util/concurrent/ConcurrentMap;

    invoke-interface {v0, p1}, Ljava/util/concurrent/ConcurrentMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/b/b;

    if-eqz v0, :cond_0

    .line 1087
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/videocommon/b/b;->a(Lcom/tkay/expressad/videocommon/b/g$d;)V

    :cond_0
    return-void

    .line 1092
    :cond_1
    new-instance v0, Lcom/tkay/expressad/videocommon/b/b;

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/g;->e:Ljava/util/concurrent/ConcurrentMap;

    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/g;->g:Lcom/tkay/expressad/videocommon/b/k;

    invoke-direct {v0, v1, v2, p2, p1}, Lcom/tkay/expressad/videocommon/b/b;-><init>(Ljava/util/concurrent/ConcurrentMap;Lcom/tkay/expressad/videocommon/b/k;Lcom/tkay/expressad/videocommon/b/g$d;Ljava/lang/String;)V

    .line 1094
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/g;->e:Ljava/util/concurrent/ConcurrentMap;

    invoke-interface {v1, p1, v0}, Ljava/util/concurrent/ConcurrentMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1096
    invoke-static {p1, v0}, Lcom/tkay/expressad/videocommon/b/e;->a(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$c;)V

    return-void

    :cond_2
    if-eqz p2, :cond_3

    .line 1100
    invoke-interface {p2, p1}, Lcom/tkay/expressad/videocommon/b/g$d;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    return-void

    :catch_0
    move-exception v0

    if-eqz p2, :cond_4

    const-string v1, "downloadzip failed"

    .line 1105
    invoke-interface {p2, p1, v1}, Lcom/tkay/expressad/videocommon/b/g$d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 1107
    :cond_4
    sget-boolean p1, Lcom/tkay/expressad/b;->a:Z

    if-eqz p1, :cond_5

    .line 1108
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_5
    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 225
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v0

    const-string v1, "ending_page_source"

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1, p0}, Lcom/tkay/expressad/foundation/h/v;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 228
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method static synthetic b(Lcom/tkay/expressad/videocommon/b/g;)Ljava/util/concurrent/CopyOnWriteArrayList;
    .locals 0

    .line 21
    iget-object p0, p0, Lcom/tkay/expressad/videocommon/b/g;->d:Ljava/util/concurrent/CopyOnWriteArrayList;

    return-object p0
.end method

.method private b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$d;)V
    .locals 3

    .line 83
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->g:Lcom/tkay/expressad/videocommon/b/k;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/videocommon/b/k;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 84
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->e:Ljava/util/concurrent/ConcurrentMap;

    invoke-interface {v0, p1}, Ljava/util/concurrent/ConcurrentMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 85
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->e:Ljava/util/concurrent/ConcurrentMap;

    invoke-interface {v0, p1}, Ljava/util/concurrent/ConcurrentMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/expressad/videocommon/b/b;

    if-eqz v0, :cond_0

    .line 87
    invoke-virtual {v0, p2}, Lcom/tkay/expressad/videocommon/b/b;->a(Lcom/tkay/expressad/videocommon/b/g$d;)V

    :cond_0
    return-void

    .line 92
    :cond_1
    new-instance v0, Lcom/tkay/expressad/videocommon/b/b;

    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/g;->e:Ljava/util/concurrent/ConcurrentMap;

    iget-object v2, p0, Lcom/tkay/expressad/videocommon/b/g;->g:Lcom/tkay/expressad/videocommon/b/k;

    invoke-direct {v0, v1, v2, p2, p1}, Lcom/tkay/expressad/videocommon/b/b;-><init>(Ljava/util/concurrent/ConcurrentMap;Lcom/tkay/expressad/videocommon/b/k;Lcom/tkay/expressad/videocommon/b/g$d;Ljava/lang/String;)V

    .line 94
    iget-object v1, p0, Lcom/tkay/expressad/videocommon/b/g;->e:Ljava/util/concurrent/ConcurrentMap;

    invoke-interface {v1, p1, v0}, Ljava/util/concurrent/ConcurrentMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 96
    invoke-static {p1, v0}, Lcom/tkay/expressad/videocommon/b/e;->a(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$c;)V

    return-void

    :cond_2
    if-eqz p2, :cond_3

    .line 100
    invoke-interface {p2, p1}, Lcom/tkay/expressad/videocommon/b/g$d;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    return-void

    :catch_0
    move-exception v0

    if-eqz p2, :cond_4

    const-string v1, "downloadzip failed"

    .line 105
    invoke-interface {p2, p1, v1}, Lcom/tkay/expressad/videocommon/b/g$d;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 107
    :cond_4
    sget-boolean p1, Lcom/tkay/expressad/b;->a:Z

    if-eqz p1, :cond_5

    .line 108
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_5
    return-void
.end method

.method private c(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
    .locals 2

    .line 125
    :try_start_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->d:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 128
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->d:Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-virtual {v0, p1}, Ljava/util/concurrent/CopyOnWriteArrayList;->add(Ljava/lang/Object;)Z

    .line 2017
    sget-object v0, Lcom/tkay/expressad/videocommon/b/f$a;->a:Lcom/tkay/expressad/videocommon/b/f;

    .line 130
    new-instance v1, Lcom/tkay/expressad/videocommon/b/g$1;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/videocommon/b/g$1;-><init>(Lcom/tkay/expressad/videocommon/b/g;Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/f;->a(Lcom/tkay/expressad/foundation/g/g/a;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    .line 201
    sget-boolean p2, Lcom/tkay/expressad/b;->a:Z

    if-eqz p2, :cond_1

    .line 202
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    return-void
.end method

.method private d(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 71
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->h:Lcom/tkay/expressad/videocommon/b/h;

    if-eqz v0, :cond_0

    .line 72
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/videocommon/b/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    :cond_0
    return-object p1
.end method

.method private static e(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 209
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v0

    const-string v1, "ending_page_source"

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v1, ""

    invoke-static {v0, p0, v1}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 210
    instance-of v0, p0, Ljava/lang/String;

    if-eqz v0, :cond_0

    .line 211
    check-cast p0, Ljava/lang/String;

    .line 212
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/w;->b(Ljava/lang/String;)Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz v0, :cond_0

    return-object p0

    :catch_0
    move-exception p0

    .line 217
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method private static f(Ljava/lang/String;)J
    .locals 4

    const-wide/16 v0, 0x0

    .line 235
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v2

    const-string v3, "ending_page_save_time"

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v3, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v3

    invoke-static {v2, p0, v3}, Lcom/tkay/expressad/foundation/h/v;->b(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    if-eqz p0, :cond_0

    .line 236
    instance-of v2, p0, Ljava/lang/Long;

    if-eqz v2, :cond_0

    .line 237
    check-cast p0, Ljava/lang/Long;

    .line 238
    invoke-virtual {p0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-wide v0

    :catch_0
    move-exception p0

    .line 241
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return-wide v0
.end method

.method private static g(Ljava/lang/String;)V
    .locals 3

    .line 249
    :try_start_0
    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/b/b;->d()Landroid/content/Context;

    move-result-object v0

    const-string v1, "ending_page_save_time"

    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-static {v0, p0, v1}, Lcom/tkay/expressad/foundation/h/v;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception p0

    .line 251
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    return-void
.end method

.method private h(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 257
    invoke-virtual {p0, p1, v0}, Lcom/tkay/expressad/videocommon/b/g;->b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 64
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->g:Lcom/tkay/expressad/videocommon/b/k;

    if-eqz v0, :cond_0

    .line 65
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/videocommon/b/k;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
    .locals 0

    .line 118
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 1

    const/4 v0, 0x0

    .line 114
    check-cast v0, Lcom/tkay/expressad/videocommon/b/g$b;

    .line 1118
    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V

    return-void
.end method

.method public final b(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
    .locals 2

    .line 262
    :try_start_0
    sget-object v0, Landroid/util/Patterns;->WEB_URL:Ljava/util/regex/Pattern;

    invoke-virtual {v0, p1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/regex/Matcher;->matches()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1}, Landroid/webkit/URLUtil;->isValidUrl(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 263
    :cond_0
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 264
    invoke-virtual {v0}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v0

    .line 265
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 266
    invoke-virtual {v0}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, ".zip"

    invoke-virtual {v0, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 267
    move-object v0, p2

    check-cast v0, Lcom/tkay/expressad/videocommon/b/g$d;

    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/videocommon/b/g;->a(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$d;)V

    return-void

    .line 2118
    :cond_1
    invoke-direct {p0, p1, p2}, Lcom/tkay/expressad/videocommon/b/g;->c(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$a;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-void

    :catch_0
    move-exception v0

    .line 275
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_2
    if-eqz p2, :cond_3

    const-string v0, "The URL does not contain a path "

    .line 278
    invoke-interface {p2, p1, v0}, Lcom/tkay/expressad/videocommon/b/g$a;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method public final c(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 285
    :try_start_0
    sget-object v0, Landroid/util/Patterns;->WEB_URL:Ljava/util/regex/Pattern;

    invoke-virtual {v0, p1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/regex/Matcher;->matches()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1}, Landroid/webkit/URLUtil;->isValidUrl(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 286
    :cond_0
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v0

    .line 287
    invoke-virtual {v0}, Landroid/net/Uri;->getPath()Ljava/lang/String;

    move-result-object v1

    .line 288
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_4

    const-string v2, "urlDebug"

    .line 289
    invoke-virtual {v0, v2}, Landroid/net/Uri;->getQueryParameter(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    return-object p1

    .line 291
    :cond_1
    invoke-virtual {v1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v0

    const-string v1, ".zip"

    invoke-virtual {v0, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 292
    invoke-virtual {p0, p1}, Lcom/tkay/expressad/videocommon/b/g;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1

    .line 3071
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->h:Lcom/tkay/expressad/videocommon/b/h;

    if-eqz v0, :cond_3

    .line 3072
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/b/g;->h:Lcom/tkay/expressad/videocommon/b/h;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/videocommon/b/h;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :cond_3
    return-object p1

    :catch_0
    move-exception v0

    .line 299
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    return-object p1
.end method
